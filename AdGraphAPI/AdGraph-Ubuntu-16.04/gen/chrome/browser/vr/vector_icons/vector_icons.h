// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// vector_icons.h.template is used to generate vector_icons.h. Edit the former
// rather than the latter.

#ifndef CHROME_BROWSER_VR_VECTOR_ICONS_VECTOR_ICONS_H_
#define CHROME_BROWSER_VR_VECTOR_ICONS_VECTOR_ICONS_H_

namespace gfx {
struct VectorIcon;
}  // namespace gfx

namespace vr {

#define VECTOR_ICON_TEMPLATE_H(icon_name) \
extern const gfx::VectorIcon icon_name;

VECTOR_ICON_TEMPLATE_H(kRepositionIcon)
VECTOR_ICON_TEMPLATE_H(kMyLocationIcon)
VECTOR_ICON_TEMPLATE_H(kDaydreamControllerAppButtonIcon)
VECTOR_ICON_TEMPLATE_H(kSadTabIcon)
VECTOR_ICON_TEMPLATE_H(kRemoveCircleOutlineIcon)
VECTOR_ICON_TEMPLATE_H(kFileDownloadDoneIcon)
VECTOR_ICON_TEMPLATE_H(kDaydreamControllerHomeButtonIcon)
VECTOR_ICON_TEMPLATE_H(kMoreVertIcon)

#undef VECTOR_ICON_TEMPLATE_H

}  // namespace vr

#endif  // CHROME_BROWSER_VR_VECTOR_ICONS_VECTOR_ICONS_H_
