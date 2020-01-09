module.exports = grammar({
  name: 'sandbox',
  extras: $ => [],
  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => $._term,
    whitespace: $ => /\s+/,
    identifier: $ => /[a-z]+/,
    parethesized: $ =>
      seq(
        "(",
        optional($.whitespace),
        $._term,
        optional($.whitespace),
        ")"),
    arrow: $ =>
      prec.right(
        seq(
          $._term,
          optional($.whitespace),
          "->",
          optional($.whitespace),
          $._term)),
    apply: $ =>
      prec.left(
        1,
        seq(
          $._term, 
          repeat(
            seq(
            $.whitespace,
            $._term)))),
    _term: $ => choice(
      $.identifier,
      $.parethesized,
      $.arrow,
      $.apply),
  }  
});
