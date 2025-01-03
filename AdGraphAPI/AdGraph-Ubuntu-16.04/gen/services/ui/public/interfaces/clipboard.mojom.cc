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

#include "services/ui/public/interfaces/clipboard.mojom.h"

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

#include "services/ui/public/interfaces/clipboard.mojom-shared-message-ids.h"
namespace ui {
namespace mojom {
const char kMimeTypeHTML[] = "text/html";
const char kMimeTypeMozillaURL[] = "text/x-moz-url";
const char kMimeTypePNG[] = "image/png";
const char kMimeTypeRTF[] = "text/rtf";
const char kMimeTypeText[] = "text/plain";
const char kMimeTypeURIList[] = "text/uri-list";
const char kMimeTypeURL[] = "text/url";
const char Clipboard::Name_[] = "ui.mojom.Clipboard";
bool Clipboard::GetSequenceNumber(Clipboard::Type clipboard_type, uint64_t* out_sequence) {
  NOTREACHED();
  return false;
}
bool Clipboard::GetAvailableMimeTypes(Clipboard::Type clipboard_types, uint64_t* out_sequence, std::vector<std::string>* out_types) {
  NOTREACHED();
  return false;
}
bool Clipboard::ReadClipboardData(Clipboard::Type clipboard_type, const std::string& mime_type, uint64_t* out_sequence, base::Optional<std::vector<uint8_t>>* out_data) {
  NOTREACHED();
  return false;
}
bool Clipboard::WriteClipboardData(Clipboard::Type clipboard_type, const base::Optional<base::flat_map<std::string, std::vector<uint8_t>>>& data, uint64_t* out_sequence) {
  NOTREACHED();
  return false;
}
class Clipboard_GetSequenceNumber_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  Clipboard_GetSequenceNumber_HandleSyncResponse(
      bool* result, uint64_t* out_sequence)
      : result_(result), out_sequence_(out_sequence) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  uint64_t* out_sequence_;DISALLOW_COPY_AND_ASSIGN(Clipboard_GetSequenceNumber_HandleSyncResponse);
};

class Clipboard_GetSequenceNumber_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Clipboard_GetSequenceNumber_ForwardToCallback(
      Clipboard::GetSequenceNumberCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Clipboard::GetSequenceNumberCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Clipboard_GetSequenceNumber_ForwardToCallback);
};
class Clipboard_GetAvailableMimeTypes_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  Clipboard_GetAvailableMimeTypes_HandleSyncResponse(
      bool* result, uint64_t* out_sequence, std::vector<std::string>* out_types)
      : result_(result), out_sequence_(out_sequence), out_types_(out_types) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  uint64_t* out_sequence_;
  std::vector<std::string>* out_types_;DISALLOW_COPY_AND_ASSIGN(Clipboard_GetAvailableMimeTypes_HandleSyncResponse);
};

class Clipboard_GetAvailableMimeTypes_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Clipboard_GetAvailableMimeTypes_ForwardToCallback(
      Clipboard::GetAvailableMimeTypesCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Clipboard::GetAvailableMimeTypesCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Clipboard_GetAvailableMimeTypes_ForwardToCallback);
};
class Clipboard_ReadClipboardData_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  Clipboard_ReadClipboardData_HandleSyncResponse(
      bool* result, uint64_t* out_sequence, base::Optional<std::vector<uint8_t>>* out_data)
      : result_(result), out_sequence_(out_sequence), out_data_(out_data) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  uint64_t* out_sequence_;
  base::Optional<std::vector<uint8_t>>* out_data_;DISALLOW_COPY_AND_ASSIGN(Clipboard_ReadClipboardData_HandleSyncResponse);
};

class Clipboard_ReadClipboardData_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Clipboard_ReadClipboardData_ForwardToCallback(
      Clipboard::ReadClipboardDataCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Clipboard::ReadClipboardDataCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Clipboard_ReadClipboardData_ForwardToCallback);
};
class Clipboard_WriteClipboardData_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  Clipboard_WriteClipboardData_HandleSyncResponse(
      bool* result, uint64_t* out_sequence)
      : result_(result), out_sequence_(out_sequence) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  uint64_t* out_sequence_;DISALLOW_COPY_AND_ASSIGN(Clipboard_WriteClipboardData_HandleSyncResponse);
};

class Clipboard_WriteClipboardData_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Clipboard_WriteClipboardData_ForwardToCallback(
      Clipboard::WriteClipboardDataCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Clipboard::WriteClipboardDataCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Clipboard_WriteClipboardData_ForwardToCallback);
};

ClipboardProxy::ClipboardProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
bool ClipboardProxy::GetSequenceNumber(
    Clipboard::Type param_clipboard_type, uint64_t* out_param_sequence) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::Clipboard::GetSequenceNumber");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboard_GetSequenceNumber_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::Clipboard_GetSequenceNumber_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ui::mojom::Clipboard_Type>(
      param_clipboard_type, &params->clipboard_type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Clipboard_GetSequenceNumber_HandleSyncResponse(
          &result, out_param_sequence));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void ClipboardProxy::GetSequenceNumber(
    Clipboard::Type in_clipboard_type, GetSequenceNumberCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::Clipboard::GetSequenceNumber");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboard_GetSequenceNumber_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::Clipboard_GetSequenceNumber_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ui::mojom::Clipboard_Type>(
      in_clipboard_type, &params->clipboard_type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Clipboard_GetSequenceNumber_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool ClipboardProxy::GetAvailableMimeTypes(
    Clipboard::Type param_clipboard_types, uint64_t* out_param_sequence, std::vector<std::string>* out_param_types) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::Clipboard::GetAvailableMimeTypes");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboard_GetAvailableMimeTypes_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::Clipboard_GetAvailableMimeTypes_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ui::mojom::Clipboard_Type>(
      param_clipboard_types, &params->clipboard_types);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Clipboard_GetAvailableMimeTypes_HandleSyncResponse(
          &result, out_param_sequence, out_param_types));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void ClipboardProxy::GetAvailableMimeTypes(
    Clipboard::Type in_clipboard_types, GetAvailableMimeTypesCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::Clipboard::GetAvailableMimeTypes");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboard_GetAvailableMimeTypes_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::Clipboard_GetAvailableMimeTypes_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ui::mojom::Clipboard_Type>(
      in_clipboard_types, &params->clipboard_types);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Clipboard_GetAvailableMimeTypes_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool ClipboardProxy::ReadClipboardData(
    Clipboard::Type param_clipboard_type, const std::string& param_mime_type, uint64_t* out_param_sequence, base::Optional<std::vector<uint8_t>>* out_param_data) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::Clipboard::ReadClipboardData");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboard_ReadClipboardData_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::Clipboard_ReadClipboardData_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ui::mojom::Clipboard_Type>(
      param_clipboard_type, &params->clipboard_type);
  typename decltype(params->mime_type)::BaseType::BufferWriter
      mime_type_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_mime_type, buffer, &mime_type_writer, &serialization_context);
  params->mime_type.Set(
      mime_type_writer.is_null() ? nullptr : mime_type_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->mime_type.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null mime_type in Clipboard.ReadClipboardData request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Clipboard_ReadClipboardData_HandleSyncResponse(
          &result, out_param_sequence, out_param_data));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void ClipboardProxy::ReadClipboardData(
    Clipboard::Type in_clipboard_type, const std::string& in_mime_type, ReadClipboardDataCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::Clipboard::ReadClipboardData");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboard_ReadClipboardData_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::Clipboard_ReadClipboardData_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ui::mojom::Clipboard_Type>(
      in_clipboard_type, &params->clipboard_type);
  typename decltype(params->mime_type)::BaseType::BufferWriter
      mime_type_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_mime_type, buffer, &mime_type_writer, &serialization_context);
  params->mime_type.Set(
      mime_type_writer.is_null() ? nullptr : mime_type_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->mime_type.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null mime_type in Clipboard.ReadClipboardData request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Clipboard_ReadClipboardData_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool ClipboardProxy::WriteClipboardData(
    Clipboard::Type param_clipboard_type, const base::Optional<base::flat_map<std::string, std::vector<uint8_t>>>& param_data, uint64_t* out_param_sequence) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::Clipboard::WriteClipboardData");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboard_WriteClipboardData_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::Clipboard_WriteClipboardData_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ui::mojom::Clipboard_Type>(
      param_clipboard_type, &params->clipboard_type);
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  const mojo::internal::ContainerValidateParams data_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
  mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>>(
      param_data, buffer, &data_writer, &data_validate_params,
      &serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Clipboard_WriteClipboardData_HandleSyncResponse(
          &result, out_param_sequence));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void ClipboardProxy::WriteClipboardData(
    Clipboard::Type in_clipboard_type, const base::Optional<base::flat_map<std::string, std::vector<uint8_t>>>& in_data, WriteClipboardDataCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::Clipboard::WriteClipboardData");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboard_WriteClipboardData_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::Clipboard_WriteClipboardData_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ui::mojom::Clipboard_Type>(
      in_clipboard_type, &params->clipboard_type);
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  const mojo::internal::ContainerValidateParams data_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
  mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>>(
      in_data, buffer, &data_writer, &data_validate_params,
      &serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Clipboard_WriteClipboardData_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class Clipboard_GetSequenceNumber_ProxyToResponder {
 public:
  static Clipboard::GetSequenceNumberCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Clipboard_GetSequenceNumber_ProxyToResponder> proxy(
        new Clipboard_GetSequenceNumber_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Clipboard_GetSequenceNumber_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Clipboard_GetSequenceNumber_ProxyToResponder() {
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
  Clipboard_GetSequenceNumber_ProxyToResponder(
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
        << "Clipboard::GetSequenceNumberCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      uint64_t in_sequence);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Clipboard_GetSequenceNumber_ProxyToResponder);
};

bool Clipboard_GetSequenceNumber_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "ui::mojom::Clipboard::GetSequenceNumberCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Clipboard_GetSequenceNumber_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Clipboard_GetSequenceNumber_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  uint64_t p_sequence{};
  Clipboard_GetSequenceNumber_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_sequence = input_data_view.sequence();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Clipboard::GetSequenceNumber response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_sequence));
  return true;
}

void Clipboard_GetSequenceNumber_ProxyToResponder::Run(
    uint64_t in_sequence) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboard_GetSequenceNumber_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::Clipboard_GetSequenceNumber_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->sequence = in_sequence;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::Clipboard::GetSequenceNumberCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool Clipboard_GetSequenceNumber_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::Clipboard_GetSequenceNumber_ResponseParams_Data* params =
      reinterpret_cast<internal::Clipboard_GetSequenceNumber_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  uint64_t p_sequence{};
  Clipboard_GetSequenceNumber_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_sequence = input_data_view.sequence();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Clipboard::GetSequenceNumber response deserializer");
    return false;
  }
  *out_sequence_ = std::move(p_sequence);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class Clipboard_GetAvailableMimeTypes_ProxyToResponder {
 public:
  static Clipboard::GetAvailableMimeTypesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Clipboard_GetAvailableMimeTypes_ProxyToResponder> proxy(
        new Clipboard_GetAvailableMimeTypes_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Clipboard_GetAvailableMimeTypes_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Clipboard_GetAvailableMimeTypes_ProxyToResponder() {
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
  Clipboard_GetAvailableMimeTypes_ProxyToResponder(
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
        << "Clipboard::GetAvailableMimeTypesCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      uint64_t in_sequence, const std::vector<std::string>& in_types);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Clipboard_GetAvailableMimeTypes_ProxyToResponder);
};

bool Clipboard_GetAvailableMimeTypes_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "ui::mojom::Clipboard::GetAvailableMimeTypesCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Clipboard_GetAvailableMimeTypes_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Clipboard_GetAvailableMimeTypes_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  uint64_t p_sequence{};
  std::vector<std::string> p_types{};
  Clipboard_GetAvailableMimeTypes_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_sequence = input_data_view.sequence();
  if (!input_data_view.ReadTypes(&p_types))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Clipboard::GetAvailableMimeTypes response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_sequence), 
std::move(p_types));
  return true;
}

