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

#include "media/mojo/interfaces/key_system_support.mojom.h"

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

#include "media/mojo/interfaces/key_system_support.mojom-shared-message-ids.h"
#include "media/base/ipc/media_param_traits_macros.h"
namespace media {
namespace mojom {
const char KeySystemSupport::Name_[] = "media.mojom.KeySystemSupport";
bool KeySystemSupport::IsKeySystemSupported(const std::string& key_system, bool* out_is_supported, std::vector<media::VideoCodec>* out_supported_video_codecs, bool* out_supports_persistent_license, std::vector<media::EncryptionMode>* out_supported_encryption_schemes) {
  NOTREACHED();
  return false;
}
class KeySystemSupport_IsKeySystemSupported_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  KeySystemSupport_IsKeySystemSupported_HandleSyncResponse(
      bool* result, bool* out_is_supported, std::vector<media::VideoCodec>* out_supported_video_codecs, bool* out_supports_persistent_license, std::vector<media::EncryptionMode>* out_supported_encryption_schemes)
      : result_(result), out_is_supported_(out_is_supported), out_supported_video_codecs_(out_supported_video_codecs), out_supports_persistent_license_(out_supports_persistent_license), out_supported_encryption_schemes_(out_supported_encryption_schemes) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  bool* out_is_supported_;
  std::vector<media::VideoCodec>* out_supported_video_codecs_;
  bool* out_supports_persistent_license_;
  std::vector<media::EncryptionMode>* out_supported_encryption_schemes_;DISALLOW_COPY_AND_ASSIGN(KeySystemSupport_IsKeySystemSupported_HandleSyncResponse);
};

class KeySystemSupport_IsKeySystemSupported_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  KeySystemSupport_IsKeySystemSupported_ForwardToCallback(
      KeySystemSupport::IsKeySystemSupportedCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  KeySystemSupport::IsKeySystemSupportedCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(KeySystemSupport_IsKeySystemSupported_ForwardToCallback);
};

KeySystemSupportProxy::KeySystemSupportProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
bool KeySystemSupportProxy::IsKeySystemSupported(
    const std::string& param_key_system, bool* out_param_is_supported, std::vector<media::VideoCodec>* out_param_supported_video_codecs, bool* out_param_supports_persistent_license, std::vector<media::EncryptionMode>* out_param_supported_encryption_schemes) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::KeySystemSupport::IsKeySystemSupported");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kKeySystemSupport_IsKeySystemSupported_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::KeySystemSupport_IsKeySystemSupported_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->key_system)::BaseType::BufferWriter
      key_system_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_key_system, buffer, &key_system_writer, &serialization_context);
  params->key_system.Set(
      key_system_writer.is_null() ? nullptr : key_system_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key_system.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key_system in KeySystemSupport.IsKeySystemSupported request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new KeySystemSupport_IsKeySystemSupported_HandleSyncResponse(
          &result, out_param_is_supported, out_param_supported_video_codecs, out_param_supports_persistent_license, out_param_supported_encryption_schemes));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void KeySystemSupportProxy::IsKeySystemSupported(
    const std::string& in_key_system, IsKeySystemSupportedCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::KeySystemSupport::IsKeySystemSupported");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kKeySystemSupport_IsKeySystemSupported_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::KeySystemSupport_IsKeySystemSupported_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->key_system)::BaseType::BufferWriter
      key_system_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_key_system, buffer, &key_system_writer, &serialization_context);
  params->key_system.Set(
      key_system_writer.is_null() ? nullptr : key_system_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key_system.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key_system in KeySystemSupport.IsKeySystemSupported request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new KeySystemSupport_IsKeySystemSupported_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class KeySystemSupport_IsKeySystemSupported_ProxyToResponder {
 public:
  static KeySystemSupport::IsKeySystemSupportedCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<KeySystemSupport_IsKeySystemSupported_ProxyToResponder> proxy(
        new KeySystemSupport_IsKeySystemSupported_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&KeySystemSupport_IsKeySystemSupported_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~KeySystemSupport_IsKeySystemSupported_ProxyToResponder() {
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
  KeySystemSupport_IsKeySystemSupported_ProxyToResponder(
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
        << "KeySystemSupport::IsKeySystemSupportedCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_is_supported, const std::vector<media::VideoCodec>& in_supported_video_codecs, bool in_supports_persistent_license, const std::vector<media::EncryptionMode>& in_supported_encryption_schemes);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(KeySystemSupport_IsKeySystemSupported_ProxyToResponder);
};

bool KeySystemSupport_IsKeySystemSupported_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "media::mojom::KeySystemSupport::IsKeySystemSupportedCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::KeySystemSupport_IsKeySystemSupported_ResponseParams_Data* params =
      reinterpret_cast<
          internal::KeySystemSupport_IsKeySystemSupported_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_is_supported{};
  std::vector<media::VideoCodec> p_supported_video_codecs{};
  bool p_supports_persistent_license{};
  std::vector<media::EncryptionMode> p_supported_encryption_schemes{};
  KeySystemSupport_IsKeySystemSupported_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_is_supported = input_data_view.is_supported();
  if (!input_data_view.ReadSupportedVideoCodecs(&p_supported_video_codecs))
    success = false;
  p_supports_persistent_license = input_data_view.supports_persistent_license();
  if (!input_data_view.ReadSupportedEncryptionSchemes(&p_supported_encryption_schemes))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "KeySystemSupport::IsKeySystemSupported response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_is_supported), 
std::move(p_supported_video_codecs), 
std::move(p_supports_persistent_license), 
std::move(p_supported_encryption_schemes));
  return true;
}

void KeySystemSupport_IsKeySystemSupported_ProxyToResponder::Run(
    bool in_is_supported, const std::vector<media::VideoCodec>& in_supported_video_codecs, bool in_supports_persistent_license, const std::vector<media::EncryptionMode>& in_supported_encryption_schemes) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kKeySystemSupport_IsKeySystemSupported_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::KeySystemSupport_IsKeySystemSupported_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->is_supported = in_is_supported;
  typename decltype(params->supported_video_codecs)::BaseType::BufferWriter
      supported_video_codecs_writer;
  const mojo::internal::ContainerValidateParams supported_video_codecs_validate_params(
      0, ::media::mojom::internal::VideoCodec_Data::Validate);
  mojo::internal::Serialize<mojo::ArrayDataView<::media::mojom::VideoCodec>>(
      in_supported_video_codecs, buffer, &supported_video_codecs_writer, &supported_video_codecs_validate_params,
      &serialization_context);
  params->supported_video_codecs.Set(
      supported_video_codecs_writer.is_null() ? nullptr : supported_video_codecs_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->supported_video_codecs.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null supported_video_codecs in ");
  params->supports_persistent_license = in_supports_persistent_license;
  typename decltype(params->supported_encryption_schemes)::BaseType::BufferWriter
      supported_encryption_schemes_writer;
  const mojo::internal::ContainerValidateParams supported_encryption_schemes_validate_params(
      0, ::media::mojom::internal::EncryptionMode_Data::Validate);
  mojo::internal::Serialize<mojo::ArrayDataView<::media::mojom::EncryptionMode>>(
      in_supported_encryption_schemes, buffer, &supported_encryption_schemes_writer, &supported_encryption_schemes_validate_params,
      &serialization_context);
  params->supported_encryption_schemes.Set(
      supported_encryption_schemes_writer.is_null() ? nullptr : supported_encryption_schemes_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->supported_encryption_schemes.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null supported_encryption_schemes in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::KeySystemSupport::IsKeySystemSupportedCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool KeySystemSupport_IsKeySystemSupported_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::KeySystemSupport_IsKeySystemSupported_ResponseParams_Data* params =
      reinterpret_cast<internal::KeySystemSupport_IsKeySystemSupported_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_is_supported{};
  std::vector<media::VideoCodec> p_supported_video_codecs{};
  bool p_supports_persistent_license{};
  std::vector<media::EncryptionMode> p_supported_encryption_schemes{};
  KeySystemSupport_IsKeySystemSupported_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_is_supported = input_data_view.is_supported();
  if (!input_data_view.ReadSupportedVideoCodecs(&p_supported_video_codecs))
    success = false;
  p_supports_persistent_license = input_data_view.supports_persistent_license();
  if (!input_data_view.ReadSupportedEncryptionSchemes(&p_supported_encryption_schemes))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "KeySystemSupport::IsKeySystemSupported response deserializer");
    return false;
  }
  *out_is_supported_ = std::move(p_is_supported);
  *out_supported_video_codecs_ = std::move(p_supported_video_codecs);
  *out_supports_persistent_license_ = std::move(p_supports_persistent_license);
  *out_supported_encryption_schemes_ = std::move(p_supported_encryption_schemes);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

// static
bool KeySystemSupportStubDispatch::Accept(
    KeySystemSupport* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kKeySystemSupport_IsKeySystemSupported_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::KeySystemSupport::IsKeySystemSupported",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool KeySystemSupportStubDispatch::AcceptWithResponder(
    KeySystemSupport* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kKeySystemSupport_IsKeySystemSupported_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::KeySystemSupport::IsKeySystemSupported",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::KeySystemSupport_IsKeySystemSupported_Params_Data* params =
          reinterpret_cast<
              internal::KeySystemSupport_IsKeySystemSupported_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_key_system{};
      KeySystemSupport_IsKeySystemSupported_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadKeySystem(&p_key_system))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "KeySystemSupport::IsKeySystemSupported deserializer");
        return false;
      }
      KeySystemSupport::IsKeySystemSupportedCallback callback =
          KeySystemSupport_IsKeySystemSupported_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->IsKeySystemSupported(
std::move(p_key_system), std::move(callback));
      return true;
    }
  }
  return false;
}

bool KeySystemSupportRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "KeySystemSupport RequestValidator");

  switch (message->header()->name) {
    case internal::kKeySystemSupport_IsKeySystemSupported_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::KeySystemSupport_IsKeySystemSupported_Params_Data>(
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

bool KeySystemSupportResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "KeySystemSupport ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kKeySystemSupport_IsKeySystemSupported_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::KeySystemSupport_IsKeySystemSupported_ResponseParams_Data>(
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
void KeySystemSupportInterceptorForTesting::IsKeySystemSupported(const std::string& key_system, IsKeySystemSupportedCallback callback) {
  GetForwardingInterface()->IsKeySystemSupported(std::move(key_system), std::move(callback));
}
KeySystemSupportAsyncWaiter::KeySystemSupportAsyncWaiter(
    KeySystemSupport* proxy) : proxy_(proxy) {}

KeySystemSupportAsyncWaiter::~KeySystemSupportAsyncWaiter() = default;

void KeySystemSupportAsyncWaiter::IsKeySystemSupported(
    const std::string& key_system, bool* out_is_supported, std::vector<media::VideoCodec>* out_supported_video_codecs, bool* out_supports_persistent_license, std::vector<media::EncryptionMode>* out_supported_encryption_schemes) {
  base::RunLoop loop;
  proxy_->IsKeySystemSupported(std::move(key_system),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_is_supported
,
             std::vector<media::VideoCodec>* out_supported_video_codecs
,
             bool* out_supports_persistent_license
,
             std::vector<media::EncryptionMode>* out_supported_encryption_schemes
,
             bool is_supported,
             const std::vector<media::VideoCodec>& supported_video_codecs,
             bool supports_persistent_license,
             const std::vector<media::EncryptionMode>& supported_encryption_schemes) {*out_is_supported = std::move(is_supported);*out_supported_video_codecs = std::move(supported_video_codecs);*out_supports_persistent_license = std::move(supports_persistent_license);*out_supported_encryption_schemes = std::move(supported_encryption_schemes);
            loop->Quit();
          },
          &loop,
          out_is_supported,
          out_supported_video_codecs,
          out_supports_persistent_license,
          out_supported_encryption_schemes));
  loop.Run();
}

}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif