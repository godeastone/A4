// Copyright (c) 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   chrome/common/extensions/api/preferences_private.json
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "base/values.h"
#include "chrome/common/extensions/api/preferences_private.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace preferences_private {
//
// Types
//

EasyUnlockProximityRequired::EasyUnlockProximityRequired()
 {}

EasyUnlockProximityRequired::~EasyUnlockProximityRequired() {}
EasyUnlockProximityRequired::EasyUnlockProximityRequired(EasyUnlockProximityRequired&& rhs)
{
}

EasyUnlockProximityRequired& EasyUnlockProximityRequired::operator=(EasyUnlockProximityRequired&& rhs)
{

return *this;
}

// static
bool EasyUnlockProximityRequired::Populate(
    const base::Value& value, EasyUnlockProximityRequired* out) {
  if (!value.is_dict()) {
    return false;
  }
  return true;
}

// static
std::unique_ptr<EasyUnlockProximityRequired> EasyUnlockProximityRequired::FromValue(const base::Value& value) {
  std::unique_ptr<EasyUnlockProximityRequired> out(new EasyUnlockProximityRequired());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> EasyUnlockProximityRequired::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());


  return value;
}



}  // namespace preferences_private
}  // namespace api
}  // namespace extensions