void Clipboard_GetAvailableMimeTypes_ProxyToResponder::Run(
    uint64_t in_sequence, const std::vector<std::string>& in_types) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboard_GetAvailableMimeTypes_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::Clipboard_GetAvailableMimeTypes_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->sequence = in_sequence;
  typename decltype(params->types)::BaseType::BufferWriter
      types_writer;
  const mojo::internal::ContainerValidateParams types_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
      in_types, buffer, &types_writer, &types_validate_params,
      &serialization_context);
  params->types.Set(
      types_writer.is_null() ? nullptr : types_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->types.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null types in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::Clipboard::GetAvailableMimeTypesCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool Clipboard_GetAvailableMimeTypes_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::Clipboard_GetAvailableMimeTypes_ResponseParams_Data* params =
      reinterpret_cast<internal::Clipboard_GetAvailableMimeTypes_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  uint64_t p_sequence{};
  std::vector<std::string> p_types{};
  Clipboard_GetAvailableMimeTypes_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_sequence = input_data_view.sequence();
  if (!input_data_view.ReadTypes(&p_types))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Clipboard::GetAvailableMimeTypes response deserializer");
    return false;
  }
  *out_sequence_ = std::move(p_sequence);
  *out_types_ = std::move(p_types);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class Clipboard_ReadClipboardData_ProxyToResponder {
 public:
  static Clipboard::ReadClipboardDataCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Clipboard_ReadClipboardData_ProxyToResponder> proxy(
        new Clipboard_ReadClipboardData_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Clipboard_ReadClipboardData_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Clipboard_ReadClipboardData_ProxyToResponder() {
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
  Clipboard_ReadClipboardData_ProxyToResponder(
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
        << "Clipboard::ReadClipboardDataCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      uint64_t in_sequence, const base::Optional<std::vector<uint8_t>>& in_data);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Clipboard_ReadClipboardData_ProxyToResponder);
};

bool Clipboard_ReadClipboardData_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "ui::mojom::Clipboard::ReadClipboardDataCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Clipboard_ReadClipboardData_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Clipboard_ReadClipboardData_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  uint64_t p_sequence{};
  base::Optional<std::vector<uint8_t>> p_data{};
  Clipboard_ReadClipboardData_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_sequence = input_data_view.sequence();
  if (!input_data_view.ReadData(&p_data))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Clipboard::ReadClipboardData response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_sequence), 
std::move(p_data));
  return true;
}

void Clipboard_ReadClipboardData_ProxyToResponder::Run(
    uint64_t in_sequence, const base::Optional<std::vector<uint8_t>>& in_data) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboard_ReadClipboardData_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::Clipboard_ReadClipboardData_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->sequence = in_sequence;
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  const mojo::internal::ContainerValidateParams data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_data, buffer, &data_writer, &data_validate_params,
      &serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::Clipboard::ReadClipboardDataCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool Clipboard_ReadClipboardData_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::Clipboard_ReadClipboardData_ResponseParams_Data* params =
      reinterpret_cast<internal::Clipboard_ReadClipboardData_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  uint64_t p_sequence{};
  base::Optional<std::vector<uint8_t>> p_data{};
  Clipboard_ReadClipboardData_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_sequence = input_data_view.sequence();
  if (!input_data_view.ReadData(&p_data))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Clipboard::ReadClipboardData response deserializer");
    return false;
  }
  *out_sequence_ = std::move(p_sequence);
  *out_data_ = std::move(p_data);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class Clipboard_WriteClipboardData_ProxyToResponder {
 public:
  static Clipboard::WriteClipboardDataCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Clipboard_WriteClipboardData_ProxyToResponder> proxy(
        new Clipboard_WriteClipboardData_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Clipboard_WriteClipboardData_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Clipboard_WriteClipboardData_ProxyToResponder() {
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
  Clipboard_WriteClipboardData_ProxyToResponder(
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
        << "Clipboard::WriteClipboardDataCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      uint64_t in_sequence);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Clipboard_WriteClipboardData_ProxyToResponder);
};

bool Clipboard_WriteClipboardData_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "ui::mojom::Clipboard::WriteClipboardDataCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Clipboard_WriteClipboardData_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Clipboard_WriteClipboardData_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  uint64_t p_sequence{};
  Clipboard_WriteClipboardData_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_sequence = input_data_view.sequence();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Clipboard::WriteClipboardData response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_sequence));
  return true;
}

void Clipboard_WriteClipboardData_ProxyToResponder::Run(
    uint64_t in_sequence) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboard_WriteClipboardData_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::Clipboard_WriteClipboardData_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->sequence = in_sequence;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::Clipboard::WriteClipboardDataCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool Clipboard_WriteClipboardData_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::Clipboard_WriteClipboardData_ResponseParams_Data* params =
      reinterpret_cast<internal::Clipboard_WriteClipboardData_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  uint64_t p_sequence{};
  Clipboard_WriteClipboardData_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_sequence = input_data_view.sequence();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Clipboard::WriteClipboardData response deserializer");
    return false;
  }
  *out_sequence_ = std::move(p_sequence);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

// static
bool ClipboardStubDispatch::Accept(
    Clipboard* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kClipboard_GetSequenceNumber_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::Clipboard::GetSequenceNumber",
               "message", message->name());
#endif
      break;
    }
    case internal::kClipboard_GetAvailableMimeTypes_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::Clipboard::GetAvailableMimeTypes",
               "message", message->name());
#endif
      break;
    }
    case internal::kClipboard_ReadClipboardData_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::Clipboard::ReadClipboardData",
               "message", message->name());
#endif
      break;
    }
    case internal::kClipboard_WriteClipboardData_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::Clipboard::WriteClipboardData",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool ClipboardStubDispatch::AcceptWithResponder(
    Clipboard* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kClipboard_GetSequenceNumber_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::Clipboard::GetSequenceNumber",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::Clipboard_GetSequenceNumber_Params_Data* params =
          reinterpret_cast<
              internal::Clipboard_GetSequenceNumber_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Clipboard::Type p_clipboard_type{};
      Clipboard_GetSequenceNumber_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadClipboardType(&p_clipboard_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Clipboard::GetSequenceNumber deserializer");
        return false;
      }
      Clipboard::GetSequenceNumberCallback callback =
          Clipboard_GetSequenceNumber_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetSequenceNumber(
std::move(p_clipboard_type), std::move(callback));
      return true;
    }
    case internal::kClipboard_GetAvailableMimeTypes_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::Clipboard::GetAvailableMimeTypes",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::Clipboard_GetAvailableMimeTypes_Params_Data* params =
          reinterpret_cast<
              internal::Clipboard_GetAvailableMimeTypes_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Clipboard::Type p_clipboard_types{};
      Clipboard_GetAvailableMimeTypes_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadClipboardTypes(&p_clipboard_types))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Clipboard::GetAvailableMimeTypes deserializer");
        return false;
      }
      Clipboard::GetAvailableMimeTypesCallback callback =
          Clipboard_GetAvailableMimeTypes_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetAvailableMimeTypes(
std::move(p_clipboard_types), std::move(callback));
      return true;
    }
    case internal::kClipboard_ReadClipboardData_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::Clipboard::ReadClipboardData",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::Clipboard_ReadClipboardData_Params_Data* params =
          reinterpret_cast<
              internal::Clipboard_ReadClipboardData_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Clipboard::Type p_clipboard_type{};
      std::string p_mime_type{};
      Clipboard_ReadClipboardData_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadClipboardType(&p_clipboard_type))
        success = false;
      if (!input_data_view.ReadMimeType(&p_mime_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Clipboard::ReadClipboardData deserializer");
        return false;
      }
      Clipboard::ReadClipboardDataCallback callback =
          Clipboard_ReadClipboardData_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ReadClipboardData(
std::move(p_clipboard_type), 
std::move(p_mime_type), std::move(callback));
      return true;
    }
    case internal::kClipboard_WriteClipboardData_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::Clipboard::WriteClipboardData",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::Clipboard_WriteClipboardData_Params_Data* params =
          reinterpret_cast<
              internal::Clipboard_WriteClipboardData_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Clipboard::Type p_clipboard_type{};
      base::Optional<base::flat_map<std::string, std::vector<uint8_t>>> p_data{};
      Clipboard_WriteClipboardData_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadClipboardType(&p_clipboard_type))
        success = false;
      if (!input_data_view.ReadData(&p_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Clipboard::WriteClipboardData deserializer");
        return false;
      }
      Clipboard::WriteClipboardDataCallback callback =
          Clipboard_WriteClipboardData_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->WriteClipboardData(
std::move(p_clipboard_type), 
std::move(p_data), std::move(callback));
      return true;
    }
  }
  return false;
}

