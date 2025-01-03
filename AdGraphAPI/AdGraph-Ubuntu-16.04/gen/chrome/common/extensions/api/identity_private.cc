// Copyright (c) 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   chrome/common/extensions/api/identity_private.idl
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "base/values.h"
#include "chrome/common/extensions/api/identity_private.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace identity_private {
//
// Events
//

namespace OnWebFlowRequest {

const char kEventName[] = "identityPrivate.onWebFlowRequest";

std::unique_ptr<base::ListValue> Create(const std::string& key, const std::string& url, const std::string& mode) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(std::make_unique<base::Value>(key));

  create_results->Append(std::make_unique<base::Value>(url));

  create_results->Append(std::make_unique<base::Value>(mode));

  return create_results;
}

}  // namespace OnWebFlowRequest

}  // namespace identity_private
}  // namespace api
}  // namespace extensions

