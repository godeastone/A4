// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// vector_icons.h.template is used to generate vector_icons.h. Edit the former
// rather than the latter.

#ifndef UI_MESSAGE_CENTER_VECTOR_ICONS_H_
#define UI_MESSAGE_CENTER_VECTOR_ICONS_H_

#include "ui/message_center/message_center_export.h"

namespace gfx {
struct VectorIcon;
}

#define VECTOR_ICON_TEMPLATE_H(icon_name) \
MESSAGE_CENTER_EXPORT extern const gfx::VectorIcon icon_name;

namespace message_center {

VECTOR_ICON_TEMPLATE_H(kNotificationExpandLessIcon)
VECTOR_ICON_TEMPLATE_H(kProductIcon)
VECTOR_ICON_TEMPLATE_H(kNotificationInlineReplyIcon)
VECTOR_ICON_TEMPLATE_H(kNotificationExpandMoreIcon)
VECTOR_ICON_TEMPLATE_H(kNotificationSettingsButtonIcon)
VECTOR_ICON_TEMPLATE_H(kNotificationCloseButtonIcon)

}  // namespace message_center

#undef VECTOR_ICON_TEMPLATE_H

#endif  // UI_MESSAGE_CENTER_VECTOR_ICONS_H_
