// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PAYMENTS_PAYMENT_REQUEST_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PAYMENTS_PAYMENT_REQUEST_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace payments {
namespace mojom {

namespace internal {


// The 1971519876 value is based on sha256(salt + "PaymentRequestClient1").
constexpr uint32_t kPaymentRequestClient_OnShippingAddressChange_Name = 1971519876;
// The 1214123946 value is based on sha256(salt + "PaymentRequestClient2").
constexpr uint32_t kPaymentRequestClient_OnShippingOptionChange_Name = 1214123946;
// The 2076698315 value is based on sha256(salt + "PaymentRequestClient3").
constexpr uint32_t kPaymentRequestClient_OnPaymentResponse_Name = 2076698315;
// The 746265144 value is based on sha256(salt + "PaymentRequestClient4").
constexpr uint32_t kPaymentRequestClient_OnError_Name = 746265144;
// The 1020889524 value is based on sha256(salt + "PaymentRequestClient5").
constexpr uint32_t kPaymentRequestClient_OnComplete_Name = 1020889524;
// The 681933147 value is based on sha256(salt + "PaymentRequestClient6").
constexpr uint32_t kPaymentRequestClient_OnAbort_Name = 681933147;
// The 92862420 value is based on sha256(salt + "PaymentRequestClient7").
constexpr uint32_t kPaymentRequestClient_OnCanMakePayment_Name = 92862420;
// The 73680076 value is based on sha256(salt + "PaymentRequestClient8").
constexpr uint32_t kPaymentRequestClient_WarnNoFavicon_Name = 73680076;
// The 36335975 value is based on sha256(salt + "PaymentRequest1").
constexpr uint32_t kPaymentRequest_Init_Name = 36335975;
// The 380323998 value is based on sha256(salt + "PaymentRequest2").
constexpr uint32_t kPaymentRequest_Show_Name = 380323998;
// The 448938127 value is based on sha256(salt + "PaymentRequest3").
constexpr uint32_t kPaymentRequest_UpdateWith_Name = 448938127;
// The 562606786 value is based on sha256(salt + "PaymentRequest4").
constexpr uint32_t kPaymentRequest_NoUpdatedPaymentDetails_Name = 562606786;
// The 527662873 value is based on sha256(salt + "PaymentRequest5").
constexpr uint32_t kPaymentRequest_Abort_Name = 527662873;
// The 269881068 value is based on sha256(salt + "PaymentRequest6").
constexpr uint32_t kPaymentRequest_Complete_Name = 269881068;
// The 253275659 value is based on sha256(salt + "PaymentRequest7").
constexpr uint32_t kPaymentRequest_CanMakePayment_Name = 253275659;

}  // namespace internal
}  // namespace mojom
}  // namespace payments

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PAYMENTS_PAYMENT_REQUEST_MOJOM_SHARED_MESSAGE_IDS_H_