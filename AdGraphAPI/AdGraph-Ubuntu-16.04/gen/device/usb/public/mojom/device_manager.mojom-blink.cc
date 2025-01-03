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

#include "device/usb/public/mojom/device_manager.mojom-blink.h"

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

#include "device/usb/public/mojom/device_manager.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "third_party/blink/renderer/platform/mojo/string16_mojom_traits.h"
namespace device {
namespace mojom {
namespace blink {
UsbDeviceFilter::UsbDeviceFilter()
    : has_vendor_id(),
      vendor_id(),
      has_product_id(),
      product_id(),
      has_class_code(),
      class_code(),
      has_subclass_code(),
      subclass_code(),
      has_protocol_code(),
      protocol_code(),
      serial_number() {}

UsbDeviceFilter::UsbDeviceFilter(
    bool has_vendor_id_in,
    uint16_t vendor_id_in,
    bool has_product_id_in,
    uint16_t product_id_in,
    bool has_class_code_in,
    uint8_t class_code_in,
    bool has_subclass_code_in,
    uint8_t subclass_code_in,
    bool has_protocol_code_in,
    uint8_t protocol_code_in,
    const WTF::String& serial_number_in)
    : has_vendor_id(std::move(has_vendor_id_in)),
      vendor_id(std::move(vendor_id_in)),
      has_product_id(std::move(has_product_id_in)),
      product_id(std::move(product_id_in)),
      has_class_code(std::move(has_class_code_in)),
      class_code(std::move(class_code_in)),
      has_subclass_code(std::move(has_subclass_code_in)),
      subclass_code(std::move(subclass_code_in)),
      has_protocol_code(std::move(has_protocol_code_in)),
      protocol_code(std::move(protocol_code_in)),
      serial_number(std::move(serial_number_in)) {}

UsbDeviceFilter::~UsbDeviceFilter() = default;

bool UsbDeviceFilter::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
UsbEnumerationOptions::UsbEnumerationOptions()
    : filters() {}

UsbEnumerationOptions::UsbEnumerationOptions(
    WTF::Vector<UsbDeviceFilterPtr> filters_in)
    : filters(std::move(filters_in)) {}

UsbEnumerationOptions::~UsbEnumerationOptions() = default;

bool UsbEnumerationOptions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char UsbDeviceManager::Name_[] = "device.mojom.UsbDeviceManager";

class UsbDeviceManager_GetDevices_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UsbDeviceManager_GetDevices_ForwardToCallback(
      UsbDeviceManager::GetDevicesCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UsbDeviceManager::GetDevicesCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(UsbDeviceManager_GetDevices_ForwardToCallback);
};

UsbDeviceManagerProxy::UsbDeviceManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void UsbDeviceManagerProxy::GetDevices(
    UsbEnumerationOptionsPtr in_options, GetDevicesCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::UsbDeviceManager::GetDevices");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDeviceManager_GetDevices_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDeviceManager_GetDevices_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->options)::BaseType::BufferWriter
      options_writer;
  mojo::internal::Serialize<::device::mojom::UsbEnumerationOptionsDataView>(
      in_options, buffer, &options_writer, &serialization_context);
  params->options.Set(
      options_writer.is_null() ? nullptr : options_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new UsbDeviceManager_GetDevices_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void UsbDeviceManagerProxy::GetDevice(
    const WTF::String& in_guid, ::device::mojom::blink::UsbDeviceRequest in_device_request) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::UsbDeviceManager::GetDevice");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDeviceManager_GetDevice_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDeviceManager_GetDevice_Params_Data::BufferWriter
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
      "null guid in UsbDeviceManager.GetDevice request");
  mojo::internal::Serialize<::device::mojom::UsbDeviceRequestDataView>(
      in_device_request, &params->device_request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->device_request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid device_request in UsbDeviceManager.GetDevice request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void UsbDeviceManagerProxy::SetClient(
    UsbDeviceManagerClientPtr in_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::UsbDeviceManager::SetClient");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDeviceManager_SetClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDeviceManager_SetClient_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::UsbDeviceManagerClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in UsbDeviceManager.SetClient request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class UsbDeviceManager_GetDevices_ProxyToResponder {
 public:
  static UsbDeviceManager::GetDevicesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<UsbDeviceManager_GetDevices_ProxyToResponder> proxy(
        new UsbDeviceManager_GetDevices_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&UsbDeviceManager_GetDevices_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~UsbDeviceManager_GetDevices_ProxyToResponder() {
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
  UsbDeviceManager_GetDevices_ProxyToResponder(
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
        << "UsbDeviceManager::GetDevicesCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      WTF::Vector<::device::mojom::blink::UsbDeviceInfoPtr> in_results);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(UsbDeviceManager_GetDevices_ProxyToResponder);
};

bool UsbDeviceManager_GetDevices_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "device::mojom::UsbDeviceManager::GetDevicesCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::UsbDeviceManager_GetDevices_ResponseParams_Data* params =
      reinterpret_cast<
          internal::UsbDeviceManager_GetDevices_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::Vector<::device::mojom::blink::UsbDeviceInfoPtr> p_results{};
  UsbDeviceManager_GetDevices_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResults(&p_results))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "UsbDeviceManager::GetDevices response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_results));
  return true;
}

void UsbDeviceManager_GetDevices_ProxyToResponder::Run(
    WTF::Vector<::device::mojom::blink::UsbDeviceInfoPtr> in_results) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDeviceManager_GetDevices_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDeviceManager_GetDevices_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->results)::BaseType::BufferWriter
      results_writer;
  const mojo::internal::ContainerValidateParams results_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::UsbDeviceInfoDataView>>(
      in_results, buffer, &results_writer, &results_validate_params,
      &serialization_context);
  params->results.Set(
      results_writer.is_null() ? nullptr : results_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->results.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null results in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::UsbDeviceManager::GetDevicesCallback",
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
bool UsbDeviceManagerStubDispatch::Accept(
    UsbDeviceManager* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kUsbDeviceManager_GetDevices_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::UsbDeviceManager::GetDevices",
               "message", message->name());
#endif
      break;
    }
    case internal::kUsbDeviceManager_GetDevice_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::UsbDeviceManager::GetDevice",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::UsbDeviceManager_GetDevice_Params_Data* params =
          reinterpret_cast<internal::UsbDeviceManager_GetDevice_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_guid{};
      ::device::mojom::blink::UsbDeviceRequest p_device_request{};
      UsbDeviceManager_GetDevice_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadGuid(&p_guid))
        success = false;
      p_device_request =
          input_data_view.TakeDeviceRequest<decltype(p_device_request)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "UsbDeviceManager::GetDevice deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetDevice(
std::move(p_guid), 
std::move(p_device_request));
      return true;
    }
    case internal::kUsbDeviceManager_SetClient_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::UsbDeviceManager::SetClient",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::UsbDeviceManager_SetClient_Params_Data* params =
          reinterpret_cast<internal::UsbDeviceManager_SetClient_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      UsbDeviceManagerClientPtr p_client{};
      UsbDeviceManager_SetClient_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "UsbDeviceManager::SetClient deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetClient(
std::move(p_client));
      return true;
    }
  }
  return false;
}

// static
bool UsbDeviceManagerStubDispatch::AcceptWithResponder(
    UsbDeviceManager* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kUsbDeviceManager_GetDevices_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::UsbDeviceManager::GetDevices",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::UsbDeviceManager_GetDevices_Params_Data* params =
          reinterpret_cast<
              internal::UsbDeviceManager_GetDevices_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      UsbEnumerationOptionsPtr p_options{};
      UsbDeviceManager_GetDevices_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOptions(&p_options))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "UsbDeviceManager::GetDevices deserializer");
        return false;
      }
      UsbDeviceManager::GetDevicesCallback callback =
          UsbDeviceManager_GetDevices_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetDevices(
std::move(p_options), std::move(callback));
      return true;
    }
    case internal::kUsbDeviceManager_GetDevice_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::UsbDeviceManager::GetDevice",
               "message", message->name());
#endif
      break;
    }
    case internal::kUsbDeviceManager_SetClient_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::UsbDeviceManager::SetClient",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool UsbDeviceManagerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "UsbDeviceManager RequestValidator");

  switch (message->header()->name) {
    case internal::kUsbDeviceManager_GetDevices_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDeviceManager_GetDevices_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUsbDeviceManager_GetDevice_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDeviceManager_GetDevice_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUsbDeviceManager_SetClient_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDeviceManager_SetClient_Params_Data>(
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

bool UsbDeviceManagerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "UsbDeviceManager ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kUsbDeviceManager_GetDevices_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDeviceManager_GetDevices_ResponseParams_Data>(
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
void UsbDeviceManagerInterceptorForTesting::GetDevices(UsbEnumerationOptionsPtr options, GetDevicesCallback callback) {
  GetForwardingInterface()->GetDevices(std::move(options), std::move(callback));
}
void UsbDeviceManagerInterceptorForTesting::GetDevice(const WTF::String& guid, ::device::mojom::blink::UsbDeviceRequest device_request) {
  GetForwardingInterface()->GetDevice(std::move(guid), std::move(device_request));
}
void UsbDeviceManagerInterceptorForTesting::SetClient(UsbDeviceManagerClientPtr client) {
  GetForwardingInterface()->SetClient(std::move(client));
}
UsbDeviceManagerAsyncWaiter::UsbDeviceManagerAsyncWaiter(
    UsbDeviceManager* proxy) : proxy_(proxy) {}

UsbDeviceManagerAsyncWaiter::~UsbDeviceManagerAsyncWaiter() = default;

void UsbDeviceManagerAsyncWaiter::GetDevices(
    UsbEnumerationOptionsPtr options, WTF::Vector<::device::mojom::blink::UsbDeviceInfoPtr>* out_results) {
  base::RunLoop loop;
  proxy_->GetDevices(std::move(options),
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::Vector<::device::mojom::blink::UsbDeviceInfoPtr>* out_results
,
             WTF::Vector<::device::mojom::blink::UsbDeviceInfoPtr> results) {*out_results = std::move(results);
            loop->Quit();
          },
          &loop,
          out_results));
  loop.Run();
}

const char UsbDeviceManagerClient::Name_[] = "device.mojom.UsbDeviceManagerClient";

UsbDeviceManagerClientProxy::UsbDeviceManagerClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void UsbDeviceManagerClientProxy::OnDeviceAdded(
    ::device::mojom::blink::UsbDeviceInfoPtr in_device_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::UsbDeviceManagerClient::OnDeviceAdded");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDeviceManagerClient_OnDeviceAdded_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDeviceManagerClient_OnDeviceAdded_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->device_info)::BaseType::BufferWriter
      device_info_writer;
  mojo::internal::Serialize<::device::mojom::UsbDeviceInfoDataView>(
      in_device_info, buffer, &device_info_writer, &serialization_context);
  params->device_info.Set(
      device_info_writer.is_null() ? nullptr : device_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->device_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null device_info in UsbDeviceManagerClient.OnDeviceAdded request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void UsbDeviceManagerClientProxy::OnDeviceRemoved(
    ::device::mojom::blink::UsbDeviceInfoPtr in_device_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::UsbDeviceManagerClient::OnDeviceRemoved");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbDeviceManagerClient_OnDeviceRemoved_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbDeviceManagerClient_OnDeviceRemoved_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->device_info)::BaseType::BufferWriter
      device_info_writer;
  mojo::internal::Serialize<::device::mojom::UsbDeviceInfoDataView>(
      in_device_info, buffer, &device_info_writer, &serialization_context);
  params->device_info.Set(
      device_info_writer.is_null() ? nullptr : device_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->device_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null device_info in UsbDeviceManagerClient.OnDeviceRemoved request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool UsbDeviceManagerClientStubDispatch::Accept(
    UsbDeviceManagerClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kUsbDeviceManagerClient_OnDeviceAdded_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::UsbDeviceManagerClient::OnDeviceAdded",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::UsbDeviceManagerClient_OnDeviceAdded_Params_Data* params =
          reinterpret_cast<internal::UsbDeviceManagerClient_OnDeviceAdded_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::device::mojom::blink::UsbDeviceInfoPtr p_device_info{};
      UsbDeviceManagerClient_OnDeviceAdded_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDeviceInfo(&p_device_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "UsbDeviceManagerClient::OnDeviceAdded deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnDeviceAdded(
std::move(p_device_info));
      return true;
    }
    case internal::kUsbDeviceManagerClient_OnDeviceRemoved_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::UsbDeviceManagerClient::OnDeviceRemoved",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::UsbDeviceManagerClient_OnDeviceRemoved_Params_Data* params =
          reinterpret_cast<internal::UsbDeviceManagerClient_OnDeviceRemoved_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::device::mojom::blink::UsbDeviceInfoPtr p_device_info{};
      UsbDeviceManagerClient_OnDeviceRemoved_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDeviceInfo(&p_device_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "UsbDeviceManagerClient::OnDeviceRemoved deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnDeviceRemoved(
std::move(p_device_info));
      return true;
    }
  }
  return false;
}

// static
bool UsbDeviceManagerClientStubDispatch::AcceptWithResponder(
    UsbDeviceManagerClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kUsbDeviceManagerClient_OnDeviceAdded_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::UsbDeviceManagerClient::OnDeviceAdded",
               "message", message->name());
#endif
      break;
    }
    case internal::kUsbDeviceManagerClient_OnDeviceRemoved_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::UsbDeviceManagerClient::OnDeviceRemoved",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool UsbDeviceManagerClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "UsbDeviceManagerClient RequestValidator");

  switch (message->header()->name) {
    case internal::kUsbDeviceManagerClient_OnDeviceAdded_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDeviceManagerClient_OnDeviceAdded_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUsbDeviceManagerClient_OnDeviceRemoved_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbDeviceManagerClient_OnDeviceRemoved_Params_Data>(
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

void UsbDeviceManagerClientInterceptorForTesting::OnDeviceAdded(::device::mojom::blink::UsbDeviceInfoPtr device_info) {
  GetForwardingInterface()->OnDeviceAdded(std::move(device_info));
}
void UsbDeviceManagerClientInterceptorForTesting::OnDeviceRemoved(::device::mojom::blink::UsbDeviceInfoPtr device_info) {
  GetForwardingInterface()->OnDeviceRemoved(std::move(device_info));
}
UsbDeviceManagerClientAsyncWaiter::UsbDeviceManagerClientAsyncWaiter(
    UsbDeviceManagerClient* proxy) : proxy_(proxy) {}

UsbDeviceManagerClientAsyncWaiter::~UsbDeviceManagerClientAsyncWaiter() = default;


}  // namespace blink
}  // namespace mojom
}  // namespace device

namespace mojo {


// static
bool StructTraits<::device::mojom::blink::UsbDeviceFilter::DataView, ::device::mojom::blink::UsbDeviceFilterPtr>::Read(
    ::device::mojom::blink::UsbDeviceFilter::DataView input,
    ::device::mojom::blink::UsbDeviceFilterPtr* output) {
  bool success = true;
  ::device::mojom::blink::UsbDeviceFilterPtr result(::device::mojom::blink::UsbDeviceFilter::New());
  
      result->has_vendor_id = input.has_vendor_id();
      result->vendor_id = input.vendor_id();
      result->has_product_id = input.has_product_id();
      result->product_id = input.product_id();
      result->has_class_code = input.has_class_code();
      result->class_code = input.class_code();
      result->has_subclass_code = input.has_subclass_code();
      result->subclass_code = input.subclass_code();
      result->has_protocol_code = input.has_protocol_code();
      result->protocol_code = input.protocol_code();
      if (!input.ReadSerialNumber(&result->serial_number))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::UsbEnumerationOptions::DataView, ::device::mojom::blink::UsbEnumerationOptionsPtr>::Read(
    ::device::mojom::blink::UsbEnumerationOptions::DataView input,
    ::device::mojom::blink::UsbEnumerationOptionsPtr* output) {
  bool success = true;
  ::device::mojom::blink::UsbEnumerationOptionsPtr result(::device::mojom::blink::UsbEnumerationOptions::New());
  
      if (!input.ReadFilters(&result->filters))
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