// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_PREFERENCES_PUBLIC_MOJOM_TRACKED_PREFERENCE_VALIDATION_DELEGATE_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_PREFERENCES_PUBLIC_MOJOM_TRACKED_PREFERENCE_VALIDATION_DELEGATE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace prefs {
namespace mojom {

namespace internal {


// The 1019688102 value is based on sha256(salt + "TrackedPreferenceValidationDelegate1").
constexpr uint32_t kTrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Name = 1019688102;
// The 1418367815 value is based on sha256(salt + "TrackedPreferenceValidationDelegate2").
constexpr uint32_t kTrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Name = 1418367815;

}  // namespace internal
}  // namespace mojom
}  // namespace prefs

#endif  // SERVICES_PREFERENCES_PUBLIC_MOJOM_TRACKED_PREFERENCE_VALIDATION_DELEGATE_MOJOM_SHARED_MESSAGE_IDS_H_