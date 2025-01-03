// Copyright (c) 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   chrome/common/extensions/api/accessibility_private.json
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "base/values.h"
#include "chrome/common/extensions/api/accessibility_private.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace accessibility_private {
//
// Types
//

AlertInfo::AlertInfo()
 {}

AlertInfo::~AlertInfo() {}
AlertInfo::AlertInfo(AlertInfo&& rhs)
: message(std::move(rhs.message)){
}

AlertInfo& AlertInfo::operator=(AlertInfo&& rhs)
{
message = std::move(rhs.message);
return *this;
}

// static
bool AlertInfo::Populate(
    const base::Value& value, AlertInfo* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* message_value = NULL;
  if (!dict->GetWithoutPathExpansion("message", &message_value)) {
    return false;
  }
  {
    if (!message_value->GetAsString(&out->message)) {
      return false;
    }
  }

  return true;
}

// static
std::unique_ptr<AlertInfo> AlertInfo::FromValue(const base::Value& value) {
  std::unique_ptr<AlertInfo> out(new AlertInfo());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> AlertInfo::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("message", std::make_unique<base::Value>(this->message));


  return value;
}


ScreenRect::ScreenRect()
: left(0),
top(0),
width(0),
height(0) {}

ScreenRect::~ScreenRect() {}
ScreenRect::ScreenRect(ScreenRect&& rhs)
: left(rhs.left),
top(rhs.top),
width(rhs.width),
height(rhs.height){
}

ScreenRect& ScreenRect::operator=(ScreenRect&& rhs)
{
left = rhs.left;
top = rhs.top;
width = rhs.width;
height = rhs.height;
return *this;
}

// static
bool ScreenRect::Populate(
    const base::Value& value, ScreenRect* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* left_value = NULL;
  if (!dict->GetWithoutPathExpansion("left", &left_value)) {
    return false;
  }
  {
    if (!left_value->GetAsInteger(&out->left)) {
      return false;
    }
  }

  const base::Value* top_value = NULL;
  if (!dict->GetWithoutPathExpansion("top", &top_value)) {
    return false;
  }
  {
    if (!top_value->GetAsInteger(&out->top)) {
      return false;
    }
  }

  const base::Value* width_value = NULL;
  if (!dict->GetWithoutPathExpansion("width", &width_value)) {
    return false;
  }
  {
    if (!width_value->GetAsInteger(&out->width)) {
      return false;
    }
  }

  const base::Value* height_value = NULL;
  if (!dict->GetWithoutPathExpansion("height", &height_value)) {
    return false;
  }
  {
    if (!height_value->GetAsInteger(&out->height)) {
      return false;
    }
  }

  return true;
}

// static
std::unique_ptr<ScreenRect> ScreenRect::FromValue(const base::Value& value) {
  std::unique_ptr<ScreenRect> out(new ScreenRect());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> ScreenRect::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("left", std::make_unique<base::Value>(this->left));

  value->SetWithoutPathExpansion("top", std::make_unique<base::Value>(this->top));

  value->SetWithoutPathExpansion("width", std::make_unique<base::Value>(this->width));

  value->SetWithoutPathExpansion("height", std::make_unique<base::Value>(this->height));


  return value;
}


