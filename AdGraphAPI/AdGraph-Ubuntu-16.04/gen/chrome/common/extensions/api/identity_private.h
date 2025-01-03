// Copyright (c) 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   chrome/common/extensions/api/identity_private.idl
// DO NOT EDIT.

#ifndef CHROME_COMMON_EXTENSIONS_API_IDENTITY_PRIVATE_H__
#define CHROME_COMMON_EXTENSIONS_API_IDENTITY_PRIVATE_H__

#include <stdint.h>

#include <map>
#include <memory>
#include <string>
#include <vector>

#include "base/logging.h"
#include "base/values.h"

namespace extensions {
namespace api {
namespace identity_private {

//
// Events
//

namespace OnWebFlowRequest {

extern const char kEventName[];  // "identityPrivate.onWebFlowRequest"

std::unique_ptr<base::ListValue> Create(const std::string& key, const std::string& url, const std::string& mode);
}  // namespace OnWebFlowRequest

}  // namespace identity_private
}  // namespace api
}  // namespace extensions
#endif  // CHROME_COMMON_EXTENSIONS_API_IDENTITY_PRIVATE_H__
