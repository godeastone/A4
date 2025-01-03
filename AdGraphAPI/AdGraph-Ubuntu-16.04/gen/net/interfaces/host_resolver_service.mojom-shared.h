// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef NET_INTERFACES_HOST_RESOLVER_SERVICE_MOJOM_SHARED_H_
#define NET_INTERFACES_HOST_RESOLVER_SERVICE_MOJOM_SHARED_H_

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
#include "net/interfaces/host_resolver_service.mojom-shared-internal.h"
#include "net/interfaces/address_family.mojom-shared.h"
#include "net/interfaces/address_list.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace net {
namespace interfaces {
class HostResolverRequestInfoDataView;



}  // namespace interfaces
}  // namespace net

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::net::interfaces::HostResolverRequestInfoDataView> {
  using Data = ::net::interfaces::internal::HostResolverRequestInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace net {
namespace interfaces {
// Interface base classes. They are used for type safety check.
class HostResolverRequestClientInterfaceBase {};

using HostResolverRequestClientPtrDataView =
    mojo::InterfacePtrDataView<HostResolverRequestClientInterfaceBase>;
using HostResolverRequestClientRequestDataView =
    mojo::InterfaceRequestDataView<HostResolverRequestClientInterfaceBase>;
using HostResolverRequestClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<HostResolverRequestClientInterfaceBase>;
using HostResolverRequestClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<HostResolverRequestClientInterfaceBase>;
class HostResolverRequestInfoDataView {
 public:
  HostResolverRequestInfoDataView() {}

  HostResolverRequestInfoDataView(
      internal::HostResolverRequestInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHostDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHost(UserType* output) {
    auto* pointer = data_->host.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  uint16_t port() const {
    return data_->port;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAddressFamily(UserType* output) const {
    auto data_value = data_->address_family;
    return mojo::internal::Deserialize<::net::interfaces::AddressFamily>(
        data_value, output);
  }

  ::net::interfaces::AddressFamily address_family() const {
    return static_cast<::net::interfaces::AddressFamily>(data_->address_family);
  }
  bool is_my_ip_address() const {
    return data_->is_my_ip_address;
  }
 private:
  internal::HostResolverRequestInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HostResolverRequestClient_ReportResult_ParamsDataView {
 public:
  HostResolverRequestClient_ReportResult_ParamsDataView() {}

  HostResolverRequestClient_ReportResult_ParamsDataView(
      internal::HostResolverRequestClient_ReportResult_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t error() const {
    return data_->error;
  }
  inline void GetResultDataView(
      ::net::interfaces::AddressListDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::net::interfaces::AddressListDataView>(
        pointer, output, context_);
  }
 private:
  internal::HostResolverRequestClient_ReportResult_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace interfaces
}  // namespace net

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::net::interfaces::HostResolverRequestInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::net::interfaces::HostResolverRequestInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::net::interfaces::internal::HostResolverRequestInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::host, input, custom_context)) in_host = CallWithContext(Traits::host, input, custom_context);
    typename decltype((*output)->host)::BaseType::BufferWriter
        host_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_host, buffer, &host_writer, context);
    (*output)->host.Set(
        host_writer.is_null() ? nullptr : host_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->host.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null host in HostResolverRequestInfo struct");
    (*output)->port = CallWithContext(Traits::port, input, custom_context);
    mojo::internal::Serialize<::net::interfaces::AddressFamily>(
        CallWithContext(Traits::address_family, input, custom_context), &(*output)->address_family);
    (*output)->is_my_ip_address = CallWithContext(Traits::is_my_ip_address, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::net::interfaces::internal::HostResolverRequestInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::net::interfaces::HostResolverRequestInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace net {
namespace interfaces {

inline void HostResolverRequestInfoDataView::GetHostDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->host.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void HostResolverRequestClient_ReportResult_ParamsDataView::GetResultDataView(
    ::net::interfaces::AddressListDataView* output) {
  auto pointer = data_->result.Get();
  *output = ::net::interfaces::AddressListDataView(pointer, context_);
}



}  // namespace interfaces
}  // namespace net

#endif  // NET_INTERFACES_HOST_RESOLVER_SERVICE_MOJOM_SHARED_H_
