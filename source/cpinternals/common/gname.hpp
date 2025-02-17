#pragma once
#include "stringpool.hpp"
#include <nlohmann/json.hpp>
#include <cpinternals/common/gstring.hpp>

namespace cp {

inline constexpr uint32_t gstring_name_category_tag = 'GNAM';

using gname         = typename gstring<gstring_name_category_tag>;
using literal_gname = typename literal_gstring<gstring_name_category_tag>;


constexpr literal_gname operator""_gn(const char* str, std::size_t len)
{
  return literal_gname{str};
}

} // namespace cp

