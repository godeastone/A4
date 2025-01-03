// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef NET_INTERFACES_ADDRESS_LIST_MOJOM_SHARED_H_
#define NET_INTERFACES_ADDRESS_LIST_MOJOM_SHARED_H_

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
#include "net/interfaces/address_list.mojom-shared-internal.h"
#include "net/interfaces/ip_endpoint.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace net {
namespace interfaces {
class AddressListDataView;



}  // namespace interfaces
}  // namespace net

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::net::interfaces::AddressListDataView> {
  using Data = ::net::interfaces::internal::AddressList_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace net {
namespace interfaces {
class AddressListDataView {
 public:
  AddressListDataView() {}

  AddressListDataView(
      internal::AddressList_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAddressesDataView(
      mojo::ArrayDataView<::net::interfaces::IPEndPointDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAddresses(UserType* output) {
    auto* pointer = data_->addresses.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::net::interfaces::IPEndPointDataView>>(
        pointer, output, context_);
  }
 private:
  internal::AddressList_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace interfaces
}  // namespace net

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::net::interfaces::AddressListDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::net::interfaces::AddressListDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::net::interfaces::internal::AddressList_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::addresses, input, custom_context)) in_addresses = CallWithContext(Traits::addresses, input, custom_context);
    typename decltype((*output)->addresses)::BaseType::BufferWriter
        addresses_writer;
    const mojo::internal::ContainerValidateParams addresses_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::net::interfaces::IPEndPointDataView>>(
        in_addresses, buffer, &addresses_writer, &addresses_validate_params,
        context);
    (*output)->addresses.Set(
        addresses_writer.is_null() ? nullptr : addresses_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->addresses.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null addresses in AddressList struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::net::interfaces::internal::AddressList_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::net::interfaces::AddressListDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace net {
namespace interfaces {

inline void AddressListDataView::GetAddressesDataView(
    mojo::ArrayDataView<::net::interfaces::IPEndPointDataView>* output) {
  auto pointer = data_->addresses.Get();
  *output = mojo::ArrayDataView<::net::interfaces::IPEndPointDataView>(pointer, context_);
}



}  // namespace interfaces
}  // namespace net

#endif  // NET_INTERFACES_ADDRESS_LIST_MOJOM_SHARED_H_
