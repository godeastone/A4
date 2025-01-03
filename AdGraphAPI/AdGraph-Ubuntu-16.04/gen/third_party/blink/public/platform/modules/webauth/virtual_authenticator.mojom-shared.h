// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBAUTH_VIRTUAL_AUTHENTICATOR_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBAUTH_VIRTUAL_AUTHENTICATOR_MOJOM_SHARED_H_

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
#include "third_party/blink/public/platform/modules/webauth/virtual_authenticator.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared.h"
#include "third_party/blink/public/platform/modules/webauth/authenticator.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace webauth {
namespace test {
namespace mojom {
class VirtualAuthenticatorOptionsDataView;

class RegisteredKeyDataView;



}  // namespace mojom
}  // namespace test
}  // namespace webauth

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::webauth::test::mojom::VirtualAuthenticatorOptionsDataView> {
  using Data = ::webauth::test::mojom::internal::VirtualAuthenticatorOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::webauth::test::mojom::RegisteredKeyDataView> {
  using Data = ::webauth::test::mojom::internal::RegisteredKey_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace webauth {
namespace test {
namespace mojom {

enum class ClientToAuthenticatorProtocol : int32_t {
  U2F,
  CTAP2,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, ClientToAuthenticatorProtocol value) {
  switch(value) {
    case ClientToAuthenticatorProtocol::U2F:
      return os << "ClientToAuthenticatorProtocol::U2F";
    case ClientToAuthenticatorProtocol::CTAP2:
      return os << "ClientToAuthenticatorProtocol::CTAP2";
    default:
      return os << "Unknown ClientToAuthenticatorProtocol value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(ClientToAuthenticatorProtocol value) {
  return internal::ClientToAuthenticatorProtocol_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class VirtualAuthenticatorInterfaceBase {};

using VirtualAuthenticatorPtrDataView =
    mojo::InterfacePtrDataView<VirtualAuthenticatorInterfaceBase>;
using VirtualAuthenticatorRequestDataView =
    mojo::InterfaceRequestDataView<VirtualAuthenticatorInterfaceBase>;
using VirtualAuthenticatorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VirtualAuthenticatorInterfaceBase>;
using VirtualAuthenticatorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VirtualAuthenticatorInterfaceBase>;
class VirtualAuthenticatorManagerInterfaceBase {};

using VirtualAuthenticatorManagerPtrDataView =
    mojo::InterfacePtrDataView<VirtualAuthenticatorManagerInterfaceBase>;
using VirtualAuthenticatorManagerRequestDataView =
    mojo::InterfaceRequestDataView<VirtualAuthenticatorManagerInterfaceBase>;
using VirtualAuthenticatorManagerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VirtualAuthenticatorManagerInterfaceBase>;
using VirtualAuthenticatorManagerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VirtualAuthenticatorManagerInterfaceBase>;
class VirtualAuthenticatorOptionsDataView {
 public:
  VirtualAuthenticatorOptionsDataView() {}

  VirtualAuthenticatorOptionsDataView(
      internal::VirtualAuthenticatorOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProtocol(UserType* output) const {
    auto data_value = data_->protocol;
    return mojo::internal::Deserialize<::webauth::test::mojom::ClientToAuthenticatorProtocol>(
        data_value, output);
  }

  ClientToAuthenticatorProtocol protocol() const {
    return static_cast<ClientToAuthenticatorProtocol>(data_->protocol);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTransport(UserType* output) const {
    auto data_value = data_->transport;
    return mojo::internal::Deserialize<::webauth::mojom::AuthenticatorTransport>(
        data_value, output);
  }

  ::webauth::mojom::AuthenticatorTransport transport() const {
    return static_cast<::webauth::mojom::AuthenticatorTransport>(data_->transport);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAttachment(UserType* output) const {
    auto data_value = data_->attachment;
    return mojo::internal::Deserialize<::webauth::mojom::AuthenticatorAttachment>(
        data_value, output);
  }

  ::webauth::mojom::AuthenticatorAttachment attachment() const {
    return static_cast<::webauth::mojom::AuthenticatorAttachment>(data_->attachment);
  }
  bool has_resident_key() const {
    return data_->has_resident_key;
  }
  bool has_user_verification() const {
    return data_->has_user_verification;
  }
 private:
  internal::VirtualAuthenticatorOptions_Data* data_ = nullptr;
};

class RegisteredKeyDataView {
 public:
  RegisteredKeyDataView() {}

  RegisteredKeyDataView(
      internal::RegisteredKey_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyHandleDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyHandle(UserType* output) {
    auto* pointer = data_->key_handle.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetApplicationParameterDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadApplicationParameter(UserType* output) {
    auto* pointer = data_->application_parameter.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetPrivateKeyDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPrivateKey(UserType* output) {
    auto* pointer = data_->private_key.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  int32_t counter() const {
    return data_->counter;
  }
 private:
  internal::RegisteredKey_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VirtualAuthenticator_GetUniqueId_ParamsDataView {
 public:
  VirtualAuthenticator_GetUniqueId_ParamsDataView() {}

  VirtualAuthenticator_GetUniqueId_ParamsDataView(
      internal::VirtualAuthenticator_GetUniqueId_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VirtualAuthenticator_GetUniqueId_Params_Data* data_ = nullptr;
};

class VirtualAuthenticator_GetUniqueId_ResponseParamsDataView {
 public:
  VirtualAuthenticator_GetUniqueId_ResponseParamsDataView() {}

  VirtualAuthenticator_GetUniqueId_ResponseParamsDataView(
      internal::VirtualAuthenticator_GetUniqueId_ResponseParams_Data* data,
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
 private:
  internal::VirtualAuthenticator_GetUniqueId_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VirtualAuthenticator_AddRegistration_ParamsDataView {
 public:
  VirtualAuthenticator_AddRegistration_ParamsDataView() {}

  VirtualAuthenticator_AddRegistration_ParamsDataView(
      internal::VirtualAuthenticator_AddRegistration_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyDataView(
      RegisteredKeyDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKey(UserType* output) {
    auto* pointer = data_->key.Get();
    return mojo::internal::Deserialize<::webauth::test::mojom::RegisteredKeyDataView>(
        pointer, output, context_);
  }
 private:
  internal::VirtualAuthenticator_AddRegistration_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VirtualAuthenticator_AddRegistration_ResponseParamsDataView {
 public:
  VirtualAuthenticator_AddRegistration_ResponseParamsDataView() {}

  VirtualAuthenticator_AddRegistration_ResponseParamsDataView(
      internal::VirtualAuthenticator_AddRegistration_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool added() const {
    return data_->added;
  }
 private:
  internal::VirtualAuthenticator_AddRegistration_ResponseParams_Data* data_ = nullptr;
};

class VirtualAuthenticator_GetRegistrations_ParamsDataView {
 public:
  VirtualAuthenticator_GetRegistrations_ParamsDataView() {}

  VirtualAuthenticator_GetRegistrations_ParamsDataView(
      internal::VirtualAuthenticator_GetRegistrations_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VirtualAuthenticator_GetRegistrations_Params_Data* data_ = nullptr;
};

class VirtualAuthenticator_GetRegistrations_ResponseParamsDataView {
 public:
  VirtualAuthenticator_GetRegistrations_ResponseParamsDataView() {}

  VirtualAuthenticator_GetRegistrations_ResponseParamsDataView(
      internal::VirtualAuthenticator_GetRegistrations_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeysDataView(
      mojo::ArrayDataView<RegisteredKeyDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeys(UserType* output) {
    auto* pointer = data_->keys.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::webauth::test::mojom::RegisteredKeyDataView>>(
        pointer, output, context_);
  }
 private:
  internal::VirtualAuthenticator_GetRegistrations_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VirtualAuthenticator_ClearRegistrations_ParamsDataView {
 public:
  VirtualAuthenticator_ClearRegistrations_ParamsDataView() {}

  VirtualAuthenticator_ClearRegistrations_ParamsDataView(
      internal::VirtualAuthenticator_ClearRegistrations_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VirtualAuthenticator_ClearRegistrations_Params_Data* data_ = nullptr;
};

class VirtualAuthenticator_ClearRegistrations_ResponseParamsDataView {
 public:
  VirtualAuthenticator_ClearRegistrations_ResponseParamsDataView() {}

  VirtualAuthenticator_ClearRegistrations_ResponseParamsDataView(
      internal::VirtualAuthenticator_ClearRegistrations_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VirtualAuthenticator_ClearRegistrations_ResponseParams_Data* data_ = nullptr;
};

class VirtualAuthenticator_SetUserPresence_ParamsDataView {
 public:
  VirtualAuthenticator_SetUserPresence_ParamsDataView() {}

  VirtualAuthenticator_SetUserPresence_ParamsDataView(
      internal::VirtualAuthenticator_SetUserPresence_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool present() const {
    return data_->present;
  }
 private:
  internal::VirtualAuthenticator_SetUserPresence_Params_Data* data_ = nullptr;
};

class VirtualAuthenticator_SetUserPresence_ResponseParamsDataView {
 public:
  VirtualAuthenticator_SetUserPresence_ResponseParamsDataView() {}

  VirtualAuthenticator_SetUserPresence_ResponseParamsDataView(
      internal::VirtualAuthenticator_SetUserPresence_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VirtualAuthenticator_SetUserPresence_ResponseParams_Data* data_ = nullptr;
};

class VirtualAuthenticator_GetUserPresence_ParamsDataView {
 public:
  VirtualAuthenticator_GetUserPresence_ParamsDataView() {}

  VirtualAuthenticator_GetUserPresence_ParamsDataView(
      internal::VirtualAuthenticator_GetUserPresence_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VirtualAuthenticator_GetUserPresence_Params_Data* data_ = nullptr;
};

class VirtualAuthenticator_GetUserPresence_ResponseParamsDataView {
 public:
  VirtualAuthenticator_GetUserPresence_ResponseParamsDataView() {}

  VirtualAuthenticator_GetUserPresence_ResponseParamsDataView(
      internal::VirtualAuthenticator_GetUserPresence_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool present() const {
    return data_->present;
  }
 private:
  internal::VirtualAuthenticator_GetUserPresence_ResponseParams_Data* data_ = nullptr;
};

class VirtualAuthenticatorManager_CreateAuthenticator_ParamsDataView {
 public:
  VirtualAuthenticatorManager_CreateAuthenticator_ParamsDataView() {}

  VirtualAuthenticatorManager_CreateAuthenticator_ParamsDataView(
      internal::VirtualAuthenticatorManager_CreateAuthenticator_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOptionsDataView(
      VirtualAuthenticatorOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::webauth::test::mojom::VirtualAuthenticatorOptionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::VirtualAuthenticatorManager_CreateAuthenticator_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VirtualAuthenticatorManager_CreateAuthenticator_ResponseParamsDataView {
 public:
  VirtualAuthenticatorManager_CreateAuthenticator_ResponseParamsDataView() {}

  VirtualAuthenticatorManager_CreateAuthenticator_ResponseParamsDataView(
      internal::VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeAuthenticator() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::webauth::test::mojom::VirtualAuthenticatorPtrDataView>(
            &data_->authenticator, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VirtualAuthenticatorManager_GetAuthenticators_ParamsDataView {
 public:
  VirtualAuthenticatorManager_GetAuthenticators_ParamsDataView() {}

  VirtualAuthenticatorManager_GetAuthenticators_ParamsDataView(
      internal::VirtualAuthenticatorManager_GetAuthenticators_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VirtualAuthenticatorManager_GetAuthenticators_Params_Data* data_ = nullptr;
};

class VirtualAuthenticatorManager_GetAuthenticators_ResponseParamsDataView {
 public:
  VirtualAuthenticatorManager_GetAuthenticators_ResponseParamsDataView() {}

  VirtualAuthenticatorManager_GetAuthenticators_ResponseParamsDataView(
      internal::VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAuthenticatorsDataView(
      mojo::ArrayDataView<VirtualAuthenticatorPtrDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAuthenticators(UserType* output) {
    auto* pointer = data_->authenticators.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::webauth::test::mojom::VirtualAuthenticatorPtrDataView>>(
        pointer, output, context_);
  }
 private:
  internal::VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VirtualAuthenticatorManager_RemoveAuthenticator_ParamsDataView {
 public:
  VirtualAuthenticatorManager_RemoveAuthenticator_ParamsDataView() {}

  VirtualAuthenticatorManager_RemoveAuthenticator_ParamsDataView(
      internal::VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data* data,
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
 private:
  internal::VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParamsDataView {
 public:
  VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParamsDataView() {}

  VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParamsDataView(
      internal::VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool removed() const {
    return data_->removed;
  }
 private:
  internal::VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data* data_ = nullptr;
};

class VirtualAuthenticatorManager_ClearAuthenticators_ParamsDataView {
 public:
  VirtualAuthenticatorManager_ClearAuthenticators_ParamsDataView() {}

  VirtualAuthenticatorManager_ClearAuthenticators_ParamsDataView(
      internal::VirtualAuthenticatorManager_ClearAuthenticators_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VirtualAuthenticatorManager_ClearAuthenticators_Params_Data* data_ = nullptr;
};

class VirtualAuthenticatorManager_ClearAuthenticators_ResponseParamsDataView {
 public:
  VirtualAuthenticatorManager_ClearAuthenticators_ResponseParamsDataView() {}

  VirtualAuthenticatorManager_ClearAuthenticators_ResponseParamsDataView(
      internal::VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace test
}  // namespace webauth

namespace std {

template <>
struct hash<::webauth::test::mojom::ClientToAuthenticatorProtocol>
    : public mojo::internal::EnumHashImpl<::webauth::test::mojom::ClientToAuthenticatorProtocol> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::webauth::test::mojom::ClientToAuthenticatorProtocol, ::webauth::test::mojom::ClientToAuthenticatorProtocol> {
  static ::webauth::test::mojom::ClientToAuthenticatorProtocol ToMojom(::webauth::test::mojom::ClientToAuthenticatorProtocol input) { return input; }
  static bool FromMojom(::webauth::test::mojom::ClientToAuthenticatorProtocol input, ::webauth::test::mojom::ClientToAuthenticatorProtocol* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::webauth::test::mojom::ClientToAuthenticatorProtocol, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::webauth::test::mojom::ClientToAuthenticatorProtocol, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::webauth::test::mojom::ClientToAuthenticatorProtocol>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::webauth::test::mojom::VirtualAuthenticatorOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::webauth::test::mojom::VirtualAuthenticatorOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::webauth::test::mojom::internal::VirtualAuthenticatorOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::webauth::test::mojom::ClientToAuthenticatorProtocol>(
        CallWithContext(Traits::protocol, input, custom_context), &(*output)->protocol);
    mojo::internal::Serialize<::webauth::mojom::AuthenticatorTransport>(
        CallWithContext(Traits::transport, input, custom_context), &(*output)->transport);
    mojo::internal::Serialize<::webauth::mojom::AuthenticatorAttachment>(
        CallWithContext(Traits::attachment, input, custom_context), &(*output)->attachment);
    (*output)->has_resident_key = CallWithContext(Traits::has_resident_key, input, custom_context);
    (*output)->has_user_verification = CallWithContext(Traits::has_user_verification, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::webauth::test::mojom::internal::VirtualAuthenticatorOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::webauth::test::mojom::VirtualAuthenticatorOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::webauth::test::mojom::RegisteredKeyDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::webauth::test::mojom::RegisteredKeyDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::webauth::test::mojom::internal::RegisteredKey_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::key_handle, input, custom_context)) in_key_handle = CallWithContext(Traits::key_handle, input, custom_context);
    typename decltype((*output)->key_handle)::BaseType::BufferWriter
        key_handle_writer;
    const mojo::internal::ContainerValidateParams key_handle_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_key_handle, buffer, &key_handle_writer, &key_handle_validate_params,
        context);
    (*output)->key_handle.Set(
        key_handle_writer.is_null() ? nullptr : key_handle_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->key_handle.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null key_handle in RegisteredKey struct");
    decltype(CallWithContext(Traits::application_parameter, input, custom_context)) in_application_parameter = CallWithContext(Traits::application_parameter, input, custom_context);
    typename decltype((*output)->application_parameter)::BaseType::BufferWriter
        application_parameter_writer;
    const mojo::internal::ContainerValidateParams application_parameter_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_application_parameter, buffer, &application_parameter_writer, &application_parameter_validate_params,
        context);
    (*output)->application_parameter.Set(
        application_parameter_writer.is_null() ? nullptr : application_parameter_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->application_parameter.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null application_parameter in RegisteredKey struct");
    decltype(CallWithContext(Traits::private_key, input, custom_context)) in_private_key = CallWithContext(Traits::private_key, input, custom_context);
    typename decltype((*output)->private_key)::BaseType::BufferWriter
        private_key_writer;
    const mojo::internal::ContainerValidateParams private_key_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_private_key, buffer, &private_key_writer, &private_key_validate_params,
        context);
    (*output)->private_key.Set(
        private_key_writer.is_null() ? nullptr : private_key_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->private_key.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null private_key in RegisteredKey struct");
    (*output)->counter = CallWithContext(Traits::counter, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::webauth::test::mojom::internal::RegisteredKey_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::webauth::test::mojom::RegisteredKeyDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace webauth {
namespace test {
namespace mojom {



inline void RegisteredKeyDataView::GetKeyHandleDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key_handle.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void RegisteredKeyDataView::GetApplicationParameterDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->application_parameter.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void RegisteredKeyDataView::GetPrivateKeyDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->private_key.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}




inline void VirtualAuthenticator_GetUniqueId_ResponseParamsDataView::GetIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void VirtualAuthenticator_AddRegistration_ParamsDataView::GetKeyDataView(
    RegisteredKeyDataView* output) {
  auto pointer = data_->key.Get();
  *output = RegisteredKeyDataView(pointer, context_);
}






inline void VirtualAuthenticator_GetRegistrations_ResponseParamsDataView::GetKeysDataView(
    mojo::ArrayDataView<RegisteredKeyDataView>* output) {
  auto pointer = data_->keys.Get();
  *output = mojo::ArrayDataView<RegisteredKeyDataView>(pointer, context_);
}














inline void VirtualAuthenticatorManager_CreateAuthenticator_ParamsDataView::GetOptionsDataView(
    VirtualAuthenticatorOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = VirtualAuthenticatorOptionsDataView(pointer, context_);
}






inline void VirtualAuthenticatorManager_GetAuthenticators_ResponseParamsDataView::GetAuthenticatorsDataView(
    mojo::ArrayDataView<VirtualAuthenticatorPtrDataView>* output) {
  auto pointer = data_->authenticators.Get();
  *output = mojo::ArrayDataView<VirtualAuthenticatorPtrDataView>(pointer, context_);
}


inline void VirtualAuthenticatorManager_RemoveAuthenticator_ParamsDataView::GetIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->id.Get();
  *output = mojo::StringDataView(pointer, context_);
}









}  // namespace mojom
}  // namespace test
}  // namespace webauth

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBAUTH_VIRTUAL_AUTHENTICATOR_MOJOM_SHARED_H_
