// Copyright (c) 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   chrome/common/extensions/api/streams_private.idl
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "base/values.h"
#include "chrome/common/extensions/api/streams_private.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace streams_private {
//
// Types
//

StreamInfo::ResponseHeaders::ResponseHeaders()
 {}

StreamInfo::ResponseHeaders::~ResponseHeaders() {}
StreamInfo::ResponseHeaders::ResponseHeaders(ResponseHeaders&& rhs)
{
additional_properties.Swap(&rhs.additional_properties);
}

StreamInfo::ResponseHeaders& StreamInfo::ResponseHeaders::operator=(ResponseHeaders&& rhs)
{
additional_properties.Swap(&rhs.additional_properties);
return *this;
}

// static
bool StreamInfo::ResponseHeaders::Populate(
    const base::Value& value, ResponseHeaders* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  out->additional_properties.MergeDictionary(dict);
  return true;
}

std::unique_ptr<base::DictionaryValue> StreamInfo::ResponseHeaders::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->MergeDictionary(&additional_properties);

  return value;
}



StreamInfo::StreamInfo()
: tab_id(0),
expected_content_size(0),
embedded(false) {}

StreamInfo::~StreamInfo() {}
StreamInfo::StreamInfo(StreamInfo&& rhs)
: mime_type(std::move(rhs.mime_type)),
original_url(std::move(rhs.original_url)),
stream_url(std::move(rhs.stream_url)),
tab_id(rhs.tab_id),
view_id(std::move(rhs.view_id)),
expected_content_size(rhs.expected_content_size),
response_headers(std::move(rhs.response_headers)),
embedded(rhs.embedded){
}

StreamInfo& StreamInfo::operator=(StreamInfo&& rhs)
{
mime_type = std::move(rhs.mime_type);
original_url = std::move(rhs.original_url);
stream_url = std::move(rhs.stream_url);
tab_id = rhs.tab_id;
view_id = std::move(rhs.view_id);
expected_content_size = rhs.expected_content_size;
response_headers = std::move(rhs.response_headers);
embedded = rhs.embedded;
return *this;
}

// static
bool StreamInfo::Populate(
    const base::Value& value, StreamInfo* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* mime_type_value = NULL;
  if (!dict->GetWithoutPathExpansion("mimeType", &mime_type_value)) {
    return false;
  }
  {
    if (!mime_type_value->GetAsString(&out->mime_type)) {
      return false;
    }
  }

  const base::Value* original_url_value = NULL;
  if (!dict->GetWithoutPathExpansion("originalUrl", &original_url_value)) {
    return false;
  }
  {
    if (!original_url_value->GetAsString(&out->original_url)) {
      return false;
    }
  }

  const base::Value* stream_url_value = NULL;
  if (!dict->GetWithoutPathExpansion("streamUrl", &stream_url_value)) {
    return false;
  }
  {
    if (!stream_url_value->GetAsString(&out->stream_url)) {
      return false;
    }
  }

  const base::Value* tab_id_value = NULL;
  if (!dict->GetWithoutPathExpansion("tabId", &tab_id_value)) {
    return false;
  }
  {
    if (!tab_id_value->GetAsInteger(&out->tab_id)) {
      return false;
    }
  }

  const base::Value* view_id_value = NULL;
  if (dict->GetWithoutPathExpansion("viewId", &view_id_value)) {
    {
      std::string temp;
      if (!view_id_value->GetAsString(&temp)) {
        out->view_id.reset();
        return false;
      }
      else
        out->view_id.reset(new std::string(temp));
    }
  }

  const base::Value* expected_content_size_value = NULL;
  if (!dict->GetWithoutPathExpansion("expectedContentSize", &expected_content_size_value)) {
    return false;
  }
  {
    if (!expected_content_size_value->GetAsInteger(&out->expected_content_size)) {
      return false;
    }
  }

  const base::Value* response_headers_value = NULL;
  if (!dict->GetWithoutPathExpansion("responseHeaders", &response_headers_value)) {
    return false;
  }
  {
    const base::DictionaryValue* dictionary = NULL;
    if (!response_headers_value->GetAsDictionary(&dictionary)) {
      return false;
    }
    if (!ResponseHeaders::Populate(*dictionary, &out->response_headers)) {
      return false;
    }
  }

  const base::Value* embedded_value = NULL;
  if (!dict->GetWithoutPathExpansion("embedded", &embedded_value)) {
    return false;
  }
  {
    if (!embedded_value->GetAsBoolean(&out->embedded)) {
      return false;
    }
  }

  return true;
}

// static
std::unique_ptr<StreamInfo> StreamInfo::FromValue(const base::Value& value) {
  std::unique_ptr<StreamInfo> out(new StreamInfo());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> StreamInfo::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("mimeType", std::make_unique<base::Value>(this->mime_type));

  value->SetWithoutPathExpansion("originalUrl", std::make_unique<base::Value>(this->original_url));

  value->SetWithoutPathExpansion("streamUrl", std::make_unique<base::Value>(this->stream_url));

  value->SetWithoutPathExpansion("tabId", std::make_unique<base::Value>(this->tab_id));

  if (this->view_id.get()) {
    value->SetWithoutPathExpansion("viewId", std::make_unique<base::Value>(*this->view_id));

  }
  value->SetWithoutPathExpansion("expectedContentSize", std::make_unique<base::Value>(this->expected_content_size));

  value->SetWithoutPathExpansion("responseHeaders", (this->response_headers).ToValue());

  value->SetWithoutPathExpansion("embedded", std::make_unique<base::Value>(this->embedded));


  return value;
}



//
// Functions
//

namespace Abort {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* stream_url_value = NULL;
  if (args.Get(0, &stream_url_value) &&
      !stream_url_value->is_none()) {
    {
      if (!stream_url_value->GetAsString(&params->stream_url)) {
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
}  // namespace Abort

//
// Events
//

namespace OnExecuteMimeTypeHandler {

const char kEventName[] = "streamsPrivate.onExecuteMimeTypeHandler";

std::unique_ptr<base::ListValue> Create(const StreamInfo& stream_info) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((stream_info).ToValue());

  return create_results;
}

}  // namespace OnExecuteMimeTypeHandler

}  // namespace streams_private
}  // namespace api
}  // namespace extensions

