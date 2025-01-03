// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// vector_icons.h.template is used to generate vector_icons.h. Edit the former
// rather than the latter.

#ifndef COMPONENTS_TOOLBAR_VECTOR_ICONS_H_
#define COMPONENTS_TOOLBAR_VECTOR_ICONS_H_

namespace gfx {
struct VectorIcon;
}

#define VECTOR_ICON_TEMPLATE_H(icon_name) \
extern const gfx::VectorIcon icon_name;

namespace toolbar {

VECTOR_ICON_TEMPLATE_H(kStarIcon)
VECTOR_ICON_TEMPLATE_H(kProductIcon)
VECTOR_ICON_TEMPLATE_H(kHttpIcon)
VECTOR_ICON_TEMPLATE_H(kStarActiveIcon)
VECTOR_ICON_TEMPLATE_H(kHttpsInvalidIcon)
VECTOR_ICON_TEMPLATE_H(kOfflinePinIcon)
VECTOR_ICON_TEMPLATE_H(kHttpsValidIcon)
VECTOR_ICON_TEMPLATE_H(kFindInPageIcon)
VECTOR_ICON_TEMPLATE_H(kOpenInNewIcon)
VECTOR_ICON_TEMPLATE_H(kHttpsValidInChipIcon)

}

#undef VECTOR_ICON_TEMPLATE_H

#endif  // COMPONENTS_TOOLBAR_VECTOR_ICONS_H_
