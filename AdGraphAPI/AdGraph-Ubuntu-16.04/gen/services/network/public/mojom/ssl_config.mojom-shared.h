// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_SSL_CONFIG_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_SSL_CONFIG_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/ssl_config.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace network {
namespace mojom {
class SSLConfigDataView;



}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::network::mojom::SSLConfigDataView> {
  using Data = ::network::mojom::internal::SSLConfig_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {

enum class SSLVersion : int32_t {
  kTLS1,
  kTLS11,
  kTLS12,
  kTLS13,
  kMinValue = 0,
  kMaxValue = 3,
};

inline std::ostream& operator<<(std::ostream& os, SSLVersion value) {
  switch(value) {
    case SSLVersion::kTLS1:
      return os << "SSLVersion::kTLS1";
    case SSLVersion::kTLS11:
      return os << "SSLVersion::kTLS11";
    case SSLVersion::kTLS12:
      return os << "SSLVersion::kTLS12";
    case SSLVersion::kTLS13:
      return os << "SSLVersion::kTLS13";
    default:
      return os << "Unknown SSLVersion value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(SSLVersion value) {
  return internal::SSLVersion_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class TLS13Variant : int32_t {
  kDraft23,
  kDraft28,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, TLS13Variant value) {
  switch(value) {
    case TLS13Variant::kDraft23:
      return os << "TLS13Variant::kDraft23";
    case TLS13Variant::kDraft28:
      return os << "TLS13Variant::kDraft28";
    default:
      return os << "Unknown TLS13Variant value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(TLS13Variant value) {
  return internal::TLS13Variant_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class SSLConfigClientInterfaceBase {};

using SSLConfigClientPtrDataView =
    mojo::InterfacePtrDataView<SSLConfigClientInterfaceBase>;
using SSLConfigClientRequestDataView =
    mojo::InterfaceRequestDataView<SSLConfigClientInterfaceBase>;
using SSLConfigClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SSLConfigClientInterfaceBase>;
using SSLConfigClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SSLConfigClientInterfaceBase>;
class SSLConfigDataView {
 public:
  SSLConfigDataView() {}

  SSLConfigDataView(
      internal::SSLConfig_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool rev_checking_enabled() const {
    return data_->rev_checking_enabled;
  }
  bool rev_checking_required_local_anchors() const {
    return data_->rev_checking_required_local_anchors;
  }
  bool sha1_local_anchors_enabled() const {
    return data_->sha1_local_anchors_enabled;
  }
  bool symantec_enforcement_disabled() const {
    return data_->symantec_enforcement_disabled;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVersionMin(UserType* output) const {
    auto data_value = data_->version_min;
    return mojo::internal::Deserialize<::network::mojom::SSLVersion>(
        data_value, output);
  }

  SSLVersion version_min() const {
    return static_cast<SSLVersion>(data_->version_min);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVersionMax(UserType* output) const {
    auto data_value = data_->version_max;
    return mojo::internal::Deserialize<::network::mojom::SSLVersion>(
        data_value, output);
  }

  SSLVersion version_max() const {
    return static_cast<SSLVersion>(data_->version_max);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTls13Variant(UserType* output) const {
    auto data_value = data_->tls13_variant;
    return mojo::internal::Deserialize<::network::mojom::TLS13Variant>(
        data_value, output);
  }

  TLS13Variant tls13_variant() const {
    return static_cast<TLS13Variant>(data_->tls13_variant);
  }
  inline void GetDisabledCipherSuitesDataView(
      mojo::ArrayDataView<uint16_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisabledCipherSuites(UserType* output) {
    auto* pointer = data_->disabled_cipher_suites.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint16_t>>(
        pointer, output, context_);
  }
 private:
  internal::SSLConfig_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SSLConfigClient_OnSSLConfigUpdated_ParamsDataView {
 public:
  SSLConfigClient_OnSSLConfigUpdated_ParamsDataView() {}

  SSLConfigClient_OnSSLConfigUpdated_ParamsDataView(
      internal::SSLConfigClient_OnSSLConfigUpdated_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSslConfigDataView(
      SSLConfigDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSslConfig(UserType* output) {
    auto* pointer = data_->ssl_config.Get();
    return mojo::internal::Deserialize<::network::mojom::SSLConfigDataView>(
        pointer, output, context_);
  }
 private:
  internal::SSLConfigClient_OnSSLConfigUpdated_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

template <>
struct hash<::network::mojom::SSLVersion>
    : public mojo::internal::EnumHashImpl<::network::mojom::SSLVersion> {};

template <>
struct hash<::network::mojom::TLS13Variant>
    : public mojo::internal::EnumHashImpl<::network::mojom::TLS13Variant> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::network::mojom::SSLVersion, ::network::mojom::SSLVersion> {
  static ::network::mojom::SSLVersion ToMojom(::network::mojom::SSLVersion input) { return input; }
  static bool FromMojom(::network::mojom::SSLVersion input, ::network::mojom::SSLVersion* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::SSLVersion, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::SSLVersion, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::SSLVersion>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::network::mojom::TLS13Variant, ::network::mojom::TLS13Variant> {
  static ::network::mojom::TLS13Variant ToMojom(::network::mojom::TLS13Variant input) { return input; }
  static bool FromMojom(::network::mojom::TLS13Variant input, ::network::mojom::TLS13Variant* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::TLS13Variant, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::TLS13Variant, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::TLS13Variant>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::SSLConfigDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::SSLConfigDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::SSLConfig_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->rev_checking_enabled = CallWithContext(Traits::rev_checking_enabled, input, custom_context);
    (*output)->rev_checking_required_local_anchors = CallWithContext(Traits::rev_checking_required_local_anchors, input, custom_context);
    (*output)->sha1_local_anchors_enabled = CallWithContext(Traits::sha1_local_anchors_enabled, input, custom_context);
    (*output)->symantec_enforcement_disabled = CallWithContext(Traits::symantec_enforcement_disabled, input, custom_context);
    mojo::internal::Serialize<::network::mojom::SSLVersion>(
        CallWithContext(Traits::version_min, input, custom_context), &(*output)->version_min);
    mojo::internal::Serialize<::network::mojom::SSLVersion>(
        CallWithContext(Traits::version_max, input, custom_context), &(*output)->version_max);
    mojo::internal::Serialize<::network::mojom::TLS13Variant>(
        CallWithContext(Traits::tls13_variant, input, custom_context), &(*output)->tls13_variant);
    decltype(CallWithContext(Traits::disabled_cipher_suites, input, custom_context)) in_disabled_cipher_suites = CallWithContext(Traits::disabled_cipher_suites, input, custom_context);
    typename decltype((*output)->disabled_cipher_suites)::BaseType::BufferWriter
        disabled_cipher_suites_writer;
    const mojo::internal::ContainerValidateParams disabled_cipher_suites_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint16_t>>(
        in_disabled_cipher_suites, buffer, &disabled_cipher_suites_writer, &disabled_cipher_suites_validate_params,
        context);
    (*output)->disabled_cipher_suites.Set(
        disabled_cipher_suites_writer.is_null() ? nullptr : disabled_cipher_suites_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->disabled_cipher_suites.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null disabled_cipher_suites in SSLConfig struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::network::mojom::internal::SSLConfig_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::SSLConfigDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {

inline void SSLConfigDataView::GetDisabledCipherSuitesDataView(
    mojo::ArrayDataView<uint16_t>* output) {
  auto pointer = data_->disabled_cipher_suites.Get();
  *output = mojo::ArrayDataView<uint16_t>(pointer, context_);
}


inline void SSLConfigClient_OnSSLConfigUpdated_ParamsDataView::GetSslConfigDataView(
    SSLConfigDataView* output) {
  auto pointer = data_->ssl_config.Get();
  *output = SSLConfigDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_SSL_CONFIG_MOJOM_SHARED_H_