const char* ToString(Gesture enum_param) {
  switch (enum_param) {
    case GESTURE_CLICK:
      return "click";
    case GESTURE_SWIPELEFT1:
      return "swipeLeft1";
    case GESTURE_SWIPEUP1:
      return "swipeUp1";
    case GESTURE_SWIPERIGHT1:
      return "swipeRight1";
    case GESTURE_SWIPEDOWN1:
      return "swipeDown1";
    case GESTURE_SWIPELEFT2:
      return "swipeLeft2";
    case GESTURE_SWIPEUP2:
      return "swipeUp2";
    case GESTURE_SWIPERIGHT2:
      return "swipeRight2";
    case GESTURE_SWIPEDOWN2:
      return "swipeDown2";
    case GESTURE_SWIPELEFT3:
      return "swipeLeft3";
    case GESTURE_SWIPEUP3:
      return "swipeUp3";
    case GESTURE_SWIPERIGHT3:
      return "swipeRight3";
    case GESTURE_SWIPEDOWN3:
      return "swipeDown3";
    case GESTURE_SWIPELEFT4:
      return "swipeLeft4";
    case GESTURE_SWIPEUP4:
      return "swipeUp4";
    case GESTURE_SWIPERIGHT4:
      return "swipeRight4";
    case GESTURE_SWIPEDOWN4:
      return "swipeDown4";
    case GESTURE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

Gesture ParseGesture(const std::string& enum_string) {
  if (enum_string == "click")
    return GESTURE_CLICK;
  if (enum_string == "swipeLeft1")
    return GESTURE_SWIPELEFT1;
  if (enum_string == "swipeUp1")
    return GESTURE_SWIPEUP1;
  if (enum_string == "swipeRight1")
    return GESTURE_SWIPERIGHT1;
  if (enum_string == "swipeDown1")
    return GESTURE_SWIPEDOWN1;
  if (enum_string == "swipeLeft2")
    return GESTURE_SWIPELEFT2;
  if (enum_string == "swipeUp2")
    return GESTURE_SWIPEUP2;
  if (enum_string == "swipeRight2")
    return GESTURE_SWIPERIGHT2;
  if (enum_string == "swipeDown2")
    return GESTURE_SWIPEDOWN2;
  if (enum_string == "swipeLeft3")
    return GESTURE_SWIPELEFT3;
  if (enum_string == "swipeUp3")
    return GESTURE_SWIPEUP3;
  if (enum_string == "swipeRight3")
    return GESTURE_SWIPERIGHT3;
  if (enum_string == "swipeDown3")
    return GESTURE_SWIPEDOWN3;
  if (enum_string == "swipeLeft4")
    return GESTURE_SWIPELEFT4;
  if (enum_string == "swipeUp4")
    return GESTURE_SWIPEUP4;
  if (enum_string == "swipeRight4")
    return GESTURE_SWIPERIGHT4;
  if (enum_string == "swipeDown4")
    return GESTURE_SWIPEDOWN4;
  return GESTURE_NONE;
}


const char* ToString(SyntheticKeyboardEventType enum_param) {
  switch (enum_param) {
    case SYNTHETIC_KEYBOARD_EVENT_TYPE_KEYUP:
      return "keyup";
    case SYNTHETIC_KEYBOARD_EVENT_TYPE_KEYDOWN:
      return "keydown";
    case SYNTHETIC_KEYBOARD_EVENT_TYPE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

SyntheticKeyboardEventType ParseSyntheticKeyboardEventType(const std::string& enum_string) {
  if (enum_string == "keyup")
    return SYNTHETIC_KEYBOARD_EVENT_TYPE_KEYUP;
  if (enum_string == "keydown")
    return SYNTHETIC_KEYBOARD_EVENT_TYPE_KEYDOWN;
  return SYNTHETIC_KEYBOARD_EVENT_TYPE_NONE;
}


SyntheticKeyboardModifiers::SyntheticKeyboardModifiers()
 {}

SyntheticKeyboardModifiers::~SyntheticKeyboardModifiers() {}
SyntheticKeyboardModifiers::SyntheticKeyboardModifiers(SyntheticKeyboardModifiers&& rhs)
: ctrl(std::move(rhs.ctrl)),
alt(std::move(rhs.alt)),
search(std::move(rhs.search)),
shift(std::move(rhs.shift)){
}

SyntheticKeyboardModifiers& SyntheticKeyboardModifiers::operator=(SyntheticKeyboardModifiers&& rhs)
{
ctrl = std::move(rhs.ctrl);
alt = std::move(rhs.alt);
search = std::move(rhs.search);
shift = std::move(rhs.shift);
return *this;
}

// static
bool SyntheticKeyboardModifiers::Populate(
    const base::Value& value, SyntheticKeyboardModifiers* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* ctrl_value = NULL;
  if (dict->GetWithoutPathExpansion("ctrl", &ctrl_value)) {
    {
      bool temp;
      if (!ctrl_value->GetAsBoolean(&temp)) {
        out->ctrl.reset();
        return false;
      }
      else
        out->ctrl.reset(new bool(temp));
    }
  }

  const base::Value* alt_value = NULL;
  if (dict->GetWithoutPathExpansion("alt", &alt_value)) {
    {
      bool temp;
      if (!alt_value->GetAsBoolean(&temp)) {
        out->alt.reset();
        return false;
      }
      else
        out->alt.reset(new bool(temp));
    }
  }

  const base::Value* search_value = NULL;
  if (dict->GetWithoutPathExpansion("search", &search_value)) {
    {
      bool temp;
      if (!search_value->GetAsBoolean(&temp)) {
        out->search.reset();
        return false;
      }
      else
        out->search.reset(new bool(temp));
    }
  }

  const base::Value* shift_value = NULL;
  if (dict->GetWithoutPathExpansion("shift", &shift_value)) {
    {
      bool temp;
      if (!shift_value->GetAsBoolean(&temp)) {
        out->shift.reset();
        return false;
      }
      else
        out->shift.reset(new bool(temp));
    }
  }

  return true;
}

// static
std::unique_ptr<SyntheticKeyboardModifiers> SyntheticKeyboardModifiers::FromValue(const base::Value& value) {
  std::unique_ptr<SyntheticKeyboardModifiers> out(new SyntheticKeyboardModifiers());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> SyntheticKeyboardModifiers::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->ctrl.get()) {
    value->SetWithoutPathExpansion("ctrl", std::make_unique<base::Value>(*this->ctrl));

  }
  if (this->alt.get()) {
    value->SetWithoutPathExpansion("alt", std::make_unique<base::Value>(*this->alt));

  }
  if (this->search.get()) {
    value->SetWithoutPathExpansion("search", std::make_unique<base::Value>(*this->search));

  }
  if (this->shift.get()) {
    value->SetWithoutPathExpansion("shift", std::make_unique<base::Value>(*this->shift));

  }

  return value;
}


SyntheticKeyboardEvent::SyntheticKeyboardEvent()
: type(SYNTHETIC_KEYBOARD_EVENT_TYPE_NONE),
key_code(0) {}

SyntheticKeyboardEvent::~SyntheticKeyboardEvent() {}
SyntheticKeyboardEvent::SyntheticKeyboardEvent(SyntheticKeyboardEvent&& rhs)
: type(rhs.type),
key_code(rhs.key_code),
modifiers(std::move(rhs.modifiers)){
}

SyntheticKeyboardEvent& SyntheticKeyboardEvent::operator=(SyntheticKeyboardEvent&& rhs)
{
type = rhs.type;
key_code = rhs.key_code;
modifiers = std::move(rhs.modifiers);
return *this;
}

// static
bool SyntheticKeyboardEvent::Populate(
    const base::Value& value, SyntheticKeyboardEvent* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* type_value = NULL;
  if (!dict->GetWithoutPathExpansion("type", &type_value)) {
    return false;
  }
  {
    std::string synthetic_keyboard_event_type_as_string;
    if (!type_value->GetAsString(&synthetic_keyboard_event_type_as_string)) {
      return false;
    }
    out->type = ParseSyntheticKeyboardEventType(synthetic_keyboard_event_type_as_string);
    if (out->type == SYNTHETIC_KEYBOARD_EVENT_TYPE_NONE) {
      return false;
    }
  }

  const base::Value* key_code_value = NULL;
  if (!dict->GetWithoutPathExpansion("keyCode", &key_code_value)) {
    return false;
  }
  {
    if (!key_code_value->GetAsInteger(&out->key_code)) {
      return false;
    }
  }

  const base::Value* modifiers_value = NULL;
  if (dict->GetWithoutPathExpansion("modifiers", &modifiers_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!modifiers_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        std::unique_ptr<SyntheticKeyboardModifiers> temp(new SyntheticKeyboardModifiers());
        if (!SyntheticKeyboardModifiers::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->modifiers = std::move(temp);
      }
    }
  }

  return true;
}

// static
std::unique_ptr<SyntheticKeyboardEvent> SyntheticKeyboardEvent::FromValue(const base::Value& value) {
  std::unique_ptr<SyntheticKeyboardEvent> out(new SyntheticKeyboardEvent());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> SyntheticKeyboardEvent::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("type", std::make_unique<base::Value>(accessibility_private::ToString(this->type)));

  value->SetWithoutPathExpansion("keyCode", std::make_unique<base::Value>(this->key_code));

  if (this->modifiers.get()) {
    value->SetWithoutPathExpansion("modifiers", (this->modifiers)->ToValue());

  }

  return value;
}


const char* ToString(SelectToSpeakState enum_param) {
  switch (enum_param) {
    case SELECT_TO_SPEAK_STATE_SELECTING:
      return "selecting";
    case SELECT_TO_SPEAK_STATE_SPEAKING:
      return "speaking";
    case SELECT_TO_SPEAK_STATE_INACTIVE:
      return "inactive";
    case SELECT_TO_SPEAK_STATE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

SelectToSpeakState ParseSelectToSpeakState(const std::string& enum_string) {
  if (enum_string == "selecting")
    return SELECT_TO_SPEAK_STATE_SELECTING;
  if (enum_string == "speaking")
    return SELECT_TO_SPEAK_STATE_SPEAKING;
  if (enum_string == "inactive")
    return SELECT_TO_SPEAK_STATE_INACTIVE;
  return SELECT_TO_SPEAK_STATE_NONE;
}



//
// Functions
//

namespace SetNativeAccessibilityEnabled {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* enabled_value = NULL;
  if (args.Get(0, &enabled_value) &&
      !enabled_value->is_none()) {
    {
      if (!enabled_value->GetAsBoolean(&params->enabled)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


}  // namespace SetNativeAccessibilityEnabled

namespace SetFocusRing {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() < 1 || args.GetSize() > 2) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* rects_value = NULL;
  if (args.Get(0, &rects_value) &&
      !rects_value->is_none()) {
    {
      const base::ListValue* list = NULL;
      if (!rects_value->GetAsList(&list)) {
        return std::unique_ptr<Params>();
      }
      else {
        if (!json_schema_compiler::util::PopulateArrayFromList(*list, &params->rects)) {
          return std::unique_ptr<Params>();
        }
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* color_value = NULL;
  if (args.Get(1, &color_value) &&
      !color_value->is_none()) {
    {
      std::string temp;
      if (!color_value->GetAsString(&temp)) {
        params->color.reset();
        return std::unique_ptr<Params>();
      }
      else
        params->color.reset(new std::string(temp));
    }
  }

  return params;
}


}  // namespace SetFocusRing

namespace SetHighlights {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* rects_value = NULL;
  if (args.Get(0, &rects_value) &&
      !rects_value->is_none()) {
    {
      const base::ListValue* list = NULL;
      if (!rects_value->GetAsList(&list)) {
        return std::unique_ptr<Params>();
      }
      else {
        if (!json_schema_compiler::util::PopulateArrayFromList(*list, &params->rects)) {
          return std::unique_ptr<Params>();
        }
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* color_value = NULL;
  if (args.Get(1, &color_value) &&
      !color_value->is_none()) {
    {
      if (!color_value->GetAsString(&params->color)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


}  // namespace SetHighlights

namespace SetKeyboardListener {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* enabled_value = NULL;
  if (args.Get(0, &enabled_value) &&
      !enabled_value->is_none()) {
    {
      if (!enabled_value->GetAsBoolean(&params->enabled)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* capture_value = NULL;
  if (args.Get(1, &capture_value) &&
      !capture_value->is_none()) {
    {
      if (!capture_value->GetAsBoolean(&params->capture)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


}  // namespace SetKeyboardListener

namespace DarkenScreen {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* enabled_value = NULL;
  if (args.Get(0, &enabled_value) &&
      !enabled_value->is_none()) {
    {
      if (!enabled_value->GetAsBoolean(&params->enabled)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


}  // namespace DarkenScreen

namespace SetSwitchAccessKeys {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* key_codes_value = NULL;
  if (args.Get(0, &key_codes_value) &&
      !key_codes_value->is_none()) {
    {
      const base::ListValue* list = NULL;
      if (!key_codes_value->GetAsList(&list)) {
        return std::unique_ptr<Params>();
      }
      else {
        if (!json_schema_compiler::util::PopulateArrayFromList(*list, &params->key_codes)) {
          return std::unique_ptr<Params>();
        }
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


}  // namespace SetSwitchAccessKeys

namespace SetNativeChromeVoxArcSupportForCurrentApp {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* enabled_value = NULL;
  if (args.Get(0, &enabled_value) &&
      !enabled_value->is_none()) {
    {
      if (!enabled_value->GetAsBoolean(&params->enabled)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


}  // namespace SetNativeChromeVoxArcSupportForCurrentApp

namespace SendSyntheticKeyEvent {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* key_event_value = NULL;
  if (args.Get(0, &key_event_value) &&
      !key_event_value->is_none()) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!key_event_value->GetAsDictionary(&dictionary)) {
        return std::unique_ptr<Params>();
      }
      if (!SyntheticKeyboardEvent::Populate(*dictionary, &params->key_event)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


}  // namespace SendSyntheticKeyEvent

namespace OnSelectToSpeakStateChanged {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* state_value = NULL;
  if (args.Get(0, &state_value) &&
      !state_value->is_none()) {
    {
      std::string select_to_speak_state_as_string;
      if (!state_value->GetAsString(&select_to_speak_state_as_string)) {
        return std::unique_ptr<Params>();
      }
      params->state = ParseSelectToSpeakState(select_to_speak_state_as_string);
      if (params->state == SELECT_TO_SPEAK_STATE_NONE) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


}  // namespace OnSelectToSpeakStateChanged

//
// Events
//

namespace OnIntroduceChromeVox {

const char kEventName[] = "accessibilityPrivate.onIntroduceChromeVox";

std::unique_ptr<base::ListValue> Create() {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}

}  // namespace OnIntroduceChromeVox

namespace OnAccessibilityGesture {

const char kEventName[] = "accessibilityPrivate.onAccessibilityGesture";

std::unique_ptr<base::ListValue> Create(const Gesture& gesture) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(std::make_unique<base::Value>(accessibility_private::ToString(gesture)));

  return create_results;
}

}  // namespace OnAccessibilityGesture

namespace OnTwoFingerTouchStart {

const char kEventName[] = "accessibilityPrivate.onTwoFingerTouchStart";

std::unique_ptr<base::ListValue> Create() {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}

}  // namespace OnTwoFingerTouchStart

namespace OnTwoFingerTouchStop {

const char kEventName[] = "accessibilityPrivate.onTwoFingerTouchStop";

std::unique_ptr<base::ListValue> Create() {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}

}  // namespace OnTwoFingerTouchStop

namespace OnSelectToSpeakStateChangeRequested {

const char kEventName[] = "accessibilityPrivate.onSelectToSpeakStateChangeRequested";

std::unique_ptr<base::ListValue> Create() {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}

}  // namespace OnSelectToSpeakStateChangeRequested

}  // namespace accessibility_private
}  // namespace api
}  // namespace extensions

