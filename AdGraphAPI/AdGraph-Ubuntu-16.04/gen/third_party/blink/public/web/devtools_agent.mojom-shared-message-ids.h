// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_WEB_DEVTOOLS_AGENT_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_WEB_DEVTOOLS_AGENT_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 211506115 value is based on sha256(salt + "DevToolsAgent1").
constexpr uint32_t kDevToolsAgent_AttachDevToolsSession_Name = 211506115;
// The 1666068463 value is based on sha256(salt + "DevToolsAgent2").
constexpr uint32_t kDevToolsAgent_InspectElement_Name = 1666068463;
// The 922799425 value is based on sha256(salt + "DevToolsSession1").
constexpr uint32_t kDevToolsSession_DispatchProtocolCommand_Name = 922799425;
// The 827810839 value is based on sha256(salt + "DevToolsSessionHost1").
constexpr uint32_t kDevToolsSessionHost_DispatchProtocolResponse_Name = 827810839;
// The 1558355937 value is based on sha256(salt + "DevToolsSessionHost2").
constexpr uint32_t kDevToolsSessionHost_DispatchProtocolNotification_Name = 1558355937;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_WEB_DEVTOOLS_AGENT_MOJOM_SHARED_MESSAGE_IDS_H_