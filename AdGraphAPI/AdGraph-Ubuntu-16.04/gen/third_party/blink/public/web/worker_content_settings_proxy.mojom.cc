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

#include "third_party/blink/public/web/worker_content_settings_proxy.mojom.h"

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

#include "third_party/blink/public/web/worker_content_settings_proxy.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/string16_mojom_traits.h"
namespace blink {
namespace mojom {
const char WorkerContentSettingsProxy::Name_[] = "blink.mojom.WorkerContentSettingsProxy";
bool WorkerContentSettingsProxy::AllowIndexedDB(const base::string16& name, bool* out_result) {
  NOTREACHED();
  return false;
}
bool WorkerContentSettingsProxy::RequestFileSystemAccessSync(bool* out_result) {
  NOTREACHED();
  return false;
}
class WorkerContentSettingsProxy_AllowIndexedDB_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  WorkerContentSettingsProxy_AllowIndexedDB_HandleSyncResponse(
      bool* result, bool* out_result)
      : result_(result), out_result_(out_result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  bool* out_result_;DISALLOW_COPY_AND_ASSIGN(WorkerContentSettingsProxy_AllowIndexedDB_HandleSyncResponse);
};

class WorkerContentSettingsProxy_AllowIndexedDB_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WorkerContentSettingsProxy_AllowIndexedDB_ForwardToCallback(
      WorkerContentSettingsProxy::AllowIndexedDBCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WorkerContentSettingsProxy::AllowIndexedDBCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WorkerContentSettingsProxy_AllowIndexedDB_ForwardToCallback);
};
class WorkerContentSettingsProxy_RequestFileSystemAccessSync_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  WorkerContentSettingsProxy_RequestFileSystemAccessSync_HandleSyncResponse(
      bool* result, bool* out_result)
      : result_(result), out_result_(out_result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  bool* out_result_;DISALLOW_COPY_AND_ASSIGN(WorkerContentSettingsProxy_RequestFileSystemAccessSync_HandleSyncResponse);
};

class WorkerContentSettingsProxy_RequestFileSystemAccessSync_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WorkerContentSettingsProxy_RequestFileSystemAccessSync_ForwardToCallback(
      WorkerContentSettingsProxy::RequestFileSystemAccessSyncCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WorkerContentSettingsProxy::RequestFileSystemAccessSyncCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WorkerContentSettingsProxy_RequestFileSystemAccessSync_ForwardToCallback);
};

