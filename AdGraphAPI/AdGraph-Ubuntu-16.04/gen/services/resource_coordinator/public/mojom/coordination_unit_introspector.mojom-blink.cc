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

#include "services/resource_coordinator/public/mojom/coordination_unit_introspector.mojom-blink.h"

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

#include "services/resource_coordinator/public/mojom/coordination_unit_introspector.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "ipc/ipc_message_utils.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
namespace resource_coordinator {
namespace mojom {
namespace blink {
PageInfo::PageInfo()
    : ukm_source_id(),
      is_visible(),
      time_since_last_navigation(),
      time_since_last_visibility_change() {}

PageInfo::PageInfo(
    int64_t ukm_source_id_in,
    bool is_visible_in,
    WTF::TimeDelta time_since_last_navigation_in,
    WTF::TimeDelta time_since_last_visibility_change_in)
    : ukm_source_id(std::move(ukm_source_id_in)),
      is_visible(std::move(is_visible_in)),
      time_since_last_navigation(std::move(time_since_last_navigation_in)),
      time_since_last_visibility_change(std::move(time_since_last_visibility_change_in)) {}

PageInfo::~PageInfo() = default;

bool PageInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ProcessInfo::ProcessInfo()
    : pid(),
      page_infos(),
      launch_time() {}

ProcessInfo::ProcessInfo(
    ::mojo_base::mojom::blink::ProcessIdPtr pid_in,
    WTF::Vector<PageInfoPtr> page_infos_in,
    base::Optional<WTF::Time> launch_time_in)
    : pid(std::move(pid_in)),
      page_infos(std::move(page_infos_in)),
      launch_time(std::move(launch_time_in)) {}

ProcessInfo::~ProcessInfo() = default;

bool ProcessInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char CoordinationUnitIntrospector::Name_[] = "resource_coordinator.mojom.CoordinationUnitIntrospector";

class CoordinationUnitIntrospector_GetProcessToURLMap_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CoordinationUnitIntrospector_GetProcessToURLMap_ForwardToCallback(
      CoordinationUnitIntrospector::GetProcessToURLMapCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CoordinationUnitIntrospector::GetProcessToURLMapCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CoordinationUnitIntrospector_GetProcessToURLMap_ForwardToCallback);
};

CoordinationUnitIntrospectorProxy::CoordinationUnitIntrospectorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void CoordinationUnitIntrospectorProxy::GetProcessToURLMap(
    GetProcessToURLMapCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::CoordinationUnitIntrospector::GetProcessToURLMap");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCoordinationUnitIntrospector_GetProcessToURLMap_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::CoordinationUnitIntrospector_GetProcessToURLMap_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CoordinationUnitIntrospector_GetProcessToURLMap_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class CoordinationUnitIntrospector_GetProcessToURLMap_ProxyToResponder {
 public:
  static CoordinationUnitIntrospector::GetProcessToURLMapCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CoordinationUnitIntrospector_GetProcessToURLMap_ProxyToResponder> proxy(
        new CoordinationUnitIntrospector_GetProcessToURLMap_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CoordinationUnitIntrospector_GetProcessToURLMap_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CoordinationUnitIntrospector_GetProcessToURLMap_ProxyToResponder() {
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
  CoordinationUnitIntrospector_GetProcessToURLMap_ProxyToResponder(
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
        << "CoordinationUnitIntrospector::GetProcessToURLMapCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      WTF::Vector<ProcessInfoPtr> in_process_infos);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CoordinationUnitIntrospector_GetProcessToURLMap_ProxyToResponder);
};

bool CoordinationUnitIntrospector_GetProcessToURLMap_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "resource_coordinator::mojom::CoordinationUnitIntrospector::GetProcessToURLMapCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::Vector<ProcessInfoPtr> p_process_infos{};
  CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadProcessInfos(&p_process_infos))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "CoordinationUnitIntrospector::GetProcessToURLMap response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_process_infos));
  return true;
}

void CoordinationUnitIntrospector_GetProcessToURLMap_ProxyToResponder::Run(
    WTF::Vector<ProcessInfoPtr> in_process_infos) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCoordinationUnitIntrospector_GetProcessToURLMap_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->process_infos)::BaseType::BufferWriter
      process_infos_writer;
  const mojo::internal::ContainerValidateParams process_infos_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::resource_coordinator::mojom::ProcessInfoDataView>>(
      in_process_infos, buffer, &process_infos_writer, &process_infos_validate_params,
      &serialization_context);
  params->process_infos.Set(
      process_infos_writer.is_null() ? nullptr : process_infos_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->process_infos.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null process_infos in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::CoordinationUnitIntrospector::GetProcessToURLMapCallback",
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
bool CoordinationUnitIntrospectorStubDispatch::Accept(
    CoordinationUnitIntrospector* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kCoordinationUnitIntrospector_GetProcessToURLMap_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::CoordinationUnitIntrospector::GetProcessToURLMap",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool CoordinationUnitIntrospectorStubDispatch::AcceptWithResponder(
    CoordinationUnitIntrospector* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kCoordinationUnitIntrospector_GetProcessToURLMap_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::CoordinationUnitIntrospector::GetProcessToURLMap",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::CoordinationUnitIntrospector_GetProcessToURLMap_Params_Data* params =
          reinterpret_cast<
              internal::CoordinationUnitIntrospector_GetProcessToURLMap_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CoordinationUnitIntrospector_GetProcessToURLMap_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CoordinationUnitIntrospector::GetProcessToURLMap deserializer");
        return false;
      }
      CoordinationUnitIntrospector::GetProcessToURLMapCallback callback =
          CoordinationUnitIntrospector_GetProcessToURLMap_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetProcessToURLMap(std::move(callback));
      return true;
    }
  }
  return false;
}

bool CoordinationUnitIntrospectorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CoordinationUnitIntrospector RequestValidator");

  switch (message->header()->name) {
    case internal::kCoordinationUnitIntrospector_GetProcessToURLMap_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CoordinationUnitIntrospector_GetProcessToURLMap_Params_Data>(
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

bool CoordinationUnitIntrospectorResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CoordinationUnitIntrospector ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kCoordinationUnitIntrospector_GetProcessToURLMap_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParams_Data>(
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
void CoordinationUnitIntrospectorInterceptorForTesting::GetProcessToURLMap(GetProcessToURLMapCallback callback) {
  GetForwardingInterface()->GetProcessToURLMap(std::move(callback));
}
CoordinationUnitIntrospectorAsyncWaiter::CoordinationUnitIntrospectorAsyncWaiter(
    CoordinationUnitIntrospector* proxy) : proxy_(proxy) {}

CoordinationUnitIntrospectorAsyncWaiter::~CoordinationUnitIntrospectorAsyncWaiter() = default;

void CoordinationUnitIntrospectorAsyncWaiter::GetProcessToURLMap(
    WTF::Vector<ProcessInfoPtr>* out_process_infos) {
  base::RunLoop loop;
  proxy_->GetProcessToURLMap(
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::Vector<ProcessInfoPtr>* out_process_infos
,
             WTF::Vector<ProcessInfoPtr> process_infos) {*out_process_infos = std::move(process_infos);
            loop->Quit();
          },
          &loop,
          out_process_infos));
  loop.Run();
}

}  // namespace blink
}  // namespace mojom
}  // namespace resource_coordinator

namespace mojo {


// static
bool StructTraits<::resource_coordinator::mojom::blink::PageInfo::DataView, ::resource_coordinator::mojom::blink::PageInfoPtr>::Read(
    ::resource_coordinator::mojom::blink::PageInfo::DataView input,
    ::resource_coordinator::mojom::blink::PageInfoPtr* output) {
  bool success = true;
  ::resource_coordinator::mojom::blink::PageInfoPtr result(::resource_coordinator::mojom::blink::PageInfo::New());
  
      result->ukm_source_id = input.ukm_source_id();
      result->is_visible = input.is_visible();
      if (!input.ReadTimeSinceLastNavigation(&result->time_since_last_navigation))
        success = false;
      if (!input.ReadTimeSinceLastVisibilityChange(&result->time_since_last_visibility_change))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::resource_coordinator::mojom::blink::ProcessInfo::DataView, ::resource_coordinator::mojom::blink::ProcessInfoPtr>::Read(
    ::resource_coordinator::mojom::blink::ProcessInfo::DataView input,
    ::resource_coordinator::mojom::blink::ProcessInfoPtr* output) {
  bool success = true;
  ::resource_coordinator::mojom::blink::ProcessInfoPtr result(::resource_coordinator::mojom::blink::ProcessInfo::New());
  
      if (!input.ReadPid(&result->pid))
        success = false;
      if (!input.ReadPageInfos(&result->page_infos))
        success = false;
      if (!input.ReadLaunchTime(&result->launch_time))
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