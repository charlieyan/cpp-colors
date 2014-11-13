#pragma once

#include "dotnet/dotnet_colors.h"
#include "wpf/wpf_colors.h"
#include "x11/x11_colors.h"

namespace colors {

  typedef dotnet::basic_colors<color> dotnet_colors;
  typedef wpf::basic_colors<color> wpf_colors;

//  template <typename ColorType>
//  struct basic_colors {
//    typedef ::colors::detail::dot_net::basic_colors<ColorType> type;
//  };
//
//
//  template <typename ColorType>
//  struct basic_colors {
//    typedef ::colors::detail::wpf::basic_colors<ColorType> type;
//  };
//
//
//  typedef basic_colors<::colors::color>::type colors;

} // namespace colors