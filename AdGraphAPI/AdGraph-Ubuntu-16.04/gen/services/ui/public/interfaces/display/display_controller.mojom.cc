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

#include "services/ui/public/interfaces/display/display_controller.mojom.h"

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

#include "services/ui/public/interfaces/display/display_controller.mojom-shared-message-ids.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
namespace display {
namespace mojom {
const char DisplayController::Name_[] = "display.mojom.DisplayController";

class DisplayController_TakeDisplayControl_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  DisplayController_TakeDisplayControl_ForwardToCallback(
      const DisplayController::TakeDisplayControlCallback& callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  DisplayController::TakeDisplayControlCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(DisplayController_TakeDisplayControl_ForwardToCallback);
};

class DisplayController_RelinquishDisplayControl_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  DisplayController_RelinquishDisplayControl_ForwardToCallback(
      const DisplayController::RelinquishDisplayControlCallback& callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  DisplayController::RelinquishDisplayControlCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(DisplayController_RelinquishDisplayControl_ForwardToCallback);
};

DisplayControllerProxy::DisplayControllerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DisplayControllerProxy::IncreaseInternalDisplayZoom(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "display::mojom::DisplayController::IncreaseInternalDisplayZoom");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDisplayController_IncreaseInternalDisplayZoom_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::display::mojom::internal::DisplayController_IncreaseInternalDisplayZoom_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DisplayControllerProxy::DecreaseInternalDisplayZoom(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "display::mojom::DisplayController::DecreaseInternalDisplayZoom");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDisplayController_DecreaseInternalDisplayZoom_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::display::mojom::internal::DisplayController_DecreaseInternalDisplayZoom_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DisplayControllerProxy::ResetInternalDisplayZoom(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "display::mojom::DisplayController::ResetInternalDisplayZoom");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDisplayController_ResetInternalDisplayZoom_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::display::mojom::internal::DisplayController_ResetInternalDisplayZoom_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DisplayControllerProxy::RotateCurrentDisplayCW(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "display::mojom::DisplayController::RotateCurrentDisplayCW");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDisplayController_RotateCurrentDisplayCW_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::display::mojom::internal::DisplayController_RotateCurrentDisplayCW_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DisplayControllerProxy::SwapPrimaryDisplay(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "display::mojom::DisplayController::SwapPrimaryDisplay");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDisplayController_SwapPrimaryDisplay_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::display::mojom::internal::DisplayController_SwapPrimaryDisplay_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DisplayControllerProxy::ToggleMirrorMode(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "display::mojom::DisplayController::ToggleMirrorMode");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDisplayController_ToggleMirrorMode_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::display::mojom::internal::DisplayController_ToggleMirrorMode_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DisplayControllerProxy::TakeDisplayControl(
    const TakeDisplayControlCallback& callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "display::mojom::DisplayController::TakeDisplayControl");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDisplayController_TakeDisplayControl_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::display::mojom::internal::DisplayController_TakeDisplayControl_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new DisplayController_TakeDisplayControl_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void DisplayControllerProxy::RelinquishDisplayControl(
    const RelinquishDisplayControlCallback& callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "display::mojom::DisplayController::RelinquishDisplayControl");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDisplayController_RelinquishDisplayControl_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::display::mojom::internal::DisplayController_RelinquishDisplayControl_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new DisplayController_RelinquishDisplayControl_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void DisplayControllerProxy::SetDisplayWorkArea(
    int64_t in_display_id, const gfx::Size& in_size, const gfx::Insets& in_insets) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "display::mojom::DisplayController::SetDisplayWorkArea");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDisplayController_SetDisplayWorkArea_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::display::mojom::internal::DisplayController_SetDisplayWorkArea_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->display_id = in_display_id;
  typename decltype(params->size)::BaseType::BufferWriter
      size_writer;
  mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
      in_size, buffer, &size_writer, &serialization_context);
  params->size.Set(
      size_writer.is_null() ? nullptr : size_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->size.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null size in DisplayController.SetDisplayWorkArea request");
  typename decltype(params->insets)::BaseType::BufferWriter
      insets_writer;
  mojo::internal::Serialize<::gfx::mojom::InsetsDataView>(
      in_insets, buffer, &insets_writer, &serialization_context);
  params->insets.Set(
      insets_writer.is_null() ? nullptr : insets_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->insets.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null insets in DisplayController.SetDisplayWorkArea request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class DisplayController_TakeDisplayControl_ProxyToResponder {
 public:
  static DisplayController::TakeDisplayControlCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<DisplayController_TakeDisplayControl_ProxyToResponder> proxy(
        new DisplayController_TakeDisplayControl_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::Bind(&DisplayController_TakeDisplayControl_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~DisplayController_TakeDisplayControl_ProxyToResponder() {
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
  DisplayController_TakeDisplayControl_ProxyToResponder(
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
        << "DisplayController::TakeDisplayControlCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(DisplayController_TakeDisplayControl_ProxyToResponder);
};

bool DisplayController_TakeDisplayControl_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "display::mojom::DisplayController::TakeDisplayControlCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::DisplayController_TakeDisplayControl_ResponseParams_Data* params =
      reinterpret_cast<
          internal::DisplayController_TakeDisplayControl_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_status{};
  DisplayController_TakeDisplayControl_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_status = input_data_view.status();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "DisplayController::TakeDisplayControl response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void DisplayController_TakeDisplayControl_ProxyToResponder::Run(
    bool in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDisplayController_TakeDisplayControl_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::display::mojom::internal::DisplayController_TakeDisplayControl_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->status = in_status;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::DisplayController::TakeDisplayControlCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class DisplayController_RelinquishDisplayControl_ProxyToResponder {
 public:
  static DisplayController::RelinquishDisplayControlCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<DisplayController_RelinquishDisplayControl_ProxyToResponder> proxy(
        new DisplayController_RelinquishDisplayControl_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::Bind(&DisplayController_RelinquishDisplayControl_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~DisplayController_RelinquishDisplayControl_ProxyToResponder() {
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
  DisplayController_RelinquishDisplayControl_ProxyToResponder(
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
        << "DisplayController::RelinquishDisplayControlCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(DisplayController_RelinquishDisplayControl_ProxyToResponder);
};

bool DisplayController_RelinquishDisplayControl_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "display::mojom::DisplayController::RelinquishDisplayControlCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::DisplayController_RelinquishDisplayControl_ResponseParams_Data* params =
      reinterpret_cast<
          internal::DisplayController_RelinquishDisplayControl_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_status{};
  DisplayController_RelinquishDisplayControl_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_status = input_data_view.status();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "DisplayController::RelinquishDisplayControl response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void DisplayController_RelinquishDisplayControl_ProxyToResponder::Run(
    bool in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDisplayController_RelinquishDisplayControl_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::display::mojom::internal::DisplayController_RelinquishDisplayControl_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->status = in_status;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::DisplayController::RelinquishDisplayControlCallback",
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
bool DisplayControllerStubDispatch::Accept(
    DisplayController* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDisplayController_IncreaseInternalDisplayZoom_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::DisplayController::IncreaseInternalDisplayZoom",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DisplayController_IncreaseInternalDisplayZoom_Params_Data* params =
          reinterpret_cast<internal::DisplayController_IncreaseInternalDisplayZoom_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      DisplayController_IncreaseInternalDisplayZoom_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DisplayController::IncreaseInternalDisplayZoom deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->IncreaseInternalDisplayZoom();
      return true;
    }
    case internal::kDisplayController_DecreaseInternalDisplayZoom_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::DisplayController::DecreaseInternalDisplayZoom",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DisplayController_DecreaseInternalDisplayZoom_Params_Data* params =
          reinterpret_cast<internal::DisplayController_DecreaseInternalDisplayZoom_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      DisplayController_DecreaseInternalDisplayZoom_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DisplayController::DecreaseInternalDisplayZoom deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DecreaseInternalDisplayZoom();
      return true;
    }
    case internal::kDisplayController_ResetInternalDisplayZoom_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::DisplayController::ResetInternalDisplayZoom",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DisplayController_ResetInternalDisplayZoom_Params_Data* params =
          reinterpret_cast<internal::DisplayController_ResetInternalDisplayZoom_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      DisplayController_ResetInternalDisplayZoom_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DisplayController::ResetInternalDisplayZoom deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ResetInternalDisplayZoom();
      return true;
    }
    case internal::kDisplayController_RotateCurrentDisplayCW_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::DisplayController::RotateCurrentDisplayCW",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DisplayController_RotateCurrentDisplayCW_Params_Data* params =
          reinterpret_cast<internal::DisplayController_RotateCurrentDisplayCW_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      DisplayController_RotateCurrentDisplayCW_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DisplayController::RotateCurrentDisplayCW deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RotateCurrentDisplayCW();
      return true;
    }
    case internal::kDisplayController_SwapPrimaryDisplay_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::DisplayController::SwapPrimaryDisplay",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DisplayController_SwapPrimaryDisplay_Params_Data* params =
          reinterpret_cast<internal::DisplayController_SwapPrimaryDisplay_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      DisplayController_SwapPrimaryDisplay_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DisplayController::SwapPrimaryDisplay deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SwapPrimaryDisplay();
      return true;
    }
    case internal::kDisplayController_ToggleMirrorMode_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::DisplayController::ToggleMirrorMode",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DisplayController_ToggleMirrorMode_Params_Data* params =
          reinterpret_cast<internal::DisplayController_ToggleMirrorMode_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      DisplayController_ToggleMirrorMode_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DisplayController::ToggleMirrorMode deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ToggleMirrorMode();
      return true;
    }
    case internal::kDisplayController_TakeDisplayControl_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::DisplayController::TakeDisplayControl",
               "message", message->name());
#endif
      break;
    }
    case internal::kDisplayController_RelinquishDisplayControl_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::DisplayController::RelinquishDisplayControl",
               "message", message->name());
#endif
      break;
    }
    case internal::kDisplayController_SetDisplayWorkArea_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::DisplayController::SetDisplayWorkArea",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DisplayController_SetDisplayWorkArea_Params_Data* params =
          reinterpret_cast<internal::DisplayController_SetDisplayWorkArea_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_display_id{};
      gfx::Size p_size{};
      gfx::Insets p_insets{};
      DisplayController_SetDisplayWorkArea_ParamsDataView input_data_view(params, &serialization_context);
      
      p_display_id = input_data_view.display_id();
      if (!input_data_view.ReadSize(&p_size))
        success = false;
      if (!input_data_view.ReadInsets(&p_insets))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DisplayController::SetDisplayWorkArea deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetDisplayWorkArea(
std::move(p_display_id), 
std::move(p_size), 
std::move(p_insets));
      return true;
    }
  }
  return false;
}

// static
bool DisplayControllerStubDispatch::AcceptWithResponder(
    DisplayController* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kDisplayController_IncreaseInternalDisplayZoom_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::DisplayController::IncreaseInternalDisplayZoom",
               "message", message->name());
#endif
      break;
    }
    case internal::kDisplayController_DecreaseInternalDisplayZoom_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::DisplayController::DecreaseInternalDisplayZoom",
               "message", message->name());
#endif
      break;
    }
    case internal::kDisplayController_ResetInternalDisplayZoom_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::DisplayController::ResetInternalDisplayZoom",
               "message", message->name());
#endif
      break;
    }
    case internal::kDisplayController_RotateCurrentDisplayCW_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::DisplayController::RotateCurrentDisplayCW",
               "message", message->name());
#endif
      break;
    }
    case internal::kDisplayController_SwapPrimaryDisplay_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::DisplayController::SwapPrimaryDisplay",
               "message", message->name());
#endif
      break;
    }
    case internal::kDisplayController_ToggleMirrorMode_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::DisplayController::ToggleMirrorMode",
               "message", message->name());
#endif
      break;
    }
    case internal::kDisplayController_TakeDisplayControl_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::DisplayController::TakeDisplayControl",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::DisplayController_TakeDisplayControl_Params_Data* params =
          reinterpret_cast<
              internal::DisplayController_TakeDisplayControl_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      DisplayController_TakeDisplayControl_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DisplayController::TakeDisplayControl deserializer");
        return false;
      }
      DisplayController::TakeDisplayControlCallback callback =
          DisplayController_TakeDisplayControl_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->TakeDisplayControl(std::move(callback));
      return true;
    }
    case internal::kDisplayController_RelinquishDisplayControl_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::DisplayController::RelinquishDisplayControl",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::DisplayController_RelinquishDisplayControl_Params_Data* params =
          reinterpret_cast<
              internal::DisplayController_RelinquishDisplayControl_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      DisplayController_RelinquishDisplayControl_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DisplayController::RelinquishDisplayControl deserializer");
        return false;
      }
      DisplayController::RelinquishDisplayControlCallback callback =
          DisplayController_RelinquishDisplayControl_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RelinquishDisplayControl(std::move(callback));
      return true;
    }
    case internal::kDisplayController_SetDisplayWorkArea_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::DisplayController::SetDisplayWorkArea",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool DisplayControllerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DisplayController RequestValidator");

  switch (message->header()->name) {
    case internal::kDisplayController_IncreaseInternalDisplayZoom_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DisplayController_IncreaseInternalDisplayZoom_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDisplayController_DecreaseInternalDisplayZoom_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DisplayController_DecreaseInternalDisplayZoom_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDisplayController_ResetInternalDisplayZoom_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DisplayController_ResetInternalDisplayZoom_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDisplayController_RotateCurrentDisplayCW_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DisplayController_RotateCurrentDisplayCW_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDisplayController_SwapPrimaryDisplay_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DisplayController_SwapPrimaryDisplay_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDisplayController_ToggleMirrorMode_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DisplayController_ToggleMirrorMode_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDisplayController_TakeDisplayControl_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DisplayController_TakeDisplayControl_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDisplayController_RelinquishDisplayControl_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DisplayController_RelinquishDisplayControl_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDisplayController_SetDisplayWorkArea_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DisplayController_SetDisplayWorkArea_Params_Data>(
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

bool DisplayControllerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DisplayController ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kDisplayController_TakeDisplayControl_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::DisplayController_TakeDisplayControl_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDisplayController_RelinquishDisplayControl_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::DisplayController_RelinquishDisplayControl_ResponseParams_Data>(
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
void DisplayControllerInterceptorForTesting::IncreaseInternalDisplayZoom() {
  GetForwardingInterface()->IncreaseInternalDisplayZoom();
}
void DisplayControllerInterceptorForTesting::DecreaseInternalDisplayZoom() {
  GetForwardingInterface()->DecreaseInternalDisplayZoom();
}
void DisplayControllerInterceptorForTesting::ResetInternalDisplayZoom() {
  GetForwardingInterface()->ResetInternalDisplayZoom();
}
void DisplayControllerInterceptorForTesting::RotateCurrentDisplayCW() {
  GetForwardingInterface()->RotateCurrentDisplayCW();
}
void DisplayControllerInterceptorForTesting::SwapPrimaryDisplay() {
  GetForwardingInterface()->SwapPrimaryDisplay();
}
void DisplayControllerInterceptorForTesting::ToggleMirrorMode() {
  GetForwardingInterface()->ToggleMirrorMode();
}
void DisplayControllerInterceptorForTesting::TakeDisplayControl(const TakeDisplayControlCallback& callback) {
  GetForwardingInterface()->TakeDisplayControl(std::move(callback));
}
void DisplayControllerInterceptorForTesting::RelinquishDisplayControl(const RelinquishDisplayControlCallback& callback) {
  GetForwardingInterface()->RelinquishDisplayControl(std::move(callback));
}
void DisplayControllerInterceptorForTesting::SetDisplayWorkArea(int64_t display_id, const gfx::Size& size, const gfx::Insets& insets) {
  GetForwardingInterface()->SetDisplayWorkArea(std::move(display_id), std::move(size), std::move(insets));
}
DisplayControllerAsyncWaiter::DisplayControllerAsyncWaiter(
    DisplayController* proxy) : proxy_(proxy) {}

DisplayControllerAsyncWaiter::~DisplayControllerAsyncWaiter() = default;

void DisplayControllerAsyncWaiter::TakeDisplayControl(
    bool* out_status) {
  base::RunLoop loop;
  proxy_->TakeDisplayControl(
      base::Bind(
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
void DisplayControllerAsyncWaiter::RelinquishDisplayControl(
    bool* out_status) {
  base::RunLoop loop;
  proxy_->RelinquishDisplayControl(
      base::Bind(
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