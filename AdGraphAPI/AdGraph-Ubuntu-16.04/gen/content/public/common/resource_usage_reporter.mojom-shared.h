// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_PUBLIC_COMMON_RESOURCE_USAGE_REPORTER_MOJOM_SHARED_H_
#define CONTENT_PUBLIC_COMMON_RESOURCE_USAGE_REPORTER_MOJOM_SHARED_H_

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
#include "content/public/common/resource_usage_reporter.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace content {
namespace mojom {
class ResourceTypeStatDataView;

class ResourceTypeStatsDataView;

class ResourceUsageDataDataView;



}  // namespace mojom
}  // namespace content

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::content::mojom::ResourceTypeStatDataView> {
  using Data = ::content::mojom::internal::ResourceTypeStat_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::content::mojom::ResourceTypeStatsDataView> {
  using Data = ::content::mojom::internal::ResourceTypeStats_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::content::mojom::ResourceUsageDataDataView> {
  using Data = ::content::mojom::internal::ResourceUsageData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace content {
namespace mojom {
// Interface base classes. They are used for type safety check.
class ResourceUsageReporterInterfaceBase {};

using ResourceUsageReporterPtrDataView =
    mojo::InterfacePtrDataView<ResourceUsageReporterInterfaceBase>;
using ResourceUsageReporterRequestDataView =
    mojo::InterfaceRequestDataView<ResourceUsageReporterInterfaceBase>;
using ResourceUsageReporterAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ResourceUsageReporterInterfaceBase>;
using ResourceUsageReporterAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ResourceUsageReporterInterfaceBase>;
class ResourceTypeStatDataView {
 public:
  ResourceTypeStatDataView() {}

  ResourceTypeStatDataView(
      internal::ResourceTypeStat_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t count() const {
    return data_->count;
  }
  uint64_t size() const {
    return data_->size;
  }
  uint64_t live_size() const {
    return data_->live_size;
  }
  uint64_t decoded_size() const {
    return data_->decoded_size;
  }
 private:
  internal::ResourceTypeStat_Data* data_ = nullptr;
};

class ResourceTypeStatsDataView {
 public:
  ResourceTypeStatsDataView() {}

  ResourceTypeStatsDataView(
      internal::ResourceTypeStats_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetImagesDataView(
      ResourceTypeStatDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadImages(UserType* output) {
    auto* pointer = data_->images.Get();
    return mojo::internal::Deserialize<::content::mojom::ResourceTypeStatDataView>(
        pointer, output, context_);
  }
  inline void GetCssStyleSheetsDataView(
      ResourceTypeStatDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCssStyleSheets(UserType* output) {
    auto* pointer = data_->css_style_sheets.Get();
    return mojo::internal::Deserialize<::content::mojom::ResourceTypeStatDataView>(
        pointer, output, context_);
  }
  inline void GetScriptsDataView(
      ResourceTypeStatDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScripts(UserType* output) {
    auto* pointer = data_->scripts.Get();
    return mojo::internal::Deserialize<::content::mojom::ResourceTypeStatDataView>(
        pointer, output, context_);
  }
  inline void GetXslStyleSheetsDataView(
      ResourceTypeStatDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadXslStyleSheets(UserType* output) {
    auto* pointer = data_->xsl_style_sheets.Get();
    return mojo::internal::Deserialize<::content::mojom::ResourceTypeStatDataView>(
        pointer, output, context_);
  }
  inline void GetFontsDataView(
      ResourceTypeStatDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFonts(UserType* output) {
    auto* pointer = data_->fonts.Get();
    return mojo::internal::Deserialize<::content::mojom::ResourceTypeStatDataView>(
        pointer, output, context_);
  }
  inline void GetOtherDataView(
      ResourceTypeStatDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOther(UserType* output) {
    auto* pointer = data_->other.Get();
    return mojo::internal::Deserialize<::content::mojom::ResourceTypeStatDataView>(
        pointer, output, context_);
  }
 private:
  internal::ResourceTypeStats_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ResourceUsageDataDataView {
 public:
  ResourceUsageDataDataView() {}

  ResourceUsageDataDataView(
      internal::ResourceUsageData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool reports_v8_stats() const {
    return data_->reports_v8_stats;
  }
  uint64_t v8_bytes_allocated() const {
    return data_->v8_bytes_allocated;
  }
  uint64_t v8_bytes_used() const {
    return data_->v8_bytes_used;
  }
  inline void GetWebCacheStatsDataView(
      ResourceTypeStatsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWebCacheStats(UserType* output) {
    auto* pointer = data_->web_cache_stats.Get();
    return mojo::internal::Deserialize<::content::mojom::ResourceTypeStatsDataView>(
        pointer, output, context_);
  }
 private:
  internal::ResourceUsageData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ResourceUsageReporter_GetUsageData_ParamsDataView {
 public:
  ResourceUsageReporter_GetUsageData_ParamsDataView() {}

  ResourceUsageReporter_GetUsageData_ParamsDataView(
      internal::ResourceUsageReporter_GetUsageData_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ResourceUsageReporter_GetUsageData_Params_Data* data_ = nullptr;
};

class ResourceUsageReporter_GetUsageData_ResponseParamsDataView {
 public:
  ResourceUsageReporter_GetUsageData_ResponseParamsDataView() {}

  ResourceUsageReporter_GetUsageData_ResponseParamsDataView(
      internal::ResourceUsageReporter_GetUsageData_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataDataView(
      ResourceUsageDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<::content::mojom::ResourceUsageDataDataView>(
        pointer, output, context_);
  }
 private:
  internal::ResourceUsageReporter_GetUsageData_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace content

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::ResourceTypeStatDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::ResourceTypeStatDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::ResourceTypeStat_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->count = CallWithContext(Traits::count, input, custom_context);
    (*output)->size = CallWithContext(Traits::size, input, custom_context);
    (*output)->live_size = CallWithContext(Traits::live_size, input, custom_context);
    (*output)->decoded_size = CallWithContext(Traits::decoded_size, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::ResourceTypeStat_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::ResourceTypeStatDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::ResourceTypeStatsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::ResourceTypeStatsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::ResourceTypeStats_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::images, input, custom_context)) in_images = CallWithContext(Traits::images, input, custom_context);
    typename decltype((*output)->images)::BaseType::BufferWriter
        images_writer;
    mojo::internal::Serialize<::content::mojom::ResourceTypeStatDataView>(
        in_images, buffer, &images_writer, context);
    (*output)->images.Set(
        images_writer.is_null() ? nullptr : images_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->images.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null images in ResourceTypeStats struct");
    decltype(CallWithContext(Traits::css_style_sheets, input, custom_context)) in_css_style_sheets = CallWithContext(Traits::css_style_sheets, input, custom_context);
    typename decltype((*output)->css_style_sheets)::BaseType::BufferWriter
        css_style_sheets_writer;
    mojo::internal::Serialize<::content::mojom::ResourceTypeStatDataView>(
        in_css_style_sheets, buffer, &css_style_sheets_writer, context);
    (*output)->css_style_sheets.Set(
        css_style_sheets_writer.is_null() ? nullptr : css_style_sheets_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->css_style_sheets.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null css_style_sheets in ResourceTypeStats struct");
    decltype(CallWithContext(Traits::scripts, input, custom_context)) in_scripts = CallWithContext(Traits::scripts, input, custom_context);
    typename decltype((*output)->scripts)::BaseType::BufferWriter
        scripts_writer;
    mojo::internal::Serialize<::content::mojom::ResourceTypeStatDataView>(
        in_scripts, buffer, &scripts_writer, context);
    (*output)->scripts.Set(
        scripts_writer.is_null() ? nullptr : scripts_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->scripts.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null scripts in ResourceTypeStats struct");
    decltype(CallWithContext(Traits::xsl_style_sheets, input, custom_context)) in_xsl_style_sheets = CallWithContext(Traits::xsl_style_sheets, input, custom_context);
    typename decltype((*output)->xsl_style_sheets)::BaseType::BufferWriter
        xsl_style_sheets_writer;
    mojo::internal::Serialize<::content::mojom::ResourceTypeStatDataView>(
        in_xsl_style_sheets, buffer, &xsl_style_sheets_writer, context);
    (*output)->xsl_style_sheets.Set(
        xsl_style_sheets_writer.is_null() ? nullptr : xsl_style_sheets_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->xsl_style_sheets.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null xsl_style_sheets in ResourceTypeStats struct");
    decltype(CallWithContext(Traits::fonts, input, custom_context)) in_fonts = CallWithContext(Traits::fonts, input, custom_context);
    typename decltype((*output)->fonts)::BaseType::BufferWriter
        fonts_writer;
    mojo::internal::Serialize<::content::mojom::ResourceTypeStatDataView>(
        in_fonts, buffer, &fonts_writer, context);
    (*output)->fonts.Set(
        fonts_writer.is_null() ? nullptr : fonts_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->fonts.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null fonts in ResourceTypeStats struct");
    decltype(CallWithContext(Traits::other, input, custom_context)) in_other = CallWithContext(Traits::other, input, custom_context);
    typename decltype((*output)->other)::BaseType::BufferWriter
        other_writer;
    mojo::internal::Serialize<::content::mojom::ResourceTypeStatDataView>(
        in_other, buffer, &other_writer, context);
    (*output)->other.Set(
        other_writer.is_null() ? nullptr : other_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->other.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null other in ResourceTypeStats struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::ResourceTypeStats_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::ResourceTypeStatsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::ResourceUsageDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::ResourceUsageDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::ResourceUsageData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->reports_v8_stats = CallWithContext(Traits::reports_v8_stats, input, custom_context);
    (*output)->v8_bytes_allocated = CallWithContext(Traits::v8_bytes_allocated, input, custom_context);
    (*output)->v8_bytes_used = CallWithContext(Traits::v8_bytes_used, input, custom_context);
    decltype(CallWithContext(Traits::web_cache_stats, input, custom_context)) in_web_cache_stats = CallWithContext(Traits::web_cache_stats, input, custom_context);
    typename decltype((*output)->web_cache_stats)::BaseType::BufferWriter
        web_cache_stats_writer;
    mojo::internal::Serialize<::content::mojom::ResourceTypeStatsDataView>(
        in_web_cache_stats, buffer, &web_cache_stats_writer, context);
    (*output)->web_cache_stats.Set(
        web_cache_stats_writer.is_null() ? nullptr : web_cache_stats_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::ResourceUsageData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::ResourceUsageDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace content {
namespace mojom {



inline void ResourceTypeStatsDataView::GetImagesDataView(
    ResourceTypeStatDataView* output) {
  auto pointer = data_->images.Get();
  *output = ResourceTypeStatDataView(pointer, context_);
}
inline void ResourceTypeStatsDataView::GetCssStyleSheetsDataView(
    ResourceTypeStatDataView* output) {
  auto pointer = data_->css_style_sheets.Get();
  *output = ResourceTypeStatDataView(pointer, context_);
}
inline void ResourceTypeStatsDataView::GetScriptsDataView(
    ResourceTypeStatDataView* output) {
  auto pointer = data_->scripts.Get();
  *output = ResourceTypeStatDataView(pointer, context_);
}
inline void ResourceTypeStatsDataView::GetXslStyleSheetsDataView(
    ResourceTypeStatDataView* output) {
  auto pointer = data_->xsl_style_sheets.Get();
  *output = ResourceTypeStatDataView(pointer, context_);
}
inline void ResourceTypeStatsDataView::GetFontsDataView(
    ResourceTypeStatDataView* output) {
  auto pointer = data_->fonts.Get();
  *output = ResourceTypeStatDataView(pointer, context_);
}
inline void ResourceTypeStatsDataView::GetOtherDataView(
    ResourceTypeStatDataView* output) {
  auto pointer = data_->other.Get();
  *output = ResourceTypeStatDataView(pointer, context_);
}


inline void ResourceUsageDataDataView::GetWebCacheStatsDataView(
    ResourceTypeStatsDataView* output) {
  auto pointer = data_->web_cache_stats.Get();
  *output = ResourceTypeStatsDataView(pointer, context_);
}




inline void ResourceUsageReporter_GetUsageData_ResponseParamsDataView::GetDataDataView(
    ResourceUsageDataDataView* output) {
  auto pointer = data_->data.Get();
  *output = ResourceUsageDataDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace content

#endif  // CONTENT_PUBLIC_COMMON_RESOURCE_USAGE_REPORTER_MOJOM_SHARED_H_
