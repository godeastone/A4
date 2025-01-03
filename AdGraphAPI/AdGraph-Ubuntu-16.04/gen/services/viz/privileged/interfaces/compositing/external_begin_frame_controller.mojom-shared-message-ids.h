// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_EXTERNAL_BEGIN_FRAME_CONTROLLER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_EXTERNAL_BEGIN_FRAME_CONTROLLER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace viz {
namespace mojom {

namespace internal {


// The 920870612 value is based on sha256(salt + "ExternalBeginFrameController1").
constexpr uint32_t kExternalBeginFrameController_IssueExternalBeginFrame_Name = 920870612;
// The 544393315 value is based on sha256(salt + "ExternalBeginFrameControllerClient1").
constexpr uint32_t kExternalBeginFrameControllerClient_OnNeedsBeginFrames_Name = 544393315;
// The 1881681204 value is based on sha256(salt + "ExternalBeginFrameControllerClient2").
constexpr uint32_t kExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Name = 1881681204;

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_EXTERNAL_BEGIN_FRAME_CONTROLLER_MOJOM_SHARED_MESSAGE_IDS_H_