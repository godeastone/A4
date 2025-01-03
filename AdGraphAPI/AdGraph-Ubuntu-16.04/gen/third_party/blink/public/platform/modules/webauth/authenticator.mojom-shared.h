// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBAUTH_AUTHENTICATOR_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBAUTH_AUTHENTICATOR_MOJOM_SHARED_H_

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
#include "third_party/blink/public/platform/modules/webauth/authenticator.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace webauth {
namespace mojom {
class CommonCredentialInfoDataView;

class MakeCredentialAuthenticatorResponseDataView;

class GetAssertionAuthenticatorResponseDataView;

class PublicKeyCredentialRpEntityDataView;

class PublicKeyCredentialUserEntityDataView;

class PublicKeyCredentialParametersDataView;

class CableAuthenticationDataView;

class CableRegistrationDataView;

class PublicKeyCredentialRequestOptionsDataView;

class AuthenticatorSelectionCriteriaDataView;

class PublicKeyCredentialCreationOptionsDataView;

class PublicKeyCredentialDescriptorDataView;



}  // namespace mojom
}  // namespace webauth

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::webauth::mojom::CommonCredentialInfoDataView> {
  using Data = ::webauth::mojom::internal::CommonCredentialInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::webauth::mojom::MakeCredentialAuthenticatorResponseDataView> {
  using Data = ::webauth::mojom::internal::MakeCredentialAuthenticatorResponse_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::webauth::mojom::GetAssertionAuthenticatorResponseDataView> {
  using Data = ::webauth::mojom::internal::GetAssertionAuthenticatorResponse_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::webauth::mojom::PublicKeyCredentialRpEntityDataView> {
  using Data = ::webauth::mojom::internal::PublicKeyCredentialRpEntity_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::webauth::mojom::PublicKeyCredentialUserEntityDataView> {
  using Data = ::webauth::mojom::internal::PublicKeyCredentialUserEntity_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::webauth::mojom::PublicKeyCredentialParametersDataView> {
  using Data = ::webauth::mojom::internal::PublicKeyCredentialParameters_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::webauth::mojom::CableAuthenticationDataView> {
  using Data = ::webauth::mojom::internal::CableAuthentication_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::webauth::mojom::CableRegistrationDataView> {
  using Data = ::webauth::mojom::internal::CableRegistration_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::webauth::mojom::PublicKeyCredentialRequestOptionsDataView> {
  using Data = ::webauth::mojom::internal::PublicKeyCredentialRequestOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::webauth::mojom::AuthenticatorSelectionCriteriaDataView> {
  using Data = ::webauth::mojom::internal::AuthenticatorSelectionCriteria_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::webauth::mojom::PublicKeyCredentialCreationOptionsDataView> {
  using Data = ::webauth::mojom::internal::PublicKeyCredentialCreationOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::webauth::mojom::PublicKeyCredentialDescriptorDataView> {
  using Data = ::webauth::mojom::internal::PublicKeyCredentialDescriptor_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace webauth {
namespace mojom {

enum class AuthenticatorStatus : int32_t {
  SUCCESS,
  PENDING_REQUEST,
  NOT_ALLOWED_ERROR,
  AUTHENTICATOR_CRITERIA_UNSUPPORTED,
  ALGORITHM_UNSUPPORTED,
  EMPTY_ALLOW_CREDENTIALS,
  USER_VERIFICATION_UNSUPPORTED,
  INVALID_DOMAIN,
  CREDENTIAL_EXCLUDED,
  CREDENTIAL_NOT_RECOGNIZED,
  NOT_IMPLEMENTED,
  NOT_FOCUSED,
  UNKNOWN_ERROR,
  kMinValue = 0,
  kMaxValue = 12,
};

inline std::ostream& operator<<(std::ostream& os, AuthenticatorStatus value) {
  switch(value) {
    case AuthenticatorStatus::SUCCESS:
      return os << "AuthenticatorStatus::SUCCESS";
    case AuthenticatorStatus::PENDING_REQUEST:
      return os << "AuthenticatorStatus::PENDING_REQUEST";
    case AuthenticatorStatus::NOT_ALLOWED_ERROR:
      return os << "AuthenticatorStatus::NOT_ALLOWED_ERROR";
    case AuthenticatorStatus::AUTHENTICATOR_CRITERIA_UNSUPPORTED:
      return os << "AuthenticatorStatus::AUTHENTICATOR_CRITERIA_UNSUPPORTED";
    case AuthenticatorStatus::ALGORITHM_UNSUPPORTED:
      return os << "AuthenticatorStatus::ALGORITHM_UNSUPPORTED";
    case AuthenticatorStatus::EMPTY_ALLOW_CREDENTIALS:
      return os << "AuthenticatorStatus::EMPTY_ALLOW_CREDENTIALS";
    case AuthenticatorStatus::USER_VERIFICATION_UNSUPPORTED:
      return os << "AuthenticatorStatus::USER_VERIFICATION_UNSUPPORTED";
    case AuthenticatorStatus::INVALID_DOMAIN:
      return os << "AuthenticatorStatus::INVALID_DOMAIN";
    case AuthenticatorStatus::CREDENTIAL_EXCLUDED:
      return os << "AuthenticatorStatus::CREDENTIAL_EXCLUDED";
    case AuthenticatorStatus::CREDENTIAL_NOT_RECOGNIZED:
      return os << "AuthenticatorStatus::CREDENTIAL_NOT_RECOGNIZED";
    case AuthenticatorStatus::NOT_IMPLEMENTED:
      return os << "AuthenticatorStatus::NOT_IMPLEMENTED";
    case AuthenticatorStatus::NOT_FOCUSED:
      return os << "AuthenticatorStatus::NOT_FOCUSED";
    case AuthenticatorStatus::UNKNOWN_ERROR:
      return os << "AuthenticatorStatus::UNKNOWN_ERROR";
    default:
      return os << "Unknown AuthenticatorStatus value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(AuthenticatorStatus value) {
  return internal::AuthenticatorStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class UserVerificationRequirement : int32_t {
  PREFERRED,
  REQUIRED,
  DISCOURAGED,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, UserVerificationRequirement value) {
  switch(value) {
    case UserVerificationRequirement::PREFERRED:
      return os << "UserVerificationRequirement::PREFERRED";
    case UserVerificationRequirement::REQUIRED:
      return os << "UserVerificationRequirement::REQUIRED";
    case UserVerificationRequirement::DISCOURAGED:
      return os << "UserVerificationRequirement::DISCOURAGED";
    default:
      return os << "Unknown UserVerificationRequirement value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(UserVerificationRequirement value) {
  return internal::UserVerificationRequirement_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class AttestationConveyancePreference : int32_t {
  NONE,
  INDIRECT,
  DIRECT,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, AttestationConveyancePreference value) {
  switch(value) {
    case AttestationConveyancePreference::NONE:
      return os << "AttestationConveyancePreference::NONE";
    case AttestationConveyancePreference::INDIRECT:
      return os << "AttestationConveyancePreference::INDIRECT";
    case AttestationConveyancePreference::DIRECT:
      return os << "AttestationConveyancePreference::DIRECT";
    default:
      return os << "Unknown AttestationConveyancePreference value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(AttestationConveyancePreference value) {
  return internal::AttestationConveyancePreference_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class AuthenticatorAttachment : int32_t {
  NO_PREFERENCE,
  PLATFORM,
  CROSS_PLATFORM,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, AuthenticatorAttachment value) {
  switch(value) {
    case AuthenticatorAttachment::NO_PREFERENCE:
      return os << "AuthenticatorAttachment::NO_PREFERENCE";
    case AuthenticatorAttachment::PLATFORM:
      return os << "AuthenticatorAttachment::PLATFORM";
    case AuthenticatorAttachment::CROSS_PLATFORM:
      return os << "AuthenticatorAttachment::CROSS_PLATFORM";
    default:
      return os << "Unknown AuthenticatorAttachment value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(AuthenticatorAttachment value) {
  return internal::AuthenticatorAttachment_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class PublicKeyCredentialType : int32_t {
  PUBLIC_KEY,
  kMinValue = 0,
  kMaxValue = 0,
};

inline std::ostream& operator<<(std::ostream& os, PublicKeyCredentialType value) {
  switch(value) {
    case PublicKeyCredentialType::PUBLIC_KEY:
      return os << "PublicKeyCredentialType::PUBLIC_KEY";
    default:
      return os << "Unknown PublicKeyCredentialType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PublicKeyCredentialType value) {
  return internal::PublicKeyCredentialType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class AuthenticatorTransport : int32_t {
  USB,
  NFC,
  BLE,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, AuthenticatorTransport value) {
  switch(value) {
    case AuthenticatorTransport::USB:
      return os << "AuthenticatorTransport::USB";
    case AuthenticatorTransport::NFC:
      return os << "AuthenticatorTransport::NFC";
    case AuthenticatorTransport::BLE:
      return os << "AuthenticatorTransport::BLE";
    default:
      return os << "Unknown AuthenticatorTransport value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(AuthenticatorTransport value) {
  return internal::AuthenticatorTransport_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class AuthenticatorInterfaceBase {};

using AuthenticatorPtrDataView =
    mojo::InterfacePtrDataView<AuthenticatorInterfaceBase>;
using AuthenticatorRequestDataView =
    mojo::InterfaceRequestDataView<AuthenticatorInterfaceBase>;
using AuthenticatorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AuthenticatorInterfaceBase>;
using AuthenticatorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AuthenticatorInterfaceBase>;
class CommonCredentialInfoDataView {
 public:
  CommonCredentialInfoDataView() {}

  CommonCredentialInfoDataView(
      internal::CommonCredentialInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetRawIdDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRawId(UserType* output) {
    auto* pointer = data_->raw_id.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetClientDataJsonDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClientDataJson(UserType* output) {
    auto* pointer = data_->client_data_json.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::CommonCredentialInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MakeCredentialAuthenticatorResponseDataView {
 public:
  MakeCredentialAuthenticatorResponseDataView() {}

  MakeCredentialAuthenticatorResponseDataView(
      internal::MakeCredentialAuthenticatorResponse_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInfoDataView(
      CommonCredentialInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInfo(UserType* output) {
    auto* pointer = data_->info.Get();
    return mojo::internal::Deserialize<::webauth::mojom::CommonCredentialInfoDataView>(
        pointer, output, context_);
  }
  inline void GetAttestationObjectDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAttestationObject(UserType* output) {
    auto* pointer = data_->attestation_object.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::MakeCredentialAuthenticatorResponse_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GetAssertionAuthenticatorResponseDataView {
 public:
  GetAssertionAuthenticatorResponseDataView() {}

  GetAssertionAuthenticatorResponseDataView(
      internal::GetAssertionAuthenticatorResponse_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInfoDataView(
      CommonCredentialInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInfo(UserType* output) {
    auto* pointer = data_->info.Get();
    return mojo::internal::Deserialize<::webauth::mojom::CommonCredentialInfoDataView>(
        pointer, output, context_);
  }
  inline void GetAuthenticatorDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAuthenticatorData(UserType* output) {
    auto* pointer = data_->authenticator_data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetSignatureDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSignature(UserType* output) {
    auto* pointer = data_->signature.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetUserHandleDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUserHandle(UserType* output) {
    auto* pointer = data_->user_handle.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  bool echo_appid_extension() const {
    return data_->echo_appid_extension;
  }
 private:
  internal::GetAssertionAuthenticatorResponse_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PublicKeyCredentialRpEntityDataView {
 public:
  PublicKeyCredentialRpEntityDataView() {}

  PublicKeyCredentialRpEntityDataView(
      internal::PublicKeyCredentialRpEntity_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
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
  inline void GetIconDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIcon(UserType* output) {
    auto* pointer = data_->icon.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::PublicKeyCredentialRpEntity_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PublicKeyCredentialUserEntityDataView {
 public:
  PublicKeyCredentialUserEntityDataView() {}

  PublicKeyCredentialUserEntityDataView(
      internal::PublicKeyCredentialUserEntity_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
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
  inline void GetIconDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIcon(UserType* output) {
    auto* pointer = data_->icon.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetDisplayNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisplayName(UserType* output) {
    auto* pointer = data_->display_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PublicKeyCredentialUserEntity_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PublicKeyCredentialParametersDataView {
 public:
  PublicKeyCredentialParametersDataView() {}

  PublicKeyCredentialParametersDataView(
      internal::PublicKeyCredentialParameters_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::webauth::mojom::PublicKeyCredentialType>(
        data_value, output);
  }

  PublicKeyCredentialType type() const {
    return static_cast<PublicKeyCredentialType>(data_->type);
  }
  int32_t algorithm_identifier() const {
    return data_->algorithm_identifier;
  }
 private:
  internal::PublicKeyCredentialParameters_Data* data_ = nullptr;
};

class CableAuthenticationDataView {
 public:
  CableAuthenticationDataView() {}

  CableAuthenticationDataView(
      internal::CableAuthentication_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t version() const {
    return data_->version;
  }
  inline void GetClientEidDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClientEid(UserType* output) {
    auto* pointer = data_->client_eid.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetAuthenticatorEidDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAuthenticatorEid(UserType* output) {
    auto* pointer = data_->authenticator_eid.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetSessionPreKeyDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionPreKey(UserType* output) {
    auto* pointer = data_->session_pre_key.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::CableAuthentication_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CableRegistrationDataView {
 public:
  CableRegistrationDataView() {}

  CableRegistrationDataView(
      internal::CableRegistration_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t version() const {
    return data_->version;
  }
  inline void GetRelyingPartyPublicKeyDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRelyingPartyPublicKey(UserType* output) {
    auto* pointer = data_->relying_party_public_key.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::CableRegistration_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PublicKeyCredentialRequestOptionsDataView {
 public:
  PublicKeyCredentialRequestOptionsDataView() {}

  PublicKeyCredentialRequestOptionsDataView(
      internal::PublicKeyCredentialRequestOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetChallengeDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadChallenge(UserType* output) {
    auto* pointer = data_->challenge.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetAdjustedTimeoutDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAdjustedTimeout(UserType* output) {
    auto* pointer = data_->adjusted_timeout.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetRelyingPartyIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRelyingPartyId(UserType* output) {
    auto* pointer = data_->relying_party_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetAllowCredentialsDataView(
      mojo::ArrayDataView<PublicKeyCredentialDescriptorDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAllowCredentials(UserType* output) {
    auto* pointer = data_->allow_credentials.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::webauth::mojom::PublicKeyCredentialDescriptorDataView>>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUserVerification(UserType* output) const {
    auto data_value = data_->user_verification;
    return mojo::internal::Deserialize<::webauth::mojom::UserVerificationRequirement>(
        data_value, output);
  }

  UserVerificationRequirement user_verification() const {
    return static_cast<UserVerificationRequirement>(data_->user_verification);
  }
  inline void GetAppidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAppid(UserType* output) {
    auto* pointer = data_->appid.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetCableAuthenticationDataDataView(
      mojo::ArrayDataView<CableAuthenticationDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCableAuthenticationData(UserType* output) {
    auto* pointer = data_->cable_authentication_data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::webauth::mojom::CableAuthenticationDataView>>(
        pointer, output, context_);
  }
 private:
  internal::PublicKeyCredentialRequestOptions_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AuthenticatorSelectionCriteriaDataView {
 public:
  AuthenticatorSelectionCriteriaDataView() {}

  AuthenticatorSelectionCriteriaDataView(
      internal::AuthenticatorSelectionCriteria_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAuthenticatorAttachment(UserType* output) const {
    auto data_value = data_->authenticator_attachment;
    return mojo::internal::Deserialize<::webauth::mojom::AuthenticatorAttachment>(
        data_value, output);
  }

  AuthenticatorAttachment authenticator_attachment() const {
    return static_cast<AuthenticatorAttachment>(data_->authenticator_attachment);
  }
  bool require_resident_key() const {
    return data_->require_resident_key;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUserVerification(UserType* output) const {
    auto data_value = data_->user_verification;
    return mojo::internal::Deserialize<::webauth::mojom::UserVerificationRequirement>(
        data_value, output);
  }

  UserVerificationRequirement user_verification() const {
    return static_cast<UserVerificationRequirement>(data_->user_verification);
  }
 private:
  internal::AuthenticatorSelectionCriteria_Data* data_ = nullptr;
};

class PublicKeyCredentialCreationOptionsDataView {
 public:
  PublicKeyCredentialCreationOptionsDataView() {}

  PublicKeyCredentialCreationOptionsDataView(
      internal::PublicKeyCredentialCreationOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRelyingPartyDataView(
      PublicKeyCredentialRpEntityDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRelyingParty(UserType* output) {
    auto* pointer = data_->relying_party.Get();
    return mojo::internal::Deserialize<::webauth::mojom::PublicKeyCredentialRpEntityDataView>(
        pointer, output, context_);
  }
  inline void GetUserDataView(
      PublicKeyCredentialUserEntityDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUser(UserType* output) {
    auto* pointer = data_->user.Get();
    return mojo::internal::Deserialize<::webauth::mojom::PublicKeyCredentialUserEntityDataView>(
        pointer, output, context_);
  }
  inline void GetChallengeDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadChallenge(UserType* output) {
    auto* pointer = data_->challenge.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetPublicKeyParametersDataView(
      mojo::ArrayDataView<PublicKeyCredentialParametersDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPublicKeyParameters(UserType* output) {
    auto* pointer = data_->public_key_parameters.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::webauth::mojom::PublicKeyCredentialParametersDataView>>(
        pointer, output, context_);
  }
  inline void GetAdjustedTimeoutDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAdjustedTimeout(UserType* output) {
    auto* pointer = data_->adjusted_timeout.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetExcludeCredentialsDataView(
      mojo::ArrayDataView<PublicKeyCredentialDescriptorDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExcludeCredentials(UserType* output) {
    auto* pointer = data_->exclude_credentials.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::webauth::mojom::PublicKeyCredentialDescriptorDataView>>(
        pointer, output, context_);
  }
  inline void GetAuthenticatorSelectionDataView(
      AuthenticatorSelectionCriteriaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAuthenticatorSelection(UserType* output) {
    auto* pointer = data_->authenticator_selection.Get();
    return mojo::internal::Deserialize<::webauth::mojom::AuthenticatorSelectionCriteriaDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAttestation(UserType* output) const {
    auto data_value = data_->attestation;
    return mojo::internal::Deserialize<::webauth::mojom::AttestationConveyancePreference>(
        data_value, output);
  }

  AttestationConveyancePreference attestation() const {
    return static_cast<AttestationConveyancePreference>(data_->attestation);
  }
  inline void GetCableRegistrationDataDataView(
      CableRegistrationDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCableRegistrationData(UserType* output) {
    auto* pointer = data_->cable_registration_data.Get();
    return mojo::internal::Deserialize<::webauth::mojom::CableRegistrationDataView>(
        pointer, output, context_);
  }
 private:
  internal::PublicKeyCredentialCreationOptions_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PublicKeyCredentialDescriptorDataView {
 public:
  PublicKeyCredentialDescriptorDataView() {}

  PublicKeyCredentialDescriptorDataView(
      internal::PublicKeyCredentialDescriptor_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::webauth::mojom::PublicKeyCredentialType>(
        data_value, output);
  }

  PublicKeyCredentialType type() const {
    return static_cast<PublicKeyCredentialType>(data_->type);
  }
  inline void GetIdDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetTransportsDataView(
      mojo::ArrayDataView<AuthenticatorTransport>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTransports(UserType* output) {
    auto* pointer = data_->transports.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::webauth::mojom::AuthenticatorTransport>>(
        pointer, output, context_);
  }
 private:
  internal::PublicKeyCredentialDescriptor_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Authenticator_MakeCredential_ParamsDataView {
 public:
  Authenticator_MakeCredential_ParamsDataView() {}

  Authenticator_MakeCredential_ParamsDataView(
      internal::Authenticator_MakeCredential_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOptionsDataView(
      PublicKeyCredentialCreationOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::webauth::mojom::PublicKeyCredentialCreationOptionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::Authenticator_MakeCredential_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Authenticator_MakeCredential_ResponseParamsDataView {
 public:
  Authenticator_MakeCredential_ResponseParamsDataView() {}

  Authenticator_MakeCredential_ResponseParamsDataView(
      internal::Authenticator_MakeCredential_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::webauth::mojom::AuthenticatorStatus>(
        data_value, output);
  }

  AuthenticatorStatus status() const {
    return static_cast<AuthenticatorStatus>(data_->status);
  }
  inline void GetCredentialDataView(
      MakeCredentialAuthenticatorResponseDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCredential(UserType* output) {
    auto* pointer = data_->credential.Get();
    return mojo::internal::Deserialize<::webauth::mojom::MakeCredentialAuthenticatorResponseDataView>(
        pointer, output, context_);
  }
 private:
  internal::Authenticator_MakeCredential_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Authenticator_GetAssertion_ParamsDataView {
 public:
  Authenticator_GetAssertion_ParamsDataView() {}

  Authenticator_GetAssertion_ParamsDataView(
      internal::Authenticator_GetAssertion_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOptionsDataView(
      PublicKeyCredentialRequestOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::webauth::mojom::PublicKeyCredentialRequestOptionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::Authenticator_GetAssertion_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Authenticator_GetAssertion_ResponseParamsDataView {
 public:
  Authenticator_GetAssertion_ResponseParamsDataView() {}

  Authenticator_GetAssertion_ResponseParamsDataView(
      internal::Authenticator_GetAssertion_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::webauth::mojom::AuthenticatorStatus>(
        data_value, output);
  }

  AuthenticatorStatus status() const {
    return static_cast<AuthenticatorStatus>(data_->status);
  }
  inline void GetCredentialDataView(
      GetAssertionAuthenticatorResponseDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCredential(UserType* output) {
    auto* pointer = data_->credential.Get();
    return mojo::internal::Deserialize<::webauth::mojom::GetAssertionAuthenticatorResponseDataView>(
        pointer, output, context_);
  }
 private:
  internal::Authenticator_GetAssertion_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace webauth

namespace std {

template <>
struct hash<::webauth::mojom::AuthenticatorStatus>
    : public mojo::internal::EnumHashImpl<::webauth::mojom::AuthenticatorStatus> {};

template <>
struct hash<::webauth::mojom::UserVerificationRequirement>
    : public mojo::internal::EnumHashImpl<::webauth::mojom::UserVerificationRequirement> {};

template <>
struct hash<::webauth::mojom::AttestationConveyancePreference>
    : public mojo::internal::EnumHashImpl<::webauth::mojom::AttestationConveyancePreference> {};

template <>
struct hash<::webauth::mojom::AuthenticatorAttachment>
    : public mojo::internal::EnumHashImpl<::webauth::mojom::AuthenticatorAttachment> {};

template <>
struct hash<::webauth::mojom::PublicKeyCredentialType>
    : public mojo::internal::EnumHashImpl<::webauth::mojom::PublicKeyCredentialType> {};

template <>
struct hash<::webauth::mojom::AuthenticatorTransport>
    : public mojo::internal::EnumHashImpl<::webauth::mojom::AuthenticatorTransport> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::webauth::mojom::AuthenticatorStatus, ::webauth::mojom::AuthenticatorStatus> {
  static ::webauth::mojom::AuthenticatorStatus ToMojom(::webauth::mojom::AuthenticatorStatus input) { return input; }
  static bool FromMojom(::webauth::mojom::AuthenticatorStatus input, ::webauth::mojom::AuthenticatorStatus* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::webauth::mojom::AuthenticatorStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::webauth::mojom::AuthenticatorStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::webauth::mojom::AuthenticatorStatus>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::webauth::mojom::UserVerificationRequirement, ::webauth::mojom::UserVerificationRequirement> {
  static ::webauth::mojom::UserVerificationRequirement ToMojom(::webauth::mojom::UserVerificationRequirement input) { return input; }
  static bool FromMojom(::webauth::mojom::UserVerificationRequirement input, ::webauth::mojom::UserVerificationRequirement* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::webauth::mojom::UserVerificationRequirement, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::webauth::mojom::UserVerificationRequirement, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::webauth::mojom::UserVerificationRequirement>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::webauth::mojom::AttestationConveyancePreference, ::webauth::mojom::AttestationConveyancePreference> {
  static ::webauth::mojom::AttestationConveyancePreference ToMojom(::webauth::mojom::AttestationConveyancePreference input) { return input; }
  static bool FromMojom(::webauth::mojom::AttestationConveyancePreference input, ::webauth::mojom::AttestationConveyancePreference* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::webauth::mojom::AttestationConveyancePreference, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::webauth::mojom::AttestationConveyancePreference, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::webauth::mojom::AttestationConveyancePreference>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::webauth::mojom::AuthenticatorAttachment, ::webauth::mojom::AuthenticatorAttachment> {
  static ::webauth::mojom::AuthenticatorAttachment ToMojom(::webauth::mojom::AuthenticatorAttachment input) { return input; }
  static bool FromMojom(::webauth::mojom::AuthenticatorAttachment input, ::webauth::mojom::AuthenticatorAttachment* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::webauth::mojom::AuthenticatorAttachment, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::webauth::mojom::AuthenticatorAttachment, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::webauth::mojom::AuthenticatorAttachment>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::webauth::mojom::PublicKeyCredentialType, ::webauth::mojom::PublicKeyCredentialType> {
  static ::webauth::mojom::PublicKeyCredentialType ToMojom(::webauth::mojom::PublicKeyCredentialType input) { return input; }
  static bool FromMojom(::webauth::mojom::PublicKeyCredentialType input, ::webauth::mojom::PublicKeyCredentialType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::webauth::mojom::PublicKeyCredentialType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::webauth::mojom::PublicKeyCredentialType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::webauth::mojom::PublicKeyCredentialType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::webauth::mojom::AuthenticatorTransport, ::webauth::mojom::AuthenticatorTransport> {
  static ::webauth::mojom::AuthenticatorTransport ToMojom(::webauth::mojom::AuthenticatorTransport input) { return input; }
  static bool FromMojom(::webauth::mojom::AuthenticatorTransport input, ::webauth::mojom::AuthenticatorTransport* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::webauth::mojom::AuthenticatorTransport, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::webauth::mojom::AuthenticatorTransport, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::webauth::mojom::AuthenticatorTransport>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::webauth::mojom::CommonCredentialInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::webauth::mojom::CommonCredentialInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::webauth::mojom::internal::CommonCredentialInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::id, input, custom_context)) in_id = CallWithContext(Traits::id, input, custom_context);
    typename decltype((*output)->id)::BaseType::BufferWriter
        id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_id, buffer, &id_writer, context);
    (*output)->id.Set(
        id_writer.is_null() ? nullptr : id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null id in CommonCredentialInfo struct");
    decltype(CallWithContext(Traits::raw_id, input, custom_context)) in_raw_id = CallWithContext(Traits::raw_id, input, custom_context);
    typename decltype((*output)->raw_id)::BaseType::BufferWriter
        raw_id_writer;
    const mojo::internal::ContainerValidateParams raw_id_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_raw_id, buffer, &raw_id_writer, &raw_id_validate_params,
        context);
    (*output)->raw_id.Set(
        raw_id_writer.is_null() ? nullptr : raw_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->raw_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null raw_id in CommonCredentialInfo struct");
    decltype(CallWithContext(Traits::client_data_json, input, custom_context)) in_client_data_json = CallWithContext(Traits::client_data_json, input, custom_context);
    typename decltype((*output)->client_data_json)::BaseType::BufferWriter
        client_data_json_writer;
    const mojo::internal::ContainerValidateParams client_data_json_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_client_data_json, buffer, &client_data_json_writer, &client_data_json_validate_params,
        context);
    (*output)->client_data_json.Set(
        client_data_json_writer.is_null() ? nullptr : client_data_json_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->client_data_json.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null client_data_json in CommonCredentialInfo struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::webauth::mojom::internal::CommonCredentialInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::webauth::mojom::CommonCredentialInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::webauth::mojom::MakeCredentialAuthenticatorResponseDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::webauth::mojom::MakeCredentialAuthenticatorResponseDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::webauth::mojom::internal::MakeCredentialAuthenticatorResponse_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::info, input, custom_context)) in_info = CallWithContext(Traits::info, input, custom_context);
    typename decltype((*output)->info)::BaseType::BufferWriter
        info_writer;
    mojo::internal::Serialize<::webauth::mojom::CommonCredentialInfoDataView>(
        in_info, buffer, &info_writer, context);
    (*output)->info.Set(
        info_writer.is_null() ? nullptr : info_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->info.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null info in MakeCredentialAuthenticatorResponse struct");
    decltype(CallWithContext(Traits::attestation_object, input, custom_context)) in_attestation_object = CallWithContext(Traits::attestation_object, input, custom_context);
    typename decltype((*output)->attestation_object)::BaseType::BufferWriter
        attestation_object_writer;
    const mojo::internal::ContainerValidateParams attestation_object_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_attestation_object, buffer, &attestation_object_writer, &attestation_object_validate_params,
        context);
    (*output)->attestation_object.Set(
        attestation_object_writer.is_null() ? nullptr : attestation_object_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->attestation_object.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null attestation_object in MakeCredentialAuthenticatorResponse struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::webauth::mojom::internal::MakeCredentialAuthenticatorResponse_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::webauth::mojom::MakeCredentialAuthenticatorResponseDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::webauth::mojom::GetAssertionAuthenticatorResponseDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::webauth::mojom::GetAssertionAuthenticatorResponseDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::webauth::mojom::internal::GetAssertionAuthenticatorResponse_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::info, input, custom_context)) in_info = CallWithContext(Traits::info, input, custom_context);
    typename decltype((*output)->info)::BaseType::BufferWriter
        info_writer;
    mojo::internal::Serialize<::webauth::mojom::CommonCredentialInfoDataView>(
        in_info, buffer, &info_writer, context);
    (*output)->info.Set(
        info_writer.is_null() ? nullptr : info_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->info.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null info in GetAssertionAuthenticatorResponse struct");
    decltype(CallWithContext(Traits::authenticator_data, input, custom_context)) in_authenticator_data = CallWithContext(Traits::authenticator_data, input, custom_context);
    typename decltype((*output)->authenticator_data)::BaseType::BufferWriter
        authenticator_data_writer;
    const mojo::internal::ContainerValidateParams authenticator_data_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_authenticator_data, buffer, &authenticator_data_writer, &authenticator_data_validate_params,
        context);
    (*output)->authenticator_data.Set(
        authenticator_data_writer.is_null() ? nullptr : authenticator_data_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->authenticator_data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null authenticator_data in GetAssertionAuthenticatorResponse struct");
    decltype(CallWithContext(Traits::signature, input, custom_context)) in_signature = CallWithContext(Traits::signature, input, custom_context);
    typename decltype((*output)->signature)::BaseType::BufferWriter
        signature_writer;
    const mojo::internal::ContainerValidateParams signature_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_signature, buffer, &signature_writer, &signature_validate_params,
        context);
    (*output)->signature.Set(
        signature_writer.is_null() ? nullptr : signature_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->signature.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null signature in GetAssertionAuthenticatorResponse struct");
    decltype(CallWithContext(Traits::user_handle, input, custom_context)) in_user_handle = CallWithContext(Traits::user_handle, input, custom_context);
    typename decltype((*output)->user_handle)::BaseType::BufferWriter
        user_handle_writer;
    const mojo::internal::ContainerValidateParams user_handle_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_user_handle, buffer, &user_handle_writer, &user_handle_validate_params,
        context);
    (*output)->user_handle.Set(
        user_handle_writer.is_null() ? nullptr : user_handle_writer.data());
    (*output)->echo_appid_extension = CallWithContext(Traits::echo_appid_extension, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::webauth::mojom::internal::GetAssertionAuthenticatorResponse_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::webauth::mojom::GetAssertionAuthenticatorResponseDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::webauth::mojom::PublicKeyCredentialRpEntityDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::webauth::mojom::PublicKeyCredentialRpEntityDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::webauth::mojom::internal::PublicKeyCredentialRpEntity_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::id, input, custom_context)) in_id = CallWithContext(Traits::id, input, custom_context);
    typename decltype((*output)->id)::BaseType::BufferWriter
        id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_id, buffer, &id_writer, context);
    (*output)->id.Set(
        id_writer.is_null() ? nullptr : id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null id in PublicKeyCredentialRpEntity struct");
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
        "null name in PublicKeyCredentialRpEntity struct");
    decltype(CallWithContext(Traits::icon, input, custom_context)) in_icon = CallWithContext(Traits::icon, input, custom_context);
    typename decltype((*output)->icon)::BaseType::BufferWriter
        icon_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_icon, buffer, &icon_writer, context);
    (*output)->icon.Set(
        icon_writer.is_null() ? nullptr : icon_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::webauth::mojom::internal::PublicKeyCredentialRpEntity_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::webauth::mojom::PublicKeyCredentialRpEntityDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::webauth::mojom::PublicKeyCredentialUserEntityDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::webauth::mojom::PublicKeyCredentialUserEntityDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::webauth::mojom::internal::PublicKeyCredentialUserEntity_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::id, input, custom_context)) in_id = CallWithContext(Traits::id, input, custom_context);
    typename decltype((*output)->id)::BaseType::BufferWriter
        id_writer;
    const mojo::internal::ContainerValidateParams id_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_id, buffer, &id_writer, &id_validate_params,
        context);
    (*output)->id.Set(
        id_writer.is_null() ? nullptr : id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null id in PublicKeyCredentialUserEntity struct");
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
        "null name in PublicKeyCredentialUserEntity struct");
    decltype(CallWithContext(Traits::icon, input, custom_context)) in_icon = CallWithContext(Traits::icon, input, custom_context);
    typename decltype((*output)->icon)::BaseType::BufferWriter
        icon_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_icon, buffer, &icon_writer, context);
    (*output)->icon.Set(
        icon_writer.is_null() ? nullptr : icon_writer.data());
    decltype(CallWithContext(Traits::display_name, input, custom_context)) in_display_name = CallWithContext(Traits::display_name, input, custom_context);
    typename decltype((*output)->display_name)::BaseType::BufferWriter
        display_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_display_name, buffer, &display_name_writer, context);
    (*output)->display_name.Set(
        display_name_writer.is_null() ? nullptr : display_name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->display_name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null display_name in PublicKeyCredentialUserEntity struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::webauth::mojom::internal::PublicKeyCredentialUserEntity_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::webauth::mojom::PublicKeyCredentialUserEntityDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::webauth::mojom::PublicKeyCredentialParametersDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::webauth::mojom::PublicKeyCredentialParametersDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::webauth::mojom::internal::PublicKeyCredentialParameters_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::webauth::mojom::PublicKeyCredentialType>(
        CallWithContext(Traits::type, input, custom_context), &(*output)->type);
    (*output)->algorithm_identifier = CallWithContext(Traits::algorithm_identifier, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::webauth::mojom::internal::PublicKeyCredentialParameters_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::webauth::mojom::PublicKeyCredentialParametersDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::webauth::mojom::CableAuthenticationDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::webauth::mojom::CableAuthenticationDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::webauth::mojom::internal::CableAuthentication_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->version = CallWithContext(Traits::version, input, custom_context);
    decltype(CallWithContext(Traits::client_eid, input, custom_context)) in_client_eid = CallWithContext(Traits::client_eid, input, custom_context);
    typename decltype((*output)->client_eid)::BaseType::BufferWriter
        client_eid_writer;
    const mojo::internal::ContainerValidateParams client_eid_validate_params(
        16, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_client_eid, buffer, &client_eid_writer, &client_eid_validate_params,
        context);
    (*output)->client_eid.Set(
        client_eid_writer.is_null() ? nullptr : client_eid_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->client_eid.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null client_eid in CableAuthentication struct");
    decltype(CallWithContext(Traits::authenticator_eid, input, custom_context)) in_authenticator_eid = CallWithContext(Traits::authenticator_eid, input, custom_context);
    typename decltype((*output)->authenticator_eid)::BaseType::BufferWriter
        authenticator_eid_writer;
    const mojo::internal::ContainerValidateParams authenticator_eid_validate_params(
        16, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_authenticator_eid, buffer, &authenticator_eid_writer, &authenticator_eid_validate_params,
        context);
    (*output)->authenticator_eid.Set(
        authenticator_eid_writer.is_null() ? nullptr : authenticator_eid_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->authenticator_eid.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null authenticator_eid in CableAuthentication struct");
    decltype(CallWithContext(Traits::session_pre_key, input, custom_context)) in_session_pre_key = CallWithContext(Traits::session_pre_key, input, custom_context);
    typename decltype((*output)->session_pre_key)::BaseType::BufferWriter
        session_pre_key_writer;
    const mojo::internal::ContainerValidateParams session_pre_key_validate_params(
        32, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_session_pre_key, buffer, &session_pre_key_writer, &session_pre_key_validate_params,
        context);
    (*output)->session_pre_key.Set(
        session_pre_key_writer.is_null() ? nullptr : session_pre_key_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->session_pre_key.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null session_pre_key in CableAuthentication struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::webauth::mojom::internal::CableAuthentication_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::webauth::mojom::CableAuthenticationDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::webauth::mojom::CableRegistrationDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::webauth::mojom::CableRegistrationDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::webauth::mojom::internal::CableRegistration_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->version = CallWithContext(Traits::version, input, custom_context);
    decltype(CallWithContext(Traits::relying_party_public_key, input, custom_context)) in_relying_party_public_key = CallWithContext(Traits::relying_party_public_key, input, custom_context);
    typename decltype((*output)->relying_party_public_key)::BaseType::BufferWriter
        relying_party_public_key_writer;
    const mojo::internal::ContainerValidateParams relying_party_public_key_validate_params(
        65, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_relying_party_public_key, buffer, &relying_party_public_key_writer, &relying_party_public_key_validate_params,
        context);
    (*output)->relying_party_public_key.Set(
        relying_party_public_key_writer.is_null() ? nullptr : relying_party_public_key_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->relying_party_public_key.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null relying_party_public_key in CableRegistration struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::webauth::mojom::internal::CableRegistration_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::webauth::mojom::CableRegistrationDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::webauth::mojom::PublicKeyCredentialRequestOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::webauth::mojom::PublicKeyCredentialRequestOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::webauth::mojom::internal::PublicKeyCredentialRequestOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::challenge, input, custom_context)) in_challenge = CallWithContext(Traits::challenge, input, custom_context);
    typename decltype((*output)->challenge)::BaseType::BufferWriter
        challenge_writer;
    const mojo::internal::ContainerValidateParams challenge_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_challenge, buffer, &challenge_writer, &challenge_validate_params,
        context);
    (*output)->challenge.Set(
        challenge_writer.is_null() ? nullptr : challenge_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->challenge.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null challenge in PublicKeyCredentialRequestOptions struct");
    decltype(CallWithContext(Traits::adjusted_timeout, input, custom_context)) in_adjusted_timeout = CallWithContext(Traits::adjusted_timeout, input, custom_context);
    typename decltype((*output)->adjusted_timeout)::BaseType::BufferWriter
        adjusted_timeout_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_adjusted_timeout, buffer, &adjusted_timeout_writer, context);
    (*output)->adjusted_timeout.Set(
        adjusted_timeout_writer.is_null() ? nullptr : adjusted_timeout_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->adjusted_timeout.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null adjusted_timeout in PublicKeyCredentialRequestOptions struct");
    decltype(CallWithContext(Traits::relying_party_id, input, custom_context)) in_relying_party_id = CallWithContext(Traits::relying_party_id, input, custom_context);
    typename decltype((*output)->relying_party_id)::BaseType::BufferWriter
        relying_party_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_relying_party_id, buffer, &relying_party_id_writer, context);
    (*output)->relying_party_id.Set(
        relying_party_id_writer.is_null() ? nullptr : relying_party_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->relying_party_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null relying_party_id in PublicKeyCredentialRequestOptions struct");
    decltype(CallWithContext(Traits::allow_credentials, input, custom_context)) in_allow_credentials = CallWithContext(Traits::allow_credentials, input, custom_context);
    typename decltype((*output)->allow_credentials)::BaseType::BufferWriter
        allow_credentials_writer;
    const mojo::internal::ContainerValidateParams allow_credentials_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::webauth::mojom::PublicKeyCredentialDescriptorDataView>>(
        in_allow_credentials, buffer, &allow_credentials_writer, &allow_credentials_validate_params,
        context);
    (*output)->allow_credentials.Set(
        allow_credentials_writer.is_null() ? nullptr : allow_credentials_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->allow_credentials.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null allow_credentials in PublicKeyCredentialRequestOptions struct");
    mojo::internal::Serialize<::webauth::mojom::UserVerificationRequirement>(
        CallWithContext(Traits::user_verification, input, custom_context), &(*output)->user_verification);
    decltype(CallWithContext(Traits::appid, input, custom_context)) in_appid = CallWithContext(Traits::appid, input, custom_context);
    typename decltype((*output)->appid)::BaseType::BufferWriter
        appid_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_appid, buffer, &appid_writer, context);
    (*output)->appid.Set(
        appid_writer.is_null() ? nullptr : appid_writer.data());
    decltype(CallWithContext(Traits::cable_authentication_data, input, custom_context)) in_cable_authentication_data = CallWithContext(Traits::cable_authentication_data, input, custom_context);
    typename decltype((*output)->cable_authentication_data)::BaseType::BufferWriter
        cable_authentication_data_writer;
    const mojo::internal::ContainerValidateParams cable_authentication_data_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::webauth::mojom::CableAuthenticationDataView>>(
        in_cable_authentication_data, buffer, &cable_authentication_data_writer, &cable_authentication_data_validate_params,
        context);
    (*output)->cable_authentication_data.Set(
        cable_authentication_data_writer.is_null() ? nullptr : cable_authentication_data_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->cable_authentication_data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null cable_authentication_data in PublicKeyCredentialRequestOptions struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::webauth::mojom::internal::PublicKeyCredentialRequestOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::webauth::mojom::PublicKeyCredentialRequestOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::webauth::mojom::AuthenticatorSelectionCriteriaDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::webauth::mojom::AuthenticatorSelectionCriteriaDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::webauth::mojom::internal::AuthenticatorSelectionCriteria_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::webauth::mojom::AuthenticatorAttachment>(
        CallWithContext(Traits::authenticator_attachment, input, custom_context), &(*output)->authenticator_attachment);
    (*output)->require_resident_key = CallWithContext(Traits::require_resident_key, input, custom_context);
    mojo::internal::Serialize<::webauth::mojom::UserVerificationRequirement>(
        CallWithContext(Traits::user_verification, input, custom_context), &(*output)->user_verification);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::webauth::mojom::internal::AuthenticatorSelectionCriteria_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::webauth::mojom::AuthenticatorSelectionCriteriaDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::webauth::mojom::PublicKeyCredentialCreationOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::webauth::mojom::PublicKeyCredentialCreationOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::webauth::mojom::internal::PublicKeyCredentialCreationOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::relying_party, input, custom_context)) in_relying_party = CallWithContext(Traits::relying_party, input, custom_context);
    typename decltype((*output)->relying_party)::BaseType::BufferWriter
        relying_party_writer;
    mojo::internal::Serialize<::webauth::mojom::PublicKeyCredentialRpEntityDataView>(
        in_relying_party, buffer, &relying_party_writer, context);
    (*output)->relying_party.Set(
        relying_party_writer.is_null() ? nullptr : relying_party_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->relying_party.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null relying_party in PublicKeyCredentialCreationOptions struct");
    decltype(CallWithContext(Traits::user, input, custom_context)) in_user = CallWithContext(Traits::user, input, custom_context);
    typename decltype((*output)->user)::BaseType::BufferWriter
        user_writer;
    mojo::internal::Serialize<::webauth::mojom::PublicKeyCredentialUserEntityDataView>(
        in_user, buffer, &user_writer, context);
    (*output)->user.Set(
        user_writer.is_null() ? nullptr : user_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->user.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null user in PublicKeyCredentialCreationOptions struct");
    decltype(CallWithContext(Traits::challenge, input, custom_context)) in_challenge = CallWithContext(Traits::challenge, input, custom_context);
    typename decltype((*output)->challenge)::BaseType::BufferWriter
        challenge_writer;
    const mojo::internal::ContainerValidateParams challenge_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_challenge, buffer, &challenge_writer, &challenge_validate_params,
        context);
    (*output)->challenge.Set(
        challenge_writer.is_null() ? nullptr : challenge_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->challenge.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null challenge in PublicKeyCredentialCreationOptions struct");
    decltype(CallWithContext(Traits::public_key_parameters, input, custom_context)) in_public_key_parameters = CallWithContext(Traits::public_key_parameters, input, custom_context);
    typename decltype((*output)->public_key_parameters)::BaseType::BufferWriter
        public_key_parameters_writer;
    const mojo::internal::ContainerValidateParams public_key_parameters_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::webauth::mojom::PublicKeyCredentialParametersDataView>>(
        in_public_key_parameters, buffer, &public_key_parameters_writer, &public_key_parameters_validate_params,
        context);
    (*output)->public_key_parameters.Set(
        public_key_parameters_writer.is_null() ? nullptr : public_key_parameters_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->public_key_parameters.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null public_key_parameters in PublicKeyCredentialCreationOptions struct");
    decltype(CallWithContext(Traits::adjusted_timeout, input, custom_context)) in_adjusted_timeout = CallWithContext(Traits::adjusted_timeout, input, custom_context);
    typename decltype((*output)->adjusted_timeout)::BaseType::BufferWriter
        adjusted_timeout_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_adjusted_timeout, buffer, &adjusted_timeout_writer, context);
    (*output)->adjusted_timeout.Set(
        adjusted_timeout_writer.is_null() ? nullptr : adjusted_timeout_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->adjusted_timeout.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null adjusted_timeout in PublicKeyCredentialCreationOptions struct");
    decltype(CallWithContext(Traits::exclude_credentials, input, custom_context)) in_exclude_credentials = CallWithContext(Traits::exclude_credentials, input, custom_context);
    typename decltype((*output)->exclude_credentials)::BaseType::BufferWriter
        exclude_credentials_writer;
    const mojo::internal::ContainerValidateParams exclude_credentials_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::webauth::mojom::PublicKeyCredentialDescriptorDataView>>(
        in_exclude_credentials, buffer, &exclude_credentials_writer, &exclude_credentials_validate_params,
        context);
    (*output)->exclude_credentials.Set(
        exclude_credentials_writer.is_null() ? nullptr : exclude_credentials_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->exclude_credentials.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null exclude_credentials in PublicKeyCredentialCreationOptions struct");
    decltype(CallWithContext(Traits::authenticator_selection, input, custom_context)) in_authenticator_selection = CallWithContext(Traits::authenticator_selection, input, custom_context);
    typename decltype((*output)->authenticator_selection)::BaseType::BufferWriter
        authenticator_selection_writer;
    mojo::internal::Serialize<::webauth::mojom::AuthenticatorSelectionCriteriaDataView>(
        in_authenticator_selection, buffer, &authenticator_selection_writer, context);
    (*output)->authenticator_selection.Set(
        authenticator_selection_writer.is_null() ? nullptr : authenticator_selection_writer.data());
    mojo::internal::Serialize<::webauth::mojom::AttestationConveyancePreference>(
        CallWithContext(Traits::attestation, input, custom_context), &(*output)->attestation);
    decltype(CallWithContext(Traits::cable_registration_data, input, custom_context)) in_cable_registration_data = CallWithContext(Traits::cable_registration_data, input, custom_context);
    typename decltype((*output)->cable_registration_data)::BaseType::BufferWriter
        cable_registration_data_writer;
    mojo::internal::Serialize<::webauth::mojom::CableRegistrationDataView>(
        in_cable_registration_data, buffer, &cable_registration_data_writer, context);
    (*output)->cable_registration_data.Set(
        cable_registration_data_writer.is_null() ? nullptr : cable_registration_data_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::webauth::mojom::internal::PublicKeyCredentialCreationOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::webauth::mojom::PublicKeyCredentialCreationOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::webauth::mojom::PublicKeyCredentialDescriptorDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::webauth::mojom::PublicKeyCredentialDescriptorDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::webauth::mojom::internal::PublicKeyCredentialDescriptor_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::webauth::mojom::PublicKeyCredentialType>(
        CallWithContext(Traits::type, input, custom_context), &(*output)->type);
    decltype(CallWithContext(Traits::id, input, custom_context)) in_id = CallWithContext(Traits::id, input, custom_context);
    typename decltype((*output)->id)::BaseType::BufferWriter
        id_writer;
    const mojo::internal::ContainerValidateParams id_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_id, buffer, &id_writer, &id_validate_params,
        context);
    (*output)->id.Set(
        id_writer.is_null() ? nullptr : id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null id in PublicKeyCredentialDescriptor struct");
    decltype(CallWithContext(Traits::transports, input, custom_context)) in_transports = CallWithContext(Traits::transports, input, custom_context);
    typename decltype((*output)->transports)::BaseType::BufferWriter
        transports_writer;
    const mojo::internal::ContainerValidateParams transports_validate_params(
        0, ::webauth::mojom::internal::AuthenticatorTransport_Data::Validate);
    mojo::internal::Serialize<mojo::ArrayDataView<::webauth::mojom::AuthenticatorTransport>>(
        in_transports, buffer, &transports_writer, &transports_validate_params,
        context);
    (*output)->transports.Set(
        transports_writer.is_null() ? nullptr : transports_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->transports.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null transports in PublicKeyCredentialDescriptor struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::webauth::mojom::internal::PublicKeyCredentialDescriptor_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::webauth::mojom::PublicKeyCredentialDescriptorDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace webauth {
namespace mojom {

inline void CommonCredentialInfoDataView::GetIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void CommonCredentialInfoDataView::GetRawIdDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->raw_id.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void CommonCredentialInfoDataView::GetClientDataJsonDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->client_data_json.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void MakeCredentialAuthenticatorResponseDataView::GetInfoDataView(
    CommonCredentialInfoDataView* output) {
  auto pointer = data_->info.Get();
  *output = CommonCredentialInfoDataView(pointer, context_);
}
inline void MakeCredentialAuthenticatorResponseDataView::GetAttestationObjectDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->attestation_object.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void GetAssertionAuthenticatorResponseDataView::GetInfoDataView(
    CommonCredentialInfoDataView* output) {
  auto pointer = data_->info.Get();
  *output = CommonCredentialInfoDataView(pointer, context_);
}
inline void GetAssertionAuthenticatorResponseDataView::GetAuthenticatorDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->authenticator_data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void GetAssertionAuthenticatorResponseDataView::GetSignatureDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->signature.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void GetAssertionAuthenticatorResponseDataView::GetUserHandleDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->user_handle.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void PublicKeyCredentialRpEntityDataView::GetIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PublicKeyCredentialRpEntityDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PublicKeyCredentialRpEntityDataView::GetIconDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->icon.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void PublicKeyCredentialUserEntityDataView::GetIdDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->id.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void PublicKeyCredentialUserEntityDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PublicKeyCredentialUserEntityDataView::GetIconDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->icon.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void PublicKeyCredentialUserEntityDataView::GetDisplayNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->display_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void CableAuthenticationDataView::GetClientEidDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->client_eid.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void CableAuthenticationDataView::GetAuthenticatorEidDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->authenticator_eid.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void CableAuthenticationDataView::GetSessionPreKeyDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->session_pre_key.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void CableRegistrationDataView::GetRelyingPartyPublicKeyDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->relying_party_public_key.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void PublicKeyCredentialRequestOptionsDataView::GetChallengeDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->challenge.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void PublicKeyCredentialRequestOptionsDataView::GetAdjustedTimeoutDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->adjusted_timeout.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void PublicKeyCredentialRequestOptionsDataView::GetRelyingPartyIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->relying_party_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PublicKeyCredentialRequestOptionsDataView::GetAllowCredentialsDataView(
    mojo::ArrayDataView<PublicKeyCredentialDescriptorDataView>* output) {
  auto pointer = data_->allow_credentials.Get();
  *output = mojo::ArrayDataView<PublicKeyCredentialDescriptorDataView>(pointer, context_);
}
inline void PublicKeyCredentialRequestOptionsDataView::GetAppidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->appid.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PublicKeyCredentialRequestOptionsDataView::GetCableAuthenticationDataDataView(
    mojo::ArrayDataView<CableAuthenticationDataView>* output) {
  auto pointer = data_->cable_authentication_data.Get();
  *output = mojo::ArrayDataView<CableAuthenticationDataView>(pointer, context_);
}




inline void PublicKeyCredentialCreationOptionsDataView::GetRelyingPartyDataView(
    PublicKeyCredentialRpEntityDataView* output) {
  auto pointer = data_->relying_party.Get();
  *output = PublicKeyCredentialRpEntityDataView(pointer, context_);
}
inline void PublicKeyCredentialCreationOptionsDataView::GetUserDataView(
    PublicKeyCredentialUserEntityDataView* output) {
  auto pointer = data_->user.Get();
  *output = PublicKeyCredentialUserEntityDataView(pointer, context_);
}
inline void PublicKeyCredentialCreationOptionsDataView::GetChallengeDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->challenge.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void PublicKeyCredentialCreationOptionsDataView::GetPublicKeyParametersDataView(
    mojo::ArrayDataView<PublicKeyCredentialParametersDataView>* output) {
  auto pointer = data_->public_key_parameters.Get();
  *output = mojo::ArrayDataView<PublicKeyCredentialParametersDataView>(pointer, context_);
}
inline void PublicKeyCredentialCreationOptionsDataView::GetAdjustedTimeoutDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->adjusted_timeout.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void PublicKeyCredentialCreationOptionsDataView::GetExcludeCredentialsDataView(
    mojo::ArrayDataView<PublicKeyCredentialDescriptorDataView>* output) {
  auto pointer = data_->exclude_credentials.Get();
  *output = mojo::ArrayDataView<PublicKeyCredentialDescriptorDataView>(pointer, context_);
}
inline void PublicKeyCredentialCreationOptionsDataView::GetAuthenticatorSelectionDataView(
    AuthenticatorSelectionCriteriaDataView* output) {
  auto pointer = data_->authenticator_selection.Get();
  *output = AuthenticatorSelectionCriteriaDataView(pointer, context_);
}
inline void PublicKeyCredentialCreationOptionsDataView::GetCableRegistrationDataDataView(
    CableRegistrationDataView* output) {
  auto pointer = data_->cable_registration_data.Get();
  *output = CableRegistrationDataView(pointer, context_);
}


inline void PublicKeyCredentialDescriptorDataView::GetIdDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->id.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void PublicKeyCredentialDescriptorDataView::GetTransportsDataView(
    mojo::ArrayDataView<AuthenticatorTransport>* output) {
  auto pointer = data_->transports.Get();
  *output = mojo::ArrayDataView<AuthenticatorTransport>(pointer, context_);
}


inline void Authenticator_MakeCredential_ParamsDataView::GetOptionsDataView(
    PublicKeyCredentialCreationOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = PublicKeyCredentialCreationOptionsDataView(pointer, context_);
}


inline void Authenticator_MakeCredential_ResponseParamsDataView::GetCredentialDataView(
    MakeCredentialAuthenticatorResponseDataView* output) {
  auto pointer = data_->credential.Get();
  *output = MakeCredentialAuthenticatorResponseDataView(pointer, context_);
}


inline void Authenticator_GetAssertion_ParamsDataView::GetOptionsDataView(
    PublicKeyCredentialRequestOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = PublicKeyCredentialRequestOptionsDataView(pointer, context_);
}


inline void Authenticator_GetAssertion_ResponseParamsDataView::GetCredentialDataView(
    GetAssertionAuthenticatorResponseDataView* output) {
  auto pointer = data_->credential.Get();
  *output = GetAssertionAuthenticatorResponseDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace webauth

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBAUTH_AUTHENTICATOR_MOJOM_SHARED_H_
