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

#include "chrome/common/net_benchmarking.mojom.h"

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

#include "chrome/common/net_benchmarking.mojom-shared-message-ids.h"
namespace chrome {
namespace mojom {
const char NetBenchmarking::Name_[] = "chrome.mojom.NetBenchmarking";
bool NetBenchmarking::CloseCurrentConnections() {
  NOTREACHED();
  return false;
}
bool NetBenchmarking::ClearCache(int32_t* out_result) {
  NOTREACHED();
  return false;
}
bool NetBenchmarking::ClearHostResolverCache() {
  NOTREACHED();
  return false;
}
bool NetBenchmarking::ClearPredictorCache() {
  NOTREACHED();
  return false;
}
class NetBenchmarking_CloseCurrentConnections_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  NetBenchmarking_CloseCurrentConnections_HandleSyncResponse(
      bool* result)
      : result_(result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;DISALLOW_COPY_AND_ASSIGN(NetBenchmarking_CloseCurrentConnections_HandleSyncResponse);
};

class NetBenchmarking_CloseCurrentConnections_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetBenchmarking_CloseCurrentConnections_ForwardToCallback(
      const NetBenchmarking::CloseCurrentConnectionsCallback& callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetBenchmarking::CloseCurrentConnectionsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetBenchmarking_CloseCurrentConnections_ForwardToCallback);
};
class NetBenchmarking_ClearCache_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  NetBenchmarking_ClearCache_HandleSyncResponse(
      bool* result, int32_t* out_result)
      : result_(result), out_result_(out_result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  int32_t* out_result_;DISALLOW_COPY_AND_ASSIGN(NetBenchmarking_ClearCache_HandleSyncResponse);
};

class NetBenchmarking_ClearCache_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetBenchmarking_ClearCache_ForwardToCallback(
      const NetBenchmarking::ClearCacheCallback& callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetBenchmarking::ClearCacheCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetBenchmarking_ClearCache_ForwardToCallback);
};
class NetBenchmarking_ClearHostResolverCache_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  NetBenchmarking_ClearHostResolverCache_HandleSyncResponse(
      bool* result)
      : result_(result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;DISALLOW_COPY_AND_ASSIGN(NetBenchmarking_ClearHostResolverCache_HandleSyncResponse);
};

class NetBenchmarking_ClearHostResolverCache_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetBenchmarking_ClearHostResolverCache_ForwardToCallback(
      const NetBenchmarking::ClearHostResolverCacheCallback& callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetBenchmarking::ClearHostResolverCacheCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetBenchmarking_ClearHostResolverCache_ForwardToCallback);
};
class NetBenchmarking_ClearPredictorCache_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  NetBenchmarking_ClearPredictorCache_HandleSyncResponse(
      bool* result)
      : result_(result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;DISALLOW_COPY_AND_ASSIGN(NetBenchmarking_ClearPredictorCache_HandleSyncResponse);
};

class NetBenchmarking_ClearPredictorCache_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetBenchmarking_ClearPredictorCache_ForwardToCallback(
      const NetBenchmarking::ClearPredictorCacheCallback& callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetBenchmarking::ClearPredictorCacheCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetBenchmarking_ClearPredictorCache_ForwardToCallback);
};

NetBenchmarkingProxy::NetBenchmarkingProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
bool NetBenchmarkingProxy::CloseCurrentConnections(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::NetBenchmarking::CloseCurrentConnections");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetBenchmarking_CloseCurrentConnections_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::NetBenchmarking_CloseCurrentConnections_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetBenchmarking_CloseCurrentConnections_HandleSyncResponse(
          &result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void NetBenchmarkingProxy::CloseCurrentConnections(
    const CloseCurrentConnectionsCallback& callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::NetBenchmarking::CloseCurrentConnections");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetBenchmarking_CloseCurrentConnections_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::NetBenchmarking_CloseCurrentConnections_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetBenchmarking_CloseCurrentConnections_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool NetBenchmarkingProxy::ClearCache(
    int32_t* out_param_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::NetBenchmarking::ClearCache");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetBenchmarking_ClearCache_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::NetBenchmarking_ClearCache_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetBenchmarking_ClearCache_HandleSyncResponse(
          &result, out_param_result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void NetBenchmarkingProxy::ClearCache(
    const ClearCacheCallback& callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::NetBenchmarking::ClearCache");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetBenchmarking_ClearCache_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::NetBenchmarking_ClearCache_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetBenchmarking_ClearCache_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool NetBenchmarkingProxy::ClearHostResolverCache(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::NetBenchmarking::ClearHostResolverCache");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetBenchmarking_ClearHostResolverCache_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::NetBenchmarking_ClearHostResolverCache_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetBenchmarking_ClearHostResolverCache_HandleSyncResponse(
          &result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void NetBenchmarkingProxy::ClearHostResolverCache(
    const ClearHostResolverCacheCallback& callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::NetBenchmarking::ClearHostResolverCache");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetBenchmarking_ClearHostResolverCache_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::NetBenchmarking_ClearHostResolverCache_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetBenchmarking_ClearHostResolverCache_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool NetBenchmarkingProxy::ClearPredictorCache(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::NetBenchmarking::ClearPredictorCache");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetBenchmarking_ClearPredictorCache_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::NetBenchmarking_ClearPredictorCache_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetBenchmarking_ClearPredictorCache_HandleSyncResponse(
          &result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void NetBenchmarkingProxy::ClearPredictorCache(
    const ClearPredictorCacheCallback& callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::NetBenchmarking::ClearPredictorCache");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetBenchmarking_ClearPredictorCache_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::NetBenchmarking_ClearPredictorCache_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetBenchmarking_ClearPredictorCache_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class NetBenchmarking_CloseCurrentConnections_ProxyToResponder {
 public:
  static NetBenchmarking::CloseCurrentConnectionsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetBenchmarking_CloseCurrentConnections_ProxyToResponder> proxy(
        new NetBenchmarking_CloseCurrentConnections_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::Bind(&NetBenchmarking_CloseCurrentConnections_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~NetBenchmarking_CloseCurrentConnections_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetBenchmarking_CloseCurrentConnections_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetBenchmarking::CloseCurrentConnectionsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetBenchmarking_CloseCurrentConnections_ProxyToResponder);
};

bool NetBenchmarking_CloseCurrentConnections_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "chrome::mojom::NetBenchmarking::CloseCurrentConnectionsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetBenchmarking_CloseCurrentConnections_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetBenchmarking_CloseCurrentConnections_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetBenchmarking_CloseCurrentConnections_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NetBenchmarking::CloseCurrentConnections response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetBenchmarking_CloseCurrentConnections_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetBenchmarking_CloseCurrentConnections_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::NetBenchmarking_CloseCurrentConnections_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::NetBenchmarking::CloseCurrentConnectionsCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool NetBenchmarking_CloseCurrentConnections_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::NetBenchmarking_CloseCurrentConnections_ResponseParams_Data* params =
      reinterpret_cast<internal::NetBenchmarking_CloseCurrentConnections_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetBenchmarking_CloseCurrentConnections_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NetBenchmarking::CloseCurrentConnections response deserializer");
    return false;
  }
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class NetBenchmarking_ClearCache_ProxyToResponder {
 public:
  static NetBenchmarking::ClearCacheCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetBenchmarking_ClearCache_ProxyToResponder> proxy(
        new NetBenchmarking_ClearCache_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::Bind(&NetBenchmarking_ClearCache_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~NetBenchmarking_ClearCache_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetBenchmarking_ClearCache_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetBenchmarking::ClearCacheCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetBenchmarking_ClearCache_ProxyToResponder);
};

bool NetBenchmarking_ClearCache_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "chrome::mojom::NetBenchmarking::ClearCacheCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetBenchmarking_ClearCache_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetBenchmarking_ClearCache_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_result{};
  NetBenchmarking_ClearCache_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NetBenchmarking::ClearCache response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void NetBenchmarking_ClearCache_ProxyToResponder::Run(
    int32_t in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetBenchmarking_ClearCache_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::NetBenchmarking_ClearCache_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = in_result;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::NetBenchmarking::ClearCacheCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool NetBenchmarking_ClearCache_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::NetBenchmarking_ClearCache_ResponseParams_Data* params =
      reinterpret_cast<internal::NetBenchmarking_ClearCache_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_result{};
  NetBenchmarking_ClearCache_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NetBenchmarking::ClearCache response deserializer");
    return false;
  }
  *out_result_ = std::move(p_result);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class NetBenchmarking_ClearHostResolverCache_ProxyToResponder {
 public:
  static NetBenchmarking::ClearHostResolverCacheCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetBenchmarking_ClearHostResolverCache_ProxyToResponder> proxy(
        new NetBenchmarking_ClearHostResolverCache_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::Bind(&NetBenchmarking_ClearHostResolverCache_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~NetBenchmarking_ClearHostResolverCache_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetBenchmarking_ClearHostResolverCache_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetBenchmarking::ClearHostResolverCacheCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetBenchmarking_ClearHostResolverCache_ProxyToResponder);
};

bool NetBenchmarking_ClearHostResolverCache_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "chrome::mojom::NetBenchmarking::ClearHostResolverCacheCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetBenchmarking_ClearHostResolverCache_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetBenchmarking_ClearHostResolverCache_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetBenchmarking_ClearHostResolverCache_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NetBenchmarking::ClearHostResolverCache response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetBenchmarking_ClearHostResolverCache_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetBenchmarking_ClearHostResolverCache_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::NetBenchmarking_ClearHostResolverCache_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::NetBenchmarking::ClearHostResolverCacheCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool NetBenchmarking_ClearHostResolverCache_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::NetBenchmarking_ClearHostResolverCache_ResponseParams_Data* params =
      reinterpret_cast<internal::NetBenchmarking_ClearHostResolverCache_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetBenchmarking_ClearHostResolverCache_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NetBenchmarking::ClearHostResolverCache response deserializer");
    return false;
  }
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class NetBenchmarking_ClearPredictorCache_ProxyToResponder {
 public:
  static NetBenchmarking::ClearPredictorCacheCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetBenchmarking_ClearPredictorCache_ProxyToResponder> proxy(
        new NetBenchmarking_ClearPredictorCache_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::Bind(&NetBenchmarking_ClearPredictorCache_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~NetBenchmarking_ClearPredictorCache_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetBenchmarking_ClearPredictorCache_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetBenchmarking::ClearPredictorCacheCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetBenchmarking_ClearPredictorCache_ProxyToResponder);
};

bool NetBenchmarking_ClearPredictorCache_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "chrome::mojom::NetBenchmarking::ClearPredictorCacheCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetBenchmarking_ClearPredictorCache_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetBenchmarking_ClearPredictorCache_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetBenchmarking_ClearPredictorCache_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NetBenchmarking::ClearPredictorCache response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetBenchmarking_ClearPredictorCache_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetBenchmarking_ClearPredictorCache_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::NetBenchmarking_ClearPredictorCache_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::NetBenchmarking::ClearPredictorCacheCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool NetBenchmarking_ClearPredictorCache_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::NetBenchmarking_ClearPredictorCache_ResponseParams_Data* params =
      reinterpret_cast<internal::NetBenchmarking_ClearPredictorCache_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetBenchmarking_ClearPredictorCache_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NetBenchmarking::ClearPredictorCache response deserializer");
    return false;
  }
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

// static
bool NetBenchmarkingStubDispatch::Accept(
    NetBenchmarking* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kNetBenchmarking_CloseCurrentConnections_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::NetBenchmarking::CloseCurrentConnections",
               "message", message->name());
#endif
      break;
    }
    case internal::kNetBenchmarking_ClearCache_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::NetBenchmarking::ClearCache",
               "message", message->name());
#endif
      break;
    }
    case internal::kNetBenchmarking_ClearHostResolverCache_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::NetBenchmarking::ClearHostResolverCache",
               "message", message->name());
#endif
      break;
    }
    case internal::kNetBenchmarking_ClearPredictorCache_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::NetBenchmarking::ClearPredictorCache",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool NetBenchmarkingStubDispatch::AcceptWithResponder(
    NetBenchmarking* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kNetBenchmarking_CloseCurrentConnections_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::NetBenchmarking::CloseCurrentConnections",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::NetBenchmarking_CloseCurrentConnections_Params_Data* params =
          reinterpret_cast<
              internal::NetBenchmarking_CloseCurrentConnections_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NetBenchmarking_CloseCurrentConnections_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetBenchmarking::CloseCurrentConnections deserializer");
        return false;
      }
      NetBenchmarking::CloseCurrentConnectionsCallback callback =
          NetBenchmarking_CloseCurrentConnections_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CloseCurrentConnections(std::move(callback));
      return true;
    }
    case internal::kNetBenchmarking_ClearCache_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::NetBenchmarking::ClearCache",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::NetBenchmarking_ClearCache_Params_Data* params =
          reinterpret_cast<
              internal::NetBenchmarking_ClearCache_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NetBenchmarking_ClearCache_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetBenchmarking::ClearCache deserializer");
        return false;
      }
      NetBenchmarking::ClearCacheCallback callback =
          NetBenchmarking_ClearCache_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ClearCache(std::move(callback));
      return true;
    }
    case internal::kNetBenchmarking_ClearHostResolverCache_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::NetBenchmarking::ClearHostResolverCache",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::NetBenchmarking_ClearHostResolverCache_Params_Data* params =
          reinterpret_cast<
              internal::NetBenchmarking_ClearHostResolverCache_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NetBenchmarking_ClearHostResolverCache_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetBenchmarking::ClearHostResolverCache deserializer");
        return false;
      }
      NetBenchmarking::ClearHostResolverCacheCallback callback =
          NetBenchmarking_ClearHostResolverCache_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ClearHostResolverCache(std::move(callback));
      return true;
    }
    case internal::kNetBenchmarking_ClearPredictorCache_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::NetBenchmarking::ClearPredictorCache",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::NetBenchmarking_ClearPredictorCache_Params_Data* params =
          reinterpret_cast<
              internal::NetBenchmarking_ClearPredictorCache_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NetBenchmarking_ClearPredictorCache_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetBenchmarking::ClearPredictorCache deserializer");
        return false;
      }
      NetBenchmarking::ClearPredictorCacheCallback callback =
          NetBenchmarking_ClearPredictorCache_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ClearPredictorCache(std::move(callback));
      return true;
    }
  }
  return false;
}

