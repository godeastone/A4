// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_FIELD_TRIAL_RECORDER_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_FIELD_TRIAL_RECORDER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


// The 592528549 value is based on sha256(salt + "FieldTrialRecorder1").
constexpr uint32_t kFieldTrialRecorder_FieldTrialActivated_Name = 592528549;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_FIELD_TRIAL_RECORDER_MOJOM_SHARED_MESSAGE_IDS_H_