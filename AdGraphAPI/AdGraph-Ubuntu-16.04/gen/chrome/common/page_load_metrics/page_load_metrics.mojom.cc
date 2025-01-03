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

#include "chrome/common/page_load_metrics/page_load_metrics.mojom.h"

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

#include "chrome/common/page_load_metrics/page_load_metrics.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
namespace page_load_metrics {
namespace mojom {
DocumentTiming::DocumentTiming()
    : dom_content_loaded_event_start(),
      load_event_start(),
      first_layout() {}

DocumentTiming::DocumentTiming(
    base::Optional<base::TimeDelta> dom_content_loaded_event_start_in,
    base::Optional<base::TimeDelta> load_event_start_in,
    base::Optional<base::TimeDelta> first_layout_in)
    : dom_content_loaded_event_start(std::move(dom_content_loaded_event_start_in)),
      load_event_start(std::move(load_event_start_in)),
      first_layout(std::move(first_layout_in)) {}

DocumentTiming::~DocumentTiming() = default;

bool DocumentTiming::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PaintTiming::PaintTiming()
    : first_paint(),
      first_text_paint(),
      first_image_paint(),
      first_contentful_paint(),
      first_meaningful_paint() {}

PaintTiming::PaintTiming(
    base::Optional<base::TimeDelta> first_paint_in,
    base::Optional<base::TimeDelta> first_text_paint_in,
    base::Optional<base::TimeDelta> first_image_paint_in,
    base::Optional<base::TimeDelta> first_contentful_paint_in,
    base::Optional<base::TimeDelta> first_meaningful_paint_in)
    : first_paint(std::move(first_paint_in)),
      first_text_paint(std::move(first_text_paint_in)),
      first_image_paint(std::move(first_image_paint_in)),
      first_contentful_paint(std::move(first_contentful_paint_in)),
      first_meaningful_paint(std::move(first_meaningful_paint_in)) {}

PaintTiming::~PaintTiming() = default;

bool PaintTiming::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ParseTiming::ParseTiming()
    : parse_start(),
      parse_stop(),
      parse_blocked_on_script_load_duration(),
      parse_blocked_on_script_load_from_document_write_duration(),
      parse_blocked_on_script_execution_duration(),
      parse_blocked_on_script_execution_from_document_write_duration() {}

ParseTiming::ParseTiming(
    base::Optional<base::TimeDelta> parse_start_in,
    base::Optional<base::TimeDelta> parse_stop_in,
    base::Optional<base::TimeDelta> parse_blocked_on_script_load_duration_in,
    base::Optional<base::TimeDelta> parse_blocked_on_script_load_from_document_write_duration_in,
    base::Optional<base::TimeDelta> parse_blocked_on_script_execution_duration_in,
    base::Optional<base::TimeDelta> parse_blocked_on_script_execution_from_document_write_duration_in)
    : parse_start(std::move(parse_start_in)),
      parse_stop(std::move(parse_stop_in)),
      parse_blocked_on_script_load_duration(std::move(parse_blocked_on_script_load_duration_in)),
      parse_blocked_on_script_load_from_document_write_duration(std::move(parse_blocked_on_script_load_from_document_write_duration_in)),
      parse_blocked_on_script_execution_duration(std::move(parse_blocked_on_script_execution_duration_in)),
      parse_blocked_on_script_execution_from_document_write_duration(std::move(parse_blocked_on_script_execution_from_document_write_duration_in)) {}

ParseTiming::~ParseTiming() = default;

bool ParseTiming::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
StyleSheetTiming::StyleSheetTiming()
    : author_style_sheet_parse_duration_before_fcp(),
      update_style_duration_before_fcp() {}

StyleSheetTiming::StyleSheetTiming(
    base::Optional<base::TimeDelta> author_style_sheet_parse_duration_before_fcp_in,
    base::Optional<base::TimeDelta> update_style_duration_before_fcp_in)
    : author_style_sheet_parse_duration_before_fcp(std::move(author_style_sheet_parse_duration_before_fcp_in)),
      update_style_duration_before_fcp(std::move(update_style_duration_before_fcp_in)) {}

StyleSheetTiming::~StyleSheetTiming() = default;

bool StyleSheetTiming::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
InteractiveTiming::InteractiveTiming()
    : interactive(),
      interactive_detection(),
      first_invalidating_input(),
      first_input_delay(),
      first_input_timestamp() {}

InteractiveTiming::InteractiveTiming(
    base::Optional<base::TimeDelta> interactive_in,
    base::Optional<base::TimeDelta> interactive_detection_in,
    base::Optional<base::TimeDelta> first_invalidating_input_in,
    base::Optional<base::TimeDelta> first_input_delay_in,
    base::Optional<base::TimeDelta> first_input_timestamp_in)
    : interactive(std::move(interactive_in)),
      interactive_detection(std::move(interactive_detection_in)),
      first_invalidating_input(std::move(first_invalidating_input_in)),
      first_input_delay(std::move(first_input_delay_in)),
      first_input_timestamp(std::move(first_input_timestamp_in)) {}

InteractiveTiming::~InteractiveTiming() = default;

bool InteractiveTiming::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PageLoadTiming::PageLoadTiming()
    : navigation_start(),
      response_start(),
      document_timing(),
      interactive_timing(),
      paint_timing(),
      parse_timing(),
      style_sheet_timing() {}

PageLoadTiming::PageLoadTiming(
    base::Time navigation_start_in,
    base::Optional<base::TimeDelta> response_start_in,
    DocumentTimingPtr document_timing_in,
    InteractiveTimingPtr interactive_timing_in,
    PaintTimingPtr paint_timing_in,
    ParseTimingPtr parse_timing_in,
    StyleSheetTimingPtr style_sheet_timing_in)
    : navigation_start(std::move(navigation_start_in)),
      response_start(std::move(response_start_in)),
      document_timing(std::move(document_timing_in)),
      interactive_timing(std::move(interactive_timing_in)),
      paint_timing(std::move(paint_timing_in)),
      parse_timing(std::move(parse_timing_in)),
      style_sheet_timing(std::move(style_sheet_timing_in)) {}

PageLoadTiming::~PageLoadTiming() = default;

bool PageLoadTiming::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PageLoadMetadata::PageLoadMetadata()
    : behavior_flags(0) {}

PageLoadMetadata::PageLoadMetadata(
    int32_t behavior_flags_in)
    : behavior_flags(std::move(behavior_flags_in)) {}

PageLoadMetadata::~PageLoadMetadata() = default;
size_t PageLoadMetadata::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->behavior_flags);
  return seed;
}

bool PageLoadMetadata::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PageLoadFeatures::PageLoadFeatures()
    : features(),
      css_properties(),
      animated_css_properties() {}

PageLoadFeatures::PageLoadFeatures(
    const std::vector<::blink::mojom::WebFeature>& features_in,
    const std::vector<int32_t>& css_properties_in,
    const std::vector<int32_t>& animated_css_properties_in)
    : features(std::move(features_in)),
      css_properties(std::move(css_properties_in)),
      animated_css_properties(std::move(animated_css_properties_in)) {}

PageLoadFeatures::~PageLoadFeatures() = default;

bool PageLoadFeatures::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char PageLoadMetrics::Name_[] = "page_load_metrics.mojom.PageLoadMetrics";

PageLoadMetricsProxy::PageLoadMetricsProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PageLoadMetricsProxy::UpdateTiming(
    PageLoadTimingPtr in_page_load_timing, PageLoadMetadataPtr in_page_load_metadata, PageLoadFeaturesPtr in_new_features) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "page_load_metrics::mojom::PageLoadMetrics::UpdateTiming");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPageLoadMetrics_UpdateTiming_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::page_load_metrics::mojom::internal::PageLoadMetrics_UpdateTiming_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->page_load_timing)::BaseType::BufferWriter
      page_load_timing_writer;
  mojo::internal::Serialize<::page_load_metrics::mojom::PageLoadTimingDataView>(
      in_page_load_timing, buffer, &page_load_timing_writer, &serialization_context);
  params->page_load_timing.Set(
      page_load_timing_writer.is_null() ? nullptr : page_load_timing_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->page_load_timing.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null page_load_timing in PageLoadMetrics.UpdateTiming request");
  typename decltype(params->page_load_metadata)::BaseType::BufferWriter
      page_load_metadata_writer;
  mojo::internal::Serialize<::page_load_metrics::mojom::PageLoadMetadataDataView>(
      in_page_load_metadata, buffer, &page_load_metadata_writer, &serialization_context);
  params->page_load_metadata.Set(
      page_load_metadata_writer.is_null() ? nullptr : page_load_metadata_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->page_load_metadata.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null page_load_metadata in PageLoadMetrics.UpdateTiming request");
  typename decltype(params->new_features)::BaseType::BufferWriter
      new_features_writer;
  mojo::internal::Serialize<::page_load_metrics::mojom::PageLoadFeaturesDataView>(
      in_new_features, buffer, &new_features_writer, &serialization_context);
  params->new_features.Set(
      new_features_writer.is_null() ? nullptr : new_features_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->new_features.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null new_features in PageLoadMetrics.UpdateTiming request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool PageLoadMetricsStubDispatch::Accept(
    PageLoadMetrics* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPageLoadMetrics_UpdateTiming_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)page_load_metrics::mojom::PageLoadMetrics::UpdateTiming",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PageLoadMetrics_UpdateTiming_Params_Data* params =
          reinterpret_cast<internal::PageLoadMetrics_UpdateTiming_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PageLoadTimingPtr p_page_load_timing{};
      PageLoadMetadataPtr p_page_load_metadata{};
      PageLoadFeaturesPtr p_new_features{};
      PageLoadMetrics_UpdateTiming_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPageLoadTiming(&p_page_load_timing))
        success = false;
      if (!input_data_view.ReadPageLoadMetadata(&p_page_load_metadata))
        success = false;
      if (!input_data_view.ReadNewFeatures(&p_new_features))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PageLoadMetrics::UpdateTiming deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->UpdateTiming(
std::move(p_page_load_timing), 
std::move(p_page_load_metadata), 
std::move(p_new_features));
      return true;
    }
  }
  return false;
}

// static
bool PageLoadMetricsStubDispatch::AcceptWithResponder(
    PageLoadMetrics* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPageLoadMetrics_UpdateTiming_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)page_load_metrics::mojom::PageLoadMetrics::UpdateTiming",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool PageLoadMetricsRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PageLoadMetrics RequestValidator");

  switch (message->header()->name) {
    case internal::kPageLoadMetrics_UpdateTiming_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PageLoadMetrics_UpdateTiming_Params_Data>(
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

void PageLoadMetricsInterceptorForTesting::UpdateTiming(PageLoadTimingPtr page_load_timing, PageLoadMetadataPtr page_load_metadata, PageLoadFeaturesPtr new_features) {
  GetForwardingInterface()->UpdateTiming(std::move(page_load_timing), std::move(page_load_metadata), std::move(new_features));
}
PageLoadMetricsAsyncWaiter::PageLoadMetricsAsyncWaiter(
    PageLoadMetrics* proxy) : proxy_(proxy) {}

PageLoadMetricsAsyncWaiter::~PageLoadMetricsAsyncWaiter() = default;


}  // namespace mojom
}  // namespace page_load_metrics

namespace mojo {


// static
bool StructTraits<::page_load_metrics::mojom::DocumentTiming::DataView, ::page_load_metrics::mojom::DocumentTimingPtr>::Read(
    ::page_load_metrics::mojom::DocumentTiming::DataView input,
    ::page_load_metrics::mojom::DocumentTimingPtr* output) {
  bool success = true;
  ::page_load_metrics::mojom::DocumentTimingPtr result(::page_load_metrics::mojom::DocumentTiming::New());
  
      if (!input.ReadDomContentLoadedEventStart(&result->dom_content_loaded_event_start))
        success = false;
      if (!input.ReadLoadEventStart(&result->load_event_start))
        success = false;
      if (!input.ReadFirstLayout(&result->first_layout))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::page_load_metrics::mojom::PaintTiming::DataView, ::page_load_metrics::mojom::PaintTimingPtr>::Read(
    ::page_load_metrics::mojom::PaintTiming::DataView input,
    ::page_load_metrics::mojom::PaintTimingPtr* output) {
  bool success = true;
  ::page_load_metrics::mojom::PaintTimingPtr result(::page_load_metrics::mojom::PaintTiming::New());
  
      if (!input.ReadFirstPaint(&result->first_paint))
        success = false;
      if (!input.ReadFirstTextPaint(&result->first_text_paint))
        success = false;
      if (!input.ReadFirstImagePaint(&result->first_image_paint))
        success = false;
      if (!input.ReadFirstContentfulPaint(&result->first_contentful_paint))
        success = false;
      if (!input.ReadFirstMeaningfulPaint(&result->first_meaningful_paint))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::page_load_metrics::mojom::ParseTiming::DataView, ::page_load_metrics::mojom::ParseTimingPtr>::Read(
    ::page_load_metrics::mojom::ParseTiming::DataView input,
    ::page_load_metrics::mojom::ParseTimingPtr* output) {
  bool success = true;
  ::page_load_metrics::mojom::ParseTimingPtr result(::page_load_metrics::mojom::ParseTiming::New());
  
      if (!input.ReadParseStart(&result->parse_start))
        success = false;
      if (!input.ReadParseStop(&result->parse_stop))
        success = false;
      if (!input.ReadParseBlockedOnScriptLoadDuration(&result->parse_blocked_on_script_load_duration))
        success = false;
      if (!input.ReadParseBlockedOnScriptLoadFromDocumentWriteDuration(&result->parse_blocked_on_script_load_from_document_write_duration))
        success = false;
      if (!input.ReadParseBlockedOnScriptExecutionDuration(&result->parse_blocked_on_script_execution_duration))
        success = false;
      if (!input.ReadParseBlockedOnScriptExecutionFromDocumentWriteDuration(&result->parse_blocked_on_script_execution_from_document_write_duration))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::page_load_metrics::mojom::StyleSheetTiming::DataView, ::page_load_metrics::mojom::StyleSheetTimingPtr>::Read(
    ::page_load_metrics::mojom::StyleSheetTiming::DataView input,
    ::page_load_metrics::mojom::StyleSheetTimingPtr* output) {
  bool success = true;
  ::page_load_metrics::mojom::StyleSheetTimingPtr result(::page_load_metrics::mojom::StyleSheetTiming::New());
  
      if (!input.ReadAuthorStyleSheetParseDurationBeforeFcp(&result->author_style_sheet_parse_duration_before_fcp))
        success = false;
      if (!input.ReadUpdateStyleDurationBeforeFcp(&result->update_style_duration_before_fcp))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::page_load_metrics::mojom::InteractiveTiming::DataView, ::page_load_metrics::mojom::InteractiveTimingPtr>::Read(
    ::page_load_metrics::mojom::InteractiveTiming::DataView input,
    ::page_load_metrics::mojom::InteractiveTimingPtr* output) {
  bool success = true;
  ::page_load_metrics::mojom::InteractiveTimingPtr result(::page_load_metrics::mojom::InteractiveTiming::New());
  
      if (!input.ReadInteractive(&result->interactive))
        success = false;
      if (!input.ReadInteractiveDetection(&result->interactive_detection))
        success = false;
      if (!input.ReadFirstInvalidatingInput(&result->first_invalidating_input))
        success = false;
      if (!input.ReadFirstInputDelay(&result->first_input_delay))
        success = false;
      if (!input.ReadFirstInputTimestamp(&result->first_input_timestamp))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::page_load_metrics::mojom::PageLoadTiming::DataView, ::page_load_metrics::mojom::PageLoadTimingPtr>::Read(
    ::page_load_metrics::mojom::PageLoadTiming::DataView input,
    ::page_load_metrics::mojom::PageLoadTimingPtr* output) {
  bool success = true;
  ::page_load_metrics::mojom::PageLoadTimingPtr result(::page_load_metrics::mojom::PageLoadTiming::New());
  
      if (!input.ReadNavigationStart(&result->navigation_start))
        success = false;
      if (!input.ReadResponseStart(&result->response_start))
        success = false;
      if (!input.ReadDocumentTiming(&result->document_timing))
        success = false;
      if (!input.ReadInteractiveTiming(&result->interactive_timing))
        success = false;
      if (!input.ReadPaintTiming(&result->paint_timing))
        success = false;
      if (!input.ReadParseTiming(&result->parse_timing))
        success = false;
      if (!input.ReadStyleSheetTiming(&result->style_sheet_timing))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::page_load_metrics::mojom::PageLoadMetadata::DataView, ::page_load_metrics::mojom::PageLoadMetadataPtr>::Read(
    ::page_load_metrics::mojom::PageLoadMetadata::DataView input,
    ::page_load_metrics::mojom::PageLoadMetadataPtr* output) {
  bool success = true;
  ::page_load_metrics::mojom::PageLoadMetadataPtr result(::page_load_metrics::mojom::PageLoadMetadata::New());
  
      result->behavior_flags = input.behavior_flags();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::page_load_metrics::mojom::PageLoadFeatures::DataView, ::page_load_metrics::mojom::PageLoadFeaturesPtr>::Read(
    ::page_load_metrics::mojom::PageLoadFeatures::DataView input,
    ::page_load_metrics::mojom::PageLoadFeaturesPtr* output) {
  bool success = true;
  ::page_load_metrics::mojom::PageLoadFeaturesPtr result(::page_load_metrics::mojom::PageLoadFeatures::New());
  
      if (!input.ReadFeatures(&result->features))
        success = false;
      if (!input.ReadCssProperties(&result->css_properties))
        success = false;
      if (!input.ReadAnimatedCssProperties(&result->animated_css_properties))
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