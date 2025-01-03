// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_SSL_CONFIG_MOJOM_BLINK_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_SSL_CONFIG_MOJOM_BLINK_H_

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
#include "services/network/public/mojom/ssl_config.mojom-shared.h"

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
#include "third_party/blink/public/platform/web_common.h"


namespace WTF {
struct network_mojom_internal_SSLVersion_DataHashFn {
  static unsigned GetHash(const ::network::mojom::SSLVersion& value) {
    using utype = std::underlying_type<::network::mojom::SSLVersion>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::network::mojom::SSLVersion& left, const ::network::mojom::SSLVersion& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::network::mojom::SSLVersion> {
  using Hash = network_mojom_internal_SSLVersion_DataHashFn;
};

template <>
struct HashTraits<::network::mojom::SSLVersion>
    : public GenericHashTraits<::network::mojom::SSLVersion> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::network::mojom::SSLVersion& value) {
    return value == static_cast<::network::mojom::SSLVersion>(-1000000);
  }
  static void ConstructDeletedValue(::network::mojom::SSLVersion& slot, bool) {
    slot = static_cast<::network::mojom::SSLVersion>(-1000001);
  }
  static bool IsDeletedValue(const ::network::mojom::SSLVersion& value) {
    return value == static_cast<::network::mojom::SSLVersion>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct network_mojom_internal_TLS13Variant_DataHashFn {
  static unsigned GetHash(const ::network::mojom::TLS13Variant& value) {
    using utype = std::underlying_type<::network::mojom::TLS13Variant>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::network::mojom::TLS13Variant& left, const ::network::mojom::TLS13Variant& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::network::mojom::TLS13Variant> {
  using Hash = network_mojom_internal_TLS13Variant_DataHashFn;
};

template <>
struct HashTraits<::network::mojom::TLS13Variant>
    : public GenericHashTraits<::network::mojom::TLS13Variant> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::network::mojom::TLS13Variant& value) {
    return value == static_cast<::network::mojom::TLS13Variant>(-1000000);
  }
  static void ConstructDeletedValue(::network::mojom::TLS13Variant& slot, bool) {
    slot = static_cast<::network::mojom::TLS13Variant>(-1000001);
  }
  static bool IsDeletedValue(const ::network::mojom::TLS13Variant& value) {
    return value == static_cast<::network::mojom::TLS13Variant>(-1000001);
  }
};
}  // namespace WTF


namespace network {
namespace mojom {
namespace blink {
using SSLVersion = SSLVersion;  // Alias for definition in the parent namespace.
using TLS13Variant = TLS13Variant;  // Alias for definition in the parent namespace.
class SSLConfigClient;
using SSLConfigClientPtr = mojo::InterfacePtr<SSLConfigClient>;
using RevocableSSLConfigClientPtr = ::blink::RevocableInterfacePtr<SSLConfigClient>;
using SSLConfigClientPtrInfo = mojo::InterfacePtrInfo<SSLConfigClient>;
using ThreadSafeSSLConfigClientPtr =
    mojo::ThreadSafeInterfacePtr<SSLConfigClient>;
using SSLConfigClientRequest = mojo::InterfaceRequest<SSLConfigClient>;
using SSLConfigClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<SSLConfigClient>;
using ThreadSafeSSLConfigClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SSLConfigClient>;
using SSLConfigClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SSLConfigClient>;
using SSLConfigClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SSLConfigClient>;

class SSLConfig;
using SSLConfigPtr = mojo::StructPtr<SSLConfig>;


class SSLConfigClientProxy;

template <typename ImplRefTraits>
class SSLConfigClientStub;

class SSLConfigClientRequestValidator;

class BLINK_PLATFORM_EXPORT SSLConfigClient
    : public SSLConfigClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = SSLConfigClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = SSLConfigClientStub<ImplRefTraits>;

  using RequestValidator_ = SSLConfigClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnSSLConfigUpdatedMinVersion = 0,
  };
  virtual ~SSLConfigClient() {}

  virtual void OnSSLConfigUpdated(SSLConfigPtr ssl_config) = 0;
};
class BLINK_PLATFORM_EXPORT SSLConfigClientInterceptorForTesting : public SSLConfigClient {
  virtual SSLConfigClient* GetForwardingInterface() = 0;
  void OnSSLConfigUpdated(SSLConfigPtr ssl_config) override;
};
class BLINK_PLATFORM_EXPORT SSLConfigClientAsyncWaiter {
 public:
  explicit SSLConfigClientAsyncWaiter(SSLConfigClient* proxy);
  ~SSLConfigClientAsyncWaiter();

 private:
  SSLConfigClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SSLConfigClientAsyncWaiter);
};

class BLINK_PLATFORM_EXPORT SSLConfigClientProxy
    : public SSLConfigClient {
 public:
  explicit SSLConfigClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnSSLConfigUpdated(SSLConfigPtr ssl_config) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT SSLConfigClientStubDispatch {
 public:
  static bool Accept(SSLConfigClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SSLConfigClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SSLConfigClient>>
class SSLConfigClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SSLConfigClientStub() {}
  ~SSLConfigClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SSLConfigClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SSLConfigClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT SSLConfigClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class BLINK_PLATFORM_EXPORT SSLConfig {
 public:
  using DataView = SSLConfigDataView;
  using Data_ = internal::SSLConfig_Data;

  template <typename... Args>
  static SSLConfigPtr New(Args&&... args) {
    return SSLConfigPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SSLConfigPtr From(const U& u) {
    return mojo::TypeConverter<SSLConfigPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SSLConfig>::Convert(*this);
  }


  SSLConfig();

  SSLConfig(
      bool rev_checking_enabled,
      bool rev_checking_required_local_anchors,
      bool sha1_local_anchors_enabled,
      bool symantec_enforcement_disabled,
      SSLVersion version_min,
      SSLVersion version_max,
      TLS13Variant tls13_variant,
      const WTF::Vector<uint16_t>& disabled_cipher_suites);

  ~SSLConfig();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SSLConfigPtr>
  SSLConfigPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SSLConfig>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SSLConfig::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SSLConfig::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SSLConfig_UnserializedMessageContext<
            UserType, SSLConfig::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SSLConfig::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return SSLConfig::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SSLConfig_UnserializedMessageContext<
            UserType, SSLConfig::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SSLConfig::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  bool rev_checking_enabled;
  bool rev_checking_required_local_anchors;
  bool sha1_local_anchors_enabled;
  bool symantec_enforcement_disabled;
  SSLVersion version_min;
  SSLVersion version_max;
  TLS13Variant tls13_variant;
  WTF::Vector<uint16_t> disabled_cipher_suites;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
SSLConfigPtr SSLConfig::Clone() const {
  return New(
      mojo::Clone(rev_checking_enabled),
      mojo::Clone(rev_checking_required_local_anchors),
      mojo::Clone(sha1_local_anchors_enabled),
      mojo::Clone(symantec_enforcement_disabled),
      mojo::Clone(version_min),
      mojo::Clone(version_max),
      mojo::Clone(tls13_variant),
      mojo::Clone(disabled_cipher_suites)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SSLConfig>::value>::type*>
bool SSLConfig::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->rev_checking_enabled, other_struct.rev_checking_enabled))
    return false;
  if (!mojo::Equals(this->rev_checking_required_local_anchors, other_struct.rev_checking_required_local_anchors))
    return false;
  if (!mojo::Equals(this->sha1_local_anchors_enabled, other_struct.sha1_local_anchors_enabled))
    return false;
  if (!mojo::Equals(this->symantec_enforcement_disabled, other_struct.symantec_enforcement_disabled))
    return false;
  if (!mojo::Equals(this->version_min, other_struct.version_min))
    return false;
  if (!mojo::Equals(this->version_max, other_struct.version_max))
    return false;
  if (!mojo::Equals(this->tls13_variant, other_struct.tls13_variant))
    return false;
  if (!mojo::Equals(this->disabled_cipher_suites, other_struct.disabled_cipher_suites))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::network::mojom::blink::SSLConfig::DataView,
                                         ::network::mojom::blink::SSLConfigPtr> {
  static bool IsNull(const ::network::mojom::blink::SSLConfigPtr& input) { return !input; }
  static void SetToNull(::network::mojom::blink::SSLConfigPtr* output) { output->reset(); }

  static decltype(::network::mojom::blink::SSLConfig::rev_checking_enabled) rev_checking_enabled(
      const ::network::mojom::blink::SSLConfigPtr& input) {
    return input->rev_checking_enabled;
  }

  static decltype(::network::mojom::blink::SSLConfig::rev_checking_required_local_anchors) rev_checking_required_local_anchors(
      const ::network::mojom::blink::SSLConfigPtr& input) {
    return input->rev_checking_required_local_anchors;
  }

  static decltype(::network::mojom::blink::SSLConfig::sha1_local_anchors_enabled) sha1_local_anchors_enabled(
      const ::network::mojom::blink::SSLConfigPtr& input) {
    return input->sha1_local_anchors_enabled;
  }

  static decltype(::network::mojom::blink::SSLConfig::symantec_enforcement_disabled) symantec_enforcement_disabled(
      const ::network::mojom::blink::SSLConfigPtr& input) {
    return input->symantec_enforcement_disabled;
  }

  static decltype(::network::mojom::blink::SSLConfig::version_min) version_min(
      const ::network::mojom::blink::SSLConfigPtr& input) {
    return input->version_min;
  }

  static decltype(::network::mojom::blink::SSLConfig::version_max) version_max(
      const ::network::mojom::blink::SSLConfigPtr& input) {
    return input->version_max;
  }

  static decltype(::network::mojom::blink::SSLConfig::tls13_variant) tls13_variant(
      const ::network::mojom::blink::SSLConfigPtr& input) {
    return input->tls13_variant;
  }

  static const decltype(::network::mojom::blink::SSLConfig::disabled_cipher_suites)& disabled_cipher_suites(
      const ::network::mojom::blink::SSLConfigPtr& input) {
    return input->disabled_cipher_suites;
  }

  static bool Read(::network::mojom::blink::SSLConfig::DataView input, ::network::mojom::blink::SSLConfigPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_SSL_CONFIG_MOJOM_BLINK_H_