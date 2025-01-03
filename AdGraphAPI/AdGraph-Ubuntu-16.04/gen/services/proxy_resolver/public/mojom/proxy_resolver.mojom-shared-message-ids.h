// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_PROXY_RESOLVER_PUBLIC_MOJOM_PROXY_RESOLVER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_PROXY_RESOLVER_PUBLIC_MOJOM_PROXY_RESOLVER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace proxy_resolver {
namespace mojom {

namespace internal {


// The 1235395736 value is based on sha256(salt + "ProxyResolver1").
constexpr uint32_t kProxyResolver_GetProxyForUrl_Name = 1235395736;
// The 1899730000 value is based on sha256(salt + "ProxyResolverRequestClient1").
constexpr uint32_t kProxyResolverRequestClient_ReportResult_Name = 1899730000;
// The 1299442255 value is based on sha256(salt + "ProxyResolverRequestClient2").
constexpr uint32_t kProxyResolverRequestClient_Alert_Name = 1299442255;
// The 1870219511 value is based on sha256(salt + "ProxyResolverRequestClient3").
constexpr uint32_t kProxyResolverRequestClient_OnError_Name = 1870219511;
// The 758926334 value is based on sha256(salt + "ProxyResolverRequestClient4").
constexpr uint32_t kProxyResolverRequestClient_ResolveDns_Name = 758926334;
// The 1769599116 value is based on sha256(salt + "ProxyResolverFactory1").
constexpr uint32_t kProxyResolverFactory_CreateResolver_Name = 1769599116;
// The 1638062100 value is based on sha256(salt + "ProxyResolverFactoryRequestClient1").
constexpr uint32_t kProxyResolverFactoryRequestClient_ReportResult_Name = 1638062100;
// The 157970713 value is based on sha256(salt + "ProxyResolverFactoryRequestClient2").
constexpr uint32_t kProxyResolverFactoryRequestClient_Alert_Name = 157970713;
// The 1942184792 value is based on sha256(salt + "ProxyResolverFactoryRequestClient3").
constexpr uint32_t kProxyResolverFactoryRequestClient_OnError_Name = 1942184792;
// The 1752245291 value is based on sha256(salt + "ProxyResolverFactoryRequestClient4").
constexpr uint32_t kProxyResolverFactoryRequestClient_ResolveDns_Name = 1752245291;

}  // namespace internal
}  // namespace mojom
}  // namespace proxy_resolver

#endif  // SERVICES_PROXY_RESOLVER_PUBLIC_MOJOM_PROXY_RESOLVER_MOJOM_SHARED_MESSAGE_IDS_H_