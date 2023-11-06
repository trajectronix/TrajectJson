#pragma once

namespace traject::json {
namespace option {

static_assert(::std::is_integral_v<json_int_t>, "json_int_t must be of integer type");
static_assert(::std::is_floating_point_v<json_float_t>, "json_float_t must be of floating point type");
static_assert(::fast_io::operations::defines::print_freestanding_okay<::fast_io::details::dummy_buffer_output_stream<char>, json_string_view_t<char>>, "json_string_view_t must be printable");
static_assert(::fast_io::operations::defines::print_freestanding_okay<::fast_io::details::dummy_buffer_output_stream<char>, json_string_t<char>>, "json_string_t must be printable");
static_assert(::fast_io::single_character_constructible_strlike<char, json_string_t<char>> || ::fast_io::buffer_strlike<char, json_string_t<char>> || ::fast_io::strlike<char, json_string_t<char>>, "json_string_t must be strlike");


}  // namespace option
}  // namespace traject::json