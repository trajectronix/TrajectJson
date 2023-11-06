#pragma once

namespace traject::json {
namespace option {

static_assert(::std::is_integral_v<json_int_t>, "json_int_t must be of integer type");
static_assert(::std::is_floating_point_v<json_float_t>, "json_float_t must be of floating point type");


}  // namespace option
}  // namespace traject::json