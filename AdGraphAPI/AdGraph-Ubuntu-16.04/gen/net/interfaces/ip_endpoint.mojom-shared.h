// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef NET_INTERFACES_IP_ENDPOINT_MOJOM_SHARED_H_
#define NET_INTERFACES_IP_ENDPOINT_MOJOM_SHARED_H_

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
#include "net/interfaces/ip_endpoint.mojom-shared-internal.h"
#include "net/interfaces/ip_address.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace net {
namespace interfaces {
class IPEndPointDataView;



}  // namespace interfaces
}  // namespace net

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::net::interfaces::IPEndPointDataView> {
  using Data = ::net::interfaces::internal::IPEndPoint_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace net {
namespace interfaces {
class IPEndPointDataView {
 public:
  IPEndPointDataView() {}

  IPEndPointDataView(
      internal::IPEndPoint_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAddressDataView(
      ::net::interfaces::IPAddressDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAddress(UserType* output) {
    auto* pointer = data_->address.Get();
    return mojo::internal::Deserialize<::net::interfaces::IPAddressDataView>(
        pointer, output, context_);
  }
  uint16_t port() const {
    return data_->port;
  }
 private:
  internal::IPEndPoint_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace interfaces
}  // namespace net

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::net::interfaces::IPEndPointDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::net::interfaces::IPEndPointDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::net::interfaces::internal::IPEndPoint_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::address, input, custom_context)) in_address = CallWithContext(Traits::address, input, custom_context);
    typename decltype((*output)->address)::BaseType::BufferWriter
        address_writer;
    mojo::internal::Serialize<::net::interfaces::IPAddressDataView>(
        in_address, buffer, &address_writer, context);
    (*output)->address.Set(
        address_writer.is_null() ? nullptr : address_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->address.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null address in IPEndPoint struct");
    (*output)->port = CallWithContext(Traits::port, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::net::interfaces::internal::IPEndPoint_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::net::interfaces::IPEndPointDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace net {
namespace interfaces {

inline void IPEndPointDataView::GetAddressDataView(
    ::net::interfaces::IPAddressDataView* output) {
  auto pointer = data_->address.Get();
  *output = ::net::interfaces::IPAddressDataView(pointer, context_);
}



}  // namespace interfaces
}  // namespace net

#endif  // NET_INTERFACES_IP_ENDPOINT_MOJOM_SHARED_H_
