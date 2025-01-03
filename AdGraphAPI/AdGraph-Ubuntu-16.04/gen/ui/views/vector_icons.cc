// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// vector_icons.cc.template is used to generate vector_icons.cc. Edit the former
// rather than the latter.

#include "ui/views/vector_icons.h"

#include "base/logging.h"
#include "ui/gfx/vector_icon_types.h"

#include "components/vector_icons/cc_macros.h"

namespace views {

using namespace gfx;

VECTOR_ICON_REP_TEMPLATE(kInfoPath, CANVAS_DIMENSIONS, 20,
MOVE_TO, 9, 14,
R_H_LINE_TO, 2,
R_V_LINE_TO, -4,
H_LINE_TO, 9,
R_V_LINE_TO, 4,
CLOSE,
R_MOVE_TO, 1, -12,
R_CUBIC_TO, -4.42f, 0, -8, 3.58f, -8, 8,
R_CUBIC_TO, 0, 4.42f, 3.58f, 8, 8, 8,
R_CUBIC_TO, 4.42f, 0, 8, -3.58f, 8, -8,
R_CUBIC_TO, 0, -4.42f, -3.58f, -8, -8, -8,
CLOSE,
R_MOVE_TO, 0, 14,
R_CUBIC_TO, -3.31f, 0, -6, -2.69f, -6, -6,
R_CUBIC_TO, 0, -3.31f, 2.69f, -6, 6, -6,
R_CUBIC_TO, 3.31f, 0, 6, 2.69f, 6, 6,
R_CUBIC_TO, 0, 3.31f, -2.69f, 6, -6, 6,
CLOSE,
MOVE_TO, 9, 8,
R_H_LINE_TO, 2,
V_LINE_TO, 6,
H_LINE_TO, 9,
R_V_LINE_TO, 2,
CLOSE)
VECTOR_ICON_TEMPLATE_CC(kInfoRepList, kInfoIcon, {kInfoPath, arraysize(kInfoPath)})
VECTOR_ICON_REP_TEMPLATE(kUninstallPath, CANVAS_DIMENSIONS, 20,
MOVE_TO, 13, 3,
V_LINE_TO, 2,
H_LINE_TO, 7,
R_V_LINE_TO, 1,
H_LINE_TO, 3,
R_V_LINE_TO, 2,
R_H_LINE_TO, 1,
R_V_LINE_TO, 11,
R_CUBIC_TO, 0, 1.1f, 0.9f, 2, 2, 2,
R_H_LINE_TO, 8,
R_CUBIC_TO, 1.1f, 0, 2, -0.9f, 2, -2,
V_LINE_TO, 5,
R_H_LINE_TO, 1,
V_LINE_TO, 3,
R_H_LINE_TO, -4,
CLOSE,
R_MOVE_TO, 1, 13,
H_LINE_TO, 6,
V_LINE_TO, 5,
R_H_LINE_TO, 8,
R_V_LINE_TO, 11,
CLOSE)
VECTOR_ICON_TEMPLATE_CC(kUninstallRepList, kUninstallIcon, {kUninstallPath, arraysize(kUninstallPath)})
VECTOR_ICON_REP_TEMPLATE(kPinPath, CANVAS_DIMENSIONS, 20,
MOVE_TO, 14.8f, 7.76f,
LINE_TO, 12.24f, 5.2f,
R_LINE_TO, -5.01f, 5.01f,
H_LINE_TO, 5.73f,
LINE_TO, 9.79f, 14.27f,
V_LINE_TO, 12.77f,
LINE_TO, 14.8f, 7.76f,
CLOSE,
R_MOVE_TO, 3.2f, 0.64f,
R_LINE_TO, -1.28f, 1.28f,
R_LINE_TO, -0.64f, -0.64f,
R_LINE_TO, -4.48f, 4.48f,
R_V_LINE_TO, 2.56f,
R_LINE_TO, -1.28f, 1.28f,
R_LINE_TO, -3.2f, -3.2f,
LINE_TO, 3.28f, 18,
H_LINE_TO, 2,
R_V_LINE_TO, -1.28f,
R_LINE_TO, 3.84f, -3.84f,
R_LINE_TO, -3.2f, -3.2f,
LINE_TO, 3.92f, 8.4f,
R_H_LINE_TO, 2.56f,
R_LINE_TO, 4.48f, -4.48f,
R_LINE_TO, -0.64f, -0.64f,
LINE_TO, 11.6f, 2,
LINE_TO, 18, 8.4f,
CLOSE)
VECTOR_ICON_TEMPLATE_CC(kPinRepList, kPinIcon, {kPinPath, arraysize(kPinPath)})
VECTOR_ICON_REP_TEMPLATE(kLaunchPath, CANVAS_DIMENSIONS, 20,
MOVE_TO, 16, 16,
H_LINE_TO, 4,
V_LINE_TO, 4,
R_H_LINE_TO, 6,
V_LINE_TO, 2,
H_LINE_TO, 4,
CUBIC_TO, 3, 2, 2, 3, 2, 4,
R_V_LINE_TO, 12,
R_CUBIC_TO, 0, 1, 1, 2, 2, 2,
R_H_LINE_TO, 12,
R_CUBIC_TO, 1, 0, 2, -1, 2, -2,
R_V_LINE_TO, -6,
R_H_LINE_TO, -2,
R_V_LINE_TO, 6,
CLOSE,
MOVE_TO, 12, 2,
R_V_LINE_TO, 2,
R_H_LINE_TO, 2.5f,
LINE_TO, 6, 12.5f,
LINE_TO, 7.5f, 14,
LINE_TO, 16, 5.5f,
V_LINE_TO, 8,
R_H_LINE_TO, 2,
V_LINE_TO, 2,
R_H_LINE_TO, -6,
CLOSE)
VECTOR_ICON_TEMPLATE_CC(kLaunchRepList, kLaunchIcon, {kLaunchPath, arraysize(kLaunchPath)})
VECTOR_ICON_REP_TEMPLATE(kIcClosePath, CANVAS_DIMENSIONS, 48,
MOVE_TO, 38, 12.82f,
LINE_TO, 35.18f, 10,
LINE_TO, 24, 21.18f,
LINE_TO, 12.82f, 10,
LINE_TO, 10, 12.82f,
LINE_TO, 21.18f, 24,
LINE_TO, 10, 35.18f,
LINE_TO, 12.82f, 38,
LINE_TO, 24, 26.82f,
LINE_TO, 35.18f, 38,
LINE_TO, 38, 35.18f,
LINE_TO, 26.82f, 24,
CLOSE)
VECTOR_ICON_REP_TEMPLATE(kIcClose24Path, CANVAS_DIMENSIONS, 24,
MOVE_TO, 19, 6.41f,
LINE_TO, 17.59f, 5,
LINE_TO, 12, 10.59f,
LINE_TO, 6.41f, 5,
LINE_TO, 5, 6.41f,
LINE_TO, 10.59f, 12,
LINE_TO, 5, 17.59f,
LINE_TO, 6.41f, 19,
LINE_TO, 12, 13.41f,
LINE_TO, 17.59f, 19,
LINE_TO, 19, 17.59f,
LINE_TO, 13.41f, 12,
CLOSE)
VECTOR_ICON_TEMPLATE_CC(kIcCloseRepList, kIcCloseIcon, {kIcClosePath, arraysize(kIcClosePath)}, {kIcClose24Path, arraysize(kIcClose24Path)})
VECTOR_ICON_REP_TEMPLATE(kMenuCheckPath, CANVAS_DIMENSIONS, 32,
MOVE_TO, 5, 18.78f,
R_LINE_TO, 2.53f, -2.57f,
R_LINE_TO, 4.48f, 4.63f,
LINE_TO, 25.48f, 7,
LINE_TO, 28, 9.59f,
LINE_TO, 12.02f, 26,
LINE_TO, 5, 18.78f,
CLOSE)
VECTOR_ICON_REP_TEMPLATE(kMenuCheck16Path, CANVAS_DIMENSIONS, 16,
MOVE_TO, 2, 9.22f,
R_LINE_TO, 1.36f, -1.38f,
R_LINE_TO, 2.4f, 2.48f,
R_LINE_TO, 7.2f, -7.4f,
R_LINE_TO, 1.35f, 1.39f,
R_LINE_TO, -8.55f, 8.78f,
LINE_TO, 2, 9.22f,
CLOSE)
VECTOR_ICON_TEMPLATE_CC(kMenuCheckRepList, kMenuCheckIcon, {kMenuCheckPath, arraysize(kMenuCheckPath)}, {kMenuCheck16Path, arraysize(kMenuCheck16Path)})
VECTOR_ICON_REP_TEMPLATE(kUnpinPath, CANVAS_DIMENSIONS, 20,
MOVE_TO, 18, 8.4f,
R_LINE_TO, -1.28f, 1.28f,
R_LINE_TO, -0.64f, -0.64f,
R_LINE_TO, -4.48f, 4.48f,
R_V_LINE_TO, 2.56f,
R_LINE_TO, -1.28f, 1.28f,
R_LINE_TO, -3.2f, -3.2f,
LINE_TO, 3.28f, 18,
H_LINE_TO, 2,
R_V_LINE_TO, -1.28f,
R_LINE_TO, 3.84f, -3.84f,
R_LINE_TO, -3.2f, -3.2f,
LINE_TO, 3.92f, 8.4f,
R_H_LINE_TO, 2.56f,
R_LINE_TO, 4.48f, -4.48f,
R_LINE_TO, -0.64f, -0.64f,
LINE_TO, 11.6f, 2,
CLOSE)
VECTOR_ICON_TEMPLATE_CC(kUnpinRepList, kUnpinIcon, {kUnpinPath, arraysize(kUnpinPath)})
VECTOR_ICON_REP_TEMPLATE(kCheckboxNormalPath, CANVAS_DIMENSIONS, 16,
MOVE_TO, 12.5f, 3.5f,
R_V_LINE_TO, 9,
R_H_LINE_TO, -9,
R_V_LINE_TO, -9,
H_LINE_TO, 12.5f,
MOVE_TO, 12.996f, 2,
H_LINE_TO, 3.004f,
CUBIC_TO, 2.449f, 2, 2, 2.449f, 2, 3.004f,
R_V_LINE_TO, 9.993f,
CUBIC_TO, 2, 13.551f, 2.449f, 14, 3.004f, 14,
R_H_LINE_TO, 9.993f,
CUBIC_TO, 13.551f, 14, 14, 13.551f, 14, 12.996f,
V_LINE_TO, 3.004f,
CUBIC_TO, 14, 2.449f, 13.551f, 2, 12.996f, 2,
LINE_TO, 12.996f, 2,
CLOSE)
VECTOR_ICON_TEMPLATE_CC(kCheckboxNormalRepList, kCheckboxNormalIcon, {kCheckboxNormalPath, arraysize(kCheckboxNormalPath)})
VECTOR_ICON_REP_TEMPLATE(kRadioButtonNormalPath, CANVAS_DIMENSIONS, 32,
CIRCLE, 16, 16, 14,
CIRCLE, 16, 16, 11)
VECTOR_ICON_TEMPLATE_CC(kRadioButtonNormalRepList, kRadioButtonNormalIcon, {kRadioButtonNormalPath, arraysize(kRadioButtonNormalPath)})
VECTOR_ICON_REP_TEMPLATE(kRadioButtonActivePath, CANVAS_DIMENSIONS, 32,
CIRCLE, 16, 16, 14,
CIRCLE, 16, 16, 11,
CIRCLE, 16, 16, 7)
VECTOR_ICON_TEMPLATE_CC(kRadioButtonActiveRepList, kRadioButtonActiveIcon, {kRadioButtonActivePath, arraysize(kRadioButtonActivePath)})
VECTOR_ICON_REP_TEMPLATE(kNewIncognitoWindowPath, CANVAS_DIMENSIONS, 20,
MOVE_TO, 8.13f, 2.04f,
LINE_TO, 10, 2.67f,
R_LINE_TO, 1.85f, -0.62f,
R_ARC_TO, 0.89f, 0.89f, 0, 0, 1, 1.11f, 0.54f,
LINE_TO, 15, 8,
H_LINE_TO, 5,
R_LINE_TO, 2.03f, -5.42f,
R_ARC_TO, 0.89f, 0.89f, 0, 0, 1, 1.11f, -0.54f,
CLOSE,
MOVE_TO, 18, 10,
H_LINE_TO, 2,
V_LINE_TO, 9,
R_H_LINE_TO, 16,
R_V_LINE_TO, 1,
CLOSE,
R_MOVE_TO, -4.06f, 7,
R_ARC_TO, 3.03f, 3.03f, 0, 0, 1, -3.03f, -2.75f,
R_CUBIC_TO, -0.84f, -0.53f, -1.55f, -0.2f, -1.8f, -0.01f,
CUBIC_TO, 8.97f, 15.78f, 7.67f, 17, 6.06f, 17,
CUBIC_TO, 4.37f, 17, 3, 15.65f, 3, 14,
R_CUBIC_TO, 0, -1.65f, 1.37f, -3, 3.06f, -3,
R_CUBIC_TO, 1.45f, 0, 2.65f, 0.98f, 2.98f, 2.31f,
R_ARC_TO, 2.45f, 2.45f, 0, 0, 1, 1.92f, 0.01f,
ARC_TO, 3.04f, 3.04f, 0, 0, 1, 13.94f, 11,
CUBIC_TO, 15.63f, 11, 17, 12.35f, 17, 14,
R_CUBIC_TO, 0, 1.65f, -1.37f, 3, -3.06f, 3,
CLOSE,
MOVE_TO, 14, 16,
R_ARC_TO, 2, 2, 0, 1, 0, 0, -4,
R_ARC_TO, 2, 2, 0, 0, 0, 0, 4,
CLOSE,
R_MOVE_TO, -8, 0,
R_ARC_TO, 2, 2, 0, 1, 0, 0, -4,
R_ARC_TO, 2, 2, 0, 0, 0, 0, 4,
CLOSE)
VECTOR_ICON_TEMPLATE_CC(kNewIncognitoWindowRepList, kNewIncognitoWindowIcon, {kNewIncognitoWindowPath, arraysize(kNewIncognitoWindowPath)})
VECTOR_ICON_REP_TEMPLATE(kSubmenuArrowPath, CANVAS_DIMENSIONS, 16,
FLIPS_IN_RTL,
MOVE_TO, 3, 16,
R_LINE_TO, 11, -8,
LINE_TO, 3, 0,
R_V_LINE_TO, 16,
CLOSE)
VECTOR_ICON_REP_TEMPLATE(kSubmenuArrow8Path, CANVAS_DIMENSIONS, 8,
FLIPS_IN_RTL,
MOVE_TO, 2, 8,
R_LINE_TO, 5, -4,
R_LINE_TO, -5, -4,
R_V_LINE_TO, 8,
CLOSE)
VECTOR_ICON_TEMPLATE_CC(kSubmenuArrowRepList, kSubmenuArrowIcon, {kSubmenuArrowPath, arraysize(kSubmenuArrowPath)}, {kSubmenuArrow8Path, arraysize(kSubmenuArrow8Path)})
VECTOR_ICON_REP_TEMPLATE(kNewWindowPath, CANVAS_DIMENSIONS, 20,
MOVE_TO, 15, 5,
R_H_LINE_TO, 3,
R_V_LINE_TO, 2,
R_H_LINE_TO, -3,
R_V_LINE_TO, 3,
R_H_LINE_TO, -2,
V_LINE_TO, 7,
R_H_LINE_TO, -3,
V_LINE_TO, 5,
R_H_LINE_TO, 3,
V_LINE_TO, 2,
R_H_LINE_TO, 2,
R_V_LINE_TO, 3,
CLOSE,
R_MOVE_TO, 1, 11,
R_V_LINE_TO, -4,
R_H_LINE_TO, 2,
R_V_LINE_TO, 4,
R_CUBIC_TO, 0, 1, -1, 2, -2, 2,
H_LINE_TO, 4,
R_CUBIC_TO, -1, 0, -2, -1, -2, -2,
V_LINE_TO, 4,
R_CUBIC_TO, 0, -1, 1, -2, 2, -2,
R_H_LINE_TO, 4,
R_V_LINE_TO, 2,
H_LINE_TO, 4,
R_V_LINE_TO, 12,
R_H_LINE_TO, 12,
CLOSE)
VECTOR_ICON_TEMPLATE_CC(kNewWindowRepList, kNewWindowIcon, {kNewWindowPath, arraysize(kNewWindowPath)})
VECTOR_ICON_REP_TEMPLATE(kMenuRadioSelectedPath, CANVAS_DIMENSIONS, 32,
CIRCLE, 16, 16, 14,
CIRCLE, 16, 16, 11,
CIRCLE, 16, 16, 7)
VECTOR_ICON_TEMPLATE_CC(kMenuRadioSelectedRepList, kMenuRadioSelectedIcon, {kMenuRadioSelectedPath, arraysize(kMenuRadioSelectedPath)})
VECTOR_ICON_REP_TEMPLATE(kNewTabPath, CANVAS_DIMENSIONS, 20,
MOVE_TO, 4, 2,
R_H_LINE_TO, 12,
R_ARC_TO, 2, 2, 0, 0, 1, 2, 2,
R_V_LINE_TO, 12,
R_ARC_TO, 2, 2, 0, 0, 1, -2, 2,
H_LINE_TO, 4,
R_ARC_TO, 2, 2, 0, 0, 1, -2, -2,
V_LINE_TO, 4,
R_ARC_TO, 2, 2, 0, 0, 1, 2, -2,
CLOSE,
R_MOVE_TO, 0, 2,
R_V_LINE_TO, 12,
R_H_LINE_TO, 12,
V_LINE_TO, 4,
H_LINE_TO, 4,
CLOSE,
R_MOVE_TO, 4, 0,
R_H_LINE_TO, 8,
R_V_LINE_TO, 4,
R_H_LINE_TO, -6,
R_ARC_TO, 2, 2, 0, 0, 1, -2, -2,
V_LINE_TO, 4,
CLOSE)
VECTOR_ICON_TEMPLATE_CC(kNewTabRepList, kNewTabIcon, {kNewTabPath, arraysize(kNewTabPath)})
VECTOR_ICON_REP_TEMPLATE(kClosePath, CANVAS_DIMENSIONS, 20,
MOVE_TO, 12.07f, 6.8f,
LINE_TO, 10, 8.87f,
LINE_TO, 7.93f, 6.8f,
LINE_TO, 6.8f, 7.93f,
LINE_TO, 8.87f, 10,
LINE_TO, 6.8f, 12.07f,
LINE_TO, 7.93f, 13.2f,
LINE_TO, 10, 11.13f,
R_LINE_TO, 2.07f, 2.07f,
R_LINE_TO, 1.13f, -1.13f,
LINE_TO, 11.13f, 10,
LINE_TO, 13.2f, 7.93f,
LINE_TO, 12.07f, 6.8f,
CLOSE,
MOVE_TO, 10, 2,
R_CUBIC_TO, -4.42f, 0, -8, 3.58f, -8, 8,
R_CUBIC_TO, 0, 4.42f, 3.58f, 8, 8, 8,
R_CUBIC_TO, 4.42f, 0, 8, -3.58f, 8, -8,
R_CUBIC_TO, 0, -4.42f, -3.58f, -8, -8, -8,
CLOSE,
R_MOVE_TO, 0, 14,
R_CUBIC_TO, -3.31f, 0, -6, -2.69f, -6, -6,
R_CUBIC_TO, 0, -3.31f, 2.69f, -6, 6, -6,
R_CUBIC_TO, 3.31f, 0, 6, 2.69f, 6, 6,
R_CUBIC_TO, 0, 3.31f, -2.69f, 6, -6, 6,
CLOSE)
VECTOR_ICON_TEMPLATE_CC(kCloseRepList, kCloseIcon, {kClosePath, arraysize(kClosePath)})
VECTOR_ICON_REP_TEMPLATE(kCheckboxActivePath, CANVAS_DIMENSIONS, 16,
MOVE_TO, 12.996f, 14,
H_LINE_TO, 3.004f,
CUBIC_TO, 2.449f, 14, 2, 13.551f, 2, 12.996f,
V_LINE_TO, 3.004f,
CUBIC_TO, 2, 2.449f, 2.449f, 2, 3.004f, 2,
R_H_LINE_TO, 9.993f,
CUBIC_TO, 13.551f, 2, 14, 2.449f, 14, 3.004f,
R_V_LINE_TO, 9.993f,
CUBIC_TO, 14, 13.551f, 13.551f, 14, 12.996f, 14,
CLOSE,
MOVE_TO, 6.5f, 11,
LINE_TO, 3.5f, 8,
LINE_TO, 4.5f, 7,
LINE_TO, 6.5f, 9,
LINE_TO, 11.5f, 4.5f,
LINE_TO, 12.5f, 5.5f,
CLOSE)
VECTOR_ICON_TEMPLATE_CC(kCheckboxActiveRepList, kCheckboxActiveIcon, {kCheckboxActivePath, arraysize(kCheckboxActivePath)})
VECTOR_ICON_REP_TEMPLATE(kOpenPath, CANVAS_DIMENSIONS, 20,
MOVE_TO, 6, 4,
R_V_LINE_TO, 2,
R_H_LINE_TO, 6.5f,
LINE_TO, 4, 14.5f,
LINE_TO, 5.5f, 16,
LINE_TO, 14, 7.5f,
V_LINE_TO, 14,
R_H_LINE_TO, 2,
V_LINE_TO, 4,
CLOSE)
VECTOR_ICON_TEMPLATE_CC(kOpenRepList, kOpenIcon, {kOpenPath, arraysize(kOpenPath)})
VECTOR_ICON_REP_TEMPLATE(kOptionsPath, CANVAS_DIMENSIONS, 20,
MOVE_TO, 14, 10,
R_ARC_TO, 2, 2, 0, 1, 1, 4, 0,
ARC_TO, 2, 2, 0, 0, 1, 14, 10,
CLOSE,
R_MOVE_TO, -2, 0,
R_ARC_TO, 2, 2, 0, 1, 1, -4, 0,
ARC_TO, 2, 2, 0, 0, 1, 12, 10,
CLOSE,
R_MOVE_TO, -6, 0,
R_ARC_TO, 2, 2, 0, 1, 1, -4, 0,
ARC_TO, 2, 2, 0, 0, 1, 6, 10,
CLOSE)
VECTOR_ICON_TEMPLATE_CC(kOptionsRepList, kOptionsIcon, {kOptionsPath, arraysize(kOptionsPath)})
VECTOR_ICON_REP_TEMPLATE(kMenuRadioEmptyPath, CANVAS_DIMENSIONS, 32,
CIRCLE, 16, 16, 14,
CIRCLE, 16, 16, 11)
VECTOR_ICON_TEMPLATE_CC(kMenuRadioEmptyRepList, kMenuRadioEmptyIcon, {kMenuRadioEmptyPath, arraysize(kMenuRadioEmptyPath)})

}