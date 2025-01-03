// Copyright (c) 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   chrome/common/extensions/api/safe_browsing_private.idl
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "base/values.h"
#include "chrome/common/extensions/api/safe_browsing_private.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace safe_browsing_private {
//
// Types
//

PolicySpecifiedPasswordReuse::PolicySpecifiedPasswordReuse()
: is_phishing_url(false) {}

PolicySpecifiedPasswordReuse::~PolicySpecifiedPasswordReuse() {}
PolicySpecifiedPasswordReuse::PolicySpecifiedPasswordReuse(PolicySpecifiedPasswordReuse&& rhs)
: url(std::move(rhs.url)),
user_name(std::move(rhs.user_name)),
is_phishing_url(rhs.is_phishing_url){
}

PolicySpecifiedPasswordReuse& PolicySpecifiedPasswordReuse::operator=(PolicySpecifiedPasswordReuse&& rhs)
{
url = std::move(rhs.url);
user_name = std::move(rhs.user_name);
is_phishing_url = rhs.is_phishing_url;
return *this;
}

// static
bool PolicySpecifiedPasswordReuse::Populate(
    const base::Value& value, PolicySpecifiedPasswordReuse* out) {
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

  const base::Value* user_name_value = NULL;
  if (!dict->GetWithoutPathExpansion("userName", &user_name_value)) {
    return false;
  }
  {
    if (!user_name_value->GetAsString(&out->user_name)) {
      return false;
    }
  }

  const base::Value* is_phishing_url_value = NULL;
  if (!dict->GetWithoutPathExpansion("isPhishingUrl", &is_phishing_url_value)) {
    return false;
  }
  {
    if (!is_phishing_url_value->GetAsBoolean(&out->is_phishing_url)) {
      return false;
    }
  }

  return true;
}

// static
std::unique_ptr<PolicySpecifiedPasswordReuse> PolicySpecifiedPasswordReuse::FromValue(const base::Value& value) {
  std::unique_ptr<PolicySpecifiedPasswordReuse> out(new PolicySpecifiedPasswordReuse());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> PolicySpecifiedPasswordReuse::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("url", std::make_unique<base::Value>(this->url));

  value->SetWithoutPathExpansion("userName", std::make_unique<base::Value>(this->user_name));

  value->SetWithoutPathExpansion("isPhishingUrl", std::make_unique<base::Value>(this->is_phishing_url));


  return value;
}


DangerousDownloadInfo::DangerousDownloadInfo()
 {}

DangerousDownloadInfo::~DangerousDownloadInfo() {}
DangerousDownloadInfo::DangerousDownloadInfo(DangerousDownloadInfo&& rhs)
: url(std::move(rhs.url)),
file_name(std::move(rhs.file_name)),
download_digest_sha256(std::move(rhs.download_digest_sha256)),
user_name(std::move(rhs.user_name)){
}

DangerousDownloadInfo& DangerousDownloadInfo::operator=(DangerousDownloadInfo&& rhs)
{
url = std::move(rhs.url);
file_name = std::move(rhs.file_name);
download_digest_sha256 = std::move(rhs.download_digest_sha256);
user_name = std::move(rhs.user_name);
return *this;
}

// static
bool DangerousDownloadInfo::Populate(
    const base::Value& value, DangerousDownloadInfo* out) {
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

  const base::Value* file_name_value = NULL;
  if (!dict->GetWithoutPathExpansion("fileName", &file_name_value)) {
    return false;
  }
  {
    if (!file_name_value->GetAsString(&out->file_name)) {
      return false;
    }
  }

  const base::Value* download_digest_sha256_value = NULL;
  if (!dict->GetWithoutPathExpansion("downloadDigestSha256", &download_digest_sha256_value)) {
    return false;
  }
  {
    if (!download_digest_sha256_value->GetAsString(&out->download_digest_sha256)) {
      return false;
    }
  }

  const base::Value* user_name_value = NULL;
  if (!dict->GetWithoutPathExpansion("userName", &user_name_value)) {
    return false;
  }
  {
    if (!user_name_value->GetAsString(&out->user_name)) {
      return false;
    }
  }

  return true;
}

// static
std::unique_ptr<DangerousDownloadInfo> DangerousDownloadInfo::FromValue(const base::Value& value) {
  std::unique_ptr<DangerousDownloadInfo> out(new DangerousDownloadInfo());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> DangerousDownloadInfo::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("url", std::make_unique<base::Value>(this->url));

  value->SetWithoutPathExpansion("fileName", std::make_unique<base::Value>(this->file_name));

  value->SetWithoutPathExpansion("downloadDigestSha256", std::make_unique<base::Value>(this->download_digest_sha256));

  value->SetWithoutPathExpansion("userName", std::make_unique<base::Value>(this->user_name));


  return value;
}


InterstitialInfo::InterstitialInfo()
 {}

InterstitialInfo::~InterstitialInfo() {}
InterstitialInfo::InterstitialInfo(InterstitialInfo&& rhs)
: url(std::move(rhs.url)),
reason(std::move(rhs.reason)),
net_error_code(std::move(rhs.net_error_code)),
user_name(std::move(rhs.user_name)){
}

InterstitialInfo& InterstitialInfo::operator=(InterstitialInfo&& rhs)
{
url = std::move(rhs.url);
reason = std::move(rhs.reason);
net_error_code = std::move(rhs.net_error_code);
user_name = std::move(rhs.user_name);
return *this;
}

// static
bool InterstitialInfo::Populate(
    const base::Value& value, InterstitialInfo* out) {
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

  const base::Value* reason_value = NULL;
  if (!dict->GetWithoutPathExpansion("reason", &reason_value)) {
    return false;
  }
  {
    if (!reason_value->GetAsString(&out->reason)) {
      return false;
    }
  }

  const base::Value* net_error_code_value = NULL;
  if (dict->GetWithoutPathExpansion("netErrorCode", &net_error_code_value)) {
    {
      std::string temp;
      if (!net_error_code_value->GetAsString(&temp)) {
        out->net_error_code.reset();
        return false;
      }
      else
        out->net_error_code.reset(new std::string(temp));
    }
  }

  const base::Value* user_name_value = NULL;
  if (!dict->GetWithoutPathExpansion("userName", &user_name_value)) {
    return false;
  }
  {
    if (!user_name_value->GetAsString(&out->user_name)) {
      return false;
    }
  }

  return true;
}

// static
std::unique_ptr<InterstitialInfo> InterstitialInfo::FromValue(const base::Value& value) {
  std::unique_ptr<InterstitialInfo> out(new InterstitialInfo());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> InterstitialInfo::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("url", std::make_unique<base::Value>(this->url));

  value->SetWithoutPathExpansion("reason", std::make_unique<base::Value>(this->reason));

  if (this->net_error_code.get()) {
    value->SetWithoutPathExpansion("netErrorCode", std::make_unique<base::Value>(*this->net_error_code));

  }
  value->SetWithoutPathExpansion("userName", std::make_unique<base::Value>(this->user_name));


  return value;
}



//
// Events
//

namespace OnPolicySpecifiedPasswordReuseDetected {

const char kEventName[] = "safeBrowsingPrivate.onPolicySpecifiedPasswordReuseDetected";

std::unique_ptr<base::ListValue> Create(const PolicySpecifiedPasswordReuse& reuse_details) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((reuse_details).ToValue());

  return create_results;
}

}  // namespace OnPolicySpecifiedPasswordReuseDetected

namespace OnPolicySpecifiedPasswordChanged {

const char kEventName[] = "safeBrowsingPrivate.onPolicySpecifiedPasswordChanged";

std::unique_ptr<base::ListValue> Create(const std::string& user_name) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(std::make_unique<base::Value>(user_name));

  return create_results;
}

}  // namespace OnPolicySpecifiedPasswordChanged

namespace OnDangerousDownloadOpened {

const char kEventName[] = "safeBrowsingPrivate.onDangerousDownloadOpened";

std::unique_ptr<base::ListValue> Create(const DangerousDownloadInfo& dict) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((dict).ToValue());

  return create_results;
}

}  // namespace OnDangerousDownloadOpened

namespace OnSecurityInterstitialShown {

const char kEventName[] = "safeBrowsingPrivate.onSecurityInterstitialShown";

std::unique_ptr<base::ListValue> Create(const InterstitialInfo& dict) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((dict).ToValue());

  return create_results;
}

}  // namespace OnSecurityInterstitialShown

namespace OnSecurityInterstitialProceeded {

const char kEventName[] = "safeBrowsingPrivate.onSecurityInterstitialProceeded";

std::unique_ptr<base::ListValue> Create(const InterstitialInfo& dict) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((dict).ToValue());

  return create_results;
}

}  // namespace OnSecurityInterstitialProceeded

}  // namespace safe_browsing_private
}  // namespace api
}  // namespace extensions

