// Copyright (c) 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   chrome/common/extensions/api/input_ime.json
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "base/values.h"
#include "chrome/common/extensions/api/input_ime.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace input_ime {
//
// Types
//

const char* ToString(KeyboardEventType enum_param) {
  switch (enum_param) {
    case KEYBOARD_EVENT_TYPE_KEYUP:
      return "keyup";
    case KEYBOARD_EVENT_TYPE_KEYDOWN:
      return "keydown";
    case KEYBOARD_EVENT_TYPE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

KeyboardEventType ParseKeyboardEventType(const std::string& enum_string) {
  if (enum_string == "keyup")
    return KEYBOARD_EVENT_TYPE_KEYUP;
  if (enum_string == "keydown")
    return KEYBOARD_EVENT_TYPE_KEYDOWN;
  return KEYBOARD_EVENT_TYPE_NONE;
}


KeyboardEvent::KeyboardEvent()
: type(KEYBOARD_EVENT_TYPE_NONE) {}

KeyboardEvent::~KeyboardEvent() {}
KeyboardEvent::KeyboardEvent(KeyboardEvent&& rhs)
: type(rhs.type),
request_id(std::move(rhs.request_id)),
extension_id(std::move(rhs.extension_id)),
key(std::move(rhs.key)),
code(std::move(rhs.code)),
key_code(std::move(rhs.key_code)),
alt_key(std::move(rhs.alt_key)),
ctrl_key(std::move(rhs.ctrl_key)),
shift_key(std::move(rhs.shift_key)),
caps_lock(std::move(rhs.caps_lock)){
}

KeyboardEvent& KeyboardEvent::operator=(KeyboardEvent&& rhs)
{
type = rhs.type;
request_id = std::move(rhs.request_id);
extension_id = std::move(rhs.extension_id);
key = std::move(rhs.key);
code = std::move(rhs.code);
key_code = std::move(rhs.key_code);
alt_key = std::move(rhs.alt_key);
ctrl_key = std::move(rhs.ctrl_key);
shift_key = std::move(rhs.shift_key);
caps_lock = std::move(rhs.caps_lock);
return *this;
}

// static
bool KeyboardEvent::Populate(
    const base::Value& value, KeyboardEvent* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* type_value = NULL;
  if (!dict->GetWithoutPathExpansion("type", &type_value)) {
    return false;
  }
  {
    std::string keyboard_event_type_as_string;
    if (!type_value->GetAsString(&keyboard_event_type_as_string)) {
      return false;
    }
    out->type = ParseKeyboardEventType(keyboard_event_type_as_string);
    if (out->type == KEYBOARD_EVENT_TYPE_NONE) {
      return false;
    }
  }

  const base::Value* request_id_value = NULL;
  if (!dict->GetWithoutPathExpansion("requestId", &request_id_value)) {
    return false;
  }
  {
    if (!request_id_value->GetAsString(&out->request_id)) {
      return false;
    }
  }

  const base::Value* extension_id_value = NULL;
  if (dict->GetWithoutPathExpansion("extensionId", &extension_id_value)) {
    {
      std::string temp;
      if (!extension_id_value->GetAsString(&temp)) {
        out->extension_id.reset();
        return false;
      }
      else
        out->extension_id.reset(new std::string(temp));
    }
  }

  const base::Value* key_value = NULL;
  if (!dict->GetWithoutPathExpansion("key", &key_value)) {
    return false;
  }
  {
    if (!key_value->GetAsString(&out->key)) {
      return false;
    }
  }

  const base::Value* code_value = NULL;
  if (!dict->GetWithoutPathExpansion("code", &code_value)) {
    return false;
  }
  {
    if (!code_value->GetAsString(&out->code)) {
      return false;
    }
  }

  const base::Value* key_code_value = NULL;
  if (dict->GetWithoutPathExpansion("keyCode", &key_code_value)) {
    {
      int temp;
      if (!key_code_value->GetAsInteger(&temp)) {
        out->key_code.reset();
        return false;
      }
      else
        out->key_code.reset(new int(temp));
    }
  }

  const base::Value* alt_key_value = NULL;
  if (dict->GetWithoutPathExpansion("altKey", &alt_key_value)) {
    {
      bool temp;
      if (!alt_key_value->GetAsBoolean(&temp)) {
        out->alt_key.reset();
        return false;
      }
      else
        out->alt_key.reset(new bool(temp));
    }
  }

  const base::Value* ctrl_key_value = NULL;
  if (dict->GetWithoutPathExpansion("ctrlKey", &ctrl_key_value)) {
    {
      bool temp;
      if (!ctrl_key_value->GetAsBoolean(&temp)) {
        out->ctrl_key.reset();
        return false;
      }
      else
        out->ctrl_key.reset(new bool(temp));
    }
  }

  const base::Value* shift_key_value = NULL;
  if (dict->GetWithoutPathExpansion("shiftKey", &shift_key_value)) {
    {
      bool temp;
      if (!shift_key_value->GetAsBoolean(&temp)) {
        out->shift_key.reset();
        return false;
      }
      else
        out->shift_key.reset(new bool(temp));
    }
  }

  const base::Value* caps_lock_value = NULL;
  if (dict->GetWithoutPathExpansion("capsLock", &caps_lock_value)) {
    {
      bool temp;
      if (!caps_lock_value->GetAsBoolean(&temp)) {
        out->caps_lock.reset();
        return false;
      }
      else
        out->caps_lock.reset(new bool(temp));
    }
  }

  return true;
}

// static
std::unique_ptr<KeyboardEvent> KeyboardEvent::FromValue(const base::Value& value) {
  std::unique_ptr<KeyboardEvent> out(new KeyboardEvent());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> KeyboardEvent::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("type", std::make_unique<base::Value>(input_ime::ToString(this->type)));

  value->SetWithoutPathExpansion("requestId", std::make_unique<base::Value>(this->request_id));

  if (this->extension_id.get()) {
    value->SetWithoutPathExpansion("extensionId", std::make_unique<base::Value>(*this->extension_id));

  }
  value->SetWithoutPathExpansion("key", std::make_unique<base::Value>(this->key));

  value->SetWithoutPathExpansion("code", std::make_unique<base::Value>(this->code));

  if (this->key_code.get()) {
    value->SetWithoutPathExpansion("keyCode", std::make_unique<base::Value>(*this->key_code));

  }
  if (this->alt_key.get()) {
    value->SetWithoutPathExpansion("altKey", std::make_unique<base::Value>(*this->alt_key));

  }
  if (this->ctrl_key.get()) {
    value->SetWithoutPathExpansion("ctrlKey", std::make_unique<base::Value>(*this->ctrl_key));

  }
  if (this->shift_key.get()) {
    value->SetWithoutPathExpansion("shiftKey", std::make_unique<base::Value>(*this->shift_key));

  }
  if (this->caps_lock.get()) {
    value->SetWithoutPathExpansion("capsLock", std::make_unique<base::Value>(*this->caps_lock));

  }

  return value;
}


const char* ToString(InputContextType enum_param) {
  switch (enum_param) {
    case INPUT_CONTEXT_TYPE_TEXT:
      return "text";
    case INPUT_CONTEXT_TYPE_SEARCH:
      return "search";
    case INPUT_CONTEXT_TYPE_TEL:
      return "tel";
    case INPUT_CONTEXT_TYPE_URL:
      return "url";
    case INPUT_CONTEXT_TYPE_EMAIL:
      return "email";
    case INPUT_CONTEXT_TYPE_NUMBER:
      return "number";
    case INPUT_CONTEXT_TYPE_PASSWORD:
      return "password";
    case INPUT_CONTEXT_TYPE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

InputContextType ParseInputContextType(const std::string& enum_string) {
  if (enum_string == "text")
    return INPUT_CONTEXT_TYPE_TEXT;
  if (enum_string == "search")
    return INPUT_CONTEXT_TYPE_SEARCH;
  if (enum_string == "tel")
    return INPUT_CONTEXT_TYPE_TEL;
  if (enum_string == "url")
    return INPUT_CONTEXT_TYPE_URL;
  if (enum_string == "email")
    return INPUT_CONTEXT_TYPE_EMAIL;
  if (enum_string == "number")
    return INPUT_CONTEXT_TYPE_NUMBER;
  if (enum_string == "password")
    return INPUT_CONTEXT_TYPE_PASSWORD;
  return INPUT_CONTEXT_TYPE_NONE;
}


InputContext::InputContext()
: context_id(0),
type(INPUT_CONTEXT_TYPE_NONE),
auto_correct(false),
auto_complete(false),
spell_check(false),
should_do_learning(false) {}

InputContext::~InputContext() {}
InputContext::InputContext(InputContext&& rhs)
: context_id(rhs.context_id),
type(rhs.type),
auto_correct(rhs.auto_correct),
auto_complete(rhs.auto_complete),
spell_check(rhs.spell_check),
should_do_learning(rhs.should_do_learning){
}

InputContext& InputContext::operator=(InputContext&& rhs)
{
context_id = rhs.context_id;
type = rhs.type;
auto_correct = rhs.auto_correct;
auto_complete = rhs.auto_complete;
spell_check = rhs.spell_check;
should_do_learning = rhs.should_do_learning;
return *this;
}

// static
bool InputContext::Populate(
    const base::Value& value, InputContext* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* context_id_value = NULL;
  if (!dict->GetWithoutPathExpansion("contextID", &context_id_value)) {
    return false;
  }
  {
    if (!context_id_value->GetAsInteger(&out->context_id)) {
      return false;
    }
  }

  const base::Value* type_value = NULL;
  if (!dict->GetWithoutPathExpansion("type", &type_value)) {
    return false;
  }
  {
    std::string input_context_type_as_string;
    if (!type_value->GetAsString(&input_context_type_as_string)) {
      return false;
    }
    out->type = ParseInputContextType(input_context_type_as_string);
    if (out->type == INPUT_CONTEXT_TYPE_NONE) {
      return false;
    }
  }

  const base::Value* auto_correct_value = NULL;
  if (!dict->GetWithoutPathExpansion("autoCorrect", &auto_correct_value)) {
    return false;
  }
  {
    if (!auto_correct_value->GetAsBoolean(&out->auto_correct)) {
      return false;
    }
  }

  const base::Value* auto_complete_value = NULL;
  if (!dict->GetWithoutPathExpansion("autoComplete", &auto_complete_value)) {
    return false;
  }
  {
    if (!auto_complete_value->GetAsBoolean(&out->auto_complete)) {
      return false;
    }
  }

  const base::Value* spell_check_value = NULL;
  if (!dict->GetWithoutPathExpansion("spellCheck", &spell_check_value)) {
    return false;
  }
  {
    if (!spell_check_value->GetAsBoolean(&out->spell_check)) {
      return false;
    }
  }

  const base::Value* should_do_learning_value = NULL;
  if (!dict->GetWithoutPathExpansion("shouldDoLearning", &should_do_learning_value)) {
    return false;
  }
  {
    if (!should_do_learning_value->GetAsBoolean(&out->should_do_learning)) {
      return false;
    }
  }

  return true;
}

// static
std::unique_ptr<InputContext> InputContext::FromValue(const base::Value& value) {
  std::unique_ptr<InputContext> out(new InputContext());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> InputContext::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("contextID", std::make_unique<base::Value>(this->context_id));

  value->SetWithoutPathExpansion("type", std::make_unique<base::Value>(input_ime::ToString(this->type)));

  value->SetWithoutPathExpansion("autoCorrect", std::make_unique<base::Value>(this->auto_correct));

  value->SetWithoutPathExpansion("autoComplete", std::make_unique<base::Value>(this->auto_complete));

  value->SetWithoutPathExpansion("spellCheck", std::make_unique<base::Value>(this->spell_check));

  value->SetWithoutPathExpansion("shouldDoLearning", std::make_unique<base::Value>(this->should_do_learning));


  return value;
}


const char* ToString(MenuItemStyle enum_param) {
  switch (enum_param) {
    case MENU_ITEM_STYLE_CHECK:
      return "check";
    case MENU_ITEM_STYLE_RADIO:
      return "radio";
    case MENU_ITEM_STYLE_SEPARATOR:
      return "separator";
    case MENU_ITEM_STYLE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

MenuItemStyle ParseMenuItemStyle(const std::string& enum_string) {
  if (enum_string == "check")
    return MENU_ITEM_STYLE_CHECK;
  if (enum_string == "radio")
    return MENU_ITEM_STYLE_RADIO;
  if (enum_string == "separator")
    return MENU_ITEM_STYLE_SEPARATOR;
  return MENU_ITEM_STYLE_NONE;
}


MenuItem::MenuItem()
: style(MENU_ITEM_STYLE_NONE) {}

MenuItem::~MenuItem() {}
MenuItem::MenuItem(MenuItem&& rhs)
: id(std::move(rhs.id)),
label(std::move(rhs.label)),
style(rhs.style),
visible(std::move(rhs.visible)),
checked(std::move(rhs.checked)),
enabled(std::move(rhs.enabled)){
}

MenuItem& MenuItem::operator=(MenuItem&& rhs)
{
id = std::move(rhs.id);
label = std::move(rhs.label);
style = rhs.style;
visible = std::move(rhs.visible);
checked = std::move(rhs.checked);
enabled = std::move(rhs.enabled);
return *this;
}

// static
bool MenuItem::Populate(
    const base::Value& value, MenuItem* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  out->style = MENU_ITEM_STYLE_NONE;
  const base::Value* id_value = NULL;
  if (!dict->GetWithoutPathExpansion("id", &id_value)) {
    return false;
  }
  {
    if (!id_value->GetAsString(&out->id)) {
      return false;
    }
  }

  const base::Value* label_value = NULL;
  if (dict->GetWithoutPathExpansion("label", &label_value)) {
    {
      std::string temp;
      if (!label_value->GetAsString(&temp)) {
        out->label.reset();
        return false;
      }
      else
        out->label.reset(new std::string(temp));
    }
  }

  const base::Value* style_value = NULL;
  if (dict->GetWithoutPathExpansion("style", &style_value)) {
    {
      std::string menu_item_style_as_string;
      if (!style_value->GetAsString(&menu_item_style_as_string)) {
        return false;
      }
      out->style = ParseMenuItemStyle(menu_item_style_as_string);
      if (out->style == MENU_ITEM_STYLE_NONE) {
        return false;
      }
    }
    } else {
    out->style = MENU_ITEM_STYLE_NONE;
  }

  const base::Value* visible_value = NULL;
  if (dict->GetWithoutPathExpansion("visible", &visible_value)) {
    {
      bool temp;
      if (!visible_value->GetAsBoolean(&temp)) {
        out->visible.reset();
        return false;
      }
      else
        out->visible.reset(new bool(temp));
    }
  }

  const base::Value* checked_value = NULL;
  if (dict->GetWithoutPathExpansion("checked", &checked_value)) {
    {
      bool temp;
      if (!checked_value->GetAsBoolean(&temp)) {
        out->checked.reset();
        return false;
      }
      else
        out->checked.reset(new bool(temp));
    }
  }

  const base::Value* enabled_value = NULL;
  if (dict->GetWithoutPathExpansion("enabled", &enabled_value)) {
    {
      bool temp;
      if (!enabled_value->GetAsBoolean(&temp)) {
        out->enabled.reset();
        return false;
      }
      else
        out->enabled.reset(new bool(temp));
    }
  }

  return true;
}

// static
std::unique_ptr<MenuItem> MenuItem::FromValue(const base::Value& value) {
  std::unique_ptr<MenuItem> out(new MenuItem());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> MenuItem::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("id", std::make_unique<base::Value>(this->id));

  if (this->label.get()) {
    value->SetWithoutPathExpansion("label", std::make_unique<base::Value>(*this->label));

  }
  if (this->style != MENU_ITEM_STYLE_NONE) {
    value->SetWithoutPathExpansion("style", std::make_unique<base::Value>(input_ime::ToString(this->style)));

  }
  if (this->visible.get()) {
    value->SetWithoutPathExpansion("visible", std::make_unique<base::Value>(*this->visible));

  }
  if (this->checked.get()) {
    value->SetWithoutPathExpansion("checked", std::make_unique<base::Value>(*this->checked));

  }
  if (this->enabled.get()) {
    value->SetWithoutPathExpansion("enabled", std::make_unique<base::Value>(*this->enabled));

  }

  return value;
}


const char* ToString(UnderlineStyle enum_param) {
  switch (enum_param) {
    case UNDERLINE_STYLE_UNDERLINE:
      return "underline";
    case UNDERLINE_STYLE_DOUBLEUNDERLINE:
      return "doubleUnderline";
    case UNDERLINE_STYLE_NOUNDERLINE:
      return "noUnderline";
    case UNDERLINE_STYLE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

UnderlineStyle ParseUnderlineStyle(const std::string& enum_string) {
  if (enum_string == "underline")
    return UNDERLINE_STYLE_UNDERLINE;
  if (enum_string == "doubleUnderline")
    return UNDERLINE_STYLE_DOUBLEUNDERLINE;
  if (enum_string == "noUnderline")
    return UNDERLINE_STYLE_NOUNDERLINE;
  return UNDERLINE_STYLE_NONE;
}


const char* ToString(WindowPosition enum_param) {
  switch (enum_param) {
    case WINDOW_POSITION_CURSOR:
      return "cursor";
    case WINDOW_POSITION_COMPOSITION:
      return "composition";
    case WINDOW_POSITION_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

WindowPosition ParseWindowPosition(const std::string& enum_string) {
  if (enum_string == "cursor")
    return WINDOW_POSITION_CURSOR;
  if (enum_string == "composition")
    return WINDOW_POSITION_COMPOSITION;
  return WINDOW_POSITION_NONE;
}


const char* ToString(ScreenType enum_param) {
  switch (enum_param) {
    case SCREEN_TYPE_NORMAL:
      return "normal";
    case SCREEN_TYPE_LOGIN:
      return "login";
    case SCREEN_TYPE_LOCK:
      return "lock";
    case SCREEN_TYPE_SECONDARY_LOGIN:
      return "secondary-login";
    case SCREEN_TYPE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

ScreenType ParseScreenType(const std::string& enum_string) {
  if (enum_string == "normal")
    return SCREEN_TYPE_NORMAL;
  if (enum_string == "login")
    return SCREEN_TYPE_LOGIN;
  if (enum_string == "lock")
    return SCREEN_TYPE_LOCK;
  if (enum_string == "secondary-login")
    return SCREEN_TYPE_SECONDARY_LOGIN;
  return SCREEN_TYPE_NONE;
}


const char* ToString(CallbackStyle enum_param) {
  switch (enum_param) {
    case CALLBACK_STYLE_ASYNC:
      return "async";
    case CALLBACK_STYLE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

CallbackStyle ParseCallbackStyle(const std::string& enum_string) {
  if (enum_string == "async")
    return CALLBACK_STYLE_ASYNC;
  return CALLBACK_STYLE_NONE;
}


const char* ToString(MouseButton enum_param) {
  switch (enum_param) {
    case MOUSE_BUTTON_LEFT:
      return "left";
    case MOUSE_BUTTON_MIDDLE:
      return "middle";
    case MOUSE_BUTTON_RIGHT:
      return "right";
    case MOUSE_BUTTON_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

MouseButton ParseMouseButton(const std::string& enum_string) {
  if (enum_string == "left")
    return MOUSE_BUTTON_LEFT;
  if (enum_string == "middle")
    return MOUSE_BUTTON_MIDDLE;
  if (enum_string == "right")
    return MOUSE_BUTTON_RIGHT;
  return MOUSE_BUTTON_NONE;
}


const char* ToString(WindowType enum_param) {
  switch (enum_param) {
    case WINDOW_TYPE_NORMAL:
      return "normal";
    case WINDOW_TYPE_FOLLOWCURSOR:
      return "followCursor";
    case WINDOW_TYPE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

WindowType ParseWindowType(const std::string& enum_string) {
  if (enum_string == "normal")
    return WINDOW_TYPE_NORMAL;
  if (enum_string == "followCursor")
    return WINDOW_TYPE_FOLLOWCURSOR;
  return WINDOW_TYPE_NONE;
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


CreateWindowOptions::CreateWindowOptions()
: window_type(WINDOW_TYPE_NONE) {}

CreateWindowOptions::~CreateWindowOptions() {}
CreateWindowOptions::CreateWindowOptions(CreateWindowOptions&& rhs)
: window_type(rhs.window_type),
url(std::move(rhs.url)),
bounds(std::move(rhs.bounds)){
}

CreateWindowOptions& CreateWindowOptions::operator=(CreateWindowOptions&& rhs)
{
window_type = rhs.window_type;
url = std::move(rhs.url);
bounds = std::move(rhs.bounds);
return *this;
}

// static
bool CreateWindowOptions::Populate(
    const base::Value& value, CreateWindowOptions* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* window_type_value = NULL;
  if (!dict->GetWithoutPathExpansion("windowType", &window_type_value)) {
    return false;
  }
  {
    std::string window_type_as_string;
    if (!window_type_value->GetAsString(&window_type_as_string)) {
      return false;
    }
    out->window_type = ParseWindowType(window_type_as_string);
    if (out->window_type == WINDOW_TYPE_NONE) {
      return false;
    }
  }

  const base::Value* url_value = NULL;
  if (dict->GetWithoutPathExpansion("url", &url_value)) {
    {
      std::string temp;
      if (!url_value->GetAsString(&temp)) {
        out->url.reset();
        return false;
      }
      else
        out->url.reset(new std::string(temp));
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
std::unique_ptr<CreateWindowOptions> CreateWindowOptions::FromValue(const base::Value& value) {
  std::unique_ptr<CreateWindowOptions> out(new CreateWindowOptions());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> CreateWindowOptions::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("windowType", std::make_unique<base::Value>(input_ime::ToString(this->window_type)));

  if (this->url.get()) {
    value->SetWithoutPathExpansion("url", std::make_unique<base::Value>(*this->url));

  }
  if (this->bounds.get()) {
    value->SetWithoutPathExpansion("bounds", (this->bounds)->ToValue());

  }

  return value;
}



//
// Functions
//

namespace SetComposition {

Params::Parameters::SegmentsType::SegmentsType()
: start(0),
end(0),
style(UNDERLINE_STYLE_NONE) {}

Params::Parameters::SegmentsType::~SegmentsType() {}
Params::Parameters::SegmentsType::SegmentsType(SegmentsType&& rhs)
: start(rhs.start),
end(rhs.end),
style(rhs.style){
}

Params::Parameters::SegmentsType& Params::Parameters::SegmentsType::operator=(SegmentsType&& rhs)
{
start = rhs.start;
end = rhs.end;
style = rhs.style;
return *this;
}

// static
bool Params::Parameters::SegmentsType::Populate(
    const base::Value& value, SegmentsType* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* start_value = NULL;
  if (!dict->GetWithoutPathExpansion("start", &start_value)) {
    return false;
  }
  {
    if (!start_value->GetAsInteger(&out->start)) {
      return false;
    }
  }

  const base::Value* end_value = NULL;
  if (!dict->GetWithoutPathExpansion("end", &end_value)) {
    return false;
  }
  {
    if (!end_value->GetAsInteger(&out->end)) {
      return false;
    }
  }

  const base::Value* style_value = NULL;
  if (!dict->GetWithoutPathExpansion("style", &style_value)) {
    return false;
  }
  {
    std::string underline_style_as_string;
    if (!style_value->GetAsString(&underline_style_as_string)) {
      return false;
    }
    out->style = ParseUnderlineStyle(underline_style_as_string);
    if (out->style == UNDERLINE_STYLE_NONE) {
      return false;
    }
  }

  return true;
}




Params::Parameters::Parameters()
: context_id(0),
cursor(0) {}

Params::Parameters::~Parameters() {}
Params::Parameters::Parameters(Parameters&& rhs)
: context_id(rhs.context_id),
text(std::move(rhs.text)),
selection_start(std::move(rhs.selection_start)),
selection_end(std::move(rhs.selection_end)),
cursor(rhs.cursor),
segments(std::move(rhs.segments)){
}

Params::Parameters& Params::Parameters::operator=(Parameters&& rhs)
{
context_id = rhs.context_id;
text = std::move(rhs.text);
selection_start = std::move(rhs.selection_start);
selection_end = std::move(rhs.selection_end);
cursor = rhs.cursor;
segments = std::move(rhs.segments);
return *this;
}

// static
bool Params::Parameters::Populate(
    const base::Value& value, Parameters* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* context_id_value = NULL;
  if (!dict->GetWithoutPathExpansion("contextID", &context_id_value)) {
    return false;
  }
  {
    if (!context_id_value->GetAsInteger(&out->context_id)) {
      return false;
    }
  }

  const base::Value* text_value = NULL;
  if (!dict->GetWithoutPathExpansion("text", &text_value)) {
    return false;
  }
  {
    if (!text_value->GetAsString(&out->text)) {
      return false;
    }
  }

  const base::Value* selection_start_value = NULL;
  if (dict->GetWithoutPathExpansion("selectionStart", &selection_start_value)) {
    {
      int temp;
      if (!selection_start_value->GetAsInteger(&temp)) {
        out->selection_start.reset();
        return false;
      }
      else
        out->selection_start.reset(new int(temp));
    }
  }

  const base::Value* selection_end_value = NULL;
  if (dict->GetWithoutPathExpansion("selectionEnd", &selection_end_value)) {
    {
      int temp;
      if (!selection_end_value->GetAsInteger(&temp)) {
        out->selection_end.reset();
        return false;
      }
      else
        out->selection_end.reset(new int(temp));
    }
  }

  const base::Value* cursor_value = NULL;
  if (!dict->GetWithoutPathExpansion("cursor", &cursor_value)) {
    return false;
  }
  {
    if (!cursor_value->GetAsInteger(&out->cursor)) {
      return false;
    }
  }

  const base::Value* segments_value = NULL;
  if (dict->GetWithoutPathExpansion("segments", &segments_value)) {
    {
      const base::ListValue* list = NULL;
      if (!segments_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->segments)) {
          return false;
        }
      }
    }
  }

  return true;
}


Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* parameters_value = NULL;
  if (args.Get(0, &parameters_value) &&
      !parameters_value->is_none()) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!parameters_value->GetAsDictionary(&dictionary)) {
        return std::unique_ptr<Params>();
      }
      if (!Parameters::Populate(*dictionary, &params->parameters)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


std::unique_ptr<base::ListValue> Results::Create(bool success) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(std::make_unique<base::Value>(success));

  return create_results;
}
}  // namespace SetComposition

namespace ClearComposition {

Params::Parameters::Parameters()
: context_id(0) {}

Params::Parameters::~Parameters() {}
Params::Parameters::Parameters(Parameters&& rhs)
: context_id(rhs.context_id){
}

Params::Parameters& Params::Parameters::operator=(Parameters&& rhs)
{
context_id = rhs.context_id;
return *this;
}

// static
bool Params::Parameters::Populate(
    const base::Value& value, Parameters* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* context_id_value = NULL;
  if (!dict->GetWithoutPathExpansion("contextID", &context_id_value)) {
    return false;
  }
  {
    if (!context_id_value->GetAsInteger(&out->context_id)) {
      return false;
    }
  }

  return true;
}


Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* parameters_value = NULL;
  if (args.Get(0, &parameters_value) &&
      !parameters_value->is_none()) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!parameters_value->GetAsDictionary(&dictionary)) {
        return std::unique_ptr<Params>();
      }
      if (!Parameters::Populate(*dictionary, &params->parameters)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


std::unique_ptr<base::ListValue> Results::Create(bool success) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(std::make_unique<base::Value>(success));

  return create_results;
}
}  // namespace ClearComposition

namespace CommitText {

Params::Parameters::Parameters()
: context_id(0) {}

Params::Parameters::~Parameters() {}
Params::Parameters::Parameters(Parameters&& rhs)
: context_id(rhs.context_id),
text(std::move(rhs.text)){
}

Params::Parameters& Params::Parameters::operator=(Parameters&& rhs)
{
context_id = rhs.context_id;
text = std::move(rhs.text);
return *this;
}

// static
bool Params::Parameters::Populate(
    const base::Value& value, Parameters* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* context_id_value = NULL;
  if (!dict->GetWithoutPathExpansion("contextID", &context_id_value)) {
    return false;
  }
  {
    if (!context_id_value->GetAsInteger(&out->context_id)) {
      return false;
    }
  }

  const base::Value* text_value = NULL;
  if (!dict->GetWithoutPathExpansion("text", &text_value)) {
    return false;
  }
  {
    if (!text_value->GetAsString(&out->text)) {
      return false;
    }
  }

  return true;
}


Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* parameters_value = NULL;
  if (args.Get(0, &parameters_value) &&
      !parameters_value->is_none()) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!parameters_value->GetAsDictionary(&dictionary)) {
        return std::unique_ptr<Params>();
      }
      if (!Parameters::Populate(*dictionary, &params->parameters)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


std::unique_ptr<base::ListValue> Results::Create(bool success) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(std::make_unique<base::Value>(success));

  return create_results;
}
}  // namespace CommitText

namespace SendKeyEvents {

Params::Parameters::Parameters()
: context_id(0) {}

Params::Parameters::~Parameters() {}
Params::Parameters::Parameters(Parameters&& rhs)
: context_id(rhs.context_id),
key_data(std::move(rhs.key_data)){
}

Params::Parameters& Params::Parameters::operator=(Parameters&& rhs)
{
context_id = rhs.context_id;
key_data = std::move(rhs.key_data);
return *this;
}

// static
bool Params::Parameters::Populate(
    const base::Value& value, Parameters* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* context_id_value = NULL;
  if (!dict->GetWithoutPathExpansion("contextID", &context_id_value)) {
    return false;
  }
  {
    if (!context_id_value->GetAsInteger(&out->context_id)) {
      return false;
    }
  }

  const base::Value* key_data_value = NULL;
  if (!dict->GetWithoutPathExpansion("keyData", &key_data_value)) {
    return false;
  }
  {
    const base::ListValue* list = NULL;
    if (!key_data_value->GetAsList(&list)) {
      return false;
    }
    else {
      if (!json_schema_compiler::util::PopulateArrayFromList(*list, &out->key_data)) {
        return false;
      }
    }
  }

  return true;
}


Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* parameters_value = NULL;
  if (args.Get(0, &parameters_value) &&
      !parameters_value->is_none()) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!parameters_value->GetAsDictionary(&dictionary)) {
        return std::unique_ptr<Params>();
      }
      if (!Parameters::Populate(*dictionary, &params->parameters)) {
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
}  // namespace SendKeyEvents

namespace HideInputView {

}  // namespace HideInputView

namespace SetCandidateWindowProperties {

Params::Parameters::Properties::Properties()
: window_position(WINDOW_POSITION_NONE) {}

Params::Parameters::Properties::~Properties() {}
Params::Parameters::Properties::Properties(Properties&& rhs)
: visible(std::move(rhs.visible)),
cursor_visible(std::move(rhs.cursor_visible)),
vertical(std::move(rhs.vertical)),
page_size(std::move(rhs.page_size)),
auxiliary_text(std::move(rhs.auxiliary_text)),
auxiliary_text_visible(std::move(rhs.auxiliary_text_visible)),
window_position(rhs.window_position){
}

Params::Parameters::Properties& Params::Parameters::Properties::operator=(Properties&& rhs)
{
visible = std::move(rhs.visible);
cursor_visible = std::move(rhs.cursor_visible);
vertical = std::move(rhs.vertical);
page_size = std::move(rhs.page_size);
auxiliary_text = std::move(rhs.auxiliary_text);
auxiliary_text_visible = std::move(rhs.auxiliary_text_visible);
window_position = rhs.window_position;
return *this;
}

// static
bool Params::Parameters::Properties::Populate(
    const base::Value& value, Properties* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  out->window_position = WINDOW_POSITION_NONE;
  const base::Value* visible_value = NULL;
  if (dict->GetWithoutPathExpansion("visible", &visible_value)) {
    {
      bool temp;
      if (!visible_value->GetAsBoolean(&temp)) {
        out->visible.reset();
        return false;
      }
      else
        out->visible.reset(new bool(temp));
    }
  }

  const base::Value* cursor_visible_value = NULL;
  if (dict->GetWithoutPathExpansion("cursorVisible", &cursor_visible_value)) {
    {
      bool temp;
      if (!cursor_visible_value->GetAsBoolean(&temp)) {
        out->cursor_visible.reset();
        return false;
      }
      else
        out->cursor_visible.reset(new bool(temp));
    }
  }

  const base::Value* vertical_value = NULL;
  if (dict->GetWithoutPathExpansion("vertical", &vertical_value)) {
    {
      bool temp;
      if (!vertical_value->GetAsBoolean(&temp)) {
        out->vertical.reset();
        return false;
      }
      else
        out->vertical.reset(new bool(temp));
    }
  }

  const base::Value* page_size_value = NULL;
  if (dict->GetWithoutPathExpansion("pageSize", &page_size_value)) {
    {
      int temp;
      if (!page_size_value->GetAsInteger(&temp)) {
        out->page_size.reset();
        return false;
      }
      else
        out->page_size.reset(new int(temp));
    }
  }

  const base::Value* auxiliary_text_value = NULL;
  if (dict->GetWithoutPathExpansion("auxiliaryText", &auxiliary_text_value)) {
    {
      std::string temp;
      if (!auxiliary_text_value->GetAsString(&temp)) {
        out->auxiliary_text.reset();
        return false;
      }
      else
        out->auxiliary_text.reset(new std::string(temp));
    }
  }

  const base::Value* auxiliary_text_visible_value = NULL;
  if (dict->GetWithoutPathExpansion("auxiliaryTextVisible", &auxiliary_text_visible_value)) {
    {
      bool temp;
      if (!auxiliary_text_visible_value->GetAsBoolean(&temp)) {
        out->auxiliary_text_visible.reset();
        return false;
      }
      else
        out->auxiliary_text_visible.reset(new bool(temp));
    }
  }

  const base::Value* window_position_value = NULL;
  if (dict->GetWithoutPathExpansion("windowPosition", &window_position_value)) {
    {
      std::string window_position_as_string;
      if (!window_position_value->GetAsString(&window_position_as_string)) {
        return false;
      }
      out->window_position = ParseWindowPosition(window_position_as_string);
      if (out->window_position == WINDOW_POSITION_NONE) {
        return false;
      }
    }
    } else {
    out->window_position = WINDOW_POSITION_NONE;
  }

  return true;
}



Params::Parameters::Parameters()
 {}

Params::Parameters::~Parameters() {}
Params::Parameters::Parameters(Parameters&& rhs)
: engine_id(std::move(rhs.engine_id)),
properties(std::move(rhs.properties)){
}

Params::Parameters& Params::Parameters::operator=(Parameters&& rhs)
{
engine_id = std::move(rhs.engine_id);
properties = std::move(rhs.properties);
return *this;
}

// static
bool Params::Parameters::Populate(
    const base::Value& value, Parameters* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* engine_id_value = NULL;
  if (!dict->GetWithoutPathExpansion("engineID", &engine_id_value)) {
    return false;
  }
  {
    if (!engine_id_value->GetAsString(&out->engine_id)) {
      return false;
    }
  }

  const base::Value* properties_value = NULL;
  if (!dict->GetWithoutPathExpansion("properties", &properties_value)) {
    return false;
  }
  {
    const base::DictionaryValue* dictionary = NULL;
    if (!properties_value->GetAsDictionary(&dictionary)) {
      return false;
    }
    if (!Properties::Populate(*dictionary, &out->properties)) {
      return false;
    }
  }

  return true;
}


Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* parameters_value = NULL;
  if (args.Get(0, &parameters_value) &&
      !parameters_value->is_none()) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!parameters_value->GetAsDictionary(&dictionary)) {
        return std::unique_ptr<Params>();
      }
      if (!Parameters::Populate(*dictionary, &params->parameters)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


std::unique_ptr<base::ListValue> Results::Create(bool success) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(std::make_unique<base::Value>(success));

  return create_results;
}
}  // namespace SetCandidateWindowProperties

namespace SetCandidates {

Params::Parameters::CandidatesType::Usage::Usage()
 {}

Params::Parameters::CandidatesType::Usage::~Usage() {}
Params::Parameters::CandidatesType::Usage::Usage(Usage&& rhs)
: title(std::move(rhs.title)),
body(std::move(rhs.body)){
}

Params::Parameters::CandidatesType::Usage& Params::Parameters::CandidatesType::Usage::operator=(Usage&& rhs)
{
title = std::move(rhs.title);
body = std::move(rhs.body);
return *this;
}

// static
bool Params::Parameters::CandidatesType::Usage::Populate(
    const base::Value& value, Usage* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* title_value = NULL;
  if (!dict->GetWithoutPathExpansion("title", &title_value)) {
    return false;
  }
  {
    if (!title_value->GetAsString(&out->title)) {
      return false;
    }
  }

  const base::Value* body_value = NULL;
  if (!dict->GetWithoutPathExpansion("body", &body_value)) {
    return false;
  }
  {
    if (!body_value->GetAsString(&out->body)) {
      return false;
    }
  }

  return true;
}



Params::Parameters::CandidatesType::CandidatesType()
: id(0) {}

Params::Parameters::CandidatesType::~CandidatesType() {}
Params::Parameters::CandidatesType::CandidatesType(CandidatesType&& rhs)
: candidate(std::move(rhs.candidate)),
id(rhs.id),
parent_id(std::move(rhs.parent_id)),
label(std::move(rhs.label)),
annotation(std::move(rhs.annotation)),
usage(std::move(rhs.usage)){
}

Params::Parameters::CandidatesType& Params::Parameters::CandidatesType::operator=(CandidatesType&& rhs)
{
candidate = std::move(rhs.candidate);
id = rhs.id;
parent_id = std::move(rhs.parent_id);
label = std::move(rhs.label);
annotation = std::move(rhs.annotation);
usage = std::move(rhs.usage);
return *this;
}

// static
bool Params::Parameters::CandidatesType::Populate(
    const base::Value& value, CandidatesType* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* candidate_value = NULL;
  if (!dict->GetWithoutPathExpansion("candidate", &candidate_value)) {
    return false;
  }
  {
    if (!candidate_value->GetAsString(&out->candidate)) {
      return false;
    }
  }

  const base::Value* id_value = NULL;
  if (!dict->GetWithoutPathExpansion("id", &id_value)) {
    return false;
  }
  {
    if (!id_value->GetAsInteger(&out->id)) {
      return false;
    }
  }

  const base::Value* parent_id_value = NULL;
  if (dict->GetWithoutPathExpansion("parentId", &parent_id_value)) {
    {
      int temp;
      if (!parent_id_value->GetAsInteger(&temp)) {
        out->parent_id.reset();
        return false;
      }
      else
        out->parent_id.reset(new int(temp));
    }
  }

  const base::Value* label_value = NULL;
  if (dict->GetWithoutPathExpansion("label", &label_value)) {
    {
      std::string temp;
      if (!label_value->GetAsString(&temp)) {
        out->label.reset();
        return false;
      }
      else
        out->label.reset(new std::string(temp));
    }
  }

  const base::Value* annotation_value = NULL;
  if (dict->GetWithoutPathExpansion("annotation", &annotation_value)) {
    {
      std::string temp;
      if (!annotation_value->GetAsString(&temp)) {
        out->annotation.reset();
        return false;
      }
      else
        out->annotation.reset(new std::string(temp));
    }
  }

  const base::Value* usage_value = NULL;
  if (dict->GetWithoutPathExpansion("usage", &usage_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!usage_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        std::unique_ptr<Usage> temp(new Usage());
        if (!Usage::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->usage = std::move(temp);
      }
    }
  }

  return true;
}




Params::Parameters::Parameters()
: context_id(0) {}

Params::Parameters::~Parameters() {}
Params::Parameters::Parameters(Parameters&& rhs)
: context_id(rhs.context_id),
candidates(std::move(rhs.candidates)){
}

Params::Parameters& Params::Parameters::operator=(Parameters&& rhs)
{
context_id = rhs.context_id;
candidates = std::move(rhs.candidates);
return *this;
}

// static
bool Params::Parameters::Populate(
    const base::Value& value, Parameters* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* context_id_value = NULL;
  if (!dict->GetWithoutPathExpansion("contextID", &context_id_value)) {
    return false;
  }
  {
    if (!context_id_value->GetAsInteger(&out->context_id)) {
      return false;
    }
  }

  const base::Value* candidates_value = NULL;
  if (!dict->GetWithoutPathExpansion("candidates", &candidates_value)) {
    return false;
  }
  {
    const base::ListValue* list = NULL;
    if (!candidates_value->GetAsList(&list)) {
      return false;
    }
    else {
      if (!json_schema_compiler::util::PopulateArrayFromList(*list, &out->candidates)) {
        return false;
      }
    }
  }

  return true;
}


Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* parameters_value = NULL;
  if (args.Get(0, &parameters_value) &&
      !parameters_value->is_none()) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!parameters_value->GetAsDictionary(&dictionary)) {
        return std::unique_ptr<Params>();
      }
      if (!Parameters::Populate(*dictionary, &params->parameters)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


std::unique_ptr<base::ListValue> Results::Create(bool success) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(std::make_unique<base::Value>(success));

  return create_results;
}
}  // namespace SetCandidates

namespace SetCursorPosition {

Params::Parameters::Parameters()
: context_id(0),
candidate_id(0) {}

Params::Parameters::~Parameters() {}
Params::Parameters::Parameters(Parameters&& rhs)
: context_id(rhs.context_id),
candidate_id(rhs.candidate_id){
}

Params::Parameters& Params::Parameters::operator=(Parameters&& rhs)
{
context_id = rhs.context_id;
candidate_id = rhs.candidate_id;
return *this;
}

// static
bool Params::Parameters::Populate(
    const base::Value& value, Parameters* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* context_id_value = NULL;
  if (!dict->GetWithoutPathExpansion("contextID", &context_id_value)) {
    return false;
  }
  {
    if (!context_id_value->GetAsInteger(&out->context_id)) {
      return false;
    }
  }

  const base::Value* candidate_id_value = NULL;
  if (!dict->GetWithoutPathExpansion("candidateID", &candidate_id_value)) {
    return false;
  }
  {
    if (!candidate_id_value->GetAsInteger(&out->candidate_id)) {
      return false;
    }
  }

  return true;
}


Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* parameters_value = NULL;
  if (args.Get(0, &parameters_value) &&
      !parameters_value->is_none()) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!parameters_value->GetAsDictionary(&dictionary)) {
        return std::unique_ptr<Params>();
      }
      if (!Parameters::Populate(*dictionary, &params->parameters)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


std::unique_ptr<base::ListValue> Results::Create(bool success) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(std::make_unique<base::Value>(success));

  return create_results;
}
}  // namespace SetCursorPosition

namespace SetMenuItems {

Params::Parameters::Parameters()
 {}

Params::Parameters::~Parameters() {}
Params::Parameters::Parameters(Parameters&& rhs)
: engine_id(std::move(rhs.engine_id)),
items(std::move(rhs.items)){
}

Params::Parameters& Params::Parameters::operator=(Parameters&& rhs)
{
engine_id = std::move(rhs.engine_id);
items = std::move(rhs.items);
return *this;
}

// static
bool Params::Parameters::Populate(
    const base::Value& value, Parameters* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* engine_id_value = NULL;
  if (!dict->GetWithoutPathExpansion("engineID", &engine_id_value)) {
    return false;
  }
  {
    if (!engine_id_value->GetAsString(&out->engine_id)) {
      return false;
    }
  }

  const base::Value* items_value = NULL;
  if (!dict->GetWithoutPathExpansion("items", &items_value)) {
    return false;
  }
  {
    const base::ListValue* list = NULL;
    if (!items_value->GetAsList(&list)) {
      return false;
    }
    else {
      if (!json_schema_compiler::util::PopulateArrayFromList(*list, &out->items)) {
        return false;
      }
    }
  }

  return true;
}


Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* parameters_value = NULL;
  if (args.Get(0, &parameters_value) &&
      !parameters_value->is_none()) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!parameters_value->GetAsDictionary(&dictionary)) {
        return std::unique_ptr<Params>();
      }
      if (!Parameters::Populate(*dictionary, &params->parameters)) {
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
}  // namespace SetMenuItems

namespace UpdateMenuItems {

Params::Parameters::Parameters()
 {}

Params::Parameters::~Parameters() {}
Params::Parameters::Parameters(Parameters&& rhs)
: engine_id(std::move(rhs.engine_id)),
items(std::move(rhs.items)){
}

Params::Parameters& Params::Parameters::operator=(Parameters&& rhs)
{
engine_id = std::move(rhs.engine_id);
items = std::move(rhs.items);
return *this;
}

// static
bool Params::Parameters::Populate(
    const base::Value& value, Parameters* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* engine_id_value = NULL;
  if (!dict->GetWithoutPathExpansion("engineID", &engine_id_value)) {
    return false;
  }
  {
    if (!engine_id_value->GetAsString(&out->engine_id)) {
      return false;
    }
  }

  const base::Value* items_value = NULL;
  if (!dict->GetWithoutPathExpansion("items", &items_value)) {
    return false;
  }
  {
    const base::ListValue* list = NULL;
    if (!items_value->GetAsList(&list)) {
      return false;
    }
    else {
      if (!json_schema_compiler::util::PopulateArrayFromList(*list, &out->items)) {
        return false;
      }
    }
  }

  return true;
}


Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* parameters_value = NULL;
  if (args.Get(0, &parameters_value) &&
      !parameters_value->is_none()) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!parameters_value->GetAsDictionary(&dictionary)) {
        return std::unique_ptr<Params>();
      }
      if (!Parameters::Populate(*dictionary, &params->parameters)) {
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
}  // namespace UpdateMenuItems

namespace DeleteSurroundingText {

Params::Parameters::Parameters()
: context_id(0),
offset(0),
length(0) {}

Params::Parameters::~Parameters() {}
Params::Parameters::Parameters(Parameters&& rhs)
: engine_id(std::move(rhs.engine_id)),
context_id(rhs.context_id),
offset(rhs.offset),
length(rhs.length){
}

Params::Parameters& Params::Parameters::operator=(Parameters&& rhs)
{
engine_id = std::move(rhs.engine_id);
context_id = rhs.context_id;
offset = rhs.offset;
length = rhs.length;
return *this;
}

// static
bool Params::Parameters::Populate(
    const base::Value& value, Parameters* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* engine_id_value = NULL;
  if (!dict->GetWithoutPathExpansion("engineID", &engine_id_value)) {
    return false;
  }
  {
    if (!engine_id_value->GetAsString(&out->engine_id)) {
      return false;
    }
  }

  const base::Value* context_id_value = NULL;
  if (!dict->GetWithoutPathExpansion("contextID", &context_id_value)) {
    return false;
  }
  {
    if (!context_id_value->GetAsInteger(&out->context_id)) {
      return false;
    }
  }

  const base::Value* offset_value = NULL;
  if (!dict->GetWithoutPathExpansion("offset", &offset_value)) {
    return false;
  }
  {
    if (!offset_value->GetAsInteger(&out->offset)) {
      return false;
    }
  }

  const base::Value* length_value = NULL;
  if (!dict->GetWithoutPathExpansion("length", &length_value)) {
    return false;
  }
  {
    if (!length_value->GetAsInteger(&out->length)) {
      return false;
    }
  }

  return true;
}


Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* parameters_value = NULL;
  if (args.Get(0, &parameters_value) &&
      !parameters_value->is_none()) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!parameters_value->GetAsDictionary(&dictionary)) {
        return std::unique_ptr<Params>();
      }
      if (!Parameters::Populate(*dictionary, &params->parameters)) {
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
}  // namespace DeleteSurroundingText

namespace KeyEventHandled {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* request_id_value = NULL;
  if (args.Get(0, &request_id_value) &&
      !request_id_value->is_none()) {
    {
      if (!request_id_value->GetAsString(&params->request_id)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* response_value = NULL;
  if (args.Get(1, &response_value) &&
      !response_value->is_none()) {
    {
      if (!response_value->GetAsBoolean(&params->response)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


}  // namespace KeyEventHandled

namespace CreateWindow {

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
      if (!CreateWindowOptions::Populate(*dictionary, &params->options)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


Results::WindowObject::WindowObject()
 {}

Results::WindowObject::~WindowObject() {}
Results::WindowObject::WindowObject(WindowObject&& rhs)
{
}

Results::WindowObject& Results::WindowObject::operator=(WindowObject&& rhs)
{

return *this;
}

std::unique_ptr<base::DictionaryValue> Results::WindowObject::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());


  return value;
}


std::unique_ptr<base::ListValue> Results::Create(const WindowObject& window_object) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((window_object).ToValue());

  return create_results;
}
}  // namespace CreateWindow

namespace ShowWindow {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* window_id_value = NULL;
  if (args.Get(0, &window_id_value) &&
      !window_id_value->is_none()) {
    {
      if (!window_id_value->GetAsInteger(&params->window_id)) {
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
}  // namespace ShowWindow

namespace HideWindow {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* window_id_value = NULL;
  if (args.Get(0, &window_id_value) &&
      !window_id_value->is_none()) {
    {
      if (!window_id_value->GetAsInteger(&params->window_id)) {
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
}  // namespace HideWindow

namespace Activate {

std::unique_ptr<base::ListValue> Results::Create() {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace Activate

namespace Deactivate {

std::unique_ptr<base::ListValue> Results::Create() {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace Deactivate

//
// Events
//

namespace OnActivate {

const char kEventName[] = "input.ime.onActivate";

std::unique_ptr<base::ListValue> Create(const std::string& engine_id, const ScreenType& screen) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(std::make_unique<base::Value>(engine_id));

  create_results->Append(std::make_unique<base::Value>(input_ime::ToString(screen)));

  return create_results;
}

}  // namespace OnActivate

namespace OnDeactivated {

const char kEventName[] = "input.ime.onDeactivated";

std::unique_ptr<base::ListValue> Create(const std::string& engine_id) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(std::make_unique<base::Value>(engine_id));

  return create_results;
}

}  // namespace OnDeactivated

namespace OnFocus {

const char kEventName[] = "input.ime.onFocus";

std::unique_ptr<base::ListValue> Create(const InputContext& context) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((context).ToValue());

  return create_results;
}

}  // namespace OnFocus

namespace OnBlur {

const char kEventName[] = "input.ime.onBlur";

std::unique_ptr<base::ListValue> Create(int context_id) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(std::make_unique<base::Value>(context_id));

  return create_results;
}

}  // namespace OnBlur

namespace OnInputContextUpdate {

const char kEventName[] = "input.ime.onInputContextUpdate";

std::unique_ptr<base::ListValue> Create(const InputContext& context) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((context).ToValue());

  return create_results;
}

}  // namespace OnInputContextUpdate

namespace OnKeyEvent {

const char kEventName[] = "input.ime.onKeyEvent";

std::unique_ptr<base::ListValue> Create(const std::string& engine_id, const KeyboardEvent& key_data) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(std::make_unique<base::Value>(engine_id));

  create_results->Append((key_data).ToValue());

  return create_results;
}

}  // namespace OnKeyEvent

namespace OnCandidateClicked {

const char kEventName[] = "input.ime.onCandidateClicked";

std::unique_ptr<base::ListValue> Create(const std::string& engine_id, int candidate_id, const MouseButton& button) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(std::make_unique<base::Value>(engine_id));

  create_results->Append(std::make_unique<base::Value>(candidate_id));

  create_results->Append(std::make_unique<base::Value>(input_ime::ToString(button)));

  return create_results;
}

}  // namespace OnCandidateClicked

namespace OnMenuItemActivated {

const char kEventName[] = "input.ime.onMenuItemActivated";

std::unique_ptr<base::ListValue> Create(const std::string& engine_id, const std::string& name) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(std::make_unique<base::Value>(engine_id));

  create_results->Append(std::make_unique<base::Value>(name));

  return create_results;
}

}  // namespace OnMenuItemActivated

namespace OnSurroundingTextChanged {

const char kEventName[] = "input.ime.onSurroundingTextChanged";

SurroundingInfo::SurroundingInfo()
: focus(0),
anchor(0),
offset(0) {}

SurroundingInfo::~SurroundingInfo() {}
SurroundingInfo::SurroundingInfo(SurroundingInfo&& rhs)
: text(std::move(rhs.text)),
focus(rhs.focus),
anchor(rhs.anchor),
offset(rhs.offset){
}

SurroundingInfo& SurroundingInfo::operator=(SurroundingInfo&& rhs)
{
text = std::move(rhs.text);
focus = rhs.focus;
anchor = rhs.anchor;
offset = rhs.offset;
return *this;
}

std::unique_ptr<base::DictionaryValue> SurroundingInfo::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("text", std::make_unique<base::Value>(this->text));

  value->SetWithoutPathExpansion("focus", std::make_unique<base::Value>(this->focus));

  value->SetWithoutPathExpansion("anchor", std::make_unique<base::Value>(this->anchor));

  value->SetWithoutPathExpansion("offset", std::make_unique<base::Value>(this->offset));


  return value;
}


std::unique_ptr<base::ListValue> Create(const std::string& engine_id, const SurroundingInfo& surrounding_info) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(std::make_unique<base::Value>(engine_id));

  create_results->Append((surrounding_info).ToValue());

  return create_results;
}

}  // namespace OnSurroundingTextChanged

namespace OnReset {

const char kEventName[] = "input.ime.onReset";

std::unique_ptr<base::ListValue> Create(const std::string& engine_id) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(std::make_unique<base::Value>(engine_id));

  return create_results;
}

}  // namespace OnReset

namespace OnCompositionBoundsChanged {

const char kEventName[] = "input.ime.onCompositionBoundsChanged";

std::unique_ptr<base::ListValue> Create(const std::vector<Bounds>& bounds_list) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(bounds_list));

  return create_results;
}

}  // namespace OnCompositionBoundsChanged

}  // namespace input_ime
}  // namespace api
}  // namespace extensions

