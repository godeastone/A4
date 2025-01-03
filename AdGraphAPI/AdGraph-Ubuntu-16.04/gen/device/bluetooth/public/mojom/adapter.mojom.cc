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

#include "device/bluetooth/public/mojom/adapter.mojom.h"

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

#include "device/bluetooth/public/mojom/adapter.mojom-shared-message-ids.h"
namespace bluetooth {
namespace mojom {
AdapterInfo::AdapterInfo()
    : address(),
      name(),
      initialized(),
      present(),
      powered(),
      discoverable(),
      discovering() {}

AdapterInfo::AdapterInfo(
    const std::string& address_in,
    const std::string& name_in,
    bool initialized_in,
    bool present_in,
    bool powered_in,
    bool discoverable_in,
    bool discovering_in)
    : address(std::move(address_in)),
      name(std::move(name_in)),
      initialized(std::move(initialized_in)),
      present(std::move(present_in)),
      powered(std::move(powered_in)),
      discoverable(std::move(discoverable_in)),
      discovering(std::move(discovering_in)) {}

AdapterInfo::~AdapterInfo() = default;
size_t AdapterInfo::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->address);
  seed = mojo::internal::Hash(seed, this->name);
  seed = mojo::internal::Hash(seed, this->initialized);
  seed = mojo::internal::Hash(seed, this->present);
  seed = mojo::internal::Hash(seed, this->powered);
  seed = mojo::internal::Hash(seed, this->discoverable);
  seed = mojo::internal::Hash(seed, this->discovering);
  return seed;
}

bool AdapterInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char DiscoverySession::Name_[] = "bluetooth.mojom.DiscoverySession";

class DiscoverySession_IsActive_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  DiscoverySession_IsActive_ForwardToCallback(
      DiscoverySession::IsActiveCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  DiscoverySession::IsActiveCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(DiscoverySession_IsActive_ForwardToCallback);
};

class DiscoverySession_Stop_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  DiscoverySession_Stop_ForwardToCallback(
      DiscoverySession::StopCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  DiscoverySession::StopCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(DiscoverySession_Stop_ForwardToCallback);
};

DiscoverySessionProxy::DiscoverySessionProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DiscoverySessionProxy::IsActive(
    IsActiveCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "bluetooth::mojom::DiscoverySession::IsActive");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDiscoverySession_IsActive_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::bluetooth::mojom::internal::DiscoverySession_IsActive_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new DiscoverySession_IsActive_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void DiscoverySessionProxy::Stop(
    StopCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "bluetooth::mojom::DiscoverySession::Stop");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDiscoverySession_Stop_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::bluetooth::mojom::internal::DiscoverySession_Stop_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new DiscoverySession_Stop_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class DiscoverySession_IsActive_ProxyToResponder {
 public:
  static DiscoverySession::IsActiveCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<DiscoverySession_IsActive_ProxyToResponder> proxy(
        new DiscoverySession_IsActive_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&DiscoverySession_IsActive_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~DiscoverySession_IsActive_ProxyToResponder() {
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
  DiscoverySession_IsActive_ProxyToResponder(
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
        << "DiscoverySession::IsActiveCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_active);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(DiscoverySession_IsActive_ProxyToResponder);
};

bool DiscoverySession_IsActive_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "bluetooth::mojom::DiscoverySession::IsActiveCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::DiscoverySession_IsActive_ResponseParams_Data* params =
      reinterpret_cast<
          internal::DiscoverySession_IsActive_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_active{};
  DiscoverySession_IsActive_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_active = input_data_view.active();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "DiscoverySession::IsActive response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_active));
  return true;
}

void DiscoverySession_IsActive_ProxyToResponder::Run(
    bool in_active) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDiscoverySession_IsActive_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::bluetooth::mojom::internal::DiscoverySession_IsActive_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->active = in_active;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::DiscoverySession::IsActiveCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class DiscoverySession_Stop_ProxyToResponder {
 public:
  static DiscoverySession::StopCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<DiscoverySession_Stop_ProxyToResponder> proxy(
        new DiscoverySession_Stop_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&DiscoverySession_Stop_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~DiscoverySession_Stop_ProxyToResponder() {
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
  DiscoverySession_Stop_ProxyToResponder(
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
        << "DiscoverySession::StopCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(DiscoverySession_Stop_ProxyToResponder);
};

bool DiscoverySession_Stop_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "bluetooth::mojom::DiscoverySession::StopCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::DiscoverySession_Stop_ResponseParams_Data* params =
      reinterpret_cast<
          internal::DiscoverySession_Stop_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  DiscoverySession_Stop_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "DiscoverySession::Stop response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void DiscoverySession_Stop_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDiscoverySession_Stop_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::bluetooth::mojom::internal::DiscoverySession_Stop_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::DiscoverySession::StopCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool DiscoverySessionStubDispatch::Accept(
    DiscoverySession* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDiscoverySession_IsActive_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::DiscoverySession::IsActive",
               "message", message->name());
#endif
      break;
    }
    case internal::kDiscoverySession_Stop_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::DiscoverySession::Stop",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool DiscoverySessionStubDispatch::AcceptWithResponder(
    DiscoverySession* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kDiscoverySession_IsActive_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::DiscoverySession::IsActive",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::DiscoverySession_IsActive_Params_Data* params =
          reinterpret_cast<
              internal::DiscoverySession_IsActive_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      DiscoverySession_IsActive_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DiscoverySession::IsActive deserializer");
        return false;
      }
      DiscoverySession::IsActiveCallback callback =
          DiscoverySession_IsActive_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->IsActive(std::move(callback));
      return true;
    }
    case internal::kDiscoverySession_Stop_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::DiscoverySession::Stop",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::DiscoverySession_Stop_Params_Data* params =
          reinterpret_cast<
              internal::DiscoverySession_Stop_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      DiscoverySession_Stop_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DiscoverySession::Stop deserializer");
        return false;
      }
      DiscoverySession::StopCallback callback =
          DiscoverySession_Stop_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Stop(std::move(callback));
      return true;
    }
  }
  return false;
}

bool DiscoverySessionRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DiscoverySession RequestValidator");

  switch (message->header()->name) {
    case internal::kDiscoverySession_IsActive_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DiscoverySession_IsActive_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDiscoverySession_Stop_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DiscoverySession_Stop_Params_Data>(
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

bool DiscoverySessionResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DiscoverySession ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kDiscoverySession_IsActive_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::DiscoverySession_IsActive_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDiscoverySession_Stop_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::DiscoverySession_Stop_ResponseParams_Data>(
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
void DiscoverySessionInterceptorForTesting::IsActive(IsActiveCallback callback) {
  GetForwardingInterface()->IsActive(std::move(callback));
}
void DiscoverySessionInterceptorForTesting::Stop(StopCallback callback) {
  GetForwardingInterface()->Stop(std::move(callback));
}
DiscoverySessionAsyncWaiter::DiscoverySessionAsyncWaiter(
    DiscoverySession* proxy) : proxy_(proxy) {}

DiscoverySessionAsyncWaiter::~DiscoverySessionAsyncWaiter() = default;

void DiscoverySessionAsyncWaiter::IsActive(
    bool* out_active) {
  base::RunLoop loop;
  proxy_->IsActive(
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_active
,
             bool active) {*out_active = std::move(active);
            loop->Quit();
          },
          &loop,
          out_active));
  loop.Run();
}
void DiscoverySessionAsyncWaiter::Stop(
    bool* out_success) {
  base::RunLoop loop;
  proxy_->Stop(
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}

const char Adapter::Name_[] = "bluetooth.mojom.Adapter";

class Adapter_ConnectToDevice_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Adapter_ConnectToDevice_ForwardToCallback(
      Adapter::ConnectToDeviceCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Adapter::ConnectToDeviceCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Adapter_ConnectToDevice_ForwardToCallback);
};

class Adapter_GetDevices_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Adapter_GetDevices_ForwardToCallback(
      Adapter::GetDevicesCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Adapter::GetDevicesCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Adapter_GetDevices_ForwardToCallback);
};

class Adapter_GetInfo_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Adapter_GetInfo_ForwardToCallback(
      Adapter::GetInfoCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Adapter::GetInfoCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Adapter_GetInfo_ForwardToCallback);
};

class Adapter_StartDiscoverySession_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Adapter_StartDiscoverySession_ForwardToCallback(
      Adapter::StartDiscoverySessionCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Adapter::StartDiscoverySessionCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Adapter_StartDiscoverySession_ForwardToCallback);
};

AdapterProxy::AdapterProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AdapterProxy::ConnectToDevice(
    const std::string& in_address, ConnectToDeviceCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "bluetooth::mojom::Adapter::ConnectToDevice");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAdapter_ConnectToDevice_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::bluetooth::mojom::internal::Adapter_ConnectToDevice_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->address)::BaseType::BufferWriter
      address_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_address, buffer, &address_writer, &serialization_context);
  params->address.Set(
      address_writer.is_null() ? nullptr : address_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->address.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null address in Adapter.ConnectToDevice request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Adapter_ConnectToDevice_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void AdapterProxy::GetDevices(
    GetDevicesCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "bluetooth::mojom::Adapter::GetDevices");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAdapter_GetDevices_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::bluetooth::mojom::internal::Adapter_GetDevices_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Adapter_GetDevices_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void AdapterProxy::GetInfo(
    GetInfoCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "bluetooth::mojom::Adapter::GetInfo");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAdapter_GetInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::bluetooth::mojom::internal::Adapter_GetInfo_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Adapter_GetInfo_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void AdapterProxy::SetClient(
    AdapterClientPtr in_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "bluetooth::mojom::Adapter::SetClient");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAdapter_SetClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::bluetooth::mojom::internal::Adapter_SetClient_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::bluetooth::mojom::AdapterClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in Adapter.SetClient request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AdapterProxy::StartDiscoverySession(
    StartDiscoverySessionCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "bluetooth::mojom::Adapter::StartDiscoverySession");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAdapter_StartDiscoverySession_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::bluetooth::mojom::internal::Adapter_StartDiscoverySession_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Adapter_StartDiscoverySession_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class Adapter_ConnectToDevice_ProxyToResponder {
 public:
  static Adapter::ConnectToDeviceCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Adapter_ConnectToDevice_ProxyToResponder> proxy(
        new Adapter_ConnectToDevice_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Adapter_ConnectToDevice_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Adapter_ConnectToDevice_ProxyToResponder() {
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
  Adapter_ConnectToDevice_ProxyToResponder(
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
        << "Adapter::ConnectToDeviceCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ConnectResult in_result, ::bluetooth::mojom::DevicePtr in_device);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Adapter_ConnectToDevice_ProxyToResponder);
};

bool Adapter_ConnectToDevice_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "bluetooth::mojom::Adapter::ConnectToDeviceCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Adapter_ConnectToDevice_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Adapter_ConnectToDevice_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ConnectResult p_result{};
  ::bluetooth::mojom::DevicePtr p_device{};
  Adapter_ConnectToDevice_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  p_device =
      input_data_view.TakeDevice<decltype(p_device)>();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Adapter::ConnectToDevice response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_device));
  return true;
}

void Adapter_ConnectToDevice_ProxyToResponder::Run(
    ConnectResult in_result, ::bluetooth::mojom::DevicePtr in_device) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAdapter_ConnectToDevice_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::bluetooth::mojom::internal::Adapter_ConnectToDevice_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::bluetooth::mojom::ConnectResult>(
      in_result, &params->result);
  mojo::internal::Serialize<::bluetooth::mojom::DevicePtrDataView>(
      in_device, &params->device, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::Adapter::ConnectToDeviceCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Adapter_GetDevices_ProxyToResponder {
 public:
  static Adapter::GetDevicesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Adapter_GetDevices_ProxyToResponder> proxy(
        new Adapter_GetDevices_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Adapter_GetDevices_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Adapter_GetDevices_ProxyToResponder() {
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
  Adapter_GetDevices_ProxyToResponder(
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
        << "Adapter::GetDevicesCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      std::vector<::bluetooth::mojom::DeviceInfoPtr> in_devices);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Adapter_GetDevices_ProxyToResponder);
};

bool Adapter_GetDevices_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "bluetooth::mojom::Adapter::GetDevicesCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Adapter_GetDevices_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Adapter_GetDevices_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<::bluetooth::mojom::DeviceInfoPtr> p_devices{};
  Adapter_GetDevices_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadDevices(&p_devices))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Adapter::GetDevices response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_devices));
  return true;
}

void Adapter_GetDevices_ProxyToResponder::Run(
    std::vector<::bluetooth::mojom::DeviceInfoPtr> in_devices) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAdapter_GetDevices_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::bluetooth::mojom::internal::Adapter_GetDevices_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->devices)::BaseType::BufferWriter
      devices_writer;
  const mojo::internal::ContainerValidateParams devices_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::bluetooth::mojom::DeviceInfoDataView>>(
      in_devices, buffer, &devices_writer, &devices_validate_params,
      &serialization_context);
  params->devices.Set(
      devices_writer.is_null() ? nullptr : devices_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->devices.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null devices in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::Adapter::GetDevicesCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Adapter_GetInfo_ProxyToResponder {
 public:
  static Adapter::GetInfoCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Adapter_GetInfo_ProxyToResponder> proxy(
        new Adapter_GetInfo_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Adapter_GetInfo_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Adapter_GetInfo_ProxyToResponder() {
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
  Adapter_GetInfo_ProxyToResponder(
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
        << "Adapter::GetInfoCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      AdapterInfoPtr in_info);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Adapter_GetInfo_ProxyToResponder);
};

bool Adapter_GetInfo_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "bluetooth::mojom::Adapter::GetInfoCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Adapter_GetInfo_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Adapter_GetInfo_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  AdapterInfoPtr p_info{};
  Adapter_GetInfo_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadInfo(&p_info))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Adapter::GetInfo response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_info));
  return true;
}

void Adapter_GetInfo_ProxyToResponder::Run(
    AdapterInfoPtr in_info) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAdapter_GetInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::bluetooth::mojom::internal::Adapter_GetInfo_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->info)::BaseType::BufferWriter
      info_writer;
  mojo::internal::Serialize<::bluetooth::mojom::AdapterInfoDataView>(
      in_info, buffer, &info_writer, &serialization_context);
  params->info.Set(
      info_writer.is_null() ? nullptr : info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null info in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::Adapter::GetInfoCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Adapter_StartDiscoverySession_ProxyToResponder {
 public:
  static Adapter::StartDiscoverySessionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Adapter_StartDiscoverySession_ProxyToResponder> proxy(
        new Adapter_StartDiscoverySession_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Adapter_StartDiscoverySession_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Adapter_StartDiscoverySession_ProxyToResponder() {
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
  Adapter_StartDiscoverySession_ProxyToResponder(
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
        << "Adapter::StartDiscoverySessionCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      DiscoverySessionPtr in_session);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Adapter_StartDiscoverySession_ProxyToResponder);
};

bool Adapter_StartDiscoverySession_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "bluetooth::mojom::Adapter::StartDiscoverySessionCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Adapter_StartDiscoverySession_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Adapter_StartDiscoverySession_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  DiscoverySessionPtr p_session{};
  Adapter_StartDiscoverySession_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_session =
      input_data_view.TakeSession<decltype(p_session)>();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Adapter::StartDiscoverySession response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_session));
  return true;
}

void Adapter_StartDiscoverySession_ProxyToResponder::Run(
    DiscoverySessionPtr in_session) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAdapter_StartDiscoverySession_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::bluetooth::mojom::internal::Adapter_StartDiscoverySession_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::bluetooth::mojom::DiscoverySessionPtrDataView>(
      in_session, &params->session, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::Adapter::StartDiscoverySessionCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool AdapterStubDispatch::Accept(
    Adapter* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAdapter_ConnectToDevice_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::Adapter::ConnectToDevice",
               "message", message->name());
#endif
      break;
    }
    case internal::kAdapter_GetDevices_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::Adapter::GetDevices",
               "message", message->name());
#endif
      break;
    }
    case internal::kAdapter_GetInfo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::Adapter::GetInfo",
               "message", message->name());
