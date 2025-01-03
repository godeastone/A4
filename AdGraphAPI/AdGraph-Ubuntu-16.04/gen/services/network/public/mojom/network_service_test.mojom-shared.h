// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_TEST_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_TEST_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/network_service_test.mojom-shared-internal.h"
#include "services/network/public/mojom/network_change_manager.mojom-shared.h"
#include "services/network/public/mojom/network_param.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace network {
namespace mojom {
class RuleDataView;



}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::network::mojom::RuleDataView> {
  using Data = ::network::mojom::internal::Rule_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {

enum class NetworkServiceTest_ShouldRequireCT : int32_t {
  RESET = 0,
  REQUIRE = 1,
  DONT_REQUIRE = 2,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, NetworkServiceTest_ShouldRequireCT value) {
  switch(value) {
    case NetworkServiceTest_ShouldRequireCT::RESET:
      return os << "NetworkServiceTest_ShouldRequireCT::RESET";
    case NetworkServiceTest_ShouldRequireCT::REQUIRE:
      return os << "NetworkServiceTest_ShouldRequireCT::REQUIRE";
    case NetworkServiceTest_ShouldRequireCT::DONT_REQUIRE:
      return os << "NetworkServiceTest_ShouldRequireCT::DONT_REQUIRE";
    default:
      return os << "Unknown NetworkServiceTest_ShouldRequireCT value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(NetworkServiceTest_ShouldRequireCT value) {
  return internal::NetworkServiceTest_ShouldRequireCT_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class NetworkServiceTestInterfaceBase {};

using NetworkServiceTestPtrDataView =
    mojo::InterfacePtrDataView<NetworkServiceTestInterfaceBase>;
using NetworkServiceTestRequestDataView =
    mojo::InterfaceRequestDataView<NetworkServiceTestInterfaceBase>;
using NetworkServiceTestAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<NetworkServiceTestInterfaceBase>;
using NetworkServiceTestAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<NetworkServiceTestInterfaceBase>;
class RuleDataView {
 public:
  RuleDataView() {}

  RuleDataView(
      internal::Rule_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHostPatternDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHostPattern(UserType* output) {
    auto* pointer = data_->host_pattern.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetReplacementDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReplacement(UserType* output) {
    auto* pointer = data_->replacement.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Rule_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkServiceTest_AddRules_ParamsDataView {
 public:
  NetworkServiceTest_AddRules_ParamsDataView() {}

  NetworkServiceTest_AddRules_ParamsDataView(
      internal::NetworkServiceTest_AddRules_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRulesDataView(
      mojo::ArrayDataView<RuleDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRules(UserType* output) {
    auto* pointer = data_->rules.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::RuleDataView>>(
        pointer, output, context_);
  }
 private:
  internal::NetworkServiceTest_AddRules_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkServiceTest_AddRules_ResponseParamsDataView {
 public:
  NetworkServiceTest_AddRules_ResponseParamsDataView() {}

  NetworkServiceTest_AddRules_ResponseParamsDataView(
      internal::NetworkServiceTest_AddRules_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkServiceTest_AddRules_ResponseParams_Data* data_ = nullptr;
};

class NetworkServiceTest_SimulateNetworkChange_ParamsDataView {
 public:
  NetworkServiceTest_SimulateNetworkChange_ParamsDataView() {}

  NetworkServiceTest_SimulateNetworkChange_ParamsDataView(
      internal::NetworkServiceTest_SimulateNetworkChange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::network::mojom::ConnectionType>(
        data_value, output);
  }

  ::network::mojom::ConnectionType type() const {
    return static_cast<::network::mojom::ConnectionType>(data_->type);
  }
 private:
  internal::NetworkServiceTest_SimulateNetworkChange_Params_Data* data_ = nullptr;
};

class NetworkServiceTest_SimulateNetworkChange_ResponseParamsDataView {
 public:
  NetworkServiceTest_SimulateNetworkChange_ResponseParamsDataView() {}

  NetworkServiceTest_SimulateNetworkChange_ResponseParamsDataView(
      internal::NetworkServiceTest_SimulateNetworkChange_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkServiceTest_SimulateNetworkChange_ResponseParams_Data* data_ = nullptr;
};

class NetworkServiceTest_SimulateCrash_ParamsDataView {
 public:
  NetworkServiceTest_SimulateCrash_ParamsDataView() {}

  NetworkServiceTest_SimulateCrash_ParamsDataView(
      internal::NetworkServiceTest_SimulateCrash_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkServiceTest_SimulateCrash_Params_Data* data_ = nullptr;
};

class NetworkServiceTest_MockCertVerifierSetDefaultResult_ParamsDataView {
 public:
  NetworkServiceTest_MockCertVerifierSetDefaultResult_ParamsDataView() {}

  NetworkServiceTest_MockCertVerifierSetDefaultResult_ParamsDataView(
      internal::NetworkServiceTest_MockCertVerifierSetDefaultResult_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t default_result() const {
    return data_->default_result;
  }
 private:
  internal::NetworkServiceTest_MockCertVerifierSetDefaultResult_Params_Data* data_ = nullptr;
};

class NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParamsDataView {
 public:
  NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParamsDataView() {}

  NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParamsDataView(
      internal::NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams_Data* data_ = nullptr;
};

class NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ParamsDataView {
 public:
  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ParamsDataView() {}

  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ParamsDataView(
      internal::NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCertDataView(
      ::network::mojom::X509CertificateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCert(UserType* output) {
    auto* pointer = data_->cert.Get();
    return mojo::internal::Deserialize<::network::mojom::X509CertificateDataView>(
        pointer, output, context_);
  }
  inline void GetHostPatternDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHostPattern(UserType* output) {
    auto* pointer = data_->host_pattern.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetVerifyResultDataView(
      ::network::mojom::CertVerifyResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVerifyResult(UserType* output) {
    auto* pointer = data_->verify_result.Get();
    return mojo::internal::Deserialize<::network::mojom::CertVerifyResultDataView>(
        pointer, output, context_);
  }
  int32_t rv() const {
    return data_->rv;
  }
 private:
  internal::NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParamsDataView {
 public:
  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParamsDataView() {}

  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParamsDataView(
      internal::NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams_Data* data_ = nullptr;
};

class NetworkServiceTest_SetShouldRequireCT_ParamsDataView {
 public:
  NetworkServiceTest_SetShouldRequireCT_ParamsDataView() {}

  NetworkServiceTest_SetShouldRequireCT_ParamsDataView(
      internal::NetworkServiceTest_SetShouldRequireCT_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequired(UserType* output) const {
    auto data_value = data_->required;
    return mojo::internal::Deserialize<::network::mojom::NetworkServiceTest_ShouldRequireCT>(
        data_value, output);
  }

  NetworkServiceTest_ShouldRequireCT required() const {
    return static_cast<NetworkServiceTest_ShouldRequireCT>(data_->required);
  }
 private:
  internal::NetworkServiceTest_SetShouldRequireCT_Params_Data* data_ = nullptr;
};

class NetworkServiceTest_SetShouldRequireCT_ResponseParamsDataView {
 public:
  NetworkServiceTest_SetShouldRequireCT_ResponseParamsDataView() {}

  NetworkServiceTest_SetShouldRequireCT_ResponseParamsDataView(
      internal::NetworkServiceTest_SetShouldRequireCT_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkServiceTest_SetShouldRequireCT_ResponseParams_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

template <>
struct hash<::network::mojom::NetworkServiceTest_ShouldRequireCT>
    : public mojo::internal::EnumHashImpl<::network::mojom::NetworkServiceTest_ShouldRequireCT> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::network::mojom::NetworkServiceTest_ShouldRequireCT, ::network::mojom::NetworkServiceTest_ShouldRequireCT> {
  static ::network::mojom::NetworkServiceTest_ShouldRequireCT ToMojom(::network::mojom::NetworkServiceTest_ShouldRequireCT input) { return input; }
  static bool FromMojom(::network::mojom::NetworkServiceTest_ShouldRequireCT input, ::network::mojom::NetworkServiceTest_ShouldRequireCT* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::NetworkServiceTest_ShouldRequireCT, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::NetworkServiceTest_ShouldRequireCT, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::NetworkServiceTest_ShouldRequireCT>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::RuleDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::RuleDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::Rule_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::host_pattern, input, custom_context)) in_host_pattern = CallWithContext(Traits::host_pattern, input, custom_context);
    typename decltype((*output)->host_pattern)::BaseType::BufferWriter
        host_pattern_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_host_pattern, buffer, &host_pattern_writer, context);
    (*output)->host_pattern.Set(
        host_pattern_writer.is_null() ? nullptr : host_pattern_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->host_pattern.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null host_pattern in Rule struct");
    decltype(CallWithContext(Traits::replacement, input, custom_context)) in_replacement = CallWithContext(Traits::replacement, input, custom_context);
    typename decltype((*output)->replacement)::BaseType::BufferWriter
        replacement_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_replacement, buffer, &replacement_writer, context);
    (*output)->replacement.Set(
        replacement_writer.is_null() ? nullptr : replacement_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->replacement.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null replacement in Rule struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::network::mojom::internal::Rule_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::RuleDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {

inline void RuleDataView::GetHostPatternDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->host_pattern.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void RuleDataView::GetReplacementDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->replacement.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void NetworkServiceTest_AddRules_ParamsDataView::GetRulesDataView(
    mojo::ArrayDataView<RuleDataView>* output) {
  auto pointer = data_->rules.Get();
  *output = mojo::ArrayDataView<RuleDataView>(pointer, context_);
}














inline void NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ParamsDataView::GetCertDataView(
    ::network::mojom::X509CertificateDataView* output) {
  auto pointer = data_->cert.Get();
  *output = ::network::mojom::X509CertificateDataView(pointer, context_);
}
inline void NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ParamsDataView::GetHostPatternDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->host_pattern.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ParamsDataView::GetVerifyResultDataView(
    ::network::mojom::CertVerifyResultDataView* output) {
  auto pointer = data_->verify_result.Get();
  *output = ::network::mojom::CertVerifyResultDataView(pointer, context_);
}









}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_TEST_MOJOM_SHARED_H_
