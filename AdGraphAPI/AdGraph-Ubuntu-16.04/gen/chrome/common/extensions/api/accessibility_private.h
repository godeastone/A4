// Copyright (c) 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   chrome/common/extensions/api/accessibility_private.json
// DO NOT EDIT.

#ifndef CHROME_COMMON_EXTENSIONS_API_ACCESSIBILITY_PRIVATE_H__
#define CHROME_COMMON_EXTENSIONS_API_ACCESSIBILITY_PRIVATE_H__

#include <stdint.h>

#include <map>
#include <memory>
#include <string>
#include <vector>

#include "base/logging.h"
#include "base/values.h"

namespace extensions {
namespace api {
namespace accessibility_private {

//
// Types
//

// Information about an alert
struct AlertInfo {
  AlertInfo();
  ~AlertInfo();
  AlertInfo(AlertInfo&& rhs);
  AlertInfo& operator=(AlertInfo&& rhs);

  // Populates a AlertInfo object from a base::Value. Returns whether |out| was
  // successfully populated.
  static bool Populate(const base::Value& value, AlertInfo* out);

  // Creates a AlertInfo object from a base::Value, or NULL on failure.
  static std::unique_ptr<AlertInfo> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this AlertInfo object.
  std::unique_ptr<base::DictionaryValue> ToValue() const;

  // The message the alert is showing.
  std::string message;


 private:
  DISALLOW_COPY_AND_ASSIGN(AlertInfo);
};

// Bounding rectangle in global screen coordinates.
struct ScreenRect {
  ScreenRect();
  ~ScreenRect();
  ScreenRect(ScreenRect&& rhs);
  ScreenRect& operator=(ScreenRect&& rhs);

  // Populates a ScreenRect object from a base::Value. Returns whether |out| was
  // successfully populated.
  static bool Populate(const base::Value& value, ScreenRect* out);

  // Creates a ScreenRect object from a base::Value, or NULL on failure.
  static std::unique_ptr<ScreenRect> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ScreenRect object.
  std::unique_ptr<base::DictionaryValue> ToValue() const;

  // Left coordinate in global screen coordinates.
  int left;

  // Top coordinate in global screen coordinates.
  int top;

  // Width in pixels.
  int width;

  // Height in pixels.
  int height;


 private:
  DISALLOW_COPY_AND_ASSIGN(ScreenRect);
};

// Accessibility gestures fired by the touch exploration controller.
enum Gesture {
  GESTURE_NONE,
  GESTURE_CLICK,
  GESTURE_SWIPELEFT1,
  GESTURE_SWIPEUP1,
  GESTURE_SWIPERIGHT1,
  GESTURE_SWIPEDOWN1,
  GESTURE_SWIPELEFT2,
  GESTURE_SWIPEUP2,
  GESTURE_SWIPERIGHT2,
  GESTURE_SWIPEDOWN2,
  GESTURE_SWIPELEFT3,
  GESTURE_SWIPEUP3,
  GESTURE_SWIPERIGHT3,
  GESTURE_SWIPEDOWN3,
  GESTURE_SWIPELEFT4,
  GESTURE_SWIPEUP4,
  GESTURE_SWIPERIGHT4,
  GESTURE_SWIPEDOWN4,
  GESTURE_LAST = GESTURE_SWIPEDOWN4,
};


const char* ToString(Gesture as_enum);
Gesture ParseGesture(const std::string& as_string);

// The event to send
enum SyntheticKeyboardEventType {
  SYNTHETIC_KEYBOARD_EVENT_TYPE_NONE,
  SYNTHETIC_KEYBOARD_EVENT_TYPE_KEYUP,
  SYNTHETIC_KEYBOARD_EVENT_TYPE_KEYDOWN,
  SYNTHETIC_KEYBOARD_EVENT_TYPE_LAST = SYNTHETIC_KEYBOARD_EVENT_TYPE_KEYDOWN,
};


const char* ToString(SyntheticKeyboardEventType as_enum);
SyntheticKeyboardEventType ParseSyntheticKeyboardEventType(const std::string& as_string);

struct SyntheticKeyboardModifiers {
  SyntheticKeyboardModifiers();
  ~SyntheticKeyboardModifiers();
  SyntheticKeyboardModifiers(SyntheticKeyboardModifiers&& rhs);
  SyntheticKeyboardModifiers& operator=(SyntheticKeyboardModifiers&& rhs);

  // Populates a SyntheticKeyboardModifiers object from a base::Value. Returns
  // whether |out| was successfully populated.
  static bool Populate(const base::Value& value, SyntheticKeyboardModifiers* out);

  // Creates a SyntheticKeyboardModifiers object from a base::Value, or NULL on
  // failure.
  static std::unique_ptr<SyntheticKeyboardModifiers> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this SyntheticKeyboardModifiers object.
  std::unique_ptr<base::DictionaryValue> ToValue() const;

  // Control modifier.
  std::unique_ptr<bool> ctrl;

  // alt modifier.
  std::unique_ptr<bool> alt;

  // search modifier.
  std::unique_ptr<bool> search;

  // shift modifier.
  std::unique_ptr<bool> shift;


 private:
  DISALLOW_COPY_AND_ASSIGN(SyntheticKeyboardModifiers);
};

struct SyntheticKeyboardEvent {
  SyntheticKeyboardEvent();
  ~SyntheticKeyboardEvent();
  SyntheticKeyboardEvent(SyntheticKeyboardEvent&& rhs);
  SyntheticKeyboardEvent& operator=(SyntheticKeyboardEvent&& rhs);

  // Populates a SyntheticKeyboardEvent object from a base::Value. Returns
  // whether |out| was successfully populated.
  static bool Populate(const base::Value& value, SyntheticKeyboardEvent* out);

  // Creates a SyntheticKeyboardEvent object from a base::Value, or NULL on
  // failure.
  static std::unique_ptr<SyntheticKeyboardEvent> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this SyntheticKeyboardEvent object.
  std::unique_ptr<base::DictionaryValue> ToValue() const;

  SyntheticKeyboardEventType type;

  // Virtual key code, which is independent of the keyboard layout or modifier
  // state.
  int key_code;

  // Contains all active modifiers.
  std::unique_ptr<SyntheticKeyboardModifiers> modifiers;


 private:
  DISALLOW_COPY_AND_ASSIGN(SyntheticKeyboardEvent);
};

// The state of the Select-to-Speak extension
enum SelectToSpeakState {
  SELECT_TO_SPEAK_STATE_NONE,
  SELECT_TO_SPEAK_STATE_SELECTING,
  SELECT_TO_SPEAK_STATE_SPEAKING,
  SELECT_TO_SPEAK_STATE_INACTIVE,
  SELECT_TO_SPEAK_STATE_LAST = SELECT_TO_SPEAK_STATE_INACTIVE,
};


const char* ToString(SelectToSpeakState as_enum);
SelectToSpeakState ParseSelectToSpeakState(const std::string& as_string);


//
// Functions
//

namespace SetNativeAccessibilityEnabled {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // True if native accessibility support should be enabled.
  bool enabled;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace SetNativeAccessibilityEnabled

namespace SetFocusRing {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // Array of rectangles to draw the accessibility focus ring around.
  std::vector<ScreenRect> rects;

  // CSS-style hex color string beginning with # like #FF9982 or #EEE.
  std::unique_ptr<std::string> color;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace SetFocusRing

namespace SetHighlights {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // Array of rectangles to draw the highlight around.
  std::vector<ScreenRect> rects;

  // CSS-style hex color string beginning with # like #FF9982 or #EEE.
  std::string color;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace SetHighlights

namespace SetKeyboardListener {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // True if the caller wants to listen to key events; false to stop listening to
  // events. Note that there is only ever one extension listening to key events.
  bool enabled;

  // True if key events should be swallowed natively and not propagated if
  // preventDefault() gets called by the extension's background page.
  bool capture;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace SetKeyboardListener

namespace DarkenScreen {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // True to darken screen; false to undarken screen.
  bool enabled;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace DarkenScreen

namespace SetSwitchAccessKeys {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The key codes for the keys that will be captured.
  std::vector<int> key_codes;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace SetSwitchAccessKeys

namespace SetNativeChromeVoxArcSupportForCurrentApp {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // True for ChromeVox (native), false for TalkBack.
  bool enabled;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace SetNativeChromeVoxArcSupportForCurrentApp

namespace SendSyntheticKeyEvent {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The event to send.
  SyntheticKeyboardEvent key_event;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace SendSyntheticKeyEvent

namespace OnSelectToSpeakStateChanged {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  SelectToSpeakState state;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace OnSelectToSpeakStateChanged

//
// Events
//

namespace OnIntroduceChromeVox {

extern const char kEventName[];  // "accessibilityPrivate.onIntroduceChromeVox"

std::unique_ptr<base::ListValue> Create();
}  // namespace OnIntroduceChromeVox

namespace OnAccessibilityGesture {

extern const char kEventName[];  // "accessibilityPrivate.onAccessibilityGesture"

std::unique_ptr<base::ListValue> Create(const Gesture& gesture);
}  // namespace OnAccessibilityGesture

namespace OnTwoFingerTouchStart {

extern const char kEventName[];  // "accessibilityPrivate.onTwoFingerTouchStart"

std::unique_ptr<base::ListValue> Create();
}  // namespace OnTwoFingerTouchStart

namespace OnTwoFingerTouchStop {

extern const char kEventName[];  // "accessibilityPrivate.onTwoFingerTouchStop"

std::unique_ptr<base::ListValue> Create();
}  // namespace OnTwoFingerTouchStop

namespace OnSelectToSpeakStateChangeRequested {

extern const char kEventName[];  // "accessibilityPrivate.onSelectToSpeakStateChangeRequested"

std::unique_ptr<base::ListValue> Create();
}  // namespace OnSelectToSpeakStateChangeRequested

}  // namespace accessibility_private
}  // namespace api
}  // namespace extensions
#endif  // CHROME_COMMON_EXTENSIONS_API_ACCESSIBILITY_PRIVATE_H__
