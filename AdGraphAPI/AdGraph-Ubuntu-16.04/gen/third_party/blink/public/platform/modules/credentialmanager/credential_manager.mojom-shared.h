// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_CREDENTIALMANAGER_CREDENTIAL_MANAGER_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_CREDENTIALMANAGER_CREDENTIAL_MANAGER_MOJOM_SHARED_H_

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
#include "third_party/blink/public/platform/modules/credentialmanager/credential_manager.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "url/mojom/origin.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace password_manager {
namespace mojom {
class CredentialInfoDataView;



}  // namespace mojom
}  // namespace password_manager

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::password_manager::mojom::CredentialInfoDataView> {
  using Data = ::password_manager::mojom::internal::CredentialInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace password_manager {
namespace mojom {

enum class CredentialType : int32_t {
  EMPTY,
  PASSWORD,
  FEDERATED,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, CredentialType value) {
  switch(value) {
    case CredentialType::EMPTY:
      return os << "CredentialType::EMPTY";
    case CredentialType::PASSWORD:
      return os << "CredentialType::PASSWORD";
    case CredentialType::FEDERATED:
      return os << "CredentialType::FEDERATED";
    default:
      return os << "Unknown CredentialType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(CredentialType value) {
  return internal::CredentialType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class CredentialMediationRequirement : int32_t {
  kSilent,
  kOptional,
  kRequired,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, CredentialMediationRequirement value) {
  switch(value) {
    case CredentialMediationRequirement::kSilent:
      return os << "CredentialMediationRequirement::kSilent";
    case CredentialMediationRequirement::kOptional:
      return os << "CredentialMediationRequirement::kOptional";
    case CredentialMediationRequirement::kRequired:
      return os << "CredentialMediationRequirement::kRequired";
    default:
      return os << "Unknown CredentialMediationRequirement value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(CredentialMediationRequirement value) {
  return internal::CredentialMediationRequirement_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class CredentialManagerError : int32_t {
  SUCCESS,
  PENDING_REQUEST,
  PASSWORD_STORE_UNAVAILABLE,
  NOT_ALLOWED,
  AUTHENTICATOR_CRITERIA_UNSUPPORTED,
  ALGORITHM_UNSUPPORTED,
  EMPTY_ALLOW_CREDENTIALS,
  USER_VERIFICATION_UNSUPPORTED,
  INVALID_DOMAIN,
  CREDENTIAL_EXCLUDED,
  CREDENTIAL_NOT_RECOGNIZED,
  NOT_IMPLEMENTED,
  NOT_FOCUSED,
  UNKNOWN,
  kMinValue = 0,
  kMaxValue = 13,
};

inline std::ostream& operator<<(std::ostream& os, CredentialManagerError value) {
  switch(value) {
    case CredentialManagerError::SUCCESS:
      return os << "CredentialManagerError::SUCCESS";
    case CredentialManagerError::PENDING_REQUEST:
      return os << "CredentialManagerError::PENDING_REQUEST";
    case CredentialManagerError::PASSWORD_STORE_UNAVAILABLE:
      return os << "CredentialManagerError::PASSWORD_STORE_UNAVAILABLE";
    case CredentialManagerError::NOT_ALLOWED:
      return os << "CredentialManagerError::NOT_ALLOWED";
    case CredentialManagerError::AUTHENTICATOR_CRITERIA_UNSUPPORTED:
      return os << "CredentialManagerError::AUTHENTICATOR_CRITERIA_UNSUPPORTED";
    case CredentialManagerError::ALGORITHM_UNSUPPORTED:
      return os << "CredentialManagerError::ALGORITHM_UNSUPPORTED";
    case CredentialManagerError::EMPTY_ALLOW_CREDENTIALS:
      return os << "CredentialManagerError::EMPTY_ALLOW_CREDENTIALS";
    case CredentialManagerError::USER_VERIFICATION_UNSUPPORTED:
      return os << "CredentialManagerError::USER_VERIFICATION_UNSUPPORTED";
    case CredentialManagerError::INVALID_DOMAIN:
      return os << "CredentialManagerError::INVALID_DOMAIN";
    case CredentialManagerError::CREDENTIAL_EXCLUDED:
      return os << "CredentialManagerError::CREDENTIAL_EXCLUDED";
    case CredentialManagerError::CREDENTIAL_NOT_RECOGNIZED:
      return os << "CredentialManagerError::CREDENTIAL_NOT_RECOGNIZED";
    case CredentialManagerError::NOT_IMPLEMENTED:
      return os << "CredentialManagerError::NOT_IMPLEMENTED";
    case CredentialManagerError::NOT_FOCUSED:
      return os << "CredentialManagerError::NOT_FOCUSED";
    case CredentialManagerError::UNKNOWN:
      return os << "CredentialManagerError::UNKNOWN";
    default:
      return os << "Unknown CredentialManagerError value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(CredentialManagerError value) {
  return internal::CredentialManagerError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class CredentialManagerInterfaceBase {};

using CredentialManagerPtrDataView =
    mojo::InterfacePtrDataView<CredentialManagerInterfaceBase>;
using CredentialManagerRequestDataView =
    mojo::InterfaceRequestDataView<CredentialManagerInterfaceBase>;
using CredentialManagerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CredentialManagerInterfaceBase>;
using CredentialManagerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CredentialManagerInterfaceBase>;
class CredentialInfoDataView {
 public:
  CredentialInfoDataView() {}

  CredentialInfoDataView(
      internal::CredentialInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::password_manager::mojom::CredentialType>(
        data_value, output);
  }

  CredentialType type() const {
    return static_cast<CredentialType>(data_->type);
  }
  inline void GetIdDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetIconDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIcon(UserType* output) {
    auto* pointer = data_->icon.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetPasswordDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPassword(UserType* output) {
    auto* pointer = data_->password.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetFederationDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFederation(UserType* output) {
    auto* pointer = data_->federation.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
 private:
  internal::CredentialInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CredentialManager_Store_ParamsDataView {
 public:
  CredentialManager_Store_ParamsDataView() {}

  CredentialManager_Store_ParamsDataView(
      internal::CredentialManager_Store_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCredentialDataView(
      CredentialInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCredential(UserType* output) {
    auto* pointer = data_->credential.Get();
    return mojo::internal::Deserialize<::password_manager::mojom::CredentialInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::CredentialManager_Store_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CredentialManager_Store_ResponseParamsDataView {
 public:
  CredentialManager_Store_ResponseParamsDataView() {}

  CredentialManager_Store_ResponseParamsDataView(
      internal::CredentialManager_Store_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::CredentialManager_Store_ResponseParams_Data* data_ = nullptr;
};

class CredentialManager_PreventSilentAccess_ParamsDataView {
 public:
  CredentialManager_PreventSilentAccess_ParamsDataView() {}

  CredentialManager_PreventSilentAccess_ParamsDataView(
      internal::CredentialManager_PreventSilentAccess_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::CredentialManager_PreventSilentAccess_Params_Data* data_ = nullptr;
};

class CredentialManager_PreventSilentAccess_ResponseParamsDataView {
 public:
  CredentialManager_PreventSilentAccess_ResponseParamsDataView() {}

  CredentialManager_PreventSilentAccess_ResponseParamsDataView(
      internal::CredentialManager_PreventSilentAccess_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::CredentialManager_PreventSilentAccess_ResponseParams_Data* data_ = nullptr;
};

class CredentialManager_Get_ParamsDataView {
 public:
  CredentialManager_Get_ParamsDataView() {}

  CredentialManager_Get_ParamsDataView(
      internal::CredentialManager_Get_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMediation(UserType* output) const {
    auto data_value = data_->mediation;
    return mojo::internal::Deserialize<::password_manager::mojom::CredentialMediationRequirement>(
        data_value, output);
  }

  CredentialMediationRequirement mediation() const {
    return static_cast<CredentialMediationRequirement>(data_->mediation);
  }
  bool include_passwords() const {
    return data_->include_passwords;
  }
  inline void GetFederationsDataView(
      mojo::ArrayDataView<::url::mojom::UrlDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFederations(UserType* output) {
    auto* pointer = data_->federations.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::url::mojom::UrlDataView>>(
        pointer, output, context_);
  }
 private:
  internal::CredentialManager_Get_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CredentialManager_Get_ResponseParamsDataView {
 public:
  CredentialManager_Get_ResponseParamsDataView() {}

  CredentialManager_Get_ResponseParamsDataView(
      internal::CredentialManager_Get_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::password_manager::mojom::CredentialManagerError>(
        data_value, output);
  }

  CredentialManagerError error() const {
    return static_cast<CredentialManagerError>(data_->error);
  }
  inline void GetCredentialDataView(
      CredentialInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCredential(UserType* output) {
    auto* pointer = data_->credential.Get();
    return mojo::internal::Deserialize<::password_manager::mojom::CredentialInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::CredentialManager_Get_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace password_manager

namespace std {

template <>
struct hash<::password_manager::mojom::CredentialType>
    : public mojo::internal::EnumHashImpl<::password_manager::mojom::CredentialType> {};

template <>
struct hash<::password_manager::mojom::CredentialMediationRequirement>
    : public mojo::internal::EnumHashImpl<::password_manager::mojom::CredentialMediationRequirement> {};

template <>
struct hash<::password_manager::mojom::CredentialManagerError>
    : public mojo::internal::EnumHashImpl<::password_manager::mojom::CredentialManagerError> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::password_manager::mojom::CredentialType, ::password_manager::mojom::CredentialType> {
  static ::password_manager::mojom::CredentialType ToMojom(::password_manager::mojom::CredentialType input) { return input; }
  static bool FromMojom(::password_manager::mojom::CredentialType input, ::password_manager::mojom::CredentialType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::password_manager::mojom::CredentialType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::password_manager::mojom::CredentialType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::password_manager::mojom::CredentialType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::password_manager::mojom::CredentialMediationRequirement, ::password_manager::mojom::CredentialMediationRequirement> {
  static ::password_manager::mojom::CredentialMediationRequirement ToMojom(::password_manager::mojom::CredentialMediationRequirement input) { return input; }
  static bool FromMojom(::password_manager::mojom::CredentialMediationRequirement input, ::password_manager::mojom::CredentialMediationRequirement* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::password_manager::mojom::CredentialMediationRequirement, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::password_manager::mojom::CredentialMediationRequirement, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::password_manager::mojom::CredentialMediationRequirement>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::password_manager::mojom::CredentialManagerError, ::password_manager::mojom::CredentialManagerError> {
  static ::password_manager::mojom::CredentialManagerError ToMojom(::password_manager::mojom::CredentialManagerError input) { return input; }
  static bool FromMojom(::password_manager::mojom::CredentialManagerError input, ::password_manager::mojom::CredentialManagerError* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::password_manager::mojom::CredentialManagerError, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::password_manager::mojom::CredentialManagerError, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::password_manager::mojom::CredentialManagerError>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::password_manager::mojom::CredentialInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::password_manager::mojom::CredentialInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::password_manager::mojom::internal::CredentialInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::password_manager::mojom::CredentialType>(
        CallWithContext(Traits::type, input, custom_context), &(*output)->type);
    decltype(CallWithContext(Traits::id, input, custom_context)) in_id = CallWithContext(Traits::id, input, custom_context);
    typename decltype((*output)->id)::BaseType::BufferWriter
        id_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_id, buffer, &id_writer, context);
    (*output)->id.Set(
        id_writer.is_null() ? nullptr : id_writer.data());
    decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    decltype(CallWithContext(Traits::icon, input, custom_context)) in_icon = CallWithContext(Traits::icon, input, custom_context);
    typename decltype((*output)->icon)::BaseType::BufferWriter
        icon_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_icon, buffer, &icon_writer, context);
    (*output)->icon.Set(
        icon_writer.is_null() ? nullptr : icon_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->icon.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null icon in CredentialInfo struct");
    decltype(CallWithContext(Traits::password, input, custom_context)) in_password = CallWithContext(Traits::password, input, custom_context);
    typename decltype((*output)->password)::BaseType::BufferWriter
        password_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_password, buffer, &password_writer, context);
    (*output)->password.Set(
        password_writer.is_null() ? nullptr : password_writer.data());
    decltype(CallWithContext(Traits::federation, input, custom_context)) in_federation = CallWithContext(Traits::federation, input, custom_context);
    typename decltype((*output)->federation)::BaseType::BufferWriter
        federation_writer;
    mojo::internal::Serialize<::url::mojom::OriginDataView>(
        in_federation, buffer, &federation_writer, context);
    (*output)->federation.Set(
        federation_writer.is_null() ? nullptr : federation_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->federation.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null federation in CredentialInfo struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::password_manager::mojom::internal::CredentialInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::password_manager::mojom::CredentialInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace password_manager {
namespace mojom {

inline void CredentialInfoDataView::GetIdDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->id.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void CredentialInfoDataView::GetNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void CredentialInfoDataView::GetIconDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->icon.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void CredentialInfoDataView::GetPasswordDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->password.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void CredentialInfoDataView::GetFederationDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->federation.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}


inline void CredentialManager_Store_ParamsDataView::GetCredentialDataView(
    CredentialInfoDataView* output) {
  auto pointer = data_->credential.Get();
  *output = CredentialInfoDataView(pointer, context_);
}








inline void CredentialManager_Get_ParamsDataView::GetFederationsDataView(
    mojo::ArrayDataView<::url::mojom::UrlDataView>* output) {
  auto pointer = data_->federations.Get();
  *output = mojo::ArrayDataView<::url::mojom::UrlDataView>(pointer, context_);
}


inline void CredentialManager_Get_ResponseParamsDataView::GetCredentialDataView(
    CredentialInfoDataView* output) {
  auto pointer = data_->credential.Get();
  *output = CredentialInfoDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace password_manager

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_CREDENTIALMANAGER_CREDENTIAL_MANAGER_MOJOM_SHARED_H_
