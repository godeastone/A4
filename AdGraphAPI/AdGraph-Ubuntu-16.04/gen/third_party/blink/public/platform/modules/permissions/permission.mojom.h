// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PERMISSIONS_PERMISSION_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PERMISSIONS_PERMISSION_MOJOM_H_

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
#include "third_party/blink/public/platform/modules/permissions/permission.mojom-shared.h"
#include "third_party/blink/public/platform/modules/permissions/permission_status.mojom.h"
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


namespace blink {
namespace mojom {
class PermissionObserver;
using PermissionObserverPtr = mojo::InterfacePtr<PermissionObserver>;
using PermissionObserverPtrInfo = mojo::InterfacePtrInfo<PermissionObserver>;
using ThreadSafePermissionObserverPtr =
    mojo::ThreadSafeInterfacePtr<PermissionObserver>;
using PermissionObserverRequest = mojo::InterfaceRequest<PermissionObserver>;
using PermissionObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<PermissionObserver>;
using ThreadSafePermissionObserverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PermissionObserver>;
using PermissionObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PermissionObserver>;
using PermissionObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PermissionObserver>;

class PermissionService;
using PermissionServicePtr = mojo::InterfacePtr<PermissionService>;
using PermissionServicePtrInfo = mojo::InterfacePtrInfo<PermissionService>;
using ThreadSafePermissionServicePtr =
    mojo::ThreadSafeInterfacePtr<PermissionService>;
using PermissionServiceRequest = mojo::InterfaceRequest<PermissionService>;
using PermissionServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<PermissionService>;
using ThreadSafePermissionServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PermissionService>;
using PermissionServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PermissionService>;
using PermissionServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PermissionService>;

class MidiPermissionDescriptor;
using MidiPermissionDescriptorPtr = mojo::InlinedStructPtr<MidiPermissionDescriptor>;

class ClipboardPermissionDescriptor;
using ClipboardPermissionDescriptorPtr = mojo::InlinedStructPtr<ClipboardPermissionDescriptor>;

class PermissionDescriptor;
using PermissionDescriptorPtr = mojo::StructPtr<PermissionDescriptor>;

class PermissionDescriptorExtension;

typedef mojo::StructPtr<PermissionDescriptorExtension> PermissionDescriptorExtensionPtr;


class PermissionObserverProxy;

template <typename ImplRefTraits>
class PermissionObserverStub;

class PermissionObserverRequestValidator;

class CONTENT_EXPORT PermissionObserver
    : public PermissionObserverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = PermissionObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = PermissionObserverStub<ImplRefTraits>;

  using RequestValidator_ = PermissionObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnPermissionStatusChangeMinVersion = 0,
  };
  virtual ~PermissionObserver() {}

  virtual void OnPermissionStatusChange(::blink::mojom::PermissionStatus status) = 0;
};
class CONTENT_EXPORT PermissionObserverInterceptorForTesting : public PermissionObserver {
  virtual PermissionObserver* GetForwardingInterface() = 0;
  void OnPermissionStatusChange(::blink::mojom::PermissionStatus status) override;
};
class CONTENT_EXPORT PermissionObserverAsyncWaiter {
 public:
  explicit PermissionObserverAsyncWaiter(PermissionObserver* proxy);
  ~PermissionObserverAsyncWaiter();

 private:
  PermissionObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PermissionObserverAsyncWaiter);
};

class PermissionServiceProxy;

template <typename ImplRefTraits>
class PermissionServiceStub;

class PermissionServiceRequestValidator;
class PermissionServiceResponseValidator;

class CONTENT_EXPORT PermissionService
    : public PermissionServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = PermissionServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = PermissionServiceStub<ImplRefTraits>;

  using RequestValidator_ = PermissionServiceRequestValidator;
  using ResponseValidator_ = PermissionServiceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kHasPermissionMinVersion = 0,
    kRequestPermissionMinVersion = 0,
    kRequestPermissionsMinVersion = 0,
    kRevokePermissionMinVersion = 0,
    kAddPermissionObserverMinVersion = 0,
  };
  virtual ~PermissionService() {}


  using HasPermissionCallback = base::OnceCallback<void(::blink::mojom::PermissionStatus)>;
  virtual void HasPermission(PermissionDescriptorPtr permission, HasPermissionCallback callback) = 0;


  using RequestPermissionCallback = base::OnceCallback<void(::blink::mojom::PermissionStatus)>;
  virtual void RequestPermission(PermissionDescriptorPtr permission, bool user_gesture, RequestPermissionCallback callback) = 0;


  using RequestPermissionsCallback = base::OnceCallback<void(const std::vector<::blink::mojom::PermissionStatus>&)>;
  virtual void RequestPermissions(std::vector<PermissionDescriptorPtr> permission, bool user_gesture, RequestPermissionsCallback callback) = 0;


  using RevokePermissionCallback = base::OnceCallback<void(::blink::mojom::PermissionStatus)>;
  virtual void RevokePermission(PermissionDescriptorPtr permission, RevokePermissionCallback callback) = 0;

  virtual void AddPermissionObserver(PermissionDescriptorPtr permission, ::blink::mojom::PermissionStatus last_known_status, PermissionObserverPtr observer) = 0;
};
class CONTENT_EXPORT PermissionServiceInterceptorForTesting : public PermissionService {
  virtual PermissionService* GetForwardingInterface() = 0;
  void HasPermission(PermissionDescriptorPtr permission, HasPermissionCallback callback) override;
  void RequestPermission(PermissionDescriptorPtr permission, bool user_gesture, RequestPermissionCallback callback) override;
  void RequestPermissions(std::vector<PermissionDescriptorPtr> permission, bool user_gesture, RequestPermissionsCallback callback) override;
  void RevokePermission(PermissionDescriptorPtr permission, RevokePermissionCallback callback) override;
  void AddPermissionObserver(PermissionDescriptorPtr permission, ::blink::mojom::PermissionStatus last_known_status, PermissionObserverPtr observer) override;
};
class CONTENT_EXPORT PermissionServiceAsyncWaiter {
 public:
  explicit PermissionServiceAsyncWaiter(PermissionService* proxy);
  ~PermissionServiceAsyncWaiter();
  void HasPermission(
      PermissionDescriptorPtr permission, ::blink::mojom::PermissionStatus* out_status);
  void RequestPermission(
      PermissionDescriptorPtr permission, bool user_gesture, ::blink::mojom::PermissionStatus* out_status);
  void RequestPermissions(
      std::vector<PermissionDescriptorPtr> permission, bool user_gesture, std::vector<::blink::mojom::PermissionStatus>* out_statuses);
  void RevokePermission(
      PermissionDescriptorPtr permission, ::blink::mojom::PermissionStatus* out_status);

 private:
  PermissionService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PermissionServiceAsyncWaiter);
};

class CONTENT_EXPORT PermissionObserverProxy
    : public PermissionObserver {
 public:
  explicit PermissionObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnPermissionStatusChange(::blink::mojom::PermissionStatus status) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT PermissionServiceProxy
    : public PermissionService {
 public:
  explicit PermissionServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void HasPermission(PermissionDescriptorPtr permission, HasPermissionCallback callback) final;
  void RequestPermission(PermissionDescriptorPtr permission, bool user_gesture, RequestPermissionCallback callback) final;
  void RequestPermissions(std::vector<PermissionDescriptorPtr> permission, bool user_gesture, RequestPermissionsCallback callback) final;
  void RevokePermission(PermissionDescriptorPtr permission, RevokePermissionCallback callback) final;
  void AddPermissionObserver(PermissionDescriptorPtr permission, ::blink::mojom::PermissionStatus last_known_status, PermissionObserverPtr observer) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT PermissionObserverStubDispatch {
 public:
  static bool Accept(PermissionObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PermissionObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PermissionObserver>>
class PermissionObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PermissionObserverStub() {}
  ~PermissionObserverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PermissionObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PermissionObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT PermissionServiceStubDispatch {
 public:
  static bool Accept(PermissionService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PermissionService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PermissionService>>
class PermissionServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PermissionServiceStub() {}
  ~PermissionServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PermissionServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PermissionServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT PermissionObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT PermissionServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT PermissionServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};


class CONTENT_EXPORT MidiPermissionDescriptor {
 public:
  using DataView = MidiPermissionDescriptorDataView;
  using Data_ = internal::MidiPermissionDescriptor_Data;

  template <typename... Args>
  static MidiPermissionDescriptorPtr New(Args&&... args) {
    return MidiPermissionDescriptorPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MidiPermissionDescriptorPtr From(const U& u) {
    return mojo::TypeConverter<MidiPermissionDescriptorPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MidiPermissionDescriptor>::Convert(*this);
  }


  MidiPermissionDescriptor();

  explicit MidiPermissionDescriptor(
      bool sysex);

  ~MidiPermissionDescriptor();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MidiPermissionDescriptorPtr>
  MidiPermissionDescriptorPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MidiPermissionDescriptor>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MidiPermissionDescriptor::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MidiPermissionDescriptor::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MidiPermissionDescriptor_UnserializedMessageContext<
            UserType, MidiPermissionDescriptor::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<MidiPermissionDescriptor::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return MidiPermissionDescriptor::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MidiPermissionDescriptor_UnserializedMessageContext<
            UserType, MidiPermissionDescriptor::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MidiPermissionDescriptor::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  bool sysex;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class CONTENT_EXPORT ClipboardPermissionDescriptor {
 public:
  using DataView = ClipboardPermissionDescriptorDataView;
  using Data_ = internal::ClipboardPermissionDescriptor_Data;

  template <typename... Args>
  static ClipboardPermissionDescriptorPtr New(Args&&... args) {
    return ClipboardPermissionDescriptorPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ClipboardPermissionDescriptorPtr From(const U& u) {
    return mojo::TypeConverter<ClipboardPermissionDescriptorPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ClipboardPermissionDescriptor>::Convert(*this);
  }


  ClipboardPermissionDescriptor();

  explicit ClipboardPermissionDescriptor(
      bool allowWithoutGesture);

  ~ClipboardPermissionDescriptor();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ClipboardPermissionDescriptorPtr>
  ClipboardPermissionDescriptorPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ClipboardPermissionDescriptor>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ClipboardPermissionDescriptor::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ClipboardPermissionDescriptor::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ClipboardPermissionDescriptor_UnserializedMessageContext<
            UserType, ClipboardPermissionDescriptor::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ClipboardPermissionDescriptor::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ClipboardPermissionDescriptor::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ClipboardPermissionDescriptor_UnserializedMessageContext<
            UserType, ClipboardPermissionDescriptor::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ClipboardPermissionDescriptor::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  bool allowWithoutGesture;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};



class CONTENT_EXPORT PermissionDescriptorExtension {
 public:
  using DataView = PermissionDescriptorExtensionDataView;
  using Data_ = internal::PermissionDescriptorExtension_Data;
  using Tag = Data_::PermissionDescriptorExtension_Tag;

  static PermissionDescriptorExtensionPtr New() {
    return PermissionDescriptorExtensionPtr(base::in_place);
  }
  // Construct an instance holding |midi|.
  static PermissionDescriptorExtensionPtr
  NewMidi(
      MidiPermissionDescriptorPtr midi) {
    auto result = PermissionDescriptorExtensionPtr(base::in_place);
    result->set_midi(std::move(midi));
    return result;
  }
  // Construct an instance holding |clipboard|.
  static PermissionDescriptorExtensionPtr
  NewClipboard(
      ClipboardPermissionDescriptorPtr clipboard) {
    auto result = PermissionDescriptorExtensionPtr(base::in_place);
    result->set_clipboard(std::move(clipboard));
    return result;
  }

  template <typename U>
  static PermissionDescriptorExtensionPtr From(const U& u) {
    return mojo::TypeConverter<PermissionDescriptorExtensionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PermissionDescriptorExtension>::Convert(*this);
  }

  PermissionDescriptorExtension();
  ~PermissionDescriptorExtension();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = PermissionDescriptorExtensionPtr>
  PermissionDescriptorExtensionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PermissionDescriptorExtension>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  Tag which() const {
    return tag_;
  }


  bool is_midi() const { return tag_ == Tag::MIDI; }

  MidiPermissionDescriptorPtr& get_midi() const {
    DCHECK(tag_ == Tag::MIDI);
    return *(data_.midi);
  }

  void set_midi(
      MidiPermissionDescriptorPtr midi);
  bool is_clipboard() const { return tag_ == Tag::CLIPBOARD; }

  ClipboardPermissionDescriptorPtr& get_clipboard() const {
    DCHECK(tag_ == Tag::CLIPBOARD);
    return *(data_.clipboard);
  }

  void set_clipboard(
      ClipboardPermissionDescriptorPtr clipboard);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PermissionDescriptorExtension::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<PermissionDescriptorExtension::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    MidiPermissionDescriptorPtr* midi;
    ClipboardPermissionDescriptorPtr* clipboard;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};




class CONTENT_EXPORT PermissionDescriptor {
 public:
  using DataView = PermissionDescriptorDataView;
  using Data_ = internal::PermissionDescriptor_Data;

  template <typename... Args>
  static PermissionDescriptorPtr New(Args&&... args) {
    return PermissionDescriptorPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PermissionDescriptorPtr From(const U& u) {
    return mojo::TypeConverter<PermissionDescriptorPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PermissionDescriptor>::Convert(*this);
  }


  PermissionDescriptor();

  PermissionDescriptor(
      PermissionName name,
      PermissionDescriptorExtensionPtr extension);

  ~PermissionDescriptor();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PermissionDescriptorPtr>
  PermissionDescriptorPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PermissionDescriptor>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PermissionDescriptor::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PermissionDescriptor::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PermissionDescriptor_UnserializedMessageContext<
            UserType, PermissionDescriptor::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PermissionDescriptor::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PermissionDescriptor::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PermissionDescriptor_UnserializedMessageContext<
            UserType, PermissionDescriptor::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PermissionDescriptor::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  PermissionName name;
  PermissionDescriptorExtensionPtr extension;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(PermissionDescriptor);
};

template <typename UnionPtrType>
PermissionDescriptorExtensionPtr PermissionDescriptorExtension::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::MIDI:
      rv->set_midi(mojo::Clone(*data_.midi));
      break;
    case Tag::CLIPBOARD:
      rv->set_clipboard(mojo::Clone(*data_.clipboard));
      break;
  };
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PermissionDescriptorExtension>::value>::type*>
bool PermissionDescriptorExtension::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::MIDI:
      return mojo::Equals(*(data_.midi), *(other.data_.midi));
    case Tag::CLIPBOARD:
      return mojo::Equals(*(data_.clipboard), *(other.data_.clipboard));
  };

  return false;
}
template <typename StructPtrType>
MidiPermissionDescriptorPtr MidiPermissionDescriptor::Clone() const {
  return New(
      mojo::Clone(sysex)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MidiPermissionDescriptor>::value>::type*>
bool MidiPermissionDescriptor::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->sysex, other_struct.sysex))
    return false;
  return true;
}
template <typename StructPtrType>
ClipboardPermissionDescriptorPtr ClipboardPermissionDescriptor::Clone() const {
  return New(
      mojo::Clone(allowWithoutGesture)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ClipboardPermissionDescriptor>::value>::type*>
bool ClipboardPermissionDescriptor::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->allowWithoutGesture, other_struct.allowWithoutGesture))
    return false;
  return true;
}
template <typename StructPtrType>
PermissionDescriptorPtr PermissionDescriptor::Clone() const {
  return New(
      mojo::Clone(name),
      mojo::Clone(extension)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PermissionDescriptor>::value>::type*>
bool PermissionDescriptor::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->extension, other_struct.extension))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct CONTENT_EXPORT StructTraits<::blink::mojom::MidiPermissionDescriptor::DataView,
                                         ::blink::mojom::MidiPermissionDescriptorPtr> {
  static bool IsNull(const ::blink::mojom::MidiPermissionDescriptorPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::MidiPermissionDescriptorPtr* output) { output->reset(); }

  static decltype(::blink::mojom::MidiPermissionDescriptor::sysex) sysex(
      const ::blink::mojom::MidiPermissionDescriptorPtr& input) {
    return input->sysex;
  }

  static bool Read(::blink::mojom::MidiPermissionDescriptor::DataView input, ::blink::mojom::MidiPermissionDescriptorPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::blink::mojom::ClipboardPermissionDescriptor::DataView,
                                         ::blink::mojom::ClipboardPermissionDescriptorPtr> {
  static bool IsNull(const ::blink::mojom::ClipboardPermissionDescriptorPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::ClipboardPermissionDescriptorPtr* output) { output->reset(); }

  static decltype(::blink::mojom::ClipboardPermissionDescriptor::allowWithoutGesture) allowWithoutGesture(
      const ::blink::mojom::ClipboardPermissionDescriptorPtr& input) {
    return input->allowWithoutGesture;
  }

  static bool Read(::blink::mojom::ClipboardPermissionDescriptor::DataView input, ::blink::mojom::ClipboardPermissionDescriptorPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::blink::mojom::PermissionDescriptor::DataView,
                                         ::blink::mojom::PermissionDescriptorPtr> {
  static bool IsNull(const ::blink::mojom::PermissionDescriptorPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::PermissionDescriptorPtr* output) { output->reset(); }

  static decltype(::blink::mojom::PermissionDescriptor::name) name(
      const ::blink::mojom::PermissionDescriptorPtr& input) {
    return input->name;
  }

  static const decltype(::blink::mojom::PermissionDescriptor::extension)& extension(
      const ::blink::mojom::PermissionDescriptorPtr& input) {
    return input->extension;
  }

  static bool Read(::blink::mojom::PermissionDescriptor::DataView input, ::blink::mojom::PermissionDescriptorPtr* output);
};


template <>
struct CONTENT_EXPORT UnionTraits<::blink::mojom::PermissionDescriptorExtension::DataView,
                                        ::blink::mojom::PermissionDescriptorExtensionPtr> {
  static bool IsNull(const ::blink::mojom::PermissionDescriptorExtensionPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::PermissionDescriptorExtensionPtr* output) { output->reset(); }

  static ::blink::mojom::PermissionDescriptorExtension::Tag GetTag(const ::blink::mojom::PermissionDescriptorExtensionPtr& input) {
    return input->which();
  }

  static const ::blink::mojom::MidiPermissionDescriptorPtr& midi(const ::blink::mojom::PermissionDescriptorExtensionPtr& input) {
    return input->get_midi();
  }

  static const ::blink::mojom::ClipboardPermissionDescriptorPtr& clipboard(const ::blink::mojom::PermissionDescriptorExtensionPtr& input) {
    return input->get_clipboard();
  }

  static bool Read(::blink::mojom::PermissionDescriptorExtension::DataView input, ::blink::mojom::PermissionDescriptorExtensionPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PERMISSIONS_PERMISSION_MOJOM_H_