// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_LEVELDB_WRAPPER_MOJOM_H_
#define CONTENT_COMMON_LEVELDB_WRAPPER_MOJOM_H_

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
#include "content/common/leveldb_wrapper.mojom-shared.h"
#include "components/services/leveldb/public/interfaces/leveldb.mojom.h"
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


namespace content {
namespace mojom {
class LevelDBObserver;
using LevelDBObserverPtr = mojo::InterfacePtr<LevelDBObserver>;
using LevelDBObserverPtrInfo = mojo::InterfacePtrInfo<LevelDBObserver>;
using ThreadSafeLevelDBObserverPtr =
    mojo::ThreadSafeInterfacePtr<LevelDBObserver>;
using LevelDBObserverRequest = mojo::InterfaceRequest<LevelDBObserver>;
using LevelDBObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<LevelDBObserver>;
using ThreadSafeLevelDBObserverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<LevelDBObserver>;
using LevelDBObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<LevelDBObserver>;
using LevelDBObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<LevelDBObserver>;

class LevelDBWrapperGetAllCallback;
using LevelDBWrapperGetAllCallbackPtr = mojo::InterfacePtr<LevelDBWrapperGetAllCallback>;
using LevelDBWrapperGetAllCallbackPtrInfo = mojo::InterfacePtrInfo<LevelDBWrapperGetAllCallback>;
using ThreadSafeLevelDBWrapperGetAllCallbackPtr =
    mojo::ThreadSafeInterfacePtr<LevelDBWrapperGetAllCallback>;
using LevelDBWrapperGetAllCallbackRequest = mojo::InterfaceRequest<LevelDBWrapperGetAllCallback>;
using LevelDBWrapperGetAllCallbackAssociatedPtr =
    mojo::AssociatedInterfacePtr<LevelDBWrapperGetAllCallback>;
using ThreadSafeLevelDBWrapperGetAllCallbackAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<LevelDBWrapperGetAllCallback>;
using LevelDBWrapperGetAllCallbackAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<LevelDBWrapperGetAllCallback>;
using LevelDBWrapperGetAllCallbackAssociatedRequest =
    mojo::AssociatedInterfaceRequest<LevelDBWrapperGetAllCallback>;

class LevelDBWrapper;
using LevelDBWrapperPtr = mojo::InterfacePtr<LevelDBWrapper>;
using LevelDBWrapperPtrInfo = mojo::InterfacePtrInfo<LevelDBWrapper>;
using ThreadSafeLevelDBWrapperPtr =
    mojo::ThreadSafeInterfacePtr<LevelDBWrapper>;
using LevelDBWrapperRequest = mojo::InterfaceRequest<LevelDBWrapper>;
using LevelDBWrapperAssociatedPtr =
    mojo::AssociatedInterfacePtr<LevelDBWrapper>;
using ThreadSafeLevelDBWrapperAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<LevelDBWrapper>;
using LevelDBWrapperAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<LevelDBWrapper>;
using LevelDBWrapperAssociatedRequest =
    mojo::AssociatedInterfaceRequest<LevelDBWrapper>;

class KeyValue;
using KeyValuePtr = mojo::StructPtr<KeyValue>;


class LevelDBObserverProxy;

template <typename ImplRefTraits>
class LevelDBObserverStub;

class LevelDBObserverRequestValidator;

class CONTENT_EXPORT LevelDBObserver
    : public LevelDBObserverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = LevelDBObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = LevelDBObserverStub<ImplRefTraits>;

  using RequestValidator_ = LevelDBObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kKeyAddedMinVersion = 0,
    kKeyChangedMinVersion = 0,
    kKeyDeletedMinVersion = 0,
    kAllDeletedMinVersion = 0,
    kShouldSendOldValueOnMutationsMinVersion = 0,
  };
  virtual ~LevelDBObserver() {}

  virtual void KeyAdded(const std::vector<uint8_t>& key, const std::vector<uint8_t>& value, const std::string& source) = 0;

  virtual void KeyChanged(const std::vector<uint8_t>& key, const std::vector<uint8_t>& new_value, const std::vector<uint8_t>& old_value, const std::string& source) = 0;

