// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_BLINK_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_BLINK_H_

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
#include "services/service_manager/public/mojom/connector.mojom-shared.h"
#include "services/service_manager/public/mojom/constants.mojom-blink.h"
#include "services/service_manager/public/mojom/interface_provider.mojom-blink.h"

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
#include "base/component_export.h"


namespace WTF {
struct service_manager_mojom_internal_ConnectResult_DataHashFn {
  static unsigned GetHash(const ::service_manager::mojom::ConnectResult& value) {
    using utype = std::underlying_type<::service_manager::mojom::ConnectResult>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::service_manager::mojom::ConnectResult& left, const ::service_manager::mojom::ConnectResult& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::service_manager::mojom::ConnectResult> {
  using Hash = service_manager_mojom_internal_ConnectResult_DataHashFn;
};

template <>
struct HashTraits<::service_manager::mojom::ConnectResult>
    : public GenericHashTraits<::service_manager::mojom::ConnectResult> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::service_manager::mojom::ConnectResult& value) {
    return value == static_cast<::service_manager::mojom::ConnectResult>(-1000000);
  }
  static void ConstructDeletedValue(::service_manager::mojom::ConnectResult& slot, bool) {
    slot = static_cast<::service_manager::mojom::ConnectResult>(-1000001);
  }
  static bool IsDeletedValue(const ::service_manager::mojom::ConnectResult& value) {
    return value == static_cast<::service_manager::mojom::ConnectResult>(-1000001);
  }
};
}  // namespace WTF


namespace service_manager {
namespace mojom {
namespace blink {
using ConnectResult = ConnectResult;  // Alias for definition in the parent namespace.
class PIDReceiver;
using PIDReceiverPtr = mojo::InterfacePtr<PIDReceiver>;
using RevocablePIDReceiverPtr = ::blink::RevocableInterfacePtr<PIDReceiver>;
using PIDReceiverPtrInfo = mojo::InterfacePtrInfo<PIDReceiver>;
using ThreadSafePIDReceiverPtr =
    mojo::ThreadSafeInterfacePtr<PIDReceiver>;
using PIDReceiverRequest = mojo::InterfaceRequest<PIDReceiver>;
using PIDReceiverAssociatedPtr =
    mojo::AssociatedInterfacePtr<PIDReceiver>;
using ThreadSafePIDReceiverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PIDReceiver>;
using PIDReceiverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PIDReceiver>;
using PIDReceiverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PIDReceiver>;

class Connector;
using ConnectorPtr = mojo::InterfacePtr<Connector>;
using RevocableConnectorPtr = ::blink::RevocableInterfacePtr<Connector>;
using ConnectorPtrInfo = mojo::InterfacePtrInfo<Connector>;
using ThreadSafeConnectorPtr =
    mojo::ThreadSafeInterfacePtr<Connector>;
using ConnectorRequest = mojo::InterfaceRequest<Connector>;
using ConnectorAssociatedPtr =
    mojo::AssociatedInterfacePtr<Connector>;
using ThreadSafeConnectorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Connector>;
using ConnectorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Connector>;
using ConnectorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Connector>;

class Identity;
using IdentityPtr = mojo::InlinedStructPtr<Identity>;


class PIDReceiverProxy;

template <typename ImplRefTraits>
class PIDReceiverStub;

class PIDReceiverRequestValidator;

class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) PIDReceiver
    : public PIDReceiverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = PIDReceiverProxy;

  template <typename ImplRefTraits>
  using Stub_ = PIDReceiverStub<ImplRefTraits>;

  using RequestValidator_ = PIDReceiverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetPIDMinVersion = 0,
  };
  virtual ~PIDReceiver() {}

  virtual void SetPID(uint32_t pid) = 0;
};
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) PIDReceiverInterceptorForTesting : public PIDReceiver {
  virtual PIDReceiver* GetForwardingInterface() = 0;
  void SetPID(uint32_t pid) override;
};
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) PIDReceiverAsyncWaiter {
 public:
  explicit PIDReceiverAsyncWaiter(PIDReceiver* proxy);
  ~PIDReceiverAsyncWaiter();

 private:
  PIDReceiver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PIDReceiverAsyncWaiter);
};

class ConnectorProxy;

template <typename ImplRefTraits>
class ConnectorStub;

class ConnectorRequestValidator;
class ConnectorResponseValidator;

class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) Connector
    : public ConnectorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ConnectorProxy;

  template <typename ImplRefTraits>
  using Stub_ = ConnectorStub<ImplRefTraits>;

  using RequestValidator_ = ConnectorRequestValidator;
  using ResponseValidator_ = ConnectorResponseValidator;
  enum MethodMinVersions : uint32_t {
    kBindInterfaceMinVersion = 0,
    kQueryServiceMinVersion = 0,
    kStartServiceMinVersion = 0,
    kStartServiceWithProcessMinVersion = 0,
    kCloneMinVersion = 0,
    kFilterInterfacesMinVersion = 0,
  };
  virtual ~Connector() {}


  using BindInterfaceCallback = base::OnceCallback<void(ConnectResult, IdentityPtr)>;
  virtual void BindInterface(IdentityPtr target, const WTF::String& interface_name, mojo::ScopedMessagePipeHandle interface_pipe, BindInterfaceCallback callback) = 0;


  using QueryServiceCallback = base::OnceCallback<void(ConnectResult, const WTF::String&)>;
  virtual void QueryService(IdentityPtr target, QueryServiceCallback callback) = 0;


  using StartServiceCallback = base::OnceCallback<void(ConnectResult, IdentityPtr)>;
  virtual void StartService(IdentityPtr target, StartServiceCallback callback) = 0;


  using StartServiceWithProcessCallback = base::OnceCallback<void(ConnectResult, IdentityPtr)>;
  virtual void StartServiceWithProcess(IdentityPtr target, mojo::ScopedMessagePipeHandle service, PIDReceiverRequest pid_receiver_request, StartServiceWithProcessCallback callback) = 0;

  virtual void Clone(ConnectorRequest request) = 0;

  virtual void FilterInterfaces(const WTF::String& spec, IdentityPtr source, ::service_manager::mojom::blink::InterfaceProviderRequest source_request, ::service_manager::mojom::blink::InterfaceProviderPtr target) = 0;
};
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) ConnectorInterceptorForTesting : public Connector {
  virtual Connector* GetForwardingInterface() = 0;
  void BindInterface(IdentityPtr target, const WTF::String& interface_name, mojo::ScopedMessagePipeHandle interface_pipe, BindInterfaceCallback callback) override;
  void QueryService(IdentityPtr target, QueryServiceCallback callback) override;
  void StartService(IdentityPtr target, StartServiceCallback callback) override;
  void StartServiceWithProcess(IdentityPtr target, mojo::ScopedMessagePipeHandle service, PIDReceiverRequest pid_receiver_request, StartServiceWithProcessCallback callback) override;
  void Clone(ConnectorRequest request) override;
  void FilterInterfaces(const WTF::String& spec, IdentityPtr source, ::service_manager::mojom::blink::InterfaceProviderRequest source_request, ::service_manager::mojom::blink::InterfaceProviderPtr target) override;
};
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) ConnectorAsyncWaiter {
 public:
  explicit ConnectorAsyncWaiter(Connector* proxy);
  ~ConnectorAsyncWaiter();
  void BindInterface(
      IdentityPtr target, const WTF::String& interface_name, mojo::ScopedMessagePipeHandle interface_pipe, ConnectResult* out_result, IdentityPtr* out_user_id);
  void QueryService(
      IdentityPtr target, ConnectResult* out_result, WTF::String* out_sandbox_type);
  void StartService(
      IdentityPtr target, ConnectResult* out_result, IdentityPtr* out_identity);
  void StartServiceWithProcess(
      IdentityPtr target, mojo::ScopedMessagePipeHandle service, PIDReceiverRequest pid_receiver_request, ConnectResult* out_result, IdentityPtr* out_identity);

 private:
  Connector* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ConnectorAsyncWaiter);
};

class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) PIDReceiverProxy
    : public PIDReceiver {
 public:
  explicit PIDReceiverProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetPID(uint32_t pid) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) ConnectorProxy
    : public Connector {
 public:
  explicit ConnectorProxy(mojo::MessageReceiverWithResponder* receiver);
  void BindInterface(IdentityPtr target, const WTF::String& interface_name, mojo::ScopedMessagePipeHandle interface_pipe, BindInterfaceCallback callback) final;
  void QueryService(IdentityPtr target, QueryServiceCallback callback) final;
  void StartService(IdentityPtr target, StartServiceCallback callback) final;
  void StartServiceWithProcess(IdentityPtr target, mojo::ScopedMessagePipeHandle service, PIDReceiverRequest pid_receiver_request, StartServiceWithProcessCallback callback) final;
  void Clone(ConnectorRequest request) final;
  void FilterInterfaces(const WTF::String& spec, IdentityPtr source, ::service_manager::mojom::blink::InterfaceProviderRequest source_request, ::service_manager::mojom::blink::InterfaceProviderPtr target) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) PIDReceiverStubDispatch {
 public:
  static bool Accept(PIDReceiver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PIDReceiver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PIDReceiver>>
class PIDReceiverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PIDReceiverStub() {}
  ~PIDReceiverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PIDReceiverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PIDReceiverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) ConnectorStubDispatch {
 public:
  static bool Accept(Connector* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Connector* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Connector>>
class ConnectorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ConnectorStub() {}
  ~ConnectorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ConnectorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ConnectorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) PIDReceiverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) ConnectorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) ConnectorResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};


class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) Identity {
 public:
  using DataView = IdentityDataView;
  using Data_ = internal::Identity_Data;

  template <typename... Args>
  static IdentityPtr New(Args&&... args) {
    return IdentityPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static IdentityPtr From(const U& u) {
    return mojo::TypeConverter<IdentityPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Identity>::Convert(*this);
  }


  Identity();

  Identity(
      const WTF::String& name,
      const WTF::String& user_id,
      const WTF::String& instance);

  ~Identity();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = IdentityPtr>
  IdentityPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Identity>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Identity::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Identity::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Identity_UnserializedMessageContext<
            UserType, Identity::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Identity::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return Identity::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Identity_UnserializedMessageContext<
            UserType, Identity::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Identity::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  WTF::String name;
  WTF::String user_id;
  WTF::String instance;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
IdentityPtr Identity::Clone() const {
  return New(
      mojo::Clone(name),
      mojo::Clone(user_id),
      mojo::Clone(instance)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Identity>::value>::type*>
bool Identity::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->user_id, other_struct.user_id))
    return false;
  if (!mojo::Equals(this->instance, other_struct.instance))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace service_manager

namespace mojo {


template <>
struct COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) StructTraits<::service_manager::mojom::blink::Identity::DataView,
                                         ::service_manager::mojom::blink::IdentityPtr> {
  static bool IsNull(const ::service_manager::mojom::blink::IdentityPtr& input) { return !input; }
  static void SetToNull(::service_manager::mojom::blink::IdentityPtr* output) { output->reset(); }

  static const decltype(::service_manager::mojom::blink::Identity::name)& name(
      const ::service_manager::mojom::blink::IdentityPtr& input) {
    return input->name;
  }

  static const decltype(::service_manager::mojom::blink::Identity::user_id)& user_id(
      const ::service_manager::mojom::blink::IdentityPtr& input) {
    return input->user_id;
  }

  static const decltype(::service_manager::mojom::blink::Identity::instance)& instance(
      const ::service_manager::mojom::blink::IdentityPtr& input) {
    return input->instance;
  }

  static bool Read(::service_manager::mojom::blink::Identity::DataView input, ::service_manager::mojom::blink::IdentityPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_BLINK_H_