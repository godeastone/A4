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

#include "media/mojo/interfaces/cdm_proxy.mojom.h"

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

#include "media/mojo/interfaces/cdm_proxy.mojom-shared-message-ids.h"
#include "media/base/ipc/media_param_traits_macros.h"
namespace media {
namespace mojom {
const char CdmProxy::Name_[] = "media.mojom.CdmProxy";

class CdmProxy_Initialize_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CdmProxy_Initialize_ForwardToCallback(
      CdmProxy::InitializeCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CdmProxy::InitializeCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CdmProxy_Initialize_ForwardToCallback);
};

class CdmProxy_Process_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CdmProxy_Process_ForwardToCallback(
      CdmProxy::ProcessCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CdmProxy::ProcessCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CdmProxy_Process_ForwardToCallback);
};

class CdmProxy_CreateMediaCryptoSession_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CdmProxy_CreateMediaCryptoSession_ForwardToCallback(
      CdmProxy::CreateMediaCryptoSessionCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CdmProxy::CreateMediaCryptoSessionCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CdmProxy_CreateMediaCryptoSession_ForwardToCallback);
};

CdmProxyProxy::CdmProxyProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void CdmProxyProxy::Initialize(
    CdmProxyClientAssociatedPtrInfo in_client, InitializeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::CdmProxy::Initialize");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCdmProxy_Initialize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::CdmProxy_Initialize_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::CdmProxyClientAssociatedPtrInfoDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid client in CdmProxy.Initialize request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CdmProxy_Initialize_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CdmProxyProxy::Process(
    media::CdmProxy::Function in_function, uint32_t in_crypto_session_id, const std::vector<uint8_t>& in_input_data, uint32_t in_output_data_size, ProcessCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::CdmProxy::Process");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCdmProxy_Process_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::CdmProxy_Process_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::CdmProxy_Function>(
      in_function, &params->function);
  params->crypto_session_id = in_crypto_session_id;
  typename decltype(params->input_data)::BaseType::BufferWriter
      input_data_writer;
  const mojo::internal::ContainerValidateParams input_data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_input_data, buffer, &input_data_writer, &input_data_validate_params,
      &serialization_context);
  params->input_data.Set(
      input_data_writer.is_null() ? nullptr : input_data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->input_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null input_data in CdmProxy.Process request");
  params->output_data_size = in_output_data_size;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CdmProxy_Process_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CdmProxyProxy::CreateMediaCryptoSession(
    const std::vector<uint8_t>& in_input_data, CreateMediaCryptoSessionCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::CdmProxy::CreateMediaCryptoSession");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCdmProxy_CreateMediaCryptoSession_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::CdmProxy_CreateMediaCryptoSession_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->input_data)::BaseType::BufferWriter
      input_data_writer;
  const mojo::internal::ContainerValidateParams input_data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_input_data, buffer, &input_data_writer, &input_data_validate_params,
      &serialization_context);
  params->input_data.Set(
      input_data_writer.is_null() ? nullptr : input_data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->input_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null input_data in CdmProxy.CreateMediaCryptoSession request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CdmProxy_CreateMediaCryptoSession_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CdmProxyProxy::SetKey(
    uint32_t in_crypto_session_id, const std::vector<uint8_t>& in_key_id, const std::vector<uint8_t>& in_key_blob) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::CdmProxy::SetKey");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCdmProxy_SetKey_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::CdmProxy_SetKey_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->crypto_session_id = in_crypto_session_id;
  typename decltype(params->key_id)::BaseType::BufferWriter
      key_id_writer;
  const mojo::internal::ContainerValidateParams key_id_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_key_id, buffer, &key_id_writer, &key_id_validate_params,
      &serialization_context);
  params->key_id.Set(
      key_id_writer.is_null() ? nullptr : key_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key_id in CdmProxy.SetKey request");
  typename decltype(params->key_blob)::BaseType::BufferWriter
      key_blob_writer;
  const mojo::internal::ContainerValidateParams key_blob_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_key_blob, buffer, &key_blob_writer, &key_blob_validate_params,
      &serialization_context);
  params->key_blob.Set(
      key_blob_writer.is_null() ? nullptr : key_blob_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key_blob.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key_blob in CdmProxy.SetKey request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void CdmProxyProxy::RemoveKey(
    uint32_t in_crypto_session_id, const std::vector<uint8_t>& in_key_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::CdmProxy::RemoveKey");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCdmProxy_RemoveKey_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::CdmProxy_RemoveKey_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->crypto_session_id = in_crypto_session_id;
  typename decltype(params->key_id)::BaseType::BufferWriter
      key_id_writer;
  const mojo::internal::ContainerValidateParams key_id_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_key_id, buffer, &key_id_writer, &key_id_validate_params,
      &serialization_context);
  params->key_id.Set(
      key_id_writer.is_null() ? nullptr : key_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key_id in CdmProxy.RemoveKey request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class CdmProxy_Initialize_ProxyToResponder {
 public:
  static CdmProxy::InitializeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CdmProxy_Initialize_ProxyToResponder> proxy(
        new CdmProxy_Initialize_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CdmProxy_Initialize_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CdmProxy_Initialize_ProxyToResponder() {
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
  CdmProxy_Initialize_ProxyToResponder(
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
        << "CdmProxy::InitializeCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      media::CdmProxy::Status in_status, media::CdmProxy::Protocol in_protocol, uint32_t in_crypto_session_id, int32_t in_cdm_id);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CdmProxy_Initialize_ProxyToResponder);
};

bool CdmProxy_Initialize_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "media::mojom::CdmProxy::InitializeCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CdmProxy_Initialize_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CdmProxy_Initialize_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  media::CdmProxy::Status p_status{};
  media::CdmProxy::Protocol p_protocol{};
  uint32_t p_crypto_session_id{};
  int32_t p_cdm_id{};
  CdmProxy_Initialize_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadProtocol(&p_protocol))
    success = false;
  p_crypto_session_id = input_data_view.crypto_session_id();
  p_cdm_id = input_data_view.cdm_id();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "CdmProxy::Initialize response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_protocol), 
std::move(p_crypto_session_id), 
std::move(p_cdm_id));
  return true;
}

void CdmProxy_Initialize_ProxyToResponder::Run(
    media::CdmProxy::Status in_status, media::CdmProxy::Protocol in_protocol, uint32_t in_crypto_session_id, int32_t in_cdm_id) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCdmProxy_Initialize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::CdmProxy_Initialize_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::CdmProxy_Status>(
      in_status, &params->status);
  mojo::internal::Serialize<::media::mojom::CdmProxy_Protocol>(
      in_protocol, &params->protocol);
  params->crypto_session_id = in_crypto_session_id;
  params->cdm_id = in_cdm_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::CdmProxy::InitializeCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class CdmProxy_Process_ProxyToResponder {
 public:
  static CdmProxy::ProcessCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CdmProxy_Process_ProxyToResponder> proxy(
        new CdmProxy_Process_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CdmProxy_Process_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CdmProxy_Process_ProxyToResponder() {
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
  CdmProxy_Process_ProxyToResponder(
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
        << "CdmProxy::ProcessCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      media::CdmProxy::Status in_status, const std::vector<uint8_t>& in_output_data);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CdmProxy_Process_ProxyToResponder);
};

bool CdmProxy_Process_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "media::mojom::CdmProxy::ProcessCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CdmProxy_Process_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CdmProxy_Process_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  media::CdmProxy::Status p_status{};
  std::vector<uint8_t> p_output_data{};
  CdmProxy_Process_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadOutputData(&p_output_data))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "CdmProxy::Process response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_output_data));
  return true;
}

void CdmProxy_Process_ProxyToResponder::Run(
    media::CdmProxy::Status in_status, const std::vector<uint8_t>& in_output_data) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCdmProxy_Process_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::CdmProxy_Process_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::CdmProxy_Status>(
      in_status, &params->status);
  typename decltype(params->output_data)::BaseType::BufferWriter
      output_data_writer;
  const mojo::internal::ContainerValidateParams output_data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_output_data, buffer, &output_data_writer, &output_data_validate_params,
      &serialization_context);
  params->output_data.Set(
      output_data_writer.is_null() ? nullptr : output_data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->output_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null output_data in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::CdmProxy::ProcessCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class CdmProxy_CreateMediaCryptoSession_ProxyToResponder {
 public:
  static CdmProxy::CreateMediaCryptoSessionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CdmProxy_CreateMediaCryptoSession_ProxyToResponder> proxy(
        new CdmProxy_CreateMediaCryptoSession_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CdmProxy_CreateMediaCryptoSession_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CdmProxy_CreateMediaCryptoSession_ProxyToResponder() {
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
  CdmProxy_CreateMediaCryptoSession_ProxyToResponder(
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
        << "CdmProxy::CreateMediaCryptoSessionCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      media::CdmProxy::Status in_status, uint32_t in_crypto_session_id, uint64_t in_output_data);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CdmProxy_CreateMediaCryptoSession_ProxyToResponder);
};

bool CdmProxy_CreateMediaCryptoSession_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "media::mojom::CdmProxy::CreateMediaCryptoSessionCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CdmProxy_CreateMediaCryptoSession_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CdmProxy_CreateMediaCryptoSession_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  media::CdmProxy::Status p_status{};
  uint32_t p_crypto_session_id{};
  uint64_t p_output_data{};
  CdmProxy_CreateMediaCryptoSession_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  p_crypto_session_id = input_data_view.crypto_session_id();
  p_output_data = input_data_view.output_data();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "CdmProxy::CreateMediaCryptoSession response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_crypto_session_id), 
std::move(p_output_data));
  return true;
}

void CdmProxy_CreateMediaCryptoSession_ProxyToResponder::Run(
    media::CdmProxy::Status in_status, uint32_t in_crypto_session_id, uint64_t in_output_data) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCdmProxy_CreateMediaCryptoSession_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::CdmProxy_CreateMediaCryptoSession_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::CdmProxy_Status>(
      in_status, &params->status);
  params->crypto_session_id = in_crypto_session_id;
  params->output_data = in_output_data;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::CdmProxy::CreateMediaCryptoSessionCallback",
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
bool CdmProxyStubDispatch::Accept(
    CdmProxy* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kCdmProxy_Initialize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::CdmProxy::Initialize",
               "message", message->name());
#endif
      break;
    }
    case internal::kCdmProxy_Process_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::CdmProxy::Process",
               "message", message->name());
#endif
      break;
    }
    case internal::kCdmProxy_CreateMediaCryptoSession_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::CdmProxy::CreateMediaCryptoSession",
               "message", message->name());
#endif
      break;
    }
    case internal::kCdmProxy_SetKey_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::CdmProxy::SetKey",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CdmProxy_SetKey_Params_Data* params =
          reinterpret_cast<internal::CdmProxy_SetKey_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_crypto_session_id{};
      std::vector<uint8_t> p_key_id{};
      std::vector<uint8_t> p_key_blob{};
      CdmProxy_SetKey_ParamsDataView input_data_view(params, &serialization_context);
      
      p_crypto_session_id = input_data_view.crypto_session_id();
      if (!input_data_view.ReadKeyId(&p_key_id))
        success = false;
      if (!input_data_view.ReadKeyBlob(&p_key_blob))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CdmProxy::SetKey deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetKey(
std::move(p_crypto_session_id), 
std::move(p_key_id), 
std::move(p_key_blob));
      return true;
    }
    case internal::kCdmProxy_RemoveKey_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::CdmProxy::RemoveKey",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CdmProxy_RemoveKey_Params_Data* params =
          reinterpret_cast<internal::CdmProxy_RemoveKey_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_crypto_session_id{};
      std::vector<uint8_t> p_key_id{};
      CdmProxy_RemoveKey_ParamsDataView input_data_view(params, &serialization_context);
      
      p_crypto_session_id = input_data_view.crypto_session_id();
      if (!input_data_view.ReadKeyId(&p_key_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CdmProxy::RemoveKey deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RemoveKey(
std::move(p_crypto_session_id), 
std::move(p_key_id));
      return true;
    }
  }
  return false;
}

// static
bool CdmProxyStubDispatch::AcceptWithResponder(
    CdmProxy* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kCdmProxy_Initialize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::CdmProxy::Initialize",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::CdmProxy_Initialize_Params_Data* params =
          reinterpret_cast<
              internal::CdmProxy_Initialize_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CdmProxyClientAssociatedPtrInfo p_client{};
      CdmProxy_Initialize_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CdmProxy::Initialize deserializer");
        return false;
      }
      CdmProxy::InitializeCallback callback =
          CdmProxy_Initialize_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Initialize(
std::move(p_client), std::move(callback));
      return true;
    }
    case internal::kCdmProxy_Process_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::CdmProxy::Process",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::CdmProxy_Process_Params_Data* params =
          reinterpret_cast<
              internal::CdmProxy_Process_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      media::CdmProxy::Function p_function{};
      uint32_t p_crypto_session_id{};
      std::vector<uint8_t> p_input_data{};
      uint32_t p_output_data_size{};
      CdmProxy_Process_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFunction(&p_function))
        success = false;
      p_crypto_session_id = input_data_view.crypto_session_id();
      if (!input_data_view.ReadInputData(&p_input_data))
        success = false;
      p_output_data_size = input_data_view.output_data_size();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CdmProxy::Process deserializer");
        return false;
      }
      CdmProxy::ProcessCallback callback =
          CdmProxy_Process_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Process(
std::move(p_function), 
std::move(p_crypto_session_id), 
std::move(p_input_data), 
std::move(p_output_data_size), std::move(callback));
      return true;
    }
    case internal::kCdmProxy_CreateMediaCryptoSession_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::CdmProxy::CreateMediaCryptoSession",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::CdmProxy_CreateMediaCryptoSession_Params_Data* params =
          reinterpret_cast<
              internal::CdmProxy_CreateMediaCryptoSession_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<uint8_t> p_input_data{};
      CdmProxy_CreateMediaCryptoSession_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadInputData(&p_input_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CdmProxy::CreateMediaCryptoSession deserializer");
        return false;
      }
      CdmProxy::CreateMediaCryptoSessionCallback callback =
          CdmProxy_CreateMediaCryptoSession_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateMediaCryptoSession(
std::move(p_input_data), std::move(callback));
      return true;
    }
    case internal::kCdmProxy_SetKey_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::CdmProxy::SetKey",
               "message", message->name());
#endif
      break;
    }
    case internal::kCdmProxy_RemoveKey_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::CdmProxy::RemoveKey",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool CdmProxyRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CdmProxy RequestValidator");

  switch (message->header()->name) {
    case internal::kCdmProxy_Initialize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CdmProxy_Initialize_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCdmProxy_Process_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CdmProxy_Process_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCdmProxy_CreateMediaCryptoSession_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CdmProxy_CreateMediaCryptoSession_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCdmProxy_SetKey_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CdmProxy_SetKey_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCdmProxy_RemoveKey_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CdmProxy_RemoveKey_Params_Data>(
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

bool CdmProxyResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CdmProxy ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kCdmProxy_Initialize_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CdmProxy_Initialize_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCdmProxy_Process_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CdmProxy_Process_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCdmProxy_CreateMediaCryptoSession_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CdmProxy_CreateMediaCryptoSession_ResponseParams_Data>(
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
void CdmProxyInterceptorForTesting::Initialize(CdmProxyClientAssociatedPtrInfo client, InitializeCallback callback) {
  GetForwardingInterface()->Initialize(std::move(client), std::move(callback));
}
void CdmProxyInterceptorForTesting::Process(media::CdmProxy::Function function, uint32_t crypto_session_id, const std::vector<uint8_t>& input_data, uint32_t output_data_size, ProcessCallback callback) {
  GetForwardingInterface()->Process(std::move(function), std::move(crypto_session_id), std::move(input_data), std::move(output_data_size), std::move(callback));
}
void CdmProxyInterceptorForTesting::CreateMediaCryptoSession(const std::vector<uint8_t>& input_data, CreateMediaCryptoSessionCallback callback) {
  GetForwardingInterface()->CreateMediaCryptoSession(std::move(input_data), std::move(callback));
}
void CdmProxyInterceptorForTesting::SetKey(uint32_t crypto_session_id, const std::vector<uint8_t>& key_id, const std::vector<uint8_t>& key_blob) {
  GetForwardingInterface()->SetKey(std::move(crypto_session_id), std::move(key_id), std::move(key_blob));
}
void CdmProxyInterceptorForTesting::RemoveKey(uint32_t crypto_session_id, const std::vector<uint8_t>& key_id) {
  GetForwardingInterface()->RemoveKey(std::move(crypto_session_id), std::move(key_id));
}
CdmProxyAsyncWaiter::CdmProxyAsyncWaiter(
    CdmProxy* proxy) : proxy_(proxy) {}

CdmProxyAsyncWaiter::~CdmProxyAsyncWaiter() = default;

void CdmProxyAsyncWaiter::Initialize(
    CdmProxyClientAssociatedPtrInfo client, media::CdmProxy::Status* out_status, media::CdmProxy::Protocol* out_protocol, uint32_t* out_crypto_session_id, int32_t* out_cdm_id) {
  base::RunLoop loop;
  proxy_->Initialize(std::move(client),
      base::BindOnce(
          [](base::RunLoop* loop,
             media::CdmProxy::Status* out_status
,
             media::CdmProxy::Protocol* out_protocol
,
             uint32_t* out_crypto_session_id
,
             int32_t* out_cdm_id
,
             media::CdmProxy::Status status,
             media::CdmProxy::Protocol protocol,
             uint32_t crypto_session_id,
             int32_t cdm_id) {*out_status = std::move(status);*out_protocol = std::move(protocol);*out_crypto_session_id = std::move(crypto_session_id);*out_cdm_id = std::move(cdm_id);
            loop->Quit();
          },
          &loop,
          out_status,
          out_protocol,
          out_crypto_session_id,
          out_cdm_id));
  loop.Run();
}
void CdmProxyAsyncWaiter::Process(
    media::CdmProxy::Function function, uint32_t crypto_session_id, const std::vector<uint8_t>& input_data, uint32_t output_data_size, media::CdmProxy::Status* out_status, std::vector<uint8_t>* out_output_data) {
  base::RunLoop loop;
  proxy_->Process(std::move(function),std::move(crypto_session_id),std::move(input_data),std::move(output_data_size),
      base::BindOnce(
          [](base::RunLoop* loop,
             media::CdmProxy::Status* out_status
,
             std::vector<uint8_t>* out_output_data
,
             media::CdmProxy::Status status,
             const std::vector<uint8_t>& output_data) {*out_status = std::move(status);*out_output_data = std::move(output_data);
            loop->Quit();
          },
          &loop,
          out_status,
          out_output_data));
  loop.Run();
}
void CdmProxyAsyncWaiter::CreateMediaCryptoSession(
    const std::vector<uint8_t>& input_data, media::CdmProxy::Status* out_status, uint32_t* out_crypto_session_id, uint64_t* out_output_data) {
  base::RunLoop loop;
  proxy_->CreateMediaCryptoSession(std::move(input_data),
      base::BindOnce(
          [](base::RunLoop* loop,
             media::CdmProxy::Status* out_status
,
             uint32_t* out_crypto_session_id
,
             uint64_t* out_output_data
,
             media::CdmProxy::Status status,
             uint32_t crypto_session_id,
             uint64_t output_data) {*out_status = std::move(status);*out_crypto_session_id = std::move(crypto_session_id);*out_output_data = std::move(output_data);
            loop->Quit();
          },
          &loop,
          out_status,
          out_crypto_session_id,
          out_output_data));
  loop.Run();
}

const char CdmProxyClient::Name_[] = "media.mojom.CdmProxyClient";

CdmProxyClientProxy::CdmProxyClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void CdmProxyClientProxy::NotifyHardwareReset(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::CdmProxyClient::NotifyHardwareReset");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCdmProxyClient_NotifyHardwareReset_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::CdmProxyClient_NotifyHardwareReset_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool CdmProxyClientStubDispatch::Accept(
    CdmProxyClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kCdmProxyClient_NotifyHardwareReset_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::CdmProxyClient::NotifyHardwareReset",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CdmProxyClient_NotifyHardwareReset_Params_Data* params =
          reinterpret_cast<internal::CdmProxyClient_NotifyHardwareReset_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CdmProxyClient_NotifyHardwareReset_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CdmProxyClient::NotifyHardwareReset deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->NotifyHardwareReset();
      return true;
    }
  }
  return false;
}

// static
bool CdmProxyClientStubDispatch::AcceptWithResponder(
    CdmProxyClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kCdmProxyClient_NotifyHardwareReset_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::CdmProxyClient::NotifyHardwareReset",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool CdmProxyClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CdmProxyClient RequestValidator");

  switch (message->header()->name) {
    case internal::kCdmProxyClient_NotifyHardwareReset_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CdmProxyClient_NotifyHardwareReset_Params_Data>(
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

void CdmProxyClientInterceptorForTesting::NotifyHardwareReset() {
  GetForwardingInterface()->NotifyHardwareReset();
}
CdmProxyClientAsyncWaiter::CdmProxyClientAsyncWaiter(
    CdmProxyClient* proxy) : proxy_(proxy) {}

CdmProxyClientAsyncWaiter::~CdmProxyClientAsyncWaiter() = default;


}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif