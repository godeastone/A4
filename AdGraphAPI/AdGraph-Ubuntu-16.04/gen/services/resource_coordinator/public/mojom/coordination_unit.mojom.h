// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_MOJOM_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_MOJOM_H_

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
#include "services/resource_coordinator/public/mojom/coordination_unit.mojom-shared.h"
#include "mojo/public/mojom/base/process_id.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "services/resource_coordinator/public/mojom/lifecycle.mojom.h"
#include "services/resource_coordinator/public/mojom/signals.mojom.h"
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
#include "services/resource_coordinator/public/cpp/coordination_unit_id.h"
#include "services/resource_coordinator/public/cpp/coordination_unit_types.h"
#include "base/component_export.h"


namespace resource_coordinator {
namespace mojom {
class FrameCoordinationUnit;
using FrameCoordinationUnitPtr = mojo::InterfacePtr<FrameCoordinationUnit>;
using FrameCoordinationUnitPtrInfo = mojo::InterfacePtrInfo<FrameCoordinationUnit>;
using ThreadSafeFrameCoordinationUnitPtr =
    mojo::ThreadSafeInterfacePtr<FrameCoordinationUnit>;
using FrameCoordinationUnitRequest = mojo::InterfaceRequest<FrameCoordinationUnit>;
using FrameCoordinationUnitAssociatedPtr =
    mojo::AssociatedInterfacePtr<FrameCoordinationUnit>;
using ThreadSafeFrameCoordinationUnitAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<FrameCoordinationUnit>;
using FrameCoordinationUnitAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<FrameCoordinationUnit>;
using FrameCoordinationUnitAssociatedRequest =
    mojo::AssociatedInterfaceRequest<FrameCoordinationUnit>;

class PageCoordinationUnit;
using PageCoordinationUnitPtr = mojo::InterfacePtr<PageCoordinationUnit>;
using PageCoordinationUnitPtrInfo = mojo::InterfacePtrInfo<PageCoordinationUnit>;
using ThreadSafePageCoordinationUnitPtr =
    mojo::ThreadSafeInterfacePtr<PageCoordinationUnit>;
using PageCoordinationUnitRequest = mojo::InterfaceRequest<PageCoordinationUnit>;
using PageCoordinationUnitAssociatedPtr =
    mojo::AssociatedInterfacePtr<PageCoordinationUnit>;
using ThreadSafePageCoordinationUnitAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PageCoordinationUnit>;
using PageCoordinationUnitAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PageCoordinationUnit>;
using PageCoordinationUnitAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PageCoordinationUnit>;

class ProcessCoordinationUnit;
using ProcessCoordinationUnitPtr = mojo::InterfacePtr<ProcessCoordinationUnit>;
using ProcessCoordinationUnitPtrInfo = mojo::InterfacePtrInfo<ProcessCoordinationUnit>;
using ThreadSafeProcessCoordinationUnitPtr =
    mojo::ThreadSafeInterfacePtr<ProcessCoordinationUnit>;
using ProcessCoordinationUnitRequest = mojo::InterfaceRequest<ProcessCoordinationUnit>;
using ProcessCoordinationUnitAssociatedPtr =
    mojo::AssociatedInterfacePtr<ProcessCoordinationUnit>;
using ThreadSafeProcessCoordinationUnitAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ProcessCoordinationUnit>;
using ProcessCoordinationUnitAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ProcessCoordinationUnit>;
using ProcessCoordinationUnitAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ProcessCoordinationUnit>;

class SystemCoordinationUnit;
using SystemCoordinationUnitPtr = mojo::InterfacePtr<SystemCoordinationUnit>;
using SystemCoordinationUnitPtrInfo = mojo::InterfacePtrInfo<SystemCoordinationUnit>;
using ThreadSafeSystemCoordinationUnitPtr =
    mojo::ThreadSafeInterfacePtr<SystemCoordinationUnit>;
using SystemCoordinationUnitRequest = mojo::InterfaceRequest<SystemCoordinationUnit>;
using SystemCoordinationUnitAssociatedPtr =
    mojo::AssociatedInterfacePtr<SystemCoordinationUnit>;
using ThreadSafeSystemCoordinationUnitAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SystemCoordinationUnit>;
using SystemCoordinationUnitAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SystemCoordinationUnit>;
using SystemCoordinationUnitAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SystemCoordinationUnit>;

class CoordinationUnitID;
using CoordinationUnitIDPtr = mojo::InlinedStructPtr<CoordinationUnitID>;

class ProcessResourceMeasurement;
using ProcessResourceMeasurementPtr = mojo::StructPtr<ProcessResourceMeasurement>;

class ProcessResourceMeasurementBatch;
using ProcessResourceMeasurementBatchPtr = mojo::StructPtr<ProcessResourceMeasurementBatch>;


class FrameCoordinationUnitProxy;

template <typename ImplRefTraits>
class FrameCoordinationUnitStub;

class FrameCoordinationUnitRequestValidator;
class FrameCoordinationUnitResponseValidator;

class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) FrameCoordinationUnit
    : public FrameCoordinationUnitInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = FrameCoordinationUnitProxy;

  template <typename ImplRefTraits>
  using Stub_ = FrameCoordinationUnitStub<ImplRefTraits>;

  using RequestValidator_ = FrameCoordinationUnitRequestValidator;
  using ResponseValidator_ = FrameCoordinationUnitResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetIDMinVersion = 0,
    kAddBindingMinVersion = 0,
    kAddChildFrameMinVersion = 0,
    kRemoveChildFrameMinVersion = 0,
    kSetAudibilityMinVersion = 0,
    kSetNetworkAlmostIdleMinVersion = 0,
    kSetLifecycleStateMinVersion = 0,
    kOnAlertFiredMinVersion = 0,
    kOnNonPersistentNotificationCreatedMinVersion = 0,
  };
  virtual ~FrameCoordinationUnit() {}


  using GetIDCallback = base::OnceCallback<void(const ::resource_coordinator::CoordinationUnitID&)>;
  virtual void GetID(GetIDCallback callback) = 0;

  virtual void AddBinding(FrameCoordinationUnitRequest request) = 0;

  virtual void AddChildFrame(const ::resource_coordinator::CoordinationUnitID& cu_id) = 0;

  virtual void RemoveChildFrame(const ::resource_coordinator::CoordinationUnitID& cu_id) = 0;

  virtual void SetAudibility(bool audible) = 0;

  virtual void SetNetworkAlmostIdle(bool idle) = 0;

  virtual void SetLifecycleState(::resource_coordinator::mojom::LifecycleState state) = 0;

  virtual void OnAlertFired() = 0;

  virtual void OnNonPersistentNotificationCreated() = 0;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) FrameCoordinationUnitInterceptorForTesting : public FrameCoordinationUnit {
  virtual FrameCoordinationUnit* GetForwardingInterface() = 0;
  void GetID(GetIDCallback callback) override;
  void AddBinding(FrameCoordinationUnitRequest request) override;
  void AddChildFrame(const ::resource_coordinator::CoordinationUnitID& cu_id) override;
  void RemoveChildFrame(const ::resource_coordinator::CoordinationUnitID& cu_id) override;
  void SetAudibility(bool audible) override;
  void SetNetworkAlmostIdle(bool idle) override;
  void SetLifecycleState(::resource_coordinator::mojom::LifecycleState state) override;
  void OnAlertFired() override;
  void OnNonPersistentNotificationCreated() override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) FrameCoordinationUnitAsyncWaiter {
 public:
  explicit FrameCoordinationUnitAsyncWaiter(FrameCoordinationUnit* proxy);
  ~FrameCoordinationUnitAsyncWaiter();
  void GetID(
      ::resource_coordinator::CoordinationUnitID* out_id);

 private:
  FrameCoordinationUnit* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FrameCoordinationUnitAsyncWaiter);
};

class PageCoordinationUnitProxy;

template <typename ImplRefTraits>
class PageCoordinationUnitStub;

class PageCoordinationUnitRequestValidator;
class PageCoordinationUnitResponseValidator;

class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) PageCoordinationUnit
    : public PageCoordinationUnitInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = PageCoordinationUnitProxy;

  template <typename ImplRefTraits>
  using Stub_ = PageCoordinationUnitStub<ImplRefTraits>;

  using RequestValidator_ = PageCoordinationUnitRequestValidator;
  using ResponseValidator_ = PageCoordinationUnitResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetIDMinVersion = 0,
    kAddBindingMinVersion = 0,
    kAddFrameMinVersion = 0,
    kRemoveFrameMinVersion = 0,
    kSetIsLoadingMinVersion = 0,
    kSetVisibilityMinVersion = 0,
    kSetUKMSourceIdMinVersion = 0,
    kOnFaviconUpdatedMinVersion = 0,
    kOnTitleUpdatedMinVersion = 0,
    kOnMainFrameNavigationCommittedMinVersion = 0,
  };
  virtual ~PageCoordinationUnit() {}


  using GetIDCallback = base::OnceCallback<void(const ::resource_coordinator::CoordinationUnitID&)>;
  virtual void GetID(GetIDCallback callback) = 0;

  virtual void AddBinding(PageCoordinationUnitRequest request) = 0;

  virtual void AddFrame(const ::resource_coordinator::CoordinationUnitID& cu_id) = 0;

  virtual void RemoveFrame(const ::resource_coordinator::CoordinationUnitID& cu_id) = 0;

  virtual void SetIsLoading(bool is_loading) = 0;

  virtual void SetVisibility(bool visible) = 0;

  virtual void SetUKMSourceId(int64_t ukm_source_id) = 0;

  virtual void OnFaviconUpdated() = 0;

  virtual void OnTitleUpdated() = 0;

  virtual void OnMainFrameNavigationCommitted() = 0;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) PageCoordinationUnitInterceptorForTesting : public PageCoordinationUnit {
  virtual PageCoordinationUnit* GetForwardingInterface() = 0;
  void GetID(GetIDCallback callback) override;
  void AddBinding(PageCoordinationUnitRequest request) override;
  void AddFrame(const ::resource_coordinator::CoordinationUnitID& cu_id) override;
  void RemoveFrame(const ::resource_coordinator::CoordinationUnitID& cu_id) override;
  void SetIsLoading(bool is_loading) override;
  void SetVisibility(bool visible) override;
  void SetUKMSourceId(int64_t ukm_source_id) override;
  void OnFaviconUpdated() override;
  void OnTitleUpdated() override;
  void OnMainFrameNavigationCommitted() override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) PageCoordinationUnitAsyncWaiter {
 public:
  explicit PageCoordinationUnitAsyncWaiter(PageCoordinationUnit* proxy);
  ~PageCoordinationUnitAsyncWaiter();
  void GetID(
      ::resource_coordinator::CoordinationUnitID* out_id);

 private:
  PageCoordinationUnit* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PageCoordinationUnitAsyncWaiter);
};

class ProcessCoordinationUnitProxy;

template <typename ImplRefTraits>
class ProcessCoordinationUnitStub;

class ProcessCoordinationUnitRequestValidator;
class ProcessCoordinationUnitResponseValidator;

class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) ProcessCoordinationUnit
    : public ProcessCoordinationUnitInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ProcessCoordinationUnitProxy;

  template <typename ImplRefTraits>
  using Stub_ = ProcessCoordinationUnitStub<ImplRefTraits>;

  using RequestValidator_ = ProcessCoordinationUnitRequestValidator;
  using ResponseValidator_ = ProcessCoordinationUnitResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetIDMinVersion = 0,
    kAddBindingMinVersion = 0,
    kAddFrameMinVersion = 0,
    kRemoveFrameMinVersion = 0,
    kSetCPUUsageMinVersion = 0,
    kSetExpectedTaskQueueingDurationMinVersion = 0,
    kSetLaunchTimeMinVersion = 0,
    kSetMainThreadTaskLoadIsLowMinVersion = 0,
    kSetPIDMinVersion = 0,
  };
  virtual ~ProcessCoordinationUnit() {}


  using GetIDCallback = base::OnceCallback<void(const ::resource_coordinator::CoordinationUnitID&)>;
  virtual void GetID(GetIDCallback callback) = 0;

  virtual void AddBinding(ProcessCoordinationUnitRequest request) = 0;

  virtual void AddFrame(const ::resource_coordinator::CoordinationUnitID& cu_id) = 0;

  virtual void RemoveFrame(const ::resource_coordinator::CoordinationUnitID& cu_id) = 0;

  virtual void SetCPUUsage(double cpu_usage) = 0;

  virtual void SetExpectedTaskQueueingDuration(base::TimeDelta duration) = 0;

  virtual void SetLaunchTime(base::Time launch_time) = 0;

  virtual void SetMainThreadTaskLoadIsLow(bool main_thread_task_load_is_low) = 0;

  virtual void SetPID(int64_t pid) = 0;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) ProcessCoordinationUnitInterceptorForTesting : public ProcessCoordinationUnit {
  virtual ProcessCoordinationUnit* GetForwardingInterface() = 0;
  void GetID(GetIDCallback callback) override;
  void AddBinding(ProcessCoordinationUnitRequest request) override;
  void AddFrame(const ::resource_coordinator::CoordinationUnitID& cu_id) override;
  void RemoveFrame(const ::resource_coordinator::CoordinationUnitID& cu_id) override;
  void SetCPUUsage(double cpu_usage) override;
  void SetExpectedTaskQueueingDuration(base::TimeDelta duration) override;
  void SetLaunchTime(base::Time launch_time) override;
  void SetMainThreadTaskLoadIsLow(bool main_thread_task_load_is_low) override;
  void SetPID(int64_t pid) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) ProcessCoordinationUnitAsyncWaiter {
 public:
  explicit ProcessCoordinationUnitAsyncWaiter(ProcessCoordinationUnit* proxy);
  ~ProcessCoordinationUnitAsyncWaiter();
  void GetID(
      ::resource_coordinator::CoordinationUnitID* out_id);

 private:
  ProcessCoordinationUnit* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ProcessCoordinationUnitAsyncWaiter);
};

class SystemCoordinationUnitProxy;

template <typename ImplRefTraits>
class SystemCoordinationUnitStub;

class SystemCoordinationUnitRequestValidator;
class SystemCoordinationUnitResponseValidator;

class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) SystemCoordinationUnit
    : public SystemCoordinationUnitInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = SystemCoordinationUnitProxy;

  template <typename ImplRefTraits>
  using Stub_ = SystemCoordinationUnitStub<ImplRefTraits>;

  using RequestValidator_ = SystemCoordinationUnitRequestValidator;
  using ResponseValidator_ = SystemCoordinationUnitResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetIDMinVersion = 0,
    kAddBindingMinVersion = 0,
    kOnProcessCPUUsageReadyMinVersion = 0,
    kDistributeMeasurementBatchMinVersion = 0,
  };
  virtual ~SystemCoordinationUnit() {}


  using GetIDCallback = base::OnceCallback<void(const ::resource_coordinator::CoordinationUnitID&)>;
  virtual void GetID(GetIDCallback callback) = 0;

  virtual void AddBinding(SystemCoordinationUnitRequest request) = 0;

  virtual void OnProcessCPUUsageReady() = 0;

  virtual void DistributeMeasurementBatch(ProcessResourceMeasurementBatchPtr measurement_batch) = 0;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) SystemCoordinationUnitInterceptorForTesting : public SystemCoordinationUnit {
  virtual SystemCoordinationUnit* GetForwardingInterface() = 0;
  void GetID(GetIDCallback callback) override;
  void AddBinding(SystemCoordinationUnitRequest request) override;
  void OnProcessCPUUsageReady() override;
  void DistributeMeasurementBatch(ProcessResourceMeasurementBatchPtr measurement_batch) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) SystemCoordinationUnitAsyncWaiter {
 public:
  explicit SystemCoordinationUnitAsyncWaiter(SystemCoordinationUnit* proxy);
  ~SystemCoordinationUnitAsyncWaiter();
  void GetID(
      ::resource_coordinator::CoordinationUnitID* out_id);

 private:
  SystemCoordinationUnit* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SystemCoordinationUnitAsyncWaiter);
};

class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) FrameCoordinationUnitProxy
    : public FrameCoordinationUnit {
 public:
  explicit FrameCoordinationUnitProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetID(GetIDCallback callback) final;
  void AddBinding(FrameCoordinationUnitRequest request) final;
  void AddChildFrame(const ::resource_coordinator::CoordinationUnitID& cu_id) final;
  void RemoveChildFrame(const ::resource_coordinator::CoordinationUnitID& cu_id) final;
  void SetAudibility(bool audible) final;
  void SetNetworkAlmostIdle(bool idle) final;
  void SetLifecycleState(::resource_coordinator::mojom::LifecycleState state) final;
  void OnAlertFired() final;
  void OnNonPersistentNotificationCreated() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) PageCoordinationUnitProxy
    : public PageCoordinationUnit {
 public:
  explicit PageCoordinationUnitProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetID(GetIDCallback callback) final;
  void AddBinding(PageCoordinationUnitRequest request) final;
  void AddFrame(const ::resource_coordinator::CoordinationUnitID& cu_id) final;
  void RemoveFrame(const ::resource_coordinator::CoordinationUnitID& cu_id) final;
  void SetIsLoading(bool is_loading) final;
  void SetVisibility(bool visible) final;
  void SetUKMSourceId(int64_t ukm_source_id) final;
  void OnFaviconUpdated() final;
  void OnTitleUpdated() final;
  void OnMainFrameNavigationCommitted() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) ProcessCoordinationUnitProxy
    : public ProcessCoordinationUnit {
 public:
  explicit ProcessCoordinationUnitProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetID(GetIDCallback callback) final;
  void AddBinding(ProcessCoordinationUnitRequest request) final;
  void AddFrame(const ::resource_coordinator::CoordinationUnitID& cu_id) final;
  void RemoveFrame(const ::resource_coordinator::CoordinationUnitID& cu_id) final;
  void SetCPUUsage(double cpu_usage) final;
  void SetExpectedTaskQueueingDuration(base::TimeDelta duration) final;
  void SetLaunchTime(base::Time launch_time) final;
  void SetMainThreadTaskLoadIsLow(bool main_thread_task_load_is_low) final;
  void SetPID(int64_t pid) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) SystemCoordinationUnitProxy
    : public SystemCoordinationUnit {
 public:
  explicit SystemCoordinationUnitProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetID(GetIDCallback callback) final;
  void AddBinding(SystemCoordinationUnitRequest request) final;
  void OnProcessCPUUsageReady() final;
  void DistributeMeasurementBatch(ProcessResourceMeasurementBatchPtr measurement_batch) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) FrameCoordinationUnitStubDispatch {
 public:
  static bool Accept(FrameCoordinationUnit* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FrameCoordinationUnit* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FrameCoordinationUnit>>
class FrameCoordinationUnitStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FrameCoordinationUnitStub() {}
  ~FrameCoordinationUnitStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FrameCoordinationUnitStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FrameCoordinationUnitStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) PageCoordinationUnitStubDispatch {
 public:
  static bool Accept(PageCoordinationUnit* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PageCoordinationUnit* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PageCoordinationUnit>>
class PageCoordinationUnitStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PageCoordinationUnitStub() {}
  ~PageCoordinationUnitStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PageCoordinationUnitStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PageCoordinationUnitStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) ProcessCoordinationUnitStubDispatch {
 public:
  static bool Accept(ProcessCoordinationUnit* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ProcessCoordinationUnit* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ProcessCoordinationUnit>>
class ProcessCoordinationUnitStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ProcessCoordinationUnitStub() {}
  ~ProcessCoordinationUnitStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProcessCoordinationUnitStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProcessCoordinationUnitStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) SystemCoordinationUnitStubDispatch {
 public:
  static bool Accept(SystemCoordinationUnit* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SystemCoordinationUnit* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SystemCoordinationUnit>>
class SystemCoordinationUnitStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SystemCoordinationUnitStub() {}
  ~SystemCoordinationUnitStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SystemCoordinationUnitStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SystemCoordinationUnitStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) FrameCoordinationUnitRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) PageCoordinationUnitRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) ProcessCoordinationUnitRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) SystemCoordinationUnitRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) FrameCoordinationUnitResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) PageCoordinationUnitResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) ProcessCoordinationUnitResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) SystemCoordinationUnitResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};


class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) CoordinationUnitID {
 public:
  using DataView = CoordinationUnitIDDataView;
  using Data_ = internal::CoordinationUnitID_Data;

  template <typename... Args>
  static CoordinationUnitIDPtr New(Args&&... args) {
    return CoordinationUnitIDPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CoordinationUnitIDPtr From(const U& u) {
    return mojo::TypeConverter<CoordinationUnitIDPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CoordinationUnitID>::Convert(*this);
  }


  CoordinationUnitID();

  CoordinationUnitID(
      ::resource_coordinator::CoordinationUnitType type,
      int64_t id);

  ~CoordinationUnitID();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CoordinationUnitIDPtr>
  CoordinationUnitIDPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CoordinationUnitID>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CoordinationUnitID::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CoordinationUnitID::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CoordinationUnitID_UnserializedMessageContext<
            UserType, CoordinationUnitID::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CoordinationUnitID::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CoordinationUnitID::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CoordinationUnitID_UnserializedMessageContext<
            UserType, CoordinationUnitID::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CoordinationUnitID::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  ::resource_coordinator::CoordinationUnitType type;
  int64_t id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};







class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) ProcessResourceMeasurement {
 public:
  using DataView = ProcessResourceMeasurementDataView;
  using Data_ = internal::ProcessResourceMeasurement_Data;

  template <typename... Args>
  static ProcessResourceMeasurementPtr New(Args&&... args) {
    return ProcessResourceMeasurementPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ProcessResourceMeasurementPtr From(const U& u) {
    return mojo::TypeConverter<ProcessResourceMeasurementPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ProcessResourceMeasurement>::Convert(*this);
  }


  ProcessResourceMeasurement();

  ProcessResourceMeasurement(
      base::ProcessId pid,
      base::TimeDelta cpu_usage,
      uint32_t private_footprint_kb);

  ~ProcessResourceMeasurement();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ProcessResourceMeasurementPtr>
  ProcessResourceMeasurementPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ProcessResourceMeasurement>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ProcessResourceMeasurement::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ProcessResourceMeasurement::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ProcessResourceMeasurement_UnserializedMessageContext<
            UserType, ProcessResourceMeasurement::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ProcessResourceMeasurement::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ProcessResourceMeasurement::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ProcessResourceMeasurement_UnserializedMessageContext<
            UserType, ProcessResourceMeasurement::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ProcessResourceMeasurement::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  base::ProcessId pid;
  base::TimeDelta cpu_usage;
  uint32_t private_footprint_kb;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) ProcessResourceMeasurementBatch {
 public:
  using DataView = ProcessResourceMeasurementBatchDataView;
  using Data_ = internal::ProcessResourceMeasurementBatch_Data;

  template <typename... Args>
  static ProcessResourceMeasurementBatchPtr New(Args&&... args) {
    return ProcessResourceMeasurementBatchPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ProcessResourceMeasurementBatchPtr From(const U& u) {
    return mojo::TypeConverter<ProcessResourceMeasurementBatchPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ProcessResourceMeasurementBatch>::Convert(*this);
  }


  ProcessResourceMeasurementBatch();

  ProcessResourceMeasurementBatch(
      base::TimeTicks batch_started_time,
      base::TimeTicks batch_ended_time,
      std::vector<ProcessResourceMeasurementPtr> measurements);

  ~ProcessResourceMeasurementBatch();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ProcessResourceMeasurementBatchPtr>
  ProcessResourceMeasurementBatchPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ProcessResourceMeasurementBatch>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ProcessResourceMeasurementBatch::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ProcessResourceMeasurementBatch::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ProcessResourceMeasurementBatch_UnserializedMessageContext<
            UserType, ProcessResourceMeasurementBatch::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ProcessResourceMeasurementBatch::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ProcessResourceMeasurementBatch::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ProcessResourceMeasurementBatch_UnserializedMessageContext<
            UserType, ProcessResourceMeasurementBatch::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ProcessResourceMeasurementBatch::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  base::TimeTicks batch_started_time;
  base::TimeTicks batch_ended_time;
  std::vector<ProcessResourceMeasurementPtr> measurements;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ProcessResourceMeasurementBatch);
};

template <typename StructPtrType>
CoordinationUnitIDPtr CoordinationUnitID::Clone() const {
  return New(
      mojo::Clone(type),
      mojo::Clone(id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CoordinationUnitID>::value>::type*>
bool CoordinationUnitID::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  return true;
}
template <typename StructPtrType>
ProcessResourceMeasurementPtr ProcessResourceMeasurement::Clone() const {
  return New(
      mojo::Clone(pid),
      mojo::Clone(cpu_usage),
      mojo::Clone(private_footprint_kb)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ProcessResourceMeasurement>::value>::type*>
bool ProcessResourceMeasurement::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->pid, other_struct.pid))
    return false;
  if (!mojo::Equals(this->cpu_usage, other_struct.cpu_usage))
    return false;
  if (!mojo::Equals(this->private_footprint_kb, other_struct.private_footprint_kb))
    return false;
  return true;
}
template <typename StructPtrType>
ProcessResourceMeasurementBatchPtr ProcessResourceMeasurementBatch::Clone() const {
  return New(
      mojo::Clone(batch_started_time),
      mojo::Clone(batch_ended_time),
      mojo::Clone(measurements)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ProcessResourceMeasurementBatch>::value>::type*>
bool ProcessResourceMeasurementBatch::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->batch_started_time, other_struct.batch_started_time))
    return false;
  if (!mojo::Equals(this->batch_ended_time, other_struct.batch_ended_time))
    return false;
  if (!mojo::Equals(this->measurements, other_struct.measurements))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace resource_coordinator

namespace mojo {


template <>
struct COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) StructTraits<::resource_coordinator::mojom::CoordinationUnitID::DataView,
                                         ::resource_coordinator::mojom::CoordinationUnitIDPtr> {
  static bool IsNull(const ::resource_coordinator::mojom::CoordinationUnitIDPtr& input) { return !input; }
  static void SetToNull(::resource_coordinator::mojom::CoordinationUnitIDPtr* output) { output->reset(); }

  static decltype(::resource_coordinator::mojom::CoordinationUnitID::type) type(
      const ::resource_coordinator::mojom::CoordinationUnitIDPtr& input) {
    return input->type;
  }

  static decltype(::resource_coordinator::mojom::CoordinationUnitID::id) id(
      const ::resource_coordinator::mojom::CoordinationUnitIDPtr& input) {
    return input->id;
  }

  static bool Read(::resource_coordinator::mojom::CoordinationUnitID::DataView input, ::resource_coordinator::mojom::CoordinationUnitIDPtr* output);
};


template <>
struct COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) StructTraits<::resource_coordinator::mojom::ProcessResourceMeasurement::DataView,
                                         ::resource_coordinator::mojom::ProcessResourceMeasurementPtr> {
  static bool IsNull(const ::resource_coordinator::mojom::ProcessResourceMeasurementPtr& input) { return !input; }
  static void SetToNull(::resource_coordinator::mojom::ProcessResourceMeasurementPtr* output) { output->reset(); }

  static const decltype(::resource_coordinator::mojom::ProcessResourceMeasurement::pid)& pid(
      const ::resource_coordinator::mojom::ProcessResourceMeasurementPtr& input) {
    return input->pid;
  }

  static const decltype(::resource_coordinator::mojom::ProcessResourceMeasurement::cpu_usage)& cpu_usage(
      const ::resource_coordinator::mojom::ProcessResourceMeasurementPtr& input) {
    return input->cpu_usage;
  }

  static decltype(::resource_coordinator::mojom::ProcessResourceMeasurement::private_footprint_kb) private_footprint_kb(
      const ::resource_coordinator::mojom::ProcessResourceMeasurementPtr& input) {
    return input->private_footprint_kb;
  }

  static bool Read(::resource_coordinator::mojom::ProcessResourceMeasurement::DataView input, ::resource_coordinator::mojom::ProcessResourceMeasurementPtr* output);
};


template <>
struct COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) StructTraits<::resource_coordinator::mojom::ProcessResourceMeasurementBatch::DataView,
                                         ::resource_coordinator::mojom::ProcessResourceMeasurementBatchPtr> {
  static bool IsNull(const ::resource_coordinator::mojom::ProcessResourceMeasurementBatchPtr& input) { return !input; }
  static void SetToNull(::resource_coordinator::mojom::ProcessResourceMeasurementBatchPtr* output) { output->reset(); }

  static const decltype(::resource_coordinator::mojom::ProcessResourceMeasurementBatch::batch_started_time)& batch_started_time(
      const ::resource_coordinator::mojom::ProcessResourceMeasurementBatchPtr& input) {
    return input->batch_started_time;
  }

  static const decltype(::resource_coordinator::mojom::ProcessResourceMeasurementBatch::batch_ended_time)& batch_ended_time(
      const ::resource_coordinator::mojom::ProcessResourceMeasurementBatchPtr& input) {
    return input->batch_ended_time;
  }

  static const decltype(::resource_coordinator::mojom::ProcessResourceMeasurementBatch::measurements)& measurements(
      const ::resource_coordinator::mojom::ProcessResourceMeasurementBatchPtr& input) {
    return input->measurements;
  }

  static bool Read(::resource_coordinator::mojom::ProcessResourceMeasurementBatch::DataView input, ::resource_coordinator::mojom::ProcessResourceMeasurementBatchPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_MOJOM_H_