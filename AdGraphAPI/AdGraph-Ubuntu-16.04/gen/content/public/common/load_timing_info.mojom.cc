// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "content/public/common/load_timing_info.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/logging.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "content/public/common/load_timing_info.mojom-shared-message-ids.h"
#include "content/public/common/load_timing_info_struct_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
namespace content {
namespace mojom {
LoadTimingInfoConnectTiming::LoadTimingInfoConnectTiming()
    : dns_start(),
      dns_end(),
      connect_start(),
      connect_end(),
      ssl_start(),
      ssl_end() {}

LoadTimingInfoConnectTiming::LoadTimingInfoConnectTiming(
    base::TimeTicks dns_start_in,
    base::TimeTicks dns_end_in,
    base::TimeTicks connect_start_in,
    base::TimeTicks connect_end_in,
    base::TimeTicks ssl_start_in,
    base::TimeTicks ssl_end_in)
    : dns_start(std::move(dns_start_in)),
      dns_end(std::move(dns_end_in)),
      connect_start(std::move(connect_start_in)),
      connect_end(std::move(connect_end_in)),
      ssl_start(std::move(ssl_start_in)),
      ssl_end(std::move(ssl_end_in)) {}

LoadTimingInfoConnectTiming::~LoadTimingInfoConnectTiming() = default;

bool LoadTimingInfoConnectTiming::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
LoadTimingInfo::LoadTimingInfo()
    : socket_reused(),
      socket_log_id(),
      request_start_time(),
      request_start(),
      proxy_resolve_start(),
      proxy_resolve_end(),
      connect_timing(),
      send_start(),
      send_end(),
      receive_headers_end(),
      push_start(),
      push_end() {}

LoadTimingInfo::LoadTimingInfo(
    bool socket_reused_in,
    uint32_t socket_log_id_in,
    base::Time request_start_time_in,
    base::TimeTicks request_start_in,
    base::TimeTicks proxy_resolve_start_in,
    base::TimeTicks proxy_resolve_end_in,
    const net::LoadTimingInfo::ConnectTiming& connect_timing_in,
    base::TimeTicks send_start_in,
    base::TimeTicks send_end_in,
    base::TimeTicks receive_headers_end_in,
    base::TimeTicks push_start_in,
    base::TimeTicks push_end_in)
    : socket_reused(std::move(socket_reused_in)),
      socket_log_id(std::move(socket_log_id_in)),
      request_start_time(std::move(request_start_time_in)),
      request_start(std::move(request_start_in)),
      proxy_resolve_start(std::move(proxy_resolve_start_in)),
      proxy_resolve_end(std::move(proxy_resolve_end_in)),
      connect_timing(std::move(connect_timing_in)),
      send_start(std::move(send_start_in)),
      send_end(std::move(send_end_in)),
      receive_headers_end(std::move(receive_headers_end_in)),
      push_start(std::move(push_start_in)),
      push_end(std::move(push_end_in)) {}

LoadTimingInfo::~LoadTimingInfo() = default;

bool LoadTimingInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace content

namespace mojo {


// static
bool StructTraits<::content::mojom::LoadTimingInfoConnectTiming::DataView, ::content::mojom::LoadTimingInfoConnectTimingPtr>::Read(
    ::content::mojom::LoadTimingInfoConnectTiming::DataView input,
    ::content::mojom::LoadTimingInfoConnectTimingPtr* output) {
  bool success = true;
  ::content::mojom::LoadTimingInfoConnectTimingPtr result(::content::mojom::LoadTimingInfoConnectTiming::New());
  
      if (!input.ReadDnsStart(&result->dns_start))
        success = false;
      if (!input.ReadDnsEnd(&result->dns_end))
        success = false;
      if (!input.ReadConnectStart(&result->connect_start))
        success = false;
      if (!input.ReadConnectEnd(&result->connect_end))
        success = false;
      if (!input.ReadSslStart(&result->ssl_start))
        success = false;
      if (!input.ReadSslEnd(&result->ssl_end))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::content::mojom::LoadTimingInfo::DataView, ::content::mojom::LoadTimingInfoPtr>::Read(
    ::content::mojom::LoadTimingInfo::DataView input,
    ::content::mojom::LoadTimingInfoPtr* output) {
  bool success = true;
  ::content::mojom::LoadTimingInfoPtr result(::content::mojom::LoadTimingInfo::New());
  
      result->socket_reused = input.socket_reused();
      result->socket_log_id = input.socket_log_id();
      if (!input.ReadRequestStartTime(&result->request_start_time))
        success = false;
      if (!input.ReadRequestStart(&result->request_start))
        success = false;
      if (!input.ReadProxyResolveStart(&result->proxy_resolve_start))
        success = false;
      if (!input.ReadProxyResolveEnd(&result->proxy_resolve_end))
        success = false;
      if (!input.ReadConnectTiming(&result->connect_timing))
        success = false;
      if (!input.ReadSendStart(&result->send_start))
        success = false;
      if (!input.ReadSendEnd(&result->send_end))
        success = false;
      if (!input.ReadReceiveHeadersEnd(&result->receive_headers_end))
        success = false;
      if (!input.ReadPushStart(&result->push_start))
        success = false;
      if (!input.ReadPushEnd(&result->push_end))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif