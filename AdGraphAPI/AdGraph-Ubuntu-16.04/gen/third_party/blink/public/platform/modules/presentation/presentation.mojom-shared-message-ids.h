// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PRESENTATION_PRESENTATION_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PRESENTATION_PRESENTATION_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1728286552 value is based on sha256(salt + "PresentationConnection1").
constexpr uint32_t kPresentationConnection_OnMessage_Name = 1728286552;
// The 230222281 value is based on sha256(salt + "PresentationConnection2").
constexpr uint32_t kPresentationConnection_DidChangeState_Name = 230222281;
// The 1734248562 value is based on sha256(salt + "PresentationConnection3").
constexpr uint32_t kPresentationConnection_RequestClose_Name = 1734248562;
// The 1760921362 value is based on sha256(salt + "PresentationService1").
constexpr uint32_t kPresentationService_SetController_Name = 1760921362;
// The 1682785299 value is based on sha256(salt + "PresentationService2").
constexpr uint32_t kPresentationService_SetReceiver_Name = 1682785299;
// The 1438315289 value is based on sha256(salt + "PresentationService3").
constexpr uint32_t kPresentationService_SetDefaultPresentationUrls_Name = 1438315289;
// The 355460945 value is based on sha256(salt + "PresentationService4").
constexpr uint32_t kPresentationService_ListenForScreenAvailability_Name = 355460945;
// The 1399830856 value is based on sha256(salt + "PresentationService5").
constexpr uint32_t kPresentationService_StopListeningForScreenAvailability_Name = 1399830856;
// The 1970147745 value is based on sha256(salt + "PresentationService6").
constexpr uint32_t kPresentationService_StartPresentation_Name = 1970147745;
// The 542766042 value is based on sha256(salt + "PresentationService7").
constexpr uint32_t kPresentationService_ReconnectPresentation_Name = 542766042;
// The 1690979415 value is based on sha256(salt + "PresentationService8").
constexpr uint32_t kPresentationService_SetPresentationConnection_Name = 1690979415;
// The 330640710 value is based on sha256(salt + "PresentationService9").
constexpr uint32_t kPresentationService_CloseConnection_Name = 330640710;
// The 181047064 value is based on sha256(salt + "PresentationService10").
constexpr uint32_t kPresentationService_Terminate_Name = 181047064;
// The 1012555054 value is based on sha256(salt + "PresentationController1").
constexpr uint32_t kPresentationController_OnScreenAvailabilityUpdated_Name = 1012555054;
// The 1012413515 value is based on sha256(salt + "PresentationController2").
constexpr uint32_t kPresentationController_OnDefaultPresentationStarted_Name = 1012413515;
// The 105840109 value is based on sha256(salt + "PresentationController3").
constexpr uint32_t kPresentationController_OnConnectionStateChanged_Name = 105840109;
// The 2096317412 value is based on sha256(salt + "PresentationController4").
constexpr uint32_t kPresentationController_OnConnectionClosed_Name = 2096317412;
// The 1018610472 value is based on sha256(salt + "PresentationReceiver1").
constexpr uint32_t kPresentationReceiver_OnReceiverConnectionAvailable_Name = 1018610472;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PRESENTATION_PRESENTATION_MOJOM_SHARED_MESSAGE_IDS_H_