#endif
      break;
    }
    case internal::kAdapter_SetClient_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::Adapter::SetClient",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Adapter_SetClient_Params_Data* params =
          reinterpret_cast<internal::Adapter_SetClient_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      AdapterClientPtr p_client{};
      Adapter_SetClient_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Adapter::SetClient deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetClient(
std::move(p_client));
      return true;
    }
    case internal::kAdapter_StartDiscoverySession_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::Adapter::StartDiscoverySession",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool AdapterStubDispatch::AcceptWithResponder(
    Adapter* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kAdapter_ConnectToDevice_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::Adapter::ConnectToDevice",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::Adapter_ConnectToDevice_Params_Data* params =
          reinterpret_cast<
              internal::Adapter_ConnectToDevice_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_address{};
      Adapter_ConnectToDevice_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadAddress(&p_address))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Adapter::ConnectToDevice deserializer");
        return false;
      }
      Adapter::ConnectToDeviceCallback callback =
          Adapter_ConnectToDevice_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ConnectToDevice(
std::move(p_address), std::move(callback));
      return true;
    }
    case internal::kAdapter_GetDevices_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::Adapter::GetDevices",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::Adapter_GetDevices_Params_Data* params =
          reinterpret_cast<
              internal::Adapter_GetDevices_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Adapter_GetDevices_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Adapter::GetDevices deserializer");
        return false;
      }
      Adapter::GetDevicesCallback callback =
          Adapter_GetDevices_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetDevices(std::move(callback));
      return true;
    }
    case internal::kAdapter_GetInfo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::Adapter::GetInfo",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::Adapter_GetInfo_Params_Data* params =
          reinterpret_cast<
              internal::Adapter_GetInfo_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Adapter_GetInfo_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Adapter::GetInfo deserializer");
        return false;
      }
      Adapter::GetInfoCallback callback =
          Adapter_GetInfo_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetInfo(std::move(callback));
      return true;
    }
    case internal::kAdapter_SetClient_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::Adapter::SetClient",
               "message", message->name());
#endif
      break;
    }
    case internal::kAdapter_StartDiscoverySession_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::Adapter::StartDiscoverySession",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::Adapter_StartDiscoverySession_Params_Data* params =
          reinterpret_cast<
              internal::Adapter_StartDiscoverySession_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Adapter_StartDiscoverySession_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Adapter::StartDiscoverySession deserializer");
        return false;
      }
      Adapter::StartDiscoverySessionCallback callback =
          Adapter_StartDiscoverySession_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->StartDiscoverySession(std::move(callback));
      return true;
    }
  }
  return false;
}

