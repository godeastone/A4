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

#include "components/services/font/public/interfaces/font_service.mojom.h"

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

#include "components/services/font/public/interfaces/font_service.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/file_mojom_traits.h"
namespace font_service {
namespace mojom {
TypefaceStyle::TypefaceStyle()
    : weight(),
      width(),
      slant() {}

TypefaceStyle::TypefaceStyle(
    uint16_t weight_in,
    uint8_t width_in,
    TypefaceSlant slant_in)
    : weight(std::move(weight_in)),
      width(std::move(width_in)),
      slant(std::move(slant_in)) {}

TypefaceStyle::~TypefaceStyle() = default;
size_t TypefaceStyle::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->weight);
  seed = mojo::internal::Hash(seed, this->width);
  seed = mojo::internal::Hash(seed, this->slant);
  return seed;
}

bool TypefaceStyle::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
FontIdentity::FontIdentity()
    : id(),
      ttc_index(),
      str_representation() {}

FontIdentity::FontIdentity(
    uint32_t id_in,
    int32_t ttc_index_in,
    const std::string& str_representation_in)
    : id(std::move(id_in)),
      ttc_index(std::move(ttc_index_in)),
      str_representation(std::move(str_representation_in)) {}

FontIdentity::~FontIdentity() = default;
size_t FontIdentity::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->id);
  seed = mojo::internal::Hash(seed, this->ttc_index);
  seed = mojo::internal::Hash(seed, this->str_representation);
  return seed;
}

bool FontIdentity::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char FontService::Name_[] = "font_service.mojom.FontService";

class FontService_MatchFamilyName_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FontService_MatchFamilyName_ForwardToCallback(
      FontService::MatchFamilyNameCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FontService::MatchFamilyNameCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FontService_MatchFamilyName_ForwardToCallback);
};

class FontService_OpenStream_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FontService_OpenStream_ForwardToCallback(
      FontService::OpenStreamCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FontService::OpenStreamCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FontService_OpenStream_ForwardToCallback);
};

FontServiceProxy::FontServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void FontServiceProxy::MatchFamilyName(
    const std::string& in_family_name, TypefaceStylePtr in_style, MatchFamilyNameCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "font_service::mojom::FontService::MatchFamilyName");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFontService_MatchFamilyName_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::font_service::mojom::internal::FontService_MatchFamilyName_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->family_name)::BaseType::BufferWriter
      family_name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_family_name, buffer, &family_name_writer, &serialization_context);
  params->family_name.Set(
      family_name_writer.is_null() ? nullptr : family_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->family_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null family_name in FontService.MatchFamilyName request");
  typename decltype(params->style)::BaseType::BufferWriter
      style_writer;
  mojo::internal::Serialize<::font_service::mojom::TypefaceStyleDataView>(
      in_style, buffer, &style_writer, &serialization_context);
  params->style.Set(
      style_writer.is_null() ? nullptr : style_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->style.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null style in FontService.MatchFamilyName request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FontService_MatchFamilyName_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void FontServiceProxy::OpenStream(
    uint32_t in_id_number, OpenStreamCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "font_service::mojom::FontService::OpenStream");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFontService_OpenStream_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::font_service::mojom::internal::FontService_OpenStream_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->id_number = in_id_number;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FontService_OpenStream_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class FontService_MatchFamilyName_ProxyToResponder {
 public:
  static FontService::MatchFamilyNameCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FontService_MatchFamilyName_ProxyToResponder> proxy(
        new FontService_MatchFamilyName_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FontService_MatchFamilyName_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FontService_MatchFamilyName_ProxyToResponder() {
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
  FontService_MatchFamilyName_ProxyToResponder(
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
        << "FontService::MatchFamilyNameCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      FontIdentityPtr in_identity, const std::string& in_family_name, TypefaceStylePtr in_style);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FontService_MatchFamilyName_ProxyToResponder);
};

bool FontService_MatchFamilyName_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "font_service::mojom::FontService::MatchFamilyNameCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FontService_MatchFamilyName_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FontService_MatchFamilyName_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  FontIdentityPtr p_identity{};
  std::string p_family_name{};
  TypefaceStylePtr p_style{};
  FontService_MatchFamilyName_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadIdentity(&p_identity))
    success = false;
  if (!input_data_view.ReadFamilyName(&p_family_name))
    success = false;
  if (!input_data_view.ReadStyle(&p_style))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "FontService::MatchFamilyName response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_identity), 
std::move(p_family_name), 
std::move(p_style));
  return true;
}

void FontService_MatchFamilyName_ProxyToResponder::Run(
    FontIdentityPtr in_identity, const std::string& in_family_name, TypefaceStylePtr in_style) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFontService_MatchFamilyName_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::font_service::mojom::internal::FontService_MatchFamilyName_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->identity)::BaseType::BufferWriter
      identity_writer;
  mojo::internal::Serialize<::font_service::mojom::FontIdentityDataView>(
      in_identity, buffer, &identity_writer, &serialization_context);
  params->identity.Set(
      identity_writer.is_null() ? nullptr : identity_writer.data());
  typename decltype(params->family_name)::BaseType::BufferWriter
      family_name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_family_name, buffer, &family_name_writer, &serialization_context);
  params->family_name.Set(
      family_name_writer.is_null() ? nullptr : family_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->family_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null family_name in ");
  typename decltype(params->style)::BaseType::BufferWriter
      style_writer;
  mojo::internal::Serialize<::font_service::mojom::TypefaceStyleDataView>(
      in_style, buffer, &style_writer, &serialization_context);
  params->style.Set(
      style_writer.is_null() ? nullptr : style_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->style.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null style in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)font_service::mojom::FontService::MatchFamilyNameCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class FontService_OpenStream_ProxyToResponder {
 public:
  static FontService::OpenStreamCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FontService_OpenStream_ProxyToResponder> proxy(
        new FontService_OpenStream_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FontService_OpenStream_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FontService_OpenStream_ProxyToResponder() {
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
  FontService_OpenStream_ProxyToResponder(
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
        << "FontService::OpenStreamCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      base::File in_font_handle);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FontService_OpenStream_ProxyToResponder);
};

bool FontService_OpenStream_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "font_service::mojom::FontService::OpenStreamCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FontService_OpenStream_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FontService_OpenStream_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::File p_font_handle{};
  FontService_OpenStream_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadFontHandle(&p_font_handle))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "FontService::OpenStream response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_font_handle));
  return true;
}

void FontService_OpenStream_ProxyToResponder::Run(
    base::File in_font_handle) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFontService_OpenStream_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::font_service::mojom::internal::FontService_OpenStream_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->font_handle)::BaseType::BufferWriter
      font_handle_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FileDataView>(
      in_font_handle, buffer, &font_handle_writer, &serialization_context);
  params->font_handle.Set(
      font_handle_writer.is_null() ? nullptr : font_handle_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)font_service::mojom::FontService::OpenStreamCallback",
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
bool FontServiceStubDispatch::Accept(
    FontService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kFontService_MatchFamilyName_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)font_service::mojom::FontService::MatchFamilyName",
               "message", message->name());
#endif
      break;
    }
    case internal::kFontService_OpenStream_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)font_service::mojom::FontService::OpenStream",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool FontServiceStubDispatch::AcceptWithResponder(
    FontService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kFontService_MatchFamilyName_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)font_service::mojom::FontService::MatchFamilyName",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::FontService_MatchFamilyName_Params_Data* params =
          reinterpret_cast<
              internal::FontService_MatchFamilyName_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_family_name{};
      TypefaceStylePtr p_style{};
      FontService_MatchFamilyName_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFamilyName(&p_family_name))
        success = false;
      if (!input_data_view.ReadStyle(&p_style))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FontService::MatchFamilyName deserializer");
        return false;
      }
      FontService::MatchFamilyNameCallback callback =
          FontService_MatchFamilyName_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->MatchFamilyName(
std::move(p_family_name), 
std::move(p_style), std::move(callback));
      return true;
    }
    case internal::kFontService_OpenStream_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)font_service::mojom::FontService::OpenStream",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::FontService_OpenStream_Params_Data* params =
          reinterpret_cast<
              internal::FontService_OpenStream_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_id_number{};
      FontService_OpenStream_ParamsDataView input_data_view(params, &serialization_context);
      
      p_id_number = input_data_view.id_number();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FontService::OpenStream deserializer");
        return false;
      }
      FontService::OpenStreamCallback callback =
          FontService_OpenStream_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OpenStream(
std::move(p_id_number), std::move(callback));
      return true;
    }
  }
  return false;
}

bool FontServiceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FontService RequestValidator");

  switch (message->header()->name) {
    case internal::kFontService_MatchFamilyName_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FontService_MatchFamilyName_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFontService_OpenStream_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FontService_OpenStream_Params_Data>(
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

bool FontServiceResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FontService ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kFontService_MatchFamilyName_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FontService_MatchFamilyName_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFontService_OpenStream_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FontService_OpenStream_ResponseParams_Data>(
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
void FontServiceInterceptorForTesting::MatchFamilyName(const std::string& family_name, TypefaceStylePtr style, MatchFamilyNameCallback callback) {
  GetForwardingInterface()->MatchFamilyName(std::move(family_name), std::move(style), std::move(callback));
}
void FontServiceInterceptorForTesting::OpenStream(uint32_t id_number, OpenStreamCallback callback) {
  GetForwardingInterface()->OpenStream(std::move(id_number), std::move(callback));
}
FontServiceAsyncWaiter::FontServiceAsyncWaiter(
    FontService* proxy) : proxy_(proxy) {}

FontServiceAsyncWaiter::~FontServiceAsyncWaiter() = default;

void FontServiceAsyncWaiter::MatchFamilyName(
    const std::string& family_name, TypefaceStylePtr style, FontIdentityPtr* out_identity, std::string* out_family_name, TypefaceStylePtr* out_style) {
  base::RunLoop loop;
  proxy_->MatchFamilyName(std::move(family_name),std::move(style),
      base::BindOnce(
          [](base::RunLoop* loop,
             FontIdentityPtr* out_identity
,
             std::string* out_family_name
,
             TypefaceStylePtr* out_style
,
             FontIdentityPtr identity,
             const std::string& family_name,
             TypefaceStylePtr style) {*out_identity = std::move(identity);*out_family_name = std::move(family_name);*out_style = std::move(style);
            loop->Quit();
          },
          &loop,
          out_identity,
          out_family_name,
          out_style));
  loop.Run();
}
void FontServiceAsyncWaiter::OpenStream(
    uint32_t id_number, base::File* out_font_handle) {
  base::RunLoop loop;
  proxy_->OpenStream(std::move(id_number),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::File* out_font_handle
,
             base::File font_handle) {*out_font_handle = std::move(font_handle);
            loop->Quit();
          },
          &loop,
          out_font_handle));
  loop.Run();
}

}  // namespace mojom
}  // namespace font_service

namespace mojo {


// static
bool StructTraits<::font_service::mojom::TypefaceStyle::DataView, ::font_service::mojom::TypefaceStylePtr>::Read(
    ::font_service::mojom::TypefaceStyle::DataView input,
    ::font_service::mojom::TypefaceStylePtr* output) {
  bool success = true;
  ::font_service::mojom::TypefaceStylePtr result(::font_service::mojom::TypefaceStyle::New());
  
      result->weight = input.weight();
      result->width = input.width();
      if (!input.ReadSlant(&result->slant))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::font_service::mojom::FontIdentity::DataView, ::font_service::mojom::FontIdentityPtr>::Read(
    ::font_service::mojom::FontIdentity::DataView input,
    ::font_service::mojom::FontIdentityPtr* output) {
  bool success = true;
  ::font_service::mojom::FontIdentityPtr result(::font_service::mojom::FontIdentity::New());
  
      result->id = input.id();
      result->ttc_index = input.ttc_index();
      if (!input.ReadStrRepresentation(&result->str_representation))
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