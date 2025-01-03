// This file is generated

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "headless/public/devtools/domains/types_audits.h"
#include "headless/public/devtools/domains/types_dom.h"
#include "headless/public/devtools/domains/types_debugger.h"
#include "headless/public/devtools/domains/types_emulation.h"
#include "headless/public/devtools/domains/types_io.h"
#include "headless/public/devtools/domains/types_network.h"
#include "headless/public/devtools/domains/types_page.h"
#include "headless/public/devtools/domains/types_runtime.h"
#include "headless/public/devtools/domains/types_security.h"

#include "base/memory/ptr_util.h"
#include "headless/public/devtools/internal/type_conversions_audits.h"
#include "headless/public/devtools/internal/type_conversions_dom.h"
#include "headless/public/devtools/internal/type_conversions_debugger.h"
#include "headless/public/devtools/internal/type_conversions_emulation.h"
#include "headless/public/devtools/internal/type_conversions_io.h"
#include "headless/public/devtools/internal/type_conversions_network.h"
#include "headless/public/devtools/internal/type_conversions_page.h"
#include "headless/public/devtools/internal/type_conversions_runtime.h"
#include "headless/public/devtools/internal/type_conversions_security.h"

namespace headless {

namespace internal {

template <typename T>
std::unique_ptr<base::Value> ToValue(const T& value) {
  return ToValueImpl(value, static_cast<T*>(nullptr));
}

}  // namespace internal

namespace audits {

std::unique_ptr<GetEncodedResponseParams> GetEncodedResponseParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("GetEncodedResponseParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<GetEncodedResponseParams> result(new GetEncodedResponseParams());
  errors->Push();
  errors->SetName("GetEncodedResponseParams");
  const base::Value* request_id_value = value.FindKey("requestId");
  if (request_id_value) {
    errors->SetName("requestId");
    result->request_id_ = internal::FromValue<std::string>::Parse(*request_id_value, errors);
  } else {
    errors->AddError("required property missing: requestId");
  }
  const base::Value* encoding_value = value.FindKey("encoding");
  if (encoding_value) {
    errors->SetName("encoding");
    result->encoding_ = internal::FromValue<::headless::audits::GetEncodedResponseEncoding>::Parse(*encoding_value, errors);
  } else {
    errors->AddError("required property missing: encoding");
  }
  const base::Value* quality_value = value.FindKey("quality");
  if (quality_value) {
    errors->SetName("quality");
    result->quality_ = internal::FromValue<double>::Parse(*quality_value, errors);
  }
  const base::Value* size_only_value = value.FindKey("sizeOnly");
  if (size_only_value) {
    errors->SetName("sizeOnly");
    result->size_only_ = internal::FromValue<bool>::Parse(*size_only_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> GetEncodedResponseParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("requestId", internal::ToValue(request_id_));
  result->Set("encoding", internal::ToValue(encoding_));
  if (quality_)
    result->Set("quality", internal::ToValue(quality_.value()));
  if (size_only_)
    result->Set("sizeOnly", internal::ToValue(size_only_.value()));
  return std::move(result);
}

std::unique_ptr<GetEncodedResponseParams> GetEncodedResponseParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<GetEncodedResponseParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<GetEncodedResponseResult> GetEncodedResponseResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("GetEncodedResponseResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<GetEncodedResponseResult> result(new GetEncodedResponseResult());
  errors->Push();
  errors->SetName("GetEncodedResponseResult");
  const base::Value* body_value = value.FindKey("body");
  if (body_value) {
    errors->SetName("body");
    result->body_ = internal::FromValue<std::string>::Parse(*body_value, errors);
  }
  const base::Value* original_size_value = value.FindKey("originalSize");
  if (original_size_value) {
    errors->SetName("originalSize");
    result->original_size_ = internal::FromValue<int>::Parse(*original_size_value, errors);
  } else {
    errors->AddError("required property missing: originalSize");
  }
  const base::Value* encoded_size_value = value.FindKey("encodedSize");
  if (encoded_size_value) {
    errors->SetName("encodedSize");
    result->encoded_size_ = internal::FromValue<int>::Parse(*encoded_size_value, errors);
  } else {
    errors->AddError("required property missing: encodedSize");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> GetEncodedResponseResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  if (body_)
    result->Set("body", internal::ToValue(body_.value()));
  result->Set("originalSize", internal::ToValue(original_size_));
  result->Set("encodedSize", internal::ToValue(encoded_size_));
  return std::move(result);
}

std::unique_ptr<GetEncodedResponseResult> GetEncodedResponseResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<GetEncodedResponseResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


}  // namespace audits
}  // namespace headless
