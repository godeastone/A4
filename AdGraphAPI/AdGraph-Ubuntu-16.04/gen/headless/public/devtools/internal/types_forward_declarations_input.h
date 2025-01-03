// This file is generated

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_INPUT_H_
#define HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_INPUT_H_

#include "base/values.h"

namespace headless {

namespace input {
class TouchPoint;
class DispatchKeyEventParams;
class DispatchKeyEventResult;
class DispatchMouseEventParams;
class DispatchMouseEventResult;
class DispatchTouchEventParams;
class DispatchTouchEventResult;
class EmulateTouchFromMouseEventParams;
class EmulateTouchFromMouseEventResult;
class SetIgnoreInputEventsParams;
class SetIgnoreInputEventsResult;
class SynthesizePinchGestureParams;
class SynthesizePinchGestureResult;
class SynthesizeScrollGestureParams;
class SynthesizeScrollGestureResult;
class SynthesizeTapGestureParams;
class SynthesizeTapGestureResult;

enum class GestureSourceType {
  DEFAULT,
  TOUCH,
  MOUSE
};

enum class DispatchKeyEventType {
  KEY_DOWN,
  KEY_UP,
  RAW_KEY_DOWN,
  CHAR
};

enum class DispatchMouseEventType {
  MOUSE_PRESSED,
  MOUSE_RELEASED,
  MOUSE_PTR_MOVED,
  MOUSE_WHEEL
};

enum class DispatchMouseEventButton {
  NONE,
  LEFT,
  MIDDLE,
  RIGHT
};

enum class DispatchTouchEventType {
  TOUCH_START,
  TOUCH_END,
  TOUCH_MOVE,
  TOUCH_CANCEL
};

enum class EmulateTouchFromMouseEventType {
  MOUSE_PRESSED,
  MOUSE_RELEASED,
  MOUSE_PTR_MOVED,
  MOUSE_WHEEL
};

enum class EmulateTouchFromMouseEventButton {
  NONE,
  LEFT,
  MIDDLE,
  RIGHT
};

}  // namespace input

}  // namespace headless

#endif  // HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_INPUT_H_
