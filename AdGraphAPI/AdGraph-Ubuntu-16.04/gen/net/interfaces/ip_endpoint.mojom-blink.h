// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef NET_INTERFACES_IP_ENDPOINT_MOJOM_BLINK_H_
#define NET_INTERFACES_IP_ENDPOINT_MOJOM_BLINK_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "net/interfaces/ip_endpoint.mojom-shared.h"
#include "net/interfaces/ip_address.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/mojo/revocable_interface_ptr.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"
#include "third_party/blink/renderer/platform/mojo/revocable_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace net {
namespace interfaces {
namespace blink {
class IPEndPoint;
using IPEndPointPtr = mojo::StructPtr<IPEndPoint>;






class  IPEndPoint {
 public:
  using DataView = IPEndPointDataView;
  using Data_ = internal::IPEndPoint_Data;

  template <typename... Args>
  static IPEndPointPtr New(Args&&... args) {
    return IPEndPointPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static IPEndPointPtr From(const U& u) {
    return mojo::TypeConverter<IPEndPointPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, IPEndPoint>::Convert(*this);
  }


  IPEndPoint();

  IPEndPoint(
      ::net::interfaces::blink::IPAddressPtr address,
      uint16_t port);

  ~IPEndPoint();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = IPEndPointPtr>
  IPEndPointPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, IPEndPoint>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        IPEndPoint::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        IPEndPoint::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::IPEndPoint_UnserializedMessageContext<
            UserType, IPEndPoint::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<IPEndPoint::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return IPEndPoint::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::IPEndPoint_UnserializedMessageContext<
            UserType, IPEndPoint::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<IPEndPoint::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  ::net::interfaces::blink::IPAddressPtr address;
  uint16_t port;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(IPEndPoint);
};

template <typename StructPtrType>
IPEndPointPtr IPEndPoint::Clone() const {
  return New(
      mojo::Clone(address),
      mojo::Clone(port)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, IPEndPoint>::value>::type*>
bool IPEndPoint::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->address, other_struct.address))
    return false;
  if (!mojo::Equals(this->port, other_struct.port))
    return false;
  return true;
}


}  // namespace blink
}  // namespace interfaces
}  // namespace net

namespace mojo {


template <>
struct  StructTraits<::net::interfaces::blink::IPEndPoint::DataView,
                                         ::net::interfaces::blink::IPEndPointPtr> {
  static bool IsNull(const ::net::interfaces::blink::IPEndPointPtr& input) { return !input; }
  static void SetToNull(::net::interfaces::blink::IPEndPointPtr* output) { output->reset(); }

  static const decltype(::net::interfaces::blink::IPEndPoint::address)& address(
      const ::net::interfaces::blink::IPEndPointPtr& input) {
    return input->address;
  }

  static decltype(::net::interfaces::blink::IPEndPoint::port) port(
      const ::net::interfaces::blink::IPEndPointPtr& input) {
    return input->port;
  }

  static bool Read(::net::interfaces::blink::IPEndPoint::DataView input, ::net::interfaces::blink::IPEndPointPtr* output);
};

}  // namespace mojo

#endif  // NET_INTERFACES_IP_ENDPOINT_MOJOM_BLINK_H_