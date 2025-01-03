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

#include "ui/display/mojo/native_display_delegate.mojom.h"

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

#include "ui/display/mojo/native_display_delegate.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "ui/display/mojo/display_constants_struct_traits.h"
#include "ui/display/mojo/display_mode_struct_traits.h"
#include "ui/display/mojo/display_snapshot_struct_traits.h"
#include "ui/display/mojo/gamma_ramp_rgb_entry_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/gfx/ipc/color/gfx_param_traits.h"
namespace display {
namespace mojom {
const char NativeDisplayObserver::Name_[] = "display.mojom.NativeDisplayObserver";

NativeDisplayObserverProxy::NativeDisplayObserverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void NativeDisplayObserverProxy::OnConfigurationChanged(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "display::mojom::NativeDisplayObserver::OnConfigurationChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeDisplayObserver_OnConfigurationChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::display::mojom::internal::NativeDisplayObserver_OnConfigurationChanged_Params_Data::BufferWriter
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
bool NativeDisplayObserverStubDispatch::Accept(
    NativeDisplayObserver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kNativeDisplayObserver_OnConfigurationChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::NativeDisplayObserver::OnConfigurationChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NativeDisplayObserver_OnConfigurationChanged_Params_Data* params =
          reinterpret_cast<internal::NativeDisplayObserver_OnConfigurationChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NativeDisplayObserver_OnConfigurationChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NativeDisplayObserver::OnConfigurationChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnConfigurationChanged();
      return true;
    }
  }
  return false;
}

// static
bool NativeDisplayObserverStubDispatch::AcceptWithResponder(
    NativeDisplayObserver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kNativeDisplayObserver_OnConfigurationChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::NativeDisplayObserver::OnConfigurationChanged",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool NativeDisplayObserverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NativeDisplayObserver RequestValidator");

  switch (message->header()->name) {
    case internal::kNativeDisplayObserver_OnConfigurationChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeDisplayObserver_OnConfigurationChanged_Params_Data>(
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

void NativeDisplayObserverInterceptorForTesting::OnConfigurationChanged() {
  GetForwardingInterface()->OnConfigurationChanged();
}
NativeDisplayObserverAsyncWaiter::NativeDisplayObserverAsyncWaiter(
    NativeDisplayObserver* proxy) : proxy_(proxy) {}

NativeDisplayObserverAsyncWaiter::~NativeDisplayObserverAsyncWaiter() = default;


const char NativeDisplayDelegate::Name_[] = "display.mojom.NativeDisplayDelegate";
bool NativeDisplayDelegate::Initialize(NativeDisplayObserverPtr observer, std::vector<std::unique_ptr<display::DisplaySnapshot>>* out_snapshots) {
  NOTREACHED();
  return false;
}
class NativeDisplayDelegate_Initialize_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  NativeDisplayDelegate_Initialize_HandleSyncResponse(
      bool* result, std::vector<std::unique_ptr<display::DisplaySnapshot>>* out_snapshots)
      : result_(result), out_snapshots_(out_snapshots) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  std::vector<std::unique_ptr<display::DisplaySnapshot>>* out_snapshots_;DISALLOW_COPY_AND_ASSIGN(NativeDisplayDelegate_Initialize_HandleSyncResponse);
};

class NativeDisplayDelegate_Initialize_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NativeDisplayDelegate_Initialize_ForwardToCallback(
      NativeDisplayDelegate::InitializeCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NativeDisplayDelegate::InitializeCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NativeDisplayDelegate_Initialize_ForwardToCallback);
};

class NativeDisplayDelegate_TakeDisplayControl_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NativeDisplayDelegate_TakeDisplayControl_ForwardToCallback(
      NativeDisplayDelegate::TakeDisplayControlCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NativeDisplayDelegate::TakeDisplayControlCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NativeDisplayDelegate_TakeDisplayControl_ForwardToCallback);
};

class NativeDisplayDelegate_RelinquishDisplayControl_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NativeDisplayDelegate_RelinquishDisplayControl_ForwardToCallback(
      NativeDisplayDelegate::RelinquishDisplayControlCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NativeDisplayDelegate::RelinquishDisplayControlCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NativeDisplayDelegate_RelinquishDisplayControl_ForwardToCallback);
};

class NativeDisplayDelegate_GetDisplays_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NativeDisplayDelegate_GetDisplays_ForwardToCallback(
      NativeDisplayDelegate::GetDisplaysCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NativeDisplayDelegate::GetDisplaysCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NativeDisplayDelegate_GetDisplays_ForwardToCallback);
};

class NativeDisplayDelegate_Configure_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NativeDisplayDelegate_Configure_ForwardToCallback(
      NativeDisplayDelegate::ConfigureCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NativeDisplayDelegate::ConfigureCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NativeDisplayDelegate_Configure_ForwardToCallback);
};

