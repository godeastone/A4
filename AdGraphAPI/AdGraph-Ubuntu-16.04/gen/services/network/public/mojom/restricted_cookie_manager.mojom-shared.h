// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_RESTRICTED_COOKIE_MANAGER_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_RESTRICTED_COOKIE_MANAGER_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/restricted_cookie_manager.mojom-shared-internal.h"
#include "services/network/public/mojom/cookie_manager.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace network {
namespace mojom {
class CookieManagerGetOptionsDataView;



}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::network::mojom::CookieManagerGetOptionsDataView> {
  using Data = ::network::mojom::internal::CookieManagerGetOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {

enum class CookieMatchType : int32_t {
  EQUALS,
  STARTS_WITH,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, CookieMatchType value) {
  switch(value) {
    case CookieMatchType::EQUALS:
      return os << "CookieMatchType::EQUALS";
    case CookieMatchType::STARTS_WITH:
      return os << "CookieMatchType::STARTS_WITH";
    default:
      return os << "Unknown CookieMatchType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(CookieMatchType value) {
  return internal::CookieMatchType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class RestrictedCookieManagerInterfaceBase {};

using RestrictedCookieManagerPtrDataView =
    mojo::InterfacePtrDataView<RestrictedCookieManagerInterfaceBase>;
using RestrictedCookieManagerRequestDataView =
    mojo::InterfaceRequestDataView<RestrictedCookieManagerInterfaceBase>;
using RestrictedCookieManagerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<RestrictedCookieManagerInterfaceBase>;
using RestrictedCookieManagerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<RestrictedCookieManagerInterfaceBase>;
class CookieManagerGetOptionsDataView {
 public:
  CookieManagerGetOptionsDataView() {}

  CookieManagerGetOptionsDataView(
      internal::CookieManagerGetOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMatchType(UserType* output) const {
    auto data_value = data_->match_type;
    return mojo::internal::Deserialize<::network::mojom::CookieMatchType>(
        data_value, output);
  }

  CookieMatchType match_type() const {
    return static_cast<CookieMatchType>(data_->match_type);
  }
 private:
  internal::CookieManagerGetOptions_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RestrictedCookieManager_GetAllForUrl_ParamsDataView {
 public:
  RestrictedCookieManager_GetAllForUrl_ParamsDataView() {}

  RestrictedCookieManager_GetAllForUrl_ParamsDataView(
      internal::RestrictedCookieManager_GetAllForUrl_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetSiteForCookiesDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSiteForCookies(UserType* output) {
    auto* pointer = data_->site_for_cookies.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetOptionsDataView(
      CookieManagerGetOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::network::mojom::CookieManagerGetOptionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::RestrictedCookieManager_GetAllForUrl_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RestrictedCookieManager_GetAllForUrl_ResponseParamsDataView {
 public:
  RestrictedCookieManager_GetAllForUrl_ResponseParamsDataView() {}

  RestrictedCookieManager_GetAllForUrl_ResponseParamsDataView(
      internal::RestrictedCookieManager_GetAllForUrl_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCookiesDataView(
      mojo::ArrayDataView<::network::mojom::CanonicalCookieDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCookies(UserType* output) {
    auto* pointer = data_->cookies.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::CanonicalCookieDataView>>(
        pointer, output, context_);
  }
 private:
  internal::RestrictedCookieManager_GetAllForUrl_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RestrictedCookieManager_SetCanonicalCookie_ParamsDataView {
 public:
  RestrictedCookieManager_SetCanonicalCookie_ParamsDataView() {}

  RestrictedCookieManager_SetCanonicalCookie_ParamsDataView(
      internal::RestrictedCookieManager_SetCanonicalCookie_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCookieDataView(
      ::network::mojom::CanonicalCookieDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCookie(UserType* output) {
    auto* pointer = data_->cookie.Get();
    return mojo::internal::Deserialize<::network::mojom::CanonicalCookieDataView>(
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
  inline void GetSiteForCookiesDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSiteForCookies(UserType* output) {
    auto* pointer = data_->site_for_cookies.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::RestrictedCookieManager_SetCanonicalCookie_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RestrictedCookieManager_SetCanonicalCookie_ResponseParamsDataView {
 public:
  RestrictedCookieManager_SetCanonicalCookie_ResponseParamsDataView() {}

  RestrictedCookieManager_SetCanonicalCookie_ResponseParamsDataView(
      internal::RestrictedCookieManager_SetCanonicalCookie_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::RestrictedCookieManager_SetCanonicalCookie_ResponseParams_Data* data_ = nullptr;
};

class RestrictedCookieManager_AddChangeListener_ParamsDataView {
 public:
  RestrictedCookieManager_AddChangeListener_ParamsDataView() {}

  RestrictedCookieManager_AddChangeListener_ParamsDataView(
      internal::RestrictedCookieManager_AddChangeListener_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetSiteForCookiesDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSiteForCookies(UserType* output) {
    auto* pointer = data_->site_for_cookies.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeListener() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::CookieChangeListenerPtrDataView>(
            &data_->listener, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::RestrictedCookieManager_AddChangeListener_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

template <>
struct hash<::network::mojom::CookieMatchType>
    : public mojo::internal::EnumHashImpl<::network::mojom::CookieMatchType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::network::mojom::CookieMatchType, ::network::mojom::CookieMatchType> {
  static ::network::mojom::CookieMatchType ToMojom(::network::mojom::CookieMatchType input) { return input; }
  static bool FromMojom(::network::mojom::CookieMatchType input, ::network::mojom::CookieMatchType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::CookieMatchType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::CookieMatchType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::CookieMatchType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::CookieManagerGetOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::CookieManagerGetOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::CookieManagerGetOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in CookieManagerGetOptions struct");
    mojo::internal::Serialize<::network::mojom::CookieMatchType>(
        CallWithContext(Traits::match_type, input, custom_context), &(*output)->match_type);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::network::mojom::internal::CookieManagerGetOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::CookieManagerGetOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {

inline void CookieManagerGetOptionsDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void RestrictedCookieManager_GetAllForUrl_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void RestrictedCookieManager_GetAllForUrl_ParamsDataView::GetSiteForCookiesDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->site_for_cookies.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void RestrictedCookieManager_GetAllForUrl_ParamsDataView::GetOptionsDataView(
    CookieManagerGetOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = CookieManagerGetOptionsDataView(pointer, context_);
}


inline void RestrictedCookieManager_GetAllForUrl_ResponseParamsDataView::GetCookiesDataView(
    mojo::ArrayDataView<::network::mojom::CanonicalCookieDataView>* output) {
  auto pointer = data_->cookies.Get();
  *output = mojo::ArrayDataView<::network::mojom::CanonicalCookieDataView>(pointer, context_);
}


inline void RestrictedCookieManager_SetCanonicalCookie_ParamsDataView::GetCookieDataView(
    ::network::mojom::CanonicalCookieDataView* output) {
  auto pointer = data_->cookie.Get();
  *output = ::network::mojom::CanonicalCookieDataView(pointer, context_);
}
inline void RestrictedCookieManager_SetCanonicalCookie_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void RestrictedCookieManager_SetCanonicalCookie_ParamsDataView::GetSiteForCookiesDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->site_for_cookies.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}




inline void RestrictedCookieManager_AddChangeListener_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void RestrictedCookieManager_AddChangeListener_ParamsDataView::GetSiteForCookiesDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->site_for_cookies.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_RESTRICTED_COOKIE_MANAGER_MOJOM_SHARED_H_
