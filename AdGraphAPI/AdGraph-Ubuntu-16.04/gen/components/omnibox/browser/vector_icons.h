// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// vector_icons.h.template is used to generate vector_icons.h. Edit the former
// rather than the latter.

#ifndef COMPONENTS_OMNIBOX_BROWSER_VECTOR_ICONS_H_
#define COMPONENTS_OMNIBOX_BROWSER_VECTOR_ICONS_H_

namespace gfx {
struct VectorIcon;
}

#define VECTOR_ICON_TEMPLATE_H(icon_name) \
extern const gfx::VectorIcon icon_name;

namespace omnibox {

VECTOR_ICON_TEMPLATE_H(kExtensionAppIcon)
VECTOR_ICON_TEMPLATE_H(kStarIcon)
VECTOR_ICON_TEMPLATE_H(kTouchableBookmarkIcon)
VECTOR_ICON_TEMPLATE_H(kKeywordSearchIcon)
VECTOR_ICON_TEMPLATE_H(kCalculatorIcon)
VECTOR_ICON_TEMPLATE_H(kTouchablePageIcon)
VECTOR_ICON_TEMPLATE_H(kTouchableClearIcon)
VECTOR_ICON_TEMPLATE_H(kSwitchIcon)
VECTOR_ICON_TEMPLATE_H(kTabIcon)
VECTOR_ICON_TEMPLATE_H(kBlankIcon)
VECTOR_ICON_TEMPLATE_H(kTouchableSearchIcon)
VECTOR_ICON_TEMPLATE_H(kHttpIcon)

}

#undef VECTOR_ICON_TEMPLATE_H

#endif  // COMPONENTS_OMNIBOX_BROWSER_VECTOR_ICONS_H_