  virtual void KeyDeleted(const std::vector<uint8_t>& key, const std::vector<uint8_t>& old_value, const std::string& source) = 0;

  virtual void AllDeleted(const std::string& source) = 0;

  virtual void ShouldSendOldValueOnMutations(bool value) = 0;
};
class CONTENT_EXPORT LevelDBObserverInterceptorForTesting : public LevelDBObserver {
  virtual LevelDBObserver* GetForwardingInterface() = 0;
  void KeyAdded(const std::vector<uint8_t>& key, const std::vector<uint8_t>& value, const std::string& source) override;
  void KeyChanged(const std::vector<uint8_t>& key, const std::vector<uint8_t>& new_value, const std::vector<uint8_t>& old_value, const std::string& source) override;
  void KeyDeleted(const std::vector<uint8_t>& key, const std::vector<uint8_t>& old_value, const std::string& source) override;
  void AllDeleted(const std::string& source) override;
  void ShouldSendOldValueOnMutations(bool value) override;
};
class CONTENT_EXPORT LevelDBObserverAsyncWaiter {
 public:
  explicit LevelDBObserverAsyncWaiter(LevelDBObserver* proxy);
  ~LevelDBObserverAsyncWaiter();

 private:
  LevelDBObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBObserverAsyncWaiter);
};

class LevelDBWrapperGetAllCallbackProxy;

template <typename ImplRefTraits>
class LevelDBWrapperGetAllCallbackStub;

class LevelDBWrapperGetAllCallbackRequestValidator;

class CONTENT_EXPORT LevelDBWrapperGetAllCallback
    : public LevelDBWrapperGetAllCallbackInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = LevelDBWrapperGetAllCallbackProxy;

  template <typename ImplRefTraits>
  using Stub_ = LevelDBWrapperGetAllCallbackStub<ImplRefTraits>;

  using RequestValidator_ = LevelDBWrapperGetAllCallbackRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCompleteMinVersion = 0,
  };
  virtual ~LevelDBWrapperGetAllCallback() {}

  virtual void Complete(bool success) = 0;
};
class CONTENT_EXPORT LevelDBWrapperGetAllCallbackInterceptorForTesting : public LevelDBWrapperGetAllCallback {
  virtual LevelDBWrapperGetAllCallback* GetForwardingInterface() = 0;
  void Complete(bool success) override;
};
class CONTENT_EXPORT LevelDBWrapperGetAllCallbackAsyncWaiter {
 public:
  explicit LevelDBWrapperGetAllCallbackAsyncWaiter(LevelDBWrapperGetAllCallback* proxy);
  ~LevelDBWrapperGetAllCallbackAsyncWaiter();

 private:
  LevelDBWrapperGetAllCallback* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBWrapperGetAllCallbackAsyncWaiter);
};

class LevelDBWrapperProxy;

template <typename ImplRefTraits>
class LevelDBWrapperStub;

class LevelDBWrapperRequestValidator;
class LevelDBWrapperResponseValidator;

class CONTENT_EXPORT LevelDBWrapper
    : public LevelDBWrapperInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = true;

  using Proxy_ = LevelDBWrapperProxy;

  template <typename ImplRefTraits>
  using Stub_ = LevelDBWrapperStub<ImplRefTraits>;

  using RequestValidator_ = LevelDBWrapperRequestValidator;
  using ResponseValidator_ = LevelDBWrapperResponseValidator;
  enum MethodMinVersions : uint32_t {
    kAddObserverMinVersion = 0,
    kPutMinVersion = 0,
    kDeleteMinVersion = 0,
    kDeleteAllMinVersion = 0,
    kGetMinVersion = 0,
    kGetAllMinVersion = 0,
  };
  virtual ~LevelDBWrapper() {}

  virtual void AddObserver(LevelDBObserverAssociatedPtrInfo observer) = 0;


  using PutCallback = base::OnceCallback<void(bool)>;
  virtual void Put(const std::vector<uint8_t>& key, const std::vector<uint8_t>& value, const base::Optional<std::vector<uint8_t>>& client_old_value, const std::string& source, PutCallback callback) = 0;


  using DeleteCallback = base::OnceCallback<void(bool)>;
  virtual void Delete(const std::vector<uint8_t>& key, const base::Optional<std::vector<uint8_t>>& client_old_value, const std::string& source, DeleteCallback callback) = 0;


  using DeleteAllCallback = base::OnceCallback<void(bool)>;
  virtual void DeleteAll(const std::string& source, DeleteAllCallback callback) = 0;


  using GetCallback = base::OnceCallback<void(bool, const std::vector<uint8_t>&)>;
  virtual void Get(const std::vector<uint8_t>& key, GetCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool GetAll(LevelDBWrapperGetAllCallbackAssociatedPtrInfo complete_callback, ::leveldb::mojom::DatabaseError* out_status, std::vector<KeyValuePtr>* out_data);

  using GetAllCallback = base::OnceCallback<void(::leveldb::mojom::DatabaseError, std::vector<KeyValuePtr>)>;
  virtual void GetAll(LevelDBWrapperGetAllCallbackAssociatedPtrInfo complete_callback, GetAllCallback callback) = 0;
};
class CONTENT_EXPORT LevelDBWrapperInterceptorForTesting : public LevelDBWrapper {
  virtual LevelDBWrapper* GetForwardingInterface() = 0;
  void AddObserver(LevelDBObserverAssociatedPtrInfo observer) override;
  void Put(const std::vector<uint8_t>& key, const std::vector<uint8_t>& value, const base::Optional<std::vector<uint8_t>>& client_old_value, const std::string& source, PutCallback callback) override;
  void Delete(const std::vector<uint8_t>& key, const base::Optional<std::vector<uint8_t>>& client_old_value, const std::string& source, DeleteCallback callback) override;
  void DeleteAll(const std::string& source, DeleteAllCallback callback) override;
  void Get(const std::vector<uint8_t>& key, GetCallback callback) override;
  void GetAll(LevelDBWrapperGetAllCallbackAssociatedPtrInfo complete_callback, GetAllCallback callback) override;
};
class CONTENT_EXPORT LevelDBWrapperAsyncWaiter {
 public:
  explicit LevelDBWrapperAsyncWaiter(LevelDBWrapper* proxy);
  ~LevelDBWrapperAsyncWaiter();
  void Put(
      const std::vector<uint8_t>& key, const std::vector<uint8_t>& value, const base::Optional<std::vector<uint8_t>>& client_old_value, const std::string& source, bool* out_success);
  void Delete(
      const std::vector<uint8_t>& key, const base::Optional<std::vector<uint8_t>>& client_old_value, const std::string& source, bool* out_success);
  void DeleteAll(
      const std::string& source, bool* out_success);
  void Get(
      const std::vector<uint8_t>& key, bool* out_success, std::vector<uint8_t>* out_value);
  void GetAll(
      LevelDBWrapperGetAllCallbackAssociatedPtrInfo complete_callback, ::leveldb::mojom::DatabaseError* out_status, std::vector<KeyValuePtr>* out_data);

 private:
  LevelDBWrapper* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBWrapperAsyncWaiter);
};

class CONTENT_EXPORT LevelDBObserverProxy
    : public LevelDBObserver {
 public:
  explicit LevelDBObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void KeyAdded(const std::vector<uint8_t>& key, const std::vector<uint8_t>& value, const std::string& source) final;
  void KeyChanged(const std::vector<uint8_t>& key, const std::vector<uint8_t>& new_value, const std::vector<uint8_t>& old_value, const std::string& source) final;
  void KeyDeleted(const std::vector<uint8_t>& key, const std::vector<uint8_t>& old_value, const std::string& source) final;
  void AllDeleted(const std::string& source) final;
  void ShouldSendOldValueOnMutations(bool value) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT LevelDBWrapperGetAllCallbackProxy
    : public LevelDBWrapperGetAllCallback {
 public:
  explicit LevelDBWrapperGetAllCallbackProxy(mojo::MessageReceiverWithResponder* receiver);
  void Complete(bool success) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT LevelDBWrapperProxy
    : public LevelDBWrapper {
 public:
  explicit LevelDBWrapperProxy(mojo::MessageReceiverWithResponder* receiver);
  void AddObserver(LevelDBObserverAssociatedPtrInfo observer) final;
  void Put(const std::vector<uint8_t>& key, const std::vector<uint8_t>& value, const base::Optional<std::vector<uint8_t>>& client_old_value, const std::string& source, PutCallback callback) final;
  void Delete(const std::vector<uint8_t>& key, const base::Optional<std::vector<uint8_t>>& client_old_value, const std::string& source, DeleteCallback callback) final;
  void DeleteAll(const std::string& source, DeleteAllCallback callback) final;
  void Get(const std::vector<uint8_t>& key, GetCallback callback) final;
  bool GetAll(LevelDBWrapperGetAllCallbackAssociatedPtrInfo complete_callback, ::leveldb::mojom::DatabaseError* out_status, std::vector<KeyValuePtr>* out_data) final;
  void GetAll(LevelDBWrapperGetAllCallbackAssociatedPtrInfo complete_callback, GetAllCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT LevelDBObserverStubDispatch {
 public:
  static bool Accept(LevelDBObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      LevelDBObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<LevelDBObserver>>
class LevelDBObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  LevelDBObserverStub() {}
  ~LevelDBObserverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return LevelDBObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return LevelDBObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT LevelDBWrapperGetAllCallbackStubDispatch {
 public:
  static bool Accept(LevelDBWrapperGetAllCallback* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      LevelDBWrapperGetAllCallback* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<LevelDBWrapperGetAllCallback>>
class LevelDBWrapperGetAllCallbackStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  LevelDBWrapperGetAllCallbackStub() {}
  ~LevelDBWrapperGetAllCallbackStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return LevelDBWrapperGetAllCallbackStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return LevelDBWrapperGetAllCallbackStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT LevelDBWrapperStubDispatch {
 public:
  static bool Accept(LevelDBWrapper* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      LevelDBWrapper* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<LevelDBWrapper>>
class LevelDBWrapperStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  LevelDBWrapperStub() {}
  ~LevelDBWrapperStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return LevelDBWrapperStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return LevelDBWrapperStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT LevelDBObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT LevelDBWrapperGetAllCallbackRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT LevelDBWrapperRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT LevelDBWrapperResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class CONTENT_EXPORT KeyValue {
 public:
  using DataView = KeyValueDataView;
  using Data_ = internal::KeyValue_Data;

  template <typename... Args>
  static KeyValuePtr New(Args&&... args) {
    return KeyValuePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static KeyValuePtr From(const U& u) {
    return mojo::TypeConverter<KeyValuePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, KeyValue>::Convert(*this);
  }


  KeyValue();

  KeyValue(
      const std::vector<uint8_t>& key,
      const std::vector<uint8_t>& value);

  ~KeyValue();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = KeyValuePtr>
  KeyValuePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, KeyValue>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        KeyValue::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        KeyValue::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::KeyValue_UnserializedMessageContext<
            UserType, KeyValue::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<KeyValue::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return KeyValue::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::KeyValue_UnserializedMessageContext<
            UserType, KeyValue::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<KeyValue::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::vector<uint8_t> key;
  std::vector<uint8_t> value;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
KeyValuePtr KeyValue::Clone() const {
  return New(
      mojo::Clone(key),
      mojo::Clone(value)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, KeyValue>::value>::type*>
bool KeyValue::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->key, other_struct.key))
    return false;
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace content

namespace mojo {


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::KeyValue::DataView,
                                         ::content::mojom::KeyValuePtr> {
  static bool IsNull(const ::content::mojom::KeyValuePtr& input) { return !input; }
  static void SetToNull(::content::mojom::KeyValuePtr* output) { output->reset(); }

  static const decltype(::content::mojom::KeyValue::key)& key(
      const ::content::mojom::KeyValuePtr& input) {
    return input->key;
  }

  static const decltype(::content::mojom::KeyValue::value)& value(
      const ::content::mojom::KeyValuePtr& input) {
    return input->value;
  }

  static bool Read(::content::mojom::KeyValue::DataView input, ::content::mojom::KeyValuePtr* output);
};

}  // namespace mojo

#endif  // CONTENT_COMMON_LEVELDB_WRAPPER_MOJOM_H_