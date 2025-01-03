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

#include "components/metrics/public/interfaces/call_stack_profile_collector.mojom.h"

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

#include "components/metrics/public/interfaces/call_stack_profile_collector.mojom-shared-message-ids.h"
#include "components/metrics/public/cpp/call_stack_profile_struct_traits.h"
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
namespace metrics {
namespace mojom {
CallStackModule::CallStackModule()
    : base_address(),
      id(),
      filename() {}

CallStackModule::CallStackModule(
    uint64_t base_address_in,
    const std::string& id_in,
    const base::FilePath& filename_in)
    : base_address(std::move(base_address_in)),
      id(std::move(id_in)),
      filename(std::move(filename_in)) {}

CallStackModule::~CallStackModule() = default;

bool CallStackModule::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
CallStackFrame::CallStackFrame()
    : instruction_pointer(),
      module_index() {}

CallStackFrame::CallStackFrame(
    uint64_t instruction_pointer_in,
    uint64_t module_index_in)
    : instruction_pointer(std::move(instruction_pointer_in)),
      module_index(std::move(module_index_in)) {}

CallStackFrame::~CallStackFrame() = default;

bool CallStackFrame::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
CallStackSample::CallStackSample()
    : frames(),
      process_milestones() {}

CallStackSample::CallStackSample(
    const std::vector<base::StackSamplingProfiler::Frame>& frames_in,
    uint32_t process_milestones_in)
    : frames(std::move(frames_in)),
      process_milestones(std::move(process_milestones_in)) {}

CallStackSample::~CallStackSample() = default;

bool CallStackSample::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
CallStackProfile::CallStackProfile()
    : modules(),
      samples(),
      profile_duration(),
      sampling_period() {}

CallStackProfile::CallStackProfile(
    const std::vector<base::StackSamplingProfiler::Module>& modules_in,
    std::vector<base::StackSamplingProfiler::Sample> samples_in,
    base::TimeDelta profile_duration_in,
    base::TimeDelta sampling_period_in)
    : modules(std::move(modules_in)),
      samples(std::move(samples_in)),
      profile_duration(std::move(profile_duration_in)),
      sampling_period(std::move(sampling_period_in)) {}

CallStackProfile::~CallStackProfile() = default;

bool CallStackProfile::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
CallStackProfileParams::CallStackProfileParams()
    : process(),
      thread(),
      trigger(),
      ordering_spec() {}

CallStackProfileParams::CallStackProfileParams(
    metrics::CallStackProfileParams::Process process_in,
    metrics::CallStackProfileParams::Thread thread_in,
    metrics::CallStackProfileParams::Trigger trigger_in,
    metrics::CallStackProfileParams::SampleOrderingSpec ordering_spec_in)
    : process(std::move(process_in)),
      thread(std::move(thread_in)),
      trigger(std::move(trigger_in)),
      ordering_spec(std::move(ordering_spec_in)) {}

CallStackProfileParams::~CallStackProfileParams() = default;

bool CallStackProfileParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char CallStackProfileCollector::Name_[] = "metrics.mojom.CallStackProfileCollector";

CallStackProfileCollectorProxy::CallStackProfileCollectorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void CallStackProfileCollectorProxy::Collect(
    const metrics::CallStackProfileParams& in_params, base::TimeTicks in_start_timestamp, std::vector<base::StackSamplingProfiler::CallStackProfile> in_profiles) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "metrics::mojom::CallStackProfileCollector::Collect");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCallStackProfileCollector_Collect_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::metrics::mojom::internal::CallStackProfileCollector_Collect_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::metrics::mojom::CallStackProfileParamsDataView>(
      in_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in CallStackProfileCollector.Collect request");
  typename decltype(params->start_timestamp)::BaseType::BufferWriter
      start_timestamp_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
      in_start_timestamp, buffer, &start_timestamp_writer, &serialization_context);
  params->start_timestamp.Set(
      start_timestamp_writer.is_null() ? nullptr : start_timestamp_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->start_timestamp.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null start_timestamp in CallStackProfileCollector.Collect request");
  typename decltype(params->profiles)::BaseType::BufferWriter
      profiles_writer;
  const mojo::internal::ContainerValidateParams profiles_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::metrics::mojom::CallStackProfileDataView>>(
      in_profiles, buffer, &profiles_writer, &profiles_validate_params,
      &serialization_context);
  params->profiles.Set(
      profiles_writer.is_null() ? nullptr : profiles_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->profiles.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null profiles in CallStackProfileCollector.Collect request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool CallStackProfileCollectorStubDispatch::Accept(
    CallStackProfileCollector* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kCallStackProfileCollector_Collect_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)metrics::mojom::CallStackProfileCollector::Collect",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CallStackProfileCollector_Collect_Params_Data* params =
          reinterpret_cast<internal::CallStackProfileCollector_Collect_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      metrics::CallStackProfileParams p_params{};
      base::TimeTicks p_start_timestamp{};
      std::vector<base::StackSamplingProfiler::CallStackProfile> p_profiles{};
      CallStackProfileCollector_Collect_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      if (!input_data_view.ReadStartTimestamp(&p_start_timestamp))
        success = false;
      if (!input_data_view.ReadProfiles(&p_profiles))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CallStackProfileCollector::Collect deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Collect(
std::move(p_params), 
std::move(p_start_timestamp), 
std::move(p_profiles));
      return true;
    }
  }
  return false;
}

// static
bool CallStackProfileCollectorStubDispatch::AcceptWithResponder(
    CallStackProfileCollector* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kCallStackProfileCollector_Collect_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)metrics::mojom::CallStackProfileCollector::Collect",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool CallStackProfileCollectorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CallStackProfileCollector RequestValidator");

  switch (message->header()->name) {
    case internal::kCallStackProfileCollector_Collect_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CallStackProfileCollector_Collect_Params_Data>(
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

void CallStackProfileCollectorInterceptorForTesting::Collect(const metrics::CallStackProfileParams& params, base::TimeTicks start_timestamp, std::vector<base::StackSamplingProfiler::CallStackProfile> profiles) {
  GetForwardingInterface()->Collect(std::move(params), std::move(start_timestamp), std::move(profiles));
}
CallStackProfileCollectorAsyncWaiter::CallStackProfileCollectorAsyncWaiter(
    CallStackProfileCollector* proxy) : proxy_(proxy) {}

CallStackProfileCollectorAsyncWaiter::~CallStackProfileCollectorAsyncWaiter() = default;


}  // namespace mojom
}  // namespace metrics

namespace mojo {


// static
bool StructTraits<::metrics::mojom::CallStackModule::DataView, ::metrics::mojom::CallStackModulePtr>::Read(
    ::metrics::mojom::CallStackModule::DataView input,
    ::metrics::mojom::CallStackModulePtr* output) {
  bool success = true;
  ::metrics::mojom::CallStackModulePtr result(::metrics::mojom::CallStackModule::New());
  
      result->base_address = input.base_address();
      if (!input.ReadId(&result->id))
        success = false;
      if (!input.ReadFilename(&result->filename))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::metrics::mojom::CallStackFrame::DataView, ::metrics::mojom::CallStackFramePtr>::Read(
    ::metrics::mojom::CallStackFrame::DataView input,
    ::metrics::mojom::CallStackFramePtr* output) {
  bool success = true;
  ::metrics::mojom::CallStackFramePtr result(::metrics::mojom::CallStackFrame::New());
  
      result->instruction_pointer = input.instruction_pointer();
      result->module_index = input.module_index();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::metrics::mojom::CallStackSample::DataView, ::metrics::mojom::CallStackSamplePtr>::Read(
    ::metrics::mojom::CallStackSample::DataView input,
    ::metrics::mojom::CallStackSamplePtr* output) {
  bool success = true;
  ::metrics::mojom::CallStackSamplePtr result(::metrics::mojom::CallStackSample::New());
  
      if (!input.ReadFrames(&result->frames))
        success = false;
      result->process_milestones = input.process_milestones();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::metrics::mojom::CallStackProfile::DataView, ::metrics::mojom::CallStackProfilePtr>::Read(
    ::metrics::mojom::CallStackProfile::DataView input,
    ::metrics::mojom::CallStackProfilePtr* output) {
  bool success = true;
  ::metrics::mojom::CallStackProfilePtr result(::metrics::mojom::CallStackProfile::New());
  
      if (!input.ReadModules(&result->modules))
        success = false;
      if (!input.ReadSamples(&result->samples))
        success = false;
      if (!input.ReadProfileDuration(&result->profile_duration))
        success = false;
      if (!input.ReadSamplingPeriod(&result->sampling_period))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::metrics::mojom::CallStackProfileParams::DataView, ::metrics::mojom::CallStackProfileParamsPtr>::Read(
    ::metrics::mojom::CallStackProfileParams::DataView input,
    ::metrics::mojom::CallStackProfileParamsPtr* output) {
  bool success = true;
  ::metrics::mojom::CallStackProfileParamsPtr result(::metrics::mojom::CallStackProfileParams::New());
  
      if (!input.ReadProcess(&result->process))
        success = false;
      if (!input.ReadThread(&result->thread))
        success = false;
      if (!input.ReadTrigger(&result->trigger))
        success = false;
      if (!input.ReadOrderingSpec(&result->ordering_spec))
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