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

#include "services/device/public/mojom/serial.mojom-blink.h"

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

#include "services/device/public/mojom/serial.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
namespace device {
namespace mojom {
namespace blink {
SerialDeviceInfo::SerialDeviceInfo()
    : path(),
      vendor_id(),
      has_vendor_id(false),
      product_id(),
      has_product_id(false),
      display_name() {}

SerialDeviceInfo::SerialDeviceInfo(
    const WTF::String& path_in,
    uint16_t vendor_id_in,
    bool has_vendor_id_in,
    uint16_t product_id_in,
    bool has_product_id_in,
    const WTF::String& display_name_in)
    : path(std::move(path_in)),
      vendor_id(std::move(vendor_id_in)),
      has_vendor_id(std::move(has_vendor_id_in)),
      product_id(std::move(product_id_in)),
      has_product_id(std::move(has_product_id_in)),
      display_name(std::move(display_name_in)) {}

SerialDeviceInfo::~SerialDeviceInfo() = default;

bool SerialDeviceInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
SerialConnectionOptions::SerialConnectionOptions()
    : bitrate(0U),
      data_bits(SerialDataBits::NONE),
      parity_bit(SerialParityBit::NONE),
      stop_bits(SerialStopBits::NONE),
      cts_flow_control(),
      has_cts_flow_control(false) {}

SerialConnectionOptions::SerialConnectionOptions(
    uint32_t bitrate_in,
    SerialDataBits data_bits_in,
    SerialParityBit parity_bit_in,
    SerialStopBits stop_bits_in,
    bool cts_flow_control_in,
    bool has_cts_flow_control_in)
    : bitrate(std::move(bitrate_in)),
      data_bits(std::move(data_bits_in)),
      parity_bit(std::move(parity_bit_in)),
      stop_bits(std::move(stop_bits_in)),
      cts_flow_control(std::move(cts_flow_control_in)),
      has_cts_flow_control(std::move(has_cts_flow_control_in)) {}

SerialConnectionOptions::~SerialConnectionOptions() = default;
size_t SerialConnectionOptions::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->bitrate);
  seed = mojo::internal::WTFHash(seed, this->data_bits);
  seed = mojo::internal::WTFHash(seed, this->parity_bit);
  seed = mojo::internal::WTFHash(seed, this->stop_bits);
  seed = mojo::internal::WTFHash(seed, this->cts_flow_control);
  seed = mojo::internal::WTFHash(seed, this->has_cts_flow_control);
  return seed;
}

bool SerialConnectionOptions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
SerialConnectionInfo::SerialConnectionInfo()
    : bitrate(0U),
      data_bits(SerialDataBits::NONE),
      parity_bit(SerialParityBit::NONE),
      stop_bits(SerialStopBits::NONE),
      cts_flow_control() {}

SerialConnectionInfo::SerialConnectionInfo(
    uint32_t bitrate_in,
    SerialDataBits data_bits_in,
    SerialParityBit parity_bit_in,
    SerialStopBits stop_bits_in,
    bool cts_flow_control_in)
    : bitrate(std::move(bitrate_in)),
      data_bits(std::move(data_bits_in)),
      parity_bit(std::move(parity_bit_in)),
      stop_bits(std::move(stop_bits_in)),
      cts_flow_control(std::move(cts_flow_control_in)) {}

SerialConnectionInfo::~SerialConnectionInfo() = default;
size_t SerialConnectionInfo::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->bitrate);
  seed = mojo::internal::WTFHash(seed, this->data_bits);
  seed = mojo::internal::WTFHash(seed, this->parity_bit);
  seed = mojo::internal::WTFHash(seed, this->stop_bits);
  seed = mojo::internal::WTFHash(seed, this->cts_flow_control);
  return seed;
}

bool SerialConnectionInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
SerialHostControlSignals::SerialHostControlSignals()
    : dtr(),
      has_dtr(false),
      rts(),
      has_rts(false) {}

SerialHostControlSignals::SerialHostControlSignals(
    bool dtr_in,
    bool has_dtr_in,
    bool rts_in,
    bool has_rts_in)
    : dtr(std::move(dtr_in)),
      has_dtr(std::move(has_dtr_in)),
      rts(std::move(rts_in)),
      has_rts(std::move(has_rts_in)) {}

SerialHostControlSignals::~SerialHostControlSignals() = default;
size_t SerialHostControlSignals::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->dtr);
  seed = mojo::internal::WTFHash(seed, this->has_dtr);
  seed = mojo::internal::WTFHash(seed, this->rts);
  seed = mojo::internal::WTFHash(seed, this->has_rts);
  return seed;
}

bool SerialHostControlSignals::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
SerialDeviceControlSignals::SerialDeviceControlSignals()
    : dcd(),
      cts(),
      ri(),
      dsr() {}

SerialDeviceControlSignals::SerialDeviceControlSignals(
    bool dcd_in,
    bool cts_in,
    bool ri_in,
    bool dsr_in)
    : dcd(std::move(dcd_in)),
      cts(std::move(cts_in)),
      ri(std::move(ri_in)),
      dsr(std::move(dsr_in)) {}

SerialDeviceControlSignals::~SerialDeviceControlSignals() = default;
size_t SerialDeviceControlSignals::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->dcd);
  seed = mojo::internal::WTFHash(seed, this->cts);
  seed = mojo::internal::WTFHash(seed, this->ri);
  seed = mojo::internal::WTFHash(seed, this->dsr);
  return seed;
}

bool SerialDeviceControlSignals::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char SerialDeviceEnumerator::Name_[] = "device.mojom.SerialDeviceEnumerator";

class SerialDeviceEnumerator_GetDevices_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SerialDeviceEnumerator_GetDevices_ForwardToCallback(
      SerialDeviceEnumerator::GetDevicesCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SerialDeviceEnumerator::GetDevicesCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SerialDeviceEnumerator_GetDevices_ForwardToCallback);
};

SerialDeviceEnumeratorProxy::SerialDeviceEnumeratorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SerialDeviceEnumeratorProxy::GetDevices(
    GetDevicesCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::SerialDeviceEnumerator::GetDevices");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialDeviceEnumerator_GetDevices_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialDeviceEnumerator_GetDevices_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SerialDeviceEnumerator_GetDevices_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class SerialDeviceEnumerator_GetDevices_ProxyToResponder {
 public:
  static SerialDeviceEnumerator::GetDevicesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SerialDeviceEnumerator_GetDevices_ProxyToResponder> proxy(
        new SerialDeviceEnumerator_GetDevices_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SerialDeviceEnumerator_GetDevices_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SerialDeviceEnumerator_GetDevices_ProxyToResponder() {
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
  SerialDeviceEnumerator_GetDevices_ProxyToResponder(
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
        << "SerialDeviceEnumerator::GetDevicesCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      WTF::Vector<SerialDeviceInfoPtr> in_devices);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(SerialDeviceEnumerator_GetDevices_ProxyToResponder);
};

bool SerialDeviceEnumerator_GetDevices_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "device::mojom::SerialDeviceEnumerator::GetDevicesCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SerialDeviceEnumerator_GetDevices_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SerialDeviceEnumerator_GetDevices_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::Vector<SerialDeviceInfoPtr> p_devices{};
  SerialDeviceEnumerator_GetDevices_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadDevices(&p_devices))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "SerialDeviceEnumerator::GetDevices response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_devices));
  return true;
}

void SerialDeviceEnumerator_GetDevices_ProxyToResponder::Run(
    WTF::Vector<SerialDeviceInfoPtr> in_devices) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialDeviceEnumerator_GetDevices_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialDeviceEnumerator_GetDevices_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->devices)::BaseType::BufferWriter
      devices_writer;
  const mojo::internal::ContainerValidateParams devices_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::SerialDeviceInfoDataView>>(
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
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SerialDeviceEnumerator::GetDevicesCallback",
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
bool SerialDeviceEnumeratorStubDispatch::Accept(
    SerialDeviceEnumerator* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSerialDeviceEnumerator_GetDevices_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SerialDeviceEnumerator::GetDevices",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool SerialDeviceEnumeratorStubDispatch::AcceptWithResponder(
    SerialDeviceEnumerator* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSerialDeviceEnumerator_GetDevices_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SerialDeviceEnumerator::GetDevices",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::SerialDeviceEnumerator_GetDevices_Params_Data* params =
          reinterpret_cast<
              internal::SerialDeviceEnumerator_GetDevices_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SerialDeviceEnumerator_GetDevices_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SerialDeviceEnumerator::GetDevices deserializer");
        return false;
      }
      SerialDeviceEnumerator::GetDevicesCallback callback =
          SerialDeviceEnumerator_GetDevices_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetDevices(std::move(callback));
      return true;
    }
  }
  return false;
}

bool SerialDeviceEnumeratorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SerialDeviceEnumerator RequestValidator");

  switch (message->header()->name) {
    case internal::kSerialDeviceEnumerator_GetDevices_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialDeviceEnumerator_GetDevices_Params_Data>(
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

bool SerialDeviceEnumeratorResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SerialDeviceEnumerator ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kSerialDeviceEnumerator_GetDevices_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialDeviceEnumerator_GetDevices_ResponseParams_Data>(
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
void SerialDeviceEnumeratorInterceptorForTesting::GetDevices(GetDevicesCallback callback) {
  GetForwardingInterface()->GetDevices(std::move(callback));
}
SerialDeviceEnumeratorAsyncWaiter::SerialDeviceEnumeratorAsyncWaiter(
    SerialDeviceEnumerator* proxy) : proxy_(proxy) {}

SerialDeviceEnumeratorAsyncWaiter::~SerialDeviceEnumeratorAsyncWaiter() = default;

void SerialDeviceEnumeratorAsyncWaiter::GetDevices(
    WTF::Vector<SerialDeviceInfoPtr>* out_devices) {
  base::RunLoop loop;
  proxy_->GetDevices(
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::Vector<SerialDeviceInfoPtr>* out_devices
,
             WTF::Vector<SerialDeviceInfoPtr> devices) {*out_devices = std::move(devices);
            loop->Quit();
          },
          &loop,
          out_devices));
  loop.Run();
}

const char SerialIoHandler::Name_[] = "device.mojom.SerialIoHandler";

class SerialIoHandler_Open_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SerialIoHandler_Open_ForwardToCallback(
      SerialIoHandler::OpenCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SerialIoHandler::OpenCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SerialIoHandler_Open_ForwardToCallback);
};

class SerialIoHandler_Read_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SerialIoHandler_Read_ForwardToCallback(
      SerialIoHandler::ReadCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SerialIoHandler::ReadCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SerialIoHandler_Read_ForwardToCallback);
};

class SerialIoHandler_Write_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SerialIoHandler_Write_ForwardToCallback(
      SerialIoHandler::WriteCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SerialIoHandler::WriteCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SerialIoHandler_Write_ForwardToCallback);
};

class SerialIoHandler_Flush_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SerialIoHandler_Flush_ForwardToCallback(
      SerialIoHandler::FlushCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SerialIoHandler::FlushCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SerialIoHandler_Flush_ForwardToCallback);
};

class SerialIoHandler_GetControlSignals_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SerialIoHandler_GetControlSignals_ForwardToCallback(
      SerialIoHandler::GetControlSignalsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SerialIoHandler::GetControlSignalsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SerialIoHandler_GetControlSignals_ForwardToCallback);
};

class SerialIoHandler_SetControlSignals_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SerialIoHandler_SetControlSignals_ForwardToCallback(
      SerialIoHandler::SetControlSignalsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SerialIoHandler::SetControlSignalsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SerialIoHandler_SetControlSignals_ForwardToCallback);
};

class SerialIoHandler_ConfigurePort_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SerialIoHandler_ConfigurePort_ForwardToCallback(
      SerialIoHandler::ConfigurePortCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SerialIoHandler::ConfigurePortCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SerialIoHandler_ConfigurePort_ForwardToCallback);
};

class SerialIoHandler_GetPortInfo_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SerialIoHandler_GetPortInfo_ForwardToCallback(
      SerialIoHandler::GetPortInfoCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SerialIoHandler::GetPortInfoCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SerialIoHandler_GetPortInfo_ForwardToCallback);
};

class SerialIoHandler_SetBreak_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SerialIoHandler_SetBreak_ForwardToCallback(
      SerialIoHandler::SetBreakCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SerialIoHandler::SetBreakCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SerialIoHandler_SetBreak_ForwardToCallback);
};

class SerialIoHandler_ClearBreak_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SerialIoHandler_ClearBreak_ForwardToCallback(
      SerialIoHandler::ClearBreakCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SerialIoHandler::ClearBreakCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SerialIoHandler_ClearBreak_ForwardToCallback);
};

SerialIoHandlerProxy::SerialIoHandlerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SerialIoHandlerProxy::Open(
    const WTF::String& in_port, SerialConnectionOptionsPtr in_options, OpenCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::SerialIoHandler::Open");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialIoHandler_Open_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialIoHandler_Open_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->port)::BaseType::BufferWriter
      port_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_port, buffer, &port_writer, &serialization_context);
  params->port.Set(
      port_writer.is_null() ? nullptr : port_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->port.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null port in SerialIoHandler.Open request");
  typename decltype(params->options)::BaseType::BufferWriter
      options_writer;
  mojo::internal::Serialize<::device::mojom::SerialConnectionOptionsDataView>(
      in_options, buffer, &options_writer, &serialization_context);
  params->options.Set(
      options_writer.is_null() ? nullptr : options_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null options in SerialIoHandler.Open request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SerialIoHandler_Open_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void SerialIoHandlerProxy::Read(
    uint32_t in_bytes, ReadCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::SerialIoHandler::Read");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialIoHandler_Read_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialIoHandler_Read_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->bytes = in_bytes;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SerialIoHandler_Read_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void SerialIoHandlerProxy::Write(
    const WTF::Vector<uint8_t>& in_data, WriteCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::SerialIoHandler::Write");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialIoHandler_Write_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialIoHandler_Write_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  const mojo::internal::ContainerValidateParams data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_data, buffer, &data_writer, &data_validate_params,
      &serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in SerialIoHandler.Write request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SerialIoHandler_Write_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void SerialIoHandlerProxy::CancelRead(
    SerialReceiveError in_reason) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::SerialIoHandler::CancelRead");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialIoHandler_CancelRead_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialIoHandler_CancelRead_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::SerialReceiveError>(
      in_reason, &params->reason);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void SerialIoHandlerProxy::CancelWrite(
    SerialSendError in_reason) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::SerialIoHandler::CancelWrite");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialIoHandler_CancelWrite_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialIoHandler_CancelWrite_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::SerialSendError>(
      in_reason, &params->reason);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void SerialIoHandlerProxy::Flush(
    FlushCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::SerialIoHandler::Flush");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialIoHandler_Flush_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialIoHandler_Flush_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SerialIoHandler_Flush_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void SerialIoHandlerProxy::GetControlSignals(
    GetControlSignalsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::SerialIoHandler::GetControlSignals");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialIoHandler_GetControlSignals_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialIoHandler_GetControlSignals_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SerialIoHandler_GetControlSignals_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void SerialIoHandlerProxy::SetControlSignals(
    SerialHostControlSignalsPtr in_signals, SetControlSignalsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::SerialIoHandler::SetControlSignals");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialIoHandler_SetControlSignals_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialIoHandler_SetControlSignals_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->signals)::BaseType::BufferWriter
      signals_writer;
  mojo::internal::Serialize<::device::mojom::SerialHostControlSignalsDataView>(
      in_signals, buffer, &signals_writer, &serialization_context);
  params->signals.Set(
      signals_writer.is_null() ? nullptr : signals_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->signals.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null signals in SerialIoHandler.SetControlSignals request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SerialIoHandler_SetControlSignals_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void SerialIoHandlerProxy::ConfigurePort(
    SerialConnectionOptionsPtr in_options, ConfigurePortCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::SerialIoHandler::ConfigurePort");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialIoHandler_ConfigurePort_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialIoHandler_ConfigurePort_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->options)::BaseType::BufferWriter
      options_writer;
  mojo::internal::Serialize<::device::mojom::SerialConnectionOptionsDataView>(
      in_options, buffer, &options_writer, &serialization_context);
  params->options.Set(
      options_writer.is_null() ? nullptr : options_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null options in SerialIoHandler.ConfigurePort request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SerialIoHandler_ConfigurePort_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void SerialIoHandlerProxy::GetPortInfo(
    GetPortInfoCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::SerialIoHandler::GetPortInfo");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialIoHandler_GetPortInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialIoHandler_GetPortInfo_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SerialIoHandler_GetPortInfo_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void SerialIoHandlerProxy::SetBreak(
    SetBreakCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::SerialIoHandler::SetBreak");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialIoHandler_SetBreak_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialIoHandler_SetBreak_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SerialIoHandler_SetBreak_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void SerialIoHandlerProxy::ClearBreak(
    ClearBreakCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::SerialIoHandler::ClearBreak");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialIoHandler_ClearBreak_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialIoHandler_ClearBreak_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SerialIoHandler_ClearBreak_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class SerialIoHandler_Open_ProxyToResponder {
 public:
  static SerialIoHandler::OpenCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SerialIoHandler_Open_ProxyToResponder> proxy(
        new SerialIoHandler_Open_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SerialIoHandler_Open_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SerialIoHandler_Open_ProxyToResponder() {
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
  SerialIoHandler_Open_ProxyToResponder(
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
        << "SerialIoHandler::OpenCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(SerialIoHandler_Open_ProxyToResponder);
};

bool SerialIoHandler_Open_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "device::mojom::SerialIoHandler::OpenCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SerialIoHandler_Open_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SerialIoHandler_Open_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  SerialIoHandler_Open_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "SerialIoHandler::Open response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void SerialIoHandler_Open_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialIoHandler_Open_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialIoHandler_Open_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SerialIoHandler::OpenCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class SerialIoHandler_Read_ProxyToResponder {
 public:
  static SerialIoHandler::ReadCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SerialIoHandler_Read_ProxyToResponder> proxy(
        new SerialIoHandler_Read_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SerialIoHandler_Read_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SerialIoHandler_Read_ProxyToResponder() {
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
  SerialIoHandler_Read_ProxyToResponder(
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
        << "SerialIoHandler::ReadCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const WTF::Vector<uint8_t>& in_data, SerialReceiveError in_error);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(SerialIoHandler_Read_ProxyToResponder);
};

bool SerialIoHandler_Read_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "device::mojom::SerialIoHandler::ReadCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SerialIoHandler_Read_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SerialIoHandler_Read_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::Vector<uint8_t> p_data{};
  SerialReceiveError p_error{};
  SerialIoHandler_Read_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadData(&p_data))
    success = false;
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "SerialIoHandler::Read response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_data), 
std::move(p_error));
  return true;
}

void SerialIoHandler_Read_ProxyToResponder::Run(
    const WTF::Vector<uint8_t>& in_data, SerialReceiveError in_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialIoHandler_Read_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialIoHandler_Read_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  const mojo::internal::ContainerValidateParams data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_data, buffer, &data_writer, &data_validate_params,
      &serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in ");
  mojo::internal::Serialize<::device::mojom::SerialReceiveError>(
      in_error, &params->error);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SerialIoHandler::ReadCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class SerialIoHandler_Write_ProxyToResponder {
 public:
  static SerialIoHandler::WriteCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SerialIoHandler_Write_ProxyToResponder> proxy(
        new SerialIoHandler_Write_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SerialIoHandler_Write_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SerialIoHandler_Write_ProxyToResponder() {
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
  SerialIoHandler_Write_ProxyToResponder(
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
        << "SerialIoHandler::WriteCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      uint32_t in_bytes_written, SerialSendError in_error);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(SerialIoHandler_Write_ProxyToResponder);
};

bool SerialIoHandler_Write_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "device::mojom::SerialIoHandler::WriteCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SerialIoHandler_Write_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SerialIoHandler_Write_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  uint32_t p_bytes_written{};
  SerialSendError p_error{};
  SerialIoHandler_Write_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_bytes_written = input_data_view.bytes_written();
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "SerialIoHandler::Write response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_bytes_written), 
std::move(p_error));
  return true;
}

void SerialIoHandler_Write_ProxyToResponder::Run(
    uint32_t in_bytes_written, SerialSendError in_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialIoHandler_Write_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialIoHandler_Write_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->bytes_written = in_bytes_written;
  mojo::internal::Serialize<::device::mojom::SerialSendError>(
      in_error, &params->error);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SerialIoHandler::WriteCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class SerialIoHandler_Flush_ProxyToResponder {
 public:
  static SerialIoHandler::FlushCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SerialIoHandler_Flush_ProxyToResponder> proxy(
        new SerialIoHandler_Flush_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SerialIoHandler_Flush_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SerialIoHandler_Flush_ProxyToResponder() {
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
  SerialIoHandler_Flush_ProxyToResponder(
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
        << "SerialIoHandler::FlushCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(SerialIoHandler_Flush_ProxyToResponder);
};

bool SerialIoHandler_Flush_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "device::mojom::SerialIoHandler::FlushCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SerialIoHandler_Flush_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SerialIoHandler_Flush_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  SerialIoHandler_Flush_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "SerialIoHandler::Flush response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void SerialIoHandler_Flush_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialIoHandler_Flush_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialIoHandler_Flush_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SerialIoHandler::FlushCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class SerialIoHandler_GetControlSignals_ProxyToResponder {
 public:
  static SerialIoHandler::GetControlSignalsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SerialIoHandler_GetControlSignals_ProxyToResponder> proxy(
        new SerialIoHandler_GetControlSignals_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SerialIoHandler_GetControlSignals_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SerialIoHandler_GetControlSignals_ProxyToResponder() {
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
  SerialIoHandler_GetControlSignals_ProxyToResponder(
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
        << "SerialIoHandler::GetControlSignalsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      SerialDeviceControlSignalsPtr in_signals);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(SerialIoHandler_GetControlSignals_ProxyToResponder);
};

bool SerialIoHandler_GetControlSignals_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "device::mojom::SerialIoHandler::GetControlSignalsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SerialIoHandler_GetControlSignals_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SerialIoHandler_GetControlSignals_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  SerialDeviceControlSignalsPtr p_signals{};
  SerialIoHandler_GetControlSignals_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadSignals(&p_signals))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "SerialIoHandler::GetControlSignals response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_signals));
  return true;
}

void SerialIoHandler_GetControlSignals_ProxyToResponder::Run(
    SerialDeviceControlSignalsPtr in_signals) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialIoHandler_GetControlSignals_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialIoHandler_GetControlSignals_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->signals)::BaseType::BufferWriter
      signals_writer;
  mojo::internal::Serialize<::device::mojom::SerialDeviceControlSignalsDataView>(
      in_signals, buffer, &signals_writer, &serialization_context);
  params->signals.Set(
      signals_writer.is_null() ? nullptr : signals_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->signals.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null signals in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SerialIoHandler::GetControlSignalsCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class SerialIoHandler_SetControlSignals_ProxyToResponder {
 public:
  static SerialIoHandler::SetControlSignalsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SerialIoHandler_SetControlSignals_ProxyToResponder> proxy(
        new SerialIoHandler_SetControlSignals_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SerialIoHandler_SetControlSignals_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SerialIoHandler_SetControlSignals_ProxyToResponder() {
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
  SerialIoHandler_SetControlSignals_ProxyToResponder(
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
        << "SerialIoHandler::SetControlSignalsCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(SerialIoHandler_SetControlSignals_ProxyToResponder);
};

bool SerialIoHandler_SetControlSignals_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "device::mojom::SerialIoHandler::SetControlSignalsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SerialIoHandler_SetControlSignals_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SerialIoHandler_SetControlSignals_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  SerialIoHandler_SetControlSignals_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "SerialIoHandler::SetControlSignals response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void SerialIoHandler_SetControlSignals_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialIoHandler_SetControlSignals_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialIoHandler_SetControlSignals_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SerialIoHandler::SetControlSignalsCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class SerialIoHandler_ConfigurePort_ProxyToResponder {
 public:
  static SerialIoHandler::ConfigurePortCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SerialIoHandler_ConfigurePort_ProxyToResponder> proxy(
        new SerialIoHandler_ConfigurePort_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SerialIoHandler_ConfigurePort_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SerialIoHandler_ConfigurePort_ProxyToResponder() {
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
  SerialIoHandler_ConfigurePort_ProxyToResponder(
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
        << "SerialIoHandler::ConfigurePortCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(SerialIoHandler_ConfigurePort_ProxyToResponder);
};

bool SerialIoHandler_ConfigurePort_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "device::mojom::SerialIoHandler::ConfigurePortCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SerialIoHandler_ConfigurePort_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SerialIoHandler_ConfigurePort_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  SerialIoHandler_ConfigurePort_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "SerialIoHandler::ConfigurePort response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void SerialIoHandler_ConfigurePort_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialIoHandler_ConfigurePort_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialIoHandler_ConfigurePort_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SerialIoHandler::ConfigurePortCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class SerialIoHandler_GetPortInfo_ProxyToResponder {
 public:
  static SerialIoHandler::GetPortInfoCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SerialIoHandler_GetPortInfo_ProxyToResponder> proxy(
        new SerialIoHandler_GetPortInfo_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SerialIoHandler_GetPortInfo_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SerialIoHandler_GetPortInfo_ProxyToResponder() {
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
  SerialIoHandler_GetPortInfo_ProxyToResponder(
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
        << "SerialIoHandler::GetPortInfoCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      SerialConnectionInfoPtr in_info);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(SerialIoHandler_GetPortInfo_ProxyToResponder);
};

bool SerialIoHandler_GetPortInfo_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "device::mojom::SerialIoHandler::GetPortInfoCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SerialIoHandler_GetPortInfo_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SerialIoHandler_GetPortInfo_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  SerialConnectionInfoPtr p_info{};
  SerialIoHandler_GetPortInfo_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadInfo(&p_info))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "SerialIoHandler::GetPortInfo response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_info));
  return true;
}

void SerialIoHandler_GetPortInfo_ProxyToResponder::Run(
    SerialConnectionInfoPtr in_info) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialIoHandler_GetPortInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialIoHandler_GetPortInfo_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->info)::BaseType::BufferWriter
      info_writer;
  mojo::internal::Serialize<::device::mojom::SerialConnectionInfoDataView>(
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
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SerialIoHandler::GetPortInfoCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class SerialIoHandler_SetBreak_ProxyToResponder {
 public:
  static SerialIoHandler::SetBreakCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SerialIoHandler_SetBreak_ProxyToResponder> proxy(
        new SerialIoHandler_SetBreak_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SerialIoHandler_SetBreak_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SerialIoHandler_SetBreak_ProxyToResponder() {
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
  SerialIoHandler_SetBreak_ProxyToResponder(
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
        << "SerialIoHandler::SetBreakCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(SerialIoHandler_SetBreak_ProxyToResponder);
};

bool SerialIoHandler_SetBreak_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "device::mojom::SerialIoHandler::SetBreakCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SerialIoHandler_SetBreak_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SerialIoHandler_SetBreak_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  SerialIoHandler_SetBreak_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "SerialIoHandler::SetBreak response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void SerialIoHandler_SetBreak_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialIoHandler_SetBreak_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialIoHandler_SetBreak_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SerialIoHandler::SetBreakCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class SerialIoHandler_ClearBreak_ProxyToResponder {
 public:
  static SerialIoHandler::ClearBreakCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SerialIoHandler_ClearBreak_ProxyToResponder> proxy(
        new SerialIoHandler_ClearBreak_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SerialIoHandler_ClearBreak_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SerialIoHandler_ClearBreak_ProxyToResponder() {
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
  SerialIoHandler_ClearBreak_ProxyToResponder(
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
        << "SerialIoHandler::ClearBreakCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(SerialIoHandler_ClearBreak_ProxyToResponder);
};

bool SerialIoHandler_ClearBreak_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "device::mojom::SerialIoHandler::ClearBreakCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SerialIoHandler_ClearBreak_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SerialIoHandler_ClearBreak_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  SerialIoHandler_ClearBreak_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "SerialIoHandler::ClearBreak response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void SerialIoHandler_ClearBreak_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSerialIoHandler_ClearBreak_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SerialIoHandler_ClearBreak_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SerialIoHandler::ClearBreakCallback",
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
bool SerialIoHandlerStubDispatch::Accept(
    SerialIoHandler* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSerialIoHandler_Open_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SerialIoHandler::Open",
               "message", message->name());
#endif
      break;
    }
    case internal::kSerialIoHandler_Read_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SerialIoHandler::Read",
               "message", message->name());
#endif
      break;
    }
    case internal::kSerialIoHandler_Write_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SerialIoHandler::Write",
               "message", message->name());
#endif
      break;
    }
    case internal::kSerialIoHandler_CancelRead_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SerialIoHandler::CancelRead",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SerialIoHandler_CancelRead_Params_Data* params =
          reinterpret_cast<internal::SerialIoHandler_CancelRead_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SerialReceiveError p_reason{};
      SerialIoHandler_CancelRead_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadReason(&p_reason))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SerialIoHandler::CancelRead deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CancelRead(
std::move(p_reason));
      return true;
    }
    case internal::kSerialIoHandler_CancelWrite_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SerialIoHandler::CancelWrite",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SerialIoHandler_CancelWrite_Params_Data* params =
          reinterpret_cast<internal::SerialIoHandler_CancelWrite_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SerialSendError p_reason{};
      SerialIoHandler_CancelWrite_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadReason(&p_reason))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SerialIoHandler::CancelWrite deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CancelWrite(
std::move(p_reason));
      return true;
    }
    case internal::kSerialIoHandler_Flush_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SerialIoHandler::Flush",
               "message", message->name());
#endif
      break;
    }
    case internal::kSerialIoHandler_GetControlSignals_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SerialIoHandler::GetControlSignals",
               "message", message->name());
#endif
      break;
    }
    case internal::kSerialIoHandler_SetControlSignals_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SerialIoHandler::SetControlSignals",
               "message", message->name());
#endif
      break;
    }
    case internal::kSerialIoHandler_ConfigurePort_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SerialIoHandler::ConfigurePort",
               "message", message->name());
#endif
      break;
    }
    case internal::kSerialIoHandler_GetPortInfo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SerialIoHandler::GetPortInfo",
               "message", message->name());
#endif
      break;
    }
    case internal::kSerialIoHandler_SetBreak_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SerialIoHandler::SetBreak",
               "message", message->name());
#endif
      break;
    }
    case internal::kSerialIoHandler_ClearBreak_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SerialIoHandler::ClearBreak",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool SerialIoHandlerStubDispatch::AcceptWithResponder(
    SerialIoHandler* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSerialIoHandler_Open_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SerialIoHandler::Open",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::SerialIoHandler_Open_Params_Data* params =
          reinterpret_cast<
              internal::SerialIoHandler_Open_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_port{};
      SerialConnectionOptionsPtr p_options{};
      SerialIoHandler_Open_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPort(&p_port))
        success = false;
      if (!input_data_view.ReadOptions(&p_options))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SerialIoHandler::Open deserializer");
        return false;
      }
      SerialIoHandler::OpenCallback callback =
          SerialIoHandler_Open_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Open(
std::move(p_port), 
std::move(p_options), std::move(callback));
      return true;
    }
    case internal::kSerialIoHandler_Read_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SerialIoHandler::Read",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::SerialIoHandler_Read_Params_Data* params =
          reinterpret_cast<
              internal::SerialIoHandler_Read_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_bytes{};
      SerialIoHandler_Read_ParamsDataView input_data_view(params, &serialization_context);
      
      p_bytes = input_data_view.bytes();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SerialIoHandler::Read deserializer");
        return false;
      }
      SerialIoHandler::ReadCallback callback =
          SerialIoHandler_Read_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Read(
std::move(p_bytes), std::move(callback));
      return true;
    }
    case internal::kSerialIoHandler_Write_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SerialIoHandler::Write",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::SerialIoHandler_Write_Params_Data* params =
          reinterpret_cast<
              internal::SerialIoHandler_Write_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::Vector<uint8_t> p_data{};
      SerialIoHandler_Write_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadData(&p_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SerialIoHandler::Write deserializer");
        return false;
      }
      SerialIoHandler::WriteCallback callback =
          SerialIoHandler_Write_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Write(
std::move(p_data), std::move(callback));
      return true;
    }
    case internal::kSerialIoHandler_CancelRead_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SerialIoHandler::CancelRead",
               "message", message->name());
#endif
      break;
    }
    case internal::kSerialIoHandler_CancelWrite_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SerialIoHandler::CancelWrite",
               "message", message->name());
#endif
      break;
    }
    case internal::kSerialIoHandler_Flush_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SerialIoHandler::Flush",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::SerialIoHandler_Flush_Params_Data* params =
          reinterpret_cast<
              internal::SerialIoHandler_Flush_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SerialIoHandler_Flush_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SerialIoHandler::Flush deserializer");
        return false;
      }
      SerialIoHandler::FlushCallback callback =
          SerialIoHandler_Flush_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Flush(std::move(callback));
      return true;
    }
    case internal::kSerialIoHandler_GetControlSignals_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SerialIoHandler::GetControlSignals",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::SerialIoHandler_GetControlSignals_Params_Data* params =
          reinterpret_cast<
              internal::SerialIoHandler_GetControlSignals_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SerialIoHandler_GetControlSignals_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SerialIoHandler::GetControlSignals deserializer");
        return false;
      }
      SerialIoHandler::GetControlSignalsCallback callback =
          SerialIoHandler_GetControlSignals_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetControlSignals(std::move(callback));
      return true;
    }
    case internal::kSerialIoHandler_SetControlSignals_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SerialIoHandler::SetControlSignals",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::SerialIoHandler_SetControlSignals_Params_Data* params =
          reinterpret_cast<
              internal::SerialIoHandler_SetControlSignals_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SerialHostControlSignalsPtr p_signals{};
      SerialIoHandler_SetControlSignals_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSignals(&p_signals))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SerialIoHandler::SetControlSignals deserializer");
        return false;
      }
      SerialIoHandler::SetControlSignalsCallback callback =
          SerialIoHandler_SetControlSignals_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetControlSignals(
std::move(p_signals), std::move(callback));
      return true;
    }
    case internal::kSerialIoHandler_ConfigurePort_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SerialIoHandler::ConfigurePort",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::SerialIoHandler_ConfigurePort_Params_Data* params =
          reinterpret_cast<
              internal::SerialIoHandler_ConfigurePort_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SerialConnectionOptionsPtr p_options{};
      SerialIoHandler_ConfigurePort_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOptions(&p_options))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SerialIoHandler::ConfigurePort deserializer");
        return false;
      }
      SerialIoHandler::ConfigurePortCallback callback =
          SerialIoHandler_ConfigurePort_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ConfigurePort(
std::move(p_options), std::move(callback));
      return true;
    }
    case internal::kSerialIoHandler_GetPortInfo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SerialIoHandler::GetPortInfo",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::SerialIoHandler_GetPortInfo_Params_Data* params =
          reinterpret_cast<
              internal::SerialIoHandler_GetPortInfo_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SerialIoHandler_GetPortInfo_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SerialIoHandler::GetPortInfo deserializer");
        return false;
      }
      SerialIoHandler::GetPortInfoCallback callback =
          SerialIoHandler_GetPortInfo_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetPortInfo(std::move(callback));
      return true;
    }
    case internal::kSerialIoHandler_SetBreak_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SerialIoHandler::SetBreak",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::SerialIoHandler_SetBreak_Params_Data* params =
          reinterpret_cast<
              internal::SerialIoHandler_SetBreak_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SerialIoHandler_SetBreak_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SerialIoHandler::SetBreak deserializer");
        return false;
      }
      SerialIoHandler::SetBreakCallback callback =
          SerialIoHandler_SetBreak_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetBreak(std::move(callback));
      return true;
    }
    case internal::kSerialIoHandler_ClearBreak_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SerialIoHandler::ClearBreak",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::SerialIoHandler_ClearBreak_Params_Data* params =
          reinterpret_cast<
              internal::SerialIoHandler_ClearBreak_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SerialIoHandler_ClearBreak_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SerialIoHandler::ClearBreak deserializer");
        return false;
      }
      SerialIoHandler::ClearBreakCallback callback =
          SerialIoHandler_ClearBreak_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ClearBreak(std::move(callback));
      return true;
    }
  }
  return false;
}

bool SerialIoHandlerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SerialIoHandler RequestValidator");

  switch (message->header()->name) {
    case internal::kSerialIoHandler_Open_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialIoHandler_Open_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialIoHandler_Read_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialIoHandler_Read_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialIoHandler_Write_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialIoHandler_Write_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialIoHandler_CancelRead_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialIoHandler_CancelRead_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialIoHandler_CancelWrite_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialIoHandler_CancelWrite_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialIoHandler_Flush_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialIoHandler_Flush_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialIoHandler_GetControlSignals_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialIoHandler_GetControlSignals_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialIoHandler_SetControlSignals_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialIoHandler_SetControlSignals_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialIoHandler_ConfigurePort_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialIoHandler_ConfigurePort_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialIoHandler_GetPortInfo_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialIoHandler_GetPortInfo_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialIoHandler_SetBreak_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialIoHandler_SetBreak_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialIoHandler_ClearBreak_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialIoHandler_ClearBreak_Params_Data>(
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

bool SerialIoHandlerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SerialIoHandler ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kSerialIoHandler_Open_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialIoHandler_Open_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialIoHandler_Read_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialIoHandler_Read_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialIoHandler_Write_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialIoHandler_Write_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialIoHandler_Flush_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialIoHandler_Flush_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialIoHandler_GetControlSignals_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialIoHandler_GetControlSignals_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialIoHandler_SetControlSignals_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialIoHandler_SetControlSignals_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialIoHandler_ConfigurePort_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialIoHandler_ConfigurePort_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialIoHandler_GetPortInfo_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialIoHandler_GetPortInfo_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialIoHandler_SetBreak_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialIoHandler_SetBreak_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSerialIoHandler_ClearBreak_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialIoHandler_ClearBreak_ResponseParams_Data>(
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
void SerialIoHandlerInterceptorForTesting::Open(const WTF::String& port, SerialConnectionOptionsPtr options, OpenCallback callback) {
  GetForwardingInterface()->Open(std::move(port), std::move(options), std::move(callback));
}
void SerialIoHandlerInterceptorForTesting::Read(uint32_t bytes, ReadCallback callback) {
  GetForwardingInterface()->Read(std::move(bytes), std::move(callback));
}
void SerialIoHandlerInterceptorForTesting::Write(const WTF::Vector<uint8_t>& data, WriteCallback callback) {
  GetForwardingInterface()->Write(std::move(data), std::move(callback));
}
void SerialIoHandlerInterceptorForTesting::CancelRead(SerialReceiveError reason) {
  GetForwardingInterface()->CancelRead(std::move(reason));
}
void SerialIoHandlerInterceptorForTesting::CancelWrite(SerialSendError reason) {
  GetForwardingInterface()->CancelWrite(std::move(reason));
}
void SerialIoHandlerInterceptorForTesting::Flush(FlushCallback callback) {
  GetForwardingInterface()->Flush(std::move(callback));
}
void SerialIoHandlerInterceptorForTesting::GetControlSignals(GetControlSignalsCallback callback) {
  GetForwardingInterface()->GetControlSignals(std::move(callback));
}
void SerialIoHandlerInterceptorForTesting::SetControlSignals(SerialHostControlSignalsPtr signals, SetControlSignalsCallback callback) {
  GetForwardingInterface()->SetControlSignals(std::move(signals), std::move(callback));
}
void SerialIoHandlerInterceptorForTesting::ConfigurePort(SerialConnectionOptionsPtr options, ConfigurePortCallback callback) {
  GetForwardingInterface()->ConfigurePort(std::move(options), std::move(callback));
}
void SerialIoHandlerInterceptorForTesting::GetPortInfo(GetPortInfoCallback callback) {
  GetForwardingInterface()->GetPortInfo(std::move(callback));
}
void SerialIoHandlerInterceptorForTesting::SetBreak(SetBreakCallback callback) {
  GetForwardingInterface()->SetBreak(std::move(callback));
}
void SerialIoHandlerInterceptorForTesting::ClearBreak(ClearBreakCallback callback) {
  GetForwardingInterface()->ClearBreak(std::move(callback));
}
SerialIoHandlerAsyncWaiter::SerialIoHandlerAsyncWaiter(
    SerialIoHandler* proxy) : proxy_(proxy) {}

SerialIoHandlerAsyncWaiter::~SerialIoHandlerAsyncWaiter() = default;

void SerialIoHandlerAsyncWaiter::Open(
    const WTF::String& port, SerialConnectionOptionsPtr options, bool* out_success) {
  base::RunLoop loop;
  proxy_->Open(std::move(port),std::move(options),
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
void SerialIoHandlerAsyncWaiter::Read(
    uint32_t bytes, WTF::Vector<uint8_t>* out_data, SerialReceiveError* out_error) {
  base::RunLoop loop;
  proxy_->Read(std::move(bytes),
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::Vector<uint8_t>* out_data
,
             SerialReceiveError* out_error
,
             const WTF::Vector<uint8_t>& data,
             SerialReceiveError error) {*out_data = std::move(data);*out_error = std::move(error);
            loop->Quit();
          },
          &loop,
          out_data,
          out_error));
  loop.Run();
}
void SerialIoHandlerAsyncWaiter::Write(
    const WTF::Vector<uint8_t>& data, uint32_t* out_bytes_written, SerialSendError* out_error) {
  base::RunLoop loop;
  proxy_->Write(std::move(data),
      base::BindOnce(
          [](base::RunLoop* loop,
             uint32_t* out_bytes_written
,
             SerialSendError* out_error
,
             uint32_t bytes_written,
             SerialSendError error) {*out_bytes_written = std::move(bytes_written);*out_error = std::move(error);
            loop->Quit();
          },
          &loop,
          out_bytes_written,
          out_error));
  loop.Run();
}
void SerialIoHandlerAsyncWaiter::Flush(
    bool* out_success) {
  base::RunLoop loop;
  proxy_->Flush(
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
void SerialIoHandlerAsyncWaiter::GetControlSignals(
    SerialDeviceControlSignalsPtr* out_signals) {
  base::RunLoop loop;
  proxy_->GetControlSignals(
      base::BindOnce(
          [](base::RunLoop* loop,
             SerialDeviceControlSignalsPtr* out_signals
,
             SerialDeviceControlSignalsPtr signals) {*out_signals = std::move(signals);
            loop->Quit();
          },
          &loop,
          out_signals));
  loop.Run();
}
void SerialIoHandlerAsyncWaiter::SetControlSignals(
    SerialHostControlSignalsPtr signals, bool* out_success) {
  base::RunLoop loop;
  proxy_->SetControlSignals(std::move(signals),
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
void SerialIoHandlerAsyncWaiter::ConfigurePort(
    SerialConnectionOptionsPtr options, bool* out_success) {
  base::RunLoop loop;
  proxy_->ConfigurePort(std::move(options),
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
void SerialIoHandlerAsyncWaiter::GetPortInfo(
    SerialConnectionInfoPtr* out_info) {
  base::RunLoop loop;
  proxy_->GetPortInfo(
      base::BindOnce(
          [](base::RunLoop* loop,
             SerialConnectionInfoPtr* out_info
,
             SerialConnectionInfoPtr info) {*out_info = std::move(info);
            loop->Quit();
          },
          &loop,
          out_info));
  loop.Run();
}
void SerialIoHandlerAsyncWaiter::SetBreak(
    bool* out_success) {
  base::RunLoop loop;
  proxy_->SetBreak(
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
void SerialIoHandlerAsyncWaiter::ClearBreak(
    bool* out_success) {
  base::RunLoop loop;
  proxy_->ClearBreak(
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

}  // namespace blink
}  // namespace mojom
}  // namespace device

namespace mojo {


// static
bool StructTraits<::device::mojom::blink::SerialDeviceInfo::DataView, ::device::mojom::blink::SerialDeviceInfoPtr>::Read(
    ::device::mojom::blink::SerialDeviceInfo::DataView input,
    ::device::mojom::blink::SerialDeviceInfoPtr* output) {
  bool success = true;
  ::device::mojom::blink::SerialDeviceInfoPtr result(::device::mojom::blink::SerialDeviceInfo::New());
  
      if (!input.ReadPath(&result->path))
        success = false;
      result->vendor_id = input.vendor_id();
      result->has_vendor_id = input.has_vendor_id();
      result->product_id = input.product_id();
      result->has_product_id = input.has_product_id();
      if (!input.ReadDisplayName(&result->display_name))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::SerialConnectionOptions::DataView, ::device::mojom::blink::SerialConnectionOptionsPtr>::Read(
    ::device::mojom::blink::SerialConnectionOptions::DataView input,
    ::device::mojom::blink::SerialConnectionOptionsPtr* output) {
  bool success = true;
  ::device::mojom::blink::SerialConnectionOptionsPtr result(::device::mojom::blink::SerialConnectionOptions::New());
  
      result->bitrate = input.bitrate();
      if (!input.ReadDataBits(&result->data_bits))
        success = false;
      if (!input.ReadParityBit(&result->parity_bit))
        success = false;
      if (!input.ReadStopBits(&result->stop_bits))
        success = false;
      result->cts_flow_control = input.cts_flow_control();
      result->has_cts_flow_control = input.has_cts_flow_control();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::SerialConnectionInfo::DataView, ::device::mojom::blink::SerialConnectionInfoPtr>::Read(
    ::device::mojom::blink::SerialConnectionInfo::DataView input,
    ::device::mojom::blink::SerialConnectionInfoPtr* output) {
  bool success = true;
  ::device::mojom::blink::SerialConnectionInfoPtr result(::device::mojom::blink::SerialConnectionInfo::New());
  
      result->bitrate = input.bitrate();
      if (!input.ReadDataBits(&result->data_bits))
        success = false;
      if (!input.ReadParityBit(&result->parity_bit))
        success = false;
      if (!input.ReadStopBits(&result->stop_bits))
        success = false;
      result->cts_flow_control = input.cts_flow_control();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::SerialHostControlSignals::DataView, ::device::mojom::blink::SerialHostControlSignalsPtr>::Read(
    ::device::mojom::blink::SerialHostControlSignals::DataView input,
    ::device::mojom::blink::SerialHostControlSignalsPtr* output) {
  bool success = true;
  ::device::mojom::blink::SerialHostControlSignalsPtr result(::device::mojom::blink::SerialHostControlSignals::New());
  
      result->dtr = input.dtr();
      result->has_dtr = input.has_dtr();
      result->rts = input.rts();
      result->has_rts = input.has_rts();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::SerialDeviceControlSignals::DataView, ::device::mojom::blink::SerialDeviceControlSignalsPtr>::Read(
    ::device::mojom::blink::SerialDeviceControlSignals::DataView input,
    ::device::mojom::blink::SerialDeviceControlSignalsPtr* output) {
  bool success = true;
  ::device::mojom::blink::SerialDeviceControlSignalsPtr result(::device::mojom::blink::SerialDeviceControlSignals::New());
  
      result->dcd = input.dcd();
      result->cts = input.cts();
      result->ri = input.ri();
      result->dsr = input.dsr();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif