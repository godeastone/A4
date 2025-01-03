// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBSHARE_WEBSHARE_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBSHARE_WEBSHARE_MOJOM_SHARED_H_

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
#include "third_party/blink/public/platform/modules/webshare/webshare.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {

enum class ShareError : int32_t {
  OK,
  INTERNAL_ERROR,
  CANCELED,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, ShareError value) {
  switch(value) {
    case ShareError::OK:
      return os << "ShareError::OK";
    case ShareError::INTERNAL_ERROR:
      return os << "ShareError::INTERNAL_ERROR";
    case ShareError::CANCELED:
      return os << "ShareError::CANCELED";
    default:
      return os << "Unknown ShareError value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(ShareError value) {
  return internal::ShareError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class ShareServiceInterfaceBase {};

using ShareServicePtrDataView =
    mojo::InterfacePtrDataView<ShareServiceInterfaceBase>;
using ShareServiceRequestDataView =
    mojo::InterfaceRequestDataView<ShareServiceInterfaceBase>;
using ShareServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ShareServiceInterfaceBase>;
using ShareServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ShareServiceInterfaceBase>;
class ShareService_Share_ParamsDataView {
 public:
  ShareService_Share_ParamsDataView() {}

  ShareService_Share_ParamsDataView(
      internal::ShareService_Share_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTitleDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTitle(UserType* output) {
    auto* pointer = data_->title.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetTextDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadText(UserType* output) {
    auto* pointer = data_->text.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
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
 private:
  internal::ShareService_Share_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ShareService_Share_ResponseParamsDataView {
 public:
  ShareService_Share_ResponseParamsDataView() {}

  ShareService_Share_ResponseParamsDataView(
      internal::ShareService_Share_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::blink::mojom::ShareError>(
        data_value, output);
  }

  ShareError error() const {
    return static_cast<ShareError>(data_->error);
  }
 private:
  internal::ShareService_Share_ResponseParams_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::ShareError>
    : public mojo::internal::EnumHashImpl<::blink::mojom::ShareError> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::ShareError, ::blink::mojom::ShareError> {
  static ::blink::mojom::ShareError ToMojom(::blink::mojom::ShareError input) { return input; }
  static bool FromMojom(::blink::mojom::ShareError input, ::blink::mojom::ShareError* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ShareError, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::ShareError, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::ShareError>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void ShareService_Share_ParamsDataView::GetTitleDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->title.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ShareService_Share_ParamsDataView::GetTextDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->text.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ShareService_Share_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBSHARE_WEBSHARE_MOJOM_SHARED_H_
