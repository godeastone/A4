// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/cookie_manager.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace network {
namespace mojom {
class CookieOptionsDataView;

class CanonicalCookieDataView;

class CookieDeletionFilterDataView;



}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::network::mojom::CookieOptionsDataView> {
  using Data = ::network::mojom::internal::CookieOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::network::mojom::CanonicalCookieDataView> {
  using Data = ::network::mojom::internal::CanonicalCookie_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::network::mojom::CookieDeletionFilterDataView> {
  using Data = ::network::mojom::internal::CookieDeletionFilter_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {

enum class CookiePriority : int32_t {
  LOW,
  MEDIUM,
  HIGH,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, CookiePriority value) {
  switch(value) {
    case CookiePriority::LOW:
      return os << "CookiePriority::LOW";
    case CookiePriority::MEDIUM:
      return os << "CookiePriority::MEDIUM";
    case CookiePriority::HIGH:
      return os << "CookiePriority::HIGH";
    default:
      return os << "Unknown CookiePriority value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(CookiePriority value) {
  return internal::CookiePriority_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class CookieSameSite : int32_t {
  NO_RESTRICTION,
  LAX_MODE,
  STRICT_MODE,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, CookieSameSite value) {
  switch(value) {
    case CookieSameSite::NO_RESTRICTION:
      return os << "CookieSameSite::NO_RESTRICTION";
    case CookieSameSite::LAX_MODE:
      return os << "CookieSameSite::LAX_MODE";
    case CookieSameSite::STRICT_MODE:
      return os << "CookieSameSite::STRICT_MODE";
    default:
      return os << "Unknown CookieSameSite value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(CookieSameSite value) {
  return internal::CookieSameSite_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class CookieSameSiteFilter : int32_t {
  INCLUDE_STRICT_AND_LAX,
  INCLUDE_LAX,
  DO_NOT_INCLUDE,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, CookieSameSiteFilter value) {
  switch(value) {
    case CookieSameSiteFilter::INCLUDE_STRICT_AND_LAX:
      return os << "CookieSameSiteFilter::INCLUDE_STRICT_AND_LAX";
    case CookieSameSiteFilter::INCLUDE_LAX:
      return os << "CookieSameSiteFilter::INCLUDE_LAX";
    case CookieSameSiteFilter::DO_NOT_INCLUDE:
      return os << "CookieSameSiteFilter::DO_NOT_INCLUDE";
    default:
      return os << "Unknown CookieSameSiteFilter value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(CookieSameSiteFilter value) {
  return internal::CookieSameSiteFilter_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class CookieChangeCause : int32_t {
  INSERTED,
  EXPLICIT,
  UNKNOWN_DELETION,
  OVERWRITE,
  EXPIRED,
  EVICTED,
  EXPIRED_OVERWRITE,
  kMinValue = 0,
  kMaxValue = 6,
};

inline std::ostream& operator<<(std::ostream& os, CookieChangeCause value) {
  switch(value) {
    case CookieChangeCause::INSERTED:
      return os << "CookieChangeCause::INSERTED";
    case CookieChangeCause::EXPLICIT:
      return os << "CookieChangeCause::EXPLICIT";
    case CookieChangeCause::UNKNOWN_DELETION:
      return os << "CookieChangeCause::UNKNOWN_DELETION";
    case CookieChangeCause::OVERWRITE:
      return os << "CookieChangeCause::OVERWRITE";
    case CookieChangeCause::EXPIRED:
      return os << "CookieChangeCause::EXPIRED";
    case CookieChangeCause::EVICTED:
      return os << "CookieChangeCause::EVICTED";
    case CookieChangeCause::EXPIRED_OVERWRITE:
      return os << "CookieChangeCause::EXPIRED_OVERWRITE";
    default:
      return os << "Unknown CookieChangeCause value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(CookieChangeCause value) {
  return internal::CookieChangeCause_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class CookieDeletionSessionControl : int32_t {
  IGNORE_CONTROL,
  SESSION_COOKIES,
  PERSISTENT_COOKIES,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, CookieDeletionSessionControl value) {
  switch(value) {
    case CookieDeletionSessionControl::IGNORE_CONTROL:
      return os << "CookieDeletionSessionControl::IGNORE_CONTROL";
    case CookieDeletionSessionControl::SESSION_COOKIES:
      return os << "CookieDeletionSessionControl::SESSION_COOKIES";
    case CookieDeletionSessionControl::PERSISTENT_COOKIES:
      return os << "CookieDeletionSessionControl::PERSISTENT_COOKIES";
    default:
      return os << "Unknown CookieDeletionSessionControl value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(CookieDeletionSessionControl value) {
  return internal::CookieDeletionSessionControl_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class CookieChangeListenerInterfaceBase {};

using CookieChangeListenerPtrDataView =
    mojo::InterfacePtrDataView<CookieChangeListenerInterfaceBase>;
using CookieChangeListenerRequestDataView =
    mojo::InterfaceRequestDataView<CookieChangeListenerInterfaceBase>;
using CookieChangeListenerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CookieChangeListenerInterfaceBase>;
using CookieChangeListenerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CookieChangeListenerInterfaceBase>;
class CookieManagerInterfaceBase {};

using CookieManagerPtrDataView =
    mojo::InterfacePtrDataView<CookieManagerInterfaceBase>;
using CookieManagerRequestDataView =
    mojo::InterfaceRequestDataView<CookieManagerInterfaceBase>;
using CookieManagerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CookieManagerInterfaceBase>;
using CookieManagerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CookieManagerInterfaceBase>;
class CookieOptionsDataView {
 public:
  CookieOptionsDataView() {}

  CookieOptionsDataView(
      internal::CookieOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool exclude_httponly() const {
    return data_->exclude_httponly;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCookieSameSiteFilter(UserType* output) const {
    auto data_value = data_->cookie_same_site_filter;
    return mojo::internal::Deserialize<::network::mojom::CookieSameSiteFilter>(
        data_value, output);
  }

  CookieSameSiteFilter cookie_same_site_filter() const {
    return static_cast<CookieSameSiteFilter>(data_->cookie_same_site_filter);
  }
  bool update_access_time() const {
    return data_->update_access_time;
  }
  inline void GetServerTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadServerTime(UserType* output) {
    auto* pointer = data_->server_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
 private:
  internal::CookieOptions_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CanonicalCookieDataView {
 public:
  CanonicalCookieDataView() {}

  CanonicalCookieDataView(
      internal::CanonicalCookie_Data* data,
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
  inline void GetValueDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDomainDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDomain(UserType* output) {
    auto* pointer = data_->domain.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetPathDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPath(UserType* output) {
    auto* pointer = data_->path.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetCreationDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCreation(UserType* output) {
    auto* pointer = data_->creation.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  inline void GetExpiryDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExpiry(UserType* output) {
    auto* pointer = data_->expiry.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  inline void GetLastAccessDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLastAccess(UserType* output) {
    auto* pointer = data_->last_access.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  bool secure() const {
    return data_->secure;
  }
  bool httponly() const {
    return data_->httponly;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSiteRestrictions(UserType* output) const {
    auto data_value = data_->site_restrictions;
    return mojo::internal::Deserialize<::network::mojom::CookieSameSite>(
        data_value, output);
  }

  CookieSameSite site_restrictions() const {
    return static_cast<CookieSameSite>(data_->site_restrictions);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPriority(UserType* output) const {
    auto data_value = data_->priority;
    return mojo::internal::Deserialize<::network::mojom::CookiePriority>(
        data_value, output);
  }

  CookiePriority priority() const {
    return static_cast<CookiePriority>(data_->priority);
  }
 private:
  internal::CanonicalCookie_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CookieDeletionFilterDataView {
 public:
  CookieDeletionFilterDataView() {}

  CookieDeletionFilterDataView(
      internal::CookieDeletionFilter_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCreatedAfterTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCreatedAfterTime(UserType* output) {
    auto* pointer = data_->created_after_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  inline void GetCreatedBeforeTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCreatedBeforeTime(UserType* output) {
    auto* pointer = data_->created_before_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  inline void GetExcludingDomainsDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExcludingDomains(UserType* output) {
    auto* pointer = data_->excluding_domains.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetIncludingDomainsDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIncludingDomains(UserType* output) {
    auto* pointer = data_->including_domains.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetCookieNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCookieName(UserType* output) {
    auto* pointer = data_->cookie_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetHostNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHostName(UserType* output) {
    auto* pointer = data_->host_name.Get();
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
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionControl(UserType* output) const {
    auto data_value = data_->session_control;
    return mojo::internal::Deserialize<::network::mojom::CookieDeletionSessionControl>(
        data_value, output);
  }

  CookieDeletionSessionControl session_control() const {
    return static_cast<CookieDeletionSessionControl>(data_->session_control);
  }
 private:
  internal::CookieDeletionFilter_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CookieChangeListener_OnCookieChange_ParamsDataView {
 public:
  CookieChangeListener_OnCookieChange_ParamsDataView() {}

  CookieChangeListener_OnCookieChange_ParamsDataView(
      internal::CookieChangeListener_OnCookieChange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCookieDataView(
      CanonicalCookieDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCookie(UserType* output) {
    auto* pointer = data_->cookie.Get();
    return mojo::internal::Deserialize<::network::mojom::CanonicalCookieDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCause(UserType* output) const {
    auto data_value = data_->cause;
    return mojo::internal::Deserialize<::network::mojom::CookieChangeCause>(
        data_value, output);
  }

  CookieChangeCause cause() const {
    return static_cast<CookieChangeCause>(data_->cause);
  }
 private:
  internal::CookieChangeListener_OnCookieChange_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CookieManager_GetAllCookies_ParamsDataView {
 public:
  CookieManager_GetAllCookies_ParamsDataView() {}

  CookieManager_GetAllCookies_ParamsDataView(
      internal::CookieManager_GetAllCookies_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::CookieManager_GetAllCookies_Params_Data* data_ = nullptr;
};

class CookieManager_GetAllCookies_ResponseParamsDataView {
 public:
  CookieManager_GetAllCookies_ResponseParamsDataView() {}

  CookieManager_GetAllCookies_ResponseParamsDataView(
      internal::CookieManager_GetAllCookies_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCookiesDataView(
      mojo::ArrayDataView<CanonicalCookieDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCookies(UserType* output) {
    auto* pointer = data_->cookies.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::CanonicalCookieDataView>>(
        pointer, output, context_);
  }
 private:
  internal::CookieManager_GetAllCookies_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CookieManager_GetCookieList_ParamsDataView {
 public:
  CookieManager_GetCookieList_ParamsDataView() {}

  CookieManager_GetCookieList_ParamsDataView(
      internal::CookieManager_GetCookieList_Params_Data* data,
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
  inline void GetCookieOptionsDataView(
      CookieOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCookieOptions(UserType* output) {
    auto* pointer = data_->cookie_options.Get();
    return mojo::internal::Deserialize<::network::mojom::CookieOptionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::CookieManager_GetCookieList_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CookieManager_GetCookieList_ResponseParamsDataView {
 public:
  CookieManager_GetCookieList_ResponseParamsDataView() {}

  CookieManager_GetCookieList_ResponseParamsDataView(
      internal::CookieManager_GetCookieList_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCookiesDataView(
      mojo::ArrayDataView<CanonicalCookieDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCookies(UserType* output) {
    auto* pointer = data_->cookies.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::CanonicalCookieDataView>>(
        pointer, output, context_);
  }
 private:
  internal::CookieManager_GetCookieList_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CookieManager_SetCanonicalCookie_ParamsDataView {
 public:
  CookieManager_SetCanonicalCookie_ParamsDataView() {}

  CookieManager_SetCanonicalCookie_ParamsDataView(
      internal::CookieManager_SetCanonicalCookie_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCookieDataView(
      CanonicalCookieDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCookie(UserType* output) {
    auto* pointer = data_->cookie.Get();
    return mojo::internal::Deserialize<::network::mojom::CanonicalCookieDataView>(
        pointer, output, context_);
  }
  bool secure_source() const {
    return data_->secure_source;
  }
  bool modify_http_only() const {
    return data_->modify_http_only;
  }
 private:
  internal::CookieManager_SetCanonicalCookie_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CookieManager_SetCanonicalCookie_ResponseParamsDataView {
 public:
  CookieManager_SetCanonicalCookie_ResponseParamsDataView() {}

  CookieManager_SetCanonicalCookie_ResponseParamsDataView(
      internal::CookieManager_SetCanonicalCookie_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::CookieManager_SetCanonicalCookie_ResponseParams_Data* data_ = nullptr;
};

class CookieManager_DeleteCookies_ParamsDataView {
 public:
  CookieManager_DeleteCookies_ParamsDataView() {}

  CookieManager_DeleteCookies_ParamsDataView(
      internal::CookieManager_DeleteCookies_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFilterDataView(
      CookieDeletionFilterDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFilter(UserType* output) {
    auto* pointer = data_->filter.Get();
    return mojo::internal::Deserialize<::network::mojom::CookieDeletionFilterDataView>(
        pointer, output, context_);
  }
 private:
  internal::CookieManager_DeleteCookies_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CookieManager_DeleteCookies_ResponseParamsDataView {
 public:
  CookieManager_DeleteCookies_ResponseParamsDataView() {}

  CookieManager_DeleteCookies_ResponseParamsDataView(
      internal::CookieManager_DeleteCookies_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t num_deleted() const {
    return data_->num_deleted;
  }
 private:
  internal::CookieManager_DeleteCookies_ResponseParams_Data* data_ = nullptr;
};

class CookieManager_AddCookieChangeListener_ParamsDataView {
 public:
  CookieManager_AddCookieChangeListener_ParamsDataView() {}

  CookieManager_AddCookieChangeListener_ParamsDataView(
      internal::CookieManager_AddCookieChangeListener_Params_Data* data,
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
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
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
  internal::CookieManager_AddCookieChangeListener_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CookieManager_AddGlobalChangeListener_ParamsDataView {
 public:
  CookieManager_AddGlobalChangeListener_ParamsDataView() {}

  CookieManager_AddGlobalChangeListener_ParamsDataView(
      internal::CookieManager_AddGlobalChangeListener_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeNotificationPointer() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::CookieChangeListenerPtrDataView>(
            &data_->notification_pointer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::CookieManager_AddGlobalChangeListener_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CookieManager_CloneInterface_ParamsDataView {
 public:
  CookieManager_CloneInterface_ParamsDataView() {}

  CookieManager_CloneInterface_ParamsDataView(
      internal::CookieManager_CloneInterface_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeNewInterface() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::CookieManagerRequestDataView>(
            &data_->new_interface, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::CookieManager_CloneInterface_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CookieManager_FlushCookieStore_ParamsDataView {
 public:
  CookieManager_FlushCookieStore_ParamsDataView() {}

  CookieManager_FlushCookieStore_ParamsDataView(
      internal::CookieManager_FlushCookieStore_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::CookieManager_FlushCookieStore_Params_Data* data_ = nullptr;
};

class CookieManager_FlushCookieStore_ResponseParamsDataView {
 public:
  CookieManager_FlushCookieStore_ResponseParamsDataView() {}

  CookieManager_FlushCookieStore_ResponseParamsDataView(
      internal::CookieManager_FlushCookieStore_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::CookieManager_FlushCookieStore_ResponseParams_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

template <>
struct hash<::network::mojom::CookiePriority>
    : public mojo::internal::EnumHashImpl<::network::mojom::CookiePriority> {};

template <>
struct hash<::network::mojom::CookieSameSite>
    : public mojo::internal::EnumHashImpl<::network::mojom::CookieSameSite> {};

template <>
struct hash<::network::mojom::CookieSameSiteFilter>
    : public mojo::internal::EnumHashImpl<::network::mojom::CookieSameSiteFilter> {};

template <>
struct hash<::network::mojom::CookieChangeCause>
    : public mojo::internal::EnumHashImpl<::network::mojom::CookieChangeCause> {};

template <>
struct hash<::network::mojom::CookieDeletionSessionControl>
    : public mojo::internal::EnumHashImpl<::network::mojom::CookieDeletionSessionControl> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::network::mojom::CookiePriority, ::network::mojom::CookiePriority> {
  static ::network::mojom::CookiePriority ToMojom(::network::mojom::CookiePriority input) { return input; }
  static bool FromMojom(::network::mojom::CookiePriority input, ::network::mojom::CookiePriority* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::CookiePriority, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::CookiePriority, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::CookiePriority>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::network::mojom::CookieSameSite, ::network::mojom::CookieSameSite> {
  static ::network::mojom::CookieSameSite ToMojom(::network::mojom::CookieSameSite input) { return input; }
  static bool FromMojom(::network::mojom::CookieSameSite input, ::network::mojom::CookieSameSite* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::CookieSameSite, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::CookieSameSite, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::CookieSameSite>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::network::mojom::CookieSameSiteFilter, ::network::mojom::CookieSameSiteFilter> {
  static ::network::mojom::CookieSameSiteFilter ToMojom(::network::mojom::CookieSameSiteFilter input) { return input; }
  static bool FromMojom(::network::mojom::CookieSameSiteFilter input, ::network::mojom::CookieSameSiteFilter* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::CookieSameSiteFilter, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::CookieSameSiteFilter, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::CookieSameSiteFilter>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::network::mojom::CookieChangeCause, ::network::mojom::CookieChangeCause> {
  static ::network::mojom::CookieChangeCause ToMojom(::network::mojom::CookieChangeCause input) { return input; }
  static bool FromMojom(::network::mojom::CookieChangeCause input, ::network::mojom::CookieChangeCause* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::CookieChangeCause, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::CookieChangeCause, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::CookieChangeCause>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::network::mojom::CookieDeletionSessionControl, ::network::mojom::CookieDeletionSessionControl> {
  static ::network::mojom::CookieDeletionSessionControl ToMojom(::network::mojom::CookieDeletionSessionControl input) { return input; }
  static bool FromMojom(::network::mojom::CookieDeletionSessionControl input, ::network::mojom::CookieDeletionSessionControl* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::CookieDeletionSessionControl, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::CookieDeletionSessionControl, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::CookieDeletionSessionControl>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::CookieOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::CookieOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::CookieOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->exclude_httponly = CallWithContext(Traits::exclude_httponly, input, custom_context);
    mojo::internal::Serialize<::network::mojom::CookieSameSiteFilter>(
        CallWithContext(Traits::cookie_same_site_filter, input, custom_context), &(*output)->cookie_same_site_filter);
    (*output)->update_access_time = CallWithContext(Traits::update_access_time, input, custom_context);
    decltype(CallWithContext(Traits::server_time, input, custom_context)) in_server_time = CallWithContext(Traits::server_time, input, custom_context);
    typename decltype((*output)->server_time)::BaseType::BufferWriter
        server_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
        in_server_time, buffer, &server_time_writer, context);
    (*output)->server_time.Set(
        server_time_writer.is_null() ? nullptr : server_time_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::network::mojom::internal::CookieOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::CookieOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::CanonicalCookieDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::CanonicalCookieDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::CanonicalCookie_Data::BufferWriter* output,
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
        "null name in CanonicalCookie struct");
    decltype(CallWithContext(Traits::value, input, custom_context)) in_value = CallWithContext(Traits::value, input, custom_context);
    typename decltype((*output)->value)::BaseType::BufferWriter
        value_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_value, buffer, &value_writer, context);
    (*output)->value.Set(
        value_writer.is_null() ? nullptr : value_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->value.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null value in CanonicalCookie struct");
    decltype(CallWithContext(Traits::domain, input, custom_context)) in_domain = CallWithContext(Traits::domain, input, custom_context);
    typename decltype((*output)->domain)::BaseType::BufferWriter
        domain_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_domain, buffer, &domain_writer, context);
    (*output)->domain.Set(
        domain_writer.is_null() ? nullptr : domain_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->domain.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null domain in CanonicalCookie struct");
    decltype(CallWithContext(Traits::path, input, custom_context)) in_path = CallWithContext(Traits::path, input, custom_context);
    typename decltype((*output)->path)::BaseType::BufferWriter
        path_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_path, buffer, &path_writer, context);
    (*output)->path.Set(
        path_writer.is_null() ? nullptr : path_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->path.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null path in CanonicalCookie struct");
    decltype(CallWithContext(Traits::creation, input, custom_context)) in_creation = CallWithContext(Traits::creation, input, custom_context);
    typename decltype((*output)->creation)::BaseType::BufferWriter
        creation_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
        in_creation, buffer, &creation_writer, context);
    (*output)->creation.Set(
        creation_writer.is_null() ? nullptr : creation_writer.data());
    decltype(CallWithContext(Traits::expiry, input, custom_context)) in_expiry = CallWithContext(Traits::expiry, input, custom_context);
    typename decltype((*output)->expiry)::BaseType::BufferWriter
        expiry_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
        in_expiry, buffer, &expiry_writer, context);
    (*output)->expiry.Set(
        expiry_writer.is_null() ? nullptr : expiry_writer.data());
    decltype(CallWithContext(Traits::last_access, input, custom_context)) in_last_access = CallWithContext(Traits::last_access, input, custom_context);
    typename decltype((*output)->last_access)::BaseType::BufferWriter
        last_access_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
        in_last_access, buffer, &last_access_writer, context);
    (*output)->last_access.Set(
        last_access_writer.is_null() ? nullptr : last_access_writer.data());
    (*output)->secure = CallWithContext(Traits::secure, input, custom_context);
    (*output)->httponly = CallWithContext(Traits::httponly, input, custom_context);
    mojo::internal::Serialize<::network::mojom::CookieSameSite>(
        CallWithContext(Traits::site_restrictions, input, custom_context), &(*output)->site_restrictions);
    mojo::internal::Serialize<::network::mojom::CookiePriority>(
        CallWithContext(Traits::priority, input, custom_context), &(*output)->priority);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::network::mojom::internal::CanonicalCookie_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::CanonicalCookieDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::CookieDeletionFilterDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::CookieDeletionFilterDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::CookieDeletionFilter_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::created_after_time, input, custom_context)) in_created_after_time = CallWithContext(Traits::created_after_time, input, custom_context);
    typename decltype((*output)->created_after_time)::BaseType::BufferWriter
        created_after_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
        in_created_after_time, buffer, &created_after_time_writer, context);
    (*output)->created_after_time.Set(
        created_after_time_writer.is_null() ? nullptr : created_after_time_writer.data());
    decltype(CallWithContext(Traits::created_before_time, input, custom_context)) in_created_before_time = CallWithContext(Traits::created_before_time, input, custom_context);
    typename decltype((*output)->created_before_time)::BaseType::BufferWriter
        created_before_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
        in_created_before_time, buffer, &created_before_time_writer, context);
    (*output)->created_before_time.Set(
        created_before_time_writer.is_null() ? nullptr : created_before_time_writer.data());
    decltype(CallWithContext(Traits::excluding_domains, input, custom_context)) in_excluding_domains = CallWithContext(Traits::excluding_domains, input, custom_context);
    typename decltype((*output)->excluding_domains)::BaseType::BufferWriter
        excluding_domains_writer;
    const mojo::internal::ContainerValidateParams excluding_domains_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_excluding_domains, buffer, &excluding_domains_writer, &excluding_domains_validate_params,
        context);
    (*output)->excluding_domains.Set(
        excluding_domains_writer.is_null() ? nullptr : excluding_domains_writer.data());
    decltype(CallWithContext(Traits::including_domains, input, custom_context)) in_including_domains = CallWithContext(Traits::including_domains, input, custom_context);
    typename decltype((*output)->including_domains)::BaseType::BufferWriter
        including_domains_writer;
    const mojo::internal::ContainerValidateParams including_domains_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_including_domains, buffer, &including_domains_writer, &including_domains_validate_params,
        context);
    (*output)->including_domains.Set(
        including_domains_writer.is_null() ? nullptr : including_domains_writer.data());
    decltype(CallWithContext(Traits::cookie_name, input, custom_context)) in_cookie_name = CallWithContext(Traits::cookie_name, input, custom_context);
    typename decltype((*output)->cookie_name)::BaseType::BufferWriter
        cookie_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_cookie_name, buffer, &cookie_name_writer, context);
    (*output)->cookie_name.Set(
        cookie_name_writer.is_null() ? nullptr : cookie_name_writer.data());
    decltype(CallWithContext(Traits::host_name, input, custom_context)) in_host_name = CallWithContext(Traits::host_name, input, custom_context);
    typename decltype((*output)->host_name)::BaseType::BufferWriter
        host_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_host_name, buffer, &host_name_writer, context);
    (*output)->host_name.Set(
        host_name_writer.is_null() ? nullptr : host_name_writer.data());
    decltype(CallWithContext(Traits::url, input, custom_context)) in_url = CallWithContext(Traits::url, input, custom_context);
    typename decltype((*output)->url)::BaseType::BufferWriter
        url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_url, buffer, &url_writer, context);
    (*output)->url.Set(
        url_writer.is_null() ? nullptr : url_writer.data());
    mojo::internal::Serialize<::network::mojom::CookieDeletionSessionControl>(
        CallWithContext(Traits::session_control, input, custom_context), &(*output)->session_control);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::network::mojom::internal::CookieDeletionFilter_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::CookieDeletionFilterDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {

inline void CookieOptionsDataView::GetServerTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->server_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}


inline void CanonicalCookieDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void CanonicalCookieDataView::GetValueDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->value.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void CanonicalCookieDataView::GetDomainDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->domain.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void CanonicalCookieDataView::GetPathDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->path.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void CanonicalCookieDataView::GetCreationDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->creation.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}
inline void CanonicalCookieDataView::GetExpiryDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->expiry.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}
inline void CanonicalCookieDataView::GetLastAccessDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->last_access.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}


inline void CookieDeletionFilterDataView::GetCreatedAfterTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->created_after_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}
inline void CookieDeletionFilterDataView::GetCreatedBeforeTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->created_before_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}
inline void CookieDeletionFilterDataView::GetExcludingDomainsDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->excluding_domains.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void CookieDeletionFilterDataView::GetIncludingDomainsDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->including_domains.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void CookieDeletionFilterDataView::GetCookieNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->cookie_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void CookieDeletionFilterDataView::GetHostNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->host_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void CookieDeletionFilterDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void CookieChangeListener_OnCookieChange_ParamsDataView::GetCookieDataView(
    CanonicalCookieDataView* output) {
  auto pointer = data_->cookie.Get();
  *output = CanonicalCookieDataView(pointer, context_);
}




inline void CookieManager_GetAllCookies_ResponseParamsDataView::GetCookiesDataView(
    mojo::ArrayDataView<CanonicalCookieDataView>* output) {
  auto pointer = data_->cookies.Get();
  *output = mojo::ArrayDataView<CanonicalCookieDataView>(pointer, context_);
}


inline void CookieManager_GetCookieList_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void CookieManager_GetCookieList_ParamsDataView::GetCookieOptionsDataView(
    CookieOptionsDataView* output) {
  auto pointer = data_->cookie_options.Get();
  *output = CookieOptionsDataView(pointer, context_);
}


inline void CookieManager_GetCookieList_ResponseParamsDataView::GetCookiesDataView(
    mojo::ArrayDataView<CanonicalCookieDataView>* output) {
  auto pointer = data_->cookies.Get();
  *output = mojo::ArrayDataView<CanonicalCookieDataView>(pointer, context_);
}


inline void CookieManager_SetCanonicalCookie_ParamsDataView::GetCookieDataView(
    CanonicalCookieDataView* output) {
  auto pointer = data_->cookie.Get();
  *output = CanonicalCookieDataView(pointer, context_);
}




inline void CookieManager_DeleteCookies_ParamsDataView::GetFilterDataView(
    CookieDeletionFilterDataView* output) {
  auto pointer = data_->filter.Get();
  *output = CookieDeletionFilterDataView(pointer, context_);
}




inline void CookieManager_AddCookieChangeListener_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void CookieManager_AddCookieChangeListener_ParamsDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}











}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_SHARED_H_
