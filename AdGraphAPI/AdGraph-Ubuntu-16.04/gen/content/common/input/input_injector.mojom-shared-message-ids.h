// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_INPUT_INPUT_INJECTOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_INPUT_INPUT_INJECTOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


// The 1360237144 value is based on sha256(salt + "InputInjector1").
constexpr uint32_t kInputInjector_QueueSyntheticSmoothDrag_Name = 1360237144;
// The 229414606 value is based on sha256(salt + "InputInjector2").
constexpr uint32_t kInputInjector_QueueSyntheticSmoothScroll_Name = 229414606;
// The 580441640 value is based on sha256(salt + "InputInjector3").
constexpr uint32_t kInputInjector_QueueSyntheticPinch_Name = 580441640;
// The 1606674851 value is based on sha256(salt + "InputInjector4").
constexpr uint32_t kInputInjector_QueueSyntheticTap_Name = 1606674851;
// The 1434867583 value is based on sha256(salt + "InputInjector5").
constexpr uint32_t kInputInjector_QueueSyntheticPointerAction_Name = 1434867583;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_INPUT_INPUT_INJECTOR_MOJOM_SHARED_MESSAGE_IDS_H_