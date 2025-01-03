// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_RAPPOR_PUBLIC_INTERFACES_RAPPOR_RECORDER_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_RAPPOR_PUBLIC_INTERFACES_RAPPOR_RECORDER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace rappor {
namespace mojom {

namespace internal {


// The 1394229440 value is based on sha256(salt + "RapporRecorder1").
constexpr uint32_t kRapporRecorder_RecordRappor_Name = 1394229440;
// The 464809086 value is based on sha256(salt + "RapporRecorder2").
constexpr uint32_t kRapporRecorder_RecordRapporURL_Name = 464809086;

}  // namespace internal
}  // namespace mojom
}  // namespace rappor

#endif  // COMPONENTS_RAPPOR_PUBLIC_INTERFACES_RAPPOR_RECORDER_MOJOM_SHARED_MESSAGE_IDS_H_