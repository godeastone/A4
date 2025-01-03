// Copyright (c) 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   chrome/common/extensions/api/webrtc_logging_private.idl
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "base/values.h"
#include "chrome/common/extensions/api/webrtc_logging_private.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace webrtc_logging_private {
//
// Types
//

MetaDataEntry::MetaDataEntry()
 {}

MetaDataEntry::~MetaDataEntry() {}
MetaDataEntry::MetaDataEntry(MetaDataEntry&& rhs)
: key(std::move(rhs.key)),
value(std::move(rhs.value)){
}

MetaDataEntry& MetaDataEntry::operator=(MetaDataEntry&& rhs)
{
key = std::move(rhs.key);
value = std::move(rhs.value);
return *this;
}

// static
bool MetaDataEntry::Populate(
    const base::Value& value, MetaDataEntry* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* key_value = NULL;
  if (!dict->GetWithoutPathExpansion("key", &key_value)) {
    return false;
  }
  {
    if (!key_value->GetAsString(&out->key)) {
      return false;
    }
  }

  const base::Value* value_value = NULL;
  if (!dict->GetWithoutPathExpansion("value", &value_value)) {
    return false;
  }
  {
    if (!value_value->GetAsString(&out->value)) {
      return false;
    }
  }

  return true;
}

// static
std::unique_ptr<MetaDataEntry> MetaDataEntry::FromValue(const base::Value& value) {
  std::unique_ptr<MetaDataEntry> out(new MetaDataEntry());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> MetaDataEntry::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("key", std::make_unique<base::Value>(this->key));

  value->SetWithoutPathExpansion("value", std::make_unique<base::Value>(this->value));


  return value;
}


UploadResult::UploadResult()
 {}

UploadResult::~UploadResult() {}
UploadResult::UploadResult(UploadResult&& rhs)
: report_id(std::move(rhs.report_id)){
}

UploadResult& UploadResult::operator=(UploadResult&& rhs)
{
report_id = std::move(rhs.report_id);
return *this;
}

// static
bool UploadResult::Populate(
    const base::Value& value, UploadResult* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* report_id_value = NULL;
  if (!dict->GetWithoutPathExpansion("reportId", &report_id_value)) {
    return false;
  }
  {
    if (!report_id_value->GetAsString(&out->report_id)) {
      return false;
    }
  }

  return true;
}

// static
std::unique_ptr<UploadResult> UploadResult::FromValue(const base::Value& value) {
  std::unique_ptr<UploadResult> out(new UploadResult());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> UploadResult::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("reportId", std::make_unique<base::Value>(this->report_id));


  return value;
}


RequestInfo::RequestInfo()
 {}

RequestInfo::~RequestInfo() {}
RequestInfo::RequestInfo(RequestInfo&& rhs)
: tab_id(std::move(rhs.tab_id)),
guest_process_id(std::move(rhs.guest_process_id)),
target_webview(std::move(rhs.target_webview)){
}

RequestInfo& RequestInfo::operator=(RequestInfo&& rhs)
{
tab_id = std::move(rhs.tab_id);
guest_process_id = std::move(rhs.guest_process_id);
target_webview = std::move(rhs.target_webview);
return *this;
}

// static
bool RequestInfo::Populate(
    const base::Value& value, RequestInfo* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* tab_id_value = NULL;
  if (dict->GetWithoutPathExpansion("tabId", &tab_id_value)) {
    {
      int temp;
      if (!tab_id_value->GetAsInteger(&temp)) {
        out->tab_id.reset();
        return false;
      }
      else
        out->tab_id.reset(new int(temp));
    }
  }

  const base::Value* guest_process_id_value = NULL;
  if (dict->GetWithoutPathExpansion("guestProcessId", &guest_process_id_value)) {
    {
      int temp;
      if (!guest_process_id_value->GetAsInteger(&temp)) {
        out->guest_process_id.reset();
        return false;
      }
      else
        out->guest_process_id.reset(new int(temp));
    }
  }

  const base::Value* target_webview_value = NULL;
  if (dict->GetWithoutPathExpansion("targetWebview", &target_webview_value)) {
    {
      bool temp;
      if (!target_webview_value->GetAsBoolean(&temp)) {
        out->target_webview.reset();
        return false;
      }
      else
        out->target_webview.reset(new bool(temp));
    }
  }

  return true;
}