class NativeDisplayDelegate_GetHDCPState_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NativeDisplayDelegate_GetHDCPState_ForwardToCallback(
      NativeDisplayDelegate::GetHDCPStateCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NativeDisplayDelegate::GetHDCPStateCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NativeDisplayDelegate_GetHDCPState_ForwardToCallback);
};

class NativeDisplayDelegate_SetHDCPState_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NativeDisplayDelegate_SetHDCPState_ForwardToCallback(
      NativeDisplayDelegate::SetHDCPStateCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NativeDisplayDelegate::SetHDCPStateCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NativeDisplayDelegate_SetHDCPState_ForwardToCallback);
};

NativeDisplayDelegateProxy::NativeDisplayDelegateProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
bool NativeDisplayDelegateProxy::Initialize(
    NativeDisplayObserverPtr param_observer, std::vector<std::unique_ptr<display::DisplaySnapshot>>* out_param_snapshots) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "display::mojom::NativeDisplayDelegate::Initialize");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeDisplayDelegate_Initialize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::display::mojom::internal::NativeDisplayDelegate_Initialize_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::display::mojom::NativeDisplayObserverPtrDataView>(
      param_observer, &params->observer, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->observer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid observer in NativeDisplayDelegate.Initialize request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NativeDisplayDelegate_Initialize_HandleSyncResponse(
          &result, out_param_snapshots));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void NativeDisplayDelegateProxy::Initialize(
    NativeDisplayObserverPtr in_observer, InitializeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "display::mojom::NativeDisplayDelegate::Initialize");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeDisplayDelegate_Initialize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::display::mojom::internal::NativeDisplayDelegate_Initialize_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::display::mojom::NativeDisplayObserverPtrDataView>(
      in_observer, &params->observer, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->observer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid observer in NativeDisplayDelegate.Initialize request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NativeDisplayDelegate_Initialize_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NativeDisplayDelegateProxy::TakeDisplayControl(
    TakeDisplayControlCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "display::mojom::NativeDisplayDelegate::TakeDisplayControl");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeDisplayDelegate_TakeDisplayControl_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::display::mojom::internal::NativeDisplayDelegate_TakeDisplayControl_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NativeDisplayDelegate_TakeDisplayControl_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NativeDisplayDelegateProxy::RelinquishDisplayControl(
    RelinquishDisplayControlCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "display::mojom::NativeDisplayDelegate::RelinquishDisplayControl");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeDisplayDelegate_RelinquishDisplayControl_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::display::mojom::internal::NativeDisplayDelegate_RelinquishDisplayControl_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NativeDisplayDelegate_RelinquishDisplayControl_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NativeDisplayDelegateProxy::GetDisplays(
    GetDisplaysCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "display::mojom::NativeDisplayDelegate::GetDisplays");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeDisplayDelegate_GetDisplays_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::display::mojom::internal::NativeDisplayDelegate_GetDisplays_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NativeDisplayDelegate_GetDisplays_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NativeDisplayDelegateProxy::Configure(
    int64_t in_display_id, base::Optional<std::unique_ptr<display::DisplayMode>> in_mode, const gfx::Point& in_origin, ConfigureCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "display::mojom::NativeDisplayDelegate::Configure");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeDisplayDelegate_Configure_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::display::mojom::internal::NativeDisplayDelegate_Configure_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->display_id = in_display_id;
  typename decltype(params->mode)::BaseType::BufferWriter
      mode_writer;
  mojo::internal::Serialize<::display::mojom::DisplayModeDataView>(
      in_mode, buffer, &mode_writer, &serialization_context);
  params->mode.Set(
      mode_writer.is_null() ? nullptr : mode_writer.data());
  typename decltype(params->origin)::BaseType::BufferWriter
      origin_writer;
  mojo::internal::Serialize<::gfx::mojom::PointDataView>(
      in_origin, buffer, &origin_writer, &serialization_context);
  params->origin.Set(
      origin_writer.is_null() ? nullptr : origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in NativeDisplayDelegate.Configure request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NativeDisplayDelegate_Configure_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NativeDisplayDelegateProxy::GetHDCPState(
    int64_t in_display_id, GetHDCPStateCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "display::mojom::NativeDisplayDelegate::GetHDCPState");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeDisplayDelegate_GetHDCPState_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::display::mojom::internal::NativeDisplayDelegate_GetHDCPState_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->display_id = in_display_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NativeDisplayDelegate_GetHDCPState_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NativeDisplayDelegateProxy::SetHDCPState(
    int64_t in_display_id, display::HDCPState in_state, SetHDCPStateCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "display::mojom::NativeDisplayDelegate::SetHDCPState");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeDisplayDelegate_SetHDCPState_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::display::mojom::internal::NativeDisplayDelegate_SetHDCPState_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->display_id = in_display_id;
  mojo::internal::Serialize<::display::mojom::HDCPState>(
      in_state, &params->state);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NativeDisplayDelegate_SetHDCPState_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NativeDisplayDelegateProxy::SetColorCorrection(
    int64_t in_display_id, const std::vector<display::GammaRampRGBEntry>& in_degamma_lut, const std::vector<display::GammaRampRGBEntry>& in_gamma_lut, const std::vector<float>& in_correction_matrix) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "display::mojom::NativeDisplayDelegate::SetColorCorrection");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeDisplayDelegate_SetColorCorrection_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::display::mojom::internal::NativeDisplayDelegate_SetColorCorrection_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->display_id = in_display_id;
  typename decltype(params->degamma_lut)::BaseType::BufferWriter
      degamma_lut_writer;
  const mojo::internal::ContainerValidateParams degamma_lut_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::display::mojom::GammaRampRGBEntryDataView>>(
      in_degamma_lut, buffer, &degamma_lut_writer, &degamma_lut_validate_params,
      &serialization_context);
  params->degamma_lut.Set(
      degamma_lut_writer.is_null() ? nullptr : degamma_lut_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->degamma_lut.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null degamma_lut in NativeDisplayDelegate.SetColorCorrection request");
  typename decltype(params->gamma_lut)::BaseType::BufferWriter
      gamma_lut_writer;
  const mojo::internal::ContainerValidateParams gamma_lut_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::display::mojom::GammaRampRGBEntryDataView>>(
      in_gamma_lut, buffer, &gamma_lut_writer, &gamma_lut_validate_params,
      &serialization_context);
  params->gamma_lut.Set(
      gamma_lut_writer.is_null() ? nullptr : gamma_lut_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->gamma_lut.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null gamma_lut in NativeDisplayDelegate.SetColorCorrection request");
  typename decltype(params->correction_matrix)::BaseType::BufferWriter
      correction_matrix_writer;
  const mojo::internal::ContainerValidateParams correction_matrix_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<float>>(
      in_correction_matrix, buffer, &correction_matrix_writer, &correction_matrix_validate_params,
      &serialization_context);
  params->correction_matrix.Set(
      correction_matrix_writer.is_null() ? nullptr : correction_matrix_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->correction_matrix.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null correction_matrix in NativeDisplayDelegate.SetColorCorrection request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class NativeDisplayDelegate_Initialize_ProxyToResponder {
 public:
  static NativeDisplayDelegate::InitializeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NativeDisplayDelegate_Initialize_ProxyToResponder> proxy(
        new NativeDisplayDelegate_Initialize_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NativeDisplayDelegate_Initialize_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NativeDisplayDelegate_Initialize_ProxyToResponder() {
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
  NativeDisplayDelegate_Initialize_ProxyToResponder(
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
        << "NativeDisplayDelegate::InitializeCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      std::vector<std::unique_ptr<display::DisplaySnapshot>> in_snapshots);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NativeDisplayDelegate_Initialize_ProxyToResponder);
};

bool NativeDisplayDelegate_Initialize_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "display::mojom::NativeDisplayDelegate::InitializeCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NativeDisplayDelegate_Initialize_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NativeDisplayDelegate_Initialize_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<std::unique_ptr<display::DisplaySnapshot>> p_snapshots{};
  NativeDisplayDelegate_Initialize_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadSnapshots(&p_snapshots))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NativeDisplayDelegate::Initialize response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_snapshots));
  return true;
}

void NativeDisplayDelegate_Initialize_ProxyToResponder::Run(
    std::vector<std::unique_ptr<display::DisplaySnapshot>> in_snapshots) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeDisplayDelegate_Initialize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::display::mojom::internal::NativeDisplayDelegate_Initialize_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->snapshots)::BaseType::BufferWriter
      snapshots_writer;
  const mojo::internal::ContainerValidateParams snapshots_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::display::mojom::DisplaySnapshotDataView>>(
      in_snapshots, buffer, &snapshots_writer, &snapshots_validate_params,
      &serialization_context);
  params->snapshots.Set(
      snapshots_writer.is_null() ? nullptr : snapshots_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->snapshots.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null snapshots in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::NativeDisplayDelegate::InitializeCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool NativeDisplayDelegate_Initialize_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::NativeDisplayDelegate_Initialize_ResponseParams_Data* params =
      reinterpret_cast<internal::NativeDisplayDelegate_Initialize_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<std::unique_ptr<display::DisplaySnapshot>> p_snapshots{};
  NativeDisplayDelegate_Initialize_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadSnapshots(&p_snapshots))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NativeDisplayDelegate::Initialize response deserializer");
    return false;
  }
  *out_snapshots_ = std::move(p_snapshots);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class NativeDisplayDelegate_TakeDisplayControl_ProxyToResponder {
 public:
  static NativeDisplayDelegate::TakeDisplayControlCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NativeDisplayDelegate_TakeDisplayControl_ProxyToResponder> proxy(
        new NativeDisplayDelegate_TakeDisplayControl_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NativeDisplayDelegate_TakeDisplayControl_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NativeDisplayDelegate_TakeDisplayControl_ProxyToResponder() {
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
  NativeDisplayDelegate_TakeDisplayControl_ProxyToResponder(
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
        << "NativeDisplayDelegate::TakeDisplayControlCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NativeDisplayDelegate_TakeDisplayControl_ProxyToResponder);
};

bool NativeDisplayDelegate_TakeDisplayControl_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "display::mojom::NativeDisplayDelegate::TakeDisplayControlCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NativeDisplayDelegate_TakeDisplayControl_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NativeDisplayDelegate_TakeDisplayControl_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_result{};
  NativeDisplayDelegate_TakeDisplayControl_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NativeDisplayDelegate::TakeDisplayControl response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void NativeDisplayDelegate_TakeDisplayControl_ProxyToResponder::Run(
    bool in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeDisplayDelegate_TakeDisplayControl_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::display::mojom::internal::NativeDisplayDelegate_TakeDisplayControl_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = in_result;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::NativeDisplayDelegate::TakeDisplayControlCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NativeDisplayDelegate_RelinquishDisplayControl_ProxyToResponder {
 public:
  static NativeDisplayDelegate::RelinquishDisplayControlCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NativeDisplayDelegate_RelinquishDisplayControl_ProxyToResponder> proxy(
        new NativeDisplayDelegate_RelinquishDisplayControl_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NativeDisplayDelegate_RelinquishDisplayControl_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NativeDisplayDelegate_RelinquishDisplayControl_ProxyToResponder() {
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
  NativeDisplayDelegate_RelinquishDisplayControl_ProxyToResponder(
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
        << "NativeDisplayDelegate::RelinquishDisplayControlCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NativeDisplayDelegate_RelinquishDisplayControl_ProxyToResponder);
};

bool NativeDisplayDelegate_RelinquishDisplayControl_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "display::mojom::NativeDisplayDelegate::RelinquishDisplayControlCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NativeDisplayDelegate_RelinquishDisplayControl_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NativeDisplayDelegate_RelinquishDisplayControl_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_result{};
  NativeDisplayDelegate_RelinquishDisplayControl_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NativeDisplayDelegate::RelinquishDisplayControl response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void NativeDisplayDelegate_RelinquishDisplayControl_ProxyToResponder::Run(
    bool in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeDisplayDelegate_RelinquishDisplayControl_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::display::mojom::internal::NativeDisplayDelegate_RelinquishDisplayControl_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = in_result;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::NativeDisplayDelegate::RelinquishDisplayControlCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NativeDisplayDelegate_GetDisplays_ProxyToResponder {
 public:
  static NativeDisplayDelegate::GetDisplaysCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NativeDisplayDelegate_GetDisplays_ProxyToResponder> proxy(
        new NativeDisplayDelegate_GetDisplays_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NativeDisplayDelegate_GetDisplays_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NativeDisplayDelegate_GetDisplays_ProxyToResponder() {
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
  NativeDisplayDelegate_GetDisplays_ProxyToResponder(
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
        << "NativeDisplayDelegate::GetDisplaysCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      std::vector<std::unique_ptr<display::DisplaySnapshot>> in_snapshots);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NativeDisplayDelegate_GetDisplays_ProxyToResponder);
};

bool NativeDisplayDelegate_GetDisplays_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "display::mojom::NativeDisplayDelegate::GetDisplaysCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NativeDisplayDelegate_GetDisplays_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NativeDisplayDelegate_GetDisplays_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<std::unique_ptr<display::DisplaySnapshot>> p_snapshots{};
  NativeDisplayDelegate_GetDisplays_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadSnapshots(&p_snapshots))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NativeDisplayDelegate::GetDisplays response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_snapshots));
  return true;
}

void NativeDisplayDelegate_GetDisplays_ProxyToResponder::Run(
    std::vector<std::unique_ptr<display::DisplaySnapshot>> in_snapshots) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeDisplayDelegate_GetDisplays_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::display::mojom::internal::NativeDisplayDelegate_GetDisplays_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->snapshots)::BaseType::BufferWriter
      snapshots_writer;
  const mojo::internal::ContainerValidateParams snapshots_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::display::mojom::DisplaySnapshotDataView>>(
      in_snapshots, buffer, &snapshots_writer, &snapshots_validate_params,
      &serialization_context);
  params->snapshots.Set(
      snapshots_writer.is_null() ? nullptr : snapshots_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->snapshots.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null snapshots in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::NativeDisplayDelegate::GetDisplaysCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NativeDisplayDelegate_Configure_ProxyToResponder {
 public:
  static NativeDisplayDelegate::ConfigureCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NativeDisplayDelegate_Configure_ProxyToResponder> proxy(
        new NativeDisplayDelegate_Configure_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NativeDisplayDelegate_Configure_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NativeDisplayDelegate_Configure_ProxyToResponder() {
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
  NativeDisplayDelegate_Configure_ProxyToResponder(
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
        << "NativeDisplayDelegate::ConfigureCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NativeDisplayDelegate_Configure_ProxyToResponder);
};

bool NativeDisplayDelegate_Configure_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "display::mojom::NativeDisplayDelegate::ConfigureCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NativeDisplayDelegate_Configure_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NativeDisplayDelegate_Configure_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_status{};
  NativeDisplayDelegate_Configure_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_status = input_data_view.status();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NativeDisplayDelegate::Configure response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void NativeDisplayDelegate_Configure_ProxyToResponder::Run(
    bool in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeDisplayDelegate_Configure_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::display::mojom::internal::NativeDisplayDelegate_Configure_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->status = in_status;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::NativeDisplayDelegate::ConfigureCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NativeDisplayDelegate_GetHDCPState_ProxyToResponder {
 public:
  static NativeDisplayDelegate::GetHDCPStateCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NativeDisplayDelegate_GetHDCPState_ProxyToResponder> proxy(
        new NativeDisplayDelegate_GetHDCPState_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NativeDisplayDelegate_GetHDCPState_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NativeDisplayDelegate_GetHDCPState_ProxyToResponder() {
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
  NativeDisplayDelegate_GetHDCPState_ProxyToResponder(
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
        << "NativeDisplayDelegate::GetHDCPStateCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_status, display::HDCPState in_state);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NativeDisplayDelegate_GetHDCPState_ProxyToResponder);
};

bool NativeDisplayDelegate_GetHDCPState_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "display::mojom::NativeDisplayDelegate::GetHDCPStateCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NativeDisplayDelegate_GetHDCPState_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NativeDisplayDelegate_GetHDCPState_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_status{};
  display::HDCPState p_state{};
  NativeDisplayDelegate_GetHDCPState_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_status = input_data_view.status();
  if (!input_data_view.ReadState(&p_state))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NativeDisplayDelegate::GetHDCPState response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_state));
  return true;
}

void NativeDisplayDelegate_GetHDCPState_ProxyToResponder::Run(
    bool in_status, display::HDCPState in_state) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeDisplayDelegate_GetHDCPState_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::display::mojom::internal::NativeDisplayDelegate_GetHDCPState_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->status = in_status;
  mojo::internal::Serialize<::display::mojom::HDCPState>(
      in_state, &params->state);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::NativeDisplayDelegate::GetHDCPStateCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NativeDisplayDelegate_SetHDCPState_ProxyToResponder {
 public:
  static NativeDisplayDelegate::SetHDCPStateCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NativeDisplayDelegate_SetHDCPState_ProxyToResponder> proxy(
        new NativeDisplayDelegate_SetHDCPState_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NativeDisplayDelegate_SetHDCPState_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NativeDisplayDelegate_SetHDCPState_ProxyToResponder() {
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
  NativeDisplayDelegate_SetHDCPState_ProxyToResponder(
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
        << "NativeDisplayDelegate::SetHDCPStateCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NativeDisplayDelegate_SetHDCPState_ProxyToResponder);
};

bool NativeDisplayDelegate_SetHDCPState_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "display::mojom::NativeDisplayDelegate::SetHDCPStateCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NativeDisplayDelegate_SetHDCPState_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NativeDisplayDelegate_SetHDCPState_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_status{};
  NativeDisplayDelegate_SetHDCPState_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_status = input_data_view.status();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NativeDisplayDelegate::SetHDCPState response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void NativeDisplayDelegate_SetHDCPState_ProxyToResponder::Run(
    bool in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeDisplayDelegate_SetHDCPState_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::display::mojom::internal::NativeDisplayDelegate_SetHDCPState_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->status = in_status;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::NativeDisplayDelegate::SetHDCPStateCallback",
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
bool NativeDisplayDelegateStubDispatch::Accept(
    NativeDisplayDelegate* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kNativeDisplayDelegate_Initialize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::NativeDisplayDelegate::Initialize",
               "message", message->name());
#endif
      break;
    }
    case internal::kNativeDisplayDelegate_TakeDisplayControl_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::NativeDisplayDelegate::TakeDisplayControl",
               "message", message->name());
#endif
      break;
    }
    case internal::kNativeDisplayDelegate_RelinquishDisplayControl_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::NativeDisplayDelegate::RelinquishDisplayControl",
               "message", message->name());
#endif
      break;
    }
    case internal::kNativeDisplayDelegate_GetDisplays_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::NativeDisplayDelegate::GetDisplays",
               "message", message->name());
#endif
      break;
    }
    case internal::kNativeDisplayDelegate_Configure_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::NativeDisplayDelegate::Configure",
               "message", message->name());
#endif
      break;
    }
    case internal::kNativeDisplayDelegate_GetHDCPState_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::NativeDisplayDelegate::GetHDCPState",
               "message", message->name());
#endif
      break;
    }
    case internal::kNativeDisplayDelegate_SetHDCPState_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::NativeDisplayDelegate::SetHDCPState",
               "message", message->name());
#endif
      break;
    }
    case internal::kNativeDisplayDelegate_SetColorCorrection_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::NativeDisplayDelegate::SetColorCorrection",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NativeDisplayDelegate_SetColorCorrection_Params_Data* params =
          reinterpret_cast<internal::NativeDisplayDelegate_SetColorCorrection_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_display_id{};
      std::vector<display::GammaRampRGBEntry> p_degamma_lut{};
      std::vector<display::GammaRampRGBEntry> p_gamma_lut{};
      std::vector<float> p_correction_matrix{};
      NativeDisplayDelegate_SetColorCorrection_ParamsDataView input_data_view(params, &serialization_context);
      
      p_display_id = input_data_view.display_id();
      if (!input_data_view.ReadDegammaLut(&p_degamma_lut))
        success = false;
      if (!input_data_view.ReadGammaLut(&p_gamma_lut))
        success = false;
      if (!input_data_view.ReadCorrectionMatrix(&p_correction_matrix))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NativeDisplayDelegate::SetColorCorrection deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetColorCorrection(
std::move(p_display_id), 
std::move(p_degamma_lut), 
std::move(p_gamma_lut), 
std::move(p_correction_matrix));
      return true;
    }
  }
  return false;
}

// static
bool NativeDisplayDelegateStubDispatch::AcceptWithResponder(
    NativeDisplayDelegate* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kNativeDisplayDelegate_Initialize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::NativeDisplayDelegate::Initialize",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::NativeDisplayDelegate_Initialize_Params_Data* params =
          reinterpret_cast<
              internal::NativeDisplayDelegate_Initialize_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NativeDisplayObserverPtr p_observer{};
      NativeDisplayDelegate_Initialize_ParamsDataView input_data_view(params, &serialization_context);
      
      p_observer =
          input_data_view.TakeObserver<decltype(p_observer)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NativeDisplayDelegate::Initialize deserializer");
        return false;
      }
      NativeDisplayDelegate::InitializeCallback callback =
          NativeDisplayDelegate_Initialize_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Initialize(
std::move(p_observer), std::move(callback));
      return true;
    }
    case internal::kNativeDisplayDelegate_TakeDisplayControl_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::NativeDisplayDelegate::TakeDisplayControl",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::NativeDisplayDelegate_TakeDisplayControl_Params_Data* params =
          reinterpret_cast<
              internal::NativeDisplayDelegate_TakeDisplayControl_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NativeDisplayDelegate_TakeDisplayControl_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NativeDisplayDelegate::TakeDisplayControl deserializer");
        return false;
      }
      NativeDisplayDelegate::TakeDisplayControlCallback callback =
          NativeDisplayDelegate_TakeDisplayControl_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->TakeDisplayControl(std::move(callback));
      return true;
    }
    case internal::kNativeDisplayDelegate_RelinquishDisplayControl_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::NativeDisplayDelegate::RelinquishDisplayControl",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::NativeDisplayDelegate_RelinquishDisplayControl_Params_Data* params =
          reinterpret_cast<
              internal::NativeDisplayDelegate_RelinquishDisplayControl_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NativeDisplayDelegate_RelinquishDisplayControl_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NativeDisplayDelegate::RelinquishDisplayControl deserializer");
        return false;
      }
      NativeDisplayDelegate::RelinquishDisplayControlCallback callback =
          NativeDisplayDelegate_RelinquishDisplayControl_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RelinquishDisplayControl(std::move(callback));
      return true;
    }
    case internal::kNativeDisplayDelegate_GetDisplays_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::NativeDisplayDelegate::GetDisplays",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::NativeDisplayDelegate_GetDisplays_Params_Data* params =
          reinterpret_cast<
              internal::NativeDisplayDelegate_GetDisplays_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NativeDisplayDelegate_GetDisplays_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NativeDisplayDelegate::GetDisplays deserializer");
        return false;
      }
      NativeDisplayDelegate::GetDisplaysCallback callback =
          NativeDisplayDelegate_GetDisplays_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetDisplays(std::move(callback));
      return true;
    }
    case internal::kNativeDisplayDelegate_Configure_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::NativeDisplayDelegate::Configure",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::NativeDisplayDelegate_Configure_Params_Data* params =
          reinterpret_cast<
              internal::NativeDisplayDelegate_Configure_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_display_id{};
      base::Optional<std::unique_ptr<display::DisplayMode>> p_mode{};
      gfx::Point p_origin{};
      NativeDisplayDelegate_Configure_ParamsDataView input_data_view(params, &serialization_context);
      
      p_display_id = input_data_view.display_id();
      if (!input_data_view.ReadMode(&p_mode))
        success = false;
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NativeDisplayDelegate::Configure deserializer");
        return false;
      }
      NativeDisplayDelegate::ConfigureCallback callback =
          NativeDisplayDelegate_Configure_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Configure(
std::move(p_display_id), 
std::move(p_mode), 
std::move(p_origin), std::move(callback));
      return true;
    }
    case internal::kNativeDisplayDelegate_GetHDCPState_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::NativeDisplayDelegate::GetHDCPState",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::NativeDisplayDelegate_GetHDCPState_Params_Data* params =
          reinterpret_cast<
              internal::NativeDisplayDelegate_GetHDCPState_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_display_id{};
      NativeDisplayDelegate_GetHDCPState_ParamsDataView input_data_view(params, &serialization_context);
      
      p_display_id = input_data_view.display_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NativeDisplayDelegate::GetHDCPState deserializer");
        return false;
      }
      NativeDisplayDelegate::GetHDCPStateCallback callback =
          NativeDisplayDelegate_GetHDCPState_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetHDCPState(
std::move(p_display_id), std::move(callback));
      return true;
    }
    case internal::kNativeDisplayDelegate_SetHDCPState_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::NativeDisplayDelegate::SetHDCPState",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::NativeDisplayDelegate_SetHDCPState_Params_Data* params =
          reinterpret_cast<
              internal::NativeDisplayDelegate_SetHDCPState_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_display_id{};
      display::HDCPState p_state{};
      NativeDisplayDelegate_SetHDCPState_ParamsDataView input_data_view(params, &serialization_context);
      
      p_display_id = input_data_view.display_id();
      if (!input_data_view.ReadState(&p_state))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NativeDisplayDelegate::SetHDCPState deserializer");
        return false;
      }
      NativeDisplayDelegate::SetHDCPStateCallback callback =
          NativeDisplayDelegate_SetHDCPState_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetHDCPState(
std::move(p_display_id), 
std::move(p_state), std::move(callback));
      return true;
    }
    case internal::kNativeDisplayDelegate_SetColorCorrection_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::NativeDisplayDelegate::SetColorCorrection",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool NativeDisplayDelegateRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NativeDisplayDelegate RequestValidator");

  switch (message->header()->name) {
    case internal::kNativeDisplayDelegate_Initialize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeDisplayDelegate_Initialize_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNativeDisplayDelegate_TakeDisplayControl_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeDisplayDelegate_TakeDisplayControl_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNativeDisplayDelegate_RelinquishDisplayControl_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeDisplayDelegate_RelinquishDisplayControl_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNativeDisplayDelegate_GetDisplays_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeDisplayDelegate_GetDisplays_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNativeDisplayDelegate_Configure_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeDisplayDelegate_Configure_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNativeDisplayDelegate_GetHDCPState_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeDisplayDelegate_GetHDCPState_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNativeDisplayDelegate_SetHDCPState_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeDisplayDelegate_SetHDCPState_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNativeDisplayDelegate_SetColorCorrection_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeDisplayDelegate_SetColorCorrection_Params_Data>(
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

bool NativeDisplayDelegateResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NativeDisplayDelegate ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kNativeDisplayDelegate_Initialize_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeDisplayDelegate_Initialize_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNativeDisplayDelegate_TakeDisplayControl_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeDisplayDelegate_TakeDisplayControl_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNativeDisplayDelegate_RelinquishDisplayControl_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeDisplayDelegate_RelinquishDisplayControl_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNativeDisplayDelegate_GetDisplays_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeDisplayDelegate_GetDisplays_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNativeDisplayDelegate_Configure_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeDisplayDelegate_Configure_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNativeDisplayDelegate_GetHDCPState_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeDisplayDelegate_GetHDCPState_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNativeDisplayDelegate_SetHDCPState_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeDisplayDelegate_SetHDCPState_ResponseParams_Data>(
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
void NativeDisplayDelegateInterceptorForTesting::Initialize(NativeDisplayObserverPtr observer, InitializeCallback callback) {
  GetForwardingInterface()->Initialize(std::move(observer), std::move(callback));
}
void NativeDisplayDelegateInterceptorForTesting::TakeDisplayControl(TakeDisplayControlCallback callback) {
  GetForwardingInterface()->TakeDisplayControl(std::move(callback));
}
void NativeDisplayDelegateInterceptorForTesting::RelinquishDisplayControl(RelinquishDisplayControlCallback callback) {
  GetForwardingInterface()->RelinquishDisplayControl(std::move(callback));
}
void NativeDisplayDelegateInterceptorForTesting::GetDisplays(GetDisplaysCallback callback) {
  GetForwardingInterface()->GetDisplays(std::move(callback));
}
void NativeDisplayDelegateInterceptorForTesting::Configure(int64_t display_id, base::Optional<std::unique_ptr<display::DisplayMode>> mode, const gfx::Point& origin, ConfigureCallback callback) {
  GetForwardingInterface()->Configure(std::move(display_id), std::move(mode), std::move(origin), std::move(callback));
}
void NativeDisplayDelegateInterceptorForTesting::GetHDCPState(int64_t display_id, GetHDCPStateCallback callback) {
  GetForwardingInterface()->GetHDCPState(std::move(display_id), std::move(callback));
}
void NativeDisplayDelegateInterceptorForTesting::SetHDCPState(int64_t display_id, display::HDCPState state, SetHDCPStateCallback callback) {
  GetForwardingInterface()->SetHDCPState(std::move(display_id), std::move(state), std::move(callback));
}
void NativeDisplayDelegateInterceptorForTesting::SetColorCorrection(int64_t display_id, const std::vector<display::GammaRampRGBEntry>& degamma_lut, const std::vector<display::GammaRampRGBEntry>& gamma_lut, const std::vector<float>& correction_matrix) {
  GetForwardingInterface()->SetColorCorrection(std::move(display_id), std::move(degamma_lut), std::move(gamma_lut), std::move(correction_matrix));
}
NativeDisplayDelegateAsyncWaiter::NativeDisplayDelegateAsyncWaiter(
    NativeDisplayDelegate* proxy) : proxy_(proxy) {}

NativeDisplayDelegateAsyncWaiter::~NativeDisplayDelegateAsyncWaiter() = default;

void NativeDisplayDelegateAsyncWaiter::Initialize(
    NativeDisplayObserverPtr observer, std::vector<std::unique_ptr<display::DisplaySnapshot>>* out_snapshots) {
  base::RunLoop loop;
  proxy_->Initialize(std::move(observer),
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<std::unique_ptr<display::DisplaySnapshot>>* out_snapshots
,
             std::vector<std::unique_ptr<display::DisplaySnapshot>> snapshots) {*out_snapshots = std::move(snapshots);
            loop->Quit();
          },
          &loop,
          out_snapshots));
  loop.Run();
}
void NativeDisplayDelegateAsyncWaiter::TakeDisplayControl(
    bool* out_result) {
  base::RunLoop loop;
  proxy_->TakeDisplayControl(
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_result
,
             bool result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void NativeDisplayDelegateAsyncWaiter::RelinquishDisplayControl(
    bool* out_result) {
  base::RunLoop loop;
  proxy_->RelinquishDisplayControl(
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_result
,
             bool result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void NativeDisplayDelegateAsyncWaiter::GetDisplays(
    std::vector<std::unique_ptr<display::DisplaySnapshot>>* out_snapshots) {
  base::RunLoop loop;
  proxy_->GetDisplays(
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<std::unique_ptr<display::DisplaySnapshot>>* out_snapshots
,
             std::vector<std::unique_ptr<display::DisplaySnapshot>> snapshots) {*out_snapshots = std::move(snapshots);
            loop->Quit();
          },
          &loop,
          out_snapshots));
  loop.Run();
}
void NativeDisplayDelegateAsyncWaiter::Configure(
    int64_t display_id, base::Optional<std::unique_ptr<display::DisplayMode>> mode, const gfx::Point& origin, bool* out_status) {
  base::RunLoop loop;
  proxy_->Configure(std::move(display_id),std::move(mode),std::move(origin),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_status
,
             bool status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void NativeDisplayDelegateAsyncWaiter::GetHDCPState(
    int64_t display_id, bool* out_status, display::HDCPState* out_state) {
  base::RunLoop loop;
  proxy_->GetHDCPState(std::move(display_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_status
,
             display::HDCPState* out_state
,
             bool status,
             display::HDCPState state) {*out_status = std::move(status);*out_state = std::move(state);
            loop->Quit();
          },
          &loop,
          out_status,
          out_state));
  loop.Run();
}
void NativeDisplayDelegateAsyncWaiter::SetHDCPState(
    int64_t display_id, display::HDCPState state, bool* out_status) {
  base::RunLoop loop;
  proxy_->SetHDCPState(std::move(display_id),std::move(state),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_status
,
             bool status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}

}  // namespace mojom
}  // namespace display

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif