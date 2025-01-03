// Copyright (c) 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   chrome/common/extensions/api/preferences_private.json
// DO NOT EDIT.

#ifndef CHROME_COMMON_EXTENSIONS_API_PREFERENCES_PRIVATE_H__
#define CHROME_COMMON_EXTENSIONS_API_PREFERENCES_PRIVATE_H__

#include <stdint.h>

#include <map>
#include <memory>
#include <string>
#include <vector>

#include "base/logging.h"
#include "base/values.h"

namespace extensions {
namespace api {
namespace preferences_private {

//
// Types
//

struct EasyUnlockProximityRequired {
  EasyUnlockProximityRequired();
  ~EasyUnlockProximityRequired();
  EasyUnlockProximityRequired(EasyUnlockProximityRequired&& rhs);
  EasyUnlockProximityRequired& operator=(EasyUnlockProximityRequired&& rhs);

  // Populates a EasyUnlockProximityRequired object from a base::Value. Returns
  // whether |out| was successfully populated.
  static bool Populate(const base::Value& value, EasyUnlockProximityRequired* out);

  // Creates a EasyUnlockProximityRequired object from a base::Value, or NULL on
  // failure.
  static std::unique_ptr<EasyUnlockProximityRequired> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this EasyUnlockProximityRequired object.
  std::unique_ptr<base::DictionaryValue> ToValue() const;


 private:
  DISALLOW_COPY_AND_ASSIGN(EasyUnlockProximityRequired);
};


}  // namespace preferences_private
}  // namespace api
}  // namespace extensions
#endif  // CHROME_COMMON_EXTENSIONS_API_PREFERENCES_PRIVATE_H__