// static
std::unique_ptr<RequestInfo> RequestInfo::FromValue(const base::Value& value) {
  std::unique_ptr<RequestInfo> out(new RequestInfo());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> RequestInfo::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->tab_id.get()) {
    value->SetWithoutPathExpansion("tabId", std::make_unique<base::Value>(*this->tab_id));

  }
  if (this->guest_process_id.get()) {
    value->SetWithoutPathExpansion("guestProcessId", std::make_unique<base::Value>(*this->guest_process_id));

  }
  if (this->target_webview.get()) {
    value->SetWithoutPathExpansion("targetWebview", std::make_unique<base::Value>(*this->target_webview));

  }

  return value;
}


RecordingInfo::RecordingInfo()
: did_stop(false),
did_manual_stop(false) {}

RecordingInfo::~RecordingInfo() {}
RecordingInfo::RecordingInfo(RecordingInfo&& rhs)
: prefix_path(std::move(rhs.prefix_path)),
did_stop(rhs.did_stop),
did_manual_stop(rhs.did_manual_stop){
}

RecordingInfo& RecordingInfo::operator=(RecordingInfo&& rhs)
{
prefix_path = std::move(rhs.prefix_path);
did_stop = rhs.did_stop;
did_manual_stop = rhs.did_manual_stop;
return *this;
}

// static
bool RecordingInfo::Populate(
    const base::Value& value, RecordingInfo* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* prefix_path_value = NULL;
  if (!dict->GetWithoutPathExpansion("prefixPath", &prefix_path_value)) {
    return false;
  }
  {
    if (!prefix_path_value->GetAsString(&out->prefix_path)) {
      return false;
    }
  }

  const base::Value* did_stop_value = NULL;
  if (!dict->GetWithoutPathExpansion("didStop", &did_stop_value)) {
    return false;
  }
  {
    if (!did_stop_value->GetAsBoolean(&out->did_stop)) {
      return false;
    }
  }

  const base::Value* did_manual_stop_value = NULL;
  if (!dict->GetWithoutPathExpansion("didManualStop", &did_manual_stop_value)) {
    return false;
  }
  {
    if (!did_manual_stop_value->GetAsBoolean(&out->did_manual_stop)) {
      return false;
    }
  }

  return true;
}

// static
std::unique_ptr<RecordingInfo> RecordingInfo::FromValue(const base::Value& value) {
  std::unique_ptr<RecordingInfo> out(new RecordingInfo());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> RecordingInfo::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("prefixPath", std::make_unique<base::Value>(this->prefix_path));

  value->SetWithoutPathExpansion("didStop", std::make_unique<base::Value>(this->did_stop));

  value->SetWithoutPathExpansion("didManualStop", std::make_unique<base::Value>(this->did_manual_stop));


  return value;
}



//
// Functions
//

namespace SetMetaData {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 3) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* request_value = NULL;
  if (args.Get(0, &request_value) &&
      !request_value->is_none()) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!request_value->GetAsDictionary(&dictionary)) {
        return std::unique_ptr<Params>();
      }
      if (!RequestInfo::Populate(*dictionary, &params->request)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* security_origin_value = NULL;
  if (args.Get(1, &security_origin_value) &&
      !security_origin_value->is_none()) {
    {
      if (!security_origin_value->GetAsString(&params->security_origin)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* meta_data_value = NULL;
  if (args.Get(2, &meta_data_value) &&
      !meta_data_value->is_none()) {
    {
      const base::ListValue* list = NULL;
      if (!meta_data_value->GetAsList(&list)) {
        return std::unique_ptr<Params>();
      }
      else {
        if (!json_schema_compiler::util::PopulateArrayFromList(*list, &params->meta_data)) {
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


std::unique_ptr<base::ListValue> Results::Create() {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace SetMetaData

namespace Start {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* request_value = NULL;
  if (args.Get(0, &request_value) &&
      !request_value->is_none()) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!request_value->GetAsDictionary(&dictionary)) {
        return std::unique_ptr<Params>();
      }
      if (!RequestInfo::Populate(*dictionary, &params->request)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* security_origin_value = NULL;
  if (args.Get(1, &security_origin_value) &&
      !security_origin_value->is_none()) {
    {
      if (!security_origin_value->GetAsString(&params->security_origin)) {
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
}  // namespace Start

namespace SetUploadOnRenderClose {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 3) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* request_value = NULL;
  if (args.Get(0, &request_value) &&
      !request_value->is_none()) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!request_value->GetAsDictionary(&dictionary)) {
        return std::unique_ptr<Params>();
      }
      if (!RequestInfo::Populate(*dictionary, &params->request)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* security_origin_value = NULL;
  if (args.Get(1, &security_origin_value) &&
      !security_origin_value->is_none()) {
    {
      if (!security_origin_value->GetAsString(&params->security_origin)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* should_upload_value = NULL;
  if (args.Get(2, &should_upload_value) &&
      !should_upload_value->is_none()) {
    {
      if (!should_upload_value->GetAsBoolean(&params->should_upload)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


}  // namespace SetUploadOnRenderClose

namespace Stop {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* request_value = NULL;
  if (args.Get(0, &request_value) &&
      !request_value->is_none()) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!request_value->GetAsDictionary(&dictionary)) {
        return std::unique_ptr<Params>();
      }
      if (!RequestInfo::Populate(*dictionary, &params->request)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* security_origin_value = NULL;
  if (args.Get(1, &security_origin_value) &&
      !security_origin_value->is_none()) {
    {
      if (!security_origin_value->GetAsString(&params->security_origin)) {
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
}  // namespace Stop

namespace Store {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 3) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* request_value = NULL;
  if (args.Get(0, &request_value) &&
      !request_value->is_none()) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!request_value->GetAsDictionary(&dictionary)) {
        return std::unique_ptr<Params>();
      }
      if (!RequestInfo::Populate(*dictionary, &params->request)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* security_origin_value = NULL;
  if (args.Get(1, &security_origin_value) &&
      !security_origin_value->is_none()) {
    {
      if (!security_origin_value->GetAsString(&params->security_origin)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* log_id_value = NULL;
  if (args.Get(2, &log_id_value) &&
      !log_id_value->is_none()) {
    {
      if (!log_id_value->GetAsString(&params->log_id)) {
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
}  // namespace Store

namespace UploadStored {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 3) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* request_value = NULL;
  if (args.Get(0, &request_value) &&
      !request_value->is_none()) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!request_value->GetAsDictionary(&dictionary)) {
        return std::unique_ptr<Params>();
      }
      if (!RequestInfo::Populate(*dictionary, &params->request)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* security_origin_value = NULL;
  if (args.Get(1, &security_origin_value) &&
      !security_origin_value->is_none()) {
    {
      if (!security_origin_value->GetAsString(&params->security_origin)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* log_id_value = NULL;
  if (args.Get(2, &log_id_value) &&
      !log_id_value->is_none()) {
    {
      if (!log_id_value->GetAsString(&params->log_id)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


std::unique_ptr<base::ListValue> Results::Create(const UploadResult& result) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((result).ToValue());

  return create_results;
}
}  // namespace UploadStored

namespace Upload {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* request_value = NULL;
  if (args.Get(0, &request_value) &&
      !request_value->is_none()) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!request_value->GetAsDictionary(&dictionary)) {
        return std::unique_ptr<Params>();
      }
      if (!RequestInfo::Populate(*dictionary, &params->request)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* security_origin_value = NULL;
  if (args.Get(1, &security_origin_value) &&
      !security_origin_value->is_none()) {
    {
      if (!security_origin_value->GetAsString(&params->security_origin)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


std::unique_ptr<base::ListValue> Results::Create(const UploadResult& result) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((result).ToValue());

  return create_results;
}
}  // namespace Upload

namespace Discard {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* request_value = NULL;
  if (args.Get(0, &request_value) &&
      !request_value->is_none()) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!request_value->GetAsDictionary(&dictionary)) {
        return std::unique_ptr<Params>();
      }
      if (!RequestInfo::Populate(*dictionary, &params->request)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* security_origin_value = NULL;
  if (args.Get(1, &security_origin_value) &&
      !security_origin_value->is_none()) {
    {
      if (!security_origin_value->GetAsString(&params->security_origin)) {
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
}  // namespace Discard

namespace StartRtpDump {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 4) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* request_value = NULL;
  if (args.Get(0, &request_value) &&
      !request_value->is_none()) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!request_value->GetAsDictionary(&dictionary)) {
        return std::unique_ptr<Params>();
      }
      if (!RequestInfo::Populate(*dictionary, &params->request)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* security_origin_value = NULL;
  if (args.Get(1, &security_origin_value) &&
      !security_origin_value->is_none()) {
    {
      if (!security_origin_value->GetAsString(&params->security_origin)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* incoming_value = NULL;
  if (args.Get(2, &incoming_value) &&
      !incoming_value->is_none()) {
    {
      if (!incoming_value->GetAsBoolean(&params->incoming)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* outgoing_value = NULL;
  if (args.Get(3, &outgoing_value) &&
      !outgoing_value->is_none()) {
    {
      if (!outgoing_value->GetAsBoolean(&params->outgoing)) {
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
}  // namespace StartRtpDump

namespace StopRtpDump {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 4) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* request_value = NULL;
  if (args.Get(0, &request_value) &&
      !request_value->is_none()) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!request_value->GetAsDictionary(&dictionary)) {
        return std::unique_ptr<Params>();
      }
      if (!RequestInfo::Populate(*dictionary, &params->request)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* security_origin_value = NULL;
  if (args.Get(1, &security_origin_value) &&
      !security_origin_value->is_none()) {
    {
      if (!security_origin_value->GetAsString(&params->security_origin)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* incoming_value = NULL;
  if (args.Get(2, &incoming_value) &&
      !incoming_value->is_none()) {
    {
      if (!incoming_value->GetAsBoolean(&params->incoming)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* outgoing_value = NULL;
  if (args.Get(3, &outgoing_value) &&
      !outgoing_value->is_none()) {
    {
      if (!outgoing_value->GetAsBoolean(&params->outgoing)) {
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
}  // namespace StopRtpDump

namespace StartAudioDebugRecordings {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 3) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* request_value = NULL;
  if (args.Get(0, &request_value) &&
      !request_value->is_none()) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!request_value->GetAsDictionary(&dictionary)) {
        return std::unique_ptr<Params>();
      }
      if (!RequestInfo::Populate(*dictionary, &params->request)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* security_origin_value = NULL;
  if (args.Get(1, &security_origin_value) &&
      !security_origin_value->is_none()) {
    {
      if (!security_origin_value->GetAsString(&params->security_origin)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* seconds_value = NULL;
  if (args.Get(2, &seconds_value) &&
      !seconds_value->is_none()) {
    {
      if (!seconds_value->GetAsInteger(&params->seconds)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


std::unique_ptr<base::ListValue> Results::Create(const RecordingInfo& info) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((info).ToValue());

  return create_results;
}
}  // namespace StartAudioDebugRecordings

namespace StopAudioDebugRecordings {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* request_value = NULL;
  if (args.Get(0, &request_value) &&
      !request_value->is_none()) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!request_value->GetAsDictionary(&dictionary)) {
        return std::unique_ptr<Params>();
      }
      if (!RequestInfo::Populate(*dictionary, &params->request)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* security_origin_value = NULL;
  if (args.Get(1, &security_origin_value) &&
      !security_origin_value->is_none()) {
    {
      if (!security_origin_value->GetAsString(&params->security_origin)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


std::unique_ptr<base::ListValue> Results::Create(const RecordingInfo& info) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((info).ToValue());

  return create_results;
}
}  // namespace StopAudioDebugRecordings

namespace StartEventLogging {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 5) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* request_value = NULL;
  if (args.Get(0, &request_value) &&
      !request_value->is_none()) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!request_value->GetAsDictionary(&dictionary)) {
        return std::unique_ptr<Params>();
      }
      if (!RequestInfo::Populate(*dictionary, &params->request)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* security_origin_value = NULL;
  if (args.Get(1, &security_origin_value) &&
      !security_origin_value->is_none()) {
    {
      if (!security_origin_value->GetAsString(&params->security_origin)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* peer_connection_id_value = NULL;
  if (args.Get(2, &peer_connection_id_value) &&
      !peer_connection_id_value->is_none()) {
    {
      if (!peer_connection_id_value->GetAsString(&params->peer_connection_id)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* max_log_size_bytes_value = NULL;
  if (args.Get(3, &max_log_size_bytes_value) &&
      !max_log_size_bytes_value->is_none()) {
    {
      if (!max_log_size_bytes_value->GetAsInteger(&params->max_log_size_bytes)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* metadata_value = NULL;
  if (args.Get(4, &metadata_value) &&
      !metadata_value->is_none()) {
    {
      if (!metadata_value->GetAsString(&params->metadata)) {
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
}  // namespace StartEventLogging

namespace GetLogsDirectory {

Results::Entry::Entry()
 {}

Results::Entry::~Entry() {}
Results::Entry::Entry(Entry&& rhs)
{
additional_properties.Swap(&rhs.additional_properties);
}

Results::Entry& Results::Entry::operator=(Entry&& rhs)
{
additional_properties.Swap(&rhs.additional_properties);
return *this;
}

std::unique_ptr<base::DictionaryValue> Results::Entry::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->MergeDictionary(&additional_properties);

  return value;
}


std::unique_ptr<base::ListValue> Results::Create(const Entry& entry) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((entry).ToValue());

  return create_results;
}
}  // namespace GetLogsDirectory

}  // namespace webrtc_logging_private
}  // namespace api
}  // namespace extensions

