// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_SUPERVISED_USER_COMMANDS_MOJOM_SHARED_MESSAGE_IDS_H_
#define CHROME_COMMON_SUPERVISED_USER_COMMANDS_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace supervised_user {
namespace mojom {

namespace internal {


// The 2021424456 value is based on sha256(salt + "SupervisedUserCommands1").
constexpr uint32_t kSupervisedUserCommands_GoBack_Name = 2021424456;
// The 953606165 value is based on sha256(salt + "SupervisedUserCommands2").
constexpr uint32_t kSupervisedUserCommands_RequestPermission_Name = 953606165;
// The 1115727065 value is based on sha256(salt + "SupervisedUserCommands3").
constexpr uint32_t kSupervisedUserCommands_Feedback_Name = 1115727065;

}  // namespace internal
}  // namespace mojom
}  // namespace supervised_user

#endif  // CHROME_COMMON_SUPERVISED_USER_COMMANDS_MOJOM_SHARED_MESSAGE_IDS_H_