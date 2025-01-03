// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/manifest/manifest.mojom-shared-internal.h"
#include "services/device/public/mojom/screen_orientation_lock_types.mojom-shared.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "third_party/blink/public/mojom/manifest/display_mode.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace blink {
namespace mojom {
class ManifestDataView;

class ManifestIconDataView;

class ManifestRelatedApplicationDataView;

class ManifestShareTargetDataView;

class ManifestDebugInfoDataView;

class ManifestErrorDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::ManifestDataView> {
  using Data = ::blink::mojom::internal::Manifest_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::ManifestIconDataView> {
  using Data = ::blink::mojom::internal::ManifestIcon_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::ManifestRelatedApplicationDataView> {
  using Data = ::blink::mojom::internal::ManifestRelatedApplication_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::ManifestShareTargetDataView> {
  using Data = ::blink::mojom::internal::ManifestShareTarget_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::ManifestDebugInfoDataView> {
  using Data = ::blink::mojom::internal::ManifestDebugInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::ManifestErrorDataView> {
  using Data = ::blink::mojom::internal::ManifestError_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {

enum class ManifestIcon_Purpose : int32_t {
  ANY = 0,
  BADGE,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, ManifestIcon_Purpose value) {
  switch(value) {
    case ManifestIcon_Purpose::ANY:
      return os << "ManifestIcon_Purpose::ANY";
    case ManifestIcon_Purpose::BADGE:
      return os << "ManifestIcon_Purpose::BADGE";
    default:
      return os << "Unknown ManifestIcon_Purpose value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(ManifestIcon_Purpose value) {
  return internal::ManifestIcon_Purpose_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class ManifestDataView {
 public:
  ManifestDataView() {}

  ManifestDataView(
      internal::Manifest_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetShortNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadShortName(UserType* output) {
    auto* pointer = data_->short_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetStartUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStartUrl(UserType* output) {
    auto* pointer = data_->start_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisplay(UserType* output) const {
    auto data_value = data_->display;
    return mojo::internal::Deserialize<::blink::mojom::DisplayMode>(
        data_value, output);
  }

  ::blink::mojom::DisplayMode display() const {
    return static_cast<::blink::mojom::DisplayMode>(data_->display);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrientation(UserType* output) const {
    auto data_value = data_->orientation;
    return mojo::internal::Deserialize<::device::mojom::ScreenOrientationLockType>(
        data_value, output);
  }

  ::device::mojom::ScreenOrientationLockType orientation() const {
    return static_cast<::device::mojom::ScreenOrientationLockType>(data_->orientation);
  }
  inline void GetIconsDataView(
      mojo::ArrayDataView<ManifestIconDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIcons(UserType* output) {
    auto* pointer = data_->icons.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::ManifestIconDataView>>(
        pointer, output, context_);
  }
  inline void GetShareTargetDataView(
      ManifestShareTargetDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadShareTarget(UserType* output) {
    auto* pointer = data_->share_target.Get();
    return mojo::internal::Deserialize<::blink::mojom::ManifestShareTargetDataView>(
        pointer, output, context_);
  }
  inline void GetRelatedApplicationsDataView(
      mojo::ArrayDataView<ManifestRelatedApplicationDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRelatedApplications(UserType* output) {
    auto* pointer = data_->related_applications.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::ManifestRelatedApplicationDataView>>(
        pointer, output, context_);
  }
  bool prefer_related_applications() const {
    return data_->prefer_related_applications;
  }
  bool has_theme_color() const {
    return data_->has_theme_color;
  }
  uint32_t theme_color() const {
    return data_->theme_color;
  }
  bool has_background_color() const {
    return data_->has_background_color;
  }
  uint32_t background_color() const {
    return data_->background_color;
  }
  inline void GetSplashScreenUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSplashScreenUrl(UserType* output) {
    auto* pointer = data_->splash_screen_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetGcmSenderIdDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGcmSenderId(UserType* output) {
    auto* pointer = data_->gcm_sender_id.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetScopeDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScope(UserType* output) {
    auto* pointer = data_->scope.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::Manifest_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ManifestIconDataView {
 public:
  ManifestIconDataView() {}

  ManifestIconDataView(
      internal::ManifestIcon_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSrcDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSrc(UserType* output) {
    auto* pointer = data_->src.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetTypeDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) {
    auto* pointer = data_->type.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetSizesDataView(
      mojo::ArrayDataView<::gfx::mojom::SizeDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSizes(UserType* output) {
    auto* pointer = data_->sizes.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::gfx::mojom::SizeDataView>>(
        pointer, output, context_);
  }
  inline void GetPurposeDataView(
      mojo::ArrayDataView<ManifestIcon_Purpose>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPurpose(UserType* output) {
    auto* pointer = data_->purpose.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::ManifestIcon_Purpose>>(
        pointer, output, context_);
  }
 private:
  internal::ManifestIcon_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ManifestRelatedApplicationDataView {
 public:
  ManifestRelatedApplicationDataView() {}

  ManifestRelatedApplicationDataView(
      internal::ManifestRelatedApplication_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPlatformDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPlatform(UserType* output) {
    auto* pointer = data_->platform.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetIdDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::ManifestRelatedApplication_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ManifestShareTargetDataView {
 public:
  ManifestShareTargetDataView() {}

  ManifestShareTargetDataView(
      internal::ManifestShareTarget_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlTemplateDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrlTemplate(UserType* output) {
    auto* pointer = data_->url_template.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::ManifestShareTarget_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ManifestDebugInfoDataView {
 public:
  ManifestDebugInfoDataView() {}

  ManifestDebugInfoDataView(
      internal::ManifestDebugInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetErrorsDataView(
      mojo::ArrayDataView<ManifestErrorDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrors(UserType* output) {
    auto* pointer = data_->errors.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::ManifestErrorDataView>>(
        pointer, output, context_);
  }
  inline void GetRawManifestDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRawManifest(UserType* output) {
    auto* pointer = data_->raw_manifest.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ManifestDebugInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ManifestErrorDataView {
 public:
  ManifestErrorDataView() {}

  ManifestErrorDataView(
      internal::ManifestError_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool critical() const {
    return data_->critical;
  }
  uint32_t line() const {
    return data_->line;
  }
  uint32_t column() const {
    return data_->column;
  }
 private:
  internal::ManifestError_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::ManifestIcon_Purpose>
    : public mojo::internal::EnumHashImpl<::blink::mojom::ManifestIcon_Purpose> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::ManifestIcon_Purpose, ::blink::mojom::ManifestIcon_Purpose> {
  static ::blink::mojom::ManifestIcon_Purpose ToMojom(::blink::mojom::ManifestIcon_Purpose input) { return input; }
  static bool FromMojom(::blink::mojom::ManifestIcon_Purpose input, ::blink::mojom::ManifestIcon_Purpose* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ManifestIcon_Purpose, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::ManifestIcon_Purpose, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::ManifestIcon_Purpose>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ManifestDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::ManifestDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::Manifest_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    decltype(CallWithContext(Traits::short_name, input, custom_context)) in_short_name = CallWithContext(Traits::short_name, input, custom_context);
    typename decltype((*output)->short_name)::BaseType::BufferWriter
        short_name_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_short_name, buffer, &short_name_writer, context);
    (*output)->short_name.Set(
        short_name_writer.is_null() ? nullptr : short_name_writer.data());
    decltype(CallWithContext(Traits::start_url, input, custom_context)) in_start_url = CallWithContext(Traits::start_url, input, custom_context);
    typename decltype((*output)->start_url)::BaseType::BufferWriter
        start_url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_start_url, buffer, &start_url_writer, context);
    (*output)->start_url.Set(
        start_url_writer.is_null() ? nullptr : start_url_writer.data());
    mojo::internal::Serialize<::blink::mojom::DisplayMode>(
        CallWithContext(Traits::display, input, custom_context), &(*output)->display);
    mojo::internal::Serialize<::device::mojom::ScreenOrientationLockType>(
        CallWithContext(Traits::orientation, input, custom_context), &(*output)->orientation);
    decltype(CallWithContext(Traits::icons, input, custom_context)) in_icons = CallWithContext(Traits::icons, input, custom_context);
    typename decltype((*output)->icons)::BaseType::BufferWriter
        icons_writer;
    const mojo::internal::ContainerValidateParams icons_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::ManifestIconDataView>>(
        in_icons, buffer, &icons_writer, &icons_validate_params,
        context);
    (*output)->icons.Set(
        icons_writer.is_null() ? nullptr : icons_writer.data());
    decltype(CallWithContext(Traits::share_target, input, custom_context)) in_share_target = CallWithContext(Traits::share_target, input, custom_context);
    typename decltype((*output)->share_target)::BaseType::BufferWriter
        share_target_writer;
    mojo::internal::Serialize<::blink::mojom::ManifestShareTargetDataView>(
        in_share_target, buffer, &share_target_writer, context);
    (*output)->share_target.Set(
        share_target_writer.is_null() ? nullptr : share_target_writer.data());
    decltype(CallWithContext(Traits::related_applications, input, custom_context)) in_related_applications = CallWithContext(Traits::related_applications, input, custom_context);
    typename decltype((*output)->related_applications)::BaseType::BufferWriter
        related_applications_writer;
    const mojo::internal::ContainerValidateParams related_applications_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::ManifestRelatedApplicationDataView>>(
        in_related_applications, buffer, &related_applications_writer, &related_applications_validate_params,
        context);
    (*output)->related_applications.Set(
        related_applications_writer.is_null() ? nullptr : related_applications_writer.data());
    (*output)->prefer_related_applications = CallWithContext(Traits::prefer_related_applications, input, custom_context);
    (*output)->has_theme_color = CallWithContext(Traits::has_theme_color, input, custom_context);
    (*output)->theme_color = CallWithContext(Traits::theme_color, input, custom_context);
    (*output)->has_background_color = CallWithContext(Traits::has_background_color, input, custom_context);
    (*output)->background_color = CallWithContext(Traits::background_color, input, custom_context);
    decltype(CallWithContext(Traits::splash_screen_url, input, custom_context)) in_splash_screen_url = CallWithContext(Traits::splash_screen_url, input, custom_context);
    typename decltype((*output)->splash_screen_url)::BaseType::BufferWriter
        splash_screen_url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_splash_screen_url, buffer, &splash_screen_url_writer, context);
    (*output)->splash_screen_url.Set(
        splash_screen_url_writer.is_null() ? nullptr : splash_screen_url_writer.data());
    decltype(CallWithContext(Traits::gcm_sender_id, input, custom_context)) in_gcm_sender_id = CallWithContext(Traits::gcm_sender_id, input, custom_context);
    typename decltype((*output)->gcm_sender_id)::BaseType::BufferWriter
        gcm_sender_id_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_gcm_sender_id, buffer, &gcm_sender_id_writer, context);
    (*output)->gcm_sender_id.Set(
        gcm_sender_id_writer.is_null() ? nullptr : gcm_sender_id_writer.data());
    decltype(CallWithContext(Traits::scope, input, custom_context)) in_scope = CallWithContext(Traits::scope, input, custom_context);
    typename decltype((*output)->scope)::BaseType::BufferWriter
        scope_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_scope, buffer, &scope_writer, context);
    (*output)->scope.Set(
        scope_writer.is_null() ? nullptr : scope_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::Manifest_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::ManifestDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ManifestIconDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::ManifestIconDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::ManifestIcon_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::src, input, custom_context)) in_src = CallWithContext(Traits::src, input, custom_context);
    typename decltype((*output)->src)::BaseType::BufferWriter
        src_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_src, buffer, &src_writer, context);
    (*output)->src.Set(
        src_writer.is_null() ? nullptr : src_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->src.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null src in ManifestIcon struct");
    decltype(CallWithContext(Traits::type, input, custom_context)) in_type = CallWithContext(Traits::type, input, custom_context);
    typename decltype((*output)->type)::BaseType::BufferWriter
        type_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_type, buffer, &type_writer, context);
    (*output)->type.Set(
        type_writer.is_null() ? nullptr : type_writer.data());
    decltype(CallWithContext(Traits::sizes, input, custom_context)) in_sizes = CallWithContext(Traits::sizes, input, custom_context);
    typename decltype((*output)->sizes)::BaseType::BufferWriter
        sizes_writer;
    const mojo::internal::ContainerValidateParams sizes_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::gfx::mojom::SizeDataView>>(
        in_sizes, buffer, &sizes_writer, &sizes_validate_params,
        context);
    (*output)->sizes.Set(
        sizes_writer.is_null() ? nullptr : sizes_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->sizes.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null sizes in ManifestIcon struct");
    decltype(CallWithContext(Traits::purpose, input, custom_context)) in_purpose = CallWithContext(Traits::purpose, input, custom_context);
    typename decltype((*output)->purpose)::BaseType::BufferWriter
        purpose_writer;
    const mojo::internal::ContainerValidateParams purpose_validate_params(
        0, ::blink::mojom::internal::ManifestIcon_Purpose_Data::Validate);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::ManifestIcon_Purpose>>(
        in_purpose, buffer, &purpose_writer, &purpose_validate_params,
        context);
    (*output)->purpose.Set(
        purpose_writer.is_null() ? nullptr : purpose_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->purpose.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null purpose in ManifestIcon struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::ManifestIcon_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::ManifestIconDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ManifestRelatedApplicationDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::ManifestRelatedApplicationDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::ManifestRelatedApplication_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::platform, input, custom_context)) in_platform = CallWithContext(Traits::platform, input, custom_context);
    typename decltype((*output)->platform)::BaseType::BufferWriter
        platform_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_platform, buffer, &platform_writer, context);
    (*output)->platform.Set(
        platform_writer.is_null() ? nullptr : platform_writer.data());
    decltype(CallWithContext(Traits::url, input, custom_context)) in_url = CallWithContext(Traits::url, input, custom_context);
    typename decltype((*output)->url)::BaseType::BufferWriter
        url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_url, buffer, &url_writer, context);
    (*output)->url.Set(
        url_writer.is_null() ? nullptr : url_writer.data());
    decltype(CallWithContext(Traits::id, input, custom_context)) in_id = CallWithContext(Traits::id, input, custom_context);
    typename decltype((*output)->id)::BaseType::BufferWriter
        id_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_id, buffer, &id_writer, context);
    (*output)->id.Set(
        id_writer.is_null() ? nullptr : id_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::ManifestRelatedApplication_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::ManifestRelatedApplicationDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ManifestShareTargetDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::ManifestShareTargetDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::ManifestShareTarget_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::url_template, input, custom_context)) in_url_template = CallWithContext(Traits::url_template, input, custom_context);
    typename decltype((*output)->url_template)::BaseType::BufferWriter
        url_template_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_url_template, buffer, &url_template_writer, context);
    (*output)->url_template.Set(
        url_template_writer.is_null() ? nullptr : url_template_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::ManifestShareTarget_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::ManifestShareTargetDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ManifestDebugInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::ManifestDebugInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::ManifestDebugInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::errors, input, custom_context)) in_errors = CallWithContext(Traits::errors, input, custom_context);
    typename decltype((*output)->errors)::BaseType::BufferWriter
        errors_writer;
    const mojo::internal::ContainerValidateParams errors_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::ManifestErrorDataView>>(
        in_errors, buffer, &errors_writer, &errors_validate_params,
        context);
    (*output)->errors.Set(
        errors_writer.is_null() ? nullptr : errors_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->errors.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null errors in ManifestDebugInfo struct");
    decltype(CallWithContext(Traits::raw_manifest, input, custom_context)) in_raw_manifest = CallWithContext(Traits::raw_manifest, input, custom_context);
    typename decltype((*output)->raw_manifest)::BaseType::BufferWriter
        raw_manifest_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_raw_manifest, buffer, &raw_manifest_writer, context);
    (*output)->raw_manifest.Set(
        raw_manifest_writer.is_null() ? nullptr : raw_manifest_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->raw_manifest.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null raw_manifest in ManifestDebugInfo struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::ManifestDebugInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::ManifestDebugInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ManifestErrorDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::ManifestErrorDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::ManifestError_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::message, input, custom_context)) in_message = CallWithContext(Traits::message, input, custom_context);
    typename decltype((*output)->message)::BaseType::BufferWriter
        message_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_message, buffer, &message_writer, context);
    (*output)->message.Set(
        message_writer.is_null() ? nullptr : message_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->message.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null message in ManifestError struct");
    (*output)->critical = CallWithContext(Traits::critical, input, custom_context);
    (*output)->line = CallWithContext(Traits::line, input, custom_context);
    (*output)->column = CallWithContext(Traits::column, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::ManifestError_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::ManifestErrorDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void ManifestDataView::GetNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void ManifestDataView::GetShortNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->short_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void ManifestDataView::GetStartUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->start_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void ManifestDataView::GetIconsDataView(
    mojo::ArrayDataView<ManifestIconDataView>* output) {
  auto pointer = data_->icons.Get();
  *output = mojo::ArrayDataView<ManifestIconDataView>(pointer, context_);
}
inline void ManifestDataView::GetShareTargetDataView(
    ManifestShareTargetDataView* output) {
  auto pointer = data_->share_target.Get();
  *output = ManifestShareTargetDataView(pointer, context_);
}
inline void ManifestDataView::GetRelatedApplicationsDataView(
    mojo::ArrayDataView<ManifestRelatedApplicationDataView>* output) {
  auto pointer = data_->related_applications.Get();
  *output = mojo::ArrayDataView<ManifestRelatedApplicationDataView>(pointer, context_);
}
inline void ManifestDataView::GetSplashScreenUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->splash_screen_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void ManifestDataView::GetGcmSenderIdDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->gcm_sender_id.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void ManifestDataView::GetScopeDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->scope.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void ManifestIconDataView::GetSrcDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->src.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void ManifestIconDataView::GetTypeDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->type.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void ManifestIconDataView::GetSizesDataView(
    mojo::ArrayDataView<::gfx::mojom::SizeDataView>* output) {
  auto pointer = data_->sizes.Get();
  *output = mojo::ArrayDataView<::gfx::mojom::SizeDataView>(pointer, context_);
}
inline void ManifestIconDataView::GetPurposeDataView(
    mojo::ArrayDataView<ManifestIcon_Purpose>* output) {
  auto pointer = data_->purpose.Get();
  *output = mojo::ArrayDataView<ManifestIcon_Purpose>(pointer, context_);
}


inline void ManifestRelatedApplicationDataView::GetPlatformDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->platform.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void ManifestRelatedApplicationDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void ManifestRelatedApplicationDataView::GetIdDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->id.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void ManifestShareTargetDataView::GetUrlTemplateDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url_template.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void ManifestDebugInfoDataView::GetErrorsDataView(
    mojo::ArrayDataView<ManifestErrorDataView>* output) {
  auto pointer = data_->errors.Get();
  *output = mojo::ArrayDataView<ManifestErrorDataView>(pointer, context_);
}
inline void ManifestDebugInfoDataView::GetRawManifestDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->raw_manifest.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ManifestErrorDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MOJOM_SHARED_H_
