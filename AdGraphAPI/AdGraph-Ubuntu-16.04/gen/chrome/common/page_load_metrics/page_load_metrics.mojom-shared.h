// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_PAGE_LOAD_METRICS_PAGE_LOAD_METRICS_MOJOM_SHARED_H_
#define CHROME_COMMON_PAGE_LOAD_METRICS_PAGE_LOAD_METRICS_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "chrome/common/page_load_metrics/page_load_metrics.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "third_party/blink/public/platform/web_feature.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace page_load_metrics {
namespace mojom {
class DocumentTimingDataView;

class PaintTimingDataView;

class ParseTimingDataView;

class StyleSheetTimingDataView;

class InteractiveTimingDataView;

class PageLoadTimingDataView;

class PageLoadMetadataDataView;

class PageLoadFeaturesDataView;



}  // namespace mojom
}  // namespace page_load_metrics

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::page_load_metrics::mojom::DocumentTimingDataView> {
  using Data = ::page_load_metrics::mojom::internal::DocumentTiming_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::page_load_metrics::mojom::PaintTimingDataView> {
  using Data = ::page_load_metrics::mojom::internal::PaintTiming_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::page_load_metrics::mojom::ParseTimingDataView> {
  using Data = ::page_load_metrics::mojom::internal::ParseTiming_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::page_load_metrics::mojom::StyleSheetTimingDataView> {
  using Data = ::page_load_metrics::mojom::internal::StyleSheetTiming_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::page_load_metrics::mojom::InteractiveTimingDataView> {
  using Data = ::page_load_metrics::mojom::internal::InteractiveTiming_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::page_load_metrics::mojom::PageLoadTimingDataView> {
  using Data = ::page_load_metrics::mojom::internal::PageLoadTiming_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::page_load_metrics::mojom::PageLoadMetadataDataView> {
  using Data = ::page_load_metrics::mojom::internal::PageLoadMetadata_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::page_load_metrics::mojom::PageLoadFeaturesDataView> {
  using Data = ::page_load_metrics::mojom::internal::PageLoadFeatures_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace page_load_metrics {
namespace mojom {
// Interface base classes. They are used for type safety check.
class PageLoadMetricsInterfaceBase {};

using PageLoadMetricsPtrDataView =
    mojo::InterfacePtrDataView<PageLoadMetricsInterfaceBase>;
using PageLoadMetricsRequestDataView =
    mojo::InterfaceRequestDataView<PageLoadMetricsInterfaceBase>;
using PageLoadMetricsAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PageLoadMetricsInterfaceBase>;
using PageLoadMetricsAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PageLoadMetricsInterfaceBase>;
class DocumentTimingDataView {
 public:
  DocumentTimingDataView() {}

  DocumentTimingDataView(
      internal::DocumentTiming_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDomContentLoadedEventStartDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDomContentLoadedEventStart(UserType* output) {
    auto* pointer = data_->dom_content_loaded_event_start.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetLoadEventStartDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLoadEventStart(UserType* output) {
    auto* pointer = data_->load_event_start.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetFirstLayoutDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFirstLayout(UserType* output) {
    auto* pointer = data_->first_layout.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::DocumentTiming_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaintTimingDataView {
 public:
  PaintTimingDataView() {}

  PaintTimingDataView(
      internal::PaintTiming_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFirstPaintDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFirstPaint(UserType* output) {
    auto* pointer = data_->first_paint.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetFirstTextPaintDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFirstTextPaint(UserType* output) {
    auto* pointer = data_->first_text_paint.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetFirstImagePaintDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFirstImagePaint(UserType* output) {
    auto* pointer = data_->first_image_paint.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetFirstContentfulPaintDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFirstContentfulPaint(UserType* output) {
    auto* pointer = data_->first_contentful_paint.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetFirstMeaningfulPaintDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFirstMeaningfulPaint(UserType* output) {
    auto* pointer = data_->first_meaningful_paint.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::PaintTiming_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ParseTimingDataView {
 public:
  ParseTimingDataView() {}

  ParseTimingDataView(
      internal::ParseTiming_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParseStartDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParseStart(UserType* output) {
    auto* pointer = data_->parse_start.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetParseStopDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParseStop(UserType* output) {
    auto* pointer = data_->parse_stop.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetParseBlockedOnScriptLoadDurationDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParseBlockedOnScriptLoadDuration(UserType* output) {
    auto* pointer = data_->parse_blocked_on_script_load_duration.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetParseBlockedOnScriptLoadFromDocumentWriteDurationDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParseBlockedOnScriptLoadFromDocumentWriteDuration(UserType* output) {
    auto* pointer = data_->parse_blocked_on_script_load_from_document_write_duration.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetParseBlockedOnScriptExecutionDurationDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParseBlockedOnScriptExecutionDuration(UserType* output) {
    auto* pointer = data_->parse_blocked_on_script_execution_duration.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetParseBlockedOnScriptExecutionFromDocumentWriteDurationDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParseBlockedOnScriptExecutionFromDocumentWriteDuration(UserType* output) {
    auto* pointer = data_->parse_blocked_on_script_execution_from_document_write_duration.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::ParseTiming_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class StyleSheetTimingDataView {
 public:
  StyleSheetTimingDataView() {}

  StyleSheetTimingDataView(
      internal::StyleSheetTiming_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAuthorStyleSheetParseDurationBeforeFcpDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAuthorStyleSheetParseDurationBeforeFcp(UserType* output) {
    auto* pointer = data_->author_style_sheet_parse_duration_before_fcp.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetUpdateStyleDurationBeforeFcpDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUpdateStyleDurationBeforeFcp(UserType* output) {
    auto* pointer = data_->update_style_duration_before_fcp.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::StyleSheetTiming_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InteractiveTimingDataView {
 public:
  InteractiveTimingDataView() {}

  InteractiveTimingDataView(
      internal::InteractiveTiming_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInteractiveDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInteractive(UserType* output) {
    auto* pointer = data_->interactive.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetInteractiveDetectionDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInteractiveDetection(UserType* output) {
    auto* pointer = data_->interactive_detection.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetFirstInvalidatingInputDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFirstInvalidatingInput(UserType* output) {
    auto* pointer = data_->first_invalidating_input.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetFirstInputDelayDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFirstInputDelay(UserType* output) {
    auto* pointer = data_->first_input_delay.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetFirstInputTimestampDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFirstInputTimestamp(UserType* output) {
    auto* pointer = data_->first_input_timestamp.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::InteractiveTiming_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PageLoadTimingDataView {
 public:
  PageLoadTimingDataView() {}

  PageLoadTimingDataView(
      internal::PageLoadTiming_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNavigationStartDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNavigationStart(UserType* output) {
    auto* pointer = data_->navigation_start.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  inline void GetResponseStartDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResponseStart(UserType* output) {
    auto* pointer = data_->response_start.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetDocumentTimingDataView(
      DocumentTimingDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDocumentTiming(UserType* output) {
    auto* pointer = data_->document_timing.Get();
    return mojo::internal::Deserialize<::page_load_metrics::mojom::DocumentTimingDataView>(
        pointer, output, context_);
  }
  inline void GetInteractiveTimingDataView(
      InteractiveTimingDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInteractiveTiming(UserType* output) {
    auto* pointer = data_->interactive_timing.Get();
    return mojo::internal::Deserialize<::page_load_metrics::mojom::InteractiveTimingDataView>(
        pointer, output, context_);
  }
  inline void GetPaintTimingDataView(
      PaintTimingDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPaintTiming(UserType* output) {
    auto* pointer = data_->paint_timing.Get();
    return mojo::internal::Deserialize<::page_load_metrics::mojom::PaintTimingDataView>(
        pointer, output, context_);
  }
  inline void GetParseTimingDataView(
      ParseTimingDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParseTiming(UserType* output) {
    auto* pointer = data_->parse_timing.Get();
    return mojo::internal::Deserialize<::page_load_metrics::mojom::ParseTimingDataView>(
        pointer, output, context_);
  }
  inline void GetStyleSheetTimingDataView(
      StyleSheetTimingDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStyleSheetTiming(UserType* output) {
    auto* pointer = data_->style_sheet_timing.Get();
    return mojo::internal::Deserialize<::page_load_metrics::mojom::StyleSheetTimingDataView>(
        pointer, output, context_);
  }
 private:
  internal::PageLoadTiming_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PageLoadMetadataDataView {
 public:
  PageLoadMetadataDataView() {}

  PageLoadMetadataDataView(
      internal::PageLoadMetadata_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t behavior_flags() const {
    return data_->behavior_flags;
  }
 private:
  internal::PageLoadMetadata_Data* data_ = nullptr;
};

class PageLoadFeaturesDataView {
 public:
  PageLoadFeaturesDataView() {}

  PageLoadFeaturesDataView(
      internal::PageLoadFeatures_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFeaturesDataView(
      mojo::ArrayDataView<::blink::mojom::WebFeature>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFeatures(UserType* output) {
    auto* pointer = data_->features.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::WebFeature>>(
        pointer, output, context_);
  }
  inline void GetCssPropertiesDataView(
      mojo::ArrayDataView<int32_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCssProperties(UserType* output) {
    auto* pointer = data_->css_properties.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<int32_t>>(
        pointer, output, context_);
  }
  inline void GetAnimatedCssPropertiesDataView(
      mojo::ArrayDataView<int32_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAnimatedCssProperties(UserType* output) {
    auto* pointer = data_->animated_css_properties.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<int32_t>>(
        pointer, output, context_);
  }
 private:
  internal::PageLoadFeatures_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PageLoadMetrics_UpdateTiming_ParamsDataView {
 public:
  PageLoadMetrics_UpdateTiming_ParamsDataView() {}

  PageLoadMetrics_UpdateTiming_ParamsDataView(
      internal::PageLoadMetrics_UpdateTiming_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPageLoadTimingDataView(
      PageLoadTimingDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPageLoadTiming(UserType* output) {
    auto* pointer = data_->page_load_timing.Get();
    return mojo::internal::Deserialize<::page_load_metrics::mojom::PageLoadTimingDataView>(
        pointer, output, context_);
  }
  inline void GetPageLoadMetadataDataView(
      PageLoadMetadataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPageLoadMetadata(UserType* output) {
    auto* pointer = data_->page_load_metadata.Get();
    return mojo::internal::Deserialize<::page_load_metrics::mojom::PageLoadMetadataDataView>(
        pointer, output, context_);
  }
  inline void GetNewFeaturesDataView(
      PageLoadFeaturesDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNewFeatures(UserType* output) {
    auto* pointer = data_->new_features.Get();
    return mojo::internal::Deserialize<::page_load_metrics::mojom::PageLoadFeaturesDataView>(
        pointer, output, context_);
  }
 private:
  internal::PageLoadMetrics_UpdateTiming_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace page_load_metrics

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::page_load_metrics::mojom::DocumentTimingDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::page_load_metrics::mojom::DocumentTimingDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::page_load_metrics::mojom::internal::DocumentTiming_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::dom_content_loaded_event_start, input, custom_context)) in_dom_content_loaded_event_start = CallWithContext(Traits::dom_content_loaded_event_start, input, custom_context);
    typename decltype((*output)->dom_content_loaded_event_start)::BaseType::BufferWriter
        dom_content_loaded_event_start_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_dom_content_loaded_event_start, buffer, &dom_content_loaded_event_start_writer, context);
    (*output)->dom_content_loaded_event_start.Set(
        dom_content_loaded_event_start_writer.is_null() ? nullptr : dom_content_loaded_event_start_writer.data());
    decltype(CallWithContext(Traits::load_event_start, input, custom_context)) in_load_event_start = CallWithContext(Traits::load_event_start, input, custom_context);
    typename decltype((*output)->load_event_start)::BaseType::BufferWriter
        load_event_start_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_load_event_start, buffer, &load_event_start_writer, context);
    (*output)->load_event_start.Set(
        load_event_start_writer.is_null() ? nullptr : load_event_start_writer.data());
    decltype(CallWithContext(Traits::first_layout, input, custom_context)) in_first_layout = CallWithContext(Traits::first_layout, input, custom_context);
    typename decltype((*output)->first_layout)::BaseType::BufferWriter
        first_layout_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_first_layout, buffer, &first_layout_writer, context);
    (*output)->first_layout.Set(
        first_layout_writer.is_null() ? nullptr : first_layout_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::page_load_metrics::mojom::internal::DocumentTiming_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::page_load_metrics::mojom::DocumentTimingDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::page_load_metrics::mojom::PaintTimingDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::page_load_metrics::mojom::PaintTimingDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::page_load_metrics::mojom::internal::PaintTiming_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::first_paint, input, custom_context)) in_first_paint = CallWithContext(Traits::first_paint, input, custom_context);
    typename decltype((*output)->first_paint)::BaseType::BufferWriter
        first_paint_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_first_paint, buffer, &first_paint_writer, context);
    (*output)->first_paint.Set(
        first_paint_writer.is_null() ? nullptr : first_paint_writer.data());
    decltype(CallWithContext(Traits::first_text_paint, input, custom_context)) in_first_text_paint = CallWithContext(Traits::first_text_paint, input, custom_context);
    typename decltype((*output)->first_text_paint)::BaseType::BufferWriter
        first_text_paint_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_first_text_paint, buffer, &first_text_paint_writer, context);
    (*output)->first_text_paint.Set(
        first_text_paint_writer.is_null() ? nullptr : first_text_paint_writer.data());
    decltype(CallWithContext(Traits::first_image_paint, input, custom_context)) in_first_image_paint = CallWithContext(Traits::first_image_paint, input, custom_context);
    typename decltype((*output)->first_image_paint)::BaseType::BufferWriter
        first_image_paint_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_first_image_paint, buffer, &first_image_paint_writer, context);
    (*output)->first_image_paint.Set(
        first_image_paint_writer.is_null() ? nullptr : first_image_paint_writer.data());
    decltype(CallWithContext(Traits::first_contentful_paint, input, custom_context)) in_first_contentful_paint = CallWithContext(Traits::first_contentful_paint, input, custom_context);
    typename decltype((*output)->first_contentful_paint)::BaseType::BufferWriter
        first_contentful_paint_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_first_contentful_paint, buffer, &first_contentful_paint_writer, context);
    (*output)->first_contentful_paint.Set(
        first_contentful_paint_writer.is_null() ? nullptr : first_contentful_paint_writer.data());
    decltype(CallWithContext(Traits::first_meaningful_paint, input, custom_context)) in_first_meaningful_paint = CallWithContext(Traits::first_meaningful_paint, input, custom_context);
    typename decltype((*output)->first_meaningful_paint)::BaseType::BufferWriter
        first_meaningful_paint_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_first_meaningful_paint, buffer, &first_meaningful_paint_writer, context);
    (*output)->first_meaningful_paint.Set(
        first_meaningful_paint_writer.is_null() ? nullptr : first_meaningful_paint_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::page_load_metrics::mojom::internal::PaintTiming_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::page_load_metrics::mojom::PaintTimingDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::page_load_metrics::mojom::ParseTimingDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::page_load_metrics::mojom::ParseTimingDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::page_load_metrics::mojom::internal::ParseTiming_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::parse_start, input, custom_context)) in_parse_start = CallWithContext(Traits::parse_start, input, custom_context);
    typename decltype((*output)->parse_start)::BaseType::BufferWriter
        parse_start_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_parse_start, buffer, &parse_start_writer, context);
    (*output)->parse_start.Set(
        parse_start_writer.is_null() ? nullptr : parse_start_writer.data());
    decltype(CallWithContext(Traits::parse_stop, input, custom_context)) in_parse_stop = CallWithContext(Traits::parse_stop, input, custom_context);
    typename decltype((*output)->parse_stop)::BaseType::BufferWriter
        parse_stop_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_parse_stop, buffer, &parse_stop_writer, context);
    (*output)->parse_stop.Set(
        parse_stop_writer.is_null() ? nullptr : parse_stop_writer.data());
    decltype(CallWithContext(Traits::parse_blocked_on_script_load_duration, input, custom_context)) in_parse_blocked_on_script_load_duration = CallWithContext(Traits::parse_blocked_on_script_load_duration, input, custom_context);
    typename decltype((*output)->parse_blocked_on_script_load_duration)::BaseType::BufferWriter
        parse_blocked_on_script_load_duration_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_parse_blocked_on_script_load_duration, buffer, &parse_blocked_on_script_load_duration_writer, context);
    (*output)->parse_blocked_on_script_load_duration.Set(
        parse_blocked_on_script_load_duration_writer.is_null() ? nullptr : parse_blocked_on_script_load_duration_writer.data());
    decltype(CallWithContext(Traits::parse_blocked_on_script_load_from_document_write_duration, input, custom_context)) in_parse_blocked_on_script_load_from_document_write_duration = CallWithContext(Traits::parse_blocked_on_script_load_from_document_write_duration, input, custom_context);
    typename decltype((*output)->parse_blocked_on_script_load_from_document_write_duration)::BaseType::BufferWriter
        parse_blocked_on_script_load_from_document_write_duration_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_parse_blocked_on_script_load_from_document_write_duration, buffer, &parse_blocked_on_script_load_from_document_write_duration_writer, context);
    (*output)->parse_blocked_on_script_load_from_document_write_duration.Set(
        parse_blocked_on_script_load_from_document_write_duration_writer.is_null() ? nullptr : parse_blocked_on_script_load_from_document_write_duration_writer.data());
    decltype(CallWithContext(Traits::parse_blocked_on_script_execution_duration, input, custom_context)) in_parse_blocked_on_script_execution_duration = CallWithContext(Traits::parse_blocked_on_script_execution_duration, input, custom_context);
    typename decltype((*output)->parse_blocked_on_script_execution_duration)::BaseType::BufferWriter
        parse_blocked_on_script_execution_duration_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_parse_blocked_on_script_execution_duration, buffer, &parse_blocked_on_script_execution_duration_writer, context);
    (*output)->parse_blocked_on_script_execution_duration.Set(
        parse_blocked_on_script_execution_duration_writer.is_null() ? nullptr : parse_blocked_on_script_execution_duration_writer.data());
    decltype(CallWithContext(Traits::parse_blocked_on_script_execution_from_document_write_duration, input, custom_context)) in_parse_blocked_on_script_execution_from_document_write_duration = CallWithContext(Traits::parse_blocked_on_script_execution_from_document_write_duration, input, custom_context);
    typename decltype((*output)->parse_blocked_on_script_execution_from_document_write_duration)::BaseType::BufferWriter
        parse_blocked_on_script_execution_from_document_write_duration_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_parse_blocked_on_script_execution_from_document_write_duration, buffer, &parse_blocked_on_script_execution_from_document_write_duration_writer, context);
    (*output)->parse_blocked_on_script_execution_from_document_write_duration.Set(
        parse_blocked_on_script_execution_from_document_write_duration_writer.is_null() ? nullptr : parse_blocked_on_script_execution_from_document_write_duration_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::page_load_metrics::mojom::internal::ParseTiming_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::page_load_metrics::mojom::ParseTimingDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::page_load_metrics::mojom::StyleSheetTimingDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::page_load_metrics::mojom::StyleSheetTimingDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::page_load_metrics::mojom::internal::StyleSheetTiming_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::author_style_sheet_parse_duration_before_fcp, input, custom_context)) in_author_style_sheet_parse_duration_before_fcp = CallWithContext(Traits::author_style_sheet_parse_duration_before_fcp, input, custom_context);
    typename decltype((*output)->author_style_sheet_parse_duration_before_fcp)::BaseType::BufferWriter
        author_style_sheet_parse_duration_before_fcp_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_author_style_sheet_parse_duration_before_fcp, buffer, &author_style_sheet_parse_duration_before_fcp_writer, context);
    (*output)->author_style_sheet_parse_duration_before_fcp.Set(
        author_style_sheet_parse_duration_before_fcp_writer.is_null() ? nullptr : author_style_sheet_parse_duration_before_fcp_writer.data());
    decltype(CallWithContext(Traits::update_style_duration_before_fcp, input, custom_context)) in_update_style_duration_before_fcp = CallWithContext(Traits::update_style_duration_before_fcp, input, custom_context);
    typename decltype((*output)->update_style_duration_before_fcp)::BaseType::BufferWriter
        update_style_duration_before_fcp_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_update_style_duration_before_fcp, buffer, &update_style_duration_before_fcp_writer, context);
    (*output)->update_style_duration_before_fcp.Set(
        update_style_duration_before_fcp_writer.is_null() ? nullptr : update_style_duration_before_fcp_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::page_load_metrics::mojom::internal::StyleSheetTiming_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::page_load_metrics::mojom::StyleSheetTimingDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::page_load_metrics::mojom::InteractiveTimingDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::page_load_metrics::mojom::InteractiveTimingDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::page_load_metrics::mojom::internal::InteractiveTiming_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::interactive, input, custom_context)) in_interactive = CallWithContext(Traits::interactive, input, custom_context);
    typename decltype((*output)->interactive)::BaseType::BufferWriter
        interactive_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_interactive, buffer, &interactive_writer, context);
    (*output)->interactive.Set(
        interactive_writer.is_null() ? nullptr : interactive_writer.data());
    decltype(CallWithContext(Traits::interactive_detection, input, custom_context)) in_interactive_detection = CallWithContext(Traits::interactive_detection, input, custom_context);
    typename decltype((*output)->interactive_detection)::BaseType::BufferWriter
        interactive_detection_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_interactive_detection, buffer, &interactive_detection_writer, context);
    (*output)->interactive_detection.Set(
        interactive_detection_writer.is_null() ? nullptr : interactive_detection_writer.data());
    decltype(CallWithContext(Traits::first_invalidating_input, input, custom_context)) in_first_invalidating_input = CallWithContext(Traits::first_invalidating_input, input, custom_context);
    typename decltype((*output)->first_invalidating_input)::BaseType::BufferWriter
        first_invalidating_input_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_first_invalidating_input, buffer, &first_invalidating_input_writer, context);
    (*output)->first_invalidating_input.Set(
        first_invalidating_input_writer.is_null() ? nullptr : first_invalidating_input_writer.data());
    decltype(CallWithContext(Traits::first_input_delay, input, custom_context)) in_first_input_delay = CallWithContext(Traits::first_input_delay, input, custom_context);
    typename decltype((*output)->first_input_delay)::BaseType::BufferWriter
        first_input_delay_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_first_input_delay, buffer, &first_input_delay_writer, context);
    (*output)->first_input_delay.Set(
        first_input_delay_writer.is_null() ? nullptr : first_input_delay_writer.data());
    decltype(CallWithContext(Traits::first_input_timestamp, input, custom_context)) in_first_input_timestamp = CallWithContext(Traits::first_input_timestamp, input, custom_context);
    typename decltype((*output)->first_input_timestamp)::BaseType::BufferWriter
        first_input_timestamp_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_first_input_timestamp, buffer, &first_input_timestamp_writer, context);
    (*output)->first_input_timestamp.Set(
        first_input_timestamp_writer.is_null() ? nullptr : first_input_timestamp_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::page_load_metrics::mojom::internal::InteractiveTiming_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::page_load_metrics::mojom::InteractiveTimingDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::page_load_metrics::mojom::PageLoadTimingDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::page_load_metrics::mojom::PageLoadTimingDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::page_load_metrics::mojom::internal::PageLoadTiming_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::navigation_start, input, custom_context)) in_navigation_start = CallWithContext(Traits::navigation_start, input, custom_context);
    typename decltype((*output)->navigation_start)::BaseType::BufferWriter
        navigation_start_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
        in_navigation_start, buffer, &navigation_start_writer, context);
    (*output)->navigation_start.Set(
        navigation_start_writer.is_null() ? nullptr : navigation_start_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->navigation_start.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null navigation_start in PageLoadTiming struct");
    decltype(CallWithContext(Traits::response_start, input, custom_context)) in_response_start = CallWithContext(Traits::response_start, input, custom_context);
    typename decltype((*output)->response_start)::BaseType::BufferWriter
        response_start_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_response_start, buffer, &response_start_writer, context);
    (*output)->response_start.Set(
        response_start_writer.is_null() ? nullptr : response_start_writer.data());
    decltype(CallWithContext(Traits::document_timing, input, custom_context)) in_document_timing = CallWithContext(Traits::document_timing, input, custom_context);
    typename decltype((*output)->document_timing)::BaseType::BufferWriter
        document_timing_writer;
    mojo::internal::Serialize<::page_load_metrics::mojom::DocumentTimingDataView>(
        in_document_timing, buffer, &document_timing_writer, context);
    (*output)->document_timing.Set(
        document_timing_writer.is_null() ? nullptr : document_timing_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->document_timing.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null document_timing in PageLoadTiming struct");
    decltype(CallWithContext(Traits::interactive_timing, input, custom_context)) in_interactive_timing = CallWithContext(Traits::interactive_timing, input, custom_context);
    typename decltype((*output)->interactive_timing)::BaseType::BufferWriter
        interactive_timing_writer;
    mojo::internal::Serialize<::page_load_metrics::mojom::InteractiveTimingDataView>(
        in_interactive_timing, buffer, &interactive_timing_writer, context);
    (*output)->interactive_timing.Set(
        interactive_timing_writer.is_null() ? nullptr : interactive_timing_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->interactive_timing.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null interactive_timing in PageLoadTiming struct");
    decltype(CallWithContext(Traits::paint_timing, input, custom_context)) in_paint_timing = CallWithContext(Traits::paint_timing, input, custom_context);
    typename decltype((*output)->paint_timing)::BaseType::BufferWriter
        paint_timing_writer;
    mojo::internal::Serialize<::page_load_metrics::mojom::PaintTimingDataView>(
        in_paint_timing, buffer, &paint_timing_writer, context);
    (*output)->paint_timing.Set(
        paint_timing_writer.is_null() ? nullptr : paint_timing_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->paint_timing.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null paint_timing in PageLoadTiming struct");
    decltype(CallWithContext(Traits::parse_timing, input, custom_context)) in_parse_timing = CallWithContext(Traits::parse_timing, input, custom_context);
    typename decltype((*output)->parse_timing)::BaseType::BufferWriter
        parse_timing_writer;
    mojo::internal::Serialize<::page_load_metrics::mojom::ParseTimingDataView>(
        in_parse_timing, buffer, &parse_timing_writer, context);
    (*output)->parse_timing.Set(
        parse_timing_writer.is_null() ? nullptr : parse_timing_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->parse_timing.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null parse_timing in PageLoadTiming struct");
    decltype(CallWithContext(Traits::style_sheet_timing, input, custom_context)) in_style_sheet_timing = CallWithContext(Traits::style_sheet_timing, input, custom_context);
    typename decltype((*output)->style_sheet_timing)::BaseType::BufferWriter
        style_sheet_timing_writer;
    mojo::internal::Serialize<::page_load_metrics::mojom::StyleSheetTimingDataView>(
        in_style_sheet_timing, buffer, &style_sheet_timing_writer, context);
    (*output)->style_sheet_timing.Set(
        style_sheet_timing_writer.is_null() ? nullptr : style_sheet_timing_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->style_sheet_timing.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null style_sheet_timing in PageLoadTiming struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::page_load_metrics::mojom::internal::PageLoadTiming_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::page_load_metrics::mojom::PageLoadTimingDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::page_load_metrics::mojom::PageLoadMetadataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::page_load_metrics::mojom::PageLoadMetadataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::page_load_metrics::mojom::internal::PageLoadMetadata_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->behavior_flags = CallWithContext(Traits::behavior_flags, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::page_load_metrics::mojom::internal::PageLoadMetadata_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::page_load_metrics::mojom::PageLoadMetadataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::page_load_metrics::mojom::PageLoadFeaturesDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::page_load_metrics::mojom::PageLoadFeaturesDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::page_load_metrics::mojom::internal::PageLoadFeatures_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::features, input, custom_context)) in_features = CallWithContext(Traits::features, input, custom_context);
    typename decltype((*output)->features)::BaseType::BufferWriter
        features_writer;
    const mojo::internal::ContainerValidateParams features_validate_params(
        0, ::blink::mojom::internal::WebFeature_Data::Validate);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::WebFeature>>(
        in_features, buffer, &features_writer, &features_validate_params,
        context);
    (*output)->features.Set(
        features_writer.is_null() ? nullptr : features_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->features.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null features in PageLoadFeatures struct");
    decltype(CallWithContext(Traits::css_properties, input, custom_context)) in_css_properties = CallWithContext(Traits::css_properties, input, custom_context);
    typename decltype((*output)->css_properties)::BaseType::BufferWriter
        css_properties_writer;
    const mojo::internal::ContainerValidateParams css_properties_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<int32_t>>(
        in_css_properties, buffer, &css_properties_writer, &css_properties_validate_params,
        context);
    (*output)->css_properties.Set(
        css_properties_writer.is_null() ? nullptr : css_properties_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->css_properties.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null css_properties in PageLoadFeatures struct");
    decltype(CallWithContext(Traits::animated_css_properties, input, custom_context)) in_animated_css_properties = CallWithContext(Traits::animated_css_properties, input, custom_context);
    typename decltype((*output)->animated_css_properties)::BaseType::BufferWriter
        animated_css_properties_writer;
    const mojo::internal::ContainerValidateParams animated_css_properties_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<int32_t>>(
        in_animated_css_properties, buffer, &animated_css_properties_writer, &animated_css_properties_validate_params,
        context);
    (*output)->animated_css_properties.Set(
        animated_css_properties_writer.is_null() ? nullptr : animated_css_properties_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->animated_css_properties.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null animated_css_properties in PageLoadFeatures struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::page_load_metrics::mojom::internal::PageLoadFeatures_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::page_load_metrics::mojom::PageLoadFeaturesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace page_load_metrics {
namespace mojom {

inline void DocumentTimingDataView::GetDomContentLoadedEventStartDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->dom_content_loaded_event_start.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void DocumentTimingDataView::GetLoadEventStartDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->load_event_start.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void DocumentTimingDataView::GetFirstLayoutDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->first_layout.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}


inline void PaintTimingDataView::GetFirstPaintDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->first_paint.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void PaintTimingDataView::GetFirstTextPaintDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->first_text_paint.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void PaintTimingDataView::GetFirstImagePaintDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->first_image_paint.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void PaintTimingDataView::GetFirstContentfulPaintDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->first_contentful_paint.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void PaintTimingDataView::GetFirstMeaningfulPaintDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->first_meaningful_paint.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}


inline void ParseTimingDataView::GetParseStartDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->parse_start.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void ParseTimingDataView::GetParseStopDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->parse_stop.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void ParseTimingDataView::GetParseBlockedOnScriptLoadDurationDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->parse_blocked_on_script_load_duration.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void ParseTimingDataView::GetParseBlockedOnScriptLoadFromDocumentWriteDurationDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->parse_blocked_on_script_load_from_document_write_duration.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void ParseTimingDataView::GetParseBlockedOnScriptExecutionDurationDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->parse_blocked_on_script_execution_duration.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void ParseTimingDataView::GetParseBlockedOnScriptExecutionFromDocumentWriteDurationDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->parse_blocked_on_script_execution_from_document_write_duration.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}


inline void StyleSheetTimingDataView::GetAuthorStyleSheetParseDurationBeforeFcpDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->author_style_sheet_parse_duration_before_fcp.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void StyleSheetTimingDataView::GetUpdateStyleDurationBeforeFcpDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->update_style_duration_before_fcp.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}


inline void InteractiveTimingDataView::GetInteractiveDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->interactive.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void InteractiveTimingDataView::GetInteractiveDetectionDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->interactive_detection.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void InteractiveTimingDataView::GetFirstInvalidatingInputDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->first_invalidating_input.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void InteractiveTimingDataView::GetFirstInputDelayDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->first_input_delay.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void InteractiveTimingDataView::GetFirstInputTimestampDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->first_input_timestamp.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}


inline void PageLoadTimingDataView::GetNavigationStartDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->navigation_start.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}
inline void PageLoadTimingDataView::GetResponseStartDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->response_start.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void PageLoadTimingDataView::GetDocumentTimingDataView(
    DocumentTimingDataView* output) {
  auto pointer = data_->document_timing.Get();
  *output = DocumentTimingDataView(pointer, context_);
}
inline void PageLoadTimingDataView::GetInteractiveTimingDataView(
    InteractiveTimingDataView* output) {
  auto pointer = data_->interactive_timing.Get();
  *output = InteractiveTimingDataView(pointer, context_);
}
inline void PageLoadTimingDataView::GetPaintTimingDataView(
    PaintTimingDataView* output) {
  auto pointer = data_->paint_timing.Get();
  *output = PaintTimingDataView(pointer, context_);
}
inline void PageLoadTimingDataView::GetParseTimingDataView(
    ParseTimingDataView* output) {
  auto pointer = data_->parse_timing.Get();
  *output = ParseTimingDataView(pointer, context_);
}
inline void PageLoadTimingDataView::GetStyleSheetTimingDataView(
    StyleSheetTimingDataView* output) {
  auto pointer = data_->style_sheet_timing.Get();
  *output = StyleSheetTimingDataView(pointer, context_);
}




inline void PageLoadFeaturesDataView::GetFeaturesDataView(
    mojo::ArrayDataView<::blink::mojom::WebFeature>* output) {
  auto pointer = data_->features.Get();
  *output = mojo::ArrayDataView<::blink::mojom::WebFeature>(pointer, context_);
}
inline void PageLoadFeaturesDataView::GetCssPropertiesDataView(
    mojo::ArrayDataView<int32_t>* output) {
  auto pointer = data_->css_properties.Get();
  *output = mojo::ArrayDataView<int32_t>(pointer, context_);
}
inline void PageLoadFeaturesDataView::GetAnimatedCssPropertiesDataView(
    mojo::ArrayDataView<int32_t>* output) {
  auto pointer = data_->animated_css_properties.Get();
  *output = mojo::ArrayDataView<int32_t>(pointer, context_);
}


inline void PageLoadMetrics_UpdateTiming_ParamsDataView::GetPageLoadTimingDataView(
    PageLoadTimingDataView* output) {
  auto pointer = data_->page_load_timing.Get();
  *output = PageLoadTimingDataView(pointer, context_);
}
inline void PageLoadMetrics_UpdateTiming_ParamsDataView::GetPageLoadMetadataDataView(
    PageLoadMetadataDataView* output) {
  auto pointer = data_->page_load_metadata.Get();
  *output = PageLoadMetadataDataView(pointer, context_);
}
inline void PageLoadMetrics_UpdateTiming_ParamsDataView::GetNewFeaturesDataView(
    PageLoadFeaturesDataView* output) {
  auto pointer = data_->new_features.Get();
  *output = PageLoadFeaturesDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace page_load_metrics

#endif  // CHROME_COMMON_PAGE_LOAD_METRICS_PAGE_LOAD_METRICS_MOJOM_SHARED_H_
