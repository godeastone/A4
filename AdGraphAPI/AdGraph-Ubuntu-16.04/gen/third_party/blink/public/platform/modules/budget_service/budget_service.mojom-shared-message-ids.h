// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BUDGET_SERVICE_BUDGET_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BUDGET_SERVICE_BUDGET_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 534283272 value is based on sha256(salt + "BudgetService1").
constexpr uint32_t kBudgetService_GetCost_Name = 534283272;
// The 1977295478 value is based on sha256(salt + "BudgetService2").
constexpr uint32_t kBudgetService_GetBudget_Name = 1977295478;
// The 1838908234 value is based on sha256(salt + "BudgetService3").
constexpr uint32_t kBudgetService_Reserve_Name = 1838908234;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BUDGET_SERVICE_BUDGET_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_