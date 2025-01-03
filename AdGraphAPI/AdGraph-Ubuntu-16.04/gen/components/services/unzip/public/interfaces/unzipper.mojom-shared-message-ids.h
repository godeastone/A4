// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_UNZIP_PUBLIC_INTERFACES_UNZIPPER_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_SERVICES_UNZIP_PUBLIC_INTERFACES_UNZIPPER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace unzip {
namespace mojom {

namespace internal {


// The 78654926 value is based on sha256(salt + "UnzipFilter1").
constexpr uint32_t kUnzipFilter_ShouldUnzipFile_Name = 78654926;
// The 271520874 value is based on sha256(salt + "Unzipper1").
constexpr uint32_t kUnzipper_Unzip_Name = 271520874;
// The 1106889541 value is based on sha256(salt + "Unzipper2").
constexpr uint32_t kUnzipper_UnzipWithFilter_Name = 1106889541;

}  // namespace internal
}  // namespace mojom
}  // namespace unzip

#endif  // COMPONENTS_SERVICES_UNZIP_PUBLIC_INTERFACES_UNZIPPER_MOJOM_SHARED_MESSAGE_IDS_H_