bool AdapterRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Adapter RequestValidator");

  switch (message->header()->name) {
    case internal::kAdapter_ConnectToDevice_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Adapter_ConnectToDevice_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAdapter_GetDevices_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Adapter_GetDevices_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAdapter_GetInfo_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Adapter_GetInfo_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAdapter_SetClient_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Adapter_SetClient_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAdapter_StartDiscoverySession_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Adapter_StartDiscoverySession_Params_Data>(
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

bool AdapterResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Adapter ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kAdapter_ConnectToDevice_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Adapter_ConnectToDevice_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAdapter_GetDevices_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Adapter_GetDevices_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAdapter_GetInfo_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Adapter_GetInfo_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAdapter_StartDiscoverySession_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Adapter_StartDiscoverySession_ResponseParams_Data>(
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
void AdapterInterceptorForTesting::ConnectToDevice(const std::string& address, ConnectToDeviceCallback callback) {
  GetForwardingInterface()->ConnectToDevice(std::move(address), std::move(callback));
}
void AdapterInterceptorForTesting::GetDevices(GetDevicesCallback callback) {
  GetForwardingInterface()->GetDevices(std::move(callback));
}
void AdapterInterceptorForTesting::GetInfo(GetInfoCallback callback) {
  GetForwardingInterface()->GetInfo(std::move(callback));
}
void AdapterInterceptorForTesting::SetClient(AdapterClientPtr client) {
  GetForwardingInterface()->SetClient(std::move(client));
}
void AdapterInterceptorForTesting::StartDiscoverySession(StartDiscoverySessionCallback callback) {
  GetForwardingInterface()->StartDiscoverySession(std::move(callback));
}
AdapterAsyncWaiter::AdapterAsyncWaiter(
    Adapter* proxy) : proxy_(proxy) {}

AdapterAsyncWaiter::~AdapterAsyncWaiter() = default;

void AdapterAsyncWaiter::ConnectToDevice(
    const std::string& address, ConnectResult* out_result, ::bluetooth::mojom::DevicePtr* out_device) {
  base::RunLoop loop;
  proxy_->ConnectToDevice(std::move(address),
      base::BindOnce(
          [](base::RunLoop* loop,
             ConnectResult* out_result
,
             ::bluetooth::mojom::DevicePtr* out_device
,
             ConnectResult result,
             ::bluetooth::mojom::DevicePtr device) {*out_result = std::move(result);*out_device = std::move(device);
            loop->Quit();
          },
          &loop,
          out_result,
          out_device));
  loop.Run();
}
void AdapterAsyncWaiter::GetDevices(
    std::vector<::bluetooth::mojom::DeviceInfoPtr>* out_devices) {
  base::RunLoop loop;
  proxy_->GetDevices(
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<::bluetooth::mojom::DeviceInfoPtr>* out_devices
,
             std::vector<::bluetooth::mojom::DeviceInfoPtr> devices) {*out_devices = std::move(devices);
            loop->Quit();
          },
          &loop,
          out_devices));
  loop.Run();
}
void AdapterAsyncWaiter::GetInfo(
    AdapterInfoPtr* out_info) {
  base::RunLoop loop;
  proxy_->GetInfo(
      base::BindOnce(
          [](base::RunLoop* loop,
             AdapterInfoPtr* out_info
,
             AdapterInfoPtr info) {*out_info = std::move(info);
            loop->Quit();
          },
          &loop,
          out_info));
  loop.Run();
}
void AdapterAsyncWaiter::StartDiscoverySession(
    DiscoverySessionPtr* out_session) {
  base::RunLoop loop;
  proxy_->StartDiscoverySession(
      base::BindOnce(
          [](base::RunLoop* loop,
             DiscoverySessionPtr* out_session
,
             DiscoverySessionPtr session) {*out_session = std::move(session);
            loop->Quit();
          },
          &loop,
          out_session));
  loop.Run();
}

const char AdapterClient::Name_[] = "bluetooth.mojom.AdapterClient";

AdapterClientProxy::AdapterClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AdapterClientProxy::PresentChanged(
    bool in_present) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "bluetooth::mojom::AdapterClient::PresentChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAdapterClient_PresentChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::bluetooth::mojom::internal::AdapterClient_PresentChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->present = in_present;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AdapterClientProxy::PoweredChanged(
    bool in_powered) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "bluetooth::mojom::AdapterClient::PoweredChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAdapterClient_PoweredChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::bluetooth::mojom::internal::AdapterClient_PoweredChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->powered = in_powered;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AdapterClientProxy::DiscoverableChanged(
    bool in_discoverable) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "bluetooth::mojom::AdapterClient::DiscoverableChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAdapterClient_DiscoverableChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::bluetooth::mojom::internal::AdapterClient_DiscoverableChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->discoverable = in_discoverable;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AdapterClientProxy::DiscoveringChanged(
    bool in_discovering) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "bluetooth::mojom::AdapterClient::DiscoveringChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAdapterClient_DiscoveringChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::bluetooth::mojom::internal::AdapterClient_DiscoveringChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->discovering = in_discovering;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AdapterClientProxy::DeviceAdded(
    ::bluetooth::mojom::DeviceInfoPtr in_device) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "bluetooth::mojom::AdapterClient::DeviceAdded");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAdapterClient_DeviceAdded_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::bluetooth::mojom::internal::AdapterClient_DeviceAdded_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->device)::BaseType::BufferWriter
      device_writer;
  mojo::internal::Serialize<::bluetooth::mojom::DeviceInfoDataView>(
      in_device, buffer, &device_writer, &serialization_context);
  params->device.Set(
      device_writer.is_null() ? nullptr : device_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->device.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null device in AdapterClient.DeviceAdded request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AdapterClientProxy::DeviceChanged(
    ::bluetooth::mojom::DeviceInfoPtr in_device) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "bluetooth::mojom::AdapterClient::DeviceChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAdapterClient_DeviceChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::bluetooth::mojom::internal::AdapterClient_DeviceChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->device)::BaseType::BufferWriter
      device_writer;
  mojo::internal::Serialize<::bluetooth::mojom::DeviceInfoDataView>(
      in_device, buffer, &device_writer, &serialization_context);
  params->device.Set(
      device_writer.is_null() ? nullptr : device_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->device.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null device in AdapterClient.DeviceChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AdapterClientProxy::DeviceRemoved(
    ::bluetooth::mojom::DeviceInfoPtr in_device) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "bluetooth::mojom::AdapterClient::DeviceRemoved");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAdapterClient_DeviceRemoved_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::bluetooth::mojom::internal::AdapterClient_DeviceRemoved_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->device)::BaseType::BufferWriter
      device_writer;
  mojo::internal::Serialize<::bluetooth::mojom::DeviceInfoDataView>(
      in_device, buffer, &device_writer, &serialization_context);
  params->device.Set(
      device_writer.is_null() ? nullptr : device_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->device.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null device in AdapterClient.DeviceRemoved request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool AdapterClientStubDispatch::Accept(
    AdapterClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAdapterClient_PresentChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::AdapterClient::PresentChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AdapterClient_PresentChanged_Params_Data* params =
          reinterpret_cast<internal::AdapterClient_PresentChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_present{};
      AdapterClient_PresentChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      p_present = input_data_view.present();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AdapterClient::PresentChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->PresentChanged(
std::move(p_present));
      return true;
    }
    case internal::kAdapterClient_PoweredChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::AdapterClient::PoweredChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AdapterClient_PoweredChanged_Params_Data* params =
          reinterpret_cast<internal::AdapterClient_PoweredChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_powered{};
      AdapterClient_PoweredChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      p_powered = input_data_view.powered();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AdapterClient::PoweredChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->PoweredChanged(
std::move(p_powered));
      return true;
    }
    case internal::kAdapterClient_DiscoverableChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::AdapterClient::DiscoverableChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AdapterClient_DiscoverableChanged_Params_Data* params =
          reinterpret_cast<internal::AdapterClient_DiscoverableChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_discoverable{};
      AdapterClient_DiscoverableChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      p_discoverable = input_data_view.discoverable();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AdapterClient::DiscoverableChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DiscoverableChanged(
std::move(p_discoverable));
      return true;
    }
    case internal::kAdapterClient_DiscoveringChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::AdapterClient::DiscoveringChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AdapterClient_DiscoveringChanged_Params_Data* params =
          reinterpret_cast<internal::AdapterClient_DiscoveringChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_discovering{};
      AdapterClient_DiscoveringChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      p_discovering = input_data_view.discovering();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AdapterClient::DiscoveringChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DiscoveringChanged(
std::move(p_discovering));
      return true;
    }
    case internal::kAdapterClient_DeviceAdded_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::AdapterClient::DeviceAdded",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AdapterClient_DeviceAdded_Params_Data* params =
          reinterpret_cast<internal::AdapterClient_DeviceAdded_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::bluetooth::mojom::DeviceInfoPtr p_device{};
      AdapterClient_DeviceAdded_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDevice(&p_device))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AdapterClient::DeviceAdded deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DeviceAdded(
std::move(p_device));
      return true;
    }
    case internal::kAdapterClient_DeviceChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::AdapterClient::DeviceChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AdapterClient_DeviceChanged_Params_Data* params =
          reinterpret_cast<internal::AdapterClient_DeviceChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::bluetooth::mojom::DeviceInfoPtr p_device{};
      AdapterClient_DeviceChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDevice(&p_device))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AdapterClient::DeviceChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DeviceChanged(
std::move(p_device));
      return true;
    }
    case internal::kAdapterClient_DeviceRemoved_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::AdapterClient::DeviceRemoved",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AdapterClient_DeviceRemoved_Params_Data* params =
          reinterpret_cast<internal::AdapterClient_DeviceRemoved_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::bluetooth::mojom::DeviceInfoPtr p_device{};
      AdapterClient_DeviceRemoved_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDevice(&p_device))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AdapterClient::DeviceRemoved deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DeviceRemoved(
std::move(p_device));
      return true;
    }
  }
  return false;
}

// static
bool AdapterClientStubDispatch::AcceptWithResponder(
    AdapterClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kAdapterClient_PresentChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::AdapterClient::PresentChanged",
               "message", message->name());
#endif
      break;
    }
    case internal::kAdapterClient_PoweredChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::AdapterClient::PoweredChanged",
               "message", message->name());
#endif
      break;
    }
    case internal::kAdapterClient_DiscoverableChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::AdapterClient::DiscoverableChanged",
               "message", message->name());
#endif
      break;
    }
    case internal::kAdapterClient_DiscoveringChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::AdapterClient::DiscoveringChanged",
               "message", message->name());
#endif
      break;
    }
    case internal::kAdapterClient_DeviceAdded_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::AdapterClient::DeviceAdded",
               "message", message->name());
#endif
      break;
    }
    case internal::kAdapterClient_DeviceChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::AdapterClient::DeviceChanged",
               "message", message->name());
#endif
      break;
    }
    case internal::kAdapterClient_DeviceRemoved_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)bluetooth::mojom::AdapterClient::DeviceRemoved",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool AdapterClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AdapterClient RequestValidator");

  switch (message->header()->name) {
    case internal::kAdapterClient_PresentChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AdapterClient_PresentChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAdapterClient_PoweredChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AdapterClient_PoweredChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAdapterClient_DiscoverableChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AdapterClient_DiscoverableChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAdapterClient_DiscoveringChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AdapterClient_DiscoveringChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAdapterClient_DeviceAdded_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AdapterClient_DeviceAdded_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAdapterClient_DeviceChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AdapterClient_DeviceChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAdapterClient_DeviceRemoved_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AdapterClient_DeviceRemoved_Params_Data>(
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

void AdapterClientInterceptorForTesting::PresentChanged(bool present) {
  GetForwardingInterface()->PresentChanged(std::move(present));
}
void AdapterClientInterceptorForTesting::PoweredChanged(bool powered) {
  GetForwardingInterface()->PoweredChanged(std::move(powered));
}
void AdapterClientInterceptorForTesting::DiscoverableChanged(bool discoverable) {
  GetForwardingInterface()->DiscoverableChanged(std::move(discoverable));
}
void AdapterClientInterceptorForTesting::DiscoveringChanged(bool discovering) {
  GetForwardingInterface()->DiscoveringChanged(std::move(discovering));
}
void AdapterClientInterceptorForTesting::DeviceAdded(::bluetooth::mojom::DeviceInfoPtr device) {
  GetForwardingInterface()->DeviceAdded(std::move(device));
}
void AdapterClientInterceptorForTesting::DeviceChanged(::bluetooth::mojom::DeviceInfoPtr device) {
  GetForwardingInterface()->DeviceChanged(std::move(device));
}
void AdapterClientInterceptorForTesting::DeviceRemoved(::bluetooth::mojom::DeviceInfoPtr device) {
  GetForwardingInterface()->DeviceRemoved(std::move(device));
}
AdapterClientAsyncWaiter::AdapterClientAsyncWaiter(
    AdapterClient* proxy) : proxy_(proxy) {}

AdapterClientAsyncWaiter::~AdapterClientAsyncWaiter() = default;


}  // namespace mojom
}  // namespace bluetooth

namespace mojo {


// static
bool StructTraits<::bluetooth::mojom::AdapterInfo::DataView, ::bluetooth::mojom::AdapterInfoPtr>::Read(
    ::bluetooth::mojom::AdapterInfo::DataView input,
    ::bluetooth::mojom::AdapterInfoPtr* output) {
  bool success = true;
  ::bluetooth::mojom::AdapterInfoPtr result(::bluetooth::mojom::AdapterInfo::New());
  
      if (!input.ReadAddress(&result->address))
        success = false;
      if (!input.ReadName(&result->name))
        success = false;
      result->initialized = input.initialized();
      result->present = input.present();
      result->powered = input.powered();
      result->discoverable = input.discoverable();
      result->discovering = input.discovering();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif