// Copyright (c) 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   chrome/common/extensions/api/identity.idl
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "base/values.h"
#include "chrome/common/extensions/api/identity.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace identity {
//
// Types
//

AccountInfo::AccountInfo()
 {}

AccountInfo::~AccountInfo() {}
AccountInfo::AccountInfo(AccountInfo&& rhs)
: id(std::move(rhs.id)){
}

AccountInfo& AccountInfo::operator=(AccountInfo&& rhs)
{
id = std::move(rhs.id);
return *this;
}

// static
bool AccountInfo::Populate(
    const base::Value& value, AccountInfo* out) {
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

  return true;
}

// static
std::unique_ptr<AccountInfo> AccountInfo::FromValue(const base::Value& value) {
  std::unique_ptr<AccountInfo> out(new AccountInfo());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> AccountInfo::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("id", std::make_unique<base::Value>(this->id));


  return value;
}


ProfileUserInfo::ProfileUserInfo()
 {}

ProfileUserInfo::~ProfileUserInfo() {}
ProfileUserInfo::ProfileUserInfo(ProfileUserInfo&& rhs)
: email(std::move(rhs.email)),
id(std::move(rhs.id)){
}

ProfileUserInfo& ProfileUserInfo::operator=(ProfileUserInfo&& rhs)
{
email = std::move(rhs.email);
id = std::move(rhs.id);
return *this;
}

// static
bool ProfileUserInfo::Populate(
    const base::Value& value, ProfileUserInfo* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* email_value = NULL;
  if (!dict->GetWithoutPathExpansion("email", &email_value)) {
    return false;
  }
  {
    if (!email_value->GetAsString(&out->email)) {
      return false;
    }
  }

  const base::Value* id_value = NULL;
  if (!dict->GetWithoutPathExpansion("id", &id_value)) {
    return false;
  }
  {
    if (!id_value->GetAsString(&out->id)) {
      return false;
    }
  }

  return true;
}

// static
std::unique_ptr<ProfileUserInfo> ProfileUserInfo::FromValue(const base::Value& value) {
  std::unique_ptr<ProfileUserInfo> out(new ProfileUserInfo());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> ProfileUserInfo::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("email", std::make_unique<base::Value>(this->email));

  value->SetWithoutPathExpansion("id", std::make_unique<base::Value>(this->id));


  return value;
}


TokenDetails::TokenDetails()
 {}

TokenDetails::~TokenDetails() {}
TokenDetails::TokenDetails(TokenDetails&& rhs)
: interactive(std::move(rhs.interactive)),
account(std::move(rhs.account)),
scopes(std::move(rhs.scopes)){
}

TokenDetails& TokenDetails::operator=(TokenDetails&& rhs)
{
interactive = std::move(rhs.interactive);
account = std::move(rhs.account);
scopes = std::move(rhs.scopes);
return *this;
}

// static
bool TokenDetails::Populate(
    const base::Value& value, TokenDetails* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* interactive_value = NULL;
  if (dict->GetWithoutPathExpansion("interactive", &interactive_value)) {
    {
      bool temp;
      if (!interactive_value->GetAsBoolean(&temp)) {
        out->interactive.reset();
        return false;
      }
      else
        out->interactive.reset(new bool(temp));
    }
  }

  const base::Value* account_value = NULL;
  if (dict->GetWithoutPathExpansion("account", &account_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!account_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        std::unique_ptr<AccountInfo> temp(new AccountInfo());
        if (!AccountInfo::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->account = std::move(temp);
      }
    }
  }

  const base::Value* scopes_value = NULL;
  if (dict->GetWithoutPathExpansion("scopes", &scopes_value)) {
    {
      const base::ListValue* list = NULL;
      if (!scopes_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->scopes)) {
          return false;
        }
      }
    }
  }

  return true;
}

// static
std::unique_ptr<TokenDetails> TokenDetails::FromValue(const base::Value& value) {
  std::unique_ptr<TokenDetails> out(new TokenDetails());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> TokenDetails::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->interactive.get()) {
    value->SetWithoutPathExpansion("interactive", std::make_unique<base::Value>(*this->interactive));

  }
  if (this->account.get()) {
    value->SetWithoutPathExpansion("account", (this->account)->ToValue());

  }
  if (this->scopes.get()) {
    value->SetWithoutPathExpansion("scopes", json_schema_compiler::util::CreateValueFromOptionalArray(this->scopes));

  }

  return value;
}


InvalidTokenDetails::InvalidTokenDetails()
 {}

InvalidTokenDetails::~InvalidTokenDetails() {}
InvalidTokenDetails::InvalidTokenDetails(InvalidTokenDetails&& rhs)
: token(std::move(rhs.token)){
}

InvalidTokenDetails& InvalidTokenDetails::operator=(InvalidTokenDetails&& rhs)
{
token = std::move(rhs.token);
return *this;
}

// static
bool InvalidTokenDetails::Populate(
    const base::Value& value, InvalidTokenDetails* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* token_value = NULL;
  if (!dict->GetWithoutPathExpansion("token", &token_value)) {
    return false;
  }
  {
    if (!token_value->GetAsString(&out->token)) {
      return false;
    }
  }

  return true;
}

// static
std::unique_ptr<InvalidTokenDetails> InvalidTokenDetails::FromValue(const base::Value& value) {
  std::unique_ptr<InvalidTokenDetails> out(new InvalidTokenDetails());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> InvalidTokenDetails::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("token", std::make_unique<base::Value>(this->token));


  return value;
}


WebAuthFlowDetails::WebAuthFlowDetails()
 {}

WebAuthFlowDetails::~WebAuthFlowDetails() {}
WebAuthFlowDetails::WebAuthFlowDetails(WebAuthFlowDetails&& rhs)
: url(std::move(rhs.url)),
interactive(std::move(rhs.interactive)){
}

WebAuthFlowDetails& WebAuthFlowDetails::operator=(WebAuthFlowDetails&& rhs)
{
url = std::move(rhs.url);
interactive = std::move(rhs.interactive);
return *this;
}

// static
bool WebAuthFlowDetails::Populate(
    const base::Value& value, WebAuthFlowDetails* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* url_value = NULL;
  if (!dict->GetWithoutPathExpansion("url", &url_value)) {
    return false;
  }
  {
    if (!url_value->GetAsString(&out->url)) {
      return false;
    }
  }

  const base::Value* interactive_value = NULL;
  if (dict->GetWithoutPathExpansion("interactive", &interactive_value)) {
    {
      bool temp;
      if (!interactive_value->GetAsBoolean(&temp)) {
        out->interactive.reset();
        return false;
      }
      else
        out->interactive.reset(new bool(temp));
    }
  }

  return true;
}

// static
std::unique_ptr<WebAuthFlowDetails> WebAuthFlowDetails::FromValue(const base::Value& value) {
  std::unique_ptr<WebAuthFlowDetails> out(new WebAuthFlowDetails());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> WebAuthFlowDetails::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("url", std::make_unique<base::Value>(this->url));

  if (this->interactive.get()) {
    value->SetWithoutPathExpansion("interactive", std::make_unique<base::Value>(*this->interactive));

  }

  return value;
}



//
// Functions
//

namespace GetAccounts {

std::unique_ptr<base::ListValue> Results::Create(const std::vector<AccountInfo>& accounts) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(accounts));

  return create_results;
}
}  // namespace GetAccounts

namespace GetAuthToken {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() > 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* details_value = NULL;
  if (args.Get(0, &details_value) &&
      !details_value->is_none()) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!details_value->GetAsDictionary(&dictionary)) {
        return std::unique_ptr<Params>();
      }
      else {
        std::unique_ptr<TokenDetails> temp(new TokenDetails());
        if (!TokenDetails::Populate(*dictionary, temp.get())) {
          return std::unique_ptr<Params>();
        }
        else
          params->details = std::move(temp);
      }
    }
  }

  return params;
}


std::unique_ptr<base::ListValue> Results::Create(const std::string& token) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(std::make_unique<base::Value>(token));

  return create_results;
}
}  // namespace GetAuthToken

namespace GetProfileUserInfo {

std::unique_ptr<base::ListValue> Results::Create(const ProfileUserInfo& user_info) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((user_info).ToValue());

  return create_results;
}
}  // namespace GetProfileUserInfo

namespace RemoveCachedAuthToken {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* details_value = NULL;
  if (args.Get(0, &details_value) &&
      !details_value->is_none()) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!details_value->GetAsDictionary(&dictionary)) {
        return std::unique_ptr<Params>();
      }
      if (!InvalidTokenDetails::Populate(*dictionary, &params->details)) {
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
}  // namespace RemoveCachedAuthToken

namespace LaunchWebAuthFlow {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* details_value = NULL;
  if (args.Get(0, &details_value) &&
      !details_value->is_none()) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!details_value->GetAsDictionary(&dictionary)) {
        return std::unique_ptr<Params>();
      }
      if (!WebAuthFlowDetails::Populate(*dictionary, &params->details)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


std::unique_ptr<base::ListValue> Results::Create(const std::string& response_url) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(std::make_unique<base::Value>(response_url));

  return create_results;
}
}  // namespace LaunchWebAuthFlow

//
// Events
//

namespace OnSignInChanged {

const char kEventName[] = "identity.onSignInChanged";

std::unique_ptr<base::ListValue> Create(const AccountInfo& account, bool signed_in) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((account).ToValue());

  create_results->Append(std::make_unique<base::Value>(signed_in));

  return create_results;
}

}  // namespace OnSignInChanged

}  // namespace identity
}  // namespace api
}  // namespace extensions

