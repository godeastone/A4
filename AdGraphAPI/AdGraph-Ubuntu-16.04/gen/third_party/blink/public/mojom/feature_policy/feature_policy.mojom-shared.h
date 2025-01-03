// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FEATURE_POLICY_FEATURE_POLICY_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FEATURE_POLICY_FEATURE_POLICY_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/feature_policy/feature_policy.mojom-shared-internal.h"
#include "url/mojom/origin.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace blink {
namespace mojom {
class ParsedFeaturePolicyDeclarationDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::ParsedFeaturePolicyDeclarationDataView> {
  using Data = ::blink::mojom::internal::ParsedFeaturePolicyDeclaration_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {

enum class WebSandboxFlags : int32_t {
  kNone = 0,
  kNavigation = 1,
  kPlugins = 2,
  kOrigin = 4,
  kForms = 8,
  kScripts = 16,
  kTopNavigation = 32,
  kPopups = 64,
  kAutomaticFeatures = 128,
  kPointerLock = 256,
  kDocumentDomain = 512,
  kOrientationLock = 1024,
  kPropagatesToAuxiliaryBrowsingContexts = 2048,
  kModals = 4096,
  kPresentationController = 8192,
  kTopNavigationByUserActivation = 16384,
  kDownloads = 32768,
  kMinValue = 0,
  kMaxValue = 32768,
};

inline std::ostream& operator<<(std::ostream& os, WebSandboxFlags value) {
  switch(value) {
    case WebSandboxFlags::kNone:
      return os << "WebSandboxFlags::kNone";
    case WebSandboxFlags::kNavigation:
      return os << "WebSandboxFlags::kNavigation";
    case WebSandboxFlags::kPlugins:
      return os << "WebSandboxFlags::kPlugins";
    case WebSandboxFlags::kOrigin:
      return os << "WebSandboxFlags::kOrigin";
    case WebSandboxFlags::kForms:
      return os << "WebSandboxFlags::kForms";
    case WebSandboxFlags::kScripts:
      return os << "WebSandboxFlags::kScripts";
    case WebSandboxFlags::kTopNavigation:
      return os << "WebSandboxFlags::kTopNavigation";
    case WebSandboxFlags::kPopups:
      return os << "WebSandboxFlags::kPopups";
    case WebSandboxFlags::kAutomaticFeatures:
      return os << "WebSandboxFlags::kAutomaticFeatures";
    case WebSandboxFlags::kPointerLock:
      return os << "WebSandboxFlags::kPointerLock";
    case WebSandboxFlags::kDocumentDomain:
      return os << "WebSandboxFlags::kDocumentDomain";
    case WebSandboxFlags::kOrientationLock:
      return os << "WebSandboxFlags::kOrientationLock";
    case WebSandboxFlags::kPropagatesToAuxiliaryBrowsingContexts:
      return os << "WebSandboxFlags::kPropagatesToAuxiliaryBrowsingContexts";
    case WebSandboxFlags::kModals:
      return os << "WebSandboxFlags::kModals";
    case WebSandboxFlags::kPresentationController:
      return os << "WebSandboxFlags::kPresentationController";
    case WebSandboxFlags::kTopNavigationByUserActivation:
      return os << "WebSandboxFlags::kTopNavigationByUserActivation";
    case WebSandboxFlags::kDownloads:
      return os << "WebSandboxFlags::kDownloads";
    default:
      return os << "Unknown WebSandboxFlags value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(WebSandboxFlags value) {
  return internal::WebSandboxFlags_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class FeaturePolicyFeature : int32_t {
  kNotFound = 0,
  kAutoplay,
  kCamera,
  kEncryptedMedia,
  kFullscreen,
  kGeolocation,
  kMicrophone,
  kMidiFeature,
  kPayment,
  kSpeaker,
  kDocumentCookie,
  kDocumentDomain,
  kSyncScript,
  kSyncXHR,
  kUsb,
  kAccessibilityEvents,
  kWebVr,
  kAccelerometer,
  kAmbientLightSensor,
  kGyroscope,
  kMagnetometer,
  kUnsizedMedia,
  kLegacyImageFormats,
  kImageCompression,
  kAnimations,
  kMaxDownscalingImage,
  kPictureInPicture,
  kVerticalScroll,
  kDocumentStreamInsertion,
  kMinValue = 0,
  kMaxValue = 28,
};

inline std::ostream& operator<<(std::ostream& os, FeaturePolicyFeature value) {
  switch(value) {
    case FeaturePolicyFeature::kNotFound:
      return os << "FeaturePolicyFeature::kNotFound";
    case FeaturePolicyFeature::kAutoplay:
      return os << "FeaturePolicyFeature::kAutoplay";
    case FeaturePolicyFeature::kCamera:
      return os << "FeaturePolicyFeature::kCamera";
    case FeaturePolicyFeature::kEncryptedMedia:
      return os << "FeaturePolicyFeature::kEncryptedMedia";
    case FeaturePolicyFeature::kFullscreen:
      return os << "FeaturePolicyFeature::kFullscreen";
    case FeaturePolicyFeature::kGeolocation:
      return os << "FeaturePolicyFeature::kGeolocation";
    case FeaturePolicyFeature::kMicrophone:
      return os << "FeaturePolicyFeature::kMicrophone";
    case FeaturePolicyFeature::kMidiFeature:
      return os << "FeaturePolicyFeature::kMidiFeature";
    case FeaturePolicyFeature::kPayment:
      return os << "FeaturePolicyFeature::kPayment";
    case FeaturePolicyFeature::kSpeaker:
      return os << "FeaturePolicyFeature::kSpeaker";
    case FeaturePolicyFeature::kDocumentCookie:
      return os << "FeaturePolicyFeature::kDocumentCookie";
    case FeaturePolicyFeature::kDocumentDomain:
      return os << "FeaturePolicyFeature::kDocumentDomain";
    case FeaturePolicyFeature::kSyncScript:
      return os << "FeaturePolicyFeature::kSyncScript";
    case FeaturePolicyFeature::kSyncXHR:
      return os << "FeaturePolicyFeature::kSyncXHR";
    case FeaturePolicyFeature::kUsb:
      return os << "FeaturePolicyFeature::kUsb";
    case FeaturePolicyFeature::kAccessibilityEvents:
      return os << "FeaturePolicyFeature::kAccessibilityEvents";
    case FeaturePolicyFeature::kWebVr:
      return os << "FeaturePolicyFeature::kWebVr";
    case FeaturePolicyFeature::kAccelerometer:
      return os << "FeaturePolicyFeature::kAccelerometer";
    case FeaturePolicyFeature::kAmbientLightSensor:
      return os << "FeaturePolicyFeature::kAmbientLightSensor";
    case FeaturePolicyFeature::kGyroscope:
      return os << "FeaturePolicyFeature::kGyroscope";
    case FeaturePolicyFeature::kMagnetometer:
      return os << "FeaturePolicyFeature::kMagnetometer";
    case FeaturePolicyFeature::kUnsizedMedia:
      return os << "FeaturePolicyFeature::kUnsizedMedia";
    case FeaturePolicyFeature::kLegacyImageFormats:
      return os << "FeaturePolicyFeature::kLegacyImageFormats";
    case FeaturePolicyFeature::kImageCompression:
      return os << "FeaturePolicyFeature::kImageCompression";
    case FeaturePolicyFeature::kAnimations:
      return os << "FeaturePolicyFeature::kAnimations";
    case FeaturePolicyFeature::kMaxDownscalingImage:
      return os << "FeaturePolicyFeature::kMaxDownscalingImage";
    case FeaturePolicyFeature::kPictureInPicture:
      return os << "FeaturePolicyFeature::kPictureInPicture";
    case FeaturePolicyFeature::kVerticalScroll:
      return os << "FeaturePolicyFeature::kVerticalScroll";
    case FeaturePolicyFeature::kDocumentStreamInsertion:
      return os << "FeaturePolicyFeature::kDocumentStreamInsertion";
    default:
      return os << "Unknown FeaturePolicyFeature value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(FeaturePolicyFeature value) {
  return internal::FeaturePolicyFeature_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class ParsedFeaturePolicyDeclarationDataView {
 public:
  ParsedFeaturePolicyDeclarationDataView() {}

  ParsedFeaturePolicyDeclarationDataView(
      internal::ParsedFeaturePolicyDeclaration_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFeature(UserType* output) const {
    auto data_value = data_->feature;
    return mojo::internal::Deserialize<::blink::mojom::FeaturePolicyFeature>(
        data_value, output);
  }

  FeaturePolicyFeature feature() const {
    return static_cast<FeaturePolicyFeature>(data_->feature);
  }
  bool matches_all_origins() const {
    return data_->matches_all_origins;
  }
  inline void GetOriginsDataView(
      mojo::ArrayDataView<::url::mojom::OriginDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigins(UserType* output) {
    auto* pointer = data_->origins.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::url::mojom::OriginDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ParsedFeaturePolicyDeclaration_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::WebSandboxFlags>
    : public mojo::internal::EnumHashImpl<::blink::mojom::WebSandboxFlags> {};

template <>
struct hash<::blink::mojom::FeaturePolicyFeature>
    : public mojo::internal::EnumHashImpl<::blink::mojom::FeaturePolicyFeature> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::WebSandboxFlags, ::blink::mojom::WebSandboxFlags> {
  static ::blink::mojom::WebSandboxFlags ToMojom(::blink::mojom::WebSandboxFlags input) { return input; }
  static bool FromMojom(::blink::mojom::WebSandboxFlags input, ::blink::mojom::WebSandboxFlags* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::WebSandboxFlags, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::WebSandboxFlags, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::WebSandboxFlags>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::FeaturePolicyFeature, ::blink::mojom::FeaturePolicyFeature> {
  static ::blink::mojom::FeaturePolicyFeature ToMojom(::blink::mojom::FeaturePolicyFeature input) { return input; }
  static bool FromMojom(::blink::mojom::FeaturePolicyFeature input, ::blink::mojom::FeaturePolicyFeature* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::FeaturePolicyFeature, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::FeaturePolicyFeature, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::FeaturePolicyFeature>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ParsedFeaturePolicyDeclarationDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::ParsedFeaturePolicyDeclarationDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::ParsedFeaturePolicyDeclaration_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::blink::mojom::FeaturePolicyFeature>(
        CallWithContext(Traits::feature, input, custom_context), &(*output)->feature);
    (*output)->matches_all_origins = CallWithContext(Traits::matches_all_origins, input, custom_context);
    decltype(CallWithContext(Traits::origins, input, custom_context)) in_origins = CallWithContext(Traits::origins, input, custom_context);
    typename decltype((*output)->origins)::BaseType::BufferWriter
        origins_writer;
    const mojo::internal::ContainerValidateParams origins_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::url::mojom::OriginDataView>>(
        in_origins, buffer, &origins_writer, &origins_validate_params,
        context);
    (*output)->origins.Set(
        origins_writer.is_null() ? nullptr : origins_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->origins.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null origins in ParsedFeaturePolicyDeclaration struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::ParsedFeaturePolicyDeclaration_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::ParsedFeaturePolicyDeclarationDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void ParsedFeaturePolicyDeclarationDataView::GetOriginsDataView(
    mojo::ArrayDataView<::url::mojom::OriginDataView>* output) {
  auto pointer = data_->origins.Get();
  *output = mojo::ArrayDataView<::url::mojom::OriginDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FEATURE_POLICY_FEATURE_POLICY_MOJOM_SHARED_H_
