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

#include "components/nacl/common/nacl.mojom.h"

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

#include "components/nacl/common/nacl.mojom-shared-message-ids.h"
#include "components/nacl/common/nacl_types_param_traits.h"
namespace nacl {
namespace mojom {
const char NaClRendererHost::Name_[] = "nacl.mojom.NaClRendererHost";
bool NaClRendererHost::ReportExitStatus(int32_t exit_status) {
  NOTREACHED();
  return false;
}
bool NaClRendererHost::ReportLoadStatus(::NaClErrorCode load_status) {
  NOTREACHED();
  return false;
}
class NaClRendererHost_ReportExitStatus_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  NaClRendererHost_ReportExitStatus_HandleSyncResponse(
      bool* result)
      : result_(result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;DISALLOW_COPY_AND_ASSIGN(NaClRendererHost_ReportExitStatus_HandleSyncResponse);
};

class NaClRendererHost_ReportExitStatus_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NaClRendererHost_ReportExitStatus_ForwardToCallback(
      NaClRendererHost::ReportExitStatusCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NaClRendererHost::ReportExitStatusCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NaClRendererHost_ReportExitStatus_ForwardToCallback);
};
class NaClRendererHost_ReportLoadStatus_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  NaClRendererHost_ReportLoadStatus_HandleSyncResponse(
      bool* result)
      : result_(result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;DISALLOW_COPY_AND_ASSIGN(NaClRendererHost_ReportLoadStatus_HandleSyncResponse);
};

class NaClRendererHost_ReportLoadStatus_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NaClRendererHost_ReportLoadStatus_ForwardToCallback(
      NaClRendererHost::ReportLoadStatusCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NaClRendererHost::ReportLoadStatusCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NaClRendererHost_ReportLoadStatus_ForwardToCallback);
};

NaClRendererHostProxy::NaClRendererHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
bool NaClRendererHostProxy::ReportExitStatus(
    int32_t param_exit_status) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "nacl::mojom::NaClRendererHost::ReportExitStatus");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNaClRendererHost_ReportExitStatus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::nacl::mojom::internal::NaClRendererHost_ReportExitStatus_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->exit_status = param_exit_status;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NaClRendererHost_ReportExitStatus_HandleSyncResponse(
          &result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void NaClRendererHostProxy::ReportExitStatus(
    int32_t in_exit_status, ReportExitStatusCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "nacl::mojom::NaClRendererHost::ReportExitStatus");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNaClRendererHost_ReportExitStatus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::nacl::mojom::internal::NaClRendererHost_ReportExitStatus_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->exit_status = in_exit_status;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NaClRendererHost_ReportExitStatus_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool NaClRendererHostProxy::ReportLoadStatus(
    ::NaClErrorCode param_load_status) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "nacl::mojom::NaClRendererHost::ReportLoadStatus");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNaClRendererHost_ReportLoadStatus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::nacl::mojom::internal::NaClRendererHost_ReportLoadStatus_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::nacl::mojom::NaClErrorCode>(
      param_load_status, &params->load_status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NaClRendererHost_ReportLoadStatus_HandleSyncResponse(
          &result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void NaClRendererHostProxy::ReportLoadStatus(
    ::NaClErrorCode in_load_status, ReportLoadStatusCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "nacl::mojom::NaClRendererHost::ReportLoadStatus");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNaClRendererHost_ReportLoadStatus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::nacl::mojom::internal::NaClRendererHost_ReportLoadStatus_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::nacl::mojom::NaClErrorCode>(
      in_load_status, &params->load_status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NaClRendererHost_ReportLoadStatus_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NaClRendererHostProxy::ProvideExitControl(
    NaClExitControlPtr in_exit_control) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "nacl::mojom::NaClRendererHost::ProvideExitControl");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNaClRendererHost_ProvideExitControl_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::nacl::mojom::internal::NaClRendererHost_ProvideExitControl_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::nacl::mojom::NaClExitControlPtrDataView>(
      in_exit_control, &params->exit_control, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->exit_control),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid exit_control in NaClRendererHost.ProvideExitControl request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class NaClRendererHost_ReportExitStatus_ProxyToResponder {
 public:
  static NaClRendererHost::ReportExitStatusCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NaClRendererHost_ReportExitStatus_ProxyToResponder> proxy(
        new NaClRendererHost_ReportExitStatus_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NaClRendererHost_ReportExitStatus_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NaClRendererHost_ReportExitStatus_ProxyToResponder() {
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
  NaClRendererHost_ReportExitStatus_ProxyToResponder(
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
        << "NaClRendererHost::ReportExitStatusCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(NaClRendererHost_ReportExitStatus_ProxyToResponder);
};

bool NaClRendererHost_ReportExitStatus_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "nacl::mojom::NaClRendererHost::ReportExitStatusCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NaClRendererHost_ReportExitStatus_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NaClRendererHost_ReportExitStatus_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NaClRendererHost_ReportExitStatus_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NaClRendererHost::ReportExitStatus response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NaClRendererHost_ReportExitStatus_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNaClRendererHost_ReportExitStatus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::nacl::mojom::internal::NaClRendererHost_ReportExitStatus_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)nacl::mojom::NaClRendererHost::ReportExitStatusCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool NaClRendererHost_ReportExitStatus_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::NaClRendererHost_ReportExitStatus_ResponseParams_Data* params =
      reinterpret_cast<internal::NaClRendererHost_ReportExitStatus_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NaClRendererHost_ReportExitStatus_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NaClRendererHost::ReportExitStatus response deserializer");
    return false;
  }
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class NaClRendererHost_ReportLoadStatus_ProxyToResponder {
 public:
  static NaClRendererHost::ReportLoadStatusCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NaClRendererHost_ReportLoadStatus_ProxyToResponder> proxy(
        new NaClRendererHost_ReportLoadStatus_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NaClRendererHost_ReportLoadStatus_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NaClRendererHost_ReportLoadStatus_ProxyToResponder() {
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
  NaClRendererHost_ReportLoadStatus_ProxyToResponder(
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
        << "NaClRendererHost::ReportLoadStatusCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(NaClRendererHost_ReportLoadStatus_ProxyToResponder);
};

bool NaClRendererHost_ReportLoadStatus_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "nacl::mojom::NaClRendererHost::ReportLoadStatusCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NaClRendererHost_ReportLoadStatus_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NaClRendererHost_ReportLoadStatus_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NaClRendererHost_ReportLoadStatus_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NaClRendererHost::ReportLoadStatus response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NaClRendererHost_ReportLoadStatus_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNaClRendererHost_ReportLoadStatus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::nacl::mojom::internal::NaClRendererHost_ReportLoadStatus_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)nacl::mojom::NaClRendererHost::ReportLoadStatusCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool NaClRendererHost_ReportLoadStatus_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::NaClRendererHost_ReportLoadStatus_ResponseParams_Data* params =
      reinterpret_cast<internal::NaClRendererHost_ReportLoadStatus_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NaClRendererHost_ReportLoadStatus_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NaClRendererHost::ReportLoadStatus response deserializer");
    return false;
  }
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

// static
bool NaClRendererHostStubDispatch::Accept(
    NaClRendererHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kNaClRendererHost_ReportExitStatus_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)nacl::mojom::NaClRendererHost::ReportExitStatus",
               "message", message->name());
#endif
      break;
    }
    case internal::kNaClRendererHost_ReportLoadStatus_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)nacl::mojom::NaClRendererHost::ReportLoadStatus",
               "message", message->name());
#endif
      break;
    }
    case internal::kNaClRendererHost_ProvideExitControl_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)nacl::mojom::NaClRendererHost::ProvideExitControl",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NaClRendererHost_ProvideExitControl_Params_Data* params =
          reinterpret_cast<internal::NaClRendererHost_ProvideExitControl_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NaClExitControlPtr p_exit_control{};
      NaClRendererHost_ProvideExitControl_ParamsDataView input_data_view(params, &serialization_context);
      
      p_exit_control =
          input_data_view.TakeExitControl<decltype(p_exit_control)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NaClRendererHost::ProvideExitControl deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ProvideExitControl(
std::move(p_exit_control));
      return true;
    }
  }
  return false;
}