bool ClipboardRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Clipboard RequestValidator");

  switch (message->header()->name) {
    case internal::kClipboard_GetSequenceNumber_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Clipboard_GetSequenceNumber_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClipboard_GetAvailableMimeTypes_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Clipboard_GetAvailableMimeTypes_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClipboard_ReadClipboardData_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Clipboard_ReadClipboardData_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClipboard_WriteClipboardData_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Clipboard_WriteClipboardData_Params_Data>(
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

bool ClipboardResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Clipboard ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kClipboard_GetSequenceNumber_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Clipboard_GetSequenceNumber_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClipboard_GetAvailableMimeTypes_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Clipboard_GetAvailableMimeTypes_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClipboard_ReadClipboardData_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Clipboard_ReadClipboardData_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClipboard_WriteClipboardData_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Clipboard_WriteClipboardData_ResponseParams_Data>(
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
void ClipboardInterceptorForTesting::GetSequenceNumber(Clipboard::Type clipboard_type, GetSequenceNumberCallback callback) {
  GetForwardingInterface()->GetSequenceNumber(std::move(clipboard_type), std::move(callback));
}
void ClipboardInterceptorForTesting::GetAvailableMimeTypes(Clipboard::Type clipboard_types, GetAvailableMimeTypesCallback callback) {
  GetForwardingInterface()->GetAvailableMimeTypes(std::move(clipboard_types), std::move(callback));
}
void ClipboardInterceptorForTesting::ReadClipboardData(Clipboard::Type clipboard_type, const std::string& mime_type, ReadClipboardDataCallback callback) {
  GetForwardingInterface()->ReadClipboardData(std::move(clipboard_type), std::move(mime_type), std::move(callback));
}
void ClipboardInterceptorForTesting::WriteClipboardData(Clipboard::Type clipboard_type, const base::Optional<base::flat_map<std::string, std::vector<uint8_t>>>& data, WriteClipboardDataCallback callback) {
  GetForwardingInterface()->WriteClipboardData(std::move(clipboard_type), std::move(data), std::move(callback));
}
ClipboardAsyncWaiter::ClipboardAsyncWaiter(
    Clipboard* proxy) : proxy_(proxy) {}

ClipboardAsyncWaiter::~ClipboardAsyncWaiter() = default;

void ClipboardAsyncWaiter::GetSequenceNumber(
    Clipboard::Type clipboard_type, uint64_t* out_sequence) {
  base::RunLoop loop;
  proxy_->GetSequenceNumber(std::move(clipboard_type),
      base::BindOnce(
          [](base::RunLoop* loop,
             uint64_t* out_sequence
,
             uint64_t sequence) {*out_sequence = std::move(sequence);
            loop->Quit();
          },
          &loop,
          out_sequence));
  loop.Run();
}
void ClipboardAsyncWaiter::GetAvailableMimeTypes(
    Clipboard::Type clipboard_types, uint64_t* out_sequence, std::vector<std::string>* out_types) {
  base::RunLoop loop;
  proxy_->GetAvailableMimeTypes(std::move(clipboard_types),
      base::BindOnce(
          [](base::RunLoop* loop,
             uint64_t* out_sequence
,
             std::vector<std::string>* out_types
,
             uint64_t sequence,
             const std::vector<std::string>& types) {*out_sequence = std::move(sequence);*out_types = std::move(types);
            loop->Quit();
          },
          &loop,
          out_sequence,
          out_types));
  loop.Run();
}
void ClipboardAsyncWaiter::ReadClipboardData(
    Clipboard::Type clipboard_type, const std::string& mime_type, uint64_t* out_sequence, base::Optional<std::vector<uint8_t>>* out_data) {
  base::RunLoop loop;
  proxy_->ReadClipboardData(std::move(clipboard_type),std::move(mime_type),
      base::BindOnce(
          [](base::RunLoop* loop,
             uint64_t* out_sequence
,
             base::Optional<std::vector<uint8_t>>* out_data
,
             uint64_t sequence,
             const base::Optional<std::vector<uint8_t>>& data) {*out_sequence = std::move(sequence);*out_data = std::move(data);
            loop->Quit();
          },
          &loop,
          out_sequence,
          out_data));
  loop.Run();
}
void ClipboardAsyncWaiter::WriteClipboardData(
    Clipboard::Type clipboard_type, const base::Optional<base::flat_map<std::string, std::vector<uint8_t>>>& data, uint64_t* out_sequence) {
  base::RunLoop loop;
  proxy_->WriteClipboardData(std::move(clipboard_type),std::move(data),
      base::BindOnce(
          [](base::RunLoop* loop,
             uint64_t* out_sequence
,
             uint64_t sequence) {*out_sequence = std::move(sequence);
            loop->Quit();
          },
          &loop,
          out_sequence));
  loop.Run();
}

}  // namespace mojom
}  // namespace ui

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif