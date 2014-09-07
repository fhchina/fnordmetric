/**
 * This file is part of the "FnordMetric" project
 *   Copyright (c) 2011-2014 Paul Asmuth, Google Inc.
 *
 * FnordMetric is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License v3.0. You should have received a
 * copy of the GNU General Public License along with this program. If not, see
 * <http://www.gnu.org/licenses/>.
 */
#ifndef _FNORDMETRIC_UI_LEGENDDEFINITION_H
#define _FNORDMETRIC_UI_LEGENDDEFINITION_H
#include <utility>
#include <string>
#include <vector>

namespace fnordmetric {
namespace ui {

class LegendDefinition {
public:

  enum kVerticalPosition {
    LEGEND_TOP = 0,
    LEGEND_BOTTOM = 1
  };

  enum kHorizontalPosition {
    LEGEND_LEFT = 0,
    LEGEND_RIGHT = 1
  };

  enum kPlacement {
    LEGEND_INSIDE = 0,
    LEGEND_OUTSIDE = 1
  };

  /**
   * Create a new legend definition
   *
   */
  LegendDefinition(
      kVerticalPosition vert_pos,
      kHorizontalPosition horiz_pos,
      kPlacement placement,
      const std::string& title);

protected:
  kVerticalPosition vert_pos_;
  kHorizontalPosition horiz_pos_;
  kPlacement placement_;
  const std::string title_;
};

}
}
#endif
