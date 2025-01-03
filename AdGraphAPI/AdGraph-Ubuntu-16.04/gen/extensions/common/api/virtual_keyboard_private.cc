// Copyright (c) 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/virtual_keyboard_private.json
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "base/values.h"
#include "extensions/common/api/virtual_keyboard_private.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace virtual_keyboard_private {
//
// Types
//

const char* ToString(VirtualKeyboardEventType enum_param) {
  switch (enum_param) {
    case VIRTUAL_KEYBOARD_EVENT_TYPE_KEYUP:
      return "keyup";
    case VIRTUAL_KEYBOARD_EVENT_TYPE_KEYDOWN:
      return "keydown";
    case VIRTUAL_KEYBOARD_EVENT_TYPE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

VirtualKeyboardEventType ParseVirtualKeyboardEventType(const std::string& enum_string) {
  if (enum_string == "keyup")
    return VIRTUAL_KEYBOARD_EVENT_TYPE_KEYUP;
  if (enum_string == "keydown")
    return VIRTUAL_KEYBOARD_EVENT_TYPE_KEYDOWN;
  return VIRTUAL_KEYBOARD_EVENT_TYPE_NONE;
}


VirtualKeyboardEvent::VirtualKeyboardEvent()
: type(VIRTUAL_KEYBOARD_EVENT_TYPE_NONE),
char_value(0),
key_code(0) {}

VirtualKeyboardEvent::~VirtualKeyboardEvent() {}
VirtualKeyboardEvent::VirtualKeyboardEvent(VirtualKeyboardEvent&& rhs)
: type(rhs.type),
char_value(rhs.char_value),
key_code(rhs.key_code),
key_name(std::move(rhs.key_name)),
modifiers(std::move(rhs.modifiers)){
}

VirtualKeyboardEvent& VirtualKeyboardEvent::operator=(VirtualKeyboardEvent&& rhs)
{
type = rhs.type;
char_value = rhs.char_value;
key_code = rhs.key_code;
key_name = std::move(rhs.key_name);
modifiers = std::move(rhs.modifiers);
return *this;
}

// static
bool VirtualKeyboardEvent::Populate(
    const base::Value& value, VirtualKeyboardEvent* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* type_value = NULL;
  if (!dict->GetWithoutPathExpansion("type", &type_value)) {
    return false;
  }
  {
    std::string virtual_keyboard_event_type_as_string;
    if (!type_value->GetAsString(&virtual_keyboard_event_type_as_string)) {
      return false;
    }
    out->type = ParseVirtualKeyboardEventType(virtual_keyboard_event_type_as_string);
    if (out->type == VIRTUAL_KEYBOARD_EVENT_TYPE_NONE) {
      return false;
    }
  }

  const base::Value* char_value_value = NULL;
  if (!dict->GetWithoutPathExpansion("charValue", &char_value_value)) {
    return false;
  }
  {
    if (!char_value_value->GetAsInteger(&out->char_value)) {
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

  const base::Value* key_name_value = NULL;
  if (!dict->GetWithoutPathExpansion("keyName", &key_name_value)) {
    return false;
  }
  {
    if (!key_name_value->GetAsString(&out->key_name)) {
      return false;
    }
  }

  const base::Value* modifiers_value = NULL;
  if (dict->GetWithoutPathExpansion("modifiers", &modifiers_value)) {
    {
      int temp;
      if (!modifiers_value->GetAsInteger(&temp)) {
        out->modifiers.reset();
        return false;
      }
      else
        out->modifiers.reset(new int(temp));
    }
  }

  return true;
}

// static
std::unique_ptr<VirtualKeyboardEvent> VirtualKeyboardEvent::FromValue(const base::Value& value) {
  std::unique_ptr<VirtualKeyboardEvent> out(new VirtualKeyboardEvent());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> VirtualKeyboardEvent::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("type", std::make_unique<base::Value>(virtual_keyboard_private::ToString(this->type)));

  value->SetWithoutPathExpansion("charValue", std::make_unique<base::Value>(this->char_value));

  value->SetWithoutPathExpansion("keyCode", std::make_unique<base::Value>(this->key_code));

  value->SetWithoutPathExpansion("keyName", std::make_unique<base::Value>(this->key_name));

  if (this->modifiers.get()) {
    value->SetWithoutPathExpansion("modifiers", std::make_unique<base::Value>(*this->modifiers));

  }

  return value;
}


const char* ToString(KeyboardMode enum_param) {
  switch (enum_param) {
    case KEYBOARD_MODE_FULL_WIDTH:
      return "FULL_WIDTH";
    case KEYBOARD_MODE_FLOATING:
      return "FLOATING";
    case KEYBOARD_MODE_FULLSCREEN:
      return "FULLSCREEN";
    case KEYBOARD_MODE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

KeyboardMode ParseKeyboardMode(const std::string& enum_string) {
  if (enum_string == "FULL_WIDTH")
    return KEYBOARD_MODE_FULL_WIDTH;
  if (enum_string == "FLOATING")
    return KEYBOARD_MODE_FLOATING;
  if (enum_string == "FULLSCREEN")
    return KEYBOARD_MODE_FULLSCREEN;
  return KEYBOARD_MODE_NONE;
}


const char* ToString(KeyboardState enum_param) {
  switch (enum_param) {
    case KEYBOARD_STATE_ENABLED:
      return "ENABLED";
    case KEYBOARD_STATE_DISABLED:
      return "DISABLED";
    case KEYBOARD_STATE_AUTO:
      return "AUTO";
    case KEYBOARD_STATE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

KeyboardState ParseKeyboardState(const std::string& enum_string) {
  if (enum_string == "ENABLED")
    return KEYBOARD_STATE_ENABLED;
  if (enum_string == "DISABLED")
    return KEYBOARD_STATE_DISABLED;
  if (enum_string == "AUTO")
    return KEYBOARD_STATE_AUTO;
  return KEYBOARD_STATE_NONE;
}


Bounds::Bounds()
: left(0),
top(0),
width(0),
height(0) {}

Bounds::~Bounds() {}
Bounds::Bounds(Bounds&& rhs)
: left(rhs.left),
top(rhs.top),
width(rhs.width),
height(rhs.height){
}

Bounds& Bounds::operator=(Bounds&& rhs)
{
left = rhs.left;
top = rhs.top;
width = rhs.width;
height = rhs.height;
return *this;
}

// static
bool Bounds::Populate(
    const base::Value& value, Bounds* out) {
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
std::unique_ptr<Bounds> Bounds::FromValue(const base::Value& value) {
  std::unique_ptr<Bounds> out(new Bounds());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> Bounds::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("left", std::make_unique<base::Value>(this->left));

  value->SetWithoutPathExpansion("top", std::make_unique<base::Value>(this->top));

  value->SetWithoutPathExpansion("width", std::make_unique<base::Value>(this->width));

  value->SetWithoutPathExpansion("height", std::make_unique<base::Value>(this->height));


  return value;
}


KeyboardConfig::KeyboardConfig()
: hotrodmode(false),
a11ymode(false) {}

KeyboardConfig::~KeyboardConfig() {}
KeyboardConfig::KeyboardConfig(KeyboardConfig&& rhs)
: layout(std::move(rhs.layout)),
hotrodmode(rhs.hotrodmode),
a11ymode(rhs.a11ymode),
features(std::move(rhs.features)){
}

KeyboardConfig& KeyboardConfig::operator=(KeyboardConfig&& rhs)
{
layout = std::move(rhs.layout);
hotrodmode = rhs.hotrodmode;
a11ymode = rhs.a11ymode;
features = std::move(rhs.features);
return *this;
}

// static
bool KeyboardConfig::Populate(
    const base::Value& value, KeyboardConfig* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* layout_value = NULL;
  if (!dict->GetWithoutPathExpansion("layout", &layout_value)) {
    return false;
  }
  {
    if (!layout_value->GetAsString(&out->layout)) {
      return false;
    }
  }

  const base::Value* hotrodmode_value = NULL;
  if (!dict->GetWithoutPathExpansion("hotrodmode", &hotrodmode_value)) {
    return false;
  }
  {
    if (!hotrodmode_value->GetAsBoolean(&out->hotrodmode)) {
      return false;
    }
  }

  const base::Value* a11ymode_value = NULL;
  if (!dict->GetWithoutPathExpansion("a11ymode", &a11ymode_value)) {
    return false;
  }
  {
    if (!a11ymode_value->GetAsBoolean(&out->a11ymode)) {
      return false;
    }
  }

  const base::Value* features_value = NULL;
  if (!dict->GetWithoutPathExpansion("features", &features_value)) {
    return false;
  }
  {
    const base::ListValue* list = NULL;
    if (!features_value->GetAsList(&list)) {
      return false;
    }
    else {
      if (!json_schema_compiler::util::PopulateArrayFromList(*list, &out->features)) {
        return false;
      }
    }
  }

  return true;
}

// static
std::unique_ptr<KeyboardConfig> KeyboardConfig::FromValue(const base::Value& value) {
  std::unique_ptr<KeyboardConfig> out(new KeyboardConfig());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> KeyboardConfig::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("layout", std::make_unique<base::Value>(this->layout));

  value->SetWithoutPathExpansion("hotrodmode", std::make_unique<base::Value>(this->hotrodmode));

  value->SetWithoutPathExpansion("a11ymode", std::make_unique<base::Value>(this->a11ymode));

  value->SetWithoutPathExpansion("features", json_schema_compiler::util::CreateValueFromArray(this->features));


  return value;
}


ContainerBehaviorOptions::ContainerBehaviorOptions()
: mode(KEYBOARD_MODE_NONE) {}

ContainerBehaviorOptions::~ContainerBehaviorOptions() {}
ContainerBehaviorOptions::ContainerBehaviorOptions(ContainerBehaviorOptions&& rhs)
: mode(rhs.mode),
bounds(std::move(rhs.bounds)){
}

ContainerBehaviorOptions& ContainerBehaviorOptions::operator=(ContainerBehaviorOptions&& rhs)
{
mode = rhs.mode;
bounds = std::move(rhs.bounds);
return *this;
}

// static
bool ContainerBehaviorOptions::Populate(
    const base::Value& value, ContainerBehaviorOptions* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* mode_value = NULL;
  if (!dict->GetWithoutPathExpansion("mode", &mode_value)) {
    return false;
  }
  {
    std::string keyboard_mode_as_string;
    if (!mode_value->GetAsString(&keyboard_mode_as_string)) {
      return false;
    }
    out->mode = ParseKeyboardMode(keyboard_mode_as_string);
    if (out->mode == KEYBOARD_MODE_NONE) {
      return false;
    }
  }

  const base::Value* bounds_value = NULL;
  if (dict->GetWithoutPathExpansion("bounds", &bounds_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!bounds_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        std::unique_ptr<Bounds> temp(new Bounds());
        if (!Bounds::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->bounds = std::move(temp);
      }
    }
  }

  return true;
}

// static
std::unique_ptr<ContainerBehaviorOptions> ContainerBehaviorOptions::FromValue(const base::Value& value) {
  std::unique_ptr<ContainerBehaviorOptions> out(new ContainerBehaviorOptions());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> ContainerBehaviorOptions::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("mode", std::make_unique<base::Value>(virtual_keyboard_private::ToString(this->mode)));

  if (this->bounds.get()) {
    value->SetWithoutPathExpansion("bounds", (this->bounds)->ToValue());

  }

  return value;
}



//
// Functions
//

namespace InsertText {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* text_value = NULL;
  if (args.Get(0, &text_value) &&
      !text_value->is_none()) {
    {
      if (!text_value->GetAsString(&params->text)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


std::unique_ptr<base::ListValue> Results::Create() {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace InsertText

namespace SendKeyEvent {

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
      if (!VirtualKeyboardEvent::Populate(*dictionary, &params->key_event)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


std::unique_ptr<base::ListValue> Results::Create() {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace SendKeyEvent

namespace HideKeyboard {

std::unique_ptr<base::ListValue> Results::Create() {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace HideKeyboard

namespace SetHotrodKeyboard {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* enable_value = NULL;
  if (args.Get(0, &enable_value) &&
      !enable_value->is_none()) {
    {
      if (!enable_value->GetAsBoolean(&params->enable)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


}  // namespace SetHotrodKeyboard

namespace LockKeyboard {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* lock_value = NULL;
  if (args.Get(0, &lock_value) &&
      !lock_value->is_none()) {
    {
      if (!lock_value->GetAsBoolean(&params->lock)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


}  // namespace LockKeyboard

namespace KeyboardLoaded {

std::unique_ptr<base::ListValue> Results::Create() {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace KeyboardLoaded

namespace GetKeyboardConfig {

std::unique_ptr<base::ListValue> Results::Create(const KeyboardConfig& config) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((config).ToValue());

  return create_results;
}
}  // namespace GetKeyboardConfig

namespace OpenSettings {

}  // namespace OpenSettings

namespace SetMode {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* mode_value = NULL;
  if (args.Get(0, &mode_value) &&
      !mode_value->is_none()) {
    {
      std::string keyboard_mode_as_string;
      if (!mode_value->GetAsString(&keyboard_mode_as_string)) {
        return std::unique_ptr<Params>();
      }
      params->mode = ParseKeyboardMode(keyboard_mode_as_string);
      if (params->mode == KEYBOARD_MODE_NONE) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


std::unique_ptr<base::ListValue> Results::Create() {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace SetMode

namespace SetContainerBehavior {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* options_value = NULL;
  if (args.Get(0, &options_value) &&
      !options_value->is_none()) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!options_value->GetAsDictionary(&dictionary)) {
        return std::unique_ptr<Params>();
      }
      if (!ContainerBehaviorOptions::Populate(*dictionary, &params->options)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


std::unique_ptr<base::ListValue> Results::Create() {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace SetContainerBehavior

namespace SetDraggableArea {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* bounds_value = NULL;
  if (args.Get(0, &bounds_value) &&
      !bounds_value->is_none()) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!bounds_value->GetAsDictionary(&dictionary)) {
        return std::unique_ptr<Params>();
      }
      if (!Bounds::Populate(*dictionary, &params->bounds)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


}  // namespace SetDraggableArea

namespace SetKeyboardState {

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
      std::string keyboard_state_as_string;
      if (!state_value->GetAsString(&keyboard_state_as_string)) {
        return std::unique_ptr<Params>();
      }
      params->state = ParseKeyboardState(keyboard_state_as_string);
      if (params->state == KEYBOARD_STATE_NONE) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


}  // namespace SetKeyboardState

//
// Events
//

namespace OnBoundsChanged {

const char kEventName[] = "virtualKeyboardPrivate.onBoundsChanged";

std::unique_ptr<base::ListValue> Create(const Bounds& bounds) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((bounds).ToValue());

  return create_results;
}

}  // namespace OnBoundsChanged

namespace OnKeyboardClosed {

const char kEventName[] = "virtualKeyboardPrivate.onKeyboardClosed";

std::unique_ptr<base::ListValue> Create() {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}

}  // namespace OnKeyboardClosed

namespace OnKeyboardConfigChanged {

const char kEventName[] = "virtualKeyboardPrivate.onKeyboardConfigChanged";

std::unique_ptr<base::ListValue> Create(const KeyboardConfig& config) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((config).ToValue());

  return create_results;
}

}  // namespace OnKeyboardConfigChanged

}  // namespace virtual_keyboard_private
}  // namespace api
}  // namespace extensions

