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

#include "chrome/browser/ui/webui/usb_internals/usb_internals.mojom.h"

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

#include "chrome/browser/ui/webui/usb_internals/usb_internals.mojom-shared-message-ids.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace mojom {
TestDeviceInfo::TestDeviceInfo()
    : guid(),
      name(),
      serial_number(),
      landing_page() {}

TestDeviceInfo::TestDeviceInfo(
    const std::string& guid_in,
    const std::string& name_in,
    const std::string& serial_number_in,
    const GURL& landing_page_in)
    : guid(std::move(guid_in)),
      name(std::move(name_in)),
      serial_number(std::move(serial_number_in)),
      landing_page(std::move(landing_page_in)) {}

TestDeviceInfo::~TestDeviceInfo() = default;

bool TestDeviceInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char UsbInternalsPageHandler::Name_[] = "mojom.UsbInternalsPageHandler";

class UsbInternalsPageHandler_AddDeviceForTesting_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UsbInternalsPageHandler_AddDeviceForTesting_ForwardToCallback(
      UsbInternalsPageHandler::AddDeviceForTestingCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UsbInternalsPageHandler::AddDeviceForTestingCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(UsbInternalsPageHandler_AddDeviceForTesting_ForwardToCallback);
};

class UsbInternalsPageHandler_RemoveDeviceForTesting_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UsbInternalsPageHandler_RemoveDeviceForTesting_ForwardToCallback(
      UsbInternalsPageHandler::RemoveDeviceForTestingCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UsbInternalsPageHandler::RemoveDeviceForTestingCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(UsbInternalsPageHandler_RemoveDeviceForTesting_ForwardToCallback);
};

class UsbInternalsPageHandler_GetTestDevices_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UsbInternalsPageHandler_GetTestDevices_ForwardToCallback(
      UsbInternalsPageHandler::GetTestDevicesCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UsbInternalsPageHandler::GetTestDevicesCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(UsbInternalsPageHandler_GetTestDevices_ForwardToCallback);
};

UsbInternalsPageHandlerProxy::UsbInternalsPageHandlerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void UsbInternalsPageHandlerProxy::AddDeviceForTesting(
    const std::string& in_name, const std::string& in_serial_number, const std::string& in_landing_page, AddDeviceForTestingCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "mojom::UsbInternalsPageHandler::AddDeviceForTesting");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbInternalsPageHandler_AddDeviceForTesting_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojom::internal::UsbInternalsPageHandler_AddDeviceForTesting_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in UsbInternalsPageHandler.AddDeviceForTesting request");
  typename decltype(params->serial_number)::BaseType::BufferWriter
      serial_number_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_serial_number, buffer, &serial_number_writer, &serialization_context);
  params->serial_number.Set(
      serial_number_writer.is_null() ? nullptr : serial_number_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->serial_number.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null serial_number in UsbInternalsPageHandler.AddDeviceForTesting request");
  typename decltype(params->landing_page)::BaseType::BufferWriter
      landing_page_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_landing_page, buffer, &landing_page_writer, &serialization_context);
  params->landing_page.Set(
      landing_page_writer.is_null() ? nullptr : landing_page_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->landing_page.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null landing_page in UsbInternalsPageHandler.AddDeviceForTesting request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new UsbInternalsPageHandler_AddDeviceForTesting_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void UsbInternalsPageHandlerProxy::RemoveDeviceForTesting(
    const std::string& in_guid, RemoveDeviceForTestingCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "mojom::UsbInternalsPageHandler::RemoveDeviceForTesting");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbInternalsPageHandler_RemoveDeviceForTesting_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojom::internal::UsbInternalsPageHandler_RemoveDeviceForTesting_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->guid)::BaseType::BufferWriter
      guid_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_guid, buffer, &guid_writer, &serialization_context);
  params->guid.Set(
      guid_writer.is_null() ? nullptr : guid_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->guid.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null guid in UsbInternalsPageHandler.RemoveDeviceForTesting request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new UsbInternalsPageHandler_RemoveDeviceForTesting_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void UsbInternalsPageHandlerProxy::GetTestDevices(
    GetTestDevicesCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "mojom::UsbInternalsPageHandler::GetTestDevices");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbInternalsPageHandler_GetTestDevices_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojom::internal::UsbInternalsPageHandler_GetTestDevices_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new UsbInternalsPageHandler_GetTestDevices_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class UsbInternalsPageHandler_AddDeviceForTesting_ProxyToResponder {
 public:
  static UsbInternalsPageHandler::AddDeviceForTestingCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<UsbInternalsPageHandler_AddDeviceForTesting_ProxyToResponder> proxy(
        new UsbInternalsPageHandler_AddDeviceForTesting_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&UsbInternalsPageHandler_AddDeviceForTesting_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~UsbInternalsPageHandler_AddDeviceForTesting_ProxyToResponder() {
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
  UsbInternalsPageHandler_AddDeviceForTesting_ProxyToResponder(
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
        << "UsbInternalsPageHandler::AddDeviceForTestingCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success, const std::string& in_message);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(UsbInternalsPageHandler_AddDeviceForTesting_ProxyToResponder);
};

bool UsbInternalsPageHandler_AddDeviceForTesting_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "mojom::UsbInternalsPageHandler::AddDeviceForTestingCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams_Data* params =
      reinterpret_cast<
          internal::UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  std::string p_message{};
  UsbInternalsPageHandler_AddDeviceForTesting_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!input_data_view.ReadMessage(&p_message))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "UsbInternalsPageHandler::AddDeviceForTesting response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success), 
std::move(p_message));
  return true;
}

void UsbInternalsPageHandler_AddDeviceForTesting_ProxyToResponder::Run(
    bool in_success, const std::string& in_message) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbInternalsPageHandler_AddDeviceForTesting_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojom::internal::UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_message, buffer, &message_writer, &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::UsbInternalsPageHandler::AddDeviceForTestingCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class UsbInternalsPageHandler_RemoveDeviceForTesting_ProxyToResponder {
 public:
  static UsbInternalsPageHandler::RemoveDeviceForTestingCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<UsbInternalsPageHandler_RemoveDeviceForTesting_ProxyToResponder> proxy(
        new UsbInternalsPageHandler_RemoveDeviceForTesting_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&UsbInternalsPageHandler_RemoveDeviceForTesting_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~UsbInternalsPageHandler_RemoveDeviceForTesting_ProxyToResponder() {
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
  UsbInternalsPageHandler_RemoveDeviceForTesting_ProxyToResponder(
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
        << "UsbInternalsPageHandler::RemoveDeviceForTestingCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(UsbInternalsPageHandler_RemoveDeviceForTesting_ProxyToResponder);
};

bool UsbInternalsPageHandler_RemoveDeviceForTesting_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "mojom::UsbInternalsPageHandler::RemoveDeviceForTestingCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams_Data* params =
      reinterpret_cast<
          internal::UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "UsbInternalsPageHandler::RemoveDeviceForTesting response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void UsbInternalsPageHandler_RemoveDeviceForTesting_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbInternalsPageHandler_RemoveDeviceForTesting_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojom::internal::UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::UsbInternalsPageHandler::RemoveDeviceForTestingCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class UsbInternalsPageHandler_GetTestDevices_ProxyToResponder {
 public:
  static UsbInternalsPageHandler::GetTestDevicesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<UsbInternalsPageHandler_GetTestDevices_ProxyToResponder> proxy(
        new UsbInternalsPageHandler_GetTestDevices_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&UsbInternalsPageHandler_GetTestDevices_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~UsbInternalsPageHandler_GetTestDevices_ProxyToResponder() {
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
  UsbInternalsPageHandler_GetTestDevices_ProxyToResponder(
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
        << "UsbInternalsPageHandler::GetTestDevicesCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      std::vector<TestDeviceInfoPtr> in_devices);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(UsbInternalsPageHandler_GetTestDevices_ProxyToResponder);
};

bool UsbInternalsPageHandler_GetTestDevices_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "mojom::UsbInternalsPageHandler::GetTestDevicesCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::UsbInternalsPageHandler_GetTestDevices_ResponseParams_Data* params =
      reinterpret_cast<
          internal::UsbInternalsPageHandler_GetTestDevices_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<TestDeviceInfoPtr> p_devices{};
  UsbInternalsPageHandler_GetTestDevices_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadDevices(&p_devices))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "UsbInternalsPageHandler::GetTestDevices response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_devices));
  return true;
}

void UsbInternalsPageHandler_GetTestDevices_ProxyToResponder::Run(
    std::vector<TestDeviceInfoPtr> in_devices) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbInternalsPageHandler_GetTestDevices_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojom::internal::UsbInternalsPageHandler_GetTestDevices_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->devices)::BaseType::BufferWriter
      devices_writer;
  const mojo::internal::ContainerValidateParams devices_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::mojom::TestDeviceInfoDataView>>(
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
  TRACE_EVENT1("mojom", "(Impl)mojom::UsbInternalsPageHandler::GetTestDevicesCallback",
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
bool UsbInternalsPageHandlerStubDispatch::Accept(
    UsbInternalsPageHandler* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kUsbInternalsPageHandler_AddDeviceForTesting_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::UsbInternalsPageHandler::AddDeviceForTesting",
               "message", message->name());
#endif
      break;
    }
    case internal::kUsbInternalsPageHandler_RemoveDeviceForTesting_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::UsbInternalsPageHandler::RemoveDeviceForTesting",
               "message", message->name());
#endif
      break;
    }
    case internal::kUsbInternalsPageHandler_GetTestDevices_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::UsbInternalsPageHandler::GetTestDevices",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool UsbInternalsPageHandlerStubDispatch::AcceptWithResponder(
    UsbInternalsPageHandler* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kUsbInternalsPageHandler_AddDeviceForTesting_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::UsbInternalsPageHandler::AddDeviceForTesting",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::UsbInternalsPageHandler_AddDeviceForTesting_Params_Data* params =
          reinterpret_cast<
              internal::UsbInternalsPageHandler_AddDeviceForTesting_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_name{};
      std::string p_serial_number{};
      std::string p_landing_page{};
      UsbInternalsPageHandler_AddDeviceForTesting_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadName(&p_name))
        success = false;
      if (!input_data_view.ReadSerialNumber(&p_serial_number))
        success = false;
      if (!input_data_view.ReadLandingPage(&p_landing_page))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "UsbInternalsPageHandler::AddDeviceForTesting deserializer");
        return false;
      }
      UsbInternalsPageHandler::AddDeviceForTestingCallback callback =
          UsbInternalsPageHandler_AddDeviceForTesting_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AddDeviceForTesting(
std::move(p_name), 
std::move(p_serial_number), 
std::move(p_landing_page), std::move(callback));
      return true;
    }
    case internal::kUsbInternalsPageHandler_RemoveDeviceForTesting_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::UsbInternalsPageHandler::RemoveDeviceForTesting",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::UsbInternalsPageHandler_RemoveDeviceForTesting_Params_Data* params =
          reinterpret_cast<
              internal::UsbInternalsPageHandler_RemoveDeviceForTesting_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_guid{};
      UsbInternalsPageHandler_RemoveDeviceForTesting_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadGuid(&p_guid))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "UsbInternalsPageHandler::RemoveDeviceForTesting deserializer");
        return false;
      }
      UsbInternalsPageHandler::RemoveDeviceForTestingCallback callback =
          UsbInternalsPageHandler_RemoveDeviceForTesting_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RemoveDeviceForTesting(
std::move(p_guid), std::move(callback));
      return true;
    }
    case internal::kUsbInternalsPageHandler_GetTestDevices_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::UsbInternalsPageHandler::GetTestDevices",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::UsbInternalsPageHandler_GetTestDevices_Params_Data* params =
          reinterpret_cast<
              internal::UsbInternalsPageHandler_GetTestDevices_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      UsbInternalsPageHandler_GetTestDevices_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "UsbInternalsPageHandler::GetTestDevices deserializer");
        return false;
      }
      UsbInternalsPageHandler::GetTestDevicesCallback callback =
          UsbInternalsPageHandler_GetTestDevices_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetTestDevices(std::move(callback));
      return true;
    }
  }
  return false;
}

bool UsbInternalsPageHandlerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "UsbInternalsPageHandler RequestValidator");

  switch (message->header()->name) {
    case internal::kUsbInternalsPageHandler_AddDeviceForTesting_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbInternalsPageHandler_AddDeviceForTesting_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUsbInternalsPageHandler_RemoveDeviceForTesting_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbInternalsPageHandler_RemoveDeviceForTesting_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUsbInternalsPageHandler_GetTestDevices_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbInternalsPageHandler_GetTestDevices_Params_Data>(
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

bool UsbInternalsPageHandlerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "UsbInternalsPageHandler ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kUsbInternalsPageHandler_AddDeviceForTesting_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUsbInternalsPageHandler_RemoveDeviceForTesting_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUsbInternalsPageHandler_GetTestDevices_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbInternalsPageHandler_GetTestDevices_ResponseParams_Data>(
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
void UsbInternalsPageHandlerInterceptorForTesting::AddDeviceForTesting(const std::string& name, const std::string& serial_number, const std::string& landing_page, AddDeviceForTestingCallback callback) {
  GetForwardingInterface()->AddDeviceForTesting(std::move(name), std::move(serial_number), std::move(landing_page), std::move(callback));
}
void UsbInternalsPageHandlerInterceptorForTesting::RemoveDeviceForTesting(const std::string& guid, RemoveDeviceForTestingCallback callback) {
  GetForwardingInterface()->RemoveDeviceForTesting(std::move(guid), std::move(callback));
}
void UsbInternalsPageHandlerInterceptorForTesting::GetTestDevices(GetTestDevicesCallback callback) {
  GetForwardingInterface()->GetTestDevices(std::move(callback));
}
UsbInternalsPageHandlerAsyncWaiter::UsbInternalsPageHandlerAsyncWaiter(
    UsbInternalsPageHandler* proxy) : proxy_(proxy) {}

UsbInternalsPageHandlerAsyncWaiter::~UsbInternalsPageHandlerAsyncWaiter() = default;

void UsbInternalsPageHandlerAsyncWaiter::AddDeviceForTesting(
    const std::string& name, const std::string& serial_number, const std::string& landing_page, bool* out_success, std::string* out_message) {
  base::RunLoop loop;
  proxy_->AddDeviceForTesting(std::move(name),std::move(serial_number),std::move(landing_page),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             std::string* out_message
,
             bool success,
             const std::string& message) {*out_success = std::move(success);*out_message = std::move(message);
            loop->Quit();
          },
          &loop,
          out_success,
          out_message));
  loop.Run();
}
void UsbInternalsPageHandlerAsyncWaiter::RemoveDeviceForTesting(
    const std::string& guid) {
  base::RunLoop loop;
  proxy_->RemoveDeviceForTesting(std::move(guid),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void UsbInternalsPageHandlerAsyncWaiter::GetTestDevices(
    std::vector<TestDeviceInfoPtr>* out_devices) {
  base::RunLoop loop;
  proxy_->GetTestDevices(
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<TestDeviceInfoPtr>* out_devices
,
             std::vector<TestDeviceInfoPtr> devices) {*out_devices = std::move(devices);
            loop->Quit();
          },
          &loop,
          out_devices));
  loop.Run();
}

}  // namespace mojom

namespace mojo {


// static
bool StructTraits<::mojom::TestDeviceInfo::DataView, ::mojom::TestDeviceInfoPtr>::Read(
    ::mojom::TestDeviceInfo::DataView input,
    ::mojom::TestDeviceInfoPtr* output) {
  bool success = true;
  ::mojom::TestDeviceInfoPtr result(::mojom::TestDeviceInfo::New());
  
      if (!input.ReadGuid(&result->guid))
        success = false;
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadSerialNumber(&result->serial_number))
        success = false;
      if (!input.ReadLandingPage(&result->landing_page))
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