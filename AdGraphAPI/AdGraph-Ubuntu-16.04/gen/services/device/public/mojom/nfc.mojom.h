// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_NFC_MOJOM_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_NFC_MOJOM_H_

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
#include "services/device/public/mojom/nfc.mojom-shared.h"
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


namespace device {
namespace mojom {
class NFC;
using NFCPtr = mojo::InterfacePtr<NFC>;
using NFCPtrInfo = mojo::InterfacePtrInfo<NFC>;
using ThreadSafeNFCPtr =
    mojo::ThreadSafeInterfacePtr<NFC>;
using NFCRequest = mojo::InterfaceRequest<NFC>;
using NFCAssociatedPtr =
    mojo::AssociatedInterfacePtr<NFC>;
using ThreadSafeNFCAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<NFC>;
using NFCAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NFC>;
using NFCAssociatedRequest =
    mojo::AssociatedInterfaceRequest<NFC>;

class NFCClient;
using NFCClientPtr = mojo::InterfacePtr<NFCClient>;
using NFCClientPtrInfo = mojo::InterfacePtrInfo<NFCClient>;
using ThreadSafeNFCClientPtr =
    mojo::ThreadSafeInterfacePtr<NFCClient>;
using NFCClientRequest = mojo::InterfaceRequest<NFCClient>;
using NFCClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<NFCClient>;
using ThreadSafeNFCClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<NFCClient>;
using NFCClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NFCClient>;
using NFCClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<NFCClient>;

class NFCError;
using NFCErrorPtr = mojo::InlinedStructPtr<NFCError>;

class NFCRecord;
using NFCRecordPtr = mojo::StructPtr<NFCRecord>;

class NFCMessage;
using NFCMessagePtr = mojo::StructPtr<NFCMessage>;

class NFCPushOptions;
using NFCPushOptionsPtr = mojo::InlinedStructPtr<NFCPushOptions>;

class NFCRecordTypeFilter;
using NFCRecordTypeFilterPtr = mojo::InlinedStructPtr<NFCRecordTypeFilter>;

class NFCWatchOptions;
using NFCWatchOptionsPtr = mojo::StructPtr<NFCWatchOptions>;


class NFCProxy;

template <typename ImplRefTraits>
class NFCStub;

class NFCRequestValidator;
class NFCResponseValidator;

class  NFC
    : public NFCInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = NFCProxy;

  template <typename ImplRefTraits>
  using Stub_ = NFCStub<ImplRefTraits>;

  using RequestValidator_ = NFCRequestValidator;
  using ResponseValidator_ = NFCResponseValidator;
  enum MethodMinVersions : uint32_t {
    kSetClientMinVersion = 0,
    kPushMinVersion = 0,
    kCancelPushMinVersion = 0,
    kWatchMinVersion = 0,
    kCancelWatchMinVersion = 0,
    kCancelAllWatchesMinVersion = 0,
    kSuspendNFCOperationsMinVersion = 0,
    kResumeNFCOperationsMinVersion = 0,
  };
  virtual ~NFC() {}

  virtual void SetClient(NFCClientPtr client) = 0;


  using PushCallback = base::OnceCallback<void(NFCErrorPtr)>;
  virtual void Push(NFCMessagePtr message, NFCPushOptionsPtr options, PushCallback callback) = 0;


  using CancelPushCallback = base::OnceCallback<void(NFCErrorPtr)>;
  virtual void CancelPush(NFCPushTarget target, CancelPushCallback callback) = 0;


  using WatchCallback = base::OnceCallback<void(uint32_t, NFCErrorPtr)>;
  virtual void Watch(NFCWatchOptionsPtr options, WatchCallback callback) = 0;


  using CancelWatchCallback = base::OnceCallback<void(NFCErrorPtr)>;
  virtual void CancelWatch(uint32_t id, CancelWatchCallback callback) = 0;


  using CancelAllWatchesCallback = base::OnceCallback<void(NFCErrorPtr)>;
  virtual void CancelAllWatches(CancelAllWatchesCallback callback) = 0;

  virtual void SuspendNFCOperations() = 0;

  virtual void ResumeNFCOperations() = 0;
};
class  NFCInterceptorForTesting : public NFC {
  virtual NFC* GetForwardingInterface() = 0;
  void SetClient(NFCClientPtr client) override;
  void Push(NFCMessagePtr message, NFCPushOptionsPtr options, PushCallback callback) override;
  void CancelPush(NFCPushTarget target, CancelPushCallback callback) override;
  void Watch(NFCWatchOptionsPtr options, WatchCallback callback) override;
  void CancelWatch(uint32_t id, CancelWatchCallback callback) override;
  void CancelAllWatches(CancelAllWatchesCallback callback) override;
  void SuspendNFCOperations() override;
  void ResumeNFCOperations() override;
};
class  NFCAsyncWaiter {
 public:
  explicit NFCAsyncWaiter(NFC* proxy);
  ~NFCAsyncWaiter();
  void Push(
      NFCMessagePtr message, NFCPushOptionsPtr options, NFCErrorPtr* out_error);
  void CancelPush(
      NFCPushTarget target, NFCErrorPtr* out_error);
  void Watch(
      NFCWatchOptionsPtr options, uint32_t* out_id, NFCErrorPtr* out_error);
  void CancelWatch(
      uint32_t id, NFCErrorPtr* out_error);
  void CancelAllWatches(
      NFCErrorPtr* out_error);

 private:
  NFC* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NFCAsyncWaiter);
};

class NFCClientProxy;

template <typename ImplRefTraits>
class NFCClientStub;

class NFCClientRequestValidator;

class  NFCClient
    : public NFCClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = NFCClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = NFCClientStub<ImplRefTraits>;

  using RequestValidator_ = NFCClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnWatchMinVersion = 0,
  };
  virtual ~NFCClient() {}

  virtual void OnWatch(const std::vector<uint32_t>& watch_ids, NFCMessagePtr message) = 0;
};
class  NFCClientInterceptorForTesting : public NFCClient {
  virtual NFCClient* GetForwardingInterface() = 0;
  void OnWatch(const std::vector<uint32_t>& watch_ids, NFCMessagePtr message) override;
};
class  NFCClientAsyncWaiter {
 public:
  explicit NFCClientAsyncWaiter(NFCClient* proxy);
  ~NFCClientAsyncWaiter();

 private:
  NFCClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NFCClientAsyncWaiter);
};

class  NFCProxy
    : public NFC {
 public:
  explicit NFCProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetClient(NFCClientPtr client) final;
  void Push(NFCMessagePtr message, NFCPushOptionsPtr options, PushCallback callback) final;
  void CancelPush(NFCPushTarget target, CancelPushCallback callback) final;
  void Watch(NFCWatchOptionsPtr options, WatchCallback callback) final;
  void CancelWatch(uint32_t id, CancelWatchCallback callback) final;
  void CancelAllWatches(CancelAllWatchesCallback callback) final;
  void SuspendNFCOperations() final;
  void ResumeNFCOperations() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  NFCClientProxy
    : public NFCClient {
 public:
  explicit NFCClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnWatch(const std::vector<uint32_t>& watch_ids, NFCMessagePtr message) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  NFCStubDispatch {
 public:
  static bool Accept(NFC* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      NFC* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<NFC>>
class NFCStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  NFCStub() {}
  ~NFCStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NFCStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NFCStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  NFCClientStubDispatch {
 public:
  static bool Accept(NFCClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      NFCClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<NFCClient>>
class NFCClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  NFCClientStub() {}
  ~NFCClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NFCClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NFCClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  NFCRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  NFCClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  NFCResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};


class  NFCError {
 public:
  using DataView = NFCErrorDataView;
  using Data_ = internal::NFCError_Data;

  template <typename... Args>
  static NFCErrorPtr New(Args&&... args) {
    return NFCErrorPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static NFCErrorPtr From(const U& u) {
    return mojo::TypeConverter<NFCErrorPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NFCError>::Convert(*this);
  }


  NFCError();

  explicit NFCError(
      NFCErrorType error_type);

  ~NFCError();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = NFCErrorPtr>
  NFCErrorPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, NFCError>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        NFCError::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        NFCError::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::NFCError_UnserializedMessageContext<
            UserType, NFCError::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<NFCError::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return NFCError::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::NFCError_UnserializedMessageContext<
            UserType, NFCError::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<NFCError::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  NFCErrorType error_type;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




class  NFCPushOptions {
 public:
  using DataView = NFCPushOptionsDataView;
  using Data_ = internal::NFCPushOptions_Data;

  template <typename... Args>
  static NFCPushOptionsPtr New(Args&&... args) {
    return NFCPushOptionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static NFCPushOptionsPtr From(const U& u) {
    return mojo::TypeConverter<NFCPushOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NFCPushOptions>::Convert(*this);
  }


  NFCPushOptions();

  NFCPushOptions(
      NFCPushTarget target,
      double timeout,
      bool ignore_read);

  ~NFCPushOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = NFCPushOptionsPtr>
  NFCPushOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, NFCPushOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        NFCPushOptions::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        NFCPushOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::NFCPushOptions_UnserializedMessageContext<
            UserType, NFCPushOptions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<NFCPushOptions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return NFCPushOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::NFCPushOptions_UnserializedMessageContext<
            UserType, NFCPushOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<NFCPushOptions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  NFCPushTarget target;
  double timeout;
  bool ignore_read;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  NFCRecordTypeFilter {
 public:
  using DataView = NFCRecordTypeFilterDataView;
  using Data_ = internal::NFCRecordTypeFilter_Data;

  template <typename... Args>
  static NFCRecordTypeFilterPtr New(Args&&... args) {
    return NFCRecordTypeFilterPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static NFCRecordTypeFilterPtr From(const U& u) {
    return mojo::TypeConverter<NFCRecordTypeFilterPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NFCRecordTypeFilter>::Convert(*this);
  }


  NFCRecordTypeFilter();

  explicit NFCRecordTypeFilter(
      NFCRecordType record_type);

  ~NFCRecordTypeFilter();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = NFCRecordTypeFilterPtr>
  NFCRecordTypeFilterPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, NFCRecordTypeFilter>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        NFCRecordTypeFilter::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        NFCRecordTypeFilter::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::NFCRecordTypeFilter_UnserializedMessageContext<
            UserType, NFCRecordTypeFilter::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<NFCRecordTypeFilter::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return NFCRecordTypeFilter::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::NFCRecordTypeFilter_UnserializedMessageContext<
            UserType, NFCRecordTypeFilter::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<NFCRecordTypeFilter::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  NFCRecordType record_type;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};






class  NFCRecord {
 public:
  using DataView = NFCRecordDataView;
  using Data_ = internal::NFCRecord_Data;

  template <typename... Args>
  static NFCRecordPtr New(Args&&... args) {
    return NFCRecordPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static NFCRecordPtr From(const U& u) {
    return mojo::TypeConverter<NFCRecordPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NFCRecord>::Convert(*this);
  }


  NFCRecord();

  NFCRecord(
      NFCRecordType record_type,
      const base::Optional<std::string>& media_type,
      const std::vector<uint8_t>& data);

  ~NFCRecord();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = NFCRecordPtr>
  NFCRecordPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, NFCRecord>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        NFCRecord::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        NFCRecord::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::NFCRecord_UnserializedMessageContext<
            UserType, NFCRecord::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<NFCRecord::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return NFCRecord::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::NFCRecord_UnserializedMessageContext<
            UserType, NFCRecord::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<NFCRecord::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  NFCRecordType record_type;
  base::Optional<std::string> media_type;
  std::vector<uint8_t> data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  NFCMessage {
 public:
  using DataView = NFCMessageDataView;
  using Data_ = internal::NFCMessage_Data;
  static constexpr uint32_t kMaxSize = 32768U;

  template <typename... Args>
  static NFCMessagePtr New(Args&&... args) {
    return NFCMessagePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static NFCMessagePtr From(const U& u) {
    return mojo::TypeConverter<NFCMessagePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NFCMessage>::Convert(*this);
  }


  NFCMessage();

  NFCMessage(
      std::vector<NFCRecordPtr> data,
      const base::Optional<std::string>& url);

  ~NFCMessage();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = NFCMessagePtr>
  NFCMessagePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, NFCMessage>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        NFCMessage::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        NFCMessage::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::NFCMessage_UnserializedMessageContext<
            UserType, NFCMessage::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<NFCMessage::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return NFCMessage::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::NFCMessage_UnserializedMessageContext<
            UserType, NFCMessage::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<NFCMessage::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::vector<NFCRecordPtr> data;
  base::Optional<std::string> url;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(NFCMessage);
};




class  NFCWatchOptions {
 public:
  using DataView = NFCWatchOptionsDataView;
  using Data_ = internal::NFCWatchOptions_Data;

  template <typename... Args>
  static NFCWatchOptionsPtr New(Args&&... args) {
    return NFCWatchOptionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static NFCWatchOptionsPtr From(const U& u) {
    return mojo::TypeConverter<NFCWatchOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NFCWatchOptions>::Convert(*this);
  }


  NFCWatchOptions();

  NFCWatchOptions(
      const base::Optional<std::string>& url,
      NFCRecordTypeFilterPtr record_filter,
      const base::Optional<std::string>& media_type,
      NFCWatchMode mode);

  ~NFCWatchOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = NFCWatchOptionsPtr>
  NFCWatchOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, NFCWatchOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        NFCWatchOptions::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        NFCWatchOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::NFCWatchOptions_UnserializedMessageContext<
            UserType, NFCWatchOptions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<NFCWatchOptions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return NFCWatchOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::NFCWatchOptions_UnserializedMessageContext<
            UserType, NFCWatchOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<NFCWatchOptions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  base::Optional<std::string> url;
  NFCRecordTypeFilterPtr record_filter;
  base::Optional<std::string> media_type;
  NFCWatchMode mode;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(NFCWatchOptions);
};

template <typename StructPtrType>
NFCErrorPtr NFCError::Clone() const {
  return New(
      mojo::Clone(error_type)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, NFCError>::value>::type*>
bool NFCError::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->error_type, other_struct.error_type))
    return false;
  return true;
}
template <typename StructPtrType>
NFCRecordPtr NFCRecord::Clone() const {
  return New(
      mojo::Clone(record_type),
      mojo::Clone(media_type),
      mojo::Clone(data)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, NFCRecord>::value>::type*>
bool NFCRecord::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->record_type, other_struct.record_type))
    return false;
  if (!mojo::Equals(this->media_type, other_struct.media_type))
    return false;
  if (!mojo::Equals(this->data, other_struct.data))
    return false;
  return true;
}
template <typename StructPtrType>
NFCMessagePtr NFCMessage::Clone() const {
  return New(
      mojo::Clone(data),
      mojo::Clone(url)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, NFCMessage>::value>::type*>
bool NFCMessage::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->data, other_struct.data))
    return false;
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  return true;
}
template <typename StructPtrType>
NFCPushOptionsPtr NFCPushOptions::Clone() const {
  return New(
      mojo::Clone(target),
      mojo::Clone(timeout),
      mojo::Clone(ignore_read)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, NFCPushOptions>::value>::type*>
bool NFCPushOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->target, other_struct.target))
    return false;
  if (!mojo::Equals(this->timeout, other_struct.timeout))
    return false;
  if (!mojo::Equals(this->ignore_read, other_struct.ignore_read))
    return false;
  return true;
}
template <typename StructPtrType>
NFCRecordTypeFilterPtr NFCRecordTypeFilter::Clone() const {
  return New(
      mojo::Clone(record_type)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, NFCRecordTypeFilter>::value>::type*>
bool NFCRecordTypeFilter::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->record_type, other_struct.record_type))
    return false;
  return true;
}
template <typename StructPtrType>
NFCWatchOptionsPtr NFCWatchOptions::Clone() const {
  return New(
      mojo::Clone(url),
      mojo::Clone(record_filter),
      mojo::Clone(media_type),
      mojo::Clone(mode)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, NFCWatchOptions>::value>::type*>
bool NFCWatchOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->record_filter, other_struct.record_filter))
    return false;
  if (!mojo::Equals(this->media_type, other_struct.media_type))
    return false;
  if (!mojo::Equals(this->mode, other_struct.mode))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace device

namespace mojo {


template <>
struct  StructTraits<::device::mojom::NFCError::DataView,
                                         ::device::mojom::NFCErrorPtr> {
  static bool IsNull(const ::device::mojom::NFCErrorPtr& input) { return !input; }
  static void SetToNull(::device::mojom::NFCErrorPtr* output) { output->reset(); }

  static decltype(::device::mojom::NFCError::error_type) error_type(
      const ::device::mojom::NFCErrorPtr& input) {
    return input->error_type;
  }

  static bool Read(::device::mojom::NFCError::DataView input, ::device::mojom::NFCErrorPtr* output);
};


template <>
struct  StructTraits<::device::mojom::NFCRecord::DataView,
                                         ::device::mojom::NFCRecordPtr> {
  static bool IsNull(const ::device::mojom::NFCRecordPtr& input) { return !input; }
  static void SetToNull(::device::mojom::NFCRecordPtr* output) { output->reset(); }

  static decltype(::device::mojom::NFCRecord::record_type) record_type(
      const ::device::mojom::NFCRecordPtr& input) {
    return input->record_type;
  }

  static const decltype(::device::mojom::NFCRecord::media_type)& media_type(
      const ::device::mojom::NFCRecordPtr& input) {
    return input->media_type;
  }

  static const decltype(::device::mojom::NFCRecord::data)& data(
      const ::device::mojom::NFCRecordPtr& input) {
    return input->data;
  }

  static bool Read(::device::mojom::NFCRecord::DataView input, ::device::mojom::NFCRecordPtr* output);
};


template <>
struct  StructTraits<::device::mojom::NFCMessage::DataView,
                                         ::device::mojom::NFCMessagePtr> {
  static bool IsNull(const ::device::mojom::NFCMessagePtr& input) { return !input; }
  static void SetToNull(::device::mojom::NFCMessagePtr* output) { output->reset(); }

  static const decltype(::device::mojom::NFCMessage::data)& data(
      const ::device::mojom::NFCMessagePtr& input) {
    return input->data;
  }

  static const decltype(::device::mojom::NFCMessage::url)& url(
      const ::device::mojom::NFCMessagePtr& input) {
    return input->url;
  }

  static bool Read(::device::mojom::NFCMessage::DataView input, ::device::mojom::NFCMessagePtr* output);
};


template <>
struct  StructTraits<::device::mojom::NFCPushOptions::DataView,
                                         ::device::mojom::NFCPushOptionsPtr> {
  static bool IsNull(const ::device::mojom::NFCPushOptionsPtr& input) { return !input; }
  static void SetToNull(::device::mojom::NFCPushOptionsPtr* output) { output->reset(); }

  static decltype(::device::mojom::NFCPushOptions::target) target(
      const ::device::mojom::NFCPushOptionsPtr& input) {
    return input->target;
  }

  static decltype(::device::mojom::NFCPushOptions::timeout) timeout(
      const ::device::mojom::NFCPushOptionsPtr& input) {
    return input->timeout;
  }

  static decltype(::device::mojom::NFCPushOptions::ignore_read) ignore_read(
      const ::device::mojom::NFCPushOptionsPtr& input) {
    return input->ignore_read;
  }

  static bool Read(::device::mojom::NFCPushOptions::DataView input, ::device::mojom::NFCPushOptionsPtr* output);
};


template <>
struct  StructTraits<::device::mojom::NFCRecordTypeFilter::DataView,
                                         ::device::mojom::NFCRecordTypeFilterPtr> {
  static bool IsNull(const ::device::mojom::NFCRecordTypeFilterPtr& input) { return !input; }
  static void SetToNull(::device::mojom::NFCRecordTypeFilterPtr* output) { output->reset(); }

  static decltype(::device::mojom::NFCRecordTypeFilter::record_type) record_type(
      const ::device::mojom::NFCRecordTypeFilterPtr& input) {
    return input->record_type;
  }

  static bool Read(::device::mojom::NFCRecordTypeFilter::DataView input, ::device::mojom::NFCRecordTypeFilterPtr* output);
};


template <>
struct  StructTraits<::device::mojom::NFCWatchOptions::DataView,
                                         ::device::mojom::NFCWatchOptionsPtr> {
  static bool IsNull(const ::device::mojom::NFCWatchOptionsPtr& input) { return !input; }
  static void SetToNull(::device::mojom::NFCWatchOptionsPtr* output) { output->reset(); }

  static const decltype(::device::mojom::NFCWatchOptions::url)& url(
      const ::device::mojom::NFCWatchOptionsPtr& input) {
    return input->url;
  }

  static const decltype(::device::mojom::NFCWatchOptions::record_filter)& record_filter(
      const ::device::mojom::NFCWatchOptionsPtr& input) {
    return input->record_filter;
  }

  static const decltype(::device::mojom::NFCWatchOptions::media_type)& media_type(
      const ::device::mojom::NFCWatchOptionsPtr& input) {
    return input->media_type;
  }

  static decltype(::device::mojom::NFCWatchOptions::mode) mode(
      const ::device::mojom::NFCWatchOptionsPtr& input) {
    return input->mode;
  }

  static bool Read(::device::mojom::NFCWatchOptions::DataView input, ::device::mojom::NFCWatchOptionsPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_NFC_MOJOM_H_