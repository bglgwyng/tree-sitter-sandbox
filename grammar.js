module.exports = grammar({
  name: 'sandbox',
  externals: $ => [
    $.whitespace
  ],
  extras: $ => [$.whitespace],
  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => $._term,
    whitespace: $ => /\s+/,
    identifier: $ => /[a-z]+/,
    parethesized: $ =>
      seq(
        "(",
        $._term,
        ")"),
    arrow: $ =>
      prec.right(
        seq(
          $._term,
          "->",
          $._term)),
    apply: $ =>
      prec.left(
        1,
        seq(
          $._term, 
          $._term)),
    _term: $ => choice(
      $.identifier,
      $.parethesized,
      $.arrow,
      $.apply),
  }  
});
