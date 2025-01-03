// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PAYMENTS_PAYMENT_APP_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PAYMENTS_PAYMENT_APP_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace payments {
namespace mojom {

namespace internal {


// The 1243834584 value is based on sha256(salt + "PaymentManager1").
constexpr uint32_t kPaymentManager_Init_Name = 1243834584;
// The 1636847928 value is based on sha256(salt + "PaymentManager2").
constexpr uint32_t kPaymentManager_DeletePaymentInstrument_Name = 1636847928;
// The 1921171154 value is based on sha256(salt + "PaymentManager3").
constexpr uint32_t kPaymentManager_GetPaymentInstrument_Name = 1921171154;
// The 1157319725 value is based on sha256(salt + "PaymentManager4").
constexpr uint32_t kPaymentManager_KeysOfPaymentInstruments_Name = 1157319725;
// The 454174435 value is based on sha256(salt + "PaymentManager5").
constexpr uint32_t kPaymentManager_HasPaymentInstrument_Name = 454174435;
// The 1899672132 value is based on sha256(salt + "PaymentManager6").
constexpr uint32_t kPaymentManager_SetPaymentInstrument_Name = 1899672132;
// The 1986422900 value is based on sha256(salt + "PaymentManager7").
constexpr uint32_t kPaymentManager_ClearPaymentInstruments_Name = 1986422900;
// The 592181030 value is based on sha256(salt + "PaymentManager8").
constexpr uint32_t kPaymentManager_SetUserHint_Name = 592181030;
// The 609724793 value is based on sha256(salt + "PaymentHandlerResponseCallback1").
constexpr uint32_t kPaymentHandlerResponseCallback_OnResponseForAbortPayment_Name = 609724793;
// The 1118563485 value is based on sha256(salt + "PaymentHandlerResponseCallback2").
constexpr uint32_t kPaymentHandlerResponseCallback_OnResponseForCanMakePayment_Name = 1118563485;
// The 1441995620 value is based on sha256(salt + "PaymentHandlerResponseCallback3").
constexpr uint32_t kPaymentHandlerResponseCallback_OnResponseForPaymentRequest_Name = 1441995620;

}  // namespace internal
}  // namespace mojom
}  // namespace payments

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PAYMENTS_PAYMENT_APP_MOJOM_SHARED_MESSAGE_IDS_H_