// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_PREFERENCES_PUBLIC_MOJOM_PREFERENCES_MOJOM_H_
#define SERVICES_PREFERENCES_PUBLIC_MOJOM_PREFERENCES_MOJOM_H_

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
#include "services/preferences/public/mojom/preferences.mojom-shared.h"
#include "mojo/public/mojom/base/file_path.mojom.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "mojo/public/mojom/base/values.mojom.h"
#include "services/preferences/public/mojom/tracked_preference_validation_delegate.mojom.h"
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
#include "components/prefs/persistent_pref_store.h"
#include "components/prefs/pref_value_store.h"


namespace prefs {
namespace mojom {
extern const char kServiceName[];
extern const char kLocalStateServiceName[];
class PrefStoreObserver;
using PrefStoreObserverPtr = mojo::InterfacePtr<PrefStoreObserver>;
using PrefStoreObserverPtrInfo = mojo::InterfacePtrInfo<PrefStoreObserver>;
using ThreadSafePrefStoreObserverPtr =
    mojo::ThreadSafeInterfacePtr<PrefStoreObserver>;
using PrefStoreObserverRequest = mojo::InterfaceRequest<PrefStoreObserver>;
using PrefStoreObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<PrefStoreObserver>;
using ThreadSafePrefStoreObserverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PrefStoreObserver>;
using PrefStoreObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PrefStoreObserver>;
using PrefStoreObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PrefStoreObserver>;

class PrefStoreConnector;
using PrefStoreConnectorPtr = mojo::InterfacePtr<PrefStoreConnector>;
using PrefStoreConnectorPtrInfo = mojo::InterfacePtrInfo<PrefStoreConnector>;
using ThreadSafePrefStoreConnectorPtr =
    mojo::ThreadSafeInterfacePtr<PrefStoreConnector>;
using PrefStoreConnectorRequest = mojo::InterfaceRequest<PrefStoreConnector>;
using PrefStoreConnectorAssociatedPtr =
    mojo::AssociatedInterfacePtr<PrefStoreConnector>;
using ThreadSafePrefStoreConnectorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PrefStoreConnector>;
using PrefStoreConnectorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PrefStoreConnector>;
using PrefStoreConnectorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PrefStoreConnector>;

class PersistentPrefStore;
using PersistentPrefStorePtr = mojo::InterfacePtr<PersistentPrefStore>;
using PersistentPrefStorePtrInfo = mojo::InterfacePtrInfo<PersistentPrefStore>;
using ThreadSafePersistentPrefStorePtr =
    mojo::ThreadSafeInterfacePtr<PersistentPrefStore>;
using PersistentPrefStoreRequest = mojo::InterfaceRequest<PersistentPrefStore>;
using PersistentPrefStoreAssociatedPtr =
    mojo::AssociatedInterfacePtr<PersistentPrefStore>;
using ThreadSafePersistentPrefStoreAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PersistentPrefStore>;
using PersistentPrefStoreAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PersistentPrefStore>;
using PersistentPrefStoreAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PersistentPrefStore>;

class ResetOnLoadObserver;
using ResetOnLoadObserverPtr = mojo::InterfacePtr<ResetOnLoadObserver>;
using ResetOnLoadObserverPtrInfo = mojo::InterfacePtrInfo<ResetOnLoadObserver>;
using ThreadSafeResetOnLoadObserverPtr =
    mojo::ThreadSafeInterfacePtr<ResetOnLoadObserver>;
using ResetOnLoadObserverRequest = mojo::InterfaceRequest<ResetOnLoadObserver>;
using ResetOnLoadObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<ResetOnLoadObserver>;
using ThreadSafeResetOnLoadObserverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ResetOnLoadObserver>;
using ResetOnLoadObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ResetOnLoadObserver>;
using ResetOnLoadObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ResetOnLoadObserver>;

class PrefStoreConnection;
using PrefStoreConnectionPtr = mojo::StructPtr<PrefStoreConnection>;

class PersistentPrefStoreConnection;
using PersistentPrefStoreConnectionPtr = mojo::StructPtr<PersistentPrefStoreConnection>;

class IncognitoPersistentPrefStoreConnection;
using IncognitoPersistentPrefStoreConnectionPtr = mojo::StructPtr<IncognitoPersistentPrefStoreConnection>;

class SubPrefUpdate;
using SubPrefUpdatePtr = mojo::StructPtr<SubPrefUpdate>;

class PrefUpdate;
using PrefUpdatePtr = mojo::StructPtr<PrefUpdate>;

class PrefRegistry;
using PrefRegistryPtr = mojo::StructPtr<PrefRegistry>;

class PrefRegistration;
using PrefRegistrationPtr = mojo::StructPtr<PrefRegistration>;

class TrackedPersistentPrefStoreConfiguration;
using TrackedPersistentPrefStoreConfigurationPtr = mojo::StructPtr<TrackedPersistentPrefStoreConfiguration>;

class TrackedPreferenceMetadata;
using TrackedPreferenceMetadataPtr = mojo::StructPtr<TrackedPreferenceMetadata>;

class PrefUpdateValue;

typedef mojo::StructPtr<PrefUpdateValue> PrefUpdateValuePtr;


class PrefStoreObserverProxy;

template <typename ImplRefTraits>
class PrefStoreObserverStub;

class PrefStoreObserverRequestValidator;

class  PrefStoreObserver
    : public PrefStoreObserverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = PrefStoreObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = PrefStoreObserverStub<ImplRefTraits>;

  using RequestValidator_ = PrefStoreObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnPrefsChangedMinVersion = 0,
    kOnInitializationCompletedMinVersion = 0,
    kOnPrefChangeAckMinVersion = 0,
  };
  virtual ~PrefStoreObserver() {}

  virtual void OnPrefsChanged(std::vector<PrefUpdatePtr> updates) = 0;

  virtual void OnInitializationCompleted(bool succeeded) = 0;

  virtual void OnPrefChangeAck() = 0;
};
class  PrefStoreObserverInterceptorForTesting : public PrefStoreObserver {
  virtual PrefStoreObserver* GetForwardingInterface() = 0;
  void OnPrefsChanged(std::vector<PrefUpdatePtr> updates) override;
  void OnInitializationCompleted(bool succeeded) override;
  void OnPrefChangeAck() override;
};
class  PrefStoreObserverAsyncWaiter {
 public:
  explicit PrefStoreObserverAsyncWaiter(PrefStoreObserver* proxy);
  ~PrefStoreObserverAsyncWaiter();

 private:
  PrefStoreObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PrefStoreObserverAsyncWaiter);
};

class PrefStoreConnectorProxy;

template <typename ImplRefTraits>
class PrefStoreConnectorStub;

class PrefStoreConnectorRequestValidator;
class PrefStoreConnectorResponseValidator;

class  PrefStoreConnector
    : public PrefStoreConnectorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = PrefStoreConnectorProxy;

  template <typename ImplRefTraits>
  using Stub_ = PrefStoreConnectorStub<ImplRefTraits>;

  using RequestValidator_ = PrefStoreConnectorRequestValidator;
  using ResponseValidator_ = PrefStoreConnectorResponseValidator;
  enum MethodMinVersions : uint32_t {
    kConnectMinVersion = 0,
  };
  virtual ~PrefStoreConnector() {}


  using ConnectCallback = base::OnceCallback<void(PersistentPrefStoreConnectionPtr, IncognitoPersistentPrefStoreConnectionPtr, std::vector<PrefRegistrationPtr>, base::flat_map<::PrefValueStore::PrefStoreType, PrefStoreConnectionPtr>)>;
  virtual void Connect(PrefRegistryPtr pref_registry, ConnectCallback callback) = 0;
};
class  PrefStoreConnectorInterceptorForTesting : public PrefStoreConnector {
  virtual PrefStoreConnector* GetForwardingInterface() = 0;
  void Connect(PrefRegistryPtr pref_registry, ConnectCallback callback) override;
};
class  PrefStoreConnectorAsyncWaiter {
 public:
  explicit PrefStoreConnectorAsyncWaiter(PrefStoreConnector* proxy);
  ~PrefStoreConnectorAsyncWaiter();
  void Connect(
      PrefRegistryPtr pref_registry, PersistentPrefStoreConnectionPtr* out_connection, IncognitoPersistentPrefStoreConnectionPtr* out_underlay, std::vector<PrefRegistrationPtr>* out_remote_defaults, base::flat_map<::PrefValueStore::PrefStoreType, PrefStoreConnectionPtr>* out_connections);

 private:
  PrefStoreConnector* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PrefStoreConnectorAsyncWaiter);
};

class PersistentPrefStoreProxy;

template <typename ImplRefTraits>
class PersistentPrefStoreStub;

class PersistentPrefStoreRequestValidator;
class PersistentPrefStoreResponseValidator;

class  PersistentPrefStore
    : public PersistentPrefStoreInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = PersistentPrefStoreProxy;

  template <typename ImplRefTraits>
  using Stub_ = PersistentPrefStoreStub<ImplRefTraits>;

  using RequestValidator_ = PersistentPrefStoreRequestValidator;
  using ResponseValidator_ = PersistentPrefStoreResponseValidator;
  enum MethodMinVersions : uint32_t {
    kSetValuesMinVersion = 0,
    kRequestValueMinVersion = 0,
    kCommitPendingWriteMinVersion = 0,
    kSchedulePendingLossyWritesMinVersion = 0,
    kClearMutableValuesMinVersion = 0,
    kOnStoreDeletionFromDiskMinVersion = 0,
  };
  virtual ~PersistentPrefStore() {}

  virtual void SetValues(std::vector<PrefUpdatePtr> updates) = 0;

  virtual void RequestValue(const std::string& key, const std::vector<std::string>& sub_pref_path) = 0;


  using CommitPendingWriteCallback = base::OnceCallback<void()>;
  virtual void CommitPendingWrite(CommitPendingWriteCallback callback) = 0;

  virtual void SchedulePendingLossyWrites() = 0;

  virtual void ClearMutableValues() = 0;

  virtual void OnStoreDeletionFromDisk() = 0;
};
class  PersistentPrefStoreInterceptorForTesting : public PersistentPrefStore {
  virtual PersistentPrefStore* GetForwardingInterface() = 0;
  void SetValues(std::vector<PrefUpdatePtr> updates) override;
  void RequestValue(const std::string& key, const std::vector<std::string>& sub_pref_path) override;
  void CommitPendingWrite(CommitPendingWriteCallback callback) override;
  void SchedulePendingLossyWrites() override;
  void ClearMutableValues() override;
  void OnStoreDeletionFromDisk() override;
};
class  PersistentPrefStoreAsyncWaiter {
 public:
  explicit PersistentPrefStoreAsyncWaiter(PersistentPrefStore* proxy);
  ~PersistentPrefStoreAsyncWaiter();
  void CommitPendingWrite(
      );

 private:
  PersistentPrefStore* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PersistentPrefStoreAsyncWaiter);
};

class ResetOnLoadObserverProxy;

template <typename ImplRefTraits>
class ResetOnLoadObserverStub;

class ResetOnLoadObserverRequestValidator;

class  ResetOnLoadObserver
    : public ResetOnLoadObserverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ResetOnLoadObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = ResetOnLoadObserverStub<ImplRefTraits>;

  using RequestValidator_ = ResetOnLoadObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnResetOnLoadMinVersion = 0,
  };
  virtual ~ResetOnLoadObserver() {}

  virtual void OnResetOnLoad() = 0;
};
class  ResetOnLoadObserverInterceptorForTesting : public ResetOnLoadObserver {
  virtual ResetOnLoadObserver* GetForwardingInterface() = 0;
  void OnResetOnLoad() override;
};
class  ResetOnLoadObserverAsyncWaiter {
 public:
  explicit ResetOnLoadObserverAsyncWaiter(ResetOnLoadObserver* proxy);
  ~ResetOnLoadObserverAsyncWaiter();

 private:
  ResetOnLoadObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ResetOnLoadObserverAsyncWaiter);
};

class  PrefStoreObserverProxy
    : public PrefStoreObserver {
 public:
  explicit PrefStoreObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnPrefsChanged(std::vector<PrefUpdatePtr> updates) final;
  void OnInitializationCompleted(bool succeeded) final;
  void OnPrefChangeAck() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  PrefStoreConnectorProxy
    : public PrefStoreConnector {
 public:
  explicit PrefStoreConnectorProxy(mojo::MessageReceiverWithResponder* receiver);
  void Connect(PrefRegistryPtr pref_registry, ConnectCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  PersistentPrefStoreProxy
    : public PersistentPrefStore {
 public:
  explicit PersistentPrefStoreProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetValues(std::vector<PrefUpdatePtr> updates) final;
  void RequestValue(const std::string& key, const std::vector<std::string>& sub_pref_path) final;
  void CommitPendingWrite(CommitPendingWriteCallback callback) final;
  void SchedulePendingLossyWrites() final;
  void ClearMutableValues() final;
  void OnStoreDeletionFromDisk() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  ResetOnLoadObserverProxy
    : public ResetOnLoadObserver {
 public:
  explicit ResetOnLoadObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnResetOnLoad() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  PrefStoreObserverStubDispatch {
 public:
  static bool Accept(PrefStoreObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PrefStoreObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PrefStoreObserver>>
class PrefStoreObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PrefStoreObserverStub() {}
  ~PrefStoreObserverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PrefStoreObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PrefStoreObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  PrefStoreConnectorStubDispatch {
 public:
  static bool Accept(PrefStoreConnector* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PrefStoreConnector* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PrefStoreConnector>>
class PrefStoreConnectorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PrefStoreConnectorStub() {}
  ~PrefStoreConnectorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PrefStoreConnectorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PrefStoreConnectorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  PersistentPrefStoreStubDispatch {
 public:
  static bool Accept(PersistentPrefStore* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PersistentPrefStore* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PersistentPrefStore>>
class PersistentPrefStoreStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PersistentPrefStoreStub() {}
  ~PersistentPrefStoreStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PersistentPrefStoreStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PersistentPrefStoreStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ResetOnLoadObserverStubDispatch {
 public:
  static bool Accept(ResetOnLoadObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ResetOnLoadObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ResetOnLoadObserver>>
class ResetOnLoadObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ResetOnLoadObserverStub() {}
  ~ResetOnLoadObserverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ResetOnLoadObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ResetOnLoadObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  PrefStoreObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  PrefStoreConnectorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  PersistentPrefStoreRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ResetOnLoadObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  PrefStoreConnectorResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  PersistentPrefStoreResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};











class  PrefUpdateValue {
 public:
  using DataView = PrefUpdateValueDataView;
  using Data_ = internal::PrefUpdateValue_Data;
  using Tag = Data_::PrefUpdateValue_Tag;

  static PrefUpdateValuePtr New() {
    return PrefUpdateValuePtr(base::in_place);
  }
  // Construct an instance holding |split_updates|.
  static PrefUpdateValuePtr
  NewSplitUpdates(
      std::vector<SubPrefUpdatePtr> split_updates) {
    auto result = PrefUpdateValuePtr(base::in_place);
    result->set_split_updates(std::move(split_updates));
    return result;
  }
  // Construct an instance holding |atomic_update|.
  static PrefUpdateValuePtr
  NewAtomicUpdate(
      base::Optional<base::Value> atomic_update) {
    auto result = PrefUpdateValuePtr(base::in_place);
    result->set_atomic_update(std::move(atomic_update));
    return result;
  }

  template <typename U>
  static PrefUpdateValuePtr From(const U& u) {
    return mojo::TypeConverter<PrefUpdateValuePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PrefUpdateValue>::Convert(*this);
  }

  PrefUpdateValue();
  ~PrefUpdateValue();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = PrefUpdateValuePtr>
  PrefUpdateValuePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PrefUpdateValue>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  Tag which() const {
    return tag_;
  }


  bool is_split_updates() const { return tag_ == Tag::SPLIT_UPDATES; }

  std::vector<SubPrefUpdatePtr>& get_split_updates() const {
    DCHECK(tag_ == Tag::SPLIT_UPDATES);
    return *(data_.split_updates);
  }

  void set_split_updates(
      std::vector<SubPrefUpdatePtr> split_updates);
  bool is_atomic_update() const { return tag_ == Tag::ATOMIC_UPDATE; }

  base::Optional<base::Value>& get_atomic_update() const {
    DCHECK(tag_ == Tag::ATOMIC_UPDATE);
    return *(data_.atomic_update);
  }

  void set_atomic_update(
      base::Optional<base::Value> atomic_update);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PrefUpdateValue::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<PrefUpdateValue::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    std::vector<SubPrefUpdatePtr>* split_updates;
    base::Optional<base::Value>* atomic_update;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};


class  PrefStoreConnection {
 public:
  using DataView = PrefStoreConnectionDataView;
  using Data_ = internal::PrefStoreConnection_Data;

  template <typename... Args>
  static PrefStoreConnectionPtr New(Args&&... args) {
    return PrefStoreConnectionPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PrefStoreConnectionPtr From(const U& u) {
    return mojo::TypeConverter<PrefStoreConnectionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PrefStoreConnection>::Convert(*this);
  }


  PrefStoreConnection();

  PrefStoreConnection(
      PrefStoreObserverRequest observer,
      base::Value initial_prefs,
      bool is_initialized);

  ~PrefStoreConnection();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PrefStoreConnectionPtr>
  PrefStoreConnectionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PrefStoreConnection>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PrefStoreConnection::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PrefStoreConnection::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PrefStoreConnection_UnserializedMessageContext<
            UserType, PrefStoreConnection::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PrefStoreConnection::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PrefStoreConnection::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PrefStoreConnection_UnserializedMessageContext<
            UserType, PrefStoreConnection::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PrefStoreConnection::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  PrefStoreObserverRequest observer;
  base::Value initial_prefs;
  bool is_initialized;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(PrefStoreConnection);
};


class  PersistentPrefStoreConnection {
 public:
  using DataView = PersistentPrefStoreConnectionDataView;
  using Data_ = internal::PersistentPrefStoreConnection_Data;using ReadError = PersistentPrefStoreConnection_ReadError;

  template <typename... Args>
  static PersistentPrefStoreConnectionPtr New(Args&&... args) {
    return PersistentPrefStoreConnectionPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PersistentPrefStoreConnectionPtr From(const U& u) {
    return mojo::TypeConverter<PersistentPrefStoreConnectionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PersistentPrefStoreConnection>::Convert(*this);
  }


  PersistentPrefStoreConnection();

  PersistentPrefStoreConnection(
      PrefStoreConnectionPtr pref_store_connection,
      PersistentPrefStorePtrInfo pref_store,
      ::PersistentPrefStore::PrefReadError read_error,
      bool read_only);

  ~PersistentPrefStoreConnection();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PersistentPrefStoreConnectionPtr>
  PersistentPrefStoreConnectionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PersistentPrefStoreConnection>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PersistentPrefStoreConnection::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PersistentPrefStoreConnection::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PersistentPrefStoreConnection_UnserializedMessageContext<
            UserType, PersistentPrefStoreConnection::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PersistentPrefStoreConnection::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PersistentPrefStoreConnection::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PersistentPrefStoreConnection_UnserializedMessageContext<
            UserType, PersistentPrefStoreConnection::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PersistentPrefStoreConnection::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  PrefStoreConnectionPtr pref_store_connection;
  PersistentPrefStorePtrInfo pref_store;
  ::PersistentPrefStore::PrefReadError read_error;
  bool read_only;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(PersistentPrefStoreConnection);
};


class  IncognitoPersistentPrefStoreConnection {
 public:
  using DataView = IncognitoPersistentPrefStoreConnectionDataView;
  using Data_ = internal::IncognitoPersistentPrefStoreConnection_Data;

  template <typename... Args>
  static IncognitoPersistentPrefStoreConnectionPtr New(Args&&... args) {
    return IncognitoPersistentPrefStoreConnectionPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static IncognitoPersistentPrefStoreConnectionPtr From(const U& u) {
    return mojo::TypeConverter<IncognitoPersistentPrefStoreConnectionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, IncognitoPersistentPrefStoreConnection>::Convert(*this);
  }


  IncognitoPersistentPrefStoreConnection();

  IncognitoPersistentPrefStoreConnection(
      PersistentPrefStoreConnectionPtr pref_store_connection,
      const std::vector<std::string>& overlay_pref_names);

  ~IncognitoPersistentPrefStoreConnection();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = IncognitoPersistentPrefStoreConnectionPtr>
  IncognitoPersistentPrefStoreConnectionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, IncognitoPersistentPrefStoreConnection>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        IncognitoPersistentPrefStoreConnection::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        IncognitoPersistentPrefStoreConnection::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::IncognitoPersistentPrefStoreConnection_UnserializedMessageContext<
            UserType, IncognitoPersistentPrefStoreConnection::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<IncognitoPersistentPrefStoreConnection::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return IncognitoPersistentPrefStoreConnection::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::IncognitoPersistentPrefStoreConnection_UnserializedMessageContext<
            UserType, IncognitoPersistentPrefStoreConnection::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<IncognitoPersistentPrefStoreConnection::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  PersistentPrefStoreConnectionPtr pref_store_connection;
  std::vector<std::string> overlay_pref_names;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(IncognitoPersistentPrefStoreConnection);
};


class  SubPrefUpdate {
 public:
  using DataView = SubPrefUpdateDataView;
  using Data_ = internal::SubPrefUpdate_Data;

  template <typename... Args>
  static SubPrefUpdatePtr New(Args&&... args) {
    return SubPrefUpdatePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SubPrefUpdatePtr From(const U& u) {
    return mojo::TypeConverter<SubPrefUpdatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SubPrefUpdate>::Convert(*this);
  }


  SubPrefUpdate();

  SubPrefUpdate(
      const std::vector<std::string>& path,
      base::Optional<base::Value> value);

  ~SubPrefUpdate();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SubPrefUpdatePtr>
  SubPrefUpdatePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SubPrefUpdate>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SubPrefUpdate::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SubPrefUpdate::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SubPrefUpdate_UnserializedMessageContext<
            UserType, SubPrefUpdate::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SubPrefUpdate::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SubPrefUpdate::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SubPrefUpdate_UnserializedMessageContext<
            UserType, SubPrefUpdate::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SubPrefUpdate::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::vector<std::string> path;
  base::Optional<base::Value> value;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(SubPrefUpdate);
};


class  PrefUpdate {
 public:
  using DataView = PrefUpdateDataView;
  using Data_ = internal::PrefUpdate_Data;

  template <typename... Args>
  static PrefUpdatePtr New(Args&&... args) {
    return PrefUpdatePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PrefUpdatePtr From(const U& u) {
    return mojo::TypeConverter<PrefUpdatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PrefUpdate>::Convert(*this);
  }


  PrefUpdate();

  PrefUpdate(
      const std::string& key,
      PrefUpdateValuePtr value,
      uint32_t flags);

  ~PrefUpdate();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PrefUpdatePtr>
  PrefUpdatePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PrefUpdate>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PrefUpdate::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PrefUpdate::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PrefUpdate_UnserializedMessageContext<
            UserType, PrefUpdate::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PrefUpdate::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PrefUpdate::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PrefUpdate_UnserializedMessageContext<
            UserType, PrefUpdate::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PrefUpdate::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string key;
  PrefUpdateValuePtr value;
  uint32_t flags;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(PrefUpdate);
};


class  PrefRegistry {
 public:
  using DataView = PrefRegistryDataView;
  using Data_ = internal::PrefRegistry_Data;

  template <typename... Args>
  static PrefRegistryPtr New(Args&&... args) {
    return PrefRegistryPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PrefRegistryPtr From(const U& u) {
    return mojo::TypeConverter<PrefRegistryPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PrefRegistry>::Convert(*this);
  }


  PrefRegistry();

  PrefRegistry(
      const std::vector<std::string>& private_registrations,
      const std::vector<std::string>& foreign_registrations,
      std::vector<PrefRegistrationPtr> public_registrations);

  ~PrefRegistry();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PrefRegistryPtr>
  PrefRegistryPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PrefRegistry>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PrefRegistry::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PrefRegistry::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PrefRegistry_UnserializedMessageContext<
            UserType, PrefRegistry::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PrefRegistry::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PrefRegistry::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PrefRegistry_UnserializedMessageContext<
            UserType, PrefRegistry::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PrefRegistry::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::vector<std::string> private_registrations;
  std::vector<std::string> foreign_registrations;
  std::vector<PrefRegistrationPtr> public_registrations;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(PrefRegistry);
};


class  PrefRegistration {
 public:
  using DataView = PrefRegistrationDataView;
  using Data_ = internal::PrefRegistration_Data;

  template <typename... Args>
  static PrefRegistrationPtr New(Args&&... args) {
    return PrefRegistrationPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PrefRegistrationPtr From(const U& u) {
    return mojo::TypeConverter<PrefRegistrationPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PrefRegistration>::Convert(*this);
  }


  PrefRegistration();

  PrefRegistration(
      const std::string& key,
      base::Value default_value,
      uint32_t flags);

  ~PrefRegistration();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PrefRegistrationPtr>
  PrefRegistrationPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PrefRegistration>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PrefRegistration::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PrefRegistration::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PrefRegistration_UnserializedMessageContext<
            UserType, PrefRegistration::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PrefRegistration::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PrefRegistration::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PrefRegistration_UnserializedMessageContext<
            UserType, PrefRegistration::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PrefRegistration::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string key;
  base::Value default_value;
  uint32_t flags;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(PrefRegistration);
};


class  TrackedPersistentPrefStoreConfiguration {
 public:
  using DataView = TrackedPersistentPrefStoreConfigurationDataView;
  using Data_ = internal::TrackedPersistentPrefStoreConfiguration_Data;

  template <typename... Args>
  static TrackedPersistentPrefStoreConfigurationPtr New(Args&&... args) {
    return TrackedPersistentPrefStoreConfigurationPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TrackedPersistentPrefStoreConfigurationPtr From(const U& u) {
    return mojo::TypeConverter<TrackedPersistentPrefStoreConfigurationPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TrackedPersistentPrefStoreConfiguration>::Convert(*this);
  }


  TrackedPersistentPrefStoreConfiguration();

  TrackedPersistentPrefStoreConfiguration(
      const base::FilePath& unprotected_pref_filename,
      const base::FilePath& protected_pref_filename,
      std::vector<TrackedPreferenceMetadataPtr> tracking_configuration,
      uint64_t reporting_ids_count,
      const std::string& seed,
      const std::string& legacy_device_id,
      const std::string& registry_seed,
      const base::string16& registry_path,
      ::prefs::mojom::TrackedPreferenceValidationDelegatePtrInfo validation_delegate,
      ResetOnLoadObserverPtrInfo reset_on_load_observer);

  ~TrackedPersistentPrefStoreConfiguration();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TrackedPersistentPrefStoreConfigurationPtr>
  TrackedPersistentPrefStoreConfigurationPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TrackedPersistentPrefStoreConfiguration>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TrackedPersistentPrefStoreConfiguration::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TrackedPersistentPrefStoreConfiguration::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TrackedPersistentPrefStoreConfiguration_UnserializedMessageContext<
            UserType, TrackedPersistentPrefStoreConfiguration::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<TrackedPersistentPrefStoreConfiguration::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return TrackedPersistentPrefStoreConfiguration::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TrackedPersistentPrefStoreConfiguration_UnserializedMessageContext<
            UserType, TrackedPersistentPrefStoreConfiguration::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TrackedPersistentPrefStoreConfiguration::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  base::FilePath unprotected_pref_filename;
  base::FilePath protected_pref_filename;
  std::vector<TrackedPreferenceMetadataPtr> tracking_configuration;
  uint64_t reporting_ids_count;
  std::string seed;
  std::string legacy_device_id;
  std::string registry_seed;
  base::string16 registry_path;
  ::prefs::mojom::TrackedPreferenceValidationDelegatePtrInfo validation_delegate;
  ResetOnLoadObserverPtrInfo reset_on_load_observer;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(TrackedPersistentPrefStoreConfiguration);
};


class  TrackedPreferenceMetadata {
 public:
  using DataView = TrackedPreferenceMetadataDataView;
  using Data_ = internal::TrackedPreferenceMetadata_Data;using EnforcementLevel = TrackedPreferenceMetadata_EnforcementLevel;using PrefTrackingStrategy = TrackedPreferenceMetadata_PrefTrackingStrategy;using ValueType = TrackedPreferenceMetadata_ValueType;

  template <typename... Args>
  static TrackedPreferenceMetadataPtr New(Args&&... args) {
    return TrackedPreferenceMetadataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TrackedPreferenceMetadataPtr From(const U& u) {
    return mojo::TypeConverter<TrackedPreferenceMetadataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TrackedPreferenceMetadata>::Convert(*this);
  }


  TrackedPreferenceMetadata();

  TrackedPreferenceMetadata(
      uint64_t reporting_id,
      const std::string& name,
      TrackedPreferenceMetadata::EnforcementLevel enforcement_level,
      TrackedPreferenceMetadata::PrefTrackingStrategy strategy,
      TrackedPreferenceMetadata::ValueType value_type);

  ~TrackedPreferenceMetadata();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TrackedPreferenceMetadataPtr>
  TrackedPreferenceMetadataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TrackedPreferenceMetadata>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TrackedPreferenceMetadata::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TrackedPreferenceMetadata::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TrackedPreferenceMetadata_UnserializedMessageContext<
            UserType, TrackedPreferenceMetadata::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<TrackedPreferenceMetadata::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return TrackedPreferenceMetadata::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TrackedPreferenceMetadata_UnserializedMessageContext<
            UserType, TrackedPreferenceMetadata::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TrackedPreferenceMetadata::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  uint64_t reporting_id;
  std::string name;
  TrackedPreferenceMetadata::EnforcementLevel enforcement_level;
  TrackedPreferenceMetadata::PrefTrackingStrategy strategy;
  TrackedPreferenceMetadata::ValueType value_type;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename UnionPtrType>
PrefUpdateValuePtr PrefUpdateValue::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::SPLIT_UPDATES:
      rv->set_split_updates(mojo::Clone(*data_.split_updates));
      break;
    case Tag::ATOMIC_UPDATE:
      rv->set_atomic_update(mojo::Clone(*data_.atomic_update));
      break;
  };
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PrefUpdateValue>::value>::type*>
bool PrefUpdateValue::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::SPLIT_UPDATES:
      return mojo::Equals(*(data_.split_updates), *(other.data_.split_updates));
    case Tag::ATOMIC_UPDATE:
      return mojo::Equals(*(data_.atomic_update), *(other.data_.atomic_update));
  };

  return false;
}
template <typename StructPtrType>
PrefStoreConnectionPtr PrefStoreConnection::Clone() const {
  return New(
      mojo::Clone(observer),
      mojo::Clone(initial_prefs),
      mojo::Clone(is_initialized)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PrefStoreConnection>::value>::type*>
bool PrefStoreConnection::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->observer, other_struct.observer))
    return false;
  if (!mojo::Equals(this->initial_prefs, other_struct.initial_prefs))
    return false;
  if (!mojo::Equals(this->is_initialized, other_struct.is_initialized))
    return false;
  return true;
}
template <typename StructPtrType>
PersistentPrefStoreConnectionPtr PersistentPrefStoreConnection::Clone() const {
  return New(
      mojo::Clone(pref_store_connection),
      mojo::Clone(pref_store),
      mojo::Clone(read_error),
      mojo::Clone(read_only)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PersistentPrefStoreConnection>::value>::type*>
bool PersistentPrefStoreConnection::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->pref_store_connection, other_struct.pref_store_connection))
    return false;
  if (!mojo::Equals(this->pref_store, other_struct.pref_store))
    return false;
  if (!mojo::Equals(this->read_error, other_struct.read_error))
    return false;
  if (!mojo::Equals(this->read_only, other_struct.read_only))
    return false;
  return true;
}
template <typename StructPtrType>
IncognitoPersistentPrefStoreConnectionPtr IncognitoPersistentPrefStoreConnection::Clone() const {
  return New(
      mojo::Clone(pref_store_connection),
      mojo::Clone(overlay_pref_names)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, IncognitoPersistentPrefStoreConnection>::value>::type*>
bool IncognitoPersistentPrefStoreConnection::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->pref_store_connection, other_struct.pref_store_connection))
    return false;
  if (!mojo::Equals(this->overlay_pref_names, other_struct.overlay_pref_names))
    return false;
  return true;
}
template <typename StructPtrType>
SubPrefUpdatePtr SubPrefUpdate::Clone() const {
  return New(
      mojo::Clone(path),
      mojo::Clone(value)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SubPrefUpdate>::value>::type*>
bool SubPrefUpdate::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->path, other_struct.path))
    return false;
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  return true;
}
template <typename StructPtrType>
PrefUpdatePtr PrefUpdate::Clone() const {
  return New(
      mojo::Clone(key),
      mojo::Clone(value),
      mojo::Clone(flags)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PrefUpdate>::value>::type*>
bool PrefUpdate::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->key, other_struct.key))
    return false;
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  if (!mojo::Equals(this->flags, other_struct.flags))
    return false;
  return true;
}
template <typename StructPtrType>
PrefRegistryPtr PrefRegistry::Clone() const {
  return New(
      mojo::Clone(private_registrations),
      mojo::Clone(foreign_registrations),
      mojo::Clone(public_registrations)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PrefRegistry>::value>::type*>
bool PrefRegistry::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->private_registrations, other_struct.private_registrations))
    return false;
  if (!mojo::Equals(this->foreign_registrations, other_struct.foreign_registrations))
    return false;
  if (!mojo::Equals(this->public_registrations, other_struct.public_registrations))
    return false;
  return true;
}
template <typename StructPtrType>
PrefRegistrationPtr PrefRegistration::Clone() const {
  return New(
      mojo::Clone(key),
      mojo::Clone(default_value),
      mojo::Clone(flags)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PrefRegistration>::value>::type*>
bool PrefRegistration::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->key, other_struct.key))
    return false;
  if (!mojo::Equals(this->default_value, other_struct.default_value))
    return false;
  if (!mojo::Equals(this->flags, other_struct.flags))
    return false;
  return true;
}
template <typename StructPtrType>
TrackedPersistentPrefStoreConfigurationPtr TrackedPersistentPrefStoreConfiguration::Clone() const {
  return New(
      mojo::Clone(unprotected_pref_filename),
      mojo::Clone(protected_pref_filename),
      mojo::Clone(tracking_configuration),
      mojo::Clone(reporting_ids_count),
      mojo::Clone(seed),
      mojo::Clone(legacy_device_id),
      mojo::Clone(registry_seed),
      mojo::Clone(registry_path),
      mojo::Clone(validation_delegate),
      mojo::Clone(reset_on_load_observer)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TrackedPersistentPrefStoreConfiguration>::value>::type*>
bool TrackedPersistentPrefStoreConfiguration::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->unprotected_pref_filename, other_struct.unprotected_pref_filename))
    return false;
  if (!mojo::Equals(this->protected_pref_filename, other_struct.protected_pref_filename))
    return false;
  if (!mojo::Equals(this->tracking_configuration, other_struct.tracking_configuration))
    return false;
  if (!mojo::Equals(this->reporting_ids_count, other_struct.reporting_ids_count))
    return false;
  if (!mojo::Equals(this->seed, other_struct.seed))
    return false;
  if (!mojo::Equals(this->legacy_device_id, other_struct.legacy_device_id))
    return false;
  if (!mojo::Equals(this->registry_seed, other_struct.registry_seed))
    return false;
  if (!mojo::Equals(this->registry_path, other_struct.registry_path))
    return false;
  if (!mojo::Equals(this->validation_delegate, other_struct.validation_delegate))
    return false;
  if (!mojo::Equals(this->reset_on_load_observer, other_struct.reset_on_load_observer))
    return false;
  return true;
}
template <typename StructPtrType>
TrackedPreferenceMetadataPtr TrackedPreferenceMetadata::Clone() const {
  return New(
      mojo::Clone(reporting_id),
      mojo::Clone(name),
      mojo::Clone(enforcement_level),
      mojo::Clone(strategy),
      mojo::Clone(value_type)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TrackedPreferenceMetadata>::value>::type*>
bool TrackedPreferenceMetadata::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->reporting_id, other_struct.reporting_id))
    return false;
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->enforcement_level, other_struct.enforcement_level))
    return false;
  if (!mojo::Equals(this->strategy, other_struct.strategy))
    return false;
  if (!mojo::Equals(this->value_type, other_struct.value_type))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace prefs

namespace mojo {


template <>
struct  StructTraits<::prefs::mojom::PrefStoreConnection::DataView,
                                         ::prefs::mojom::PrefStoreConnectionPtr> {
  static bool IsNull(const ::prefs::mojom::PrefStoreConnectionPtr& input) { return !input; }
  static void SetToNull(::prefs::mojom::PrefStoreConnectionPtr* output) { output->reset(); }

  static  decltype(::prefs::mojom::PrefStoreConnection::observer)& observer(
       ::prefs::mojom::PrefStoreConnectionPtr& input) {
    return input->observer;
  }

  static const decltype(::prefs::mojom::PrefStoreConnection::initial_prefs)& initial_prefs(
      const ::prefs::mojom::PrefStoreConnectionPtr& input) {
    return input->initial_prefs;
  }

  static decltype(::prefs::mojom::PrefStoreConnection::is_initialized) is_initialized(
      const ::prefs::mojom::PrefStoreConnectionPtr& input) {
    return input->is_initialized;
  }

  static bool Read(::prefs::mojom::PrefStoreConnection::DataView input, ::prefs::mojom::PrefStoreConnectionPtr* output);
};


template <>
struct  StructTraits<::prefs::mojom::PersistentPrefStoreConnection::DataView,
                                         ::prefs::mojom::PersistentPrefStoreConnectionPtr> {
  static bool IsNull(const ::prefs::mojom::PersistentPrefStoreConnectionPtr& input) { return !input; }
  static void SetToNull(::prefs::mojom::PersistentPrefStoreConnectionPtr* output) { output->reset(); }

  static  decltype(::prefs::mojom::PersistentPrefStoreConnection::pref_store_connection)& pref_store_connection(
       ::prefs::mojom::PersistentPrefStoreConnectionPtr& input) {
    return input->pref_store_connection;
  }

  static  decltype(::prefs::mojom::PersistentPrefStoreConnection::pref_store)& pref_store(
       ::prefs::mojom::PersistentPrefStoreConnectionPtr& input) {
    return input->pref_store;
  }

  static decltype(::prefs::mojom::PersistentPrefStoreConnection::read_error) read_error(
      const ::prefs::mojom::PersistentPrefStoreConnectionPtr& input) {
    return input->read_error;
  }

  static decltype(::prefs::mojom::PersistentPrefStoreConnection::read_only) read_only(
      const ::prefs::mojom::PersistentPrefStoreConnectionPtr& input) {
    return input->read_only;
  }

  static bool Read(::prefs::mojom::PersistentPrefStoreConnection::DataView input, ::prefs::mojom::PersistentPrefStoreConnectionPtr* output);
};


template <>
struct  StructTraits<::prefs::mojom::IncognitoPersistentPrefStoreConnection::DataView,
                                         ::prefs::mojom::IncognitoPersistentPrefStoreConnectionPtr> {
  static bool IsNull(const ::prefs::mojom::IncognitoPersistentPrefStoreConnectionPtr& input) { return !input; }
  static void SetToNull(::prefs::mojom::IncognitoPersistentPrefStoreConnectionPtr* output) { output->reset(); }

  static  decltype(::prefs::mojom::IncognitoPersistentPrefStoreConnection::pref_store_connection)& pref_store_connection(
       ::prefs::mojom::IncognitoPersistentPrefStoreConnectionPtr& input) {
    return input->pref_store_connection;
  }

  static const decltype(::prefs::mojom::IncognitoPersistentPrefStoreConnection::overlay_pref_names)& overlay_pref_names(
      const ::prefs::mojom::IncognitoPersistentPrefStoreConnectionPtr& input) {
    return input->overlay_pref_names;
  }

  static bool Read(::prefs::mojom::IncognitoPersistentPrefStoreConnection::DataView input, ::prefs::mojom::IncognitoPersistentPrefStoreConnectionPtr* output);
};


template <>
struct  StructTraits<::prefs::mojom::SubPrefUpdate::DataView,
                                         ::prefs::mojom::SubPrefUpdatePtr> {
  static bool IsNull(const ::prefs::mojom::SubPrefUpdatePtr& input) { return !input; }
  static void SetToNull(::prefs::mojom::SubPrefUpdatePtr* output) { output->reset(); }

  static const decltype(::prefs::mojom::SubPrefUpdate::path)& path(
      const ::prefs::mojom::SubPrefUpdatePtr& input) {
    return input->path;
  }

  static const decltype(::prefs::mojom::SubPrefUpdate::value)& value(
      const ::prefs::mojom::SubPrefUpdatePtr& input) {
    return input->value;
  }

  static bool Read(::prefs::mojom::SubPrefUpdate::DataView input, ::prefs::mojom::SubPrefUpdatePtr* output);
};


template <>
struct  StructTraits<::prefs::mojom::PrefUpdate::DataView,
                                         ::prefs::mojom::PrefUpdatePtr> {
  static bool IsNull(const ::prefs::mojom::PrefUpdatePtr& input) { return !input; }
  static void SetToNull(::prefs::mojom::PrefUpdatePtr* output) { output->reset(); }

  static const decltype(::prefs::mojom::PrefUpdate::key)& key(
      const ::prefs::mojom::PrefUpdatePtr& input) {
    return input->key;
  }

  static const decltype(::prefs::mojom::PrefUpdate::value)& value(
      const ::prefs::mojom::PrefUpdatePtr& input) {
    return input->value;
  }

  static decltype(::prefs::mojom::PrefUpdate::flags) flags(
      const ::prefs::mojom::PrefUpdatePtr& input) {
    return input->flags;
  }

  static bool Read(::prefs::mojom::PrefUpdate::DataView input, ::prefs::mojom::PrefUpdatePtr* output);
};


template <>
struct  StructTraits<::prefs::mojom::PrefRegistry::DataView,
                                         ::prefs::mojom::PrefRegistryPtr> {
  static bool IsNull(const ::prefs::mojom::PrefRegistryPtr& input) { return !input; }
  static void SetToNull(::prefs::mojom::PrefRegistryPtr* output) { output->reset(); }

  static const decltype(::prefs::mojom::PrefRegistry::private_registrations)& private_registrations(
      const ::prefs::mojom::PrefRegistryPtr& input) {
    return input->private_registrations;
  }

  static const decltype(::prefs::mojom::PrefRegistry::foreign_registrations)& foreign_registrations(
      const ::prefs::mojom::PrefRegistryPtr& input) {
    return input->foreign_registrations;
  }

  static const decltype(::prefs::mojom::PrefRegistry::public_registrations)& public_registrations(
      const ::prefs::mojom::PrefRegistryPtr& input) {
    return input->public_registrations;
  }

  static bool Read(::prefs::mojom::PrefRegistry::DataView input, ::prefs::mojom::PrefRegistryPtr* output);
};


template <>
struct  StructTraits<::prefs::mojom::PrefRegistration::DataView,
                                         ::prefs::mojom::PrefRegistrationPtr> {
  static bool IsNull(const ::prefs::mojom::PrefRegistrationPtr& input) { return !input; }
  static void SetToNull(::prefs::mojom::PrefRegistrationPtr* output) { output->reset(); }

  static const decltype(::prefs::mojom::PrefRegistration::key)& key(
      const ::prefs::mojom::PrefRegistrationPtr& input) {
    return input->key;
  }

  static const decltype(::prefs::mojom::PrefRegistration::default_value)& default_value(
      const ::prefs::mojom::PrefRegistrationPtr& input) {
    return input->default_value;
  }

  static decltype(::prefs::mojom::PrefRegistration::flags) flags(
      const ::prefs::mojom::PrefRegistrationPtr& input) {
    return input->flags;
  }

  static bool Read(::prefs::mojom::PrefRegistration::DataView input, ::prefs::mojom::PrefRegistrationPtr* output);
};


template <>
struct  StructTraits<::prefs::mojom::TrackedPersistentPrefStoreConfiguration::DataView,
                                         ::prefs::mojom::TrackedPersistentPrefStoreConfigurationPtr> {
  static bool IsNull(const ::prefs::mojom::TrackedPersistentPrefStoreConfigurationPtr& input) { return !input; }
  static void SetToNull(::prefs::mojom::TrackedPersistentPrefStoreConfigurationPtr* output) { output->reset(); }

  static const decltype(::prefs::mojom::TrackedPersistentPrefStoreConfiguration::unprotected_pref_filename)& unprotected_pref_filename(
      const ::prefs::mojom::TrackedPersistentPrefStoreConfigurationPtr& input) {
    return input->unprotected_pref_filename;
  }

  static const decltype(::prefs::mojom::TrackedPersistentPrefStoreConfiguration::protected_pref_filename)& protected_pref_filename(
      const ::prefs::mojom::TrackedPersistentPrefStoreConfigurationPtr& input) {
    return input->protected_pref_filename;
  }

  static const decltype(::prefs::mojom::TrackedPersistentPrefStoreConfiguration::tracking_configuration)& tracking_configuration(
      const ::prefs::mojom::TrackedPersistentPrefStoreConfigurationPtr& input) {
    return input->tracking_configuration;
  }

  static decltype(::prefs::mojom::TrackedPersistentPrefStoreConfiguration::reporting_ids_count) reporting_ids_count(
      const ::prefs::mojom::TrackedPersistentPrefStoreConfigurationPtr& input) {
    return input->reporting_ids_count;
  }

  static const decltype(::prefs::mojom::TrackedPersistentPrefStoreConfiguration::seed)& seed(
      const ::prefs::mojom::TrackedPersistentPrefStoreConfigurationPtr& input) {
    return input->seed;
  }

  static const decltype(::prefs::mojom::TrackedPersistentPrefStoreConfiguration::legacy_device_id)& legacy_device_id(
      const ::prefs::mojom::TrackedPersistentPrefStoreConfigurationPtr& input) {
    return input->legacy_device_id;
  }

  static const decltype(::prefs::mojom::TrackedPersistentPrefStoreConfiguration::registry_seed)& registry_seed(
      const ::prefs::mojom::TrackedPersistentPrefStoreConfigurationPtr& input) {
    return input->registry_seed;
  }

  static const decltype(::prefs::mojom::TrackedPersistentPrefStoreConfiguration::registry_path)& registry_path(
      const ::prefs::mojom::TrackedPersistentPrefStoreConfigurationPtr& input) {
    return input->registry_path;
  }

  static  decltype(::prefs::mojom::TrackedPersistentPrefStoreConfiguration::validation_delegate)& validation_delegate(
       ::prefs::mojom::TrackedPersistentPrefStoreConfigurationPtr& input) {
    return input->validation_delegate;
  }

  static  decltype(::prefs::mojom::TrackedPersistentPrefStoreConfiguration::reset_on_load_observer)& reset_on_load_observer(
       ::prefs::mojom::TrackedPersistentPrefStoreConfigurationPtr& input) {
    return input->reset_on_load_observer;
  }

  static bool Read(::prefs::mojom::TrackedPersistentPrefStoreConfiguration::DataView input, ::prefs::mojom::TrackedPersistentPrefStoreConfigurationPtr* output);
};


template <>
struct  StructTraits<::prefs::mojom::TrackedPreferenceMetadata::DataView,
                                         ::prefs::mojom::TrackedPreferenceMetadataPtr> {
  static bool IsNull(const ::prefs::mojom::TrackedPreferenceMetadataPtr& input) { return !input; }
  static void SetToNull(::prefs::mojom::TrackedPreferenceMetadataPtr* output) { output->reset(); }

  static decltype(::prefs::mojom::TrackedPreferenceMetadata::reporting_id) reporting_id(
      const ::prefs::mojom::TrackedPreferenceMetadataPtr& input) {
    return input->reporting_id;
  }

  static const decltype(::prefs::mojom::TrackedPreferenceMetadata::name)& name(
      const ::prefs::mojom::TrackedPreferenceMetadataPtr& input) {
    return input->name;
  }

  static decltype(::prefs::mojom::TrackedPreferenceMetadata::enforcement_level) enforcement_level(
      const ::prefs::mojom::TrackedPreferenceMetadataPtr& input) {
    return input->enforcement_level;
  }

  static decltype(::prefs::mojom::TrackedPreferenceMetadata::strategy) strategy(
      const ::prefs::mojom::TrackedPreferenceMetadataPtr& input) {
    return input->strategy;
  }

  static decltype(::prefs::mojom::TrackedPreferenceMetadata::value_type) value_type(
      const ::prefs::mojom::TrackedPreferenceMetadataPtr& input) {
    return input->value_type;
  }

  static bool Read(::prefs::mojom::TrackedPreferenceMetadata::DataView input, ::prefs::mojom::TrackedPreferenceMetadataPtr* output);
};


template <>
struct  UnionTraits<::prefs::mojom::PrefUpdateValue::DataView,
                                        ::prefs::mojom::PrefUpdateValuePtr> {
  static bool IsNull(const ::prefs::mojom::PrefUpdateValuePtr& input) { return !input; }
  static void SetToNull(::prefs::mojom::PrefUpdateValuePtr* output) { output->reset(); }

  static ::prefs::mojom::PrefUpdateValue::Tag GetTag(const ::prefs::mojom::PrefUpdateValuePtr& input) {
    return input->which();
  }

  static const std::vector<::prefs::mojom::SubPrefUpdatePtr>& split_updates(const ::prefs::mojom::PrefUpdateValuePtr& input) {
    return input->get_split_updates();
  }

  static const base::Optional<base::Value>& atomic_update(const ::prefs::mojom::PrefUpdateValuePtr& input) {
    return input->get_atomic_update();
  }

  static bool Read(::prefs::mojom::PrefUpdateValue::DataView input, ::prefs::mojom::PrefUpdateValuePtr* output);
};

}  // namespace mojo

#endif  // SERVICES_PREFERENCES_PUBLIC_MOJOM_PREFERENCES_MOJOM_H_