bool NetBenchmarkingRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NetBenchmarking RequestValidator");

  switch (message->header()->name) {
    case internal::kNetBenchmarking_CloseCurrentConnections_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetBenchmarking_CloseCurrentConnections_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetBenchmarking_ClearCache_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetBenchmarking_ClearCache_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetBenchmarking_ClearHostResolverCache_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetBenchmarking_ClearHostResolverCache_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetBenchmarking_ClearPredictorCache_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetBenchmarking_ClearPredictorCache_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

bool NetBenchmarkingResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NetBenchmarking ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kNetBenchmarking_CloseCurrentConnections_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetBenchmarking_CloseCurrentConnections_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetBenchmarking_ClearCache_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetBenchmarking_ClearCache_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetBenchmarking_ClearHostResolverCache_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetBenchmarking_ClearHostResolverCache_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetBenchmarking_ClearPredictorCache_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetBenchmarking_ClearPredictorCache_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
void NetBenchmarkingInterceptorForTesting::CloseCurrentConnections(const CloseCurrentConnectionsCallback& callback) {
  GetForwardingInterface()->CloseCurrentConnections(std::move(callback));
}
void NetBenchmarkingInterceptorForTesting::ClearCache(const ClearCacheCallback& callback) {
  GetForwardingInterface()->ClearCache(std::move(callback));
}
void NetBenchmarkingInterceptorForTesting::ClearHostResolverCache(const ClearHostResolverCacheCallback& callback) {
  GetForwardingInterface()->ClearHostResolverCache(std::move(callback));
}
void NetBenchmarkingInterceptorForTesting::ClearPredictorCache(const ClearPredictorCacheCallback& callback) {
  GetForwardingInterface()->ClearPredictorCache(std::move(callback));
}
NetBenchmarkingAsyncWaiter::NetBenchmarkingAsyncWaiter(
    NetBenchmarking* proxy) : proxy_(proxy) {}

NetBenchmarkingAsyncWaiter::~NetBenchmarkingAsyncWaiter() = default;

void NetBenchmarkingAsyncWaiter::CloseCurrentConnections(
    ) {
  base::RunLoop loop;
  proxy_->CloseCurrentConnections(
      base::Bind(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NetBenchmarkingAsyncWaiter::ClearCache(
    int32_t* out_result) {
  base::RunLoop loop;
  proxy_->ClearCache(
      base::Bind(
          [](base::RunLoop* loop,
             int32_t* out_result
,
             int32_t result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void NetBenchmarkingAsyncWaiter::ClearHostResolverCache(
    ) {
  base::RunLoop loop;
  proxy_->ClearHostResolverCache(
      base::Bind(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NetBenchmarkingAsyncWaiter::ClearPredictorCache(
    ) {
  base::RunLoop loop;
  proxy_->ClearPredictorCache(
      base::Bind(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}

}  // namespace mojom
}  // namespace chrome

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif