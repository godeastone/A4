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

#include "services/ui/public/interfaces/ime/ime.mojom.h"

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

#include "services/ui/public/interfaces/ime/ime.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "mojo/public/cpp/base/text_direction_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "services/ui/public/interfaces/ime/ime_struct_traits.h"
#include "ui/events/mojo/event_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/gfx/range/mojo/range_struct_traits.h"
#include "ui/latency/mojo/latency_info_struct_traits.h"
namespace ui {
namespace mojom {
CandidateWindowProperties::CandidateWindowProperties()
    : page_size(),
      vertical(),
      auxiliary_text(),
      auxiliary_text_visible(),
      cursor_position(),
      cursor_visible(),
      window_position() {}

CandidateWindowProperties::CandidateWindowProperties(
    int32_t page_size_in,
    bool vertical_in,
    const std::string& auxiliary_text_in,
    bool auxiliary_text_visible_in,
    int32_t cursor_position_in,
    bool cursor_visible_in,
    CandidateWindowPosition window_position_in)
    : page_size(std::move(page_size_in)),
      vertical(std::move(vertical_in)),
      auxiliary_text(std::move(auxiliary_text_in)),
      auxiliary_text_visible(std::move(auxiliary_text_visible_in)),
      cursor_position(std::move(cursor_position_in)),
      cursor_visible(std::move(cursor_visible_in)),
      window_position(std::move(window_position_in)) {}

CandidateWindowProperties::~CandidateWindowProperties() = default;

bool CandidateWindowProperties::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
CandidateWindowEntry::CandidateWindowEntry()
    : value(),
      label(),
      annotation(),
      description_title(),
      description_body() {}

CandidateWindowEntry::CandidateWindowEntry(
    const base::string16& value_in,
    const base::string16& label_in,
    const base::string16& annotation_in,
    const base::string16& description_title_in,
    const base::string16& description_body_in)
    : value(std::move(value_in)),
      label(std::move(label_in)),
      annotation(std::move(annotation_in)),
      description_title(std::move(description_title_in)),
      description_body(std::move(description_body_in)) {}

CandidateWindowEntry::~CandidateWindowEntry() = default;

bool CandidateWindowEntry::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ImeTextSpan::ImeTextSpan()
    : type(),
      start_offset(),
      end_offset(),
      underline_color(),
      thickness(),
      background_color(),
      suggestion_highlight_color(),
      suggestions() {}

ImeTextSpan::ImeTextSpan(
    ImeTextSpanType type_in,
    uint32_t start_offset_in,
    uint32_t end_offset_in,
    uint32_t underline_color_in,
    ui::ImeTextSpan::Thickness thickness_in,
    uint32_t background_color_in,
    uint32_t suggestion_highlight_color_in,
    const std::vector<std::string>& suggestions_in)
    : type(std::move(type_in)),
      start_offset(std::move(start_offset_in)),
      end_offset(std::move(end_offset_in)),
      underline_color(std::move(underline_color_in)),
      thickness(std::move(thickness_in)),
      background_color(std::move(background_color_in)),
      suggestion_highlight_color(std::move(suggestion_highlight_color_in)),
      suggestions(std::move(suggestions_in)) {}

ImeTextSpan::~ImeTextSpan() = default;

bool ImeTextSpan::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
CompositionText::CompositionText()
    : text(),
      ime_text_spans(),
      selection() {}

CompositionText::CompositionText(
    const base::string16& text_in,
    const std::vector<ui::ImeTextSpan>& ime_text_spans_in,
    const gfx::Range& selection_in)
    : text(std::move(text_in)),
      ime_text_spans(std::move(ime_text_spans_in)),
      selection(std::move(selection_in)) {}

CompositionText::~CompositionText() = default;

bool CompositionText::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
StartSessionDetails::StartSessionDetails()
    : client(),
      input_method_request(),
      text_input_type(),
      text_input_mode(),
      text_direction(),
      text_input_flags(),
      caret_bounds() {}

StartSessionDetails::StartSessionDetails(
    TextInputClientPtrInfo client_in,
    InputMethodRequest input_method_request_in,
    ui::TextInputType text_input_type_in,
    ui::TextInputMode text_input_mode_in,
    base::i18n::TextDirection text_direction_in,
    int32_t text_input_flags_in,
    const gfx::Rect& caret_bounds_in)
    : client(std::move(client_in)),
      input_method_request(std::move(input_method_request_in)),
      text_input_type(std::move(text_input_type_in)),
      text_input_mode(std::move(text_input_mode_in)),
      text_direction(std::move(text_direction_in)),
      text_input_flags(std::move(text_input_flags_in)),
      caret_bounds(std::move(caret_bounds_in)) {}

StartSessionDetails::~StartSessionDetails() = default;

bool StartSessionDetails::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char IMEDriver::Name_[] = "ui.mojom.IMEDriver";

IMEDriverProxy::IMEDriverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void IMEDriverProxy::StartSession(
    StartSessionDetailsPtr in_details) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::IMEDriver::StartSession");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIMEDriver_StartSession_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::IMEDriver_StartSession_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->details)::BaseType::BufferWriter
      details_writer;
  mojo::internal::Serialize<::ui::mojom::StartSessionDetailsDataView>(
      in_details, buffer, &details_writer, &serialization_context);
  params->details.Set(
      details_writer.is_null() ? nullptr : details_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->details.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null details in IMEDriver.StartSession request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool IMEDriverStubDispatch::Accept(
    IMEDriver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kIMEDriver_StartSession_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::IMEDriver::StartSession",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IMEDriver_StartSession_Params_Data* params =
          reinterpret_cast<internal::IMEDriver_StartSession_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      StartSessionDetailsPtr p_details{};
      IMEDriver_StartSession_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDetails(&p_details))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "IMEDriver::StartSession deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->StartSession(
std::move(p_details));
      return true;
    }
  }
  return false;
}

// static
bool IMEDriverStubDispatch::AcceptWithResponder(
    IMEDriver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kIMEDriver_StartSession_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::IMEDriver::StartSession",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool IMEDriverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "IMEDriver RequestValidator");

  switch (message->header()->name) {
    case internal::kIMEDriver_StartSession_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IMEDriver_StartSession_Params_Data>(
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

void IMEDriverInterceptorForTesting::StartSession(StartSessionDetailsPtr details) {
  GetForwardingInterface()->StartSession(std::move(details));
}
IMEDriverAsyncWaiter::IMEDriverAsyncWaiter(
    IMEDriver* proxy) : proxy_(proxy) {}

IMEDriverAsyncWaiter::~IMEDriverAsyncWaiter() = default;


const char IMERegistrar::Name_[] = "ui.mojom.IMERegistrar";

IMERegistrarProxy::IMERegistrarProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void IMERegistrarProxy::RegisterDriver(
    IMEDriverPtr in_driver) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::IMERegistrar::RegisterDriver");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIMERegistrar_RegisterDriver_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::IMERegistrar_RegisterDriver_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ui::mojom::IMEDriverPtrDataView>(
      in_driver, &params->driver, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->driver),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid driver in IMERegistrar.RegisterDriver request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool IMERegistrarStubDispatch::Accept(
    IMERegistrar* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kIMERegistrar_RegisterDriver_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::IMERegistrar::RegisterDriver",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IMERegistrar_RegisterDriver_Params_Data* params =
          reinterpret_cast<internal::IMERegistrar_RegisterDriver_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      IMEDriverPtr p_driver{};
      IMERegistrar_RegisterDriver_ParamsDataView input_data_view(params, &serialization_context);
      
      p_driver =
          input_data_view.TakeDriver<decltype(p_driver)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "IMERegistrar::RegisterDriver deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RegisterDriver(
std::move(p_driver));
      return true;
    }
  }
  return false;
}

// static
bool IMERegistrarStubDispatch::AcceptWithResponder(
    IMERegistrar* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kIMERegistrar_RegisterDriver_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::IMERegistrar::RegisterDriver",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool IMERegistrarRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "IMERegistrar RequestValidator");

  switch (message->header()->name) {
    case internal::kIMERegistrar_RegisterDriver_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IMERegistrar_RegisterDriver_Params_Data>(
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

void IMERegistrarInterceptorForTesting::RegisterDriver(IMEDriverPtr driver) {
  GetForwardingInterface()->RegisterDriver(std::move(driver));
}
IMERegistrarAsyncWaiter::IMERegistrarAsyncWaiter(
    IMERegistrar* proxy) : proxy_(proxy) {}

IMERegistrarAsyncWaiter::~IMERegistrarAsyncWaiter() = default;


const char InputMethod::Name_[] = "ui.mojom.InputMethod";

class InputMethod_ProcessKeyEvent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  InputMethod_ProcessKeyEvent_ForwardToCallback(
      InputMethod::ProcessKeyEventCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  InputMethod::ProcessKeyEventCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(InputMethod_ProcessKeyEvent_ForwardToCallback);
};

InputMethodProxy::InputMethodProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void InputMethodProxy::OnTextInputTypeChanged(
    ui::TextInputType in_text_input_type) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::InputMethod::OnTextInputTypeChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInputMethod_OnTextInputTypeChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::InputMethod_OnTextInputTypeChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ui::mojom::TextInputType>(
      in_text_input_type, &params->text_input_type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void InputMethodProxy::OnCaretBoundsChanged(
    const gfx::Rect& in_caret_bounds) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::InputMethod::OnCaretBoundsChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInputMethod_OnCaretBoundsChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::InputMethod_OnCaretBoundsChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->caret_bounds)::BaseType::BufferWriter
      caret_bounds_writer;
  mojo::internal::Serialize<::gfx::mojom::RectDataView>(
      in_caret_bounds, buffer, &caret_bounds_writer, &serialization_context);
  params->caret_bounds.Set(
      caret_bounds_writer.is_null() ? nullptr : caret_bounds_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->caret_bounds.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null caret_bounds in InputMethod.OnCaretBoundsChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void InputMethodProxy::ProcessKeyEvent(
    std::unique_ptr<ui::Event> in_key_event, ProcessKeyEventCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::InputMethod::ProcessKeyEvent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInputMethod_ProcessKeyEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::InputMethod_ProcessKeyEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->key_event)::BaseType::BufferWriter
      key_event_writer;
  mojo::internal::Serialize<::ui::mojom::EventDataView>(
      in_key_event, buffer, &key_event_writer, &serialization_context);
  params->key_event.Set(
      key_event_writer.is_null() ? nullptr : key_event_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key_event.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key_event in InputMethod.ProcessKeyEvent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new InputMethod_ProcessKeyEvent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void InputMethodProxy::CancelComposition(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::InputMethod::CancelComposition");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInputMethod_CancelComposition_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::InputMethod_CancelComposition_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class InputMethod_ProcessKeyEvent_ProxyToResponder {
 public:
  static InputMethod::ProcessKeyEventCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<InputMethod_ProcessKeyEvent_ProxyToResponder> proxy(
        new InputMethod_ProcessKeyEvent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&InputMethod_ProcessKeyEvent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~InputMethod_ProcessKeyEvent_ProxyToResponder() {
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
  InputMethod_ProcessKeyEvent_ProxyToResponder(
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
        << "InputMethod::ProcessKeyEventCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_handled);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(InputMethod_ProcessKeyEvent_ProxyToResponder);
};

bool InputMethod_ProcessKeyEvent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "ui::mojom::InputMethod::ProcessKeyEventCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::InputMethod_ProcessKeyEvent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::InputMethod_ProcessKeyEvent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_handled{};
  InputMethod_ProcessKeyEvent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_handled = input_data_view.handled();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "InputMethod::ProcessKeyEvent response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_handled));
  return true;
}

void InputMethod_ProcessKeyEvent_ProxyToResponder::Run(
    bool in_handled) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInputMethod_ProcessKeyEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::InputMethod_ProcessKeyEvent_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->handled = in_handled;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::InputMethod::ProcessKeyEventCallback",
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
bool InputMethodStubDispatch::Accept(
    InputMethod* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kInputMethod_OnTextInputTypeChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::InputMethod::OnTextInputTypeChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InputMethod_OnTextInputTypeChanged_Params_Data* params =
          reinterpret_cast<internal::InputMethod_OnTextInputTypeChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ui::TextInputType p_text_input_type{};
      InputMethod_OnTextInputTypeChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadTextInputType(&p_text_input_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InputMethod::OnTextInputTypeChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnTextInputTypeChanged(
std::move(p_text_input_type));
      return true;
    }
    case internal::kInputMethod_OnCaretBoundsChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::InputMethod::OnCaretBoundsChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InputMethod_OnCaretBoundsChanged_Params_Data* params =
          reinterpret_cast<internal::InputMethod_OnCaretBoundsChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::Rect p_caret_bounds{};
      InputMethod_OnCaretBoundsChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCaretBounds(&p_caret_bounds))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InputMethod::OnCaretBoundsChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnCaretBoundsChanged(
std::move(p_caret_bounds));
      return true;
    }
    case internal::kInputMethod_ProcessKeyEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::InputMethod::ProcessKeyEvent",
               "message", message->name());
#endif
      break;
    }
    case internal::kInputMethod_CancelComposition_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::InputMethod::CancelComposition",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InputMethod_CancelComposition_Params_Data* params =
          reinterpret_cast<internal::InputMethod_CancelComposition_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      InputMethod_CancelComposition_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InputMethod::CancelComposition deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CancelComposition();
      return true;
    }
  }
  return false;
}

// static
bool InputMethodStubDispatch::AcceptWithResponder(
    InputMethod* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kInputMethod_OnTextInputTypeChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::InputMethod::OnTextInputTypeChanged",
               "message", message->name());
#endif
      break;
    }
    case internal::kInputMethod_OnCaretBoundsChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::InputMethod::OnCaretBoundsChanged",
               "message", message->name());
#endif
      break;
    }
    case internal::kInputMethod_ProcessKeyEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::InputMethod::ProcessKeyEvent",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::InputMethod_ProcessKeyEvent_Params_Data* params =
          reinterpret_cast<
              internal::InputMethod_ProcessKeyEvent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::unique_ptr<ui::Event> p_key_event{};
      InputMethod_ProcessKeyEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadKeyEvent(&p_key_event))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InputMethod::ProcessKeyEvent deserializer");
        return false;
      }
      InputMethod::ProcessKeyEventCallback callback =
          InputMethod_ProcessKeyEvent_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ProcessKeyEvent(
std::move(p_key_event), std::move(callback));
      return true;
    }
    case internal::kInputMethod_CancelComposition_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::InputMethod::CancelComposition",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool InputMethodRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "InputMethod RequestValidator");

  switch (message->header()->name) {
    case internal::kInputMethod_OnTextInputTypeChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputMethod_OnTextInputTypeChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInputMethod_OnCaretBoundsChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputMethod_OnCaretBoundsChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInputMethod_ProcessKeyEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputMethod_ProcessKeyEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInputMethod_CancelComposition_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputMethod_CancelComposition_Params_Data>(
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

bool InputMethodResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "InputMethod ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kInputMethod_ProcessKeyEvent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputMethod_ProcessKeyEvent_ResponseParams_Data>(
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
void InputMethodInterceptorForTesting::OnTextInputTypeChanged(ui::TextInputType text_input_type) {
  GetForwardingInterface()->OnTextInputTypeChanged(std::move(text_input_type));
}
void InputMethodInterceptorForTesting::OnCaretBoundsChanged(const gfx::Rect& caret_bounds) {
  GetForwardingInterface()->OnCaretBoundsChanged(std::move(caret_bounds));
}
void InputMethodInterceptorForTesting::ProcessKeyEvent(std::unique_ptr<ui::Event> key_event, ProcessKeyEventCallback callback) {
  GetForwardingInterface()->ProcessKeyEvent(std::move(key_event), std::move(callback));
}
void InputMethodInterceptorForTesting::CancelComposition() {
  GetForwardingInterface()->CancelComposition();
}
InputMethodAsyncWaiter::InputMethodAsyncWaiter(
    InputMethod* proxy) : proxy_(proxy) {}

InputMethodAsyncWaiter::~InputMethodAsyncWaiter() = default;

void InputMethodAsyncWaiter::ProcessKeyEvent(
    std::unique_ptr<ui::Event> key_event, bool* out_handled) {
  base::RunLoop loop;
  proxy_->ProcessKeyEvent(std::move(key_event),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_handled
,
             bool handled) {*out_handled = std::move(handled);
            loop->Quit();
          },
          &loop,
          out_handled));
  loop.Run();
}

const char TextInputClient::Name_[] = "ui.mojom.TextInputClient";

class TextInputClient_DispatchKeyEventPostIME_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  TextInputClient_DispatchKeyEventPostIME_ForwardToCallback(
      TextInputClient::DispatchKeyEventPostIMECallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  TextInputClient::DispatchKeyEventPostIMECallback callback_;
  DISALLOW_COPY_AND_ASSIGN(TextInputClient_DispatchKeyEventPostIME_ForwardToCallback);
};

TextInputClientProxy::TextInputClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void TextInputClientProxy::SetCompositionText(
    const ui::CompositionText& in_composition) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::TextInputClient::SetCompositionText");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTextInputClient_SetCompositionText_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::TextInputClient_SetCompositionText_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->composition)::BaseType::BufferWriter
      composition_writer;
  mojo::internal::Serialize<::ui::mojom::CompositionTextDataView>(
      in_composition, buffer, &composition_writer, &serialization_context);
  params->composition.Set(
      composition_writer.is_null() ? nullptr : composition_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->composition.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null composition in TextInputClient.SetCompositionText request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void TextInputClientProxy::ConfirmCompositionText(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::TextInputClient::ConfirmCompositionText");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTextInputClient_ConfirmCompositionText_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::TextInputClient_ConfirmCompositionText_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void TextInputClientProxy::ClearCompositionText(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::TextInputClient::ClearCompositionText");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTextInputClient_ClearCompositionText_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::TextInputClient_ClearCompositionText_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void TextInputClientProxy::InsertText(
    const base::string16& in_text) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::TextInputClient::InsertText");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTextInputClient_InsertText_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::TextInputClient_InsertText_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->text)::BaseType::BufferWriter
      text_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_text, buffer, &text_writer, &serialization_context);
  params->text.Set(
      text_writer.is_null() ? nullptr : text_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->text.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null text in TextInputClient.InsertText request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void TextInputClientProxy::InsertChar(
    std::unique_ptr<ui::Event> in_event) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::TextInputClient::InsertChar");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTextInputClient_InsertChar_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::TextInputClient_InsertChar_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->event)::BaseType::BufferWriter
      event_writer;
  mojo::internal::Serialize<::ui::mojom::EventDataView>(
      in_event, buffer, &event_writer, &serialization_context);
  params->event.Set(
      event_writer.is_null() ? nullptr : event_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->event.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null event in TextInputClient.InsertChar request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void TextInputClientProxy::DispatchKeyEventPostIME(
    std::unique_ptr<ui::Event> in_event, DispatchKeyEventPostIMECallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::TextInputClient::DispatchKeyEventPostIME");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTextInputClient_DispatchKeyEventPostIME_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::TextInputClient_DispatchKeyEventPostIME_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->event)::BaseType::BufferWriter
      event_writer;
  mojo::internal::Serialize<::ui::mojom::EventDataView>(
      in_event, buffer, &event_writer, &serialization_context);
  params->event.Set(
      event_writer.is_null() ? nullptr : event_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->event.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null event in TextInputClient.DispatchKeyEventPostIME request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new TextInputClient_DispatchKeyEventPostIME_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class TextInputClient_DispatchKeyEventPostIME_ProxyToResponder {
 public:
  static TextInputClient::DispatchKeyEventPostIMECallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<TextInputClient_DispatchKeyEventPostIME_ProxyToResponder> proxy(
        new TextInputClient_DispatchKeyEventPostIME_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&TextInputClient_DispatchKeyEventPostIME_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~TextInputClient_DispatchKeyEventPostIME_ProxyToResponder() {
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
  TextInputClient_DispatchKeyEventPostIME_ProxyToResponder(
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
        << "TextInputClient::DispatchKeyEventPostIMECallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_stopped_propagation);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(TextInputClient_DispatchKeyEventPostIME_ProxyToResponder);
};

bool TextInputClient_DispatchKeyEventPostIME_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "ui::mojom::TextInputClient::DispatchKeyEventPostIMECallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::TextInputClient_DispatchKeyEventPostIME_ResponseParams_Data* params =
      reinterpret_cast<
          internal::TextInputClient_DispatchKeyEventPostIME_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_stopped_propagation{};
  TextInputClient_DispatchKeyEventPostIME_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_stopped_propagation = input_data_view.stopped_propagation();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "TextInputClient::DispatchKeyEventPostIME response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_stopped_propagation));
  return true;
}

void TextInputClient_DispatchKeyEventPostIME_ProxyToResponder::Run(
    bool in_stopped_propagation) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTextInputClient_DispatchKeyEventPostIME_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::TextInputClient_DispatchKeyEventPostIME_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->stopped_propagation = in_stopped_propagation;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::TextInputClient::DispatchKeyEventPostIMECallback",
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
bool TextInputClientStubDispatch::Accept(
    TextInputClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kTextInputClient_SetCompositionText_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::TextInputClient::SetCompositionText",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TextInputClient_SetCompositionText_Params_Data* params =
          reinterpret_cast<internal::TextInputClient_SetCompositionText_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ui::CompositionText p_composition{};
      TextInputClient_SetCompositionText_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadComposition(&p_composition))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "TextInputClient::SetCompositionText deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetCompositionText(
std::move(p_composition));
      return true;
    }
    case internal::kTextInputClient_ConfirmCompositionText_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::TextInputClient::ConfirmCompositionText",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TextInputClient_ConfirmCompositionText_Params_Data* params =
          reinterpret_cast<internal::TextInputClient_ConfirmCompositionText_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      TextInputClient_ConfirmCompositionText_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "TextInputClient::ConfirmCompositionText deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ConfirmCompositionText();
      return true;
    }
    case internal::kTextInputClient_ClearCompositionText_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::TextInputClient::ClearCompositionText",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TextInputClient_ClearCompositionText_Params_Data* params =
          reinterpret_cast<internal::TextInputClient_ClearCompositionText_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      TextInputClient_ClearCompositionText_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "TextInputClient::ClearCompositionText deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ClearCompositionText();
      return true;
    }
    case internal::kTextInputClient_InsertText_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::TextInputClient::InsertText",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TextInputClient_InsertText_Params_Data* params =
          reinterpret_cast<internal::TextInputClient_InsertText_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::string16 p_text{};
      TextInputClient_InsertText_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadText(&p_text))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "TextInputClient::InsertText deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->InsertText(
std::move(p_text));
      return true;
    }
    case internal::kTextInputClient_InsertChar_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::TextInputClient::InsertChar",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TextInputClient_InsertChar_Params_Data* params =
          reinterpret_cast<internal::TextInputClient_InsertChar_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::unique_ptr<ui::Event> p_event{};
      TextInputClient_InsertChar_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadEvent(&p_event))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "TextInputClient::InsertChar deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->InsertChar(
std::move(p_event));
      return true;
    }
    case internal::kTextInputClient_DispatchKeyEventPostIME_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::TextInputClient::DispatchKeyEventPostIME",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool TextInputClientStubDispatch::AcceptWithResponder(
    TextInputClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kTextInputClient_SetCompositionText_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::TextInputClient::SetCompositionText",
               "message", message->name());
#endif
      break;
    }
    case internal::kTextInputClient_ConfirmCompositionText_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::TextInputClient::ConfirmCompositionText",
               "message", message->name());
#endif
      break;
    }
    case internal::kTextInputClient_ClearCompositionText_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::TextInputClient::ClearCompositionText",
               "message", message->name());
#endif
      break;
    }
    case internal::kTextInputClient_InsertText_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::TextInputClient::InsertText",
               "message", message->name());
#endif
      break;
    }
    case internal::kTextInputClient_InsertChar_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::TextInputClient::InsertChar",
               "message", message->name());
#endif
      break;
    }
    case internal::kTextInputClient_DispatchKeyEventPostIME_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::TextInputClient::DispatchKeyEventPostIME",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::TextInputClient_DispatchKeyEventPostIME_Params_Data* params =
          reinterpret_cast<
              internal::TextInputClient_DispatchKeyEventPostIME_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::unique_ptr<ui::Event> p_event{};
      TextInputClient_DispatchKeyEventPostIME_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadEvent(&p_event))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "TextInputClient::DispatchKeyEventPostIME deserializer");
        return false;
      }
      TextInputClient::DispatchKeyEventPostIMECallback callback =
          TextInputClient_DispatchKeyEventPostIME_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DispatchKeyEventPostIME(
std::move(p_event), std::move(callback));
      return true;
    }
  }
  return false;
}

bool TextInputClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "TextInputClient RequestValidator");

  switch (message->header()->name) {
    case internal::kTextInputClient_SetCompositionText_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TextInputClient_SetCompositionText_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTextInputClient_ConfirmCompositionText_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TextInputClient_ConfirmCompositionText_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTextInputClient_ClearCompositionText_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TextInputClient_ClearCompositionText_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTextInputClient_InsertText_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TextInputClient_InsertText_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTextInputClient_InsertChar_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TextInputClient_InsertChar_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTextInputClient_DispatchKeyEventPostIME_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TextInputClient_DispatchKeyEventPostIME_Params_Data>(
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

bool TextInputClientResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "TextInputClient ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kTextInputClient_DispatchKeyEventPostIME_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::TextInputClient_DispatchKeyEventPostIME_ResponseParams_Data>(
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
void TextInputClientInterceptorForTesting::SetCompositionText(const ui::CompositionText& composition) {
  GetForwardingInterface()->SetCompositionText(std::move(composition));
}
void TextInputClientInterceptorForTesting::ConfirmCompositionText() {
  GetForwardingInterface()->ConfirmCompositionText();
}
void TextInputClientInterceptorForTesting::ClearCompositionText() {
  GetForwardingInterface()->ClearCompositionText();
}
void TextInputClientInterceptorForTesting::InsertText(const base::string16& text) {
  GetForwardingInterface()->InsertText(std::move(text));
}
void TextInputClientInterceptorForTesting::InsertChar(std::unique_ptr<ui::Event> event) {
  GetForwardingInterface()->InsertChar(std::move(event));
}
void TextInputClientInterceptorForTesting::DispatchKeyEventPostIME(std::unique_ptr<ui::Event> event, DispatchKeyEventPostIMECallback callback) {
  GetForwardingInterface()->DispatchKeyEventPostIME(std::move(event), std::move(callback));
}
TextInputClientAsyncWaiter::TextInputClientAsyncWaiter(
    TextInputClient* proxy) : proxy_(proxy) {}

TextInputClientAsyncWaiter::~TextInputClientAsyncWaiter() = default;

void TextInputClientAsyncWaiter::DispatchKeyEventPostIME(
    std::unique_ptr<ui::Event> event, bool* out_stopped_propagation) {
  base::RunLoop loop;
  proxy_->DispatchKeyEventPostIME(std::move(event),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_stopped_propagation
,
             bool stopped_propagation) {*out_stopped_propagation = std::move(stopped_propagation);
            loop->Quit();
          },
          &loop,
          out_stopped_propagation));
  loop.Run();
}

}  // namespace mojom
}  // namespace ui

namespace mojo {


// static
bool StructTraits<::ui::mojom::CandidateWindowProperties::DataView, ::ui::mojom::CandidateWindowPropertiesPtr>::Read(
    ::ui::mojom::CandidateWindowProperties::DataView input,
    ::ui::mojom::CandidateWindowPropertiesPtr* output) {
  bool success = true;
  ::ui::mojom::CandidateWindowPropertiesPtr result(::ui::mojom::CandidateWindowProperties::New());
  
      result->page_size = input.page_size();
      result->vertical = input.vertical();
      if (!input.ReadAuxiliaryText(&result->auxiliary_text))
        success = false;
      result->auxiliary_text_visible = input.auxiliary_text_visible();
      result->cursor_position = input.cursor_position();
      result->cursor_visible = input.cursor_visible();
      if (!input.ReadWindowPosition(&result->window_position))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ui::mojom::CandidateWindowEntry::DataView, ::ui::mojom::CandidateWindowEntryPtr>::Read(
    ::ui::mojom::CandidateWindowEntry::DataView input,
    ::ui::mojom::CandidateWindowEntryPtr* output) {
  bool success = true;
  ::ui::mojom::CandidateWindowEntryPtr result(::ui::mojom::CandidateWindowEntry::New());
  
      if (!input.ReadValue(&result->value))
        success = false;
      if (!input.ReadLabel(&result->label))
        success = false;
      if (!input.ReadAnnotation(&result->annotation))
        success = false;
      if (!input.ReadDescriptionTitle(&result->description_title))
        success = false;
      if (!input.ReadDescriptionBody(&result->description_body))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ui::mojom::ImeTextSpan::DataView, ::ui::mojom::ImeTextSpanPtr>::Read(
    ::ui::mojom::ImeTextSpan::DataView input,
    ::ui::mojom::ImeTextSpanPtr* output) {
  bool success = true;
  ::ui::mojom::ImeTextSpanPtr result(::ui::mojom::ImeTextSpan::New());
  
      if (!input.ReadType(&result->type))
        success = false;
      result->start_offset = input.start_offset();
      result->end_offset = input.end_offset();
      result->underline_color = input.underline_color();
      if (!input.ReadThickness(&result->thickness))
        success = false;
      result->background_color = input.background_color();
      result->suggestion_highlight_color = input.suggestion_highlight_color();
      if (!input.ReadSuggestions(&result->suggestions))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ui::mojom::CompositionText::DataView, ::ui::mojom::CompositionTextPtr>::Read(
    ::ui::mojom::CompositionText::DataView input,
    ::ui::mojom::CompositionTextPtr* output) {
  bool success = true;
  ::ui::mojom::CompositionTextPtr result(::ui::mojom::CompositionText::New());
  
      if (!input.ReadText(&result->text))
        success = false;
      if (!input.ReadImeTextSpans(&result->ime_text_spans))
        success = false;
      if (!input.ReadSelection(&result->selection))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ui::mojom::StartSessionDetails::DataView, ::ui::mojom::StartSessionDetailsPtr>::Read(
    ::ui::mojom::StartSessionDetails::DataView input,
    ::ui::mojom::StartSessionDetailsPtr* output) {
  bool success = true;
  ::ui::mojom::StartSessionDetailsPtr result(::ui::mojom::StartSessionDetails::New());
  
      result->client =
          input.TakeClient<decltype(result->client)>();
      result->input_method_request =
          input.TakeInputMethodRequest<decltype(result->input_method_request)>();
      if (!input.ReadTextInputType(&result->text_input_type))
        success = false;
      if (!input.ReadTextInputMode(&result->text_input_mode))
        success = false;
      if (!input.ReadTextDirection(&result->text_direction))
        success = false;
      result->text_input_flags = input.text_input_flags();
      if (!input.ReadCaretBounds(&result->caret_bounds))
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