// Copyright (c) 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   chrome/common/extensions/api/autotest_private.idl
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "base/values.h"
#include "chrome/common/extensions/api/autotest_private.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace autotest_private {
//
// Types
//

LoginStatusDict::LoginStatusDict()
: is_logged_in(false),
is_owner(false),
is_screen_locked(false),
is_ready_for_password(false),
is_regular_user(false),
is_guest(false),
is_kiosk(false) {}

LoginStatusDict::~LoginStatusDict() {}
LoginStatusDict::LoginStatusDict(LoginStatusDict&& rhs)
: is_logged_in(rhs.is_logged_in),
is_owner(rhs.is_owner),
is_screen_locked(rhs.is_screen_locked),
is_ready_for_password(rhs.is_ready_for_password),
is_regular_user(rhs.is_regular_user),
is_guest(rhs.is_guest),
is_kiosk(rhs.is_kiosk),
email(std::move(rhs.email)),
display_email(std::move(rhs.display_email)),
user_image(std::move(rhs.user_image)){
}

LoginStatusDict& LoginStatusDict::operator=(LoginStatusDict&& rhs)
{
is_logged_in = rhs.is_logged_in;
is_owner = rhs.is_owner;
is_screen_locked = rhs.is_screen_locked;
is_ready_for_password = rhs.is_ready_for_password;
is_regular_user = rhs.is_regular_user;
is_guest = rhs.is_guest;
is_kiosk = rhs.is_kiosk;
email = std::move(rhs.email);
display_email = std::move(rhs.display_email);
user_image = std::move(rhs.user_image);
return *this;
}

// static
bool LoginStatusDict::Populate(
    const base::Value& value, LoginStatusDict* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* is_logged_in_value = NULL;
  if (!dict->GetWithoutPathExpansion("isLoggedIn", &is_logged_in_value)) {
    return false;
  }
  {
    if (!is_logged_in_value->GetAsBoolean(&out->is_logged_in)) {
      return false;
    }
  }

  const base::Value* is_owner_value = NULL;
  if (!dict->GetWithoutPathExpansion("isOwner", &is_owner_value)) {
    return false;
  }
  {
    if (!is_owner_value->GetAsBoolean(&out->is_owner)) {
      return false;
    }
  }

  const base::Value* is_screen_locked_value = NULL;
  if (!dict->GetWithoutPathExpansion("isScreenLocked", &is_screen_locked_value)) {
    return false;
  }
  {
    if (!is_screen_locked_value->GetAsBoolean(&out->is_screen_locked)) {
      return false;
    }
  }

  const base::Value* is_ready_for_password_value = NULL;
  if (!dict->GetWithoutPathExpansion("isReadyForPassword", &is_ready_for_password_value)) {
    return false;
  }
  {
    if (!is_ready_for_password_value->GetAsBoolean(&out->is_ready_for_password)) {
      return false;
    }
  }

  const base::Value* is_regular_user_value = NULL;
  if (!dict->GetWithoutPathExpansion("isRegularUser", &is_regular_user_value)) {
    return false;
  }
  {
    if (!is_regular_user_value->GetAsBoolean(&out->is_regular_user)) {
      return false;
    }
  }

  const base::Value* is_guest_value = NULL;
  if (!dict->GetWithoutPathExpansion("isGuest", &is_guest_value)) {
    return false;
  }
  {
    if (!is_guest_value->GetAsBoolean(&out->is_guest)) {
      return false;
    }
  }

  const base::Value* is_kiosk_value = NULL;
  if (!dict->GetWithoutPathExpansion("isKiosk", &is_kiosk_value)) {
    return false;
  }
  {
    if (!is_kiosk_value->GetAsBoolean(&out->is_kiosk)) {
      return false;
    }
  }

  const base::Value* email_value = NULL;
  if (!dict->GetWithoutPathExpansion("email", &email_value)) {
    return false;
  }
  {
    if (!email_value->GetAsString(&out->email)) {
      return false;
    }
  }

  const base::Value* display_email_value = NULL;
  if (!dict->GetWithoutPathExpansion("displayEmail", &display_email_value)) {
    return false;
  }
  {
    if (!display_email_value->GetAsString(&out->display_email)) {
      return false;
    }
  }

  const base::Value* user_image_value = NULL;
  if (!dict->GetWithoutPathExpansion("userImage", &user_image_value)) {
    return false;
  }
  {
    if (!user_image_value->GetAsString(&out->user_image)) {
      return false;
    }
  }

  return true;
}

// static
std::unique_ptr<LoginStatusDict> LoginStatusDict::FromValue(const base::Value& value) {
  std::unique_ptr<LoginStatusDict> out(new LoginStatusDict());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> LoginStatusDict::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("isLoggedIn", std::make_unique<base::Value>(this->is_logged_in));

  value->SetWithoutPathExpansion("isOwner", std::make_unique<base::Value>(this->is_owner));

  value->SetWithoutPathExpansion("isScreenLocked", std::make_unique<base::Value>(this->is_screen_locked));

  value->SetWithoutPathExpansion("isReadyForPassword", std::make_unique<base::Value>(this->is_ready_for_password));

  value->SetWithoutPathExpansion("isRegularUser", std::make_unique<base::Value>(this->is_regular_user));

  value->SetWithoutPathExpansion("isGuest", std::make_unique<base::Value>(this->is_guest));

  value->SetWithoutPathExpansion("isKiosk", std::make_unique<base::Value>(this->is_kiosk));

  value->SetWithoutPathExpansion("email", std::make_unique<base::Value>(this->email));

  value->SetWithoutPathExpansion("displayEmail", std::make_unique<base::Value>(this->display_email));

  value->SetWithoutPathExpansion("userImage", std::make_unique<base::Value>(this->user_image));


  return value;
}


ExtensionInfoDict::ExtensionInfoDict()
: is_component(false),
is_internal(false),
is_user_installed(false),
is_enabled(false),
allowed_in_incognito(false),
has_page_action(false) {}

ExtensionInfoDict::~ExtensionInfoDict() {}
ExtensionInfoDict::ExtensionInfoDict(ExtensionInfoDict&& rhs)
: id(std::move(rhs.id)),
version(std::move(rhs.version)),
name(std::move(rhs.name)),
public_key(std::move(rhs.public_key)),
description(std::move(rhs.description)),
background_url(std::move(rhs.background_url)),
options_url(std::move(rhs.options_url)),
host_permissions(std::move(rhs.host_permissions)),
effective_host_permissions(std::move(rhs.effective_host_permissions)),
api_permissions(std::move(rhs.api_permissions)),
is_component(rhs.is_component),
is_internal(rhs.is_internal),
is_user_installed(rhs.is_user_installed),
is_enabled(rhs.is_enabled),
allowed_in_incognito(rhs.allowed_in_incognito),
has_page_action(rhs.has_page_action){
}

ExtensionInfoDict& ExtensionInfoDict::operator=(ExtensionInfoDict&& rhs)
{
id = std::move(rhs.id);
version = std::move(rhs.version);
name = std::move(rhs.name);
public_key = std::move(rhs.public_key);
description = std::move(rhs.description);
background_url = std::move(rhs.background_url);
options_url = std::move(rhs.options_url);
host_permissions = std::move(rhs.host_permissions);
effective_host_permissions = std::move(rhs.effective_host_permissions);
api_permissions = std::move(rhs.api_permissions);
is_component = rhs.is_component;
is_internal = rhs.is_internal;
is_user_installed = rhs.is_user_installed;
is_enabled = rhs.is_enabled;
allowed_in_incognito = rhs.allowed_in_incognito;
has_page_action = rhs.has_page_action;
return *this;
}

// static
bool ExtensionInfoDict::Populate(
    const base::Value& value, ExtensionInfoDict* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* id_value = NULL;
  if (!dict->GetWithoutPathExpansion("id", &id_value)) {
    return false;
  }
  {
    if (!id_value->GetAsString(&out->id)) {
      return false;
    }
  }

  const base::Value* version_value = NULL;
  if (!dict->GetWithoutPathExpansion("version", &version_value)) {
    return false;
  }
  {
    if (!version_value->GetAsString(&out->version)) {
      return false;
    }
  }

  const base::Value* name_value = NULL;
  if (!dict->GetWithoutPathExpansion("name", &name_value)) {
    return false;
  }
  {
    if (!name_value->GetAsString(&out->name)) {
      return false;
    }
  }

  const base::Value* public_key_value = NULL;
  if (!dict->GetWithoutPathExpansion("publicKey", &public_key_value)) {
    return false;
  }
  {
    if (!public_key_value->GetAsString(&out->public_key)) {
      return false;
    }
  }

  const base::Value* description_value = NULL;
  if (!dict->GetWithoutPathExpansion("description", &description_value)) {
    return false;
  }
  {
    if (!description_value->GetAsString(&out->description)) {
      return false;
    }
  }

  const base::Value* background_url_value = NULL;
  if (!dict->GetWithoutPathExpansion("backgroundUrl", &background_url_value)) {
    return false;
  }
  {
    if (!background_url_value->GetAsString(&out->background_url)) {
      return false;
    }
  }

  const base::Value* options_url_value = NULL;
  if (!dict->GetWithoutPathExpansion("optionsUrl", &options_url_value)) {
    return false;
  }
  {
    if (!options_url_value->GetAsString(&out->options_url)) {
      return false;
    }
  }

  const base::Value* host_permissions_value = NULL;
  if (!dict->GetWithoutPathExpansion("hostPermissions", &host_permissions_value)) {
    return false;
  }
  {
    const base::ListValue* list = NULL;
    if (!host_permissions_value->GetAsList(&list)) {
      return false;
    }
    else {
      if (!json_schema_compiler::util::PopulateArrayFromList(*list, &out->host_permissions)) {
        return false;
      }
    }
  }

  const base::Value* effective_host_permissions_value = NULL;
  if (!dict->GetWithoutPathExpansion("effectiveHostPermissions", &effective_host_permissions_value)) {
    return false;
  }
  {
    const base::ListValue* list = NULL;
    if (!effective_host_permissions_value->GetAsList(&list)) {
      return false;
    }
    else {
      if (!json_schema_compiler::util::PopulateArrayFromList(*list, &out->effective_host_permissions)) {
        return false;
      }
    }
  }

  const base::Value* api_permissions_value = NULL;
  if (!dict->GetWithoutPathExpansion("apiPermissions", &api_permissions_value)) {
    return false;
  }
  {
    const base::ListValue* list = NULL;
    if (!api_permissions_value->GetAsList(&list)) {
      return false;
    }
    else {
      if (!json_schema_compiler::util::PopulateArrayFromList(*list, &out->api_permissions)) {
        return false;
      }
    }
  }

  const base::Value* is_component_value = NULL;
  if (!dict->GetWithoutPathExpansion("isComponent", &is_component_value)) {
    return false;
  }
  {
    if (!is_component_value->GetAsBoolean(&out->is_component)) {
      return false;
    }
  }

  const base::Value* is_internal_value = NULL;
  if (!dict->GetWithoutPathExpansion("isInternal", &is_internal_value)) {
    return false;
  }
  {
    if (!is_internal_value->GetAsBoolean(&out->is_internal)) {
      return false;
    }
  }

  const base::Value* is_user_installed_value = NULL;
  if (!dict->GetWithoutPathExpansion("isUserInstalled", &is_user_installed_value)) {
    return false;
  }
  {
    if (!is_user_installed_value->GetAsBoolean(&out->is_user_installed)) {
      return false;
    }
  }

  const base::Value* is_enabled_value = NULL;
  if (!dict->GetWithoutPathExpansion("isEnabled", &is_enabled_value)) {
    return false;
  }
  {
    if (!is_enabled_value->GetAsBoolean(&out->is_enabled)) {
      return false;
    }
  }

  const base::Value* allowed_in_incognito_value = NULL;
  if (!dict->GetWithoutPathExpansion("allowedInIncognito", &allowed_in_incognito_value)) {
    return false;
  }
  {
    if (!allowed_in_incognito_value->GetAsBoolean(&out->allowed_in_incognito)) {
      return false;
    }
  }

  const base::Value* has_page_action_value = NULL;
  if (!dict->GetWithoutPathExpansion("hasPageAction", &has_page_action_value)) {
    return false;
  }
  {
    if (!has_page_action_value->GetAsBoolean(&out->has_page_action)) {
      return false;
    }
  }

  return true;
}

// static
std::unique_ptr<ExtensionInfoDict> ExtensionInfoDict::FromValue(const base::Value& value) {
  std::unique_ptr<ExtensionInfoDict> out(new ExtensionInfoDict());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> ExtensionInfoDict::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("id", std::make_unique<base::Value>(this->id));

  value->SetWithoutPathExpansion("version", std::make_unique<base::Value>(this->version));

  value->SetWithoutPathExpansion("name", std::make_unique<base::Value>(this->name));

  value->SetWithoutPathExpansion("publicKey", std::make_unique<base::Value>(this->public_key));

  value->SetWithoutPathExpansion("description", std::make_unique<base::Value>(this->description));

  value->SetWithoutPathExpansion("backgroundUrl", std::make_unique<base::Value>(this->background_url));

  value->SetWithoutPathExpansion("optionsUrl", std::make_unique<base::Value>(this->options_url));

  value->SetWithoutPathExpansion("hostPermissions", json_schema_compiler::util::CreateValueFromArray(this->host_permissions));

  value->SetWithoutPathExpansion("effectiveHostPermissions", json_schema_compiler::util::CreateValueFromArray(this->effective_host_permissions));

  value->SetWithoutPathExpansion("apiPermissions", json_schema_compiler::util::CreateValueFromArray(this->api_permissions));

  value->SetWithoutPathExpansion("isComponent", std::make_unique<base::Value>(this->is_component));

  value->SetWithoutPathExpansion("isInternal", std::make_unique<base::Value>(this->is_internal));

  value->SetWithoutPathExpansion("isUserInstalled", std::make_unique<base::Value>(this->is_user_installed));

  value->SetWithoutPathExpansion("isEnabled", std::make_unique<base::Value>(this->is_enabled));

  value->SetWithoutPathExpansion("allowedInIncognito", std::make_unique<base::Value>(this->allowed_in_incognito));

  value->SetWithoutPathExpansion("hasPageAction", std::make_unique<base::Value>(this->has_page_action));


  return value;
}


ExtensionsInfoArray::ExtensionsInfoArray()
 {}

ExtensionsInfoArray::~ExtensionsInfoArray() {}
ExtensionsInfoArray::ExtensionsInfoArray(ExtensionsInfoArray&& rhs)
: extensions(std::move(rhs.extensions)){
}

ExtensionsInfoArray& ExtensionsInfoArray::operator=(ExtensionsInfoArray&& rhs)
{
extensions = std::move(rhs.extensions);
return *this;
}

// static
bool ExtensionsInfoArray::Populate(
    const base::Value& value, ExtensionsInfoArray* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* extensions_value = NULL;
  if (!dict->GetWithoutPathExpansion("extensions", &extensions_value)) {
    return false;
  }
  {
    const base::ListValue* list = NULL;
    if (!extensions_value->GetAsList(&list)) {
      return false;
    }
    else {
      if (!json_schema_compiler::util::PopulateArrayFromList(*list, &out->extensions)) {
        return false;
      }
    }
  }

  return true;
}

// static
std::unique_ptr<ExtensionsInfoArray> ExtensionsInfoArray::FromValue(const base::Value& value) {
  std::unique_ptr<ExtensionsInfoArray> out(new ExtensionsInfoArray());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> ExtensionsInfoArray::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("extensions", json_schema_compiler::util::CreateValueFromArray(this->extensions));


  return value;
}


Notification::Notification()
: priority(0),
progress(0) {}

Notification::~Notification() {}
Notification::Notification(Notification&& rhs)
: id(std::move(rhs.id)),
type(std::move(rhs.type)),
title(std::move(rhs.title)),
message(std::move(rhs.message)),
priority(rhs.priority),
progress(rhs.progress){
}

Notification& Notification::operator=(Notification&& rhs)
{
id = std::move(rhs.id);
type = std::move(rhs.type);
title = std::move(rhs.title);
message = std::move(rhs.message);
priority = rhs.priority;
progress = rhs.progress;
return *this;
}

// static
bool Notification::Populate(
    const base::Value& value, Notification* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* id_value = NULL;
  if (!dict->GetWithoutPathExpansion("id", &id_value)) {
    return false;
  }
  {
    if (!id_value->GetAsString(&out->id)) {
      return false;
    }
  }

  const base::Value* type_value = NULL;
  if (!dict->GetWithoutPathExpansion("type", &type_value)) {
    return false;
  }
  {
    if (!type_value->GetAsString(&out->type)) {
      return false;
    }
  }

  const base::Value* title_value = NULL;
  if (!dict->GetWithoutPathExpansion("title", &title_value)) {
    return false;
  }
  {
    if (!title_value->GetAsString(&out->title)) {
      return false;
    }
  }

  const base::Value* message_value = NULL;
  if (!dict->GetWithoutPathExpansion("message", &message_value)) {
    return false;
  }
  {
    if (!message_value->GetAsString(&out->message)) {
      return false;
    }
  }

  const base::Value* priority_value = NULL;
  if (!dict->GetWithoutPathExpansion("priority", &priority_value)) {
    return false;
  }
  {
    if (!priority_value->GetAsInteger(&out->priority)) {
      return false;
    }
  }

  const base::Value* progress_value = NULL;
  if (!dict->GetWithoutPathExpansion("progress", &progress_value)) {
    return false;
  }
  {
    if (!progress_value->GetAsInteger(&out->progress)) {
      return false;
    }
  }

  return true;
}

// static
std::unique_ptr<Notification> Notification::FromValue(const base::Value& value) {
  std::unique_ptr<Notification> out(new Notification());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> Notification::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("id", std::make_unique<base::Value>(this->id));

  value->SetWithoutPathExpansion("type", std::make_unique<base::Value>(this->type));

  value->SetWithoutPathExpansion("title", std::make_unique<base::Value>(this->title));

  value->SetWithoutPathExpansion("message", std::make_unique<base::Value>(this->message));

  value->SetWithoutPathExpansion("priority", std::make_unique<base::Value>(this->priority));

  value->SetWithoutPathExpansion("progress", std::make_unique<base::Value>(this->progress));


  return value;
}


Printer::Printer()
 {}

Printer::~Printer() {}
Printer::Printer(Printer&& rhs)
: printer_name(std::move(rhs.printer_name)),
printer_id(std::move(rhs.printer_id)),
printer_type(std::move(rhs.printer_type)),
printer_desc(std::move(rhs.printer_desc)),
printer_make_and_model(std::move(rhs.printer_make_and_model)),
printer_uri(std::move(rhs.printer_uri)),
printer_ppd(std::move(rhs.printer_ppd)){
}

Printer& Printer::operator=(Printer&& rhs)
{
printer_name = std::move(rhs.printer_name);
printer_id = std::move(rhs.printer_id);
printer_type = std::move(rhs.printer_type);
printer_desc = std::move(rhs.printer_desc);
printer_make_and_model = std::move(rhs.printer_make_and_model);
printer_uri = std::move(rhs.printer_uri);
printer_ppd = std::move(rhs.printer_ppd);
return *this;
}

// static
bool Printer::Populate(
    const base::Value& value, Printer* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* printer_name_value = NULL;
  if (!dict->GetWithoutPathExpansion("printerName", &printer_name_value)) {
    return false;
  }
  {
    if (!printer_name_value->GetAsString(&out->printer_name)) {
      return false;
    }
  }

  const base::Value* printer_id_value = NULL;
  if (dict->GetWithoutPathExpansion("printerId", &printer_id_value)) {
    {
      std::string temp;
      if (!printer_id_value->GetAsString(&temp)) {
        out->printer_id.reset();
        return false;
      }
      else
        out->printer_id.reset(new std::string(temp));
    }
  }

  const base::Value* printer_type_value = NULL;
  if (dict->GetWithoutPathExpansion("printerType", &printer_type_value)) {
    {
      std::string temp;
      if (!printer_type_value->GetAsString(&temp)) {
        out->printer_type.reset();
        return false;
      }
      else
        out->printer_type.reset(new std::string(temp));
    }
  }

  const base::Value* printer_desc_value = NULL;
  if (dict->GetWithoutPathExpansion("printerDesc", &printer_desc_value)) {
    {
      std::string temp;
      if (!printer_desc_value->GetAsString(&temp)) {
        out->printer_desc.reset();
        return false;
      }
      else
        out->printer_desc.reset(new std::string(temp));
    }
  }

  const base::Value* printer_make_and_model_value = NULL;
  if (dict->GetWithoutPathExpansion("printerMakeAndModel", &printer_make_and_model_value)) {
    {
      std::string temp;
      if (!printer_make_and_model_value->GetAsString(&temp)) {
        out->printer_make_and_model.reset();
        return false;
      }
      else
        out->printer_make_and_model.reset(new std::string(temp));
    }
  }

  const base::Value* printer_uri_value = NULL;
  if (dict->GetWithoutPathExpansion("printerUri", &printer_uri_value)) {
    {
      std::string temp;
      if (!printer_uri_value->GetAsString(&temp)) {
        out->printer_uri.reset();
        return false;
      }
      else
        out->printer_uri.reset(new std::string(temp));
    }
  }

  const base::Value* printer_ppd_value = NULL;
  if (dict->GetWithoutPathExpansion("printerPpd", &printer_ppd_value)) {
    {
      std::string temp;
      if (!printer_ppd_value->GetAsString(&temp)) {
        out->printer_ppd.reset();
        return false;
      }
      else
        out->printer_ppd.reset(new std::string(temp));
    }
  }

  return true;
}

// static
std::unique_ptr<Printer> Printer::FromValue(const base::Value& value) {
  std::unique_ptr<Printer> out(new Printer());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> Printer::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("printerName", std::make_unique<base::Value>(this->printer_name));

  if (this->printer_id.get()) {
    value->SetWithoutPathExpansion("printerId", std::make_unique<base::Value>(*this->printer_id));

  }
  if (this->printer_type.get()) {
    value->SetWithoutPathExpansion("printerType", std::make_unique<base::Value>(*this->printer_type));

  }
  if (this->printer_desc.get()) {
    value->SetWithoutPathExpansion("printerDesc", std::make_unique<base::Value>(*this->printer_desc));

  }
  if (this->printer_make_and_model.get()) {
    value->SetWithoutPathExpansion("printerMakeAndModel", std::make_unique<base::Value>(*this->printer_make_and_model));

  }
  if (this->printer_uri.get()) {
    value->SetWithoutPathExpansion("printerUri", std::make_unique<base::Value>(*this->printer_uri));

  }
  if (this->printer_ppd.get()) {
    value->SetWithoutPathExpansion("printerPpd", std::make_unique<base::Value>(*this->printer_ppd));

  }

  return value;
}


PlayStoreState::PlayStoreState()
: allowed(false) {}

PlayStoreState::~PlayStoreState() {}
PlayStoreState::PlayStoreState(PlayStoreState&& rhs)
: allowed(rhs.allowed),
enabled(std::move(rhs.enabled)),
managed(std::move(rhs.managed)){
}

PlayStoreState& PlayStoreState::operator=(PlayStoreState&& rhs)
{
allowed = rhs.allowed;
enabled = std::move(rhs.enabled);
managed = std::move(rhs.managed);
return *this;
}

// static
bool PlayStoreState::Populate(
    const base::Value& value, PlayStoreState* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* allowed_value = NULL;
  if (!dict->GetWithoutPathExpansion("allowed", &allowed_value)) {
    return false;
  }
  {
    if (!allowed_value->GetAsBoolean(&out->allowed)) {
      return false;
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

  const base::Value* managed_value = NULL;
  if (dict->GetWithoutPathExpansion("managed", &managed_value)) {
    {
      bool temp;
      if (!managed_value->GetAsBoolean(&temp)) {
        out->managed.reset();
        return false;
      }
      else
        out->managed.reset(new bool(temp));
    }
  }

  return true;
}

// static
std::unique_ptr<PlayStoreState> PlayStoreState::FromValue(const base::Value& value) {
  std::unique_ptr<PlayStoreState> out(new PlayStoreState());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> PlayStoreState::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("allowed", std::make_unique<base::Value>(this->allowed));

  if (this->enabled.get()) {
    value->SetWithoutPathExpansion("enabled", std::make_unique<base::Value>(*this->enabled));

  }
  if (this->managed.get()) {
    value->SetWithoutPathExpansion("managed", std::make_unique<base::Value>(*this->managed));

  }

  return value;
}



//
// Functions
//

namespace Logout {

}  // namespace Logout

namespace Restart {

}  // namespace Restart

namespace Shutdown {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* force_value = NULL;
  if (args.Get(0, &force_value) &&
      !force_value->is_none()) {
    {
      if (!force_value->GetAsBoolean(&params->force)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


}  // namespace Shutdown

namespace LoginStatus {

std::unique_ptr<base::ListValue> Results::Create(const LoginStatusDict& status) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((status).ToValue());

  return create_results;
}
}  // namespace LoginStatus

namespace LockScreen {

}  // namespace LockScreen

namespace GetExtensionsInfo {

std::unique_ptr<base::ListValue> Results::Create(const ExtensionsInfoArray& info) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((info).ToValue());

  return create_results;
}
}  // namespace GetExtensionsInfo

namespace SimulateAsanMemoryBug {

}  // namespace SimulateAsanMemoryBug

namespace SetTouchpadSensitivity {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* value_value = NULL;
  if (args.Get(0, &value_value) &&
      !value_value->is_none()) {
    {
      if (!value_value->GetAsInteger(&params->value)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


}  // namespace SetTouchpadSensitivity

namespace SetTapToClick {

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


}  // namespace SetTapToClick

namespace SetThreeFingerClick {

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


}  // namespace SetThreeFingerClick

namespace SetTapDragging {

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


}  // namespace SetTapDragging

namespace SetNaturalScroll {

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


}  // namespace SetNaturalScroll

namespace SetMouseSensitivity {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* value_value = NULL;
  if (args.Get(0, &value_value) &&
      !value_value->is_none()) {
    {
      if (!value_value->GetAsInteger(&params->value)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


}  // namespace SetMouseSensitivity

namespace SetPrimaryButtonRight {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* right_value = NULL;
  if (args.Get(0, &right_value) &&
      !right_value->is_none()) {
    {
      if (!right_value->GetAsBoolean(&params->right)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


}  // namespace SetPrimaryButtonRight

namespace SetMouseReverseScroll {

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


}  // namespace SetMouseReverseScroll

namespace GetVisibleNotifications {

std::unique_ptr<base::ListValue> Results::Create(const std::vector<Notification>& notifications) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(notifications));

  return create_results;
}
}  // namespace GetVisibleNotifications

namespace GetPlayStoreState {

std::unique_ptr<base::ListValue> Results::Create(const PlayStoreState& result) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((result).ToValue());

  return create_results;
}
}  // namespace GetPlayStoreState

namespace GetPrinterList {

std::unique_ptr<base::ListValue> Results::Create(const std::vector<Printer>& printers) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(printers));

  return create_results;
}
}  // namespace GetPrinterList

namespace UpdatePrinter {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* printer_value = NULL;
  if (args.Get(0, &printer_value) &&
      !printer_value->is_none()) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!printer_value->GetAsDictionary(&dictionary)) {
        return std::unique_ptr<Params>();
      }
      if (!Printer::Populate(*dictionary, &params->printer)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


}  // namespace UpdatePrinter

namespace RemovePrinter {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* printer_id_value = NULL;
  if (args.Get(0, &printer_id_value) &&
      !printer_id_value->is_none()) {
    {
      if (!printer_id_value->GetAsString(&params->printer_id)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


}  // namespace RemovePrinter

namespace SetPlayStoreEnabled {

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


std::unique_ptr<base::ListValue> Results::Create() {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace SetPlayStoreEnabled

}  // namespace autotest_private
}  // namespace api
}  // namespace extensions

