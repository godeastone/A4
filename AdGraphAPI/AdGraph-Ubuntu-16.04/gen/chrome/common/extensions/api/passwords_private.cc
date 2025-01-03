// Copyright (c) 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   chrome/common/extensions/api/passwords_private.idl
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "base/values.h"
#include "chrome/common/extensions/api/passwords_private.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace passwords_private {
//
// Types
//

const char* ToString(ExportProgressStatus enum_param) {
  switch (enum_param) {
    case EXPORT_PROGRESS_STATUS_NOT_STARTED:
      return "NOT_STARTED";
    case EXPORT_PROGRESS_STATUS_IN_PROGRESS:
      return "IN_PROGRESS";
    case EXPORT_PROGRESS_STATUS_SUCCEEDED:
      return "SUCCEEDED";
    case EXPORT_PROGRESS_STATUS_FAILED_CANCELLED:
      return "FAILED_CANCELLED";
    case EXPORT_PROGRESS_STATUS_FAILED_WRITE_FAILED:
      return "FAILED_WRITE_FAILED";
    case EXPORT_PROGRESS_STATUS_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

ExportProgressStatus ParseExportProgressStatus(const std::string& enum_string) {
  if (enum_string == "NOT_STARTED")
    return EXPORT_PROGRESS_STATUS_NOT_STARTED;
  if (enum_string == "IN_PROGRESS")
    return EXPORT_PROGRESS_STATUS_IN_PROGRESS;
  if (enum_string == "SUCCEEDED")
    return EXPORT_PROGRESS_STATUS_SUCCEEDED;
  if (enum_string == "FAILED_CANCELLED")
    return EXPORT_PROGRESS_STATUS_FAILED_CANCELLED;
  if (enum_string == "FAILED_WRITE_FAILED")
    return EXPORT_PROGRESS_STATUS_FAILED_WRITE_FAILED;
  return EXPORT_PROGRESS_STATUS_NONE;
}


UrlCollection::UrlCollection()
 {}

UrlCollection::~UrlCollection() {}
UrlCollection::UrlCollection(UrlCollection&& rhs)
: origin(std::move(rhs.origin)),
shown(std::move(rhs.shown)),
link(std::move(rhs.link)){
}

UrlCollection& UrlCollection::operator=(UrlCollection&& rhs)
{
origin = std::move(rhs.origin);
shown = std::move(rhs.shown);
link = std::move(rhs.link);
return *this;
}

// static
bool UrlCollection::Populate(
    const base::Value& value, UrlCollection* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* origin_value = NULL;
  if (!dict->GetWithoutPathExpansion("origin", &origin_value)) {
    return false;
  }
  {
    if (!origin_value->GetAsString(&out->origin)) {
      return false;
    }
  }

  const base::Value* shown_value = NULL;
  if (!dict->GetWithoutPathExpansion("shown", &shown_value)) {
    return false;
  }
  {
    if (!shown_value->GetAsString(&out->shown)) {
      return false;
    }
  }

  const base::Value* link_value = NULL;
  if (!dict->GetWithoutPathExpansion("link", &link_value)) {
    return false;
  }
  {
    if (!link_value->GetAsString(&out->link)) {
      return false;
    }
  }

  return true;
}

// static
std::unique_ptr<UrlCollection> UrlCollection::FromValue(const base::Value& value) {
  std::unique_ptr<UrlCollection> out(new UrlCollection());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> UrlCollection::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("origin", std::make_unique<base::Value>(this->origin));

  value->SetWithoutPathExpansion("shown", std::make_unique<base::Value>(this->shown));

  value->SetWithoutPathExpansion("link", std::make_unique<base::Value>(this->link));


  return value;
}


LoginPair::LoginPair()
 {}

LoginPair::~LoginPair() {}
LoginPair::LoginPair(LoginPair&& rhs)
: urls(std::move(rhs.urls)),
username(std::move(rhs.username)){
}

LoginPair& LoginPair::operator=(LoginPair&& rhs)
{
urls = std::move(rhs.urls);
username = std::move(rhs.username);
return *this;
}

// static
bool LoginPair::Populate(
    const base::Value& value, LoginPair* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* urls_value = NULL;
  if (!dict->GetWithoutPathExpansion("urls", &urls_value)) {
    return false;
  }
  {
    const base::DictionaryValue* dictionary = NULL;
    if (!urls_value->GetAsDictionary(&dictionary)) {
      return false;
    }
    if (!UrlCollection::Populate(*dictionary, &out->urls)) {
      return false;
    }
  }

  const base::Value* username_value = NULL;
  if (!dict->GetWithoutPathExpansion("username", &username_value)) {
    return false;
  }
  {
    if (!username_value->GetAsString(&out->username)) {
      return false;
    }
  }

  return true;
}

// static
std::unique_ptr<LoginPair> LoginPair::FromValue(const base::Value& value) {
  std::unique_ptr<LoginPair> out(new LoginPair());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> LoginPair::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("urls", (this->urls).ToValue());

  value->SetWithoutPathExpansion("username", std::make_unique<base::Value>(this->username));


  return value;
}


PasswordUiEntry::PasswordUiEntry()
: num_characters_in_password(0),
index(0) {}

PasswordUiEntry::~PasswordUiEntry() {}
PasswordUiEntry::PasswordUiEntry(PasswordUiEntry&& rhs)
: login_pair(std::move(rhs.login_pair)),
num_characters_in_password(rhs.num_characters_in_password),
federation_text(std::move(rhs.federation_text)),
index(rhs.index){
}

PasswordUiEntry& PasswordUiEntry::operator=(PasswordUiEntry&& rhs)
{
login_pair = std::move(rhs.login_pair);
num_characters_in_password = rhs.num_characters_in_password;
federation_text = std::move(rhs.federation_text);
index = rhs.index;
return *this;
}

// static
bool PasswordUiEntry::Populate(
    const base::Value& value, PasswordUiEntry* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* login_pair_value = NULL;
  if (!dict->GetWithoutPathExpansion("loginPair", &login_pair_value)) {
    return false;
  }
  {
    const base::DictionaryValue* dictionary = NULL;
    if (!login_pair_value->GetAsDictionary(&dictionary)) {
      return false;
    }
    if (!LoginPair::Populate(*dictionary, &out->login_pair)) {
      return false;
    }
  }

  const base::Value* num_characters_in_password_value = NULL;
  if (!dict->GetWithoutPathExpansion("numCharactersInPassword", &num_characters_in_password_value)) {
    return false;
  }
  {
    if (!num_characters_in_password_value->GetAsInteger(&out->num_characters_in_password)) {
      return false;
    }
  }

  const base::Value* federation_text_value = NULL;
  if (dict->GetWithoutPathExpansion("federationText", &federation_text_value)) {
    {
      std::string temp;
      if (!federation_text_value->GetAsString(&temp)) {
        out->federation_text.reset();
        return false;
      }
      else
        out->federation_text.reset(new std::string(temp));
    }
  }

  const base::Value* index_value = NULL;
  if (!dict->GetWithoutPathExpansion("index", &index_value)) {
    return false;
  }
  {
    if (!index_value->GetAsInteger(&out->index)) {
      return false;
    }
  }

  return true;
}

// static
std::unique_ptr<PasswordUiEntry> PasswordUiEntry::FromValue(const base::Value& value) {
  std::unique_ptr<PasswordUiEntry> out(new PasswordUiEntry());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> PasswordUiEntry::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("loginPair", (this->login_pair).ToValue());

  value->SetWithoutPathExpansion("numCharactersInPassword", std::make_unique<base::Value>(this->num_characters_in_password));

  if (this->federation_text.get()) {
    value->SetWithoutPathExpansion("federationText", std::make_unique<base::Value>(*this->federation_text));

  }
  value->SetWithoutPathExpansion("index", std::make_unique<base::Value>(this->index));


  return value;
}


PlaintextPasswordEventParameters::PlaintextPasswordEventParameters()
: index(0) {}

PlaintextPasswordEventParameters::~PlaintextPasswordEventParameters() {}
PlaintextPasswordEventParameters::PlaintextPasswordEventParameters(PlaintextPasswordEventParameters&& rhs)
: index(rhs.index),
plaintext_password(std::move(rhs.plaintext_password)){
}

PlaintextPasswordEventParameters& PlaintextPasswordEventParameters::operator=(PlaintextPasswordEventParameters&& rhs)
{
index = rhs.index;
plaintext_password = std::move(rhs.plaintext_password);
return *this;
}

// static
bool PlaintextPasswordEventParameters::Populate(
    const base::Value& value, PlaintextPasswordEventParameters* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* index_value = NULL;
  if (!dict->GetWithoutPathExpansion("index", &index_value)) {
    return false;
  }
  {
    if (!index_value->GetAsInteger(&out->index)) {
      return false;
    }
  }

  const base::Value* plaintext_password_value = NULL;
  if (!dict->GetWithoutPathExpansion("plaintextPassword", &plaintext_password_value)) {
    return false;
  }
  {
    if (!plaintext_password_value->GetAsString(&out->plaintext_password)) {
      return false;
    }
  }

  return true;
}

// static
std::unique_ptr<PlaintextPasswordEventParameters> PlaintextPasswordEventParameters::FromValue(const base::Value& value) {
  std::unique_ptr<PlaintextPasswordEventParameters> out(new PlaintextPasswordEventParameters());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> PlaintextPasswordEventParameters::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("index", std::make_unique<base::Value>(this->index));

  value->SetWithoutPathExpansion("plaintextPassword", std::make_unique<base::Value>(this->plaintext_password));


  return value;
}


ExceptionEntry::ExceptionEntry()
: index(0) {}

ExceptionEntry::~ExceptionEntry() {}
ExceptionEntry::ExceptionEntry(ExceptionEntry&& rhs)
: urls(std::move(rhs.urls)),
index(rhs.index){
}

ExceptionEntry& ExceptionEntry::operator=(ExceptionEntry&& rhs)
{
urls = std::move(rhs.urls);
index = rhs.index;
return *this;
}

// static
bool ExceptionEntry::Populate(
    const base::Value& value, ExceptionEntry* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* urls_value = NULL;
  if (!dict->GetWithoutPathExpansion("urls", &urls_value)) {
    return false;
  }
  {
    const base::DictionaryValue* dictionary = NULL;
    if (!urls_value->GetAsDictionary(&dictionary)) {
      return false;
    }
    if (!UrlCollection::Populate(*dictionary, &out->urls)) {
      return false;
    }
  }

  const base::Value* index_value = NULL;
  if (!dict->GetWithoutPathExpansion("index", &index_value)) {
    return false;
  }
  {
    if (!index_value->GetAsInteger(&out->index)) {
      return false;
    }
  }

  return true;
}

// static
std::unique_ptr<ExceptionEntry> ExceptionEntry::FromValue(const base::Value& value) {
  std::unique_ptr<ExceptionEntry> out(new ExceptionEntry());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> ExceptionEntry::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("urls", (this->urls).ToValue());

  value->SetWithoutPathExpansion("index", std::make_unique<base::Value>(this->index));


  return value;
}


PasswordExportProgress::PasswordExportProgress()
: status(EXPORT_PROGRESS_STATUS_NONE) {}

PasswordExportProgress::~PasswordExportProgress() {}
PasswordExportProgress::PasswordExportProgress(PasswordExportProgress&& rhs)
: status(rhs.status),
folder_name(std::move(rhs.folder_name)){
}

PasswordExportProgress& PasswordExportProgress::operator=(PasswordExportProgress&& rhs)
{
status = rhs.status;
folder_name = std::move(rhs.folder_name);
return *this;
}

// static
bool PasswordExportProgress::Populate(
    const base::Value& value, PasswordExportProgress* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* status_value = NULL;
  if (!dict->GetWithoutPathExpansion("status", &status_value)) {
    return false;
  }
  {
    std::string export_progress_status_as_string;
    if (!status_value->GetAsString(&export_progress_status_as_string)) {
      return false;
    }
    out->status = ParseExportProgressStatus(export_progress_status_as_string);
    if (out->status == EXPORT_PROGRESS_STATUS_NONE) {
      return false;
    }
  }

  const base::Value* folder_name_value = NULL;
  if (dict->GetWithoutPathExpansion("folderName", &folder_name_value)) {
    {
      std::string temp;
      if (!folder_name_value->GetAsString(&temp)) {
        out->folder_name.reset();
        return false;
      }
      else
        out->folder_name.reset(new std::string(temp));
    }
  }

  return true;
}

// static
std::unique_ptr<PasswordExportProgress> PasswordExportProgress::FromValue(const base::Value& value) {
  std::unique_ptr<PasswordExportProgress> out(new PasswordExportProgress());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> PasswordExportProgress::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("status", std::make_unique<base::Value>(passwords_private::ToString(this->status)));

  if (this->folder_name.get()) {
    value->SetWithoutPathExpansion("folderName", std::make_unique<base::Value>(*this->folder_name));

  }

  return value;
}



//
// Functions
//

namespace RemoveSavedPassword {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* index_value = NULL;
  if (args.Get(0, &index_value) &&
      !index_value->is_none()) {
    {
      if (!index_value->GetAsInteger(&params->index)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


}  // namespace RemoveSavedPassword

namespace RemovePasswordException {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* index_value = NULL;
  if (args.Get(0, &index_value) &&
      !index_value->is_none()) {
    {
      if (!index_value->GetAsInteger(&params->index)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


}  // namespace RemovePasswordException

namespace UndoRemoveSavedPasswordOrException {

}  // namespace UndoRemoveSavedPasswordOrException

namespace RequestPlaintextPassword {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* index_value = NULL;
  if (args.Get(0, &index_value) &&
      !index_value->is_none()) {
    {
      if (!index_value->GetAsInteger(&params->index)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


}  // namespace RequestPlaintextPassword

namespace GetSavedPasswordList {

std::unique_ptr<base::ListValue> Results::Create(const std::vector<PasswordUiEntry>& entries) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(entries));

  return create_results;
}
}  // namespace GetSavedPasswordList

namespace GetPasswordExceptionList {

std::unique_ptr<base::ListValue> Results::Create(const std::vector<ExceptionEntry>& exceptions) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(exceptions));

  return create_results;
}
}  // namespace GetPasswordExceptionList

namespace ImportPasswords {

}  // namespace ImportPasswords

namespace ExportPasswords {

std::unique_ptr<base::ListValue> Results::Create() {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace ExportPasswords

namespace RequestExportProgressStatus {

std::unique_ptr<base::ListValue> Results::Create(const ExportProgressStatus& status) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(std::make_unique<base::Value>(passwords_private::ToString(status)));

  return create_results;
}
}  // namespace RequestExportProgressStatus

namespace CancelExportPasswords {

}  // namespace CancelExportPasswords

//
// Events
//

namespace OnSavedPasswordsListChanged {

const char kEventName[] = "passwordsPrivate.onSavedPasswordsListChanged";

std::unique_ptr<base::ListValue> Create(const std::vector<PasswordUiEntry>& entries) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(entries));

  return create_results;
}

}  // namespace OnSavedPasswordsListChanged

namespace OnPasswordExceptionsListChanged {

const char kEventName[] = "passwordsPrivate.onPasswordExceptionsListChanged";

std::unique_ptr<base::ListValue> Create(const std::vector<ExceptionEntry>& exceptions) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(exceptions));

  return create_results;
}

}  // namespace OnPasswordExceptionsListChanged

namespace OnPlaintextPasswordRetrieved {

const char kEventName[] = "passwordsPrivate.onPlaintextPasswordRetrieved";

std::unique_ptr<base::ListValue> Create(const PlaintextPasswordEventParameters& dict) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((dict).ToValue());

  return create_results;
}

}  // namespace OnPlaintextPasswordRetrieved

namespace OnPasswordsFileExportProgress {

const char kEventName[] = "passwordsPrivate.onPasswordsFileExportProgress";

std::unique_ptr<base::ListValue> Create(const PasswordExportProgress& status) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((status).ToValue());

  return create_results;
}

}  // namespace OnPasswordsFileExportProgress

}  // namespace passwords_private
}  // namespace api
}  // namespace extensions