// static
bool NaClRendererHostStubDispatch::AcceptWithResponder(
    NaClRendererHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kNaClRendererHost_ReportExitStatus_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)nacl::mojom::NaClRendererHost::ReportExitStatus",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::NaClRendererHost_ReportExitStatus_Params_Data* params =
          reinterpret_cast<
              internal::NaClRendererHost_ReportExitStatus_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_exit_status{};
      NaClRendererHost_ReportExitStatus_ParamsDataView input_data_view(params, &serialization_context);
      
      p_exit_status = input_data_view.exit_status();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NaClRendererHost::ReportExitStatus deserializer");
        return false;
      }
      NaClRendererHost::ReportExitStatusCallback callback =
          NaClRendererHost_ReportExitStatus_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ReportExitStatus(
std::move(p_exit_status), std::move(callback));
      return true;
    }
    case internal::kNaClRendererHost_ReportLoadStatus_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)nacl::mojom::NaClRendererHost::ReportLoadStatus",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::NaClRendererHost_ReportLoadStatus_Params_Data* params =
          reinterpret_cast<
              internal::NaClRendererHost_ReportLoadStatus_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::NaClErrorCode p_load_status{};
      NaClRendererHost_ReportLoadStatus_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadLoadStatus(&p_load_status))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NaClRendererHost::ReportLoadStatus deserializer");
        return false;
      }
      NaClRendererHost::ReportLoadStatusCallback callback =
          NaClRendererHost_ReportLoadStatus_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ReportLoadStatus(
std::move(p_load_status), std::move(callback));
      return true;
    }
    case internal::kNaClRendererHost_ProvideExitControl_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)nacl::mojom::NaClRendererHost::ProvideExitControl",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool NaClRendererHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NaClRendererHost RequestValidator");

  switch (message->header()->name) {
    case internal::kNaClRendererHost_ReportExitStatus_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NaClRendererHost_ReportExitStatus_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNaClRendererHost_ReportLoadStatus_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NaClRendererHost_ReportLoadStatus_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNaClRendererHost_ProvideExitControl_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NaClRendererHost_ProvideExitControl_Params_Data>(
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

bool NaClRendererHostResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NaClRendererHost ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kNaClRendererHost_ReportExitStatus_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NaClRendererHost_ReportExitStatus_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNaClRendererHost_ReportLoadStatus_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NaClRendererHost_ReportLoadStatus_ResponseParams_Data>(
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
void NaClRendererHostInterceptorForTesting::ReportExitStatus(int32_t exit_status, ReportExitStatusCallback callback) {
  GetForwardingInterface()->ReportExitStatus(std::move(exit_status), std::move(callback));
}
void NaClRendererHostInterceptorForTesting::ReportLoadStatus(::NaClErrorCode load_status, ReportLoadStatusCallback callback) {
  GetForwardingInterface()->ReportLoadStatus(std::move(load_status), std::move(callback));
}
void NaClRendererHostInterceptorForTesting::ProvideExitControl(NaClExitControlPtr exit_control) {
  GetForwardingInterface()->ProvideExitControl(std::move(exit_control));
}
NaClRendererHostAsyncWaiter::NaClRendererHostAsyncWaiter(
    NaClRendererHost* proxy) : proxy_(proxy) {}

NaClRendererHostAsyncWaiter::~NaClRendererHostAsyncWaiter() = default;

void NaClRendererHostAsyncWaiter::ReportExitStatus(
    int32_t exit_status) {
  base::RunLoop loop;
  proxy_->ReportExitStatus(std::move(exit_status),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NaClRendererHostAsyncWaiter::ReportLoadStatus(
    ::NaClErrorCode load_status) {
  base::RunLoop loop;
  proxy_->ReportLoadStatus(std::move(load_status),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}

const char NaClExitControl::Name_[] = "nacl.mojom.NaClExitControl";

NaClExitControlProxy::NaClExitControlProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

// static
bool NaClExitControlStubDispatch::Accept(
    NaClExitControl* impl,
    mojo::Message* message) {
  return false;
}

// static
bool NaClExitControlStubDispatch::AcceptWithResponder(
    NaClExitControl* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  return false;
}

bool NaClExitControlRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NaClExitControl RequestValidator");

  switch (message->header()->name) {
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

NaClExitControlAsyncWaiter::NaClExitControlAsyncWaiter(
    NaClExitControl* proxy) : proxy_(proxy) {}

NaClExitControlAsyncWaiter::~NaClExitControlAsyncWaiter() = default;


}  // namespace mojom
}  // namespace nacl

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif