// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 1379385407 value is based on sha256(salt + "URLLoader1").
constexpr uint32_t kURLLoader_FollowRedirect_Name = 1379385407;
// The 939457447 value is based on sha256(salt + "URLLoader2").
constexpr uint32_t kURLLoader_ProceedWithResponse_Name = 939457447;
// The 1531148955 value is based on sha256(salt + "URLLoader3").
constexpr uint32_t kURLLoader_SetPriority_Name = 1531148955;
// The 4194407 value is based on sha256(salt + "URLLoader4").
constexpr uint32_t kURLLoader_PauseReadingBodyFromNet_Name = 4194407;
// The 249817084 value is based on sha256(salt + "URLLoader5").
constexpr uint32_t kURLLoader_ResumeReadingBodyFromNet_Name = 249817084;
// The 1868204169 value is based on sha256(salt + "URLLoaderClient1").
constexpr uint32_t kURLLoaderClient_OnReceiveResponse_Name = 1868204169;
// The 1049644969 value is based on sha256(salt + "URLLoaderClient2").
constexpr uint32_t kURLLoaderClient_OnReceiveRedirect_Name = 1049644969;
// The 961154844 value is based on sha256(salt + "URLLoaderClient3").
constexpr uint32_t kURLLoaderClient_OnDataDownloaded_Name = 961154844;
// The 975734339 value is based on sha256(salt + "URLLoaderClient4").
constexpr uint32_t kURLLoaderClient_OnUploadProgress_Name = 975734339;
// The 1968344360 value is based on sha256(salt + "URLLoaderClient5").
constexpr uint32_t kURLLoaderClient_OnReceiveCachedMetadata_Name = 1968344360;
// The 1307994468 value is based on sha256(salt + "URLLoaderClient6").
constexpr uint32_t kURLLoaderClient_OnTransferSizeUpdated_Name = 1307994468;
// The 1996793266 value is based on sha256(salt + "URLLoaderClient7").
constexpr uint32_t kURLLoaderClient_OnStartLoadingResponseBody_Name = 1996793266;
// The 1998033001 value is based on sha256(salt + "URLLoaderClient8").
constexpr uint32_t kURLLoaderClient_OnComplete_Name = 1998033001;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_SHARED_MESSAGE_IDS_H_