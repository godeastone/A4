// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef NET_INTERFACES_HOST_RESOLVER_SERVICE_MOJOM_BLINK_H_
#define NET_INTERFACES_HOST_RESOLVER_SERVICE_MOJOM_BLINK_H_

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
#include "net/interfaces/host_resolver_service.mojom-shared.h"
#include "net/interfaces/address_family.mojom-blink.h"
#include "net/interfaces/address_list.mojom-blink.h"

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
class HostResolverRequestClient;
using HostResolverRequestClientPtr = mojo::InterfacePtr<HostResolverRequestClient>;
using RevocableHostResolverRequestClientPtr = ::blink::RevocableInterfacePtr<HostResolverRequestClient>;
using HostResolverRequestClientPtrInfo = mojo::InterfacePtrInfo<HostResolverRequestClient>;
using ThreadSafeHostResolverRequestClientPtr =
    mojo::ThreadSafeInterfacePtr<HostResolverRequestClient>;
using HostResolverRequestClientRequest = mojo::InterfaceRequest<HostResolverRequestClient>;
using HostResolverRequestClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<HostResolverRequestClient>;
using ThreadSafeHostResolverRequestClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<HostResolverRequestClient>;
using HostResolverRequestClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<HostResolverRequestClient>;
using HostResolverRequestClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<HostResolverRequestClient>;

class HostResolverRequestInfo;
using HostResolverRequestInfoPtr = mojo::InlinedStructPtr<HostResolverRequestInfo>;


class HostResolverRequestClientProxy;

template <typename ImplRefTraits>
class HostResolverRequestClientStub;

class HostResolverRequestClientRequestValidator;

class  HostResolverRequestClient
    : public HostResolverRequestClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = HostResolverRequestClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = HostResolverRequestClientStub<ImplRefTraits>;

  using RequestValidator_ = HostResolverRequestClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kReportResultMinVersion = 0,
  };
  virtual ~HostResolverRequestClient() {}

  virtual void ReportResult(int32_t error, ::net::interfaces::blink::AddressListPtr result) = 0;
};
class  HostResolverRequestClientInterceptorForTesting : public HostResolverRequestClient {
  virtual HostResolverRequestClient* GetForwardingInterface() = 0;
  void ReportResult(int32_t error, ::net::interfaces::blink::AddressListPtr result) override;
};
class  HostResolverRequestClientAsyncWaiter {
 public:
  explicit HostResolverRequestClientAsyncWaiter(HostResolverRequestClient* proxy);
  ~HostResolverRequestClientAsyncWaiter();

 private:
  HostResolverRequestClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(HostResolverRequestClientAsyncWaiter);
};

class  HostResolverRequestClientProxy
    : public HostResolverRequestClient {
 public:
  explicit HostResolverRequestClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void ReportResult(int32_t error, ::net::interfaces::blink::AddressListPtr result) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  HostResolverRequestClientStubDispatch {
 public:
  static bool Accept(HostResolverRequestClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      HostResolverRequestClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<HostResolverRequestClient>>
class HostResolverRequestClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  HostResolverRequestClientStub() {}
  ~HostResolverRequestClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return HostResolverRequestClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return HostResolverRequestClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  HostResolverRequestClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};


class  HostResolverRequestInfo {
 public:
  using DataView = HostResolverRequestInfoDataView;
  using Data_ = internal::HostResolverRequestInfo_Data;

  template <typename... Args>
  static HostResolverRequestInfoPtr New(Args&&... args) {
    return HostResolverRequestInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static HostResolverRequestInfoPtr From(const U& u) {
    return mojo::TypeConverter<HostResolverRequestInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, HostResolverRequestInfo>::Convert(*this);
  }


  HostResolverRequestInfo();

  HostResolverRequestInfo(
      const WTF::String& host,
      uint16_t port,
      ::net::interfaces::blink::AddressFamily address_family,
      bool is_my_ip_address);

  ~HostResolverRequestInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = HostResolverRequestInfoPtr>
  HostResolverRequestInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, HostResolverRequestInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        HostResolverRequestInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        HostResolverRequestInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::HostResolverRequestInfo_UnserializedMessageContext<
            UserType, HostResolverRequestInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<HostResolverRequestInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return HostResolverRequestInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::HostResolverRequestInfo_UnserializedMessageContext<
            UserType, HostResolverRequestInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<HostResolverRequestInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  WTF::String host;
  uint16_t port;
  ::net::interfaces::blink::AddressFamily address_family;
  bool is_my_ip_address;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
HostResolverRequestInfoPtr HostResolverRequestInfo::Clone() const {
  return New(
      mojo::Clone(host),
      mojo::Clone(port),
      mojo::Clone(address_family),
      mojo::Clone(is_my_ip_address)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, HostResolverRequestInfo>::value>::type*>
bool HostResolverRequestInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->host, other_struct.host))
    return false;
  if (!mojo::Equals(this->port, other_struct.port))
    return false;
  if (!mojo::Equals(this->address_family, other_struct.address_family))
    return false;
  if (!mojo::Equals(this->is_my_ip_address, other_struct.is_my_ip_address))
    return false;
  return true;
}


}  // namespace blink
}  // namespace interfaces
}  // namespace net

namespace mojo {


template <>
struct  StructTraits<::net::interfaces::blink::HostResolverRequestInfo::DataView,
                                         ::net::interfaces::blink::HostResolverRequestInfoPtr> {
  static bool IsNull(const ::net::interfaces::blink::HostResolverRequestInfoPtr& input) { return !input; }
  static void SetToNull(::net::interfaces::blink::HostResolverRequestInfoPtr* output) { output->reset(); }

  static const decltype(::net::interfaces::blink::HostResolverRequestInfo::host)& host(
      const ::net::interfaces::blink::HostResolverRequestInfoPtr& input) {
    return input->host;
  }

  static decltype(::net::interfaces::blink::HostResolverRequestInfo::port) port(
      const ::net::interfaces::blink::HostResolverRequestInfoPtr& input) {
    return input->port;
  }

  static decltype(::net::interfaces::blink::HostResolverRequestInfo::address_family) address_family(
      const ::net::interfaces::blink::HostResolverRequestInfoPtr& input) {
    return input->address_family;
  }

  static decltype(::net::interfaces::blink::HostResolverRequestInfo::is_my_ip_address) is_my_ip_address(
      const ::net::interfaces::blink::HostResolverRequestInfoPtr& input) {
    return input->is_my_ip_address;
  }

  static bool Read(::net::interfaces::blink::HostResolverRequestInfo::DataView input, ::net::interfaces::blink::HostResolverRequestInfoPtr* output);
};

}  // namespace mojo

#endif  // NET_INTERFACES_HOST_RESOLVER_SERVICE_MOJOM_BLINK_H_