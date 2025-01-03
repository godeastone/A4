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

#include "services/ui/public/interfaces/input_devices/input_device_server.mojom.h"

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

#include "services/ui/public/interfaces/input_devices/input_device_server.mojom-shared-message-ids.h"
#include "ui/events/devices/mojo/input_device_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
namespace ui {
namespace mojom {
const char InputDeviceObserverMojo::Name_[] = "ui.mojom.InputDeviceObserverMojo";

InputDeviceObserverMojoProxy::InputDeviceObserverMojoProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void InputDeviceObserverMojoProxy::OnKeyboardDeviceConfigurationChanged(
    const std::vector<ui::InputDevice>& in_devices) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::InputDeviceObserverMojo::OnKeyboardDeviceConfigurationChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->devices)::BaseType::BufferWriter
      devices_writer;
  const mojo::internal::ContainerValidateParams devices_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::ui::mojom::InputDeviceDataView>>(
      in_devices, buffer, &devices_writer, &devices_validate_params,
      &serialization_context);
  params->devices.Set(
      devices_writer.is_null() ? nullptr : devices_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->devices.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null devices in InputDeviceObserverMojo.OnKeyboardDeviceConfigurationChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void InputDeviceObserverMojoProxy::OnTouchscreenDeviceConfigurationChanged(
    const std::vector<ui::TouchscreenDevice>& in_devices, bool in_touchscreen_target_display_ids_changed) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::InputDeviceObserverMojo::OnTouchscreenDeviceConfigurationChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->devices)::BaseType::BufferWriter
      devices_writer;
  const mojo::internal::ContainerValidateParams devices_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::ui::mojom::TouchscreenDeviceDataView>>(
      in_devices, buffer, &devices_writer, &devices_validate_params,
      &serialization_context);
  params->devices.Set(
      devices_writer.is_null() ? nullptr : devices_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->devices.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null devices in InputDeviceObserverMojo.OnTouchscreenDeviceConfigurationChanged request");
  params->touchscreen_target_display_ids_changed = in_touchscreen_target_display_ids_changed;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void InputDeviceObserverMojoProxy::OnMouseDeviceConfigurationChanged(
    const std::vector<ui::InputDevice>& in_devices) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::InputDeviceObserverMojo::OnMouseDeviceConfigurationChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->devices)::BaseType::BufferWriter
      devices_writer;
  const mojo::internal::ContainerValidateParams devices_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::ui::mojom::InputDeviceDataView>>(
      in_devices, buffer, &devices_writer, &devices_validate_params,
      &serialization_context);
  params->devices.Set(
      devices_writer.is_null() ? nullptr : devices_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->devices.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null devices in InputDeviceObserverMojo.OnMouseDeviceConfigurationChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void InputDeviceObserverMojoProxy::OnTouchpadDeviceConfigurationChanged(
    const std::vector<ui::InputDevice>& in_devices) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::InputDeviceObserverMojo::OnTouchpadDeviceConfigurationChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->devices)::BaseType::BufferWriter
      devices_writer;
  const mojo::internal::ContainerValidateParams devices_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::ui::mojom::InputDeviceDataView>>(
      in_devices, buffer, &devices_writer, &devices_validate_params,
      &serialization_context);
  params->devices.Set(
      devices_writer.is_null() ? nullptr : devices_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->devices.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null devices in InputDeviceObserverMojo.OnTouchpadDeviceConfigurationChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void InputDeviceObserverMojoProxy::OnDeviceListsComplete(
    const std::vector<ui::InputDevice>& in_keyboard_devices, const std::vector<ui::TouchscreenDevice>& in_touchscreen_devices, const std::vector<ui::InputDevice>& in_mouse_devices, const std::vector<ui::InputDevice>& in_touchpad_devices, bool in_are_touchscreen_target_displays_valid) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::InputDeviceObserverMojo::OnDeviceListsComplete");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInputDeviceObserverMojo_OnDeviceListsComplete_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::InputDeviceObserverMojo_OnDeviceListsComplete_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->keyboard_devices)::BaseType::BufferWriter
      keyboard_devices_writer;
  const mojo::internal::ContainerValidateParams keyboard_devices_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::ui::mojom::InputDeviceDataView>>(
      in_keyboard_devices, buffer, &keyboard_devices_writer, &keyboard_devices_validate_params,
      &serialization_context);
  params->keyboard_devices.Set(
      keyboard_devices_writer.is_null() ? nullptr : keyboard_devices_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->keyboard_devices.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null keyboard_devices in InputDeviceObserverMojo.OnDeviceListsComplete request");
  typename decltype(params->touchscreen_devices)::BaseType::BufferWriter
      touchscreen_devices_writer;
  const mojo::internal::ContainerValidateParams touchscreen_devices_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::ui::mojom::TouchscreenDeviceDataView>>(
      in_touchscreen_devices, buffer, &touchscreen_devices_writer, &touchscreen_devices_validate_params,
      &serialization_context);
  params->touchscreen_devices.Set(
      touchscreen_devices_writer.is_null() ? nullptr : touchscreen_devices_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->touchscreen_devices.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null touchscreen_devices in InputDeviceObserverMojo.OnDeviceListsComplete request");
  typename decltype(params->mouse_devices)::BaseType::BufferWriter
      mouse_devices_writer;
  const mojo::internal::ContainerValidateParams mouse_devices_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::ui::mojom::InputDeviceDataView>>(
      in_mouse_devices, buffer, &mouse_devices_writer, &mouse_devices_validate_params,
      &serialization_context);
  params->mouse_devices.Set(
      mouse_devices_writer.is_null() ? nullptr : mouse_devices_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->mouse_devices.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null mouse_devices in InputDeviceObserverMojo.OnDeviceListsComplete request");
  typename decltype(params->touchpad_devices)::BaseType::BufferWriter
      touchpad_devices_writer;
  const mojo::internal::ContainerValidateParams touchpad_devices_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::ui::mojom::InputDeviceDataView>>(
      in_touchpad_devices, buffer, &touchpad_devices_writer, &touchpad_devices_validate_params,
      &serialization_context);
  params->touchpad_devices.Set(
      touchpad_devices_writer.is_null() ? nullptr : touchpad_devices_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->touchpad_devices.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null touchpad_devices in InputDeviceObserverMojo.OnDeviceListsComplete request");
  params->are_touchscreen_target_displays_valid = in_are_touchscreen_target_displays_valid;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void InputDeviceObserverMojoProxy::OnStylusStateChanged(
    ui::StylusState in_state) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::InputDeviceObserverMojo::OnStylusStateChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInputDeviceObserverMojo_OnStylusStateChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::InputDeviceObserverMojo_OnStylusStateChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ui::mojom::StylusState>(
      in_state, &params->state);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool InputDeviceObserverMojoStubDispatch::Accept(
    InputDeviceObserverMojo* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kInputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::InputDeviceObserverMojo::OnKeyboardDeviceConfigurationChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params_Data* params =
          reinterpret_cast<internal::InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<ui::InputDevice> p_devices{};
      InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDevices(&p_devices))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InputDeviceObserverMojo::OnKeyboardDeviceConfigurationChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnKeyboardDeviceConfigurationChanged(
std::move(p_devices));
      return true;
    }
    case internal::kInputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::InputDeviceObserverMojo::OnTouchscreenDeviceConfigurationChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params_Data* params =
          reinterpret_cast<internal::InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<ui::TouchscreenDevice> p_devices{};
      bool p_touchscreen_target_display_ids_changed{};
      InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDevices(&p_devices))
        success = false;
      p_touchscreen_target_display_ids_changed = input_data_view.touchscreen_target_display_ids_changed();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InputDeviceObserverMojo::OnTouchscreenDeviceConfigurationChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnTouchscreenDeviceConfigurationChanged(
std::move(p_devices), 
std::move(p_touchscreen_target_display_ids_changed));
      return true;
    }
    case internal::kInputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::InputDeviceObserverMojo::OnMouseDeviceConfigurationChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params_Data* params =
          reinterpret_cast<internal::InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<ui::InputDevice> p_devices{};
      InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDevices(&p_devices))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InputDeviceObserverMojo::OnMouseDeviceConfigurationChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnMouseDeviceConfigurationChanged(
std::move(p_devices));
      return true;
    }
    case internal::kInputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::InputDeviceObserverMojo::OnTouchpadDeviceConfigurationChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params_Data* params =
          reinterpret_cast<internal::InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<ui::InputDevice> p_devices{};
      InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDevices(&p_devices))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InputDeviceObserverMojo::OnTouchpadDeviceConfigurationChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnTouchpadDeviceConfigurationChanged(
std::move(p_devices));
      return true;
    }
    case internal::kInputDeviceObserverMojo_OnDeviceListsComplete_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::InputDeviceObserverMojo::OnDeviceListsComplete",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InputDeviceObserverMojo_OnDeviceListsComplete_Params_Data* params =
          reinterpret_cast<internal::InputDeviceObserverMojo_OnDeviceListsComplete_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<ui::InputDevice> p_keyboard_devices{};
      std::vector<ui::TouchscreenDevice> p_touchscreen_devices{};
      std::vector<ui::InputDevice> p_mouse_devices{};
      std::vector<ui::InputDevice> p_touchpad_devices{};
      bool p_are_touchscreen_target_displays_valid{};
      InputDeviceObserverMojo_OnDeviceListsComplete_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadKeyboardDevices(&p_keyboard_devices))
        success = false;
      if (!input_data_view.ReadTouchscreenDevices(&p_touchscreen_devices))
        success = false;
      if (!input_data_view.ReadMouseDevices(&p_mouse_devices))
        success = false;
      if (!input_data_view.ReadTouchpadDevices(&p_touchpad_devices))
        success = false;
      p_are_touchscreen_target_displays_valid = input_data_view.are_touchscreen_target_displays_valid();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InputDeviceObserverMojo::OnDeviceListsComplete deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnDeviceListsComplete(
std::move(p_keyboard_devices), 
std::move(p_touchscreen_devices), 
std::move(p_mouse_devices), 
std::move(p_touchpad_devices), 
std::move(p_are_touchscreen_target_displays_valid));
      return true;
    }
    case internal::kInputDeviceObserverMojo_OnStylusStateChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::InputDeviceObserverMojo::OnStylusStateChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InputDeviceObserverMojo_OnStylusStateChanged_Params_Data* params =
          reinterpret_cast<internal::InputDeviceObserverMojo_OnStylusStateChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ui::StylusState p_state{};
      InputDeviceObserverMojo_OnStylusStateChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadState(&p_state))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InputDeviceObserverMojo::OnStylusStateChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnStylusStateChanged(
std::move(p_state));
      return true;
    }
  }
  return false;
}

// static
bool InputDeviceObserverMojoStubDispatch::AcceptWithResponder(
    InputDeviceObserverMojo* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kInputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::InputDeviceObserverMojo::OnKeyboardDeviceConfigurationChanged",
               "message", message->name());
#endif
      break;
    }
    case internal::kInputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::InputDeviceObserverMojo::OnTouchscreenDeviceConfigurationChanged",
               "message", message->name());
#endif
      break;
    }
    case internal::kInputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::InputDeviceObserverMojo::OnMouseDeviceConfigurationChanged",
               "message", message->name());
#endif
      break;
    }
    case internal::kInputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::InputDeviceObserverMojo::OnTouchpadDeviceConfigurationChanged",
               "message", message->name());
#endif
      break;
    }
    case internal::kInputDeviceObserverMojo_OnDeviceListsComplete_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::InputDeviceObserverMojo::OnDeviceListsComplete",
               "message", message->name());
#endif
      break;
    }
    case internal::kInputDeviceObserverMojo_OnStylusStateChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::InputDeviceObserverMojo::OnStylusStateChanged",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool InputDeviceObserverMojoRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "InputDeviceObserverMojo RequestValidator");

  switch (message->header()->name) {
    case internal::kInputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInputDeviceObserverMojo_OnDeviceListsComplete_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputDeviceObserverMojo_OnDeviceListsComplete_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInputDeviceObserverMojo_OnStylusStateChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputDeviceObserverMojo_OnStylusStateChanged_Params_Data>(
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

void InputDeviceObserverMojoInterceptorForTesting::OnKeyboardDeviceConfigurationChanged(const std::vector<ui::InputDevice>& devices) {
  GetForwardingInterface()->OnKeyboardDeviceConfigurationChanged(std::move(devices));
}
void InputDeviceObserverMojoInterceptorForTesting::OnTouchscreenDeviceConfigurationChanged(const std::vector<ui::TouchscreenDevice>& devices, bool touchscreen_target_display_ids_changed) {
  GetForwardingInterface()->OnTouchscreenDeviceConfigurationChanged(std::move(devices), std::move(touchscreen_target_display_ids_changed));
}
void InputDeviceObserverMojoInterceptorForTesting::OnMouseDeviceConfigurationChanged(const std::vector<ui::InputDevice>& devices) {
  GetForwardingInterface()->OnMouseDeviceConfigurationChanged(std::move(devices));
}
void InputDeviceObserverMojoInterceptorForTesting::OnTouchpadDeviceConfigurationChanged(const std::vector<ui::InputDevice>& devices) {
  GetForwardingInterface()->OnTouchpadDeviceConfigurationChanged(std::move(devices));
}
void InputDeviceObserverMojoInterceptorForTesting::OnDeviceListsComplete(const std::vector<ui::InputDevice>& keyboard_devices, const std::vector<ui::TouchscreenDevice>& touchscreen_devices, const std::vector<ui::InputDevice>& mouse_devices, const std::vector<ui::InputDevice>& touchpad_devices, bool are_touchscreen_target_displays_valid) {
  GetForwardingInterface()->OnDeviceListsComplete(std::move(keyboard_devices), std::move(touchscreen_devices), std::move(mouse_devices), std::move(touchpad_devices), std::move(are_touchscreen_target_displays_valid));
}
void InputDeviceObserverMojoInterceptorForTesting::OnStylusStateChanged(ui::StylusState state) {
  GetForwardingInterface()->OnStylusStateChanged(std::move(state));
}
InputDeviceObserverMojoAsyncWaiter::InputDeviceObserverMojoAsyncWaiter(
    InputDeviceObserverMojo* proxy) : proxy_(proxy) {}

InputDeviceObserverMojoAsyncWaiter::~InputDeviceObserverMojoAsyncWaiter() = default;


const char InputDeviceServer::Name_[] = "ui.mojom.InputDeviceServer";

InputDeviceServerProxy::InputDeviceServerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void InputDeviceServerProxy::AddObserver(
    InputDeviceObserverMojoPtr in_observer) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::InputDeviceServer::AddObserver");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInputDeviceServer_AddObserver_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::InputDeviceServer_AddObserver_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ui::mojom::InputDeviceObserverMojoPtrDataView>(
      in_observer, &params->observer, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->observer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid observer in InputDeviceServer.AddObserver request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool InputDeviceServerStubDispatch::Accept(
    InputDeviceServer* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kInputDeviceServer_AddObserver_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::InputDeviceServer::AddObserver",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InputDeviceServer_AddObserver_Params_Data* params =
          reinterpret_cast<internal::InputDeviceServer_AddObserver_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      InputDeviceObserverMojoPtr p_observer{};
      InputDeviceServer_AddObserver_ParamsDataView input_data_view(params, &serialization_context);
      
      p_observer =
          input_data_view.TakeObserver<decltype(p_observer)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InputDeviceServer::AddObserver deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AddObserver(
std::move(p_observer));
      return true;
    }
  }
  return false;
}

// static
bool InputDeviceServerStubDispatch::AcceptWithResponder(
    InputDeviceServer* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kInputDeviceServer_AddObserver_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::InputDeviceServer::AddObserver",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool InputDeviceServerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "InputDeviceServer RequestValidator");

  switch (message->header()->name) {
    case internal::kInputDeviceServer_AddObserver_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputDeviceServer_AddObserver_Params_Data>(
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

void InputDeviceServerInterceptorForTesting::AddObserver(InputDeviceObserverMojoPtr observer) {
  GetForwardingInterface()->AddObserver(std::move(observer));
}
InputDeviceServerAsyncWaiter::InputDeviceServerAsyncWaiter(
    InputDeviceServer* proxy) : proxy_(proxy) {}

InputDeviceServerAsyncWaiter::~InputDeviceServerAsyncWaiter() = default;


}  // namespace mojom
}  // namespace ui

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif