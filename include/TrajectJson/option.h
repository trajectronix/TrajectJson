#pragma once

namespace traject::json {
namespace option {

// DOM

/*  json_allocator_t
 *  Currently, only fast_io::native_global_allocator is supported
 *  目前只支持 fast_io::native_global_allocator
 *  default: fast_io::native_global_allocator
 */
using json_allocator_t = ::fast_io::native_global_allocator;

/* json_int_t
*  The integer type of JSON
*  JSON 的整数类型
*  default: std::int_least64_t
*/
using json_int_t = ::std::int_least64_t;

/*  json_float_t
 *  The floating point type of JSON
 *  JSON 的浮点类型
 *  default: double
 */
using json_float_t = double;

/*  json_string_view_t
 *  The string_view type of JSON
 *  JSON 的字符串视图类型
 *  default: std::basic_string_view
 */
template <::std::integral char_type>
using json_string_view_t = ::std::basic_string_view<char_type>;

/*  json_string_t
 *  The string type of JSON
 *  JSON 的字符串类型 
 *  default: std::basic_string
 */
template <::std::integral char_type>
using json_string_t = ::std::basic_string<char_type>;

/*  json_vector_t
 *  The vector type of JSON
 *  JSON 的矢量类型 
 *  default: fast_io::vector
 */
template <typename T>
using json_vector_t = ::fast_io::vector<T>;

#if 0
/*  json_map_t
 *  The map type of JSON
 *  JSON 的map类型 
 *  default: ???
 */
#endif 

}  // namespace option
}  // namespace traject::json