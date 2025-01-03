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

#include "device/usb/public/mojom/chooser_service.mojom-blink.h"

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

#include "device/usb/public/mojom/chooser_service.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "third_party/blink/renderer/platform/mojo/string16_mojom_traits.h"
namespace device {
namespace mojom {
namespace blink {
const char UsbChooserService::Name_[] = "device.mojom.UsbChooserService";

class UsbChooserService_GetPermission_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UsbChooserService_GetPermission_ForwardToCallback(
      UsbChooserService::GetPermissionCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UsbChooserService::GetPermissionCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(UsbChooserService_GetPermission_ForwardToCallback);
};

UsbChooserServiceProxy::UsbChooserServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void UsbChooserServiceProxy::GetPermission(
    WTF::Vector<::device::mojom::blink::UsbDeviceFilterPtr> in_device_filters, GetPermissionCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::UsbChooserService::GetPermission");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbChooserService_GetPermission_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbChooserService_GetPermission_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->device_filters)::BaseType::BufferWriter
      device_filters_writer;
  const mojo::internal::ContainerValidateParams device_filters_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::UsbDeviceFilterDataView>>(
      in_device_filters, buffer, &device_filters_writer, &device_filters_validate_params,
      &serialization_context);
  params->device_filters.Set(
      device_filters_writer.is_null() ? nullptr : device_filters_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->device_filters.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null device_filters in UsbChooserService.GetPermission request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new UsbChooserService_GetPermission_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class UsbChooserService_GetPermission_ProxyToResponder {
 public:
  static UsbChooserService::GetPermissionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<UsbChooserService_GetPermission_ProxyToResponder> proxy(
        new UsbChooserService_GetPermission_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&UsbChooserService_GetPermission_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~UsbChooserService_GetPermission_ProxyToResponder() {
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
  UsbChooserService_GetPermission_ProxyToResponder(
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
        << "UsbChooserService::GetPermissionCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::device::mojom::blink::UsbDeviceInfoPtr in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(UsbChooserService_GetPermission_ProxyToResponder);
};

bool UsbChooserService_GetPermission_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "device::mojom::UsbChooserService::GetPermissionCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::UsbChooserService_GetPermission_ResponseParams_Data* params =
      reinterpret_cast<
          internal::UsbChooserService_GetPermission_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::device::mojom::blink::UsbDeviceInfoPtr p_result{};
  UsbChooserService_GetPermission_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "UsbChooserService::GetPermission response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void UsbChooserService_GetPermission_ProxyToResponder::Run(
    ::device::mojom::blink::UsbDeviceInfoPtr in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUsbChooserService_GetPermission_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::UsbChooserService_GetPermission_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BaseType::BufferWriter
      result_writer;
  mojo::internal::Serialize<::device::mojom::UsbDeviceInfoDataView>(
      in_result, buffer, &result_writer, &serialization_context);
  params->result.Set(
      result_writer.is_null() ? nullptr : result_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::UsbChooserService::GetPermissionCallback",
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
bool UsbChooserServiceStubDispatch::Accept(
    UsbChooserService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kUsbChooserService_GetPermission_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::UsbChooserService::GetPermission",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool UsbChooserServiceStubDispatch::AcceptWithResponder(
    UsbChooserService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kUsbChooserService_GetPermission_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::UsbChooserService::GetPermission",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::UsbChooserService_GetPermission_Params_Data* params =
          reinterpret_cast<
              internal::UsbChooserService_GetPermission_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::Vector<::device::mojom::blink::UsbDeviceFilterPtr> p_device_filters{};
      UsbChooserService_GetPermission_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDeviceFilters(&p_device_filters))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "UsbChooserService::GetPermission deserializer");
        return false;
      }
      UsbChooserService::GetPermissionCallback callback =
          UsbChooserService_GetPermission_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetPermission(
std::move(p_device_filters), std::move(callback));
      return true;
    }
  }
  return false;
}

bool UsbChooserServiceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "UsbChooserService RequestValidator");

  switch (message->header()->name) {
    case internal::kUsbChooserService_GetPermission_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbChooserService_GetPermission_Params_Data>(
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

bool UsbChooserServiceResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "UsbChooserService ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kUsbChooserService_GetPermission_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbChooserService_GetPermission_ResponseParams_Data>(
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
void UsbChooserServiceInterceptorForTesting::GetPermission(WTF::Vector<::device::mojom::blink::UsbDeviceFilterPtr> device_filters, GetPermissionCallback callback) {
  GetForwardingInterface()->GetPermission(std::move(device_filters), std::move(callback));
}
UsbChooserServiceAsyncWaiter::UsbChooserServiceAsyncWaiter(
    UsbChooserService* proxy) : proxy_(proxy) {}

UsbChooserServiceAsyncWaiter::~UsbChooserServiceAsyncWaiter() = default;

void UsbChooserServiceAsyncWaiter::GetPermission(
    WTF::Vector<::device::mojom::blink::UsbDeviceFilterPtr> device_filters, ::device::mojom::blink::UsbDeviceInfoPtr* out_result) {
  base::RunLoop loop;
  proxy_->GetPermission(std::move(device_filters),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::device::mojom::blink::UsbDeviceInfoPtr* out_result
,
             ::device::mojom::blink::UsbDeviceInfoPtr result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}

}  // namespace blink
}  // namespace mojom
}  // namespace device

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif