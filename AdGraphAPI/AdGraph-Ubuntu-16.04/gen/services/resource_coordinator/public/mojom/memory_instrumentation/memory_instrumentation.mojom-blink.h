// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_BLINK_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_BLINK_H_

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
#include "services/resource_coordinator/public/mojom/memory_instrumentation/memory_instrumentation.mojom-shared.h"
#include "mojo/public/mojom/base/process_id.mojom-blink.h"

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
struct memory_instrumentation_mojom_internal_DumpType_DataHashFn {
  static unsigned GetHash(const ::memory_instrumentation::mojom::DumpType& value) {
    using utype = std::underlying_type<::memory_instrumentation::mojom::DumpType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::memory_instrumentation::mojom::DumpType& left, const ::memory_instrumentation::mojom::DumpType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::memory_instrumentation::mojom::DumpType> {
  using Hash = memory_instrumentation_mojom_internal_DumpType_DataHashFn;
};

template <>
struct HashTraits<::memory_instrumentation::mojom::DumpType>
    : public GenericHashTraits<::memory_instrumentation::mojom::DumpType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::memory_instrumentation::mojom::DumpType& value) {
    return value == static_cast<::memory_instrumentation::mojom::DumpType>(-1000000);
  }
  static void ConstructDeletedValue(::memory_instrumentation::mojom::DumpType& slot, bool) {
    slot = static_cast<::memory_instrumentation::mojom::DumpType>(-1000001);
  }
  static bool IsDeletedValue(const ::memory_instrumentation::mojom::DumpType& value) {
    return value == static_cast<::memory_instrumentation::mojom::DumpType>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct memory_instrumentation_mojom_internal_LevelOfDetail_DataHashFn {
  static unsigned GetHash(const ::memory_instrumentation::mojom::LevelOfDetail& value) {
    using utype = std::underlying_type<::memory_instrumentation::mojom::LevelOfDetail>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::memory_instrumentation::mojom::LevelOfDetail& left, const ::memory_instrumentation::mojom::LevelOfDetail& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::memory_instrumentation::mojom::LevelOfDetail> {
  using Hash = memory_instrumentation_mojom_internal_LevelOfDetail_DataHashFn;
};

template <>
struct HashTraits<::memory_instrumentation::mojom::LevelOfDetail>
    : public GenericHashTraits<::memory_instrumentation::mojom::LevelOfDetail> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::memory_instrumentation::mojom::LevelOfDetail& value) {
    return value == static_cast<::memory_instrumentation::mojom::LevelOfDetail>(-1000000);
  }
  static void ConstructDeletedValue(::memory_instrumentation::mojom::LevelOfDetail& slot, bool) {
    slot = static_cast<::memory_instrumentation::mojom::LevelOfDetail>(-1000001);
  }
  static bool IsDeletedValue(const ::memory_instrumentation::mojom::LevelOfDetail& value) {
    return value == static_cast<::memory_instrumentation::mojom::LevelOfDetail>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct memory_instrumentation_mojom_internal_ProcessType_DataHashFn {
  static unsigned GetHash(const ::memory_instrumentation::mojom::ProcessType& value) {
    using utype = std::underlying_type<::memory_instrumentation::mojom::ProcessType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::memory_instrumentation::mojom::ProcessType& left, const ::memory_instrumentation::mojom::ProcessType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::memory_instrumentation::mojom::ProcessType> {
  using Hash = memory_instrumentation_mojom_internal_ProcessType_DataHashFn;
};

template <>
struct HashTraits<::memory_instrumentation::mojom::ProcessType>
    : public GenericHashTraits<::memory_instrumentation::mojom::ProcessType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::memory_instrumentation::mojom::ProcessType& value) {
    return value == static_cast<::memory_instrumentation::mojom::ProcessType>(-1000000);
  }
  static void ConstructDeletedValue(::memory_instrumentation::mojom::ProcessType& slot, bool) {
    slot = static_cast<::memory_instrumentation::mojom::ProcessType>(-1000001);
  }
  static bool IsDeletedValue(const ::memory_instrumentation::mojom::ProcessType& value) {
    return value == static_cast<::memory_instrumentation::mojom::ProcessType>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct memory_instrumentation_mojom_internal_HeapProfilingMode_DataHashFn {
  static unsigned GetHash(const ::memory_instrumentation::mojom::HeapProfilingMode& value) {
    using utype = std::underlying_type<::memory_instrumentation::mojom::HeapProfilingMode>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::memory_instrumentation::mojom::HeapProfilingMode& left, const ::memory_instrumentation::mojom::HeapProfilingMode& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::memory_instrumentation::mojom::HeapProfilingMode> {
  using Hash = memory_instrumentation_mojom_internal_HeapProfilingMode_DataHashFn;
};

template <>
struct HashTraits<::memory_instrumentation::mojom::HeapProfilingMode>
    : public GenericHashTraits<::memory_instrumentation::mojom::HeapProfilingMode> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::memory_instrumentation::mojom::HeapProfilingMode& value) {
    return value == static_cast<::memory_instrumentation::mojom::HeapProfilingMode>(-1000000);
  }
  static void ConstructDeletedValue(::memory_instrumentation::mojom::HeapProfilingMode& slot, bool) {
    slot = static_cast<::memory_instrumentation::mojom::HeapProfilingMode>(-1000001);
  }
  static bool IsDeletedValue(const ::memory_instrumentation::mojom::HeapProfilingMode& value) {
    return value == static_cast<::memory_instrumentation::mojom::HeapProfilingMode>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct memory_instrumentation_mojom_internal_MemoryMapOption_DataHashFn {
  static unsigned GetHash(const ::memory_instrumentation::mojom::MemoryMapOption& value) {
    using utype = std::underlying_type<::memory_instrumentation::mojom::MemoryMapOption>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::memory_instrumentation::mojom::MemoryMapOption& left, const ::memory_instrumentation::mojom::MemoryMapOption& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::memory_instrumentation::mojom::MemoryMapOption> {
  using Hash = memory_instrumentation_mojom_internal_MemoryMapOption_DataHashFn;
};

template <>
struct HashTraits<::memory_instrumentation::mojom::MemoryMapOption>
    : public GenericHashTraits<::memory_instrumentation::mojom::MemoryMapOption> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::memory_instrumentation::mojom::MemoryMapOption& value) {
    return value == static_cast<::memory_instrumentation::mojom::MemoryMapOption>(-1000000);
  }
  static void ConstructDeletedValue(::memory_instrumentation::mojom::MemoryMapOption& slot, bool) {
    slot = static_cast<::memory_instrumentation::mojom::MemoryMapOption>(-1000001);
  }
  static bool IsDeletedValue(const ::memory_instrumentation::mojom::MemoryMapOption& value) {
    return value == static_cast<::memory_instrumentation::mojom::MemoryMapOption>(-1000001);
  }
};
}  // namespace WTF


namespace memory_instrumentation {
namespace mojom {
namespace blink {
using DumpType = DumpType;  // Alias for definition in the parent namespace.
using LevelOfDetail = LevelOfDetail;  // Alias for definition in the parent namespace.
using ProcessType = ProcessType;  // Alias for definition in the parent namespace.
using HeapProfilingMode = HeapProfilingMode;  // Alias for definition in the parent namespace.
using MemoryMapOption = MemoryMapOption;  // Alias for definition in the parent namespace.
class ClientProcess;
using ClientProcessPtr = mojo::InterfacePtr<ClientProcess>;
using RevocableClientProcessPtr = ::blink::RevocableInterfacePtr<ClientProcess>;
using ClientProcessPtrInfo = mojo::InterfacePtrInfo<ClientProcess>;
using ThreadSafeClientProcessPtr =
    mojo::ThreadSafeInterfacePtr<ClientProcess>;
using ClientProcessRequest = mojo::InterfaceRequest<ClientProcess>;
using ClientProcessAssociatedPtr =
    mojo::AssociatedInterfacePtr<ClientProcess>;
using ThreadSafeClientProcessAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ClientProcess>;
using ClientProcessAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ClientProcess>;
using ClientProcessAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ClientProcess>;

class HeapProfiler;
using HeapProfilerPtr = mojo::InterfacePtr<HeapProfiler>;
using RevocableHeapProfilerPtr = ::blink::RevocableInterfacePtr<HeapProfiler>;
using HeapProfilerPtrInfo = mojo::InterfacePtrInfo<HeapProfiler>;
using ThreadSafeHeapProfilerPtr =
    mojo::ThreadSafeInterfacePtr<HeapProfiler>;
using HeapProfilerRequest = mojo::InterfaceRequest<HeapProfiler>;
using HeapProfilerAssociatedPtr =
    mojo::AssociatedInterfacePtr<HeapProfiler>;
using ThreadSafeHeapProfilerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<HeapProfiler>;
using HeapProfilerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<HeapProfiler>;
using HeapProfilerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<HeapProfiler>;

class HeapProfilerHelper;
using HeapProfilerHelperPtr = mojo::InterfacePtr<HeapProfilerHelper>;
using RevocableHeapProfilerHelperPtr = ::blink::RevocableInterfacePtr<HeapProfilerHelper>;
using HeapProfilerHelperPtrInfo = mojo::InterfacePtrInfo<HeapProfilerHelper>;
using ThreadSafeHeapProfilerHelperPtr =
    mojo::ThreadSafeInterfacePtr<HeapProfilerHelper>;
using HeapProfilerHelperRequest = mojo::InterfaceRequest<HeapProfilerHelper>;
using HeapProfilerHelperAssociatedPtr =
    mojo::AssociatedInterfacePtr<HeapProfilerHelper>;
using ThreadSafeHeapProfilerHelperAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<HeapProfilerHelper>;
using HeapProfilerHelperAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<HeapProfilerHelper>;
using HeapProfilerHelperAssociatedRequest =
    mojo::AssociatedInterfaceRequest<HeapProfilerHelper>;

class Coordinator;
using CoordinatorPtr = mojo::InterfacePtr<Coordinator>;
using RevocableCoordinatorPtr = ::blink::RevocableInterfacePtr<Coordinator>;
using CoordinatorPtrInfo = mojo::InterfacePtrInfo<Coordinator>;
using ThreadSafeCoordinatorPtr =
    mojo::ThreadSafeInterfacePtr<Coordinator>;
using CoordinatorRequest = mojo::InterfaceRequest<Coordinator>;
using CoordinatorAssociatedPtr =
    mojo::AssociatedInterfacePtr<Coordinator>;
using ThreadSafeCoordinatorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Coordinator>;
using CoordinatorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Coordinator>;
using CoordinatorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Coordinator>;

class RequestArgs;
using RequestArgsPtr = mojo::InlinedStructPtr<RequestArgs>;

class RawAllocatorDumpEdge;
using RawAllocatorDumpEdgePtr = mojo::InlinedStructPtr<RawAllocatorDumpEdge>;

class RawAllocatorDumpEntry;
using RawAllocatorDumpEntryPtr = mojo::StructPtr<RawAllocatorDumpEntry>;

class RawAllocatorDump;
using RawAllocatorDumpPtr = mojo::StructPtr<RawAllocatorDump>;

class RawProcessMemoryDump;
using RawProcessMemoryDumpPtr = mojo::StructPtr<RawProcessMemoryDump>;

class VmRegion;
using VmRegionPtr = mojo::StructPtr<VmRegion>;

class PlatformPrivateFootprint;
using PlatformPrivateFootprintPtr = mojo::StructPtr<PlatformPrivateFootprint>;

class RawOSMemDump;
using RawOSMemDumpPtr = mojo::StructPtr<RawOSMemDump>;

class OSMemDump;
using OSMemDumpPtr = mojo::InlinedStructPtr<OSMemDump>;

class AllocatorMemDump;
using AllocatorMemDumpPtr = mojo::StructPtr<AllocatorMemDump>;

class ProcessMemoryDump;
using ProcessMemoryDumpPtr = mojo::StructPtr<ProcessMemoryDump>;

class GlobalMemoryDump;
using GlobalMemoryDumpPtr = mojo::StructPtr<GlobalMemoryDump>;

class SharedBufferWithSize;
using SharedBufferWithSizePtr = mojo::StructPtr<SharedBufferWithSize>;

class RawAllocatorDumpEntryValue;

typedef mojo::InlinedStructPtr<RawAllocatorDumpEntryValue> RawAllocatorDumpEntryValuePtr;


class ClientProcessProxy;

template <typename ImplRefTraits>
class ClientProcessStub;

class ClientProcessRequestValidator;
class ClientProcessResponseValidator;

class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) ClientProcess
    : public ClientProcessInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ClientProcessProxy;

  template <typename ImplRefTraits>
  using Stub_ = ClientProcessStub<ImplRefTraits>;

  using RequestValidator_ = ClientProcessRequestValidator;
  using ResponseValidator_ = ClientProcessResponseValidator;
  enum MethodMinVersions : uint32_t {
    kRequestChromeMemoryDumpMinVersion = 0,
    kEnableHeapProfilingMinVersion = 0,
    kRequestOSMemoryDumpMinVersion = 0,
  };
  virtual ~ClientProcess() {}


  using RequestChromeMemoryDumpCallback = base::OnceCallback<void(bool, uint64_t, RawProcessMemoryDumpPtr)>;
  virtual void RequestChromeMemoryDump(RequestArgsPtr args, RequestChromeMemoryDumpCallback callback) = 0;


  using EnableHeapProfilingCallback = base::OnceCallback<void(bool)>;
  virtual void EnableHeapProfiling(HeapProfilingMode mode, EnableHeapProfilingCallback callback) = 0;


  using RequestOSMemoryDumpCallback = base::OnceCallback<void(bool, WTF::HashMap<::mojo_base::mojom::blink::ProcessIdPtr, RawOSMemDumpPtr>)>;
  virtual void RequestOSMemoryDump(MemoryMapOption option, WTF::Vector<::mojo_base::mojom::blink::ProcessIdPtr> pids, RequestOSMemoryDumpCallback callback) = 0;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) ClientProcessInterceptorForTesting : public ClientProcess {
  virtual ClientProcess* GetForwardingInterface() = 0;
  void RequestChromeMemoryDump(RequestArgsPtr args, RequestChromeMemoryDumpCallback callback) override;
  void EnableHeapProfiling(HeapProfilingMode mode, EnableHeapProfilingCallback callback) override;
  void RequestOSMemoryDump(MemoryMapOption option, WTF::Vector<::mojo_base::mojom::blink::ProcessIdPtr> pids, RequestOSMemoryDumpCallback callback) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) ClientProcessAsyncWaiter {
 public:
  explicit ClientProcessAsyncWaiter(ClientProcess* proxy);
  ~ClientProcessAsyncWaiter();
  void RequestChromeMemoryDump(
      RequestArgsPtr args, bool* out_success, uint64_t* out_dump_id, RawProcessMemoryDumpPtr* out_raw_process_memory_dump);
  void EnableHeapProfiling(
      HeapProfilingMode mode, bool* out_success);
  void RequestOSMemoryDump(
      MemoryMapOption option, WTF::Vector<::mojo_base::mojom::blink::ProcessIdPtr> pids, bool* out_success, WTF::HashMap<::mojo_base::mojom::blink::ProcessIdPtr, RawOSMemDumpPtr>* out_dumps);

 private:
  ClientProcess* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ClientProcessAsyncWaiter);
};

class HeapProfilerProxy;

template <typename ImplRefTraits>
class HeapProfilerStub;

class HeapProfilerRequestValidator;
class HeapProfilerResponseValidator;

class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) HeapProfiler
    : public HeapProfilerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = HeapProfilerProxy;

  template <typename ImplRefTraits>
  using Stub_ = HeapProfilerStub<ImplRefTraits>;

  using RequestValidator_ = HeapProfilerRequestValidator;
  using ResponseValidator_ = HeapProfilerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kDumpProcessesForTracingMinVersion = 0,
  };
  virtual ~HeapProfiler() {}


  using DumpProcessesForTracingCallback = base::OnceCallback<void(WTF::Vector<SharedBufferWithSizePtr>)>;
  virtual void DumpProcessesForTracing(bool strip_path_from_mapped_files, DumpProcessesForTracingCallback callback) = 0;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) HeapProfilerInterceptorForTesting : public HeapProfiler {
  virtual HeapProfiler* GetForwardingInterface() = 0;
  void DumpProcessesForTracing(bool strip_path_from_mapped_files, DumpProcessesForTracingCallback callback) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) HeapProfilerAsyncWaiter {
 public:
  explicit HeapProfilerAsyncWaiter(HeapProfiler* proxy);
  ~HeapProfilerAsyncWaiter();
  void DumpProcessesForTracing(
      bool strip_path_from_mapped_files, WTF::Vector<SharedBufferWithSizePtr>* out_buffers);

 private:
  HeapProfiler* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(HeapProfilerAsyncWaiter);
};

class HeapProfilerHelperProxy;

template <typename ImplRefTraits>
class HeapProfilerHelperStub;

class HeapProfilerHelperRequestValidator;
class HeapProfilerHelperResponseValidator;

class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) HeapProfilerHelper
    : public HeapProfilerHelperInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = HeapProfilerHelperProxy;

  template <typename ImplRefTraits>
  using Stub_ = HeapProfilerHelperStub<ImplRefTraits>;

  using RequestValidator_ = HeapProfilerHelperRequestValidator;
  using ResponseValidator_ = HeapProfilerHelperResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetVmRegionsForHeapProfilerMinVersion = 0,
  };
  virtual ~HeapProfilerHelper() {}


  using GetVmRegionsForHeapProfilerCallback = base::OnceCallback<void(WTF::HashMap<::mojo_base::mojom::blink::ProcessIdPtr, WTF::Vector<VmRegionPtr>>)>;
  virtual void GetVmRegionsForHeapProfiler(WTF::Vector<::mojo_base::mojom::blink::ProcessIdPtr> pids, GetVmRegionsForHeapProfilerCallback callback) = 0;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) HeapProfilerHelperInterceptorForTesting : public HeapProfilerHelper {
  virtual HeapProfilerHelper* GetForwardingInterface() = 0;
  void GetVmRegionsForHeapProfiler(WTF::Vector<::mojo_base::mojom::blink::ProcessIdPtr> pids, GetVmRegionsForHeapProfilerCallback callback) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) HeapProfilerHelperAsyncWaiter {
 public:
  explicit HeapProfilerHelperAsyncWaiter(HeapProfilerHelper* proxy);
  ~HeapProfilerHelperAsyncWaiter();
  void GetVmRegionsForHeapProfiler(
      WTF::Vector<::mojo_base::mojom::blink::ProcessIdPtr> pids, WTF::HashMap<::mojo_base::mojom::blink::ProcessIdPtr, WTF::Vector<VmRegionPtr>>* out_vm_regions);

 private:
  HeapProfilerHelper* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(HeapProfilerHelperAsyncWaiter);
};

class CoordinatorProxy;

template <typename ImplRefTraits>
class CoordinatorStub;

class CoordinatorRequestValidator;
class CoordinatorResponseValidator;

class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) Coordinator
    : public CoordinatorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = CoordinatorProxy;

  template <typename ImplRefTraits>
  using Stub_ = CoordinatorStub<ImplRefTraits>;

  using RequestValidator_ = CoordinatorRequestValidator;
  using ResponseValidator_ = CoordinatorResponseValidator;
  enum MethodMinVersions : uint32_t {
    kRegisterClientProcessMinVersion = 0,
    kRequestGlobalMemoryDumpMinVersion = 0,
    kRequestGlobalMemoryDumpForPidMinVersion = 0,
    kRequestGlobalMemoryDumpAndAppendToTraceMinVersion = 0,
    kRegisterHeapProfilerMinVersion = 0,
  };
  virtual ~Coordinator() {}

  virtual void RegisterClientProcess(ClientProcessPtr client_process, ProcessType process_type) = 0;


  using RequestGlobalMemoryDumpCallback = base::OnceCallback<void(bool, GlobalMemoryDumpPtr)>;
  virtual void RequestGlobalMemoryDump(DumpType dump_type, LevelOfDetail level_of_detail, const WTF::Vector<WTF::String>& allocator_dump_names, RequestGlobalMemoryDumpCallback callback) = 0;


  using RequestGlobalMemoryDumpForPidCallback = base::OnceCallback<void(bool, GlobalMemoryDumpPtr)>;
  virtual void RequestGlobalMemoryDumpForPid(::mojo_base::mojom::blink::ProcessIdPtr pid, const WTF::Vector<WTF::String>& allocator_dump_names, RequestGlobalMemoryDumpForPidCallback callback) = 0;


  using RequestGlobalMemoryDumpAndAppendToTraceCallback = base::OnceCallback<void(bool, uint64_t)>;
  virtual void RequestGlobalMemoryDumpAndAppendToTrace(DumpType dump_type, LevelOfDetail level_of_detail, RequestGlobalMemoryDumpAndAppendToTraceCallback callback) = 0;

  virtual void RegisterHeapProfiler(HeapProfilerPtr heap_profiler) = 0;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) CoordinatorInterceptorForTesting : public Coordinator {
  virtual Coordinator* GetForwardingInterface() = 0;
  void RegisterClientProcess(ClientProcessPtr client_process, ProcessType process_type) override;
  void RequestGlobalMemoryDump(DumpType dump_type, LevelOfDetail level_of_detail, const WTF::Vector<WTF::String>& allocator_dump_names, RequestGlobalMemoryDumpCallback callback) override;
  void RequestGlobalMemoryDumpForPid(::mojo_base::mojom::blink::ProcessIdPtr pid, const WTF::Vector<WTF::String>& allocator_dump_names, RequestGlobalMemoryDumpForPidCallback callback) override;
  void RequestGlobalMemoryDumpAndAppendToTrace(DumpType dump_type, LevelOfDetail level_of_detail, RequestGlobalMemoryDumpAndAppendToTraceCallback callback) override;
  void RegisterHeapProfiler(HeapProfilerPtr heap_profiler) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) CoordinatorAsyncWaiter {
 public:
  explicit CoordinatorAsyncWaiter(Coordinator* proxy);
  ~CoordinatorAsyncWaiter();
  void RequestGlobalMemoryDump(
      DumpType dump_type, LevelOfDetail level_of_detail, const WTF::Vector<WTF::String>& allocator_dump_names, bool* out_success, GlobalMemoryDumpPtr* out_global_memory_dump);
  void RequestGlobalMemoryDumpForPid(
      ::mojo_base::mojom::blink::ProcessIdPtr pid, const WTF::Vector<WTF::String>& allocator_dump_names, bool* out_success, GlobalMemoryDumpPtr* out_global_memory_dump);
  void RequestGlobalMemoryDumpAndAppendToTrace(
      DumpType dump_type, LevelOfDetail level_of_detail, bool* out_success, uint64_t* out_dump_id);

 private:
  Coordinator* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CoordinatorAsyncWaiter);
};

class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) ClientProcessProxy
    : public ClientProcess {
 public:
  explicit ClientProcessProxy(mojo::MessageReceiverWithResponder* receiver);
  void RequestChromeMemoryDump(RequestArgsPtr args, RequestChromeMemoryDumpCallback callback) final;
  void EnableHeapProfiling(HeapProfilingMode mode, EnableHeapProfilingCallback callback) final;
  void RequestOSMemoryDump(MemoryMapOption option, WTF::Vector<::mojo_base::mojom::blink::ProcessIdPtr> pids, RequestOSMemoryDumpCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) HeapProfilerProxy
    : public HeapProfiler {
 public:
  explicit HeapProfilerProxy(mojo::MessageReceiverWithResponder* receiver);
  void DumpProcessesForTracing(bool strip_path_from_mapped_files, DumpProcessesForTracingCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) HeapProfilerHelperProxy
    : public HeapProfilerHelper {
 public:
  explicit HeapProfilerHelperProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetVmRegionsForHeapProfiler(WTF::Vector<::mojo_base::mojom::blink::ProcessIdPtr> pids, GetVmRegionsForHeapProfilerCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) CoordinatorProxy
    : public Coordinator {
 public:
  explicit CoordinatorProxy(mojo::MessageReceiverWithResponder* receiver);
  void RegisterClientProcess(ClientProcessPtr client_process, ProcessType process_type) final;
  void RequestGlobalMemoryDump(DumpType dump_type, LevelOfDetail level_of_detail, const WTF::Vector<WTF::String>& allocator_dump_names, RequestGlobalMemoryDumpCallback callback) final;
  void RequestGlobalMemoryDumpForPid(::mojo_base::mojom::blink::ProcessIdPtr pid, const WTF::Vector<WTF::String>& allocator_dump_names, RequestGlobalMemoryDumpForPidCallback callback) final;
  void RequestGlobalMemoryDumpAndAppendToTrace(DumpType dump_type, LevelOfDetail level_of_detail, RequestGlobalMemoryDumpAndAppendToTraceCallback callback) final;
  void RegisterHeapProfiler(HeapProfilerPtr heap_profiler) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) ClientProcessStubDispatch {
 public:
  static bool Accept(ClientProcess* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ClientProcess* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ClientProcess>>
class ClientProcessStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ClientProcessStub() {}
  ~ClientProcessStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ClientProcessStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ClientProcessStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) HeapProfilerStubDispatch {
 public:
  static bool Accept(HeapProfiler* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      HeapProfiler* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<HeapProfiler>>
class HeapProfilerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  HeapProfilerStub() {}
  ~HeapProfilerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return HeapProfilerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return HeapProfilerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) HeapProfilerHelperStubDispatch {
 public:
  static bool Accept(HeapProfilerHelper* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      HeapProfilerHelper* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<HeapProfilerHelper>>
class HeapProfilerHelperStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  HeapProfilerHelperStub() {}
  ~HeapProfilerHelperStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return HeapProfilerHelperStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return HeapProfilerHelperStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) CoordinatorStubDispatch {
 public:
  static bool Accept(Coordinator* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Coordinator* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Coordinator>>
class CoordinatorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CoordinatorStub() {}
  ~CoordinatorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CoordinatorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CoordinatorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) ClientProcessRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) HeapProfilerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) HeapProfilerHelperRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) CoordinatorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) ClientProcessResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) HeapProfilerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) HeapProfilerHelperResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) CoordinatorResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};


class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) RequestArgs {
 public:
  using DataView = RequestArgsDataView;
  using Data_ = internal::RequestArgs_Data;

  template <typename... Args>
  static RequestArgsPtr New(Args&&... args) {
    return RequestArgsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RequestArgsPtr From(const U& u) {
    return mojo::TypeConverter<RequestArgsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RequestArgs>::Convert(*this);
  }


  RequestArgs();

  RequestArgs(
      uint64_t dump_guid,
      DumpType dump_type,
      LevelOfDetail level_of_detail);

  ~RequestArgs();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RequestArgsPtr>
  RequestArgsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RequestArgs>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RequestArgs::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RequestArgs::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RequestArgs_UnserializedMessageContext<
            UserType, RequestArgs::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<RequestArgs::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return RequestArgs::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RequestArgs_UnserializedMessageContext<
            UserType, RequestArgs::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RequestArgs::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  uint64_t dump_guid;
  DumpType dump_type;
  LevelOfDetail level_of_detail;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) RawAllocatorDumpEdge {
 public:
  using DataView = RawAllocatorDumpEdgeDataView;
  using Data_ = internal::RawAllocatorDumpEdge_Data;

  template <typename... Args>
  static RawAllocatorDumpEdgePtr New(Args&&... args) {
    return RawAllocatorDumpEdgePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RawAllocatorDumpEdgePtr From(const U& u) {
    return mojo::TypeConverter<RawAllocatorDumpEdgePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RawAllocatorDumpEdge>::Convert(*this);
  }


  RawAllocatorDumpEdge();

  RawAllocatorDumpEdge(
      uint64_t source_id,
      uint64_t target_id,
      int64_t importance,
      bool overridable);

  ~RawAllocatorDumpEdge();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RawAllocatorDumpEdgePtr>
  RawAllocatorDumpEdgePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RawAllocatorDumpEdge>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RawAllocatorDumpEdge::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RawAllocatorDumpEdge::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RawAllocatorDumpEdge_UnserializedMessageContext<
            UserType, RawAllocatorDumpEdge::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<RawAllocatorDumpEdge::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return RawAllocatorDumpEdge::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RawAllocatorDumpEdge_UnserializedMessageContext<
            UserType, RawAllocatorDumpEdge::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RawAllocatorDumpEdge::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  uint64_t source_id;
  uint64_t target_id;
  int64_t importance;
  bool overridable;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};








class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) OSMemDump {
 public:
  using DataView = OSMemDumpDataView;
  using Data_ = internal::OSMemDump_Data;

  template <typename... Args>
  static OSMemDumpPtr New(Args&&... args) {
    return OSMemDumpPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static OSMemDumpPtr From(const U& u) {
    return mojo::TypeConverter<OSMemDumpPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, OSMemDump>::Convert(*this);
  }


  OSMemDump();

  OSMemDump(
      uint32_t resident_set_kb,
      uint32_t private_footprint_kb,
      uint32_t shared_footprint_kb,
      uint32_t private_footprint_swap_kb);

  ~OSMemDump();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = OSMemDumpPtr>
  OSMemDumpPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, OSMemDump>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        OSMemDump::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        OSMemDump::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::OSMemDump_UnserializedMessageContext<
            UserType, OSMemDump::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<OSMemDump::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return OSMemDump::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::OSMemDump_UnserializedMessageContext<
            UserType, OSMemDump::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<OSMemDump::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  uint32_t resident_set_kb;
  uint32_t private_footprint_kb;
  uint32_t shared_footprint_kb;
  uint32_t private_footprint_swap_kb;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};






class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) RawAllocatorDumpEntryValue {
 public:
  using DataView = RawAllocatorDumpEntryValueDataView;
  using Data_ = internal::RawAllocatorDumpEntryValue_Data;
  using Tag = Data_::RawAllocatorDumpEntryValue_Tag;

  static RawAllocatorDumpEntryValuePtr New() {
    return RawAllocatorDumpEntryValuePtr(base::in_place);
  }
  // Construct an instance holding |value_uint64|.
  static RawAllocatorDumpEntryValuePtr
  NewValueUint64(
      uint64_t value_uint64) {
    auto result = RawAllocatorDumpEntryValuePtr(base::in_place);
    result->set_value_uint64(std::move(value_uint64));
    return result;
  }
  // Construct an instance holding |value_string|.
  static RawAllocatorDumpEntryValuePtr
  NewValueString(
      const WTF::String& value_string) {
    auto result = RawAllocatorDumpEntryValuePtr(base::in_place);
    result->set_value_string(std::move(value_string));
    return result;
  }

  template <typename U>
  static RawAllocatorDumpEntryValuePtr From(const U& u) {
    return mojo::TypeConverter<RawAllocatorDumpEntryValuePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RawAllocatorDumpEntryValue>::Convert(*this);
  }

  RawAllocatorDumpEntryValue();
  ~RawAllocatorDumpEntryValue();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = RawAllocatorDumpEntryValuePtr>
  RawAllocatorDumpEntryValuePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RawAllocatorDumpEntryValue>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  Tag which() const {
    return tag_;
  }


  bool is_value_uint64() const { return tag_ == Tag::VALUE_UINT64; }

  uint64_t get_value_uint64() const {
    DCHECK(tag_ == Tag::VALUE_UINT64);
    return data_.value_uint64;
  }

  void set_value_uint64(
      uint64_t value_uint64);
  bool is_value_string() const { return tag_ == Tag::VALUE_STRING; }

  WTF::String& get_value_string() const {
    DCHECK(tag_ == Tag::VALUE_STRING);
    return *(data_.value_string);
  }

  void set_value_string(
      const WTF::String& value_string);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RawAllocatorDumpEntryValue::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<RawAllocatorDumpEntryValue::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    uint64_t value_uint64;
    WTF::String* value_string;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};




class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) RawAllocatorDumpEntry {
 public:
  using DataView = RawAllocatorDumpEntryDataView;
  using Data_ = internal::RawAllocatorDumpEntry_Data;

  template <typename... Args>
  static RawAllocatorDumpEntryPtr New(Args&&... args) {
    return RawAllocatorDumpEntryPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RawAllocatorDumpEntryPtr From(const U& u) {
    return mojo::TypeConverter<RawAllocatorDumpEntryPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RawAllocatorDumpEntry>::Convert(*this);
  }


  RawAllocatorDumpEntry();

  RawAllocatorDumpEntry(
      const WTF::String& name,
      const WTF::String& units,
      RawAllocatorDumpEntryValuePtr value);

  ~RawAllocatorDumpEntry();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RawAllocatorDumpEntryPtr>
  RawAllocatorDumpEntryPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RawAllocatorDumpEntry>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RawAllocatorDumpEntry::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RawAllocatorDumpEntry::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RawAllocatorDumpEntry_UnserializedMessageContext<
            UserType, RawAllocatorDumpEntry::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<RawAllocatorDumpEntry::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return RawAllocatorDumpEntry::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RawAllocatorDumpEntry_UnserializedMessageContext<
            UserType, RawAllocatorDumpEntry::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RawAllocatorDumpEntry::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  WTF::String name;
  WTF::String units;
  RawAllocatorDumpEntryValuePtr value;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(RawAllocatorDumpEntry);
};


class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) RawAllocatorDump {
 public:
  using DataView = RawAllocatorDumpDataView;
  using Data_ = internal::RawAllocatorDump_Data;

  template <typename... Args>
  static RawAllocatorDumpPtr New(Args&&... args) {
    return RawAllocatorDumpPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RawAllocatorDumpPtr From(const U& u) {
    return mojo::TypeConverter<RawAllocatorDumpPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RawAllocatorDump>::Convert(*this);
  }


  RawAllocatorDump();

  RawAllocatorDump(
      uint64_t id,
      const WTF::String& absolute_name,
      bool weak,
      LevelOfDetail level_of_detail,
      WTF::Vector<RawAllocatorDumpEntryPtr> entries);

  ~RawAllocatorDump();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RawAllocatorDumpPtr>
  RawAllocatorDumpPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RawAllocatorDump>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RawAllocatorDump::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RawAllocatorDump::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RawAllocatorDump_UnserializedMessageContext<
            UserType, RawAllocatorDump::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<RawAllocatorDump::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return RawAllocatorDump::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RawAllocatorDump_UnserializedMessageContext<
            UserType, RawAllocatorDump::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RawAllocatorDump::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  uint64_t id;
  WTF::String absolute_name;
  bool weak;
  LevelOfDetail level_of_detail;
  WTF::Vector<RawAllocatorDumpEntryPtr> entries;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(RawAllocatorDump);
};


class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) RawProcessMemoryDump {
 public:
  using DataView = RawProcessMemoryDumpDataView;
  using Data_ = internal::RawProcessMemoryDump_Data;

  template <typename... Args>
  static RawProcessMemoryDumpPtr New(Args&&... args) {
    return RawProcessMemoryDumpPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RawProcessMemoryDumpPtr From(const U& u) {
    return mojo::TypeConverter<RawProcessMemoryDumpPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RawProcessMemoryDump>::Convert(*this);
  }


  RawProcessMemoryDump();

  RawProcessMemoryDump(
      LevelOfDetail level_of_detail,
      WTF::Vector<RawAllocatorDumpEdgePtr> allocator_dump_edges,
      WTF::Vector<RawAllocatorDumpPtr> allocator_dumps);

  ~RawProcessMemoryDump();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RawProcessMemoryDumpPtr>
  RawProcessMemoryDumpPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RawProcessMemoryDump>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RawProcessMemoryDump::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RawProcessMemoryDump::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RawProcessMemoryDump_UnserializedMessageContext<
            UserType, RawProcessMemoryDump::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<RawProcessMemoryDump::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return RawProcessMemoryDump::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RawProcessMemoryDump_UnserializedMessageContext<
            UserType, RawProcessMemoryDump::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RawProcessMemoryDump::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  LevelOfDetail level_of_detail;
  WTF::Vector<RawAllocatorDumpEdgePtr> allocator_dump_edges;
  WTF::Vector<RawAllocatorDumpPtr> allocator_dumps;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(RawProcessMemoryDump);
};


class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) VmRegion {
 public:
  using DataView = VmRegionDataView;
  using Data_ = internal::VmRegion_Data;
  static constexpr uint32_t kProtectionFlagsRead = 4U;
  static constexpr uint32_t kProtectionFlagsWrite = 2U;
  static constexpr uint32_t kProtectionFlagsExec = 1U;
  static constexpr uint32_t kProtectionFlagsMayshare = 128U;

  template <typename... Args>
  static VmRegionPtr New(Args&&... args) {
    return VmRegionPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VmRegionPtr From(const U& u) {
    return mojo::TypeConverter<VmRegionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VmRegion>::Convert(*this);
  }


  VmRegion();

  VmRegion(
      uint64_t start_address,
      uint64_t size_in_bytes,
      uint64_t module_timestamp,
      const WTF::String& module_debugid,
      const WTF::String& module_debug_path,
      uint32_t protection_flags,
      const WTF::String& mapped_file,
      uint64_t byte_stats_private_dirty_resident,
      uint64_t byte_stats_private_clean_resident,
      uint64_t byte_stats_shared_dirty_resident,
      uint64_t byte_stats_shared_clean_resident,
      uint64_t byte_stats_swapped,
      uint64_t byte_stats_proportional_resident);

  ~VmRegion();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VmRegionPtr>
  VmRegionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VmRegion>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VmRegion::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VmRegion::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VmRegion_UnserializedMessageContext<
            UserType, VmRegion::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VmRegion::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return VmRegion::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VmRegion_UnserializedMessageContext<
            UserType, VmRegion::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VmRegion::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  uint64_t start_address;
  uint64_t size_in_bytes;
  uint64_t module_timestamp;
  WTF::String module_debugid;
  WTF::String module_debug_path;
  uint32_t protection_flags;
  WTF::String mapped_file;
  uint64_t byte_stats_private_dirty_resident;
  uint64_t byte_stats_private_clean_resident;
  uint64_t byte_stats_shared_dirty_resident;
  uint64_t byte_stats_shared_clean_resident;
  uint64_t byte_stats_swapped;
  uint64_t byte_stats_proportional_resident;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) PlatformPrivateFootprint {
 public:
  using DataView = PlatformPrivateFootprintDataView;
  using Data_ = internal::PlatformPrivateFootprint_Data;

  template <typename... Args>
  static PlatformPrivateFootprintPtr New(Args&&... args) {
    return PlatformPrivateFootprintPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PlatformPrivateFootprintPtr From(const U& u) {
    return mojo::TypeConverter<PlatformPrivateFootprintPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PlatformPrivateFootprint>::Convert(*this);
  }


  PlatformPrivateFootprint();

  PlatformPrivateFootprint(
      uint64_t phys_footprint_bytes,
      uint64_t internal_bytes,
      uint64_t compressed_bytes,
      uint64_t rss_anon_bytes,
      uint64_t vm_swap_bytes,
      uint64_t private_bytes);

  ~PlatformPrivateFootprint();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PlatformPrivateFootprintPtr>
  PlatformPrivateFootprintPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PlatformPrivateFootprint>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PlatformPrivateFootprint::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PlatformPrivateFootprint::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PlatformPrivateFootprint_UnserializedMessageContext<
            UserType, PlatformPrivateFootprint::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PlatformPrivateFootprint::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return PlatformPrivateFootprint::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PlatformPrivateFootprint_UnserializedMessageContext<
            UserType, PlatformPrivateFootprint::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PlatformPrivateFootprint::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  uint64_t phys_footprint_bytes;
  uint64_t internal_bytes;
  uint64_t compressed_bytes;
  uint64_t rss_anon_bytes;
  uint64_t vm_swap_bytes;
  uint64_t private_bytes;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) RawOSMemDump {
 public:
  using DataView = RawOSMemDumpDataView;
  using Data_ = internal::RawOSMemDump_Data;

  template <typename... Args>
  static RawOSMemDumpPtr New(Args&&... args) {
    return RawOSMemDumpPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RawOSMemDumpPtr From(const U& u) {
    return mojo::TypeConverter<RawOSMemDumpPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RawOSMemDump>::Convert(*this);
  }


  RawOSMemDump();

  RawOSMemDump(
      uint32_t resident_set_kb,
      PlatformPrivateFootprintPtr platform_private_footprint,
      WTF::Vector<VmRegionPtr> memory_maps);

  ~RawOSMemDump();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RawOSMemDumpPtr>
  RawOSMemDumpPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RawOSMemDump>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RawOSMemDump::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RawOSMemDump::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RawOSMemDump_UnserializedMessageContext<
            UserType, RawOSMemDump::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<RawOSMemDump::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return RawOSMemDump::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RawOSMemDump_UnserializedMessageContext<
            UserType, RawOSMemDump::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RawOSMemDump::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  uint32_t resident_set_kb;
  PlatformPrivateFootprintPtr platform_private_footprint;
  WTF::Vector<VmRegionPtr> memory_maps;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(RawOSMemDump);
};



class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) AllocatorMemDump {
 public:
  using DataView = AllocatorMemDumpDataView;
  using Data_ = internal::AllocatorMemDump_Data;

  template <typename... Args>
  static AllocatorMemDumpPtr New(Args&&... args) {
    return AllocatorMemDumpPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static AllocatorMemDumpPtr From(const U& u) {
    return mojo::TypeConverter<AllocatorMemDumpPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AllocatorMemDump>::Convert(*this);
  }


  AllocatorMemDump();

  explicit AllocatorMemDump(
      const WTF::HashMap<WTF::String, uint64_t>& numeric_entries);

  ~AllocatorMemDump();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AllocatorMemDumpPtr>
  AllocatorMemDumpPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AllocatorMemDump>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        AllocatorMemDump::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        AllocatorMemDump::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::AllocatorMemDump_UnserializedMessageContext<
            UserType, AllocatorMemDump::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<AllocatorMemDump::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return AllocatorMemDump::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::AllocatorMemDump_UnserializedMessageContext<
            UserType, AllocatorMemDump::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<AllocatorMemDump::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  WTF::HashMap<WTF::String, uint64_t> numeric_entries;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) ProcessMemoryDump {
 public:
  using DataView = ProcessMemoryDumpDataView;
  using Data_ = internal::ProcessMemoryDump_Data;

  template <typename... Args>
  static ProcessMemoryDumpPtr New(Args&&... args) {
    return ProcessMemoryDumpPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ProcessMemoryDumpPtr From(const U& u) {
    return mojo::TypeConverter<ProcessMemoryDumpPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ProcessMemoryDump>::Convert(*this);
  }


  ProcessMemoryDump();

  ProcessMemoryDump(
      ProcessType process_type,
      OSMemDumpPtr os_dump,
      WTF::HashMap<WTF::String, AllocatorMemDumpPtr> chrome_allocator_dumps,
      ::mojo_base::mojom::blink::ProcessIdPtr pid);

  ~ProcessMemoryDump();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ProcessMemoryDumpPtr>
  ProcessMemoryDumpPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ProcessMemoryDump>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ProcessMemoryDump::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ProcessMemoryDump::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ProcessMemoryDump_UnserializedMessageContext<
            UserType, ProcessMemoryDump::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ProcessMemoryDump::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ProcessMemoryDump::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ProcessMemoryDump_UnserializedMessageContext<
            UserType, ProcessMemoryDump::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ProcessMemoryDump::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  ProcessType process_type;
  OSMemDumpPtr os_dump;
  WTF::HashMap<WTF::String, AllocatorMemDumpPtr> chrome_allocator_dumps;
  ::mojo_base::mojom::blink::ProcessIdPtr pid;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ProcessMemoryDump);
};


class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) GlobalMemoryDump {
 public:
  using DataView = GlobalMemoryDumpDataView;
  using Data_ = internal::GlobalMemoryDump_Data;

  template <typename... Args>
  static GlobalMemoryDumpPtr New(Args&&... args) {
    return GlobalMemoryDumpPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static GlobalMemoryDumpPtr From(const U& u) {
    return mojo::TypeConverter<GlobalMemoryDumpPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, GlobalMemoryDump>::Convert(*this);
  }


  GlobalMemoryDump();

  explicit GlobalMemoryDump(
      WTF::Vector<ProcessMemoryDumpPtr> process_dumps);

  ~GlobalMemoryDump();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = GlobalMemoryDumpPtr>
  GlobalMemoryDumpPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, GlobalMemoryDump>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        GlobalMemoryDump::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        GlobalMemoryDump::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::GlobalMemoryDump_UnserializedMessageContext<
            UserType, GlobalMemoryDump::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<GlobalMemoryDump::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return GlobalMemoryDump::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::GlobalMemoryDump_UnserializedMessageContext<
            UserType, GlobalMemoryDump::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<GlobalMemoryDump::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  WTF::Vector<ProcessMemoryDumpPtr> process_dumps;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(GlobalMemoryDump);
};


class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) SharedBufferWithSize {
 public:
  using DataView = SharedBufferWithSizeDataView;
  using Data_ = internal::SharedBufferWithSize_Data;

  template <typename... Args>
  static SharedBufferWithSizePtr New(Args&&... args) {
    return SharedBufferWithSizePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SharedBufferWithSizePtr From(const U& u) {
    return mojo::TypeConverter<SharedBufferWithSizePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SharedBufferWithSize>::Convert(*this);
  }


  SharedBufferWithSize();

  SharedBufferWithSize(
      mojo::ScopedSharedBufferHandle buffer,
      uint32_t size,
      ::mojo_base::mojom::blink::ProcessIdPtr pid);

  ~SharedBufferWithSize();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SharedBufferWithSizePtr>
  SharedBufferWithSizePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SharedBufferWithSize>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SharedBufferWithSize::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SharedBufferWithSize::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SharedBufferWithSize_UnserializedMessageContext<
            UserType, SharedBufferWithSize::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SharedBufferWithSize::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return SharedBufferWithSize::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SharedBufferWithSize_UnserializedMessageContext<
            UserType, SharedBufferWithSize::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SharedBufferWithSize::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  mojo::ScopedSharedBufferHandle buffer;
  uint32_t size;
  ::mojo_base::mojom::blink::ProcessIdPtr pid;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(SharedBufferWithSize);
};

template <typename UnionPtrType>
RawAllocatorDumpEntryValuePtr RawAllocatorDumpEntryValue::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::VALUE_UINT64:
      rv->set_value_uint64(mojo::Clone(data_.value_uint64));
      break;
    case Tag::VALUE_STRING:
      rv->set_value_string(mojo::Clone(*data_.value_string));
      break;
  };
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RawAllocatorDumpEntryValue>::value>::type*>
bool RawAllocatorDumpEntryValue::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::VALUE_UINT64:
      return mojo::Equals(data_.value_uint64, other.data_.value_uint64);
    case Tag::VALUE_STRING:
      return mojo::Equals(*(data_.value_string), *(other.data_.value_string));
  };

  return false;
}
template <typename StructPtrType>
RequestArgsPtr RequestArgs::Clone() const {
  return New(
      mojo::Clone(dump_guid),
      mojo::Clone(dump_type),
      mojo::Clone(level_of_detail)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RequestArgs>::value>::type*>
bool RequestArgs::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->dump_guid, other_struct.dump_guid))
    return false;
  if (!mojo::Equals(this->dump_type, other_struct.dump_type))
    return false;
  if (!mojo::Equals(this->level_of_detail, other_struct.level_of_detail))
    return false;
  return true;
}
template <typename StructPtrType>
RawAllocatorDumpEdgePtr RawAllocatorDumpEdge::Clone() const {
  return New(
      mojo::Clone(source_id),
      mojo::Clone(target_id),
      mojo::Clone(importance),
      mojo::Clone(overridable)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RawAllocatorDumpEdge>::value>::type*>
bool RawAllocatorDumpEdge::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->source_id, other_struct.source_id))
    return false;
  if (!mojo::Equals(this->target_id, other_struct.target_id))
    return false;
  if (!mojo::Equals(this->importance, other_struct.importance))
    return false;
  if (!mojo::Equals(this->overridable, other_struct.overridable))
    return false;
  return true;
}
template <typename StructPtrType>
RawAllocatorDumpEntryPtr RawAllocatorDumpEntry::Clone() const {
  return New(
      mojo::Clone(name),
      mojo::Clone(units),
      mojo::Clone(value)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RawAllocatorDumpEntry>::value>::type*>
bool RawAllocatorDumpEntry::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->units, other_struct.units))
    return false;
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  return true;
}
template <typename StructPtrType>
RawAllocatorDumpPtr RawAllocatorDump::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(absolute_name),
      mojo::Clone(weak),
      mojo::Clone(level_of_detail),
      mojo::Clone(entries)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RawAllocatorDump>::value>::type*>
bool RawAllocatorDump::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->absolute_name, other_struct.absolute_name))
    return false;
  if (!mojo::Equals(this->weak, other_struct.weak))
    return false;
  if (!mojo::Equals(this->level_of_detail, other_struct.level_of_detail))
    return false;
  if (!mojo::Equals(this->entries, other_struct.entries))
    return false;
  return true;
}
template <typename StructPtrType>
RawProcessMemoryDumpPtr RawProcessMemoryDump::Clone() const {
  return New(
      mojo::Clone(level_of_detail),
      mojo::Clone(allocator_dump_edges),
      mojo::Clone(allocator_dumps)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RawProcessMemoryDump>::value>::type*>
bool RawProcessMemoryDump::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->level_of_detail, other_struct.level_of_detail))
    return false;
  if (!mojo::Equals(this->allocator_dump_edges, other_struct.allocator_dump_edges))
    return false;
  if (!mojo::Equals(this->allocator_dumps, other_struct.allocator_dumps))
    return false;
  return true;
}
template <typename StructPtrType>
VmRegionPtr VmRegion::Clone() const {
  return New(
      mojo::Clone(start_address),
      mojo::Clone(size_in_bytes),
      mojo::Clone(module_timestamp),
      mojo::Clone(module_debugid),
      mojo::Clone(module_debug_path),
      mojo::Clone(protection_flags),
      mojo::Clone(mapped_file),
      mojo::Clone(byte_stats_private_dirty_resident),
      mojo::Clone(byte_stats_private_clean_resident),
      mojo::Clone(byte_stats_shared_dirty_resident),
      mojo::Clone(byte_stats_shared_clean_resident),
      mojo::Clone(byte_stats_swapped),
      mojo::Clone(byte_stats_proportional_resident)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VmRegion>::value>::type*>
bool VmRegion::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->start_address, other_struct.start_address))
    return false;
  if (!mojo::Equals(this->size_in_bytes, other_struct.size_in_bytes))
    return false;
  if (!mojo::Equals(this->module_timestamp, other_struct.module_timestamp))
    return false;
  if (!mojo::Equals(this->module_debugid, other_struct.module_debugid))
    return false;
  if (!mojo::Equals(this->module_debug_path, other_struct.module_debug_path))
    return false;
  if (!mojo::Equals(this->protection_flags, other_struct.protection_flags))
    return false;
  if (!mojo::Equals(this->mapped_file, other_struct.mapped_file))
    return false;
  if (!mojo::Equals(this->byte_stats_private_dirty_resident, other_struct.byte_stats_private_dirty_resident))
    return false;
  if (!mojo::Equals(this->byte_stats_private_clean_resident, other_struct.byte_stats_private_clean_resident))
    return false;
  if (!mojo::Equals(this->byte_stats_shared_dirty_resident, other_struct.byte_stats_shared_dirty_resident))
    return false;
  if (!mojo::Equals(this->byte_stats_shared_clean_resident, other_struct.byte_stats_shared_clean_resident))
    return false;
  if (!mojo::Equals(this->byte_stats_swapped, other_struct.byte_stats_swapped))
    return false;
  if (!mojo::Equals(this->byte_stats_proportional_resident, other_struct.byte_stats_proportional_resident))
    return false;
  return true;
}
template <typename StructPtrType>
PlatformPrivateFootprintPtr PlatformPrivateFootprint::Clone() const {
  return New(
      mojo::Clone(phys_footprint_bytes),
      mojo::Clone(internal_bytes),
      mojo::Clone(compressed_bytes),
      mojo::Clone(rss_anon_bytes),
      mojo::Clone(vm_swap_bytes),
      mojo::Clone(private_bytes)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PlatformPrivateFootprint>::value>::type*>
bool PlatformPrivateFootprint::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->phys_footprint_bytes, other_struct.phys_footprint_bytes))
    return false;
  if (!mojo::Equals(this->internal_bytes, other_struct.internal_bytes))
    return false;
  if (!mojo::Equals(this->compressed_bytes, other_struct.compressed_bytes))
    return false;
  if (!mojo::Equals(this->rss_anon_bytes, other_struct.rss_anon_bytes))
    return false;
  if (!mojo::Equals(this->vm_swap_bytes, other_struct.vm_swap_bytes))
    return false;
  if (!mojo::Equals(this->private_bytes, other_struct.private_bytes))
    return false;
  return true;
}
template <typename StructPtrType>
RawOSMemDumpPtr RawOSMemDump::Clone() const {
  return New(
      mojo::Clone(resident_set_kb),
      mojo::Clone(platform_private_footprint),
      mojo::Clone(memory_maps)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RawOSMemDump>::value>::type*>
bool RawOSMemDump::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->resident_set_kb, other_struct.resident_set_kb))
    return false;
  if (!mojo::Equals(this->platform_private_footprint, other_struct.platform_private_footprint))
    return false;
  if (!mojo::Equals(this->memory_maps, other_struct.memory_maps))
    return false;
  return true;
}
template <typename StructPtrType>
OSMemDumpPtr OSMemDump::Clone() const {
  return New(
      mojo::Clone(resident_set_kb),
      mojo::Clone(private_footprint_kb),
      mojo::Clone(shared_footprint_kb),
      mojo::Clone(private_footprint_swap_kb)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, OSMemDump>::value>::type*>
bool OSMemDump::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->resident_set_kb, other_struct.resident_set_kb))
    return false;
  if (!mojo::Equals(this->private_footprint_kb, other_struct.private_footprint_kb))
    return false;
  if (!mojo::Equals(this->shared_footprint_kb, other_struct.shared_footprint_kb))
    return false;
  if (!mojo::Equals(this->private_footprint_swap_kb, other_struct.private_footprint_swap_kb))
    return false;
  return true;
}
template <typename StructPtrType>
AllocatorMemDumpPtr AllocatorMemDump::Clone() const {
  return New(
      mojo::Clone(numeric_entries)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AllocatorMemDump>::value>::type*>
bool AllocatorMemDump::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->numeric_entries, other_struct.numeric_entries))
    return false;
  return true;
}
template <typename StructPtrType>
ProcessMemoryDumpPtr ProcessMemoryDump::Clone() const {
  return New(
      mojo::Clone(process_type),
      mojo::Clone(os_dump),
      mojo::Clone(chrome_allocator_dumps),
      mojo::Clone(pid)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ProcessMemoryDump>::value>::type*>
bool ProcessMemoryDump::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->process_type, other_struct.process_type))
    return false;
  if (!mojo::Equals(this->os_dump, other_struct.os_dump))
    return false;
  if (!mojo::Equals(this->chrome_allocator_dumps, other_struct.chrome_allocator_dumps))
    return false;
  if (!mojo::Equals(this->pid, other_struct.pid))
    return false;
  return true;
}
template <typename StructPtrType>
GlobalMemoryDumpPtr GlobalMemoryDump::Clone() const {
  return New(
      mojo::Clone(process_dumps)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, GlobalMemoryDump>::value>::type*>
bool GlobalMemoryDump::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->process_dumps, other_struct.process_dumps))
    return false;
  return true;
}
template <typename StructPtrType>
SharedBufferWithSizePtr SharedBufferWithSize::Clone() const {
  return New(
      mojo::Clone(buffer),
      mojo::Clone(size),
      mojo::Clone(pid)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SharedBufferWithSize>::value>::type*>
bool SharedBufferWithSize::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->buffer, other_struct.buffer))
    return false;
  if (!mojo::Equals(this->size, other_struct.size))
    return false;
  if (!mojo::Equals(this->pid, other_struct.pid))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace memory_instrumentation

namespace mojo {


template <>
struct COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) StructTraits<::memory_instrumentation::mojom::blink::RequestArgs::DataView,
                                         ::memory_instrumentation::mojom::blink::RequestArgsPtr> {
  static bool IsNull(const ::memory_instrumentation::mojom::blink::RequestArgsPtr& input) { return !input; }
  static void SetToNull(::memory_instrumentation::mojom::blink::RequestArgsPtr* output) { output->reset(); }

  static decltype(::memory_instrumentation::mojom::blink::RequestArgs::dump_guid) dump_guid(
      const ::memory_instrumentation::mojom::blink::RequestArgsPtr& input) {
    return input->dump_guid;
  }

  static decltype(::memory_instrumentation::mojom::blink::RequestArgs::dump_type) dump_type(
      const ::memory_instrumentation::mojom::blink::RequestArgsPtr& input) {
    return input->dump_type;
  }

  static decltype(::memory_instrumentation::mojom::blink::RequestArgs::level_of_detail) level_of_detail(
      const ::memory_instrumentation::mojom::blink::RequestArgsPtr& input) {
    return input->level_of_detail;
  }

  static bool Read(::memory_instrumentation::mojom::blink::RequestArgs::DataView input, ::memory_instrumentation::mojom::blink::RequestArgsPtr* output);
};


template <>
struct COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) StructTraits<::memory_instrumentation::mojom::blink::RawAllocatorDumpEdge::DataView,
                                         ::memory_instrumentation::mojom::blink::RawAllocatorDumpEdgePtr> {
  static bool IsNull(const ::memory_instrumentation::mojom::blink::RawAllocatorDumpEdgePtr& input) { return !input; }
  static void SetToNull(::memory_instrumentation::mojom::blink::RawAllocatorDumpEdgePtr* output) { output->reset(); }

  static decltype(::memory_instrumentation::mojom::blink::RawAllocatorDumpEdge::source_id) source_id(
      const ::memory_instrumentation::mojom::blink::RawAllocatorDumpEdgePtr& input) {
    return input->source_id;
  }

  static decltype(::memory_instrumentation::mojom::blink::RawAllocatorDumpEdge::target_id) target_id(
      const ::memory_instrumentation::mojom::blink::RawAllocatorDumpEdgePtr& input) {
    return input->target_id;
  }

  static decltype(::memory_instrumentation::mojom::blink::RawAllocatorDumpEdge::importance) importance(
      const ::memory_instrumentation::mojom::blink::RawAllocatorDumpEdgePtr& input) {
    return input->importance;
  }

  static decltype(::memory_instrumentation::mojom::blink::RawAllocatorDumpEdge::overridable) overridable(
      const ::memory_instrumentation::mojom::blink::RawAllocatorDumpEdgePtr& input) {
    return input->overridable;
  }

  static bool Read(::memory_instrumentation::mojom::blink::RawAllocatorDumpEdge::DataView input, ::memory_instrumentation::mojom::blink::RawAllocatorDumpEdgePtr* output);
};


template <>
struct COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) StructTraits<::memory_instrumentation::mojom::blink::RawAllocatorDumpEntry::DataView,
                                         ::memory_instrumentation::mojom::blink::RawAllocatorDumpEntryPtr> {
  static bool IsNull(const ::memory_instrumentation::mojom::blink::RawAllocatorDumpEntryPtr& input) { return !input; }
  static void SetToNull(::memory_instrumentation::mojom::blink::RawAllocatorDumpEntryPtr* output) { output->reset(); }

  static const decltype(::memory_instrumentation::mojom::blink::RawAllocatorDumpEntry::name)& name(
      const ::memory_instrumentation::mojom::blink::RawAllocatorDumpEntryPtr& input) {
    return input->name;
  }

  static const decltype(::memory_instrumentation::mojom::blink::RawAllocatorDumpEntry::units)& units(
      const ::memory_instrumentation::mojom::blink::RawAllocatorDumpEntryPtr& input) {
    return input->units;
  }

  static const decltype(::memory_instrumentation::mojom::blink::RawAllocatorDumpEntry::value)& value(
      const ::memory_instrumentation::mojom::blink::RawAllocatorDumpEntryPtr& input) {
    return input->value;
  }

  static bool Read(::memory_instrumentation::mojom::blink::RawAllocatorDumpEntry::DataView input, ::memory_instrumentation::mojom::blink::RawAllocatorDumpEntryPtr* output);
};


template <>
struct COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) StructTraits<::memory_instrumentation::mojom::blink::RawAllocatorDump::DataView,
                                         ::memory_instrumentation::mojom::blink::RawAllocatorDumpPtr> {
  static bool IsNull(const ::memory_instrumentation::mojom::blink::RawAllocatorDumpPtr& input) { return !input; }
  static void SetToNull(::memory_instrumentation::mojom::blink::RawAllocatorDumpPtr* output) { output->reset(); }

  static decltype(::memory_instrumentation::mojom::blink::RawAllocatorDump::id) id(
      const ::memory_instrumentation::mojom::blink::RawAllocatorDumpPtr& input) {
    return input->id;
  }

  static const decltype(::memory_instrumentation::mojom::blink::RawAllocatorDump::absolute_name)& absolute_name(
      const ::memory_instrumentation::mojom::blink::RawAllocatorDumpPtr& input) {
    return input->absolute_name;
  }

  static decltype(::memory_instrumentation::mojom::blink::RawAllocatorDump::weak) weak(
      const ::memory_instrumentation::mojom::blink::RawAllocatorDumpPtr& input) {
    return input->weak;
  }

  static decltype(::memory_instrumentation::mojom::blink::RawAllocatorDump::level_of_detail) level_of_detail(
      const ::memory_instrumentation::mojom::blink::RawAllocatorDumpPtr& input) {
    return input->level_of_detail;
  }

  static const decltype(::memory_instrumentation::mojom::blink::RawAllocatorDump::entries)& entries(
      const ::memory_instrumentation::mojom::blink::RawAllocatorDumpPtr& input) {
    return input->entries;
  }

  static bool Read(::memory_instrumentation::mojom::blink::RawAllocatorDump::DataView input, ::memory_instrumentation::mojom::blink::RawAllocatorDumpPtr* output);
};


template <>
struct COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) StructTraits<::memory_instrumentation::mojom::blink::RawProcessMemoryDump::DataView,
                                         ::memory_instrumentation::mojom::blink::RawProcessMemoryDumpPtr> {
  static bool IsNull(const ::memory_instrumentation::mojom::blink::RawProcessMemoryDumpPtr& input) { return !input; }
  static void SetToNull(::memory_instrumentation::mojom::blink::RawProcessMemoryDumpPtr* output) { output->reset(); }

  static decltype(::memory_instrumentation::mojom::blink::RawProcessMemoryDump::level_of_detail) level_of_detail(
      const ::memory_instrumentation::mojom::blink::RawProcessMemoryDumpPtr& input) {
    return input->level_of_detail;
  }

  static const decltype(::memory_instrumentation::mojom::blink::RawProcessMemoryDump::allocator_dump_edges)& allocator_dump_edges(
      const ::memory_instrumentation::mojom::blink::RawProcessMemoryDumpPtr& input) {
    return input->allocator_dump_edges;
  }

  static const decltype(::memory_instrumentation::mojom::blink::RawProcessMemoryDump::allocator_dumps)& allocator_dumps(
      const ::memory_instrumentation::mojom::blink::RawProcessMemoryDumpPtr& input) {
    return input->allocator_dumps;
  }

  static bool Read(::memory_instrumentation::mojom::blink::RawProcessMemoryDump::DataView input, ::memory_instrumentation::mojom::blink::RawProcessMemoryDumpPtr* output);
};


template <>
struct COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) StructTraits<::memory_instrumentation::mojom::blink::VmRegion::DataView,
                                         ::memory_instrumentation::mojom::blink::VmRegionPtr> {
  static bool IsNull(const ::memory_instrumentation::mojom::blink::VmRegionPtr& input) { return !input; }
  static void SetToNull(::memory_instrumentation::mojom::blink::VmRegionPtr* output) { output->reset(); }

  static decltype(::memory_instrumentation::mojom::blink::VmRegion::start_address) start_address(
      const ::memory_instrumentation::mojom::blink::VmRegionPtr& input) {
    return input->start_address;
  }

  static decltype(::memory_instrumentation::mojom::blink::VmRegion::size_in_bytes) size_in_bytes(
      const ::memory_instrumentation::mojom::blink::VmRegionPtr& input) {
    return input->size_in_bytes;
  }

  static decltype(::memory_instrumentation::mojom::blink::VmRegion::module_timestamp) module_timestamp(
      const ::memory_instrumentation::mojom::blink::VmRegionPtr& input) {
    return input->module_timestamp;
  }

  static const decltype(::memory_instrumentation::mojom::blink::VmRegion::module_debugid)& module_debugid(
      const ::memory_instrumentation::mojom::blink::VmRegionPtr& input) {
    return input->module_debugid;
  }

  static const decltype(::memory_instrumentation::mojom::blink::VmRegion::module_debug_path)& module_debug_path(
      const ::memory_instrumentation::mojom::blink::VmRegionPtr& input) {
    return input->module_debug_path;
  }

  static decltype(::memory_instrumentation::mojom::blink::VmRegion::protection_flags) protection_flags(
      const ::memory_instrumentation::mojom::blink::VmRegionPtr& input) {
    return input->protection_flags;
  }

  static const decltype(::memory_instrumentation::mojom::blink::VmRegion::mapped_file)& mapped_file(
      const ::memory_instrumentation::mojom::blink::VmRegionPtr& input) {
    return input->mapped_file;
  }

  static decltype(::memory_instrumentation::mojom::blink::VmRegion::byte_stats_private_dirty_resident) byte_stats_private_dirty_resident(
      const ::memory_instrumentation::mojom::blink::VmRegionPtr& input) {
    return input->byte_stats_private_dirty_resident;
  }

  static decltype(::memory_instrumentation::mojom::blink::VmRegion::byte_stats_private_clean_resident) byte_stats_private_clean_resident(
      const ::memory_instrumentation::mojom::blink::VmRegionPtr& input) {
    return input->byte_stats_private_clean_resident;
  }

  static decltype(::memory_instrumentation::mojom::blink::VmRegion::byte_stats_shared_dirty_resident) byte_stats_shared_dirty_resident(
      const ::memory_instrumentation::mojom::blink::VmRegionPtr& input) {
    return input->byte_stats_shared_dirty_resident;
  }

  static decltype(::memory_instrumentation::mojom::blink::VmRegion::byte_stats_shared_clean_resident) byte_stats_shared_clean_resident(
      const ::memory_instrumentation::mojom::blink::VmRegionPtr& input) {
    return input->byte_stats_shared_clean_resident;
  }

  static decltype(::memory_instrumentation::mojom::blink::VmRegion::byte_stats_swapped) byte_stats_swapped(
      const ::memory_instrumentation::mojom::blink::VmRegionPtr& input) {
    return input->byte_stats_swapped;
  }

  static decltype(::memory_instrumentation::mojom::blink::VmRegion::byte_stats_proportional_resident) byte_stats_proportional_resident(
      const ::memory_instrumentation::mojom::blink::VmRegionPtr& input) {
    return input->byte_stats_proportional_resident;
  }

  static bool Read(::memory_instrumentation::mojom::blink::VmRegion::DataView input, ::memory_instrumentation::mojom::blink::VmRegionPtr* output);
};


template <>
struct COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) StructTraits<::memory_instrumentation::mojom::blink::PlatformPrivateFootprint::DataView,
                                         ::memory_instrumentation::mojom::blink::PlatformPrivateFootprintPtr> {
  static bool IsNull(const ::memory_instrumentation::mojom::blink::PlatformPrivateFootprintPtr& input) { return !input; }
  static void SetToNull(::memory_instrumentation::mojom::blink::PlatformPrivateFootprintPtr* output) { output->reset(); }

  static decltype(::memory_instrumentation::mojom::blink::PlatformPrivateFootprint::phys_footprint_bytes) phys_footprint_bytes(
      const ::memory_instrumentation::mojom::blink::PlatformPrivateFootprintPtr& input) {
    return input->phys_footprint_bytes;
  }

  static decltype(::memory_instrumentation::mojom::blink::PlatformPrivateFootprint::internal_bytes) internal_bytes(
      const ::memory_instrumentation::mojom::blink::PlatformPrivateFootprintPtr& input) {
    return input->internal_bytes;
  }

  static decltype(::memory_instrumentation::mojom::blink::PlatformPrivateFootprint::compressed_bytes) compressed_bytes(
      const ::memory_instrumentation::mojom::blink::PlatformPrivateFootprintPtr& input) {
    return input->compressed_bytes;
  }

  static decltype(::memory_instrumentation::mojom::blink::PlatformPrivateFootprint::rss_anon_bytes) rss_anon_bytes(
      const ::memory_instrumentation::mojom::blink::PlatformPrivateFootprintPtr& input) {
    return input->rss_anon_bytes;
  }

  static decltype(::memory_instrumentation::mojom::blink::PlatformPrivateFootprint::vm_swap_bytes) vm_swap_bytes(
      const ::memory_instrumentation::mojom::blink::PlatformPrivateFootprintPtr& input) {
    return input->vm_swap_bytes;
  }

  static decltype(::memory_instrumentation::mojom::blink::PlatformPrivateFootprint::private_bytes) private_bytes(
      const ::memory_instrumentation::mojom::blink::PlatformPrivateFootprintPtr& input) {
    return input->private_bytes;
  }

  static bool Read(::memory_instrumentation::mojom::blink::PlatformPrivateFootprint::DataView input, ::memory_instrumentation::mojom::blink::PlatformPrivateFootprintPtr* output);
};


template <>
struct COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) StructTraits<::memory_instrumentation::mojom::blink::RawOSMemDump::DataView,
                                         ::memory_instrumentation::mojom::blink::RawOSMemDumpPtr> {
  static bool IsNull(const ::memory_instrumentation::mojom::blink::RawOSMemDumpPtr& input) { return !input; }
  static void SetToNull(::memory_instrumentation::mojom::blink::RawOSMemDumpPtr* output) { output->reset(); }

  static decltype(::memory_instrumentation::mojom::blink::RawOSMemDump::resident_set_kb) resident_set_kb(
      const ::memory_instrumentation::mojom::blink::RawOSMemDumpPtr& input) {
    return input->resident_set_kb;
  }

  static const decltype(::memory_instrumentation::mojom::blink::RawOSMemDump::platform_private_footprint)& platform_private_footprint(
      const ::memory_instrumentation::mojom::blink::RawOSMemDumpPtr& input) {
    return input->platform_private_footprint;
  }

  static const decltype(::memory_instrumentation::mojom::blink::RawOSMemDump::memory_maps)& memory_maps(
      const ::memory_instrumentation::mojom::blink::RawOSMemDumpPtr& input) {
    return input->memory_maps;
  }

  static bool Read(::memory_instrumentation::mojom::blink::RawOSMemDump::DataView input, ::memory_instrumentation::mojom::blink::RawOSMemDumpPtr* output);
};


template <>
struct COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) StructTraits<::memory_instrumentation::mojom::blink::OSMemDump::DataView,
                                         ::memory_instrumentation::mojom::blink::OSMemDumpPtr> {
  static bool IsNull(const ::memory_instrumentation::mojom::blink::OSMemDumpPtr& input) { return !input; }
  static void SetToNull(::memory_instrumentation::mojom::blink::OSMemDumpPtr* output) { output->reset(); }

  static decltype(::memory_instrumentation::mojom::blink::OSMemDump::resident_set_kb) resident_set_kb(
      const ::memory_instrumentation::mojom::blink::OSMemDumpPtr& input) {
    return input->resident_set_kb;
  }

  static decltype(::memory_instrumentation::mojom::blink::OSMemDump::private_footprint_kb) private_footprint_kb(
      const ::memory_instrumentation::mojom::blink::OSMemDumpPtr& input) {
    return input->private_footprint_kb;
  }

  static decltype(::memory_instrumentation::mojom::blink::OSMemDump::shared_footprint_kb) shared_footprint_kb(
      const ::memory_instrumentation::mojom::blink::OSMemDumpPtr& input) {
    return input->shared_footprint_kb;
  }

  static decltype(::memory_instrumentation::mojom::blink::OSMemDump::private_footprint_swap_kb) private_footprint_swap_kb(
      const ::memory_instrumentation::mojom::blink::OSMemDumpPtr& input) {
    return input->private_footprint_swap_kb;
  }

  static bool Read(::memory_instrumentation::mojom::blink::OSMemDump::DataView input, ::memory_instrumentation::mojom::blink::OSMemDumpPtr* output);
};


template <>
struct COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) StructTraits<::memory_instrumentation::mojom::blink::AllocatorMemDump::DataView,
                                         ::memory_instrumentation::mojom::blink::AllocatorMemDumpPtr> {
  static bool IsNull(const ::memory_instrumentation::mojom::blink::AllocatorMemDumpPtr& input) { return !input; }
  static void SetToNull(::memory_instrumentation::mojom::blink::AllocatorMemDumpPtr* output) { output->reset(); }

  static const decltype(::memory_instrumentation::mojom::blink::AllocatorMemDump::numeric_entries)& numeric_entries(
      const ::memory_instrumentation::mojom::blink::AllocatorMemDumpPtr& input) {
    return input->numeric_entries;
  }

  static bool Read(::memory_instrumentation::mojom::blink::AllocatorMemDump::DataView input, ::memory_instrumentation::mojom::blink::AllocatorMemDumpPtr* output);
};


template <>
struct COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) StructTraits<::memory_instrumentation::mojom::blink::ProcessMemoryDump::DataView,
                                         ::memory_instrumentation::mojom::blink::ProcessMemoryDumpPtr> {
  static bool IsNull(const ::memory_instrumentation::mojom::blink::ProcessMemoryDumpPtr& input) { return !input; }
  static void SetToNull(::memory_instrumentation::mojom::blink::ProcessMemoryDumpPtr* output) { output->reset(); }

  static decltype(::memory_instrumentation::mojom::blink::ProcessMemoryDump::process_type) process_type(
      const ::memory_instrumentation::mojom::blink::ProcessMemoryDumpPtr& input) {
    return input->process_type;
  }

  static const decltype(::memory_instrumentation::mojom::blink::ProcessMemoryDump::os_dump)& os_dump(
      const ::memory_instrumentation::mojom::blink::ProcessMemoryDumpPtr& input) {
    return input->os_dump;
  }

  static const decltype(::memory_instrumentation::mojom::blink::ProcessMemoryDump::chrome_allocator_dumps)& chrome_allocator_dumps(
      const ::memory_instrumentation::mojom::blink::ProcessMemoryDumpPtr& input) {
    return input->chrome_allocator_dumps;
  }

  static const decltype(::memory_instrumentation::mojom::blink::ProcessMemoryDump::pid)& pid(
      const ::memory_instrumentation::mojom::blink::ProcessMemoryDumpPtr& input) {
    return input->pid;
  }

  static bool Read(::memory_instrumentation::mojom::blink::ProcessMemoryDump::DataView input, ::memory_instrumentation::mojom::blink::ProcessMemoryDumpPtr* output);
};


template <>
struct COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) StructTraits<::memory_instrumentation::mojom::blink::GlobalMemoryDump::DataView,
                                         ::memory_instrumentation::mojom::blink::GlobalMemoryDumpPtr> {
  static bool IsNull(const ::memory_instrumentation::mojom::blink::GlobalMemoryDumpPtr& input) { return !input; }
  static void SetToNull(::memory_instrumentation::mojom::blink::GlobalMemoryDumpPtr* output) { output->reset(); }

  static const decltype(::memory_instrumentation::mojom::blink::GlobalMemoryDump::process_dumps)& process_dumps(
      const ::memory_instrumentation::mojom::blink::GlobalMemoryDumpPtr& input) {
    return input->process_dumps;
  }

  static bool Read(::memory_instrumentation::mojom::blink::GlobalMemoryDump::DataView input, ::memory_instrumentation::mojom::blink::GlobalMemoryDumpPtr* output);
};


template <>
struct COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) StructTraits<::memory_instrumentation::mojom::blink::SharedBufferWithSize::DataView,
                                         ::memory_instrumentation::mojom::blink::SharedBufferWithSizePtr> {
  static bool IsNull(const ::memory_instrumentation::mojom::blink::SharedBufferWithSizePtr& input) { return !input; }
  static void SetToNull(::memory_instrumentation::mojom::blink::SharedBufferWithSizePtr* output) { output->reset(); }

  static  decltype(::memory_instrumentation::mojom::blink::SharedBufferWithSize::buffer)& buffer(
       ::memory_instrumentation::mojom::blink::SharedBufferWithSizePtr& input) {
    return input->buffer;
  }

  static decltype(::memory_instrumentation::mojom::blink::SharedBufferWithSize::size) size(
      const ::memory_instrumentation::mojom::blink::SharedBufferWithSizePtr& input) {
    return input->size;
  }

  static const decltype(::memory_instrumentation::mojom::blink::SharedBufferWithSize::pid)& pid(
      const ::memory_instrumentation::mojom::blink::SharedBufferWithSizePtr& input) {
    return input->pid;
  }

  static bool Read(::memory_instrumentation::mojom::blink::SharedBufferWithSize::DataView input, ::memory_instrumentation::mojom::blink::SharedBufferWithSizePtr* output);
};


template <>
struct COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) UnionTraits<::memory_instrumentation::mojom::blink::RawAllocatorDumpEntryValue::DataView,
                                        ::memory_instrumentation::mojom::blink::RawAllocatorDumpEntryValuePtr> {
  static bool IsNull(const ::memory_instrumentation::mojom::blink::RawAllocatorDumpEntryValuePtr& input) { return !input; }
  static void SetToNull(::memory_instrumentation::mojom::blink::RawAllocatorDumpEntryValuePtr* output) { output->reset(); }

  static ::memory_instrumentation::mojom::blink::RawAllocatorDumpEntryValue::Tag GetTag(const ::memory_instrumentation::mojom::blink::RawAllocatorDumpEntryValuePtr& input) {
    return input->which();
  }

  static  uint64_t value_uint64(const ::memory_instrumentation::mojom::blink::RawAllocatorDumpEntryValuePtr& input) {
    return input->get_value_uint64();
  }

  static const WTF::String& value_string(const ::memory_instrumentation::mojom::blink::RawAllocatorDumpEntryValuePtr& input) {
    return input->get_value_string();
  }

  static bool Read(::memory_instrumentation::mojom::blink::RawAllocatorDumpEntryValue::DataView input, ::memory_instrumentation::mojom::blink::RawAllocatorDumpEntryValuePtr* output);
};

}  // namespace mojo

#endif  // SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_BLINK_H_