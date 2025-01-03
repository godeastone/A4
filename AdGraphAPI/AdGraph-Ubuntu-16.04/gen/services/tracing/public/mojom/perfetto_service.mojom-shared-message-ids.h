// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace tracing {
namespace mojom {

namespace internal {


// The 877999084 value is based on sha256(salt + "ProducerHost1").
constexpr uint32_t kProducerHost_CommitData_Name = 877999084;
// The 1517782341 value is based on sha256(salt + "ProducerClient1").
constexpr uint32_t kProducerClient_OnTracingStart_Name = 1517782341;
// The 487142254 value is based on sha256(salt + "ProducerClient2").
constexpr uint32_t kProducerClient_CreateDataSourceInstance_Name = 487142254;
// The 1867099224 value is based on sha256(salt + "ProducerClient3").
constexpr uint32_t kProducerClient_TearDownDataSourceInstance_Name = 1867099224;
// The 1564244995 value is based on sha256(salt + "ProducerClient4").
constexpr uint32_t kProducerClient_Flush_Name = 1564244995;
// The 130158720 value is based on sha256(salt + "PerfettoService1").
constexpr uint32_t kPerfettoService_ConnectToProducerHost_Name = 130158720;

}  // namespace internal
}  // namespace mojom
}  // namespace tracing

#endif  // SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_