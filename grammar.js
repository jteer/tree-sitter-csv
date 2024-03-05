module.exports = grammar({
  name: "csv",
  rules: {
    source_file: ($) => repeat($.record),
    record: ($) =>
      seq(optional($.field), repeat($.field_pair), $._end_of_record),
    _end_of_record: ($) => choice("\n", "\r\n"),
    field_pair: ($) =>
      prec(1, seq(field("separator", $.delimiter), optional($.field))),
    delimiter: ($) => choice(",", "|", ";", "\\t"),
    field: ($) =>
      choice(
        $.null_value,
        $.na_value,
        $.boolean_value,
        $._numeric_value,
        $.string_value,
      ),

    null_value: ($) => /null|NULL/,
    na_value: ($) => /na|NA/,
    boolean_value: ($) => /true|TRUE|false|FALSE/,
    _numeric_value: ($) =>
      choice($.hexadecimal, $.floating_point, $.integer_value),
    integer_value: ($) => /\d+/,
    hexadecimal: ($) => /0[xX][\da-fA-F]+/,
    floating_point: ($) => /(0|[1-9]\d*)\.\d+/,
    string_value: ($) =>
      choice(
        seq($.quote_character, $.escaped_content, $.quote_character),
        $.non_escaped_text,
      ),
    quote_character: ($) => '"',
    escaped_content: ($) => repeat1(choice($.escaped_quote, $.text_content)),
    non_escaped_text: ($) => /[^\t,\n\r"\\;|]+/,
    text_content: ($) => /[^\\"\r\n]+/,
    escaped_quote: ($) => seq('""'),
  },
});