WorkerContentSettingsProxyProxy::WorkerContentSettingsProxyProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
bool WorkerContentSettingsProxyProxy::AllowIndexedDB(
    const base::string16& param_name, bool* out_param_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::WorkerContentSettingsProxy::AllowIndexedDB");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWorkerContentSettingsProxy_AllowIndexedDB_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WorkerContentSettingsProxy_AllowIndexedDB_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      param_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in WorkerContentSettingsProxy.AllowIndexedDB request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WorkerContentSettingsProxy_AllowIndexedDB_HandleSyncResponse(
          &result, out_param_result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void WorkerContentSettingsProxyProxy::AllowIndexedDB(
    const base::string16& in_name, AllowIndexedDBCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::WorkerContentSettingsProxy::AllowIndexedDB");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWorkerContentSettingsProxy_AllowIndexedDB_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WorkerContentSettingsProxy_AllowIndexedDB_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in WorkerContentSettingsProxy.AllowIndexedDB request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WorkerContentSettingsProxy_AllowIndexedDB_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool WorkerContentSettingsProxyProxy::RequestFileSystemAccessSync(
    bool* out_param_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::WorkerContentSettingsProxy::RequestFileSystemAccessSync");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWorkerContentSettingsProxy_RequestFileSystemAccessSync_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WorkerContentSettingsProxy_RequestFileSystemAccessSync_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WorkerContentSettingsProxy_RequestFileSystemAccessSync_HandleSyncResponse(
          &result, out_param_result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void WorkerContentSettingsProxyProxy::RequestFileSystemAccessSync(
    RequestFileSystemAccessSyncCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::WorkerContentSettingsProxy::RequestFileSystemAccessSync");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWorkerContentSettingsProxy_RequestFileSystemAccessSync_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WorkerContentSettingsProxy_RequestFileSystemAccessSync_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WorkerContentSettingsProxy_RequestFileSystemAccessSync_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class WorkerContentSettingsProxy_AllowIndexedDB_ProxyToResponder {
 public:
  static WorkerContentSettingsProxy::AllowIndexedDBCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WorkerContentSettingsProxy_AllowIndexedDB_ProxyToResponder> proxy(
        new WorkerContentSettingsProxy_AllowIndexedDB_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WorkerContentSettingsProxy_AllowIndexedDB_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WorkerContentSettingsProxy_AllowIndexedDB_ProxyToResponder() {
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
  WorkerContentSettingsProxy_AllowIndexedDB_ProxyToResponder(
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
        << "WorkerContentSettingsProxy::AllowIndexedDBCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(WorkerContentSettingsProxy_AllowIndexedDB_ProxyToResponder);
};

bool WorkerContentSettingsProxy_AllowIndexedDB_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::WorkerContentSettingsProxy::AllowIndexedDBCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WorkerContentSettingsProxy_AllowIndexedDB_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WorkerContentSettingsProxy_AllowIndexedDB_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_result{};
  WorkerContentSettingsProxy_AllowIndexedDB_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WorkerContentSettingsProxy::AllowIndexedDB response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void WorkerContentSettingsProxy_AllowIndexedDB_ProxyToResponder::Run(
    bool in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWorkerContentSettingsProxy_AllowIndexedDB_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WorkerContentSettingsProxy_AllowIndexedDB_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = in_result;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WorkerContentSettingsProxy::AllowIndexedDBCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool WorkerContentSettingsProxy_AllowIndexedDB_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::WorkerContentSettingsProxy_AllowIndexedDB_ResponseParams_Data* params =
      reinterpret_cast<internal::WorkerContentSettingsProxy_AllowIndexedDB_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_result{};
  WorkerContentSettingsProxy_AllowIndexedDB_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WorkerContentSettingsProxy::AllowIndexedDB response deserializer");
    return false;
  }
  *out_result_ = std::move(p_result);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class WorkerContentSettingsProxy_RequestFileSystemAccessSync_ProxyToResponder {
 public:
  static WorkerContentSettingsProxy::RequestFileSystemAccessSyncCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WorkerContentSettingsProxy_RequestFileSystemAccessSync_ProxyToResponder> proxy(
        new WorkerContentSettingsProxy_RequestFileSystemAccessSync_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WorkerContentSettingsProxy_RequestFileSystemAccessSync_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WorkerContentSettingsProxy_RequestFileSystemAccessSync_ProxyToResponder() {
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
  WorkerContentSettingsProxy_RequestFileSystemAccessSync_ProxyToResponder(
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
        << "WorkerContentSettingsProxy::RequestFileSystemAccessSyncCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(WorkerContentSettingsProxy_RequestFileSystemAccessSync_ProxyToResponder);
};

bool WorkerContentSettingsProxy_RequestFileSystemAccessSync_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::WorkerContentSettingsProxy::RequestFileSystemAccessSyncCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WorkerContentSettingsProxy_RequestFileSystemAccessSync_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WorkerContentSettingsProxy_RequestFileSystemAccessSync_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_result{};
  WorkerContentSettingsProxy_RequestFileSystemAccessSync_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WorkerContentSettingsProxy::RequestFileSystemAccessSync response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void WorkerContentSettingsProxy_RequestFileSystemAccessSync_ProxyToResponder::Run(
    bool in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWorkerContentSettingsProxy_RequestFileSystemAccessSync_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WorkerContentSettingsProxy_RequestFileSystemAccessSync_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = in_result;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WorkerContentSettingsProxy::RequestFileSystemAccessSyncCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool WorkerContentSettingsProxy_RequestFileSystemAccessSync_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::WorkerContentSettingsProxy_RequestFileSystemAccessSync_ResponseParams_Data* params =
      reinterpret_cast<internal::WorkerContentSettingsProxy_RequestFileSystemAccessSync_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_result{};
  WorkerContentSettingsProxy_RequestFileSystemAccessSync_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WorkerContentSettingsProxy::RequestFileSystemAccessSync response deserializer");
    return false;
  }
  *out_result_ = std::move(p_result);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

// static
bool WorkerContentSettingsProxyStubDispatch::Accept(
    WorkerContentSettingsProxy* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kWorkerContentSettingsProxy_AllowIndexedDB_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WorkerContentSettingsProxy::AllowIndexedDB",
               "message", message->name());
#endif
      break;
    }
    case internal::kWorkerContentSettingsProxy_RequestFileSystemAccessSync_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WorkerContentSettingsProxy::RequestFileSystemAccessSync",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool WorkerContentSettingsProxyStubDispatch::AcceptWithResponder(
    WorkerContentSettingsProxy* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kWorkerContentSettingsProxy_AllowIndexedDB_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WorkerContentSettingsProxy::AllowIndexedDB",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::WorkerContentSettingsProxy_AllowIndexedDB_Params_Data* params =
          reinterpret_cast<
              internal::WorkerContentSettingsProxy_AllowIndexedDB_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::string16 p_name{};
      WorkerContentSettingsProxy_AllowIndexedDB_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadName(&p_name))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WorkerContentSettingsProxy::AllowIndexedDB deserializer");
        return false;
      }
      WorkerContentSettingsProxy::AllowIndexedDBCallback callback =
          WorkerContentSettingsProxy_AllowIndexedDB_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AllowIndexedDB(
std::move(p_name), std::move(callback));
      return true;
    }
    case internal::kWorkerContentSettingsProxy_RequestFileSystemAccessSync_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::WorkerContentSettingsProxy::RequestFileSystemAccessSync",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::WorkerContentSettingsProxy_RequestFileSystemAccessSync_Params_Data* params =
          reinterpret_cast<
              internal::WorkerContentSettingsProxy_RequestFileSystemAccessSync_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WorkerContentSettingsProxy_RequestFileSystemAccessSync_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WorkerContentSettingsProxy::RequestFileSystemAccessSync deserializer");
        return false;
      }
      WorkerContentSettingsProxy::RequestFileSystemAccessSyncCallback callback =
          WorkerContentSettingsProxy_RequestFileSystemAccessSync_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RequestFileSystemAccessSync(std::move(callback));
      return true;
    }
  }
  return false;
}

bool WorkerContentSettingsProxyRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WorkerContentSettingsProxy RequestValidator");

  switch (message->header()->name) {
    case internal::kWorkerContentSettingsProxy_AllowIndexedDB_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WorkerContentSettingsProxy_AllowIndexedDB_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWorkerContentSettingsProxy_RequestFileSystemAccessSync_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WorkerContentSettingsProxy_RequestFileSystemAccessSync_Params_Data>(
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

bool WorkerContentSettingsProxyResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WorkerContentSettingsProxy ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kWorkerContentSettingsProxy_AllowIndexedDB_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WorkerContentSettingsProxy_AllowIndexedDB_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWorkerContentSettingsProxy_RequestFileSystemAccessSync_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WorkerContentSettingsProxy_RequestFileSystemAccessSync_ResponseParams_Data>(
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
void WorkerContentSettingsProxyInterceptorForTesting::AllowIndexedDB(const base::string16& name, AllowIndexedDBCallback callback) {
  GetForwardingInterface()->AllowIndexedDB(std::move(name), std::move(callback));
}
void WorkerContentSettingsProxyInterceptorForTesting::RequestFileSystemAccessSync(RequestFileSystemAccessSyncCallback callback) {
  GetForwardingInterface()->RequestFileSystemAccessSync(std::move(callback));
}
WorkerContentSettingsProxyAsyncWaiter::WorkerContentSettingsProxyAsyncWaiter(
    WorkerContentSettingsProxy* proxy) : proxy_(proxy) {}

WorkerContentSettingsProxyAsyncWaiter::~WorkerContentSettingsProxyAsyncWaiter() = default;

void WorkerContentSettingsProxyAsyncWaiter::AllowIndexedDB(
    const base::string16& name, bool* out_result) {
  base::RunLoop loop;
  proxy_->AllowIndexedDB(std::move(name),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_result
,
             bool result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void WorkerContentSettingsProxyAsyncWaiter::RequestFileSystemAccessSync(
    bool* out_result) {
  base::RunLoop loop;
  proxy_->RequestFileSystemAccessSync(
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_result
,
             bool result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}

}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif