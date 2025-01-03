// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_BLINK_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_BLINK_H_

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
#include "services/device/public/mojom/fingerprint.mojom-shared.h"

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


namespace device {
namespace mojom {
namespace blink {
class FingerprintObserver;
using FingerprintObserverPtr = mojo::InterfacePtr<FingerprintObserver>;
using RevocableFingerprintObserverPtr = ::blink::RevocableInterfacePtr<FingerprintObserver>;
using FingerprintObserverPtrInfo = mojo::InterfacePtrInfo<FingerprintObserver>;
using ThreadSafeFingerprintObserverPtr =
    mojo::ThreadSafeInterfacePtr<FingerprintObserver>;
using FingerprintObserverRequest = mojo::InterfaceRequest<FingerprintObserver>;
using FingerprintObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<FingerprintObserver>;
using ThreadSafeFingerprintObserverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<FingerprintObserver>;
using FingerprintObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<FingerprintObserver>;
using FingerprintObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<FingerprintObserver>;

class Fingerprint;
using FingerprintPtr = mojo::InterfacePtr<Fingerprint>;
using RevocableFingerprintPtr = ::blink::RevocableInterfacePtr<Fingerprint>;
using FingerprintPtrInfo = mojo::InterfacePtrInfo<Fingerprint>;
using ThreadSafeFingerprintPtr =
    mojo::ThreadSafeInterfacePtr<Fingerprint>;
using FingerprintRequest = mojo::InterfaceRequest<Fingerprint>;
using FingerprintAssociatedPtr =
    mojo::AssociatedInterfacePtr<Fingerprint>;
using ThreadSafeFingerprintAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Fingerprint>;
using FingerprintAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Fingerprint>;
using FingerprintAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Fingerprint>;


class FingerprintObserverProxy;

template <typename ImplRefTraits>
class FingerprintObserverStub;

class FingerprintObserverRequestValidator;

class BLINK_PLATFORM_EXPORT FingerprintObserver
    : public FingerprintObserverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = FingerprintObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = FingerprintObserverStub<ImplRefTraits>;

  using RequestValidator_ = FingerprintObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnRestartedMinVersion = 0,
    kOnEnrollScanDoneMinVersion = 0,
    kOnAuthScanDoneMinVersion = 0,
    kOnSessionFailedMinVersion = 0,
  };
  virtual ~FingerprintObserver() {}

  virtual void OnRestarted() = 0;

  virtual void OnEnrollScanDone(uint32_t scan_result, bool is_complete, int32_t percent_complete) = 0;

  virtual void OnAuthScanDone(uint32_t scan_result, const WTF::HashMap<WTF::String, WTF::Vector<WTF::String>>& matches) = 0;

  virtual void OnSessionFailed() = 0;
};
class BLINK_PLATFORM_EXPORT FingerprintObserverInterceptorForTesting : public FingerprintObserver {
  virtual FingerprintObserver* GetForwardingInterface() = 0;
  void OnRestarted() override;
  void OnEnrollScanDone(uint32_t scan_result, bool is_complete, int32_t percent_complete) override;
  void OnAuthScanDone(uint32_t scan_result, const WTF::HashMap<WTF::String, WTF::Vector<WTF::String>>& matches) override;
  void OnSessionFailed() override;
};
class BLINK_PLATFORM_EXPORT FingerprintObserverAsyncWaiter {
 public:
  explicit FingerprintObserverAsyncWaiter(FingerprintObserver* proxy);
  ~FingerprintObserverAsyncWaiter();

 private:
  FingerprintObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FingerprintObserverAsyncWaiter);
};

class FingerprintProxy;

template <typename ImplRefTraits>
class FingerprintStub;

class FingerprintRequestValidator;
class FingerprintResponseValidator;

class BLINK_PLATFORM_EXPORT Fingerprint
    : public FingerprintInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = FingerprintProxy;

  template <typename ImplRefTraits>
  using Stub_ = FingerprintStub<ImplRefTraits>;

  using RequestValidator_ = FingerprintRequestValidator;
  using ResponseValidator_ = FingerprintResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetRecordsForUserMinVersion = 0,
    kStartEnrollSessionMinVersion = 0,
    kCancelCurrentEnrollSessionMinVersion = 0,
    kRequestRecordLabelMinVersion = 0,
    kSetRecordLabelMinVersion = 0,
    kRemoveRecordMinVersion = 0,
    kStartAuthSessionMinVersion = 0,
    kEndCurrentAuthSessionMinVersion = 0,
    kDestroyAllRecordsMinVersion = 0,
    kAddFingerprintObserverMinVersion = 0,
    kRequestTypeMinVersion = 0,
  };
  virtual ~Fingerprint() {}


  using GetRecordsForUserCallback = base::OnceCallback<void(const WTF::HashMap<WTF::String, WTF::String>&)>;
  virtual void GetRecordsForUser(const WTF::String& user_id, GetRecordsForUserCallback callback) = 0;

  virtual void StartEnrollSession(const WTF::String& user_id, const WTF::String& label) = 0;


  using CancelCurrentEnrollSessionCallback = base::OnceCallback<void(bool)>;
  virtual void CancelCurrentEnrollSession(CancelCurrentEnrollSessionCallback callback) = 0;


  using RequestRecordLabelCallback = base::OnceCallback<void(const WTF::String&)>;
  virtual void RequestRecordLabel(const WTF::String& record_path, RequestRecordLabelCallback callback) = 0;


  using SetRecordLabelCallback = base::OnceCallback<void(bool)>;
  virtual void SetRecordLabel(const WTF::String& record_path, const WTF::String& new_label, SetRecordLabelCallback callback) = 0;


  using RemoveRecordCallback = base::OnceCallback<void(bool)>;
  virtual void RemoveRecord(const WTF::String& record_path, RemoveRecordCallback callback) = 0;

  virtual void StartAuthSession() = 0;


  using EndCurrentAuthSessionCallback = base::OnceCallback<void(bool)>;
  virtual void EndCurrentAuthSession(EndCurrentAuthSessionCallback callback) = 0;


  using DestroyAllRecordsCallback = base::OnceCallback<void(bool)>;
  virtual void DestroyAllRecords(DestroyAllRecordsCallback callback) = 0;

  virtual void AddFingerprintObserver(FingerprintObserverPtr observer) = 0;


  using RequestTypeCallback = base::OnceCallback<void(uint32_t)>;
  virtual void RequestType(RequestTypeCallback callback) = 0;
};
class BLINK_PLATFORM_EXPORT FingerprintInterceptorForTesting : public Fingerprint {
  virtual Fingerprint* GetForwardingInterface() = 0;
  void GetRecordsForUser(const WTF::String& user_id, GetRecordsForUserCallback callback) override;
  void StartEnrollSession(const WTF::String& user_id, const WTF::String& label) override;
  void CancelCurrentEnrollSession(CancelCurrentEnrollSessionCallback callback) override;
  void RequestRecordLabel(const WTF::String& record_path, RequestRecordLabelCallback callback) override;
  void SetRecordLabel(const WTF::String& record_path, const WTF::String& new_label, SetRecordLabelCallback callback) override;
  void RemoveRecord(const WTF::String& record_path, RemoveRecordCallback callback) override;
  void StartAuthSession() override;
  void EndCurrentAuthSession(EndCurrentAuthSessionCallback callback) override;
  void DestroyAllRecords(DestroyAllRecordsCallback callback) override;
  void AddFingerprintObserver(FingerprintObserverPtr observer) override;
  void RequestType(RequestTypeCallback callback) override;
};
class BLINK_PLATFORM_EXPORT FingerprintAsyncWaiter {
 public:
  explicit FingerprintAsyncWaiter(Fingerprint* proxy);
  ~FingerprintAsyncWaiter();
  void GetRecordsForUser(
      const WTF::String& user_id, WTF::HashMap<WTF::String, WTF::String>* out_records);
  void CancelCurrentEnrollSession(
      bool* out_success);
  void RequestRecordLabel(
      const WTF::String& record_path, WTF::String* out_label);
  void SetRecordLabel(
      const WTF::String& record_path, const WTF::String& new_label, bool* out_success);
  void RemoveRecord(
      const WTF::String& record_path, bool* out_success);
  void EndCurrentAuthSession(
      bool* out_success);
  void DestroyAllRecords(
      bool* out_success);
  void RequestType(
      uint32_t* out_type);

 private:
  Fingerprint* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FingerprintAsyncWaiter);
};

class BLINK_PLATFORM_EXPORT FingerprintObserverProxy
    : public FingerprintObserver {
 public:
  explicit FingerprintObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnRestarted() final;
  void OnEnrollScanDone(uint32_t scan_result, bool is_complete, int32_t percent_complete) final;
  void OnAuthScanDone(uint32_t scan_result, const WTF::HashMap<WTF::String, WTF::Vector<WTF::String>>& matches) final;
  void OnSessionFailed() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT FingerprintProxy
    : public Fingerprint {
 public:
  explicit FingerprintProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetRecordsForUser(const WTF::String& user_id, GetRecordsForUserCallback callback) final;
  void StartEnrollSession(const WTF::String& user_id, const WTF::String& label) final;
  void CancelCurrentEnrollSession(CancelCurrentEnrollSessionCallback callback) final;
  void RequestRecordLabel(const WTF::String& record_path, RequestRecordLabelCallback callback) final;
  void SetRecordLabel(const WTF::String& record_path, const WTF::String& new_label, SetRecordLabelCallback callback) final;
  void RemoveRecord(const WTF::String& record_path, RemoveRecordCallback callback) final;
  void StartAuthSession() final;
  void EndCurrentAuthSession(EndCurrentAuthSessionCallback callback) final;
  void DestroyAllRecords(DestroyAllRecordsCallback callback) final;
  void AddFingerprintObserver(FingerprintObserverPtr observer) final;
  void RequestType(RequestTypeCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT FingerprintObserverStubDispatch {
 public:
  static bool Accept(FingerprintObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FingerprintObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FingerprintObserver>>
class FingerprintObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FingerprintObserverStub() {}
  ~FingerprintObserverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FingerprintObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FingerprintObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT FingerprintStubDispatch {
 public:
  static bool Accept(Fingerprint* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Fingerprint* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Fingerprint>>
class FingerprintStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FingerprintStub() {}
  ~FingerprintStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FingerprintStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FingerprintStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT FingerprintObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT FingerprintRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT FingerprintResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace device

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_BLINK_H_