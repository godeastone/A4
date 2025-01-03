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

#include "services/resource_coordinator/public/mojom/coordination_unit.mojom-blink.h"

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

#include "services/resource_coordinator/public/mojom/coordination_unit.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "ipc/ipc_message_utils.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
namespace resource_coordinator {
namespace mojom {
namespace blink {
CoordinationUnitID::CoordinationUnitID()
    : type(),
      id() {}

CoordinationUnitID::CoordinationUnitID(
    CoordinationUnitType type_in,
    int64_t id_in)
    : type(std::move(type_in)),
      id(std::move(id_in)) {}

CoordinationUnitID::~CoordinationUnitID() = default;
size_t CoordinationUnitID::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->type);
  seed = mojo::internal::WTFHash(seed, this->id);
  return seed;
}

bool CoordinationUnitID::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ProcessResourceMeasurement::ProcessResourceMeasurement()
    : pid(),
      cpu_usage(),
      private_footprint_kb(0U) {}

ProcessResourceMeasurement::ProcessResourceMeasurement(
    ::mojo_base::mojom::blink::ProcessIdPtr pid_in,
    WTF::TimeDelta cpu_usage_in,
    uint32_t private_footprint_kb_in)
    : pid(std::move(pid_in)),
      cpu_usage(std::move(cpu_usage_in)),
      private_footprint_kb(std::move(private_footprint_kb_in)) {}

ProcessResourceMeasurement::~ProcessResourceMeasurement() = default;

bool ProcessResourceMeasurement::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ProcessResourceMeasurementBatch::ProcessResourceMeasurementBatch()
    : batch_started_time(),
      batch_ended_time(),
      measurements() {}

ProcessResourceMeasurementBatch::ProcessResourceMeasurementBatch(
    ::mojo_base::mojom::blink::TimeTicksPtr batch_started_time_in,
    ::mojo_base::mojom::blink::TimeTicksPtr batch_ended_time_in,
    WTF::Vector<ProcessResourceMeasurementPtr> measurements_in)
    : batch_started_time(std::move(batch_started_time_in)),
      batch_ended_time(std::move(batch_ended_time_in)),
      measurements(std::move(measurements_in)) {}

ProcessResourceMeasurementBatch::~ProcessResourceMeasurementBatch() = default;

bool ProcessResourceMeasurementBatch::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char FrameCoordinationUnit::Name_[] = "resource_coordinator.mojom.FrameCoordinationUnit";

class FrameCoordinationUnit_GetID_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FrameCoordinationUnit_GetID_ForwardToCallback(
      FrameCoordinationUnit::GetIDCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FrameCoordinationUnit::GetIDCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FrameCoordinationUnit_GetID_ForwardToCallback);
};

FrameCoordinationUnitProxy::FrameCoordinationUnitProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void FrameCoordinationUnitProxy::GetID(
    GetIDCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::FrameCoordinationUnit::GetID");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameCoordinationUnit_GetID_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::FrameCoordinationUnit_GetID_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FrameCoordinationUnit_GetID_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void FrameCoordinationUnitProxy::AddBinding(
    FrameCoordinationUnitRequest in_request) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::FrameCoordinationUnit::AddBinding");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameCoordinationUnit_AddBinding_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::FrameCoordinationUnit_AddBinding_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::resource_coordinator::mojom::FrameCoordinationUnitRequestDataView>(
      in_request, &params->request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid request in FrameCoordinationUnit.AddBinding request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameCoordinationUnitProxy::AddChildFrame(
    CoordinationUnitIDPtr in_cu_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::FrameCoordinationUnit::AddChildFrame");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameCoordinationUnit_AddChildFrame_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::FrameCoordinationUnit_AddChildFrame_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->cu_id)::BaseType::BufferWriter
      cu_id_writer;
  mojo::internal::Serialize<::resource_coordinator::mojom::CoordinationUnitIDDataView>(
      in_cu_id, buffer, &cu_id_writer, &serialization_context);
  params->cu_id.Set(
      cu_id_writer.is_null() ? nullptr : cu_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cu_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cu_id in FrameCoordinationUnit.AddChildFrame request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameCoordinationUnitProxy::RemoveChildFrame(
    CoordinationUnitIDPtr in_cu_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::FrameCoordinationUnit::RemoveChildFrame");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameCoordinationUnit_RemoveChildFrame_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::FrameCoordinationUnit_RemoveChildFrame_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->cu_id)::BaseType::BufferWriter
      cu_id_writer;
  mojo::internal::Serialize<::resource_coordinator::mojom::CoordinationUnitIDDataView>(
      in_cu_id, buffer, &cu_id_writer, &serialization_context);
  params->cu_id.Set(
      cu_id_writer.is_null() ? nullptr : cu_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cu_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cu_id in FrameCoordinationUnit.RemoveChildFrame request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameCoordinationUnitProxy::SetAudibility(
    bool in_audible) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::FrameCoordinationUnit::SetAudibility");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameCoordinationUnit_SetAudibility_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::FrameCoordinationUnit_SetAudibility_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->audible = in_audible;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameCoordinationUnitProxy::SetNetworkAlmostIdle(
    bool in_idle) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::FrameCoordinationUnit::SetNetworkAlmostIdle");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameCoordinationUnit_SetNetworkAlmostIdle_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::FrameCoordinationUnit_SetNetworkAlmostIdle_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->idle = in_idle;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameCoordinationUnitProxy::SetLifecycleState(
    ::resource_coordinator::mojom::blink::LifecycleState in_state) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::FrameCoordinationUnit::SetLifecycleState");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameCoordinationUnit_SetLifecycleState_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::FrameCoordinationUnit_SetLifecycleState_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::resource_coordinator::mojom::LifecycleState>(
      in_state, &params->state);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameCoordinationUnitProxy::OnAlertFired(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::FrameCoordinationUnit::OnAlertFired");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameCoordinationUnit_OnAlertFired_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::FrameCoordinationUnit_OnAlertFired_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameCoordinationUnitProxy::OnNonPersistentNotificationCreated(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::FrameCoordinationUnit::OnNonPersistentNotificationCreated");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameCoordinationUnit_OnNonPersistentNotificationCreated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::FrameCoordinationUnit_OnNonPersistentNotificationCreated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class FrameCoordinationUnit_GetID_ProxyToResponder {
 public:
  static FrameCoordinationUnit::GetIDCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FrameCoordinationUnit_GetID_ProxyToResponder> proxy(
        new FrameCoordinationUnit_GetID_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FrameCoordinationUnit_GetID_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FrameCoordinationUnit_GetID_ProxyToResponder() {
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
  FrameCoordinationUnit_GetID_ProxyToResponder(
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
        << "FrameCoordinationUnit::GetIDCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      CoordinationUnitIDPtr in_id);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FrameCoordinationUnit_GetID_ProxyToResponder);
};

bool FrameCoordinationUnit_GetID_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "resource_coordinator::mojom::FrameCoordinationUnit::GetIDCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FrameCoordinationUnit_GetID_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FrameCoordinationUnit_GetID_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  CoordinationUnitIDPtr p_id{};
  FrameCoordinationUnit_GetID_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadId(&p_id))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "FrameCoordinationUnit::GetID response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_id));
  return true;
}

void FrameCoordinationUnit_GetID_ProxyToResponder::Run(
    CoordinationUnitIDPtr in_id) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameCoordinationUnit_GetID_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::FrameCoordinationUnit_GetID_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->id)::BaseType::BufferWriter
      id_writer;
  mojo::internal::Serialize<::resource_coordinator::mojom::CoordinationUnitIDDataView>(
      in_id, buffer, &id_writer, &serialization_context);
  params->id.Set(
      id_writer.is_null() ? nullptr : id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null id in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::FrameCoordinationUnit::GetIDCallback",
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
bool FrameCoordinationUnitStubDispatch::Accept(
    FrameCoordinationUnit* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kFrameCoordinationUnit_GetID_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::FrameCoordinationUnit::GetID",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameCoordinationUnit_AddBinding_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::FrameCoordinationUnit::AddBinding",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameCoordinationUnit_AddBinding_Params_Data* params =
          reinterpret_cast<internal::FrameCoordinationUnit_AddBinding_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      FrameCoordinationUnitRequest p_request{};
      FrameCoordinationUnit_AddBinding_ParamsDataView input_data_view(params, &serialization_context);
      
      p_request =
          input_data_view.TakeRequest<decltype(p_request)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameCoordinationUnit::AddBinding deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AddBinding(
std::move(p_request));
      return true;
    }
    case internal::kFrameCoordinationUnit_AddChildFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::FrameCoordinationUnit::AddChildFrame",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameCoordinationUnit_AddChildFrame_Params_Data* params =
          reinterpret_cast<internal::FrameCoordinationUnit_AddChildFrame_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CoordinationUnitIDPtr p_cu_id{};
      FrameCoordinationUnit_AddChildFrame_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCuId(&p_cu_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameCoordinationUnit::AddChildFrame deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AddChildFrame(
std::move(p_cu_id));
      return true;
    }
    case internal::kFrameCoordinationUnit_RemoveChildFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::FrameCoordinationUnit::RemoveChildFrame",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameCoordinationUnit_RemoveChildFrame_Params_Data* params =
          reinterpret_cast<internal::FrameCoordinationUnit_RemoveChildFrame_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CoordinationUnitIDPtr p_cu_id{};
      FrameCoordinationUnit_RemoveChildFrame_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCuId(&p_cu_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameCoordinationUnit::RemoveChildFrame deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RemoveChildFrame(
std::move(p_cu_id));
      return true;
    }
    case internal::kFrameCoordinationUnit_SetAudibility_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::FrameCoordinationUnit::SetAudibility",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameCoordinationUnit_SetAudibility_Params_Data* params =
          reinterpret_cast<internal::FrameCoordinationUnit_SetAudibility_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_audible{};
      FrameCoordinationUnit_SetAudibility_ParamsDataView input_data_view(params, &serialization_context);
      
      p_audible = input_data_view.audible();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameCoordinationUnit::SetAudibility deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetAudibility(
std::move(p_audible));
      return true;
    }
    case internal::kFrameCoordinationUnit_SetNetworkAlmostIdle_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::FrameCoordinationUnit::SetNetworkAlmostIdle",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameCoordinationUnit_SetNetworkAlmostIdle_Params_Data* params =
          reinterpret_cast<internal::FrameCoordinationUnit_SetNetworkAlmostIdle_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_idle{};
      FrameCoordinationUnit_SetNetworkAlmostIdle_ParamsDataView input_data_view(params, &serialization_context);
      
      p_idle = input_data_view.idle();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameCoordinationUnit::SetNetworkAlmostIdle deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetNetworkAlmostIdle(
std::move(p_idle));
      return true;
    }
    case internal::kFrameCoordinationUnit_SetLifecycleState_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::FrameCoordinationUnit::SetLifecycleState",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameCoordinationUnit_SetLifecycleState_Params_Data* params =
          reinterpret_cast<internal::FrameCoordinationUnit_SetLifecycleState_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::resource_coordinator::mojom::blink::LifecycleState p_state{};
      FrameCoordinationUnit_SetLifecycleState_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadState(&p_state))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameCoordinationUnit::SetLifecycleState deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetLifecycleState(
std::move(p_state));
      return true;
    }
    case internal::kFrameCoordinationUnit_OnAlertFired_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::FrameCoordinationUnit::OnAlertFired",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameCoordinationUnit_OnAlertFired_Params_Data* params =
          reinterpret_cast<internal::FrameCoordinationUnit_OnAlertFired_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      FrameCoordinationUnit_OnAlertFired_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameCoordinationUnit::OnAlertFired deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnAlertFired();
      return true;
    }
    case internal::kFrameCoordinationUnit_OnNonPersistentNotificationCreated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::FrameCoordinationUnit::OnNonPersistentNotificationCreated",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameCoordinationUnit_OnNonPersistentNotificationCreated_Params_Data* params =
          reinterpret_cast<internal::FrameCoordinationUnit_OnNonPersistentNotificationCreated_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      FrameCoordinationUnit_OnNonPersistentNotificationCreated_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameCoordinationUnit::OnNonPersistentNotificationCreated deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnNonPersistentNotificationCreated();
      return true;
    }
  }
  return false;
}

// static
bool FrameCoordinationUnitStubDispatch::AcceptWithResponder(
    FrameCoordinationUnit* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kFrameCoordinationUnit_GetID_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::FrameCoordinationUnit::GetID",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::FrameCoordinationUnit_GetID_Params_Data* params =
          reinterpret_cast<
              internal::FrameCoordinationUnit_GetID_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      FrameCoordinationUnit_GetID_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameCoordinationUnit::GetID deserializer");
        return false;
      }
      FrameCoordinationUnit::GetIDCallback callback =
          FrameCoordinationUnit_GetID_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetID(std::move(callback));
      return true;
    }
    case internal::kFrameCoordinationUnit_AddBinding_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::FrameCoordinationUnit::AddBinding",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameCoordinationUnit_AddChildFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::FrameCoordinationUnit::AddChildFrame",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameCoordinationUnit_RemoveChildFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::FrameCoordinationUnit::RemoveChildFrame",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameCoordinationUnit_SetAudibility_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::FrameCoordinationUnit::SetAudibility",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameCoordinationUnit_SetNetworkAlmostIdle_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::FrameCoordinationUnit::SetNetworkAlmostIdle",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameCoordinationUnit_SetLifecycleState_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::FrameCoordinationUnit::SetLifecycleState",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameCoordinationUnit_OnAlertFired_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::FrameCoordinationUnit::OnAlertFired",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameCoordinationUnit_OnNonPersistentNotificationCreated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::FrameCoordinationUnit::OnNonPersistentNotificationCreated",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool FrameCoordinationUnitRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FrameCoordinationUnit RequestValidator");

  switch (message->header()->name) {
    case internal::kFrameCoordinationUnit_GetID_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameCoordinationUnit_GetID_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameCoordinationUnit_AddBinding_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameCoordinationUnit_AddBinding_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameCoordinationUnit_AddChildFrame_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameCoordinationUnit_AddChildFrame_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameCoordinationUnit_RemoveChildFrame_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameCoordinationUnit_RemoveChildFrame_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameCoordinationUnit_SetAudibility_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameCoordinationUnit_SetAudibility_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameCoordinationUnit_SetNetworkAlmostIdle_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameCoordinationUnit_SetNetworkAlmostIdle_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameCoordinationUnit_SetLifecycleState_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameCoordinationUnit_SetLifecycleState_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameCoordinationUnit_OnAlertFired_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameCoordinationUnit_OnAlertFired_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameCoordinationUnit_OnNonPersistentNotificationCreated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameCoordinationUnit_OnNonPersistentNotificationCreated_Params_Data>(
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

bool FrameCoordinationUnitResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FrameCoordinationUnit ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kFrameCoordinationUnit_GetID_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameCoordinationUnit_GetID_ResponseParams_Data>(
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
void FrameCoordinationUnitInterceptorForTesting::GetID(GetIDCallback callback) {
  GetForwardingInterface()->GetID(std::move(callback));
}
void FrameCoordinationUnitInterceptorForTesting::AddBinding(FrameCoordinationUnitRequest request) {
  GetForwardingInterface()->AddBinding(std::move(request));
}
void FrameCoordinationUnitInterceptorForTesting::AddChildFrame(CoordinationUnitIDPtr cu_id) {
  GetForwardingInterface()->AddChildFrame(std::move(cu_id));
}
void FrameCoordinationUnitInterceptorForTesting::RemoveChildFrame(CoordinationUnitIDPtr cu_id) {
  GetForwardingInterface()->RemoveChildFrame(std::move(cu_id));
}
void FrameCoordinationUnitInterceptorForTesting::SetAudibility(bool audible) {
  GetForwardingInterface()->SetAudibility(std::move(audible));
}
void FrameCoordinationUnitInterceptorForTesting::SetNetworkAlmostIdle(bool idle) {
  GetForwardingInterface()->SetNetworkAlmostIdle(std::move(idle));
}
void FrameCoordinationUnitInterceptorForTesting::SetLifecycleState(::resource_coordinator::mojom::blink::LifecycleState state) {
  GetForwardingInterface()->SetLifecycleState(std::move(state));
}
void FrameCoordinationUnitInterceptorForTesting::OnAlertFired() {
  GetForwardingInterface()->OnAlertFired();
}
void FrameCoordinationUnitInterceptorForTesting::OnNonPersistentNotificationCreated() {
  GetForwardingInterface()->OnNonPersistentNotificationCreated();
}
FrameCoordinationUnitAsyncWaiter::FrameCoordinationUnitAsyncWaiter(
    FrameCoordinationUnit* proxy) : proxy_(proxy) {}

FrameCoordinationUnitAsyncWaiter::~FrameCoordinationUnitAsyncWaiter() = default;

void FrameCoordinationUnitAsyncWaiter::GetID(
    CoordinationUnitIDPtr* out_id) {
  base::RunLoop loop;
  proxy_->GetID(
      base::BindOnce(
          [](base::RunLoop* loop,
             CoordinationUnitIDPtr* out_id
,
             CoordinationUnitIDPtr id) {*out_id = std::move(id);
            loop->Quit();
          },
          &loop,
          out_id));
  loop.Run();
}

const char PageCoordinationUnit::Name_[] = "resource_coordinator.mojom.PageCoordinationUnit";

class PageCoordinationUnit_GetID_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PageCoordinationUnit_GetID_ForwardToCallback(
      PageCoordinationUnit::GetIDCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PageCoordinationUnit::GetIDCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(PageCoordinationUnit_GetID_ForwardToCallback);
};

PageCoordinationUnitProxy::PageCoordinationUnitProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PageCoordinationUnitProxy::GetID(
    GetIDCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::PageCoordinationUnit::GetID");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPageCoordinationUnit_GetID_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::PageCoordinationUnit_GetID_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new PageCoordinationUnit_GetID_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void PageCoordinationUnitProxy::AddBinding(
    PageCoordinationUnitRequest in_request) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::PageCoordinationUnit::AddBinding");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPageCoordinationUnit_AddBinding_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::PageCoordinationUnit_AddBinding_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::resource_coordinator::mojom::PageCoordinationUnitRequestDataView>(
      in_request, &params->request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid request in PageCoordinationUnit.AddBinding request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PageCoordinationUnitProxy::AddFrame(
    CoordinationUnitIDPtr in_cu_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::PageCoordinationUnit::AddFrame");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPageCoordinationUnit_AddFrame_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::PageCoordinationUnit_AddFrame_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->cu_id)::BaseType::BufferWriter
      cu_id_writer;
  mojo::internal::Serialize<::resource_coordinator::mojom::CoordinationUnitIDDataView>(
      in_cu_id, buffer, &cu_id_writer, &serialization_context);
  params->cu_id.Set(
      cu_id_writer.is_null() ? nullptr : cu_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cu_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cu_id in PageCoordinationUnit.AddFrame request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PageCoordinationUnitProxy::RemoveFrame(
    CoordinationUnitIDPtr in_cu_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::PageCoordinationUnit::RemoveFrame");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPageCoordinationUnit_RemoveFrame_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::PageCoordinationUnit_RemoveFrame_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->cu_id)::BaseType::BufferWriter
      cu_id_writer;
  mojo::internal::Serialize<::resource_coordinator::mojom::CoordinationUnitIDDataView>(
      in_cu_id, buffer, &cu_id_writer, &serialization_context);
  params->cu_id.Set(
      cu_id_writer.is_null() ? nullptr : cu_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cu_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cu_id in PageCoordinationUnit.RemoveFrame request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PageCoordinationUnitProxy::SetIsLoading(
    bool in_is_loading) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::PageCoordinationUnit::SetIsLoading");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPageCoordinationUnit_SetIsLoading_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::PageCoordinationUnit_SetIsLoading_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->is_loading = in_is_loading;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PageCoordinationUnitProxy::SetVisibility(
    bool in_visible) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::PageCoordinationUnit::SetVisibility");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPageCoordinationUnit_SetVisibility_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::PageCoordinationUnit_SetVisibility_Params_Data::BufferWriter
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

void PageCoordinationUnitProxy::SetUKMSourceId(
    int64_t in_ukm_source_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::PageCoordinationUnit::SetUKMSourceId");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPageCoordinationUnit_SetUKMSourceId_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::PageCoordinationUnit_SetUKMSourceId_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->ukm_source_id = in_ukm_source_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PageCoordinationUnitProxy::OnFaviconUpdated(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::PageCoordinationUnit::OnFaviconUpdated");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPageCoordinationUnit_OnFaviconUpdated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::PageCoordinationUnit_OnFaviconUpdated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PageCoordinationUnitProxy::OnTitleUpdated(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::PageCoordinationUnit::OnTitleUpdated");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPageCoordinationUnit_OnTitleUpdated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::PageCoordinationUnit_OnTitleUpdated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PageCoordinationUnitProxy::OnMainFrameNavigationCommitted(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::PageCoordinationUnit::OnMainFrameNavigationCommitted");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPageCoordinationUnit_OnMainFrameNavigationCommitted_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::PageCoordinationUnit_OnMainFrameNavigationCommitted_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class PageCoordinationUnit_GetID_ProxyToResponder {
 public:
  static PageCoordinationUnit::GetIDCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<PageCoordinationUnit_GetID_ProxyToResponder> proxy(
        new PageCoordinationUnit_GetID_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&PageCoordinationUnit_GetID_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~PageCoordinationUnit_GetID_ProxyToResponder() {
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
  PageCoordinationUnit_GetID_ProxyToResponder(
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
        << "PageCoordinationUnit::GetIDCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      CoordinationUnitIDPtr in_id);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(PageCoordinationUnit_GetID_ProxyToResponder);
};

bool PageCoordinationUnit_GetID_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "resource_coordinator::mojom::PageCoordinationUnit::GetIDCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::PageCoordinationUnit_GetID_ResponseParams_Data* params =
      reinterpret_cast<
          internal::PageCoordinationUnit_GetID_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  CoordinationUnitIDPtr p_id{};
  PageCoordinationUnit_GetID_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadId(&p_id))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "PageCoordinationUnit::GetID response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_id));
  return true;
}

void PageCoordinationUnit_GetID_ProxyToResponder::Run(
    CoordinationUnitIDPtr in_id) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPageCoordinationUnit_GetID_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::PageCoordinationUnit_GetID_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->id)::BaseType::BufferWriter
      id_writer;
  mojo::internal::Serialize<::resource_coordinator::mojom::CoordinationUnitIDDataView>(
      in_id, buffer, &id_writer, &serialization_context);
  params->id.Set(
      id_writer.is_null() ? nullptr : id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null id in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::PageCoordinationUnit::GetIDCallback",
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
bool PageCoordinationUnitStubDispatch::Accept(
    PageCoordinationUnit* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPageCoordinationUnit_GetID_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::PageCoordinationUnit::GetID",
               "message", message->name());
#endif
      break;
    }
    case internal::kPageCoordinationUnit_AddBinding_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::PageCoordinationUnit::AddBinding",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PageCoordinationUnit_AddBinding_Params_Data* params =
          reinterpret_cast<internal::PageCoordinationUnit_AddBinding_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PageCoordinationUnitRequest p_request{};
      PageCoordinationUnit_AddBinding_ParamsDataView input_data_view(params, &serialization_context);
      
      p_request =
          input_data_view.TakeRequest<decltype(p_request)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PageCoordinationUnit::AddBinding deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AddBinding(
std::move(p_request));
      return true;
    }
    case internal::kPageCoordinationUnit_AddFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::PageCoordinationUnit::AddFrame",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PageCoordinationUnit_AddFrame_Params_Data* params =
          reinterpret_cast<internal::PageCoordinationUnit_AddFrame_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CoordinationUnitIDPtr p_cu_id{};
      PageCoordinationUnit_AddFrame_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCuId(&p_cu_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PageCoordinationUnit::AddFrame deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AddFrame(
std::move(p_cu_id));
      return true;
    }
    case internal::kPageCoordinationUnit_RemoveFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::PageCoordinationUnit::RemoveFrame",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PageCoordinationUnit_RemoveFrame_Params_Data* params =
          reinterpret_cast<internal::PageCoordinationUnit_RemoveFrame_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CoordinationUnitIDPtr p_cu_id{};
      PageCoordinationUnit_RemoveFrame_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCuId(&p_cu_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PageCoordinationUnit::RemoveFrame deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RemoveFrame(
std::move(p_cu_id));
      return true;
    }
    case internal::kPageCoordinationUnit_SetIsLoading_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::PageCoordinationUnit::SetIsLoading",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PageCoordinationUnit_SetIsLoading_Params_Data* params =
          reinterpret_cast<internal::PageCoordinationUnit_SetIsLoading_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_is_loading{};
      PageCoordinationUnit_SetIsLoading_ParamsDataView input_data_view(params, &serialization_context);
      
      p_is_loading = input_data_view.is_loading();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PageCoordinationUnit::SetIsLoading deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetIsLoading(
std::move(p_is_loading));
      return true;
    }
    case internal::kPageCoordinationUnit_SetVisibility_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::PageCoordinationUnit::SetVisibility",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PageCoordinationUnit_SetVisibility_Params_Data* params =
          reinterpret_cast<internal::PageCoordinationUnit_SetVisibility_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_visible{};
      PageCoordinationUnit_SetVisibility_ParamsDataView input_data_view(params, &serialization_context);
      
      p_visible = input_data_view.visible();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PageCoordinationUnit::SetVisibility deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetVisibility(
std::move(p_visible));
      return true;
    }
    case internal::kPageCoordinationUnit_SetUKMSourceId_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::PageCoordinationUnit::SetUKMSourceId",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PageCoordinationUnit_SetUKMSourceId_Params_Data* params =
          reinterpret_cast<internal::PageCoordinationUnit_SetUKMSourceId_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_ukm_source_id{};
      PageCoordinationUnit_SetUKMSourceId_ParamsDataView input_data_view(params, &serialization_context);
      
      p_ukm_source_id = input_data_view.ukm_source_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PageCoordinationUnit::SetUKMSourceId deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetUKMSourceId(
std::move(p_ukm_source_id));
      return true;
    }
    case internal::kPageCoordinationUnit_OnFaviconUpdated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::PageCoordinationUnit::OnFaviconUpdated",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PageCoordinationUnit_OnFaviconUpdated_Params_Data* params =
          reinterpret_cast<internal::PageCoordinationUnit_OnFaviconUpdated_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PageCoordinationUnit_OnFaviconUpdated_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PageCoordinationUnit::OnFaviconUpdated deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnFaviconUpdated();
      return true;
    }
    case internal::kPageCoordinationUnit_OnTitleUpdated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::PageCoordinationUnit::OnTitleUpdated",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PageCoordinationUnit_OnTitleUpdated_Params_Data* params =
          reinterpret_cast<internal::PageCoordinationUnit_OnTitleUpdated_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PageCoordinationUnit_OnTitleUpdated_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PageCoordinationUnit::OnTitleUpdated deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnTitleUpdated();
      return true;
    }
    case internal::kPageCoordinationUnit_OnMainFrameNavigationCommitted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::PageCoordinationUnit::OnMainFrameNavigationCommitted",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PageCoordinationUnit_OnMainFrameNavigationCommitted_Params_Data* params =
          reinterpret_cast<internal::PageCoordinationUnit_OnMainFrameNavigationCommitted_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PageCoordinationUnit_OnMainFrameNavigationCommitted_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PageCoordinationUnit::OnMainFrameNavigationCommitted deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnMainFrameNavigationCommitted();
      return true;
    }
  }
  return false;
}

// static
bool PageCoordinationUnitStubDispatch::AcceptWithResponder(
    PageCoordinationUnit* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPageCoordinationUnit_GetID_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::PageCoordinationUnit::GetID",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::PageCoordinationUnit_GetID_Params_Data* params =
          reinterpret_cast<
              internal::PageCoordinationUnit_GetID_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PageCoordinationUnit_GetID_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PageCoordinationUnit::GetID deserializer");
        return false;
      }
      PageCoordinationUnit::GetIDCallback callback =
          PageCoordinationUnit_GetID_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetID(std::move(callback));
      return true;
    }
    case internal::kPageCoordinationUnit_AddBinding_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::PageCoordinationUnit::AddBinding",
               "message", message->name());
#endif
      break;
    }
    case internal::kPageCoordinationUnit_AddFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::PageCoordinationUnit::AddFrame",
               "message", message->name());
#endif
      break;
    }
    case internal::kPageCoordinationUnit_RemoveFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::PageCoordinationUnit::RemoveFrame",
               "message", message->name());
#endif
      break;
    }
    case internal::kPageCoordinationUnit_SetIsLoading_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::PageCoordinationUnit::SetIsLoading",
               "message", message->name());
#endif
      break;
    }
    case internal::kPageCoordinationUnit_SetVisibility_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::PageCoordinationUnit::SetVisibility",
               "message", message->name());
#endif
      break;
    }
    case internal::kPageCoordinationUnit_SetUKMSourceId_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::PageCoordinationUnit::SetUKMSourceId",
               "message", message->name());
#endif
      break;
    }
    case internal::kPageCoordinationUnit_OnFaviconUpdated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::PageCoordinationUnit::OnFaviconUpdated",
               "message", message->name());
#endif
      break;
    }
    case internal::kPageCoordinationUnit_OnTitleUpdated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::PageCoordinationUnit::OnTitleUpdated",
               "message", message->name());
#endif
      break;
    }
    case internal::kPageCoordinationUnit_OnMainFrameNavigationCommitted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::PageCoordinationUnit::OnMainFrameNavigationCommitted",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool PageCoordinationUnitRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PageCoordinationUnit RequestValidator");

  switch (message->header()->name) {
    case internal::kPageCoordinationUnit_GetID_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PageCoordinationUnit_GetID_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPageCoordinationUnit_AddBinding_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PageCoordinationUnit_AddBinding_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPageCoordinationUnit_AddFrame_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PageCoordinationUnit_AddFrame_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPageCoordinationUnit_RemoveFrame_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PageCoordinationUnit_RemoveFrame_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPageCoordinationUnit_SetIsLoading_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PageCoordinationUnit_SetIsLoading_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPageCoordinationUnit_SetVisibility_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PageCoordinationUnit_SetVisibility_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPageCoordinationUnit_SetUKMSourceId_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PageCoordinationUnit_SetUKMSourceId_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPageCoordinationUnit_OnFaviconUpdated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PageCoordinationUnit_OnFaviconUpdated_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPageCoordinationUnit_OnTitleUpdated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PageCoordinationUnit_OnTitleUpdated_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPageCoordinationUnit_OnMainFrameNavigationCommitted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PageCoordinationUnit_OnMainFrameNavigationCommitted_Params_Data>(
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

bool PageCoordinationUnitResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PageCoordinationUnit ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kPageCoordinationUnit_GetID_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PageCoordinationUnit_GetID_ResponseParams_Data>(
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
void PageCoordinationUnitInterceptorForTesting::GetID(GetIDCallback callback) {
  GetForwardingInterface()->GetID(std::move(callback));
}
void PageCoordinationUnitInterceptorForTesting::AddBinding(PageCoordinationUnitRequest request) {
  GetForwardingInterface()->AddBinding(std::move(request));
}
void PageCoordinationUnitInterceptorForTesting::AddFrame(CoordinationUnitIDPtr cu_id) {
  GetForwardingInterface()->AddFrame(std::move(cu_id));
}
void PageCoordinationUnitInterceptorForTesting::RemoveFrame(CoordinationUnitIDPtr cu_id) {
  GetForwardingInterface()->RemoveFrame(std::move(cu_id));
}
void PageCoordinationUnitInterceptorForTesting::SetIsLoading(bool is_loading) {
  GetForwardingInterface()->SetIsLoading(std::move(is_loading));
}
void PageCoordinationUnitInterceptorForTesting::SetVisibility(bool visible) {
  GetForwardingInterface()->SetVisibility(std::move(visible));
}
void PageCoordinationUnitInterceptorForTesting::SetUKMSourceId(int64_t ukm_source_id) {
  GetForwardingInterface()->SetUKMSourceId(std::move(ukm_source_id));
}
void PageCoordinationUnitInterceptorForTesting::OnFaviconUpdated() {
  GetForwardingInterface()->OnFaviconUpdated();
}
void PageCoordinationUnitInterceptorForTesting::OnTitleUpdated() {
  GetForwardingInterface()->OnTitleUpdated();
}
void PageCoordinationUnitInterceptorForTesting::OnMainFrameNavigationCommitted() {
  GetForwardingInterface()->OnMainFrameNavigationCommitted();
}
PageCoordinationUnitAsyncWaiter::PageCoordinationUnitAsyncWaiter(
    PageCoordinationUnit* proxy) : proxy_(proxy) {}

PageCoordinationUnitAsyncWaiter::~PageCoordinationUnitAsyncWaiter() = default;

void PageCoordinationUnitAsyncWaiter::GetID(
    CoordinationUnitIDPtr* out_id) {
  base::RunLoop loop;
  proxy_->GetID(
      base::BindOnce(
          [](base::RunLoop* loop,
             CoordinationUnitIDPtr* out_id
,
             CoordinationUnitIDPtr id) {*out_id = std::move(id);
            loop->Quit();
          },
          &loop,
          out_id));
  loop.Run();
}

const char ProcessCoordinationUnit::Name_[] = "resource_coordinator.mojom.ProcessCoordinationUnit";

class ProcessCoordinationUnit_GetID_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ProcessCoordinationUnit_GetID_ForwardToCallback(
      ProcessCoordinationUnit::GetIDCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ProcessCoordinationUnit::GetIDCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ProcessCoordinationUnit_GetID_ForwardToCallback);
};

ProcessCoordinationUnitProxy::ProcessCoordinationUnitProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ProcessCoordinationUnitProxy::GetID(
    GetIDCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::ProcessCoordinationUnit::GetID");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProcessCoordinationUnit_GetID_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::ProcessCoordinationUnit_GetID_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ProcessCoordinationUnit_GetID_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ProcessCoordinationUnitProxy::AddBinding(
    ProcessCoordinationUnitRequest in_request) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::ProcessCoordinationUnit::AddBinding");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProcessCoordinationUnit_AddBinding_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::ProcessCoordinationUnit_AddBinding_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::resource_coordinator::mojom::ProcessCoordinationUnitRequestDataView>(
      in_request, &params->request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid request in ProcessCoordinationUnit.AddBinding request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProcessCoordinationUnitProxy::AddFrame(
    CoordinationUnitIDPtr in_cu_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::ProcessCoordinationUnit::AddFrame");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProcessCoordinationUnit_AddFrame_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::ProcessCoordinationUnit_AddFrame_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->cu_id)::BaseType::BufferWriter
      cu_id_writer;
  mojo::internal::Serialize<::resource_coordinator::mojom::CoordinationUnitIDDataView>(
      in_cu_id, buffer, &cu_id_writer, &serialization_context);
  params->cu_id.Set(
      cu_id_writer.is_null() ? nullptr : cu_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cu_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cu_id in ProcessCoordinationUnit.AddFrame request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProcessCoordinationUnitProxy::RemoveFrame(
    CoordinationUnitIDPtr in_cu_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::ProcessCoordinationUnit::RemoveFrame");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProcessCoordinationUnit_RemoveFrame_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::ProcessCoordinationUnit_RemoveFrame_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->cu_id)::BaseType::BufferWriter
      cu_id_writer;
  mojo::internal::Serialize<::resource_coordinator::mojom::CoordinationUnitIDDataView>(
      in_cu_id, buffer, &cu_id_writer, &serialization_context);
  params->cu_id.Set(
      cu_id_writer.is_null() ? nullptr : cu_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cu_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cu_id in ProcessCoordinationUnit.RemoveFrame request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProcessCoordinationUnitProxy::SetCPUUsage(
    double in_cpu_usage) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::ProcessCoordinationUnit::SetCPUUsage");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProcessCoordinationUnit_SetCPUUsage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::ProcessCoordinationUnit_SetCPUUsage_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->cpu_usage = in_cpu_usage;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProcessCoordinationUnitProxy::SetExpectedTaskQueueingDuration(
    WTF::TimeDelta in_duration) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::ProcessCoordinationUnit::SetExpectedTaskQueueingDuration");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->duration)::BaseType::BufferWriter
      duration_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_duration, buffer, &duration_writer, &serialization_context);
  params->duration.Set(
      duration_writer.is_null() ? nullptr : duration_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->duration.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null duration in ProcessCoordinationUnit.SetExpectedTaskQueueingDuration request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProcessCoordinationUnitProxy::SetLaunchTime(
    WTF::Time in_launch_time) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::ProcessCoordinationUnit::SetLaunchTime");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProcessCoordinationUnit_SetLaunchTime_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::ProcessCoordinationUnit_SetLaunchTime_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->launch_time)::BaseType::BufferWriter
      launch_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_launch_time, buffer, &launch_time_writer, &serialization_context);
  params->launch_time.Set(
      launch_time_writer.is_null() ? nullptr : launch_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->launch_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null launch_time in ProcessCoordinationUnit.SetLaunchTime request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProcessCoordinationUnitProxy::SetMainThreadTaskLoadIsLow(
    bool in_main_thread_task_load_is_low) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::ProcessCoordinationUnit::SetMainThreadTaskLoadIsLow");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->main_thread_task_load_is_low = in_main_thread_task_load_is_low;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProcessCoordinationUnitProxy::SetPID(
    int64_t in_pid) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::ProcessCoordinationUnit::SetPID");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProcessCoordinationUnit_SetPID_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::ProcessCoordinationUnit_SetPID_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->pid = in_pid;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class ProcessCoordinationUnit_GetID_ProxyToResponder {
 public:
  static ProcessCoordinationUnit::GetIDCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ProcessCoordinationUnit_GetID_ProxyToResponder> proxy(
        new ProcessCoordinationUnit_GetID_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ProcessCoordinationUnit_GetID_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ProcessCoordinationUnit_GetID_ProxyToResponder() {
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
  ProcessCoordinationUnit_GetID_ProxyToResponder(
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
        << "ProcessCoordinationUnit::GetIDCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      CoordinationUnitIDPtr in_id);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ProcessCoordinationUnit_GetID_ProxyToResponder);
};

bool ProcessCoordinationUnit_GetID_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "resource_coordinator::mojom::ProcessCoordinationUnit::GetIDCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ProcessCoordinationUnit_GetID_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ProcessCoordinationUnit_GetID_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  CoordinationUnitIDPtr p_id{};
  ProcessCoordinationUnit_GetID_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadId(&p_id))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ProcessCoordinationUnit::GetID response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_id));
  return true;
}

void ProcessCoordinationUnit_GetID_ProxyToResponder::Run(
    CoordinationUnitIDPtr in_id) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProcessCoordinationUnit_GetID_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::ProcessCoordinationUnit_GetID_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->id)::BaseType::BufferWriter
      id_writer;
  mojo::internal::Serialize<::resource_coordinator::mojom::CoordinationUnitIDDataView>(
      in_id, buffer, &id_writer, &serialization_context);
  params->id.Set(
      id_writer.is_null() ? nullptr : id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null id in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::ProcessCoordinationUnit::GetIDCallback",
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
bool ProcessCoordinationUnitStubDispatch::Accept(
    ProcessCoordinationUnit* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kProcessCoordinationUnit_GetID_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::ProcessCoordinationUnit::GetID",
               "message", message->name());
#endif
      break;
    }
    case internal::kProcessCoordinationUnit_AddBinding_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::ProcessCoordinationUnit::AddBinding",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProcessCoordinationUnit_AddBinding_Params_Data* params =
          reinterpret_cast<internal::ProcessCoordinationUnit_AddBinding_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ProcessCoordinationUnitRequest p_request{};
      ProcessCoordinationUnit_AddBinding_ParamsDataView input_data_view(params, &serialization_context);
      
      p_request =
          input_data_view.TakeRequest<decltype(p_request)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProcessCoordinationUnit::AddBinding deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AddBinding(
std::move(p_request));
      return true;
    }
    case internal::kProcessCoordinationUnit_AddFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::ProcessCoordinationUnit::AddFrame",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProcessCoordinationUnit_AddFrame_Params_Data* params =
          reinterpret_cast<internal::ProcessCoordinationUnit_AddFrame_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CoordinationUnitIDPtr p_cu_id{};
      ProcessCoordinationUnit_AddFrame_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCuId(&p_cu_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProcessCoordinationUnit::AddFrame deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AddFrame(
std::move(p_cu_id));
      return true;
    }
    case internal::kProcessCoordinationUnit_RemoveFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::ProcessCoordinationUnit::RemoveFrame",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProcessCoordinationUnit_RemoveFrame_Params_Data* params =
          reinterpret_cast<internal::ProcessCoordinationUnit_RemoveFrame_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CoordinationUnitIDPtr p_cu_id{};
      ProcessCoordinationUnit_RemoveFrame_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCuId(&p_cu_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProcessCoordinationUnit::RemoveFrame deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RemoveFrame(
std::move(p_cu_id));
      return true;
    }
    case internal::kProcessCoordinationUnit_SetCPUUsage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::ProcessCoordinationUnit::SetCPUUsage",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProcessCoordinationUnit_SetCPUUsage_Params_Data* params =
          reinterpret_cast<internal::ProcessCoordinationUnit_SetCPUUsage_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      double p_cpu_usage{};
      ProcessCoordinationUnit_SetCPUUsage_ParamsDataView input_data_view(params, &serialization_context);
      
      p_cpu_usage = input_data_view.cpu_usage();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProcessCoordinationUnit::SetCPUUsage deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetCPUUsage(
std::move(p_cpu_usage));
      return true;
    }
    case internal::kProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::ProcessCoordinationUnit::SetExpectedTaskQueueingDuration",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params_Data* params =
          reinterpret_cast<internal::ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::TimeDelta p_duration{};
      ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDuration(&p_duration))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProcessCoordinationUnit::SetExpectedTaskQueueingDuration deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetExpectedTaskQueueingDuration(
std::move(p_duration));
      return true;
    }
    case internal::kProcessCoordinationUnit_SetLaunchTime_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::ProcessCoordinationUnit::SetLaunchTime",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProcessCoordinationUnit_SetLaunchTime_Params_Data* params =
          reinterpret_cast<internal::ProcessCoordinationUnit_SetLaunchTime_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::Time p_launch_time{};
      ProcessCoordinationUnit_SetLaunchTime_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadLaunchTime(&p_launch_time))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProcessCoordinationUnit::SetLaunchTime deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetLaunchTime(
std::move(p_launch_time));
      return true;
    }
    case internal::kProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::ProcessCoordinationUnit::SetMainThreadTaskLoadIsLow",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params_Data* params =
          reinterpret_cast<internal::ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_main_thread_task_load_is_low{};
      ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_ParamsDataView input_data_view(params, &serialization_context);
      
      p_main_thread_task_load_is_low = input_data_view.main_thread_task_load_is_low();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProcessCoordinationUnit::SetMainThreadTaskLoadIsLow deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetMainThreadTaskLoadIsLow(
std::move(p_main_thread_task_load_is_low));
      return true;
    }
    case internal::kProcessCoordinationUnit_SetPID_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::ProcessCoordinationUnit::SetPID",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProcessCoordinationUnit_SetPID_Params_Data* params =
          reinterpret_cast<internal::ProcessCoordinationUnit_SetPID_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_pid{};
      ProcessCoordinationUnit_SetPID_ParamsDataView input_data_view(params, &serialization_context);
      
      p_pid = input_data_view.pid();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProcessCoordinationUnit::SetPID deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetPID(
std::move(p_pid));
      return true;
    }
  }
  return false;
}

// static
bool ProcessCoordinationUnitStubDispatch::AcceptWithResponder(
    ProcessCoordinationUnit* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kProcessCoordinationUnit_GetID_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::ProcessCoordinationUnit::GetID",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ProcessCoordinationUnit_GetID_Params_Data* params =
          reinterpret_cast<
              internal::ProcessCoordinationUnit_GetID_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ProcessCoordinationUnit_GetID_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProcessCoordinationUnit::GetID deserializer");
        return false;
      }
      ProcessCoordinationUnit::GetIDCallback callback =
          ProcessCoordinationUnit_GetID_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetID(std::move(callback));
      return true;
    }
    case internal::kProcessCoordinationUnit_AddBinding_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::ProcessCoordinationUnit::AddBinding",
               "message", message->name());
#endif
      break;
    }
    case internal::kProcessCoordinationUnit_AddFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::ProcessCoordinationUnit::AddFrame",
               "message", message->name());
#endif
      break;
    }
    case internal::kProcessCoordinationUnit_RemoveFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::ProcessCoordinationUnit::RemoveFrame",
               "message", message->name());
#endif
      break;
    }
    case internal::kProcessCoordinationUnit_SetCPUUsage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::ProcessCoordinationUnit::SetCPUUsage",
               "message", message->name());
#endif
      break;
    }
    case internal::kProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::ProcessCoordinationUnit::SetExpectedTaskQueueingDuration",
               "message", message->name());
#endif
      break;
    }
    case internal::kProcessCoordinationUnit_SetLaunchTime_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::ProcessCoordinationUnit::SetLaunchTime",
               "message", message->name());
#endif
      break;
    }
    case internal::kProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::ProcessCoordinationUnit::SetMainThreadTaskLoadIsLow",
               "message", message->name());
#endif
      break;
    }
    case internal::kProcessCoordinationUnit_SetPID_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::ProcessCoordinationUnit::SetPID",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool ProcessCoordinationUnitRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ProcessCoordinationUnit RequestValidator");

  switch (message->header()->name) {
    case internal::kProcessCoordinationUnit_GetID_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProcessCoordinationUnit_GetID_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProcessCoordinationUnit_AddBinding_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProcessCoordinationUnit_AddBinding_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProcessCoordinationUnit_AddFrame_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProcessCoordinationUnit_AddFrame_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProcessCoordinationUnit_RemoveFrame_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProcessCoordinationUnit_RemoveFrame_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProcessCoordinationUnit_SetCPUUsage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProcessCoordinationUnit_SetCPUUsage_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProcessCoordinationUnit_SetLaunchTime_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProcessCoordinationUnit_SetLaunchTime_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProcessCoordinationUnit_SetPID_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProcessCoordinationUnit_SetPID_Params_Data>(
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

bool ProcessCoordinationUnitResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ProcessCoordinationUnit ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kProcessCoordinationUnit_GetID_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProcessCoordinationUnit_GetID_ResponseParams_Data>(
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
void ProcessCoordinationUnitInterceptorForTesting::GetID(GetIDCallback callback) {
  GetForwardingInterface()->GetID(std::move(callback));
}
void ProcessCoordinationUnitInterceptorForTesting::AddBinding(ProcessCoordinationUnitRequest request) {
  GetForwardingInterface()->AddBinding(std::move(request));
}
void ProcessCoordinationUnitInterceptorForTesting::AddFrame(CoordinationUnitIDPtr cu_id) {
  GetForwardingInterface()->AddFrame(std::move(cu_id));
}
void ProcessCoordinationUnitInterceptorForTesting::RemoveFrame(CoordinationUnitIDPtr cu_id) {
  GetForwardingInterface()->RemoveFrame(std::move(cu_id));
}
void ProcessCoordinationUnitInterceptorForTesting::SetCPUUsage(double cpu_usage) {
  GetForwardingInterface()->SetCPUUsage(std::move(cpu_usage));
}
void ProcessCoordinationUnitInterceptorForTesting::SetExpectedTaskQueueingDuration(WTF::TimeDelta duration) {
  GetForwardingInterface()->SetExpectedTaskQueueingDuration(std::move(duration));
}
void ProcessCoordinationUnitInterceptorForTesting::SetLaunchTime(WTF::Time launch_time) {
  GetForwardingInterface()->SetLaunchTime(std::move(launch_time));
}
void ProcessCoordinationUnitInterceptorForTesting::SetMainThreadTaskLoadIsLow(bool main_thread_task_load_is_low) {
  GetForwardingInterface()->SetMainThreadTaskLoadIsLow(std::move(main_thread_task_load_is_low));
}
void ProcessCoordinationUnitInterceptorForTesting::SetPID(int64_t pid) {
  GetForwardingInterface()->SetPID(std::move(pid));
}
ProcessCoordinationUnitAsyncWaiter::ProcessCoordinationUnitAsyncWaiter(
    ProcessCoordinationUnit* proxy) : proxy_(proxy) {}

ProcessCoordinationUnitAsyncWaiter::~ProcessCoordinationUnitAsyncWaiter() = default;

void ProcessCoordinationUnitAsyncWaiter::GetID(
    CoordinationUnitIDPtr* out_id) {
  base::RunLoop loop;
  proxy_->GetID(
      base::BindOnce(
          [](base::RunLoop* loop,
             CoordinationUnitIDPtr* out_id
,
             CoordinationUnitIDPtr id) {*out_id = std::move(id);
            loop->Quit();
          },
          &loop,
          out_id));
  loop.Run();
}

const char SystemCoordinationUnit::Name_[] = "resource_coordinator.mojom.SystemCoordinationUnit";

class SystemCoordinationUnit_GetID_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SystemCoordinationUnit_GetID_ForwardToCallback(
      SystemCoordinationUnit::GetIDCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SystemCoordinationUnit::GetIDCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SystemCoordinationUnit_GetID_ForwardToCallback);
};

SystemCoordinationUnitProxy::SystemCoordinationUnitProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SystemCoordinationUnitProxy::GetID(
    GetIDCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::SystemCoordinationUnit::GetID");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSystemCoordinationUnit_GetID_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::SystemCoordinationUnit_GetID_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SystemCoordinationUnit_GetID_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void SystemCoordinationUnitProxy::AddBinding(
    SystemCoordinationUnitRequest in_request) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::SystemCoordinationUnit::AddBinding");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSystemCoordinationUnit_AddBinding_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::SystemCoordinationUnit_AddBinding_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::resource_coordinator::mojom::SystemCoordinationUnitRequestDataView>(
      in_request, &params->request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid request in SystemCoordinationUnit.AddBinding request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void SystemCoordinationUnitProxy::OnProcessCPUUsageReady(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::SystemCoordinationUnit::OnProcessCPUUsageReady");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSystemCoordinationUnit_OnProcessCPUUsageReady_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::SystemCoordinationUnit_OnProcessCPUUsageReady_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void SystemCoordinationUnitProxy::DistributeMeasurementBatch(
    ProcessResourceMeasurementBatchPtr in_measurement_batch) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::SystemCoordinationUnit::DistributeMeasurementBatch");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSystemCoordinationUnit_DistributeMeasurementBatch_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::SystemCoordinationUnit_DistributeMeasurementBatch_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->measurement_batch)::BaseType::BufferWriter
      measurement_batch_writer;
  mojo::internal::Serialize<::resource_coordinator::mojom::ProcessResourceMeasurementBatchDataView>(
      in_measurement_batch, buffer, &measurement_batch_writer, &serialization_context);
  params->measurement_batch.Set(
      measurement_batch_writer.is_null() ? nullptr : measurement_batch_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->measurement_batch.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null measurement_batch in SystemCoordinationUnit.DistributeMeasurementBatch request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class SystemCoordinationUnit_GetID_ProxyToResponder {
 public:
  static SystemCoordinationUnit::GetIDCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SystemCoordinationUnit_GetID_ProxyToResponder> proxy(
        new SystemCoordinationUnit_GetID_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SystemCoordinationUnit_GetID_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SystemCoordinationUnit_GetID_ProxyToResponder() {
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
  SystemCoordinationUnit_GetID_ProxyToResponder(
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
        << "SystemCoordinationUnit::GetIDCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      CoordinationUnitIDPtr in_id);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(SystemCoordinationUnit_GetID_ProxyToResponder);
};

bool SystemCoordinationUnit_GetID_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "resource_coordinator::mojom::SystemCoordinationUnit::GetIDCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SystemCoordinationUnit_GetID_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SystemCoordinationUnit_GetID_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  CoordinationUnitIDPtr p_id{};
  SystemCoordinationUnit_GetID_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadId(&p_id))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "SystemCoordinationUnit::GetID response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_id));
  return true;
}

void SystemCoordinationUnit_GetID_ProxyToResponder::Run(
    CoordinationUnitIDPtr in_id) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSystemCoordinationUnit_GetID_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::SystemCoordinationUnit_GetID_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->id)::BaseType::BufferWriter
      id_writer;
  mojo::internal::Serialize<::resource_coordinator::mojom::CoordinationUnitIDDataView>(
      in_id, buffer, &id_writer, &serialization_context);
  params->id.Set(
      id_writer.is_null() ? nullptr : id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null id in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::SystemCoordinationUnit::GetIDCallback",
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
bool SystemCoordinationUnitStubDispatch::Accept(
    SystemCoordinationUnit* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSystemCoordinationUnit_GetID_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::SystemCoordinationUnit::GetID",
               "message", message->name());
#endif
      break;
    }
    case internal::kSystemCoordinationUnit_AddBinding_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::SystemCoordinationUnit::AddBinding",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SystemCoordinationUnit_AddBinding_Params_Data* params =
          reinterpret_cast<internal::SystemCoordinationUnit_AddBinding_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SystemCoordinationUnitRequest p_request{};
      SystemCoordinationUnit_AddBinding_ParamsDataView input_data_view(params, &serialization_context);
      
      p_request =
          input_data_view.TakeRequest<decltype(p_request)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SystemCoordinationUnit::AddBinding deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AddBinding(
std::move(p_request));
      return true;
    }
    case internal::kSystemCoordinationUnit_OnProcessCPUUsageReady_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::SystemCoordinationUnit::OnProcessCPUUsageReady",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SystemCoordinationUnit_OnProcessCPUUsageReady_Params_Data* params =
          reinterpret_cast<internal::SystemCoordinationUnit_OnProcessCPUUsageReady_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SystemCoordinationUnit_OnProcessCPUUsageReady_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SystemCoordinationUnit::OnProcessCPUUsageReady deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnProcessCPUUsageReady();
      return true;
    }
    case internal::kSystemCoordinationUnit_DistributeMeasurementBatch_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::SystemCoordinationUnit::DistributeMeasurementBatch",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SystemCoordinationUnit_DistributeMeasurementBatch_Params_Data* params =
          reinterpret_cast<internal::SystemCoordinationUnit_DistributeMeasurementBatch_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ProcessResourceMeasurementBatchPtr p_measurement_batch{};
      SystemCoordinationUnit_DistributeMeasurementBatch_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMeasurementBatch(&p_measurement_batch))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SystemCoordinationUnit::DistributeMeasurementBatch deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DistributeMeasurementBatch(
std::move(p_measurement_batch));
      return true;
    }
  }
  return false;
}

// static
bool SystemCoordinationUnitStubDispatch::AcceptWithResponder(
    SystemCoordinationUnit* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSystemCoordinationUnit_GetID_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::SystemCoordinationUnit::GetID",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::SystemCoordinationUnit_GetID_Params_Data* params =
          reinterpret_cast<
              internal::SystemCoordinationUnit_GetID_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SystemCoordinationUnit_GetID_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SystemCoordinationUnit::GetID deserializer");
        return false;
      }
      SystemCoordinationUnit::GetIDCallback callback =
          SystemCoordinationUnit_GetID_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetID(std::move(callback));
      return true;
    }
    case internal::kSystemCoordinationUnit_AddBinding_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::SystemCoordinationUnit::AddBinding",
               "message", message->name());
#endif
      break;
    }
    case internal::kSystemCoordinationUnit_OnProcessCPUUsageReady_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::SystemCoordinationUnit::OnProcessCPUUsageReady",
               "message", message->name());
#endif
      break;
    }
    case internal::kSystemCoordinationUnit_DistributeMeasurementBatch_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::SystemCoordinationUnit::DistributeMeasurementBatch",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool SystemCoordinationUnitRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SystemCoordinationUnit RequestValidator");

  switch (message->header()->name) {
    case internal::kSystemCoordinationUnit_GetID_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SystemCoordinationUnit_GetID_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSystemCoordinationUnit_AddBinding_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SystemCoordinationUnit_AddBinding_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSystemCoordinationUnit_OnProcessCPUUsageReady_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SystemCoordinationUnit_OnProcessCPUUsageReady_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSystemCoordinationUnit_DistributeMeasurementBatch_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SystemCoordinationUnit_DistributeMeasurementBatch_Params_Data>(
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

bool SystemCoordinationUnitResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SystemCoordinationUnit ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kSystemCoordinationUnit_GetID_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SystemCoordinationUnit_GetID_ResponseParams_Data>(
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
void SystemCoordinationUnitInterceptorForTesting::GetID(GetIDCallback callback) {
  GetForwardingInterface()->GetID(std::move(callback));
}
void SystemCoordinationUnitInterceptorForTesting::AddBinding(SystemCoordinationUnitRequest request) {
  GetForwardingInterface()->AddBinding(std::move(request));
}
void SystemCoordinationUnitInterceptorForTesting::OnProcessCPUUsageReady() {
  GetForwardingInterface()->OnProcessCPUUsageReady();
}
void SystemCoordinationUnitInterceptorForTesting::DistributeMeasurementBatch(ProcessResourceMeasurementBatchPtr measurement_batch) {
  GetForwardingInterface()->DistributeMeasurementBatch(std::move(measurement_batch));
}
SystemCoordinationUnitAsyncWaiter::SystemCoordinationUnitAsyncWaiter(
    SystemCoordinationUnit* proxy) : proxy_(proxy) {}

SystemCoordinationUnitAsyncWaiter::~SystemCoordinationUnitAsyncWaiter() = default;

void SystemCoordinationUnitAsyncWaiter::GetID(
    CoordinationUnitIDPtr* out_id) {
  base::RunLoop loop;
  proxy_->GetID(
      base::BindOnce(
          [](base::RunLoop* loop,
             CoordinationUnitIDPtr* out_id
,
             CoordinationUnitIDPtr id) {*out_id = std::move(id);
            loop->Quit();
          },
          &loop,
          out_id));
  loop.Run();
}

}  // namespace blink
}  // namespace mojom
}  // namespace resource_coordinator

namespace mojo {


// static
bool StructTraits<::resource_coordinator::mojom::blink::CoordinationUnitID::DataView, ::resource_coordinator::mojom::blink::CoordinationUnitIDPtr>::Read(
    ::resource_coordinator::mojom::blink::CoordinationUnitID::DataView input,
    ::resource_coordinator::mojom::blink::CoordinationUnitIDPtr* output) {
  bool success = true;
  ::resource_coordinator::mojom::blink::CoordinationUnitIDPtr result(::resource_coordinator::mojom::blink::CoordinationUnitID::New());
  
      if (!input.ReadType(&result->type))
        success = false;
      result->id = input.id();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::resource_coordinator::mojom::blink::ProcessResourceMeasurement::DataView, ::resource_coordinator::mojom::blink::ProcessResourceMeasurementPtr>::Read(
    ::resource_coordinator::mojom::blink::ProcessResourceMeasurement::DataView input,
    ::resource_coordinator::mojom::blink::ProcessResourceMeasurementPtr* output) {
  bool success = true;
  ::resource_coordinator::mojom::blink::ProcessResourceMeasurementPtr result(::resource_coordinator::mojom::blink::ProcessResourceMeasurement::New());
  
      if (!input.ReadPid(&result->pid))
        success = false;
      if (!input.ReadCpuUsage(&result->cpu_usage))
        success = false;
      result->private_footprint_kb = input.private_footprint_kb();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::resource_coordinator::mojom::blink::ProcessResourceMeasurementBatch::DataView, ::resource_coordinator::mojom::blink::ProcessResourceMeasurementBatchPtr>::Read(
    ::resource_coordinator::mojom::blink::ProcessResourceMeasurementBatch::DataView input,
    ::resource_coordinator::mojom::blink::ProcessResourceMeasurementBatchPtr* output) {
  bool success = true;
  ::resource_coordinator::mojom::blink::ProcessResourceMeasurementBatchPtr result(::resource_coordinator::mojom::blink::ProcessResourceMeasurementBatch::New());
  
      if (!input.ReadBatchStartedTime(&result->batch_started_time))
        success = false;
      if (!input.ReadBatchEndedTime(&result->batch_ended_time))
        success = false;
      if (!input.ReadMeasurements(&result->measurements))
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