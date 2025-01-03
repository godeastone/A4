// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBAUTH_VIRTUAL_AUTHENTICATOR_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBAUTH_VIRTUAL_AUTHENTICATOR_MOJOM_H_

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
#include "third_party/blink/public/platform/modules/webauth/virtual_authenticator.mojom-shared.h"
#include "url/mojom/url.mojom.h"
#include "third_party/blink/public/platform/modules/webauth/authenticator.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "content/common/content_export.h"


namespace webauth {
namespace test {
namespace mojom {
class VirtualAuthenticator;
using VirtualAuthenticatorPtr = mojo::InterfacePtr<VirtualAuthenticator>;
using VirtualAuthenticatorPtrInfo = mojo::InterfacePtrInfo<VirtualAuthenticator>;
using ThreadSafeVirtualAuthenticatorPtr =
    mojo::ThreadSafeInterfacePtr<VirtualAuthenticator>;
using VirtualAuthenticatorRequest = mojo::InterfaceRequest<VirtualAuthenticator>;
using VirtualAuthenticatorAssociatedPtr =
    mojo::AssociatedInterfacePtr<VirtualAuthenticator>;
using ThreadSafeVirtualAuthenticatorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VirtualAuthenticator>;
using VirtualAuthenticatorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VirtualAuthenticator>;
using VirtualAuthenticatorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VirtualAuthenticator>;

class VirtualAuthenticatorManager;
using VirtualAuthenticatorManagerPtr = mojo::InterfacePtr<VirtualAuthenticatorManager>;
using VirtualAuthenticatorManagerPtrInfo = mojo::InterfacePtrInfo<VirtualAuthenticatorManager>;
using ThreadSafeVirtualAuthenticatorManagerPtr =
    mojo::ThreadSafeInterfacePtr<VirtualAuthenticatorManager>;
using VirtualAuthenticatorManagerRequest = mojo::InterfaceRequest<VirtualAuthenticatorManager>;
using VirtualAuthenticatorManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<VirtualAuthenticatorManager>;
using ThreadSafeVirtualAuthenticatorManagerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VirtualAuthenticatorManager>;
using VirtualAuthenticatorManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VirtualAuthenticatorManager>;
using VirtualAuthenticatorManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VirtualAuthenticatorManager>;

class VirtualAuthenticatorOptions;
using VirtualAuthenticatorOptionsPtr = mojo::StructPtr<VirtualAuthenticatorOptions>;

class RegisteredKey;
using RegisteredKeyPtr = mojo::StructPtr<RegisteredKey>;


class VirtualAuthenticatorProxy;

template <typename ImplRefTraits>
class VirtualAuthenticatorStub;

class VirtualAuthenticatorRequestValidator;
class VirtualAuthenticatorResponseValidator;

class CONTENT_EXPORT VirtualAuthenticator
    : public VirtualAuthenticatorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = VirtualAuthenticatorProxy;

  template <typename ImplRefTraits>
  using Stub_ = VirtualAuthenticatorStub<ImplRefTraits>;

  using RequestValidator_ = VirtualAuthenticatorRequestValidator;
  using ResponseValidator_ = VirtualAuthenticatorResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetUniqueIdMinVersion = 0,
    kAddRegistrationMinVersion = 0,
    kGetRegistrationsMinVersion = 0,
    kClearRegistrationsMinVersion = 0,
    kSetUserPresenceMinVersion = 0,
    kGetUserPresenceMinVersion = 0,
  };
  virtual ~VirtualAuthenticator() {}


  using GetUniqueIdCallback = base::OnceCallback<void(const std::string&)>;
  virtual void GetUniqueId(GetUniqueIdCallback callback) = 0;


  using AddRegistrationCallback = base::OnceCallback<void(bool)>;
  virtual void AddRegistration(RegisteredKeyPtr key, AddRegistrationCallback callback) = 0;


  using GetRegistrationsCallback = base::OnceCallback<void(std::vector<RegisteredKeyPtr>)>;
  virtual void GetRegistrations(GetRegistrationsCallback callback) = 0;


  using ClearRegistrationsCallback = base::OnceCallback<void()>;
  virtual void ClearRegistrations(ClearRegistrationsCallback callback) = 0;


  using SetUserPresenceCallback = base::OnceCallback<void()>;
  virtual void SetUserPresence(bool present, SetUserPresenceCallback callback) = 0;


  using GetUserPresenceCallback = base::OnceCallback<void(bool)>;
  virtual void GetUserPresence(GetUserPresenceCallback callback) = 0;
};
class CONTENT_EXPORT VirtualAuthenticatorInterceptorForTesting : public VirtualAuthenticator {
  virtual VirtualAuthenticator* GetForwardingInterface() = 0;
  void GetUniqueId(GetUniqueIdCallback callback) override;
  void AddRegistration(RegisteredKeyPtr key, AddRegistrationCallback callback) override;
  void GetRegistrations(GetRegistrationsCallback callback) override;
  void ClearRegistrations(ClearRegistrationsCallback callback) override;
  void SetUserPresence(bool present, SetUserPresenceCallback callback) override;
  void GetUserPresence(GetUserPresenceCallback callback) override;
};
class CONTENT_EXPORT VirtualAuthenticatorAsyncWaiter {
 public:
  explicit VirtualAuthenticatorAsyncWaiter(VirtualAuthenticator* proxy);
  ~VirtualAuthenticatorAsyncWaiter();
  void GetUniqueId(
      std::string* out_id);
  void AddRegistration(
      RegisteredKeyPtr key, bool* out_added);
  void GetRegistrations(
      std::vector<RegisteredKeyPtr>* out_keys);
  void ClearRegistrations(
      );
  void SetUserPresence(
      bool present);
  void GetUserPresence(
      bool* out_present);

 private:
  VirtualAuthenticator* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VirtualAuthenticatorAsyncWaiter);
};

class VirtualAuthenticatorManagerProxy;

template <typename ImplRefTraits>
class VirtualAuthenticatorManagerStub;

class VirtualAuthenticatorManagerRequestValidator;
class VirtualAuthenticatorManagerResponseValidator;

class CONTENT_EXPORT VirtualAuthenticatorManager
    : public VirtualAuthenticatorManagerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = VirtualAuthenticatorManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = VirtualAuthenticatorManagerStub<ImplRefTraits>;

  using RequestValidator_ = VirtualAuthenticatorManagerRequestValidator;
  using ResponseValidator_ = VirtualAuthenticatorManagerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kCreateAuthenticatorMinVersion = 0,
    kGetAuthenticatorsMinVersion = 0,
    kRemoveAuthenticatorMinVersion = 0,
    kClearAuthenticatorsMinVersion = 0,
  };
  virtual ~VirtualAuthenticatorManager() {}


  using CreateAuthenticatorCallback = base::OnceCallback<void(VirtualAuthenticatorPtr)>;
  virtual void CreateAuthenticator(VirtualAuthenticatorOptionsPtr options, CreateAuthenticatorCallback callback) = 0;


  using GetAuthenticatorsCallback = base::OnceCallback<void(std::vector<VirtualAuthenticatorPtrInfo>)>;
  virtual void GetAuthenticators(GetAuthenticatorsCallback callback) = 0;


  using RemoveAuthenticatorCallback = base::OnceCallback<void(bool)>;
  virtual void RemoveAuthenticator(const std::string& id, RemoveAuthenticatorCallback callback) = 0;


  using ClearAuthenticatorsCallback = base::OnceCallback<void()>;
  virtual void ClearAuthenticators(ClearAuthenticatorsCallback callback) = 0;
};
class CONTENT_EXPORT VirtualAuthenticatorManagerInterceptorForTesting : public VirtualAuthenticatorManager {
  virtual VirtualAuthenticatorManager* GetForwardingInterface() = 0;
  void CreateAuthenticator(VirtualAuthenticatorOptionsPtr options, CreateAuthenticatorCallback callback) override;
  void GetAuthenticators(GetAuthenticatorsCallback callback) override;
  void RemoveAuthenticator(const std::string& id, RemoveAuthenticatorCallback callback) override;
  void ClearAuthenticators(ClearAuthenticatorsCallback callback) override;
};
class CONTENT_EXPORT VirtualAuthenticatorManagerAsyncWaiter {
 public:
  explicit VirtualAuthenticatorManagerAsyncWaiter(VirtualAuthenticatorManager* proxy);
  ~VirtualAuthenticatorManagerAsyncWaiter();
  void CreateAuthenticator(
      VirtualAuthenticatorOptionsPtr options, VirtualAuthenticatorPtr* out_authenticator);
  void GetAuthenticators(
      std::vector<VirtualAuthenticatorPtrInfo>* out_authenticators);
  void RemoveAuthenticator(
      const std::string& id, bool* out_removed);
  void ClearAuthenticators(
      );

 private:
  VirtualAuthenticatorManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VirtualAuthenticatorManagerAsyncWaiter);
};

class CONTENT_EXPORT VirtualAuthenticatorProxy
    : public VirtualAuthenticator {
 public:
  explicit VirtualAuthenticatorProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetUniqueId(GetUniqueIdCallback callback) final;
  void AddRegistration(RegisteredKeyPtr key, AddRegistrationCallback callback) final;
  void GetRegistrations(GetRegistrationsCallback callback) final;
  void ClearRegistrations(ClearRegistrationsCallback callback) final;
  void SetUserPresence(bool present, SetUserPresenceCallback callback) final;
  void GetUserPresence(GetUserPresenceCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT VirtualAuthenticatorManagerProxy
    : public VirtualAuthenticatorManager {
 public:
  explicit VirtualAuthenticatorManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateAuthenticator(VirtualAuthenticatorOptionsPtr options, CreateAuthenticatorCallback callback) final;
  void GetAuthenticators(GetAuthenticatorsCallback callback) final;
  void RemoveAuthenticator(const std::string& id, RemoveAuthenticatorCallback callback) final;
  void ClearAuthenticators(ClearAuthenticatorsCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT VirtualAuthenticatorStubDispatch {
 public:
  static bool Accept(VirtualAuthenticator* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      VirtualAuthenticator* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<VirtualAuthenticator>>
class VirtualAuthenticatorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  VirtualAuthenticatorStub() {}
  ~VirtualAuthenticatorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VirtualAuthenticatorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VirtualAuthenticatorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT VirtualAuthenticatorManagerStubDispatch {
 public:
  static bool Accept(VirtualAuthenticatorManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      VirtualAuthenticatorManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<VirtualAuthenticatorManager>>
class VirtualAuthenticatorManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  VirtualAuthenticatorManagerStub() {}
  ~VirtualAuthenticatorManagerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VirtualAuthenticatorManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VirtualAuthenticatorManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT VirtualAuthenticatorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT VirtualAuthenticatorManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT VirtualAuthenticatorResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT VirtualAuthenticatorManagerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};






class CONTENT_EXPORT VirtualAuthenticatorOptions {
 public:
  using DataView = VirtualAuthenticatorOptionsDataView;
  using Data_ = internal::VirtualAuthenticatorOptions_Data;

  template <typename... Args>
  static VirtualAuthenticatorOptionsPtr New(Args&&... args) {
    return VirtualAuthenticatorOptionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VirtualAuthenticatorOptionsPtr From(const U& u) {
    return mojo::TypeConverter<VirtualAuthenticatorOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VirtualAuthenticatorOptions>::Convert(*this);
  }


  VirtualAuthenticatorOptions();

  VirtualAuthenticatorOptions(
      ClientToAuthenticatorProtocol protocol,
      ::webauth::mojom::AuthenticatorTransport transport,
      ::webauth::mojom::AuthenticatorAttachment attachment,
      bool has_resident_key,
      bool has_user_verification);

  ~VirtualAuthenticatorOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VirtualAuthenticatorOptionsPtr>
  VirtualAuthenticatorOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VirtualAuthenticatorOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VirtualAuthenticatorOptions::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VirtualAuthenticatorOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VirtualAuthenticatorOptions_UnserializedMessageContext<
            UserType, VirtualAuthenticatorOptions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VirtualAuthenticatorOptions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return VirtualAuthenticatorOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VirtualAuthenticatorOptions_UnserializedMessageContext<
            UserType, VirtualAuthenticatorOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VirtualAuthenticatorOptions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  ClientToAuthenticatorProtocol protocol;
  ::webauth::mojom::AuthenticatorTransport transport;
  ::webauth::mojom::AuthenticatorAttachment attachment;
  bool has_resident_key;
  bool has_user_verification;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class CONTENT_EXPORT RegisteredKey {
 public:
  using DataView = RegisteredKeyDataView;
  using Data_ = internal::RegisteredKey_Data;

  template <typename... Args>
  static RegisteredKeyPtr New(Args&&... args) {
    return RegisteredKeyPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RegisteredKeyPtr From(const U& u) {
    return mojo::TypeConverter<RegisteredKeyPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RegisteredKey>::Convert(*this);
  }


  RegisteredKey();

  RegisteredKey(
      const std::vector<uint8_t>& key_handle,
      const std::vector<uint8_t>& application_parameter,
      const std::vector<uint8_t>& private_key,
      int32_t counter);

  ~RegisteredKey();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RegisteredKeyPtr>
  RegisteredKeyPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RegisteredKey>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RegisteredKey::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RegisteredKey::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RegisteredKey_UnserializedMessageContext<
            UserType, RegisteredKey::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<RegisteredKey::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return RegisteredKey::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RegisteredKey_UnserializedMessageContext<
            UserType, RegisteredKey::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RegisteredKey::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::vector<uint8_t> key_handle;
  std::vector<uint8_t> application_parameter;
  std::vector<uint8_t> private_key;
  int32_t counter;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
VirtualAuthenticatorOptionsPtr VirtualAuthenticatorOptions::Clone() const {
  return New(
      mojo::Clone(protocol),
      mojo::Clone(transport),
      mojo::Clone(attachment),
      mojo::Clone(has_resident_key),
      mojo::Clone(has_user_verification)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VirtualAuthenticatorOptions>::value>::type*>
bool VirtualAuthenticatorOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->protocol, other_struct.protocol))
    return false;
  if (!mojo::Equals(this->transport, other_struct.transport))
    return false;
  if (!mojo::Equals(this->attachment, other_struct.attachment))
    return false;
  if (!mojo::Equals(this->has_resident_key, other_struct.has_resident_key))
    return false;
  if (!mojo::Equals(this->has_user_verification, other_struct.has_user_verification))
    return false;
  return true;
}
template <typename StructPtrType>
RegisteredKeyPtr RegisteredKey::Clone() const {
  return New(
      mojo::Clone(key_handle),
      mojo::Clone(application_parameter),
      mojo::Clone(private_key),
      mojo::Clone(counter)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RegisteredKey>::value>::type*>
bool RegisteredKey::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->key_handle, other_struct.key_handle))
    return false;
  if (!mojo::Equals(this->application_parameter, other_struct.application_parameter))
    return false;
  if (!mojo::Equals(this->private_key, other_struct.private_key))
    return false;
  if (!mojo::Equals(this->counter, other_struct.counter))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace test
}  // namespace webauth

namespace mojo {


template <>
struct CONTENT_EXPORT StructTraits<::webauth::test::mojom::VirtualAuthenticatorOptions::DataView,
                                         ::webauth::test::mojom::VirtualAuthenticatorOptionsPtr> {
  static bool IsNull(const ::webauth::test::mojom::VirtualAuthenticatorOptionsPtr& input) { return !input; }
  static void SetToNull(::webauth::test::mojom::VirtualAuthenticatorOptionsPtr* output) { output->reset(); }

  static decltype(::webauth::test::mojom::VirtualAuthenticatorOptions::protocol) protocol(
      const ::webauth::test::mojom::VirtualAuthenticatorOptionsPtr& input) {
    return input->protocol;
  }

  static decltype(::webauth::test::mojom::VirtualAuthenticatorOptions::transport) transport(
      const ::webauth::test::mojom::VirtualAuthenticatorOptionsPtr& input) {
    return input->transport;
  }

  static decltype(::webauth::test::mojom::VirtualAuthenticatorOptions::attachment) attachment(
      const ::webauth::test::mojom::VirtualAuthenticatorOptionsPtr& input) {
    return input->attachment;
  }

  static decltype(::webauth::test::mojom::VirtualAuthenticatorOptions::has_resident_key) has_resident_key(
      const ::webauth::test::mojom::VirtualAuthenticatorOptionsPtr& input) {
    return input->has_resident_key;
  }

  static decltype(::webauth::test::mojom::VirtualAuthenticatorOptions::has_user_verification) has_user_verification(
      const ::webauth::test::mojom::VirtualAuthenticatorOptionsPtr& input) {
    return input->has_user_verification;
  }

  static bool Read(::webauth::test::mojom::VirtualAuthenticatorOptions::DataView input, ::webauth::test::mojom::VirtualAuthenticatorOptionsPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::webauth::test::mojom::RegisteredKey::DataView,
                                         ::webauth::test::mojom::RegisteredKeyPtr> {
  static bool IsNull(const ::webauth::test::mojom::RegisteredKeyPtr& input) { return !input; }
  static void SetToNull(::webauth::test::mojom::RegisteredKeyPtr* output) { output->reset(); }

  static const decltype(::webauth::test::mojom::RegisteredKey::key_handle)& key_handle(
      const ::webauth::test::mojom::RegisteredKeyPtr& input) {
    return input->key_handle;
  }

  static const decltype(::webauth::test::mojom::RegisteredKey::application_parameter)& application_parameter(
      const ::webauth::test::mojom::RegisteredKeyPtr& input) {
    return input->application_parameter;
  }

  static const decltype(::webauth::test::mojom::RegisteredKey::private_key)& private_key(
      const ::webauth::test::mojom::RegisteredKeyPtr& input) {
    return input->private_key;
  }

  static decltype(::webauth::test::mojom::RegisteredKey::counter) counter(
      const ::webauth::test::mojom::RegisteredKeyPtr& input) {
    return input->counter;
  }

  static bool Read(::webauth::test::mojom::RegisteredKey::DataView input, ::webauth::test::mojom::RegisteredKeyPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBAUTH_VIRTUAL_AUTHENTICATOR_MOJOM_H_