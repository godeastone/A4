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

#include "services/viz/privileged/interfaces/compositing/display_private.mojom.h"

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

#include "services/viz/privileged/interfaces/compositing/display_private.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/gfx/ipc/color/gfx_param_traits.h"
#include "ui/gfx/mojo/ca_layer_params_struct_traits.h"
#include "ui/gfx/mojo/transform_struct_traits.h"
#include "ui/latency/mojo/latency_info_struct_traits.h"
namespace viz {
namespace mojom {
const char DisplayPrivate::Name_[] = "viz.mojom.DisplayPrivate";

DisplayPrivateProxy::DisplayPrivateProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DisplayPrivateProxy::SetDisplayVisible(
    bool in_visible) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::DisplayPrivate::SetDisplayVisible");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDisplayPrivate_SetDisplayVisible_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::DisplayPrivate_SetDisplayVisible_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->visible = in_visible;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DisplayPrivateProxy::SetDisplayColorMatrix(
    const gfx::Transform& in_color_matrix) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::DisplayPrivate::SetDisplayColorMatrix");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDisplayPrivate_SetDisplayColorMatrix_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::DisplayPrivate_SetDisplayColorMatrix_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->color_matrix)::BaseType::BufferWriter
      color_matrix_writer;
  mojo::internal::Serialize<::gfx::mojom::TransformDataView>(
      in_color_matrix, buffer, &color_matrix_writer, &serialization_context);
  params->color_matrix.Set(
      color_matrix_writer.is_null() ? nullptr : color_matrix_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->color_matrix.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null color_matrix in DisplayPrivate.SetDisplayColorMatrix request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DisplayPrivateProxy::SetDisplayColorSpace(
    const gfx::ColorSpace& in_blending_color_space, const gfx::ColorSpace& in_device_color_space) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::DisplayPrivate::SetDisplayColorSpace");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDisplayPrivate_SetDisplayColorSpace_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::DisplayPrivate_SetDisplayColorSpace_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->blending_color_space)::BaseType::BufferWriter
      blending_color_space_writer;
  mojo::internal::Serialize<::gfx::mojom::ColorSpaceDataView>(
      in_blending_color_space, buffer, &blending_color_space_writer, &serialization_context);
  params->blending_color_space.Set(
      blending_color_space_writer.is_null() ? nullptr : blending_color_space_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->blending_color_space.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null blending_color_space in DisplayPrivate.SetDisplayColorSpace request");
  typename decltype(params->device_color_space)::BaseType::BufferWriter
      device_color_space_writer;
  mojo::internal::Serialize<::gfx::mojom::ColorSpaceDataView>(
      in_device_color_space, buffer, &device_color_space_writer, &serialization_context);
  params->device_color_space.Set(
      device_color_space_writer.is_null() ? nullptr : device_color_space_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->device_color_space.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null device_color_space in DisplayPrivate.SetDisplayColorSpace request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DisplayPrivateProxy::SetOutputIsSecure(
    bool in_secure) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::DisplayPrivate::SetOutputIsSecure");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDisplayPrivate_SetOutputIsSecure_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::DisplayPrivate_SetOutputIsSecure_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->secure = in_secure;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DisplayPrivateProxy::SetAuthoritativeVSyncInterval(
    base::TimeDelta in_interval) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::DisplayPrivate::SetAuthoritativeVSyncInterval");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDisplayPrivate_SetAuthoritativeVSyncInterval_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::DisplayPrivate_SetAuthoritativeVSyncInterval_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->interval)::BaseType::BufferWriter
      interval_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_interval, buffer, &interval_writer, &serialization_context);
  params->interval.Set(
      interval_writer.is_null() ? nullptr : interval_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->interval.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null interval in DisplayPrivate.SetAuthoritativeVSyncInterval request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DisplayPrivateProxy::SetDisplayVSyncParameters(
    base::TimeTicks in_timebase, base::TimeDelta in_interval) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::DisplayPrivate::SetDisplayVSyncParameters");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDisplayPrivate_SetDisplayVSyncParameters_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::DisplayPrivate_SetDisplayVSyncParameters_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->timebase)::BaseType::BufferWriter
      timebase_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
      in_timebase, buffer, &timebase_writer, &serialization_context);
  params->timebase.Set(
      timebase_writer.is_null() ? nullptr : timebase_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->timebase.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null timebase in DisplayPrivate.SetDisplayVSyncParameters request");
  typename decltype(params->interval)::BaseType::BufferWriter
      interval_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_interval, buffer, &interval_writer, &serialization_context);
  params->interval.Set(
      interval_writer.is_null() ? nullptr : interval_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->interval.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null interval in DisplayPrivate.SetDisplayVSyncParameters request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool DisplayPrivateStubDispatch::Accept(
    DisplayPrivate* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDisplayPrivate_SetDisplayVisible_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::DisplayPrivate::SetDisplayVisible",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DisplayPrivate_SetDisplayVisible_Params_Data* params =
          reinterpret_cast<internal::DisplayPrivate_SetDisplayVisible_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_visible{};
      DisplayPrivate_SetDisplayVisible_ParamsDataView input_data_view(params, &serialization_context);
      
      p_visible = input_data_view.visible();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DisplayPrivate::SetDisplayVisible deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetDisplayVisible(
std::move(p_visible));
      return true;
    }
    case internal::kDisplayPrivate_SetDisplayColorMatrix_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::DisplayPrivate::SetDisplayColorMatrix",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DisplayPrivate_SetDisplayColorMatrix_Params_Data* params =
          reinterpret_cast<internal::DisplayPrivate_SetDisplayColorMatrix_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::Transform p_color_matrix{};
      DisplayPrivate_SetDisplayColorMatrix_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadColorMatrix(&p_color_matrix))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DisplayPrivate::SetDisplayColorMatrix deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetDisplayColorMatrix(
std::move(p_color_matrix));
      return true;
    }
    case internal::kDisplayPrivate_SetDisplayColorSpace_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::DisplayPrivate::SetDisplayColorSpace",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DisplayPrivate_SetDisplayColorSpace_Params_Data* params =
          reinterpret_cast<internal::DisplayPrivate_SetDisplayColorSpace_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::ColorSpace p_blending_color_space{};
      gfx::ColorSpace p_device_color_space{};
      DisplayPrivate_SetDisplayColorSpace_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadBlendingColorSpace(&p_blending_color_space))
        success = false;
      if (!input_data_view.ReadDeviceColorSpace(&p_device_color_space))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DisplayPrivate::SetDisplayColorSpace deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetDisplayColorSpace(
std::move(p_blending_color_space), 
std::move(p_device_color_space));
      return true;
    }
    case internal::kDisplayPrivate_SetOutputIsSecure_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::DisplayPrivate::SetOutputIsSecure",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DisplayPrivate_SetOutputIsSecure_Params_Data* params =
          reinterpret_cast<internal::DisplayPrivate_SetOutputIsSecure_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_secure{};
      DisplayPrivate_SetOutputIsSecure_ParamsDataView input_data_view(params, &serialization_context);
      
      p_secure = input_data_view.secure();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DisplayPrivate::SetOutputIsSecure deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetOutputIsSecure(
std::move(p_secure));
      return true;
    }
    case internal::kDisplayPrivate_SetAuthoritativeVSyncInterval_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::DisplayPrivate::SetAuthoritativeVSyncInterval",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DisplayPrivate_SetAuthoritativeVSyncInterval_Params_Data* params =
          reinterpret_cast<internal::DisplayPrivate_SetAuthoritativeVSyncInterval_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::TimeDelta p_interval{};
      DisplayPrivate_SetAuthoritativeVSyncInterval_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadInterval(&p_interval))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DisplayPrivate::SetAuthoritativeVSyncInterval deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetAuthoritativeVSyncInterval(
std::move(p_interval));
      return true;
    }
    case internal::kDisplayPrivate_SetDisplayVSyncParameters_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::DisplayPrivate::SetDisplayVSyncParameters",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DisplayPrivate_SetDisplayVSyncParameters_Params_Data* params =
          reinterpret_cast<internal::DisplayPrivate_SetDisplayVSyncParameters_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::TimeTicks p_timebase{};
      base::TimeDelta p_interval{};
      DisplayPrivate_SetDisplayVSyncParameters_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadTimebase(&p_timebase))
        success = false;
      if (!input_data_view.ReadInterval(&p_interval))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DisplayPrivate::SetDisplayVSyncParameters deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetDisplayVSyncParameters(
std::move(p_timebase), 
std::move(p_interval));
      return true;
    }
  }
  return false;
}

// static
bool DisplayPrivateStubDispatch::AcceptWithResponder(
    DisplayPrivate* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kDisplayPrivate_SetDisplayVisible_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::DisplayPrivate::SetDisplayVisible",
               "message", message->name());
#endif
      break;
    }
    case internal::kDisplayPrivate_SetDisplayColorMatrix_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::DisplayPrivate::SetDisplayColorMatrix",
               "message", message->name());
#endif
      break;
    }
    case internal::kDisplayPrivate_SetDisplayColorSpace_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::DisplayPrivate::SetDisplayColorSpace",
               "message", message->name());
#endif
      break;
    }
    case internal::kDisplayPrivate_SetOutputIsSecure_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::DisplayPrivate::SetOutputIsSecure",
               "message", message->name());
#endif
      break;
    }
    case internal::kDisplayPrivate_SetAuthoritativeVSyncInterval_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::DisplayPrivate::SetAuthoritativeVSyncInterval",
               "message", message->name());
#endif
      break;
    }
    case internal::kDisplayPrivate_SetDisplayVSyncParameters_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::DisplayPrivate::SetDisplayVSyncParameters",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool DisplayPrivateRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DisplayPrivate RequestValidator");

  switch (message->header()->name) {
    case internal::kDisplayPrivate_SetDisplayVisible_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DisplayPrivate_SetDisplayVisible_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDisplayPrivate_SetDisplayColorMatrix_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DisplayPrivate_SetDisplayColorMatrix_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDisplayPrivate_SetDisplayColorSpace_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DisplayPrivate_SetDisplayColorSpace_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDisplayPrivate_SetOutputIsSecure_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DisplayPrivate_SetOutputIsSecure_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDisplayPrivate_SetAuthoritativeVSyncInterval_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DisplayPrivate_SetAuthoritativeVSyncInterval_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDisplayPrivate_SetDisplayVSyncParameters_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DisplayPrivate_SetDisplayVSyncParameters_Params_Data>(
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

void DisplayPrivateInterceptorForTesting::SetDisplayVisible(bool visible) {
  GetForwardingInterface()->SetDisplayVisible(std::move(visible));
}
void DisplayPrivateInterceptorForTesting::SetDisplayColorMatrix(const gfx::Transform& color_matrix) {
  GetForwardingInterface()->SetDisplayColorMatrix(std::move(color_matrix));
}
void DisplayPrivateInterceptorForTesting::SetDisplayColorSpace(const gfx::ColorSpace& blending_color_space, const gfx::ColorSpace& device_color_space) {
  GetForwardingInterface()->SetDisplayColorSpace(std::move(blending_color_space), std::move(device_color_space));
}
void DisplayPrivateInterceptorForTesting::SetOutputIsSecure(bool secure) {
  GetForwardingInterface()->SetOutputIsSecure(std::move(secure));
}
void DisplayPrivateInterceptorForTesting::SetAuthoritativeVSyncInterval(base::TimeDelta interval) {
  GetForwardingInterface()->SetAuthoritativeVSyncInterval(std::move(interval));
}
void DisplayPrivateInterceptorForTesting::SetDisplayVSyncParameters(base::TimeTicks timebase, base::TimeDelta interval) {
  GetForwardingInterface()->SetDisplayVSyncParameters(std::move(timebase), std::move(interval));
}
DisplayPrivateAsyncWaiter::DisplayPrivateAsyncWaiter(
    DisplayPrivate* proxy) : proxy_(proxy) {}

DisplayPrivateAsyncWaiter::~DisplayPrivateAsyncWaiter() = default;


const char DisplayClient::Name_[] = "viz.mojom.DisplayClient";

DisplayClientProxy::DisplayClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DisplayClientProxy::OnDisplayReceivedCALayerParams(
    const gfx::CALayerParams& in_ca_layer_params) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::DisplayClient::OnDisplayReceivedCALayerParams");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDisplayClient_OnDisplayReceivedCALayerParams_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::DisplayClient_OnDisplayReceivedCALayerParams_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->ca_layer_params)::BaseType::BufferWriter
      ca_layer_params_writer;
  mojo::internal::Serialize<::gfx::mojom::CALayerParamsDataView>(
      in_ca_layer_params, buffer, &ca_layer_params_writer, &serialization_context);
  params->ca_layer_params.Set(
      ca_layer_params_writer.is_null() ? nullptr : ca_layer_params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->ca_layer_params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null ca_layer_params in DisplayClient.OnDisplayReceivedCALayerParams request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DisplayClientProxy::DidSwapAfterSnapshotRequestReceived(
    const std::vector<ui::LatencyInfo>& in_latency_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::DisplayClient::DidSwapAfterSnapshotRequestReceived");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDisplayClient_DidSwapAfterSnapshotRequestReceived_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::DisplayClient_DidSwapAfterSnapshotRequestReceived_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->latency_info)::BaseType::BufferWriter
      latency_info_writer;
  const mojo::internal::ContainerValidateParams latency_info_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::ui::mojom::LatencyInfoDataView>>(
      in_latency_info, buffer, &latency_info_writer, &latency_info_validate_params,
      &serialization_context);
  params->latency_info.Set(
      latency_info_writer.is_null() ? nullptr : latency_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->latency_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null latency_info in DisplayClient.DidSwapAfterSnapshotRequestReceived request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DisplayClientProxy::CreateLayeredWindowUpdater(
    ::viz::mojom::LayeredWindowUpdaterRequest in_layered_window_updater) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::DisplayClient::CreateLayeredWindowUpdater");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDisplayClient_CreateLayeredWindowUpdater_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::DisplayClient_CreateLayeredWindowUpdater_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::viz::mojom::LayeredWindowUpdaterRequestDataView>(
      in_layered_window_updater, &params->layered_window_updater, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->layered_window_updater),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid layered_window_updater in DisplayClient.CreateLayeredWindowUpdater request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool DisplayClientStubDispatch::Accept(
    DisplayClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDisplayClient_OnDisplayReceivedCALayerParams_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::DisplayClient::OnDisplayReceivedCALayerParams",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DisplayClient_OnDisplayReceivedCALayerParams_Params_Data* params =
          reinterpret_cast<internal::DisplayClient_OnDisplayReceivedCALayerParams_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::CALayerParams p_ca_layer_params{};
      DisplayClient_OnDisplayReceivedCALayerParams_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCaLayerParams(&p_ca_layer_params))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DisplayClient::OnDisplayReceivedCALayerParams deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnDisplayReceivedCALayerParams(
std::move(p_ca_layer_params));
      return true;
    }
    case internal::kDisplayClient_DidSwapAfterSnapshotRequestReceived_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::DisplayClient::DidSwapAfterSnapshotRequestReceived",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DisplayClient_DidSwapAfterSnapshotRequestReceived_Params_Data* params =
          reinterpret_cast<internal::DisplayClient_DidSwapAfterSnapshotRequestReceived_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<ui::LatencyInfo> p_latency_info{};
      DisplayClient_DidSwapAfterSnapshotRequestReceived_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadLatencyInfo(&p_latency_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DisplayClient::DidSwapAfterSnapshotRequestReceived deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DidSwapAfterSnapshotRequestReceived(
std::move(p_latency_info));
      return true;
    }
    case internal::kDisplayClient_CreateLayeredWindowUpdater_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::DisplayClient::CreateLayeredWindowUpdater",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DisplayClient_CreateLayeredWindowUpdater_Params_Data* params =
          reinterpret_cast<internal::DisplayClient_CreateLayeredWindowUpdater_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::viz::mojom::LayeredWindowUpdaterRequest p_layered_window_updater{};
      DisplayClient_CreateLayeredWindowUpdater_ParamsDataView input_data_view(params, &serialization_context);
      
      p_layered_window_updater =
          input_data_view.TakeLayeredWindowUpdater<decltype(p_layered_window_updater)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DisplayClient::CreateLayeredWindowUpdater deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateLayeredWindowUpdater(
std::move(p_layered_window_updater));
      return true;
    }
  }
  return false;
}

// static
bool DisplayClientStubDispatch::AcceptWithResponder(
    DisplayClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kDisplayClient_OnDisplayReceivedCALayerParams_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::DisplayClient::OnDisplayReceivedCALayerParams",
               "message", message->name());
#endif
      break;
    }
    case internal::kDisplayClient_DidSwapAfterSnapshotRequestReceived_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::DisplayClient::DidSwapAfterSnapshotRequestReceived",
               "message", message->name());
#endif
      break;
    }
    case internal::kDisplayClient_CreateLayeredWindowUpdater_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::DisplayClient::CreateLayeredWindowUpdater",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool DisplayClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DisplayClient RequestValidator");

  switch (message->header()->name) {
    case internal::kDisplayClient_OnDisplayReceivedCALayerParams_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DisplayClient_OnDisplayReceivedCALayerParams_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDisplayClient_DidSwapAfterSnapshotRequestReceived_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DisplayClient_DidSwapAfterSnapshotRequestReceived_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDisplayClient_CreateLayeredWindowUpdater_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DisplayClient_CreateLayeredWindowUpdater_Params_Data>(
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

void DisplayClientInterceptorForTesting::OnDisplayReceivedCALayerParams(const gfx::CALayerParams& ca_layer_params) {
  GetForwardingInterface()->OnDisplayReceivedCALayerParams(std::move(ca_layer_params));
}
void DisplayClientInterceptorForTesting::DidSwapAfterSnapshotRequestReceived(const std::vector<ui::LatencyInfo>& latency_info) {
  GetForwardingInterface()->DidSwapAfterSnapshotRequestReceived(std::move(latency_info));
}
void DisplayClientInterceptorForTesting::CreateLayeredWindowUpdater(::viz::mojom::LayeredWindowUpdaterRequest layered_window_updater) {
  GetForwardingInterface()->CreateLayeredWindowUpdater(std::move(layered_window_updater));
}
DisplayClientAsyncWaiter::DisplayClientAsyncWaiter(
    DisplayClient* proxy) : proxy_(proxy) {}

DisplayClientAsyncWaiter::~DisplayClientAsyncWaiter() = default;


}  // namespace mojom
}  // namespace viz

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif