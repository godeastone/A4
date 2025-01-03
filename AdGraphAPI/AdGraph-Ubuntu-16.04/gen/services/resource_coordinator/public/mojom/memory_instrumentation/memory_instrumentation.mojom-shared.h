// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_SHARED_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "services/resource_coordinator/public/mojom/memory_instrumentation/memory_instrumentation.mojom-shared-internal.h"
#include "mojo/public/mojom/base/process_id.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace memory_instrumentation {
namespace mojom {
class RequestArgsDataView;

class RawAllocatorDumpEdgeDataView;

class RawAllocatorDumpEntryDataView;

class RawAllocatorDumpDataView;

class RawProcessMemoryDumpDataView;

class VmRegionDataView;

class PlatformPrivateFootprintDataView;

class RawOSMemDumpDataView;

class OSMemDumpDataView;

class AllocatorMemDumpDataView;

class ProcessMemoryDumpDataView;

class GlobalMemoryDumpDataView;

class SharedBufferWithSizeDataView;

class RawAllocatorDumpEntryValueDataView;


}  // namespace mojom
}  // namespace memory_instrumentation

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::memory_instrumentation::mojom::RequestArgsDataView> {
  using Data = ::memory_instrumentation::mojom::internal::RequestArgs_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::memory_instrumentation::mojom::RawAllocatorDumpEdgeDataView> {
  using Data = ::memory_instrumentation::mojom::internal::RawAllocatorDumpEdge_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::memory_instrumentation::mojom::RawAllocatorDumpEntryDataView> {
  using Data = ::memory_instrumentation::mojom::internal::RawAllocatorDumpEntry_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::memory_instrumentation::mojom::RawAllocatorDumpDataView> {
  using Data = ::memory_instrumentation::mojom::internal::RawAllocatorDump_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::memory_instrumentation::mojom::RawProcessMemoryDumpDataView> {
  using Data = ::memory_instrumentation::mojom::internal::RawProcessMemoryDump_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::memory_instrumentation::mojom::VmRegionDataView> {
  using Data = ::memory_instrumentation::mojom::internal::VmRegion_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::memory_instrumentation::mojom::PlatformPrivateFootprintDataView> {
  using Data = ::memory_instrumentation::mojom::internal::PlatformPrivateFootprint_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::memory_instrumentation::mojom::RawOSMemDumpDataView> {
  using Data = ::memory_instrumentation::mojom::internal::RawOSMemDump_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::memory_instrumentation::mojom::OSMemDumpDataView> {
  using Data = ::memory_instrumentation::mojom::internal::OSMemDump_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::memory_instrumentation::mojom::AllocatorMemDumpDataView> {
  using Data = ::memory_instrumentation::mojom::internal::AllocatorMemDump_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::memory_instrumentation::mojom::ProcessMemoryDumpDataView> {
  using Data = ::memory_instrumentation::mojom::internal::ProcessMemoryDump_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::memory_instrumentation::mojom::GlobalMemoryDumpDataView> {
  using Data = ::memory_instrumentation::mojom::internal::GlobalMemoryDump_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::memory_instrumentation::mojom::SharedBufferWithSizeDataView> {
  using Data = ::memory_instrumentation::mojom::internal::SharedBufferWithSize_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::memory_instrumentation::mojom::RawAllocatorDumpEntryValueDataView> {
  using Data = ::memory_instrumentation::mojom::internal::RawAllocatorDumpEntryValue_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

}  // namespace internal
}  // namespace mojo


namespace memory_instrumentation {
namespace mojom {

enum class DumpType : int32_t {
  PERIODIC_INTERVAL,
  EXPLICITLY_TRIGGERED,
  PEAK_MEMORY_USAGE,
  SUMMARY_ONLY,
  kMinValue = 0,
  kMaxValue = 3,
};

inline std::ostream& operator<<(std::ostream& os, DumpType value) {
  switch(value) {
    case DumpType::PERIODIC_INTERVAL:
      return os << "DumpType::PERIODIC_INTERVAL";
    case DumpType::EXPLICITLY_TRIGGERED:
      return os << "DumpType::EXPLICITLY_TRIGGERED";
    case DumpType::PEAK_MEMORY_USAGE:
      return os << "DumpType::PEAK_MEMORY_USAGE";
    case DumpType::SUMMARY_ONLY:
      return os << "DumpType::SUMMARY_ONLY";
    default:
      return os << "Unknown DumpType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(DumpType value) {
  return internal::DumpType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class LevelOfDetail : int32_t {
  BACKGROUND,
  LIGHT,
  DETAILED,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, LevelOfDetail value) {
  switch(value) {
    case LevelOfDetail::BACKGROUND:
      return os << "LevelOfDetail::BACKGROUND";
    case LevelOfDetail::LIGHT:
      return os << "LevelOfDetail::LIGHT";
    case LevelOfDetail::DETAILED:
      return os << "LevelOfDetail::DETAILED";
    default:
      return os << "Unknown LevelOfDetail value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(LevelOfDetail value) {
  return internal::LevelOfDetail_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class ProcessType : int32_t {
  OTHER,
  BROWSER,
  RENDERER,
  GPU,
  UTILITY,
  PLUGIN,
  kMinValue = 0,
  kMaxValue = 5,
};

inline std::ostream& operator<<(std::ostream& os, ProcessType value) {
  switch(value) {
    case ProcessType::OTHER:
      return os << "ProcessType::OTHER";
    case ProcessType::BROWSER:
      return os << "ProcessType::BROWSER";
    case ProcessType::RENDERER:
      return os << "ProcessType::RENDERER";
    case ProcessType::GPU:
      return os << "ProcessType::GPU";
    case ProcessType::UTILITY:
      return os << "ProcessType::UTILITY";
    case ProcessType::PLUGIN:
      return os << "ProcessType::PLUGIN";
    default:
      return os << "Unknown ProcessType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(ProcessType value) {
  return internal::ProcessType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class HeapProfilingMode : int32_t {
  DISABLED,
  TASK_PROFILER,
  BACKGROUND,
  PSEUDO_STACK,
  NATIVE_STACK,
  kMinValue = 0,
  kMaxValue = 4,
};

inline std::ostream& operator<<(std::ostream& os, HeapProfilingMode value) {
  switch(value) {
    case HeapProfilingMode::DISABLED:
      return os << "HeapProfilingMode::DISABLED";
    case HeapProfilingMode::TASK_PROFILER:
      return os << "HeapProfilingMode::TASK_PROFILER";
    case HeapProfilingMode::BACKGROUND:
      return os << "HeapProfilingMode::BACKGROUND";
    case HeapProfilingMode::PSEUDO_STACK:
      return os << "HeapProfilingMode::PSEUDO_STACK";
    case HeapProfilingMode::NATIVE_STACK:
      return os << "HeapProfilingMode::NATIVE_STACK";
    default:
      return os << "Unknown HeapProfilingMode value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(HeapProfilingMode value) {
  return internal::HeapProfilingMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class MemoryMapOption : int32_t {
  NONE,
  MODULES,
  FULL,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, MemoryMapOption value) {
  switch(value) {
    case MemoryMapOption::NONE:
      return os << "MemoryMapOption::NONE";
    case MemoryMapOption::MODULES:
      return os << "MemoryMapOption::MODULES";
    case MemoryMapOption::FULL:
      return os << "MemoryMapOption::FULL";
    default:
      return os << "Unknown MemoryMapOption value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(MemoryMapOption value) {
  return internal::MemoryMapOption_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class ClientProcessInterfaceBase {};

using ClientProcessPtrDataView =
    mojo::InterfacePtrDataView<ClientProcessInterfaceBase>;
using ClientProcessRequestDataView =
    mojo::InterfaceRequestDataView<ClientProcessInterfaceBase>;
using ClientProcessAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ClientProcessInterfaceBase>;
using ClientProcessAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ClientProcessInterfaceBase>;
class HeapProfilerInterfaceBase {};

using HeapProfilerPtrDataView =
    mojo::InterfacePtrDataView<HeapProfilerInterfaceBase>;
using HeapProfilerRequestDataView =
    mojo::InterfaceRequestDataView<HeapProfilerInterfaceBase>;
using HeapProfilerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<HeapProfilerInterfaceBase>;
using HeapProfilerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<HeapProfilerInterfaceBase>;
class HeapProfilerHelperInterfaceBase {};

using HeapProfilerHelperPtrDataView =
    mojo::InterfacePtrDataView<HeapProfilerHelperInterfaceBase>;
using HeapProfilerHelperRequestDataView =
    mojo::InterfaceRequestDataView<HeapProfilerHelperInterfaceBase>;
using HeapProfilerHelperAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<HeapProfilerHelperInterfaceBase>;
using HeapProfilerHelperAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<HeapProfilerHelperInterfaceBase>;
class CoordinatorInterfaceBase {};

using CoordinatorPtrDataView =
    mojo::InterfacePtrDataView<CoordinatorInterfaceBase>;
using CoordinatorRequestDataView =
    mojo::InterfaceRequestDataView<CoordinatorInterfaceBase>;
using CoordinatorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CoordinatorInterfaceBase>;
using CoordinatorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CoordinatorInterfaceBase>;
class RequestArgsDataView {
 public:
  RequestArgsDataView() {}

  RequestArgsDataView(
      internal::RequestArgs_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t dump_guid() const {
    return data_->dump_guid;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDumpType(UserType* output) const {
    auto data_value = data_->dump_type;
    return mojo::internal::Deserialize<::memory_instrumentation::mojom::DumpType>(
        data_value, output);
  }

  DumpType dump_type() const {
    return static_cast<DumpType>(data_->dump_type);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLevelOfDetail(UserType* output) const {
    auto data_value = data_->level_of_detail;
    return mojo::internal::Deserialize<::memory_instrumentation::mojom::LevelOfDetail>(
        data_value, output);
  }

  LevelOfDetail level_of_detail() const {
    return static_cast<LevelOfDetail>(data_->level_of_detail);
  }
 private:
  internal::RequestArgs_Data* data_ = nullptr;
};

class RawAllocatorDumpEdgeDataView {
 public:
  RawAllocatorDumpEdgeDataView() {}

  RawAllocatorDumpEdgeDataView(
      internal::RawAllocatorDumpEdge_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t source_id() const {
    return data_->source_id;
  }
  uint64_t target_id() const {
    return data_->target_id;
  }
  int64_t importance() const {
    return data_->importance;
  }
  bool overridable() const {
    return data_->overridable;
  }
 private:
  internal::RawAllocatorDumpEdge_Data* data_ = nullptr;
};

class RawAllocatorDumpEntryDataView {
 public:
  RawAllocatorDumpEntryDataView() {}

  RawAllocatorDumpEntryDataView(
      internal::RawAllocatorDumpEntry_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetUnitsDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUnits(UserType* output) {
    auto* pointer = data_->units.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      RawAllocatorDumpEntryValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = !data_->value.is_null() ? &data_->value : nullptr;
    return mojo::internal::Deserialize<::memory_instrumentation::mojom::RawAllocatorDumpEntryValueDataView>(
        pointer, output, context_);
  }
 private:
  internal::RawAllocatorDumpEntry_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RawAllocatorDumpDataView {
 public:
  RawAllocatorDumpDataView() {}

  RawAllocatorDumpDataView(
      internal::RawAllocatorDump_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t id() const {
    return data_->id;
  }
  inline void GetAbsoluteNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAbsoluteName(UserType* output) {
    auto* pointer = data_->absolute_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool weak() const {
    return data_->weak;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLevelOfDetail(UserType* output) const {
    auto data_value = data_->level_of_detail;
    return mojo::internal::Deserialize<::memory_instrumentation::mojom::LevelOfDetail>(
        data_value, output);
  }

  LevelOfDetail level_of_detail() const {
    return static_cast<LevelOfDetail>(data_->level_of_detail);
  }
  inline void GetEntriesDataView(
      mojo::ArrayDataView<RawAllocatorDumpEntryDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEntries(UserType* output) {
    auto* pointer = data_->entries.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::memory_instrumentation::mojom::RawAllocatorDumpEntryDataView>>(
        pointer, output, context_);
  }
 private:
  internal::RawAllocatorDump_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RawProcessMemoryDumpDataView {
 public:
  RawProcessMemoryDumpDataView() {}

  RawProcessMemoryDumpDataView(
      internal::RawProcessMemoryDump_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLevelOfDetail(UserType* output) const {
    auto data_value = data_->level_of_detail;
    return mojo::internal::Deserialize<::memory_instrumentation::mojom::LevelOfDetail>(
        data_value, output);
  }

  LevelOfDetail level_of_detail() const {
    return static_cast<LevelOfDetail>(data_->level_of_detail);
  }
  inline void GetAllocatorDumpEdgesDataView(
      mojo::ArrayDataView<RawAllocatorDumpEdgeDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAllocatorDumpEdges(UserType* output) {
    auto* pointer = data_->allocator_dump_edges.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::memory_instrumentation::mojom::RawAllocatorDumpEdgeDataView>>(
        pointer, output, context_);
  }
  inline void GetAllocatorDumpsDataView(
      mojo::ArrayDataView<RawAllocatorDumpDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAllocatorDumps(UserType* output) {
    auto* pointer = data_->allocator_dumps.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::memory_instrumentation::mojom::RawAllocatorDumpDataView>>(
        pointer, output, context_);
  }
 private:
  internal::RawProcessMemoryDump_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VmRegionDataView {
 public:
  VmRegionDataView() {}

  VmRegionDataView(
      internal::VmRegion_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t start_address() const {
    return data_->start_address;
  }
  uint64_t size_in_bytes() const {
    return data_->size_in_bytes;
  }
  uint64_t module_timestamp() const {
    return data_->module_timestamp;
  }
  inline void GetModuleDebugidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadModuleDebugid(UserType* output) {
    auto* pointer = data_->module_debugid.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetModuleDebugPathDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadModuleDebugPath(UserType* output) {
    auto* pointer = data_->module_debug_path.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  uint32_t protection_flags() const {
    return data_->protection_flags;
  }
  inline void GetMappedFileDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMappedFile(UserType* output) {
    auto* pointer = data_->mapped_file.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  uint64_t byte_stats_private_dirty_resident() const {
    return data_->byte_stats_private_dirty_resident;
  }
  uint64_t byte_stats_private_clean_resident() const {
    return data_->byte_stats_private_clean_resident;
  }
  uint64_t byte_stats_shared_dirty_resident() const {
    return data_->byte_stats_shared_dirty_resident;
  }
  uint64_t byte_stats_shared_clean_resident() const {
    return data_->byte_stats_shared_clean_resident;
  }
  uint64_t byte_stats_swapped() const {
    return data_->byte_stats_swapped;
  }
  uint64_t byte_stats_proportional_resident() const {
    return data_->byte_stats_proportional_resident;
  }
 private:
  internal::VmRegion_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PlatformPrivateFootprintDataView {
 public:
  PlatformPrivateFootprintDataView() {}

  PlatformPrivateFootprintDataView(
      internal::PlatformPrivateFootprint_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t phys_footprint_bytes() const {
    return data_->phys_footprint_bytes;
  }
  uint64_t internal_bytes() const {
    return data_->internal_bytes;
  }
  uint64_t compressed_bytes() const {
    return data_->compressed_bytes;
  }
  uint64_t rss_anon_bytes() const {
    return data_->rss_anon_bytes;
  }
  uint64_t vm_swap_bytes() const {
    return data_->vm_swap_bytes;
  }
  uint64_t private_bytes() const {
    return data_->private_bytes;
  }
 private:
  internal::PlatformPrivateFootprint_Data* data_ = nullptr;
};

class RawOSMemDumpDataView {
 public:
  RawOSMemDumpDataView() {}

  RawOSMemDumpDataView(
      internal::RawOSMemDump_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t resident_set_kb() const {
    return data_->resident_set_kb;
  }
  inline void GetPlatformPrivateFootprintDataView(
      PlatformPrivateFootprintDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPlatformPrivateFootprint(UserType* output) {
    auto* pointer = data_->platform_private_footprint.Get();
    return mojo::internal::Deserialize<::memory_instrumentation::mojom::PlatformPrivateFootprintDataView>(
        pointer, output, context_);
  }
  inline void GetMemoryMapsDataView(
      mojo::ArrayDataView<VmRegionDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMemoryMaps(UserType* output) {
    auto* pointer = data_->memory_maps.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::memory_instrumentation::mojom::VmRegionDataView>>(
        pointer, output, context_);
  }
 private:
  internal::RawOSMemDump_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class OSMemDumpDataView {
 public:
  OSMemDumpDataView() {}

  OSMemDumpDataView(
      internal::OSMemDump_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t resident_set_kb() const {
    return data_->resident_set_kb;
  }
  uint32_t private_footprint_kb() const {
    return data_->private_footprint_kb;
  }
  uint32_t shared_footprint_kb() const {
    return data_->shared_footprint_kb;
  }
  uint32_t private_footprint_swap_kb() const {
    return data_->private_footprint_swap_kb;
  }
 private:
  internal::OSMemDump_Data* data_ = nullptr;
};

class AllocatorMemDumpDataView {
 public:
  AllocatorMemDumpDataView() {}

  AllocatorMemDumpDataView(
      internal::AllocatorMemDump_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNumericEntriesDataView(
      mojo::MapDataView<mojo::StringDataView, uint64_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNumericEntries(UserType* output) {
    auto* pointer = data_->numeric_entries.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, uint64_t>>(
        pointer, output, context_);
  }
 private:
  internal::AllocatorMemDump_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProcessMemoryDumpDataView {
 public:
  ProcessMemoryDumpDataView() {}

  ProcessMemoryDumpDataView(
      internal::ProcessMemoryDump_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProcessType(UserType* output) const {
    auto data_value = data_->process_type;
    return mojo::internal::Deserialize<::memory_instrumentation::mojom::ProcessType>(
        data_value, output);
  }

  ProcessType process_type() const {
    return static_cast<ProcessType>(data_->process_type);
  }
  inline void GetOsDumpDataView(
      OSMemDumpDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOsDump(UserType* output) {
    auto* pointer = data_->os_dump.Get();
    return mojo::internal::Deserialize<::memory_instrumentation::mojom::OSMemDumpDataView>(
        pointer, output, context_);
  }
  inline void GetChromeAllocatorDumpsDataView(
      mojo::MapDataView<mojo::StringDataView, AllocatorMemDumpDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadChromeAllocatorDumps(UserType* output) {
    auto* pointer = data_->chrome_allocator_dumps.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, ::memory_instrumentation::mojom::AllocatorMemDumpDataView>>(
        pointer, output, context_);
  }
  inline void GetPidDataView(
      ::mojo_base::mojom::ProcessIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPid(UserType* output) {
    auto* pointer = data_->pid.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::ProcessIdDataView>(
        pointer, output, context_);
  }
 private:
  internal::ProcessMemoryDump_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GlobalMemoryDumpDataView {
 public:
  GlobalMemoryDumpDataView() {}

  GlobalMemoryDumpDataView(
      internal::GlobalMemoryDump_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetProcessDumpsDataView(
      mojo::ArrayDataView<ProcessMemoryDumpDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProcessDumps(UserType* output) {
    auto* pointer = data_->process_dumps.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::memory_instrumentation::mojom::ProcessMemoryDumpDataView>>(
        pointer, output, context_);
  }
 private:
  internal::GlobalMemoryDump_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SharedBufferWithSizeDataView {
 public:
  SharedBufferWithSizeDataView() {}

  SharedBufferWithSizeDataView(
      internal::SharedBufferWithSize_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedSharedBufferHandle TakeBuffer() {
    mojo::ScopedSharedBufferHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedSharedBufferHandle>(
            &data_->buffer, &result, context_);
    DCHECK(ret);
    return result;
  }
  uint32_t size() const {
    return data_->size;
  }
  inline void GetPidDataView(
      ::mojo_base::mojom::ProcessIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPid(UserType* output) {
    auto* pointer = data_->pid.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::ProcessIdDataView>(
        pointer, output, context_);
  }
 private:
  internal::SharedBufferWithSize_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClientProcess_RequestChromeMemoryDump_ParamsDataView {
 public:
  ClientProcess_RequestChromeMemoryDump_ParamsDataView() {}

  ClientProcess_RequestChromeMemoryDump_ParamsDataView(
      internal::ClientProcess_RequestChromeMemoryDump_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetArgsDataView(
      RequestArgsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadArgs(UserType* output) {
    auto* pointer = data_->args.Get();
    return mojo::internal::Deserialize<::memory_instrumentation::mojom::RequestArgsDataView>(
        pointer, output, context_);
  }
 private:
  internal::ClientProcess_RequestChromeMemoryDump_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClientProcess_RequestChromeMemoryDump_ResponseParamsDataView {
 public:
  ClientProcess_RequestChromeMemoryDump_ResponseParamsDataView() {}

  ClientProcess_RequestChromeMemoryDump_ResponseParamsDataView(
      internal::ClientProcess_RequestChromeMemoryDump_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  uint64_t dump_id() const {
    return data_->dump_id;
  }
  inline void GetRawProcessMemoryDumpDataView(
      RawProcessMemoryDumpDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRawProcessMemoryDump(UserType* output) {
    auto* pointer = data_->raw_process_memory_dump.Get();
    return mojo::internal::Deserialize<::memory_instrumentation::mojom::RawProcessMemoryDumpDataView>(
        pointer, output, context_);
  }
 private:
  internal::ClientProcess_RequestChromeMemoryDump_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClientProcess_EnableHeapProfiling_ParamsDataView {
 public:
  ClientProcess_EnableHeapProfiling_ParamsDataView() {}

  ClientProcess_EnableHeapProfiling_ParamsDataView(
      internal::ClientProcess_EnableHeapProfiling_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMode(UserType* output) const {
    auto data_value = data_->mode;
    return mojo::internal::Deserialize<::memory_instrumentation::mojom::HeapProfilingMode>(
        data_value, output);
  }

  HeapProfilingMode mode() const {
    return static_cast<HeapProfilingMode>(data_->mode);
  }
 private:
  internal::ClientProcess_EnableHeapProfiling_Params_Data* data_ = nullptr;
};

class ClientProcess_EnableHeapProfiling_ResponseParamsDataView {
 public:
  ClientProcess_EnableHeapProfiling_ResponseParamsDataView() {}

  ClientProcess_EnableHeapProfiling_ResponseParamsDataView(
      internal::ClientProcess_EnableHeapProfiling_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::ClientProcess_EnableHeapProfiling_ResponseParams_Data* data_ = nullptr;
};

class ClientProcess_RequestOSMemoryDump_ParamsDataView {
 public:
  ClientProcess_RequestOSMemoryDump_ParamsDataView() {}

  ClientProcess_RequestOSMemoryDump_ParamsDataView(
      internal::ClientProcess_RequestOSMemoryDump_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOption(UserType* output) const {
    auto data_value = data_->option;
    return mojo::internal::Deserialize<::memory_instrumentation::mojom::MemoryMapOption>(
        data_value, output);
  }

  MemoryMapOption option() const {
    return static_cast<MemoryMapOption>(data_->option);
  }
  inline void GetPidsDataView(
      mojo::ArrayDataView<::mojo_base::mojom::ProcessIdDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPids(UserType* output) {
    auto* pointer = data_->pids.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo_base::mojom::ProcessIdDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ClientProcess_RequestOSMemoryDump_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClientProcess_RequestOSMemoryDump_ResponseParamsDataView {
 public:
  ClientProcess_RequestOSMemoryDump_ResponseParamsDataView() {}

  ClientProcess_RequestOSMemoryDump_ResponseParamsDataView(
      internal::ClientProcess_RequestOSMemoryDump_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  inline void GetDumpsDataView(
      mojo::MapDataView<::mojo_base::mojom::ProcessIdDataView, RawOSMemDumpDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDumps(UserType* output) {
    auto* pointer = data_->dumps.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<::mojo_base::mojom::ProcessIdDataView, ::memory_instrumentation::mojom::RawOSMemDumpDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ClientProcess_RequestOSMemoryDump_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HeapProfiler_DumpProcessesForTracing_ParamsDataView {
 public:
  HeapProfiler_DumpProcessesForTracing_ParamsDataView() {}

  HeapProfiler_DumpProcessesForTracing_ParamsDataView(
      internal::HeapProfiler_DumpProcessesForTracing_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool strip_path_from_mapped_files() const {
    return data_->strip_path_from_mapped_files;
  }
 private:
  internal::HeapProfiler_DumpProcessesForTracing_Params_Data* data_ = nullptr;
};

class HeapProfiler_DumpProcessesForTracing_ResponseParamsDataView {
 public:
  HeapProfiler_DumpProcessesForTracing_ResponseParamsDataView() {}

  HeapProfiler_DumpProcessesForTracing_ResponseParamsDataView(
      internal::HeapProfiler_DumpProcessesForTracing_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBuffersDataView(
      mojo::ArrayDataView<SharedBufferWithSizeDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuffers(UserType* output) {
    auto* pointer = data_->buffers.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::memory_instrumentation::mojom::SharedBufferWithSizeDataView>>(
        pointer, output, context_);
  }
 private:
  internal::HeapProfiler_DumpProcessesForTracing_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HeapProfilerHelper_GetVmRegionsForHeapProfiler_ParamsDataView {
 public:
  HeapProfilerHelper_GetVmRegionsForHeapProfiler_ParamsDataView() {}

  HeapProfilerHelper_GetVmRegionsForHeapProfiler_ParamsDataView(
      internal::HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPidsDataView(
      mojo::ArrayDataView<::mojo_base::mojom::ProcessIdDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPids(UserType* output) {
    auto* pointer = data_->pids.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo_base::mojom::ProcessIdDataView>>(
        pointer, output, context_);
  }
 private:
  internal::HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParamsDataView {
 public:
  HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParamsDataView() {}

  HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParamsDataView(
      internal::HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetVmRegionsDataView(
      mojo::MapDataView<::mojo_base::mojom::ProcessIdDataView, mojo::ArrayDataView<VmRegionDataView>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVmRegions(UserType* output) {
    auto* pointer = data_->vm_regions.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<::mojo_base::mojom::ProcessIdDataView, mojo::ArrayDataView<::memory_instrumentation::mojom::VmRegionDataView>>>(
        pointer, output, context_);
  }
 private:
  internal::HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Coordinator_RegisterClientProcess_ParamsDataView {
 public:
  Coordinator_RegisterClientProcess_ParamsDataView() {}

  Coordinator_RegisterClientProcess_ParamsDataView(
      internal::Coordinator_RegisterClientProcess_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClientProcess() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::memory_instrumentation::mojom::ClientProcessPtrDataView>(
            &data_->client_process, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProcessType(UserType* output) const {
    auto data_value = data_->process_type;
    return mojo::internal::Deserialize<::memory_instrumentation::mojom::ProcessType>(
        data_value, output);
  }

  ProcessType process_type() const {
    return static_cast<ProcessType>(data_->process_type);
  }
 private:
  internal::Coordinator_RegisterClientProcess_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Coordinator_RequestGlobalMemoryDump_ParamsDataView {
 public:
  Coordinator_RequestGlobalMemoryDump_ParamsDataView() {}

  Coordinator_RequestGlobalMemoryDump_ParamsDataView(
      internal::Coordinator_RequestGlobalMemoryDump_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDumpType(UserType* output) const {
    auto data_value = data_->dump_type;
    return mojo::internal::Deserialize<::memory_instrumentation::mojom::DumpType>(
        data_value, output);
  }

  DumpType dump_type() const {
    return static_cast<DumpType>(data_->dump_type);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLevelOfDetail(UserType* output) const {
    auto data_value = data_->level_of_detail;
    return mojo::internal::Deserialize<::memory_instrumentation::mojom::LevelOfDetail>(
        data_value, output);
  }

  LevelOfDetail level_of_detail() const {
    return static_cast<LevelOfDetail>(data_->level_of_detail);
  }
  inline void GetAllocatorDumpNamesDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAllocatorDumpNames(UserType* output) {
    auto* pointer = data_->allocator_dump_names.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::Coordinator_RequestGlobalMemoryDump_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Coordinator_RequestGlobalMemoryDump_ResponseParamsDataView {
 public:
  Coordinator_RequestGlobalMemoryDump_ResponseParamsDataView() {}

  Coordinator_RequestGlobalMemoryDump_ResponseParamsDataView(
      internal::Coordinator_RequestGlobalMemoryDump_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  inline void GetGlobalMemoryDumpDataView(
      GlobalMemoryDumpDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGlobalMemoryDump(UserType* output) {
    auto* pointer = data_->global_memory_dump.Get();
    return mojo::internal::Deserialize<::memory_instrumentation::mojom::GlobalMemoryDumpDataView>(
        pointer, output, context_);
  }
 private:
  internal::Coordinator_RequestGlobalMemoryDump_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Coordinator_RequestGlobalMemoryDumpForPid_ParamsDataView {
 public:
  Coordinator_RequestGlobalMemoryDumpForPid_ParamsDataView() {}

  Coordinator_RequestGlobalMemoryDumpForPid_ParamsDataView(
      internal::Coordinator_RequestGlobalMemoryDumpForPid_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPidDataView(
      ::mojo_base::mojom::ProcessIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPid(UserType* output) {
    auto* pointer = data_->pid.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::ProcessIdDataView>(
        pointer, output, context_);
  }
  inline void GetAllocatorDumpNamesDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAllocatorDumpNames(UserType* output) {
    auto* pointer = data_->allocator_dump_names.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::Coordinator_RequestGlobalMemoryDumpForPid_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Coordinator_RequestGlobalMemoryDumpForPid_ResponseParamsDataView {
 public:
  Coordinator_RequestGlobalMemoryDumpForPid_ResponseParamsDataView() {}

  Coordinator_RequestGlobalMemoryDumpForPid_ResponseParamsDataView(
      internal::Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  inline void GetGlobalMemoryDumpDataView(
      GlobalMemoryDumpDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGlobalMemoryDump(UserType* output) {
    auto* pointer = data_->global_memory_dump.Get();
    return mojo::internal::Deserialize<::memory_instrumentation::mojom::GlobalMemoryDumpDataView>(
        pointer, output, context_);
  }
 private:
  internal::Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ParamsDataView {
 public:
  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ParamsDataView() {}

  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ParamsDataView(
      internal::Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDumpType(UserType* output) const {
    auto data_value = data_->dump_type;
    return mojo::internal::Deserialize<::memory_instrumentation::mojom::DumpType>(
        data_value, output);
  }

  DumpType dump_type() const {
    return static_cast<DumpType>(data_->dump_type);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLevelOfDetail(UserType* output) const {
    auto data_value = data_->level_of_detail;
    return mojo::internal::Deserialize<::memory_instrumentation::mojom::LevelOfDetail>(
        data_value, output);
  }

  LevelOfDetail level_of_detail() const {
    return static_cast<LevelOfDetail>(data_->level_of_detail);
  }
 private:
  internal::Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params_Data* data_ = nullptr;
};

class Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParamsDataView {
 public:
  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParamsDataView() {}

  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParamsDataView(
      internal::Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  uint64_t dump_id() const {
    return data_->dump_id;
  }
 private:
  internal::Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams_Data* data_ = nullptr;
};

class Coordinator_RegisterHeapProfiler_ParamsDataView {
 public:
  Coordinator_RegisterHeapProfiler_ParamsDataView() {}

  Coordinator_RegisterHeapProfiler_ParamsDataView(
      internal::Coordinator_RegisterHeapProfiler_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeHeapProfiler() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::memory_instrumentation::mojom::HeapProfilerPtrDataView>(
            &data_->heap_profiler, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Coordinator_RegisterHeapProfiler_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RawAllocatorDumpEntryValueDataView {
 public:
  using Tag = internal::RawAllocatorDumpEntryValue_Data::RawAllocatorDumpEntryValue_Tag;

  RawAllocatorDumpEntryValueDataView() {}

  RawAllocatorDumpEntryValueDataView(
      internal::RawAllocatorDumpEntryValue_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_value_uint64() const { return data_->tag == Tag::VALUE_UINT64; }
  uint64_t value_uint64() const {
    DCHECK(is_value_uint64());
    return data_->data.f_value_uint64;
  }
  bool is_value_string() const { return data_->tag == Tag::VALUE_STRING; }
  inline void GetValueStringDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValueString(UserType* output) {
    DCHECK(is_value_string());
    return mojo::internal::Deserialize<mojo::StringDataView>(
        data_->data.f_value_string.Get(), output, context_);
  }

 private:
  internal::RawAllocatorDumpEntryValue_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace memory_instrumentation

namespace std {

template <>
struct hash<::memory_instrumentation::mojom::DumpType>
    : public mojo::internal::EnumHashImpl<::memory_instrumentation::mojom::DumpType> {};

template <>
struct hash<::memory_instrumentation::mojom::LevelOfDetail>
    : public mojo::internal::EnumHashImpl<::memory_instrumentation::mojom::LevelOfDetail> {};

template <>
struct hash<::memory_instrumentation::mojom::ProcessType>
    : public mojo::internal::EnumHashImpl<::memory_instrumentation::mojom::ProcessType> {};

template <>
struct hash<::memory_instrumentation::mojom::HeapProfilingMode>
    : public mojo::internal::EnumHashImpl<::memory_instrumentation::mojom::HeapProfilingMode> {};

template <>
struct hash<::memory_instrumentation::mojom::MemoryMapOption>
    : public mojo::internal::EnumHashImpl<::memory_instrumentation::mojom::MemoryMapOption> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::memory_instrumentation::mojom::DumpType, ::memory_instrumentation::mojom::DumpType> {
  static ::memory_instrumentation::mojom::DumpType ToMojom(::memory_instrumentation::mojom::DumpType input) { return input; }
  static bool FromMojom(::memory_instrumentation::mojom::DumpType input, ::memory_instrumentation::mojom::DumpType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::memory_instrumentation::mojom::DumpType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::memory_instrumentation::mojom::DumpType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::memory_instrumentation::mojom::DumpType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::memory_instrumentation::mojom::LevelOfDetail, ::memory_instrumentation::mojom::LevelOfDetail> {
  static ::memory_instrumentation::mojom::LevelOfDetail ToMojom(::memory_instrumentation::mojom::LevelOfDetail input) { return input; }
  static bool FromMojom(::memory_instrumentation::mojom::LevelOfDetail input, ::memory_instrumentation::mojom::LevelOfDetail* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::memory_instrumentation::mojom::LevelOfDetail, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::memory_instrumentation::mojom::LevelOfDetail, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::memory_instrumentation::mojom::LevelOfDetail>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::memory_instrumentation::mojom::ProcessType, ::memory_instrumentation::mojom::ProcessType> {
  static ::memory_instrumentation::mojom::ProcessType ToMojom(::memory_instrumentation::mojom::ProcessType input) { return input; }
  static bool FromMojom(::memory_instrumentation::mojom::ProcessType input, ::memory_instrumentation::mojom::ProcessType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::memory_instrumentation::mojom::ProcessType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::memory_instrumentation::mojom::ProcessType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::memory_instrumentation::mojom::ProcessType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::memory_instrumentation::mojom::HeapProfilingMode, ::memory_instrumentation::mojom::HeapProfilingMode> {
  static ::memory_instrumentation::mojom::HeapProfilingMode ToMojom(::memory_instrumentation::mojom::HeapProfilingMode input) { return input; }
  static bool FromMojom(::memory_instrumentation::mojom::HeapProfilingMode input, ::memory_instrumentation::mojom::HeapProfilingMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::memory_instrumentation::mojom::HeapProfilingMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::memory_instrumentation::mojom::HeapProfilingMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::memory_instrumentation::mojom::HeapProfilingMode>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::memory_instrumentation::mojom::MemoryMapOption, ::memory_instrumentation::mojom::MemoryMapOption> {
  static ::memory_instrumentation::mojom::MemoryMapOption ToMojom(::memory_instrumentation::mojom::MemoryMapOption input) { return input; }
  static bool FromMojom(::memory_instrumentation::mojom::MemoryMapOption input, ::memory_instrumentation::mojom::MemoryMapOption* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::memory_instrumentation::mojom::MemoryMapOption, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::memory_instrumentation::mojom::MemoryMapOption, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::memory_instrumentation::mojom::MemoryMapOption>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::memory_instrumentation::mojom::RequestArgsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::memory_instrumentation::mojom::RequestArgsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::memory_instrumentation::mojom::internal::RequestArgs_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->dump_guid = CallWithContext(Traits::dump_guid, input, custom_context);
    mojo::internal::Serialize<::memory_instrumentation::mojom::DumpType>(
        CallWithContext(Traits::dump_type, input, custom_context), &(*output)->dump_type);
    mojo::internal::Serialize<::memory_instrumentation::mojom::LevelOfDetail>(
        CallWithContext(Traits::level_of_detail, input, custom_context), &(*output)->level_of_detail);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::memory_instrumentation::mojom::internal::RequestArgs_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::memory_instrumentation::mojom::RequestArgsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::memory_instrumentation::mojom::RawAllocatorDumpEdgeDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::memory_instrumentation::mojom::RawAllocatorDumpEdgeDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::memory_instrumentation::mojom::internal::RawAllocatorDumpEdge_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->source_id = CallWithContext(Traits::source_id, input, custom_context);
    (*output)->target_id = CallWithContext(Traits::target_id, input, custom_context);
    (*output)->importance = CallWithContext(Traits::importance, input, custom_context);
    (*output)->overridable = CallWithContext(Traits::overridable, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::memory_instrumentation::mojom::internal::RawAllocatorDumpEdge_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::memory_instrumentation::mojom::RawAllocatorDumpEdgeDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::memory_instrumentation::mojom::RawAllocatorDumpEntryDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::memory_instrumentation::mojom::RawAllocatorDumpEntryDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::memory_instrumentation::mojom::internal::RawAllocatorDumpEntry_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in RawAllocatorDumpEntry struct");
    decltype(CallWithContext(Traits::units, input, custom_context)) in_units = CallWithContext(Traits::units, input, custom_context);
    typename decltype((*output)->units)::BaseType::BufferWriter
        units_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_units, buffer, &units_writer, context);
    (*output)->units.Set(
        units_writer.is_null() ? nullptr : units_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->units.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null units in RawAllocatorDumpEntry struct");
    decltype(CallWithContext(Traits::value, input, custom_context)) in_value = CallWithContext(Traits::value, input, custom_context);
    typename decltype((*output)->value)::BufferWriter value_writer;
    value_writer.AllocateInline(buffer, &(*output)->value);
    mojo::internal::Serialize<::memory_instrumentation::mojom::RawAllocatorDumpEntryValueDataView>(
        in_value, buffer, &value_writer, true, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->value.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null value in RawAllocatorDumpEntry struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::memory_instrumentation::mojom::internal::RawAllocatorDumpEntry_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::memory_instrumentation::mojom::RawAllocatorDumpEntryDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::memory_instrumentation::mojom::RawAllocatorDumpDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::memory_instrumentation::mojom::RawAllocatorDumpDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::memory_instrumentation::mojom::internal::RawAllocatorDump_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->id = CallWithContext(Traits::id, input, custom_context);
    decltype(CallWithContext(Traits::absolute_name, input, custom_context)) in_absolute_name = CallWithContext(Traits::absolute_name, input, custom_context);
    typename decltype((*output)->absolute_name)::BaseType::BufferWriter
        absolute_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_absolute_name, buffer, &absolute_name_writer, context);
    (*output)->absolute_name.Set(
        absolute_name_writer.is_null() ? nullptr : absolute_name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->absolute_name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null absolute_name in RawAllocatorDump struct");
    (*output)->weak = CallWithContext(Traits::weak, input, custom_context);
    mojo::internal::Serialize<::memory_instrumentation::mojom::LevelOfDetail>(
        CallWithContext(Traits::level_of_detail, input, custom_context), &(*output)->level_of_detail);
    decltype(CallWithContext(Traits::entries, input, custom_context)) in_entries = CallWithContext(Traits::entries, input, custom_context);
    typename decltype((*output)->entries)::BaseType::BufferWriter
        entries_writer;
    const mojo::internal::ContainerValidateParams entries_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::memory_instrumentation::mojom::RawAllocatorDumpEntryDataView>>(
        in_entries, buffer, &entries_writer, &entries_validate_params,
        context);
    (*output)->entries.Set(
        entries_writer.is_null() ? nullptr : entries_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->entries.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null entries in RawAllocatorDump struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::memory_instrumentation::mojom::internal::RawAllocatorDump_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::memory_instrumentation::mojom::RawAllocatorDumpDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::memory_instrumentation::mojom::RawProcessMemoryDumpDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::memory_instrumentation::mojom::RawProcessMemoryDumpDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::memory_instrumentation::mojom::internal::RawProcessMemoryDump_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::memory_instrumentation::mojom::LevelOfDetail>(
        CallWithContext(Traits::level_of_detail, input, custom_context), &(*output)->level_of_detail);
    decltype(CallWithContext(Traits::allocator_dump_edges, input, custom_context)) in_allocator_dump_edges = CallWithContext(Traits::allocator_dump_edges, input, custom_context);
    typename decltype((*output)->allocator_dump_edges)::BaseType::BufferWriter
        allocator_dump_edges_writer;
    const mojo::internal::ContainerValidateParams allocator_dump_edges_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::memory_instrumentation::mojom::RawAllocatorDumpEdgeDataView>>(
        in_allocator_dump_edges, buffer, &allocator_dump_edges_writer, &allocator_dump_edges_validate_params,
        context);
    (*output)->allocator_dump_edges.Set(
        allocator_dump_edges_writer.is_null() ? nullptr : allocator_dump_edges_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->allocator_dump_edges.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null allocator_dump_edges in RawProcessMemoryDump struct");
    decltype(CallWithContext(Traits::allocator_dumps, input, custom_context)) in_allocator_dumps = CallWithContext(Traits::allocator_dumps, input, custom_context);
    typename decltype((*output)->allocator_dumps)::BaseType::BufferWriter
        allocator_dumps_writer;
    const mojo::internal::ContainerValidateParams allocator_dumps_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::memory_instrumentation::mojom::RawAllocatorDumpDataView>>(
        in_allocator_dumps, buffer, &allocator_dumps_writer, &allocator_dumps_validate_params,
        context);
    (*output)->allocator_dumps.Set(
        allocator_dumps_writer.is_null() ? nullptr : allocator_dumps_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->allocator_dumps.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null allocator_dumps in RawProcessMemoryDump struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::memory_instrumentation::mojom::internal::RawProcessMemoryDump_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::memory_instrumentation::mojom::RawProcessMemoryDumpDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::memory_instrumentation::mojom::VmRegionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::memory_instrumentation::mojom::VmRegionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::memory_instrumentation::mojom::internal::VmRegion_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->start_address = CallWithContext(Traits::start_address, input, custom_context);
    (*output)->size_in_bytes = CallWithContext(Traits::size_in_bytes, input, custom_context);
    (*output)->module_timestamp = CallWithContext(Traits::module_timestamp, input, custom_context);
    decltype(CallWithContext(Traits::module_debugid, input, custom_context)) in_module_debugid = CallWithContext(Traits::module_debugid, input, custom_context);
    typename decltype((*output)->module_debugid)::BaseType::BufferWriter
        module_debugid_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_module_debugid, buffer, &module_debugid_writer, context);
    (*output)->module_debugid.Set(
        module_debugid_writer.is_null() ? nullptr : module_debugid_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->module_debugid.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null module_debugid in VmRegion struct");
    decltype(CallWithContext(Traits::module_debug_path, input, custom_context)) in_module_debug_path = CallWithContext(Traits::module_debug_path, input, custom_context);
    typename decltype((*output)->module_debug_path)::BaseType::BufferWriter
        module_debug_path_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_module_debug_path, buffer, &module_debug_path_writer, context);
    (*output)->module_debug_path.Set(
        module_debug_path_writer.is_null() ? nullptr : module_debug_path_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->module_debug_path.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null module_debug_path in VmRegion struct");
    (*output)->protection_flags = CallWithContext(Traits::protection_flags, input, custom_context);
    decltype(CallWithContext(Traits::mapped_file, input, custom_context)) in_mapped_file = CallWithContext(Traits::mapped_file, input, custom_context);
    typename decltype((*output)->mapped_file)::BaseType::BufferWriter
        mapped_file_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_mapped_file, buffer, &mapped_file_writer, context);
    (*output)->mapped_file.Set(
        mapped_file_writer.is_null() ? nullptr : mapped_file_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->mapped_file.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null mapped_file in VmRegion struct");
    (*output)->byte_stats_private_dirty_resident = CallWithContext(Traits::byte_stats_private_dirty_resident, input, custom_context);
    (*output)->byte_stats_private_clean_resident = CallWithContext(Traits::byte_stats_private_clean_resident, input, custom_context);
    (*output)->byte_stats_shared_dirty_resident = CallWithContext(Traits::byte_stats_shared_dirty_resident, input, custom_context);
    (*output)->byte_stats_shared_clean_resident = CallWithContext(Traits::byte_stats_shared_clean_resident, input, custom_context);
    (*output)->byte_stats_swapped = CallWithContext(Traits::byte_stats_swapped, input, custom_context);
    (*output)->byte_stats_proportional_resident = CallWithContext(Traits::byte_stats_proportional_resident, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::memory_instrumentation::mojom::internal::VmRegion_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::memory_instrumentation::mojom::VmRegionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::memory_instrumentation::mojom::PlatformPrivateFootprintDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::memory_instrumentation::mojom::PlatformPrivateFootprintDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::memory_instrumentation::mojom::internal::PlatformPrivateFootprint_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->phys_footprint_bytes = CallWithContext(Traits::phys_footprint_bytes, input, custom_context);
    (*output)->internal_bytes = CallWithContext(Traits::internal_bytes, input, custom_context);
    (*output)->compressed_bytes = CallWithContext(Traits::compressed_bytes, input, custom_context);
    (*output)->rss_anon_bytes = CallWithContext(Traits::rss_anon_bytes, input, custom_context);
    (*output)->vm_swap_bytes = CallWithContext(Traits::vm_swap_bytes, input, custom_context);
    (*output)->private_bytes = CallWithContext(Traits::private_bytes, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::memory_instrumentation::mojom::internal::PlatformPrivateFootprint_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::memory_instrumentation::mojom::PlatformPrivateFootprintDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::memory_instrumentation::mojom::RawOSMemDumpDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::memory_instrumentation::mojom::RawOSMemDumpDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::memory_instrumentation::mojom::internal::RawOSMemDump_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->resident_set_kb = CallWithContext(Traits::resident_set_kb, input, custom_context);
    decltype(CallWithContext(Traits::platform_private_footprint, input, custom_context)) in_platform_private_footprint = CallWithContext(Traits::platform_private_footprint, input, custom_context);
    typename decltype((*output)->platform_private_footprint)::BaseType::BufferWriter
        platform_private_footprint_writer;
    mojo::internal::Serialize<::memory_instrumentation::mojom::PlatformPrivateFootprintDataView>(
        in_platform_private_footprint, buffer, &platform_private_footprint_writer, context);
    (*output)->platform_private_footprint.Set(
        platform_private_footprint_writer.is_null() ? nullptr : platform_private_footprint_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->platform_private_footprint.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null platform_private_footprint in RawOSMemDump struct");
    decltype(CallWithContext(Traits::memory_maps, input, custom_context)) in_memory_maps = CallWithContext(Traits::memory_maps, input, custom_context);
    typename decltype((*output)->memory_maps)::BaseType::BufferWriter
        memory_maps_writer;
    const mojo::internal::ContainerValidateParams memory_maps_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::memory_instrumentation::mojom::VmRegionDataView>>(
        in_memory_maps, buffer, &memory_maps_writer, &memory_maps_validate_params,
        context);
    (*output)->memory_maps.Set(
        memory_maps_writer.is_null() ? nullptr : memory_maps_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->memory_maps.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null memory_maps in RawOSMemDump struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::memory_instrumentation::mojom::internal::RawOSMemDump_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::memory_instrumentation::mojom::RawOSMemDumpDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::memory_instrumentation::mojom::OSMemDumpDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::memory_instrumentation::mojom::OSMemDumpDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::memory_instrumentation::mojom::internal::OSMemDump_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->resident_set_kb = CallWithContext(Traits::resident_set_kb, input, custom_context);
    (*output)->private_footprint_kb = CallWithContext(Traits::private_footprint_kb, input, custom_context);
    (*output)->shared_footprint_kb = CallWithContext(Traits::shared_footprint_kb, input, custom_context);
    (*output)->private_footprint_swap_kb = CallWithContext(Traits::private_footprint_swap_kb, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::memory_instrumentation::mojom::internal::OSMemDump_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::memory_instrumentation::mojom::OSMemDumpDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::memory_instrumentation::mojom::AllocatorMemDumpDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::memory_instrumentation::mojom::AllocatorMemDumpDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::memory_instrumentation::mojom::internal::AllocatorMemDump_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::numeric_entries, input, custom_context)) in_numeric_entries = CallWithContext(Traits::numeric_entries, input, custom_context);
    typename decltype((*output)->numeric_entries)::BaseType::BufferWriter
        numeric_entries_writer;
    const mojo::internal::ContainerValidateParams numeric_entries_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, uint64_t>>(
        in_numeric_entries, buffer, &numeric_entries_writer, &numeric_entries_validate_params,
        context);
    (*output)->numeric_entries.Set(
        numeric_entries_writer.is_null() ? nullptr : numeric_entries_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->numeric_entries.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null numeric_entries in AllocatorMemDump struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::memory_instrumentation::mojom::internal::AllocatorMemDump_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::memory_instrumentation::mojom::AllocatorMemDumpDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::memory_instrumentation::mojom::ProcessMemoryDumpDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::memory_instrumentation::mojom::ProcessMemoryDumpDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::memory_instrumentation::mojom::internal::ProcessMemoryDump_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::memory_instrumentation::mojom::ProcessType>(
        CallWithContext(Traits::process_type, input, custom_context), &(*output)->process_type);
    decltype(CallWithContext(Traits::os_dump, input, custom_context)) in_os_dump = CallWithContext(Traits::os_dump, input, custom_context);
    typename decltype((*output)->os_dump)::BaseType::BufferWriter
        os_dump_writer;
    mojo::internal::Serialize<::memory_instrumentation::mojom::OSMemDumpDataView>(
        in_os_dump, buffer, &os_dump_writer, context);
    (*output)->os_dump.Set(
        os_dump_writer.is_null() ? nullptr : os_dump_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->os_dump.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null os_dump in ProcessMemoryDump struct");
    decltype(CallWithContext(Traits::chrome_allocator_dumps, input, custom_context)) in_chrome_allocator_dumps = CallWithContext(Traits::chrome_allocator_dumps, input, custom_context);
    typename decltype((*output)->chrome_allocator_dumps)::BaseType::BufferWriter
        chrome_allocator_dumps_writer;
    const mojo::internal::ContainerValidateParams chrome_allocator_dumps_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, ::memory_instrumentation::mojom::AllocatorMemDumpDataView>>(
        in_chrome_allocator_dumps, buffer, &chrome_allocator_dumps_writer, &chrome_allocator_dumps_validate_params,
        context);
    (*output)->chrome_allocator_dumps.Set(
        chrome_allocator_dumps_writer.is_null() ? nullptr : chrome_allocator_dumps_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->chrome_allocator_dumps.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null chrome_allocator_dumps in ProcessMemoryDump struct");
    decltype(CallWithContext(Traits::pid, input, custom_context)) in_pid = CallWithContext(Traits::pid, input, custom_context);
    typename decltype((*output)->pid)::BaseType::BufferWriter
        pid_writer;
    mojo::internal::Serialize<::mojo_base::mojom::ProcessIdDataView>(
        in_pid, buffer, &pid_writer, context);
    (*output)->pid.Set(
        pid_writer.is_null() ? nullptr : pid_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->pid.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null pid in ProcessMemoryDump struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::memory_instrumentation::mojom::internal::ProcessMemoryDump_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::memory_instrumentation::mojom::ProcessMemoryDumpDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::memory_instrumentation::mojom::GlobalMemoryDumpDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::memory_instrumentation::mojom::GlobalMemoryDumpDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::memory_instrumentation::mojom::internal::GlobalMemoryDump_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::process_dumps, input, custom_context)) in_process_dumps = CallWithContext(Traits::process_dumps, input, custom_context);
    typename decltype((*output)->process_dumps)::BaseType::BufferWriter
        process_dumps_writer;
    const mojo::internal::ContainerValidateParams process_dumps_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::memory_instrumentation::mojom::ProcessMemoryDumpDataView>>(
        in_process_dumps, buffer, &process_dumps_writer, &process_dumps_validate_params,
        context);
    (*output)->process_dumps.Set(
        process_dumps_writer.is_null() ? nullptr : process_dumps_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->process_dumps.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null process_dumps in GlobalMemoryDump struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::memory_instrumentation::mojom::internal::GlobalMemoryDump_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::memory_instrumentation::mojom::GlobalMemoryDumpDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::memory_instrumentation::mojom::SharedBufferWithSizeDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::memory_instrumentation::mojom::SharedBufferWithSizeDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::memory_instrumentation::mojom::internal::SharedBufferWithSize_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::buffer, input, custom_context)) in_buffer = CallWithContext(Traits::buffer, input, custom_context);
    mojo::internal::Serialize<mojo::ScopedSharedBufferHandle>(
        in_buffer, &(*output)->buffer, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->buffer),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid buffer in SharedBufferWithSize struct");
    (*output)->size = CallWithContext(Traits::size, input, custom_context);
    decltype(CallWithContext(Traits::pid, input, custom_context)) in_pid = CallWithContext(Traits::pid, input, custom_context);
    typename decltype((*output)->pid)::BaseType::BufferWriter
        pid_writer;
    mojo::internal::Serialize<::mojo_base::mojom::ProcessIdDataView>(
        in_pid, buffer, &pid_writer, context);
    (*output)->pid.Set(
        pid_writer.is_null() ? nullptr : pid_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->pid.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null pid in SharedBufferWithSize struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::memory_instrumentation::mojom::internal::SharedBufferWithSize_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::memory_instrumentation::mojom::SharedBufferWithSizeDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::memory_instrumentation::mojom::RawAllocatorDumpEntryValueDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::memory_instrumentation::mojom::RawAllocatorDumpEntryValueDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::memory_instrumentation::mojom::internal::RawAllocatorDumpEntryValue_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);

    if (!inlined)
      writer->Allocate(buffer);

    ::memory_instrumentation::mojom::internal::RawAllocatorDumpEntryValue_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = CallWithContext(Traits::GetTag, input, custom_context);
    switch (result->tag) {
      case ::memory_instrumentation::mojom::RawAllocatorDumpEntryValueDataView::Tag::VALUE_UINT64: {
        decltype(CallWithContext(Traits::value_uint64, input, custom_context))
            in_value_uint64 = CallWithContext(Traits::value_uint64, input,
                                          custom_context);
        result->data.f_value_uint64 = in_value_uint64;
        break;
      }
      case ::memory_instrumentation::mojom::RawAllocatorDumpEntryValueDataView::Tag::VALUE_STRING: {
        decltype(CallWithContext(Traits::value_string, input, custom_context))
            in_value_string = CallWithContext(Traits::value_string, input,
                                          custom_context);
        typename decltype(result->data.f_value_string)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<mojo::StringDataView>(
            in_value_string, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null value_string in RawAllocatorDumpEntryValue union");
        result->data.f_value_string.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
    }

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::memory_instrumentation::mojom::internal::RawAllocatorDumpEntryValue_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::memory_instrumentation::mojom::RawAllocatorDumpEntryValueDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace memory_instrumentation {
namespace mojom {





inline void RawAllocatorDumpEntryDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void RawAllocatorDumpEntryDataView::GetUnitsDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->units.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void RawAllocatorDumpEntryDataView::GetValueDataView(
    RawAllocatorDumpEntryValueDataView* output) {
  auto pointer = &data_->value;
  *output = RawAllocatorDumpEntryValueDataView(pointer, context_);
}


inline void RawAllocatorDumpDataView::GetAbsoluteNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->absolute_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void RawAllocatorDumpDataView::GetEntriesDataView(
    mojo::ArrayDataView<RawAllocatorDumpEntryDataView>* output) {
  auto pointer = data_->entries.Get();
  *output = mojo::ArrayDataView<RawAllocatorDumpEntryDataView>(pointer, context_);
}


inline void RawProcessMemoryDumpDataView::GetAllocatorDumpEdgesDataView(
    mojo::ArrayDataView<RawAllocatorDumpEdgeDataView>* output) {
  auto pointer = data_->allocator_dump_edges.Get();
  *output = mojo::ArrayDataView<RawAllocatorDumpEdgeDataView>(pointer, context_);
}
inline void RawProcessMemoryDumpDataView::GetAllocatorDumpsDataView(
    mojo::ArrayDataView<RawAllocatorDumpDataView>* output) {
  auto pointer = data_->allocator_dumps.Get();
  *output = mojo::ArrayDataView<RawAllocatorDumpDataView>(pointer, context_);
}


inline void VmRegionDataView::GetModuleDebugidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->module_debugid.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void VmRegionDataView::GetModuleDebugPathDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->module_debug_path.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void VmRegionDataView::GetMappedFileDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->mapped_file.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void RawOSMemDumpDataView::GetPlatformPrivateFootprintDataView(
    PlatformPrivateFootprintDataView* output) {
  auto pointer = data_->platform_private_footprint.Get();
  *output = PlatformPrivateFootprintDataView(pointer, context_);
}
inline void RawOSMemDumpDataView::GetMemoryMapsDataView(
    mojo::ArrayDataView<VmRegionDataView>* output) {
  auto pointer = data_->memory_maps.Get();
  *output = mojo::ArrayDataView<VmRegionDataView>(pointer, context_);
}




inline void AllocatorMemDumpDataView::GetNumericEntriesDataView(
    mojo::MapDataView<mojo::StringDataView, uint64_t>* output) {
  auto pointer = data_->numeric_entries.Get();
  *output = mojo::MapDataView<mojo::StringDataView, uint64_t>(pointer, context_);
}


inline void ProcessMemoryDumpDataView::GetOsDumpDataView(
    OSMemDumpDataView* output) {
  auto pointer = data_->os_dump.Get();
  *output = OSMemDumpDataView(pointer, context_);
}
inline void ProcessMemoryDumpDataView::GetChromeAllocatorDumpsDataView(
    mojo::MapDataView<mojo::StringDataView, AllocatorMemDumpDataView>* output) {
  auto pointer = data_->chrome_allocator_dumps.Get();
  *output = mojo::MapDataView<mojo::StringDataView, AllocatorMemDumpDataView>(pointer, context_);
}
inline void ProcessMemoryDumpDataView::GetPidDataView(
    ::mojo_base::mojom::ProcessIdDataView* output) {
  auto pointer = data_->pid.Get();
  *output = ::mojo_base::mojom::ProcessIdDataView(pointer, context_);
}


inline void GlobalMemoryDumpDataView::GetProcessDumpsDataView(
    mojo::ArrayDataView<ProcessMemoryDumpDataView>* output) {
  auto pointer = data_->process_dumps.Get();
  *output = mojo::ArrayDataView<ProcessMemoryDumpDataView>(pointer, context_);
}


inline void SharedBufferWithSizeDataView::GetPidDataView(
    ::mojo_base::mojom::ProcessIdDataView* output) {
  auto pointer = data_->pid.Get();
  *output = ::mojo_base::mojom::ProcessIdDataView(pointer, context_);
}


inline void ClientProcess_RequestChromeMemoryDump_ParamsDataView::GetArgsDataView(
    RequestArgsDataView* output) {
  auto pointer = data_->args.Get();
  *output = RequestArgsDataView(pointer, context_);
}


inline void ClientProcess_RequestChromeMemoryDump_ResponseParamsDataView::GetRawProcessMemoryDumpDataView(
    RawProcessMemoryDumpDataView* output) {
  auto pointer = data_->raw_process_memory_dump.Get();
  *output = RawProcessMemoryDumpDataView(pointer, context_);
}






inline void ClientProcess_RequestOSMemoryDump_ParamsDataView::GetPidsDataView(
    mojo::ArrayDataView<::mojo_base::mojom::ProcessIdDataView>* output) {
  auto pointer = data_->pids.Get();
  *output = mojo::ArrayDataView<::mojo_base::mojom::ProcessIdDataView>(pointer, context_);
}


inline void ClientProcess_RequestOSMemoryDump_ResponseParamsDataView::GetDumpsDataView(
    mojo::MapDataView<::mojo_base::mojom::ProcessIdDataView, RawOSMemDumpDataView>* output) {
  auto pointer = data_->dumps.Get();
  *output = mojo::MapDataView<::mojo_base::mojom::ProcessIdDataView, RawOSMemDumpDataView>(pointer, context_);
}




inline void HeapProfiler_DumpProcessesForTracing_ResponseParamsDataView::GetBuffersDataView(
    mojo::ArrayDataView<SharedBufferWithSizeDataView>* output) {
  auto pointer = data_->buffers.Get();
  *output = mojo::ArrayDataView<SharedBufferWithSizeDataView>(pointer, context_);
}


inline void HeapProfilerHelper_GetVmRegionsForHeapProfiler_ParamsDataView::GetPidsDataView(
    mojo::ArrayDataView<::mojo_base::mojom::ProcessIdDataView>* output) {
  auto pointer = data_->pids.Get();
  *output = mojo::ArrayDataView<::mojo_base::mojom::ProcessIdDataView>(pointer, context_);
}


inline void HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParamsDataView::GetVmRegionsDataView(
    mojo::MapDataView<::mojo_base::mojom::ProcessIdDataView, mojo::ArrayDataView<VmRegionDataView>>* output) {
  auto pointer = data_->vm_regions.Get();
  *output = mojo::MapDataView<::mojo_base::mojom::ProcessIdDataView, mojo::ArrayDataView<VmRegionDataView>>(pointer, context_);
}




inline void Coordinator_RequestGlobalMemoryDump_ParamsDataView::GetAllocatorDumpNamesDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->allocator_dump_names.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}


inline void Coordinator_RequestGlobalMemoryDump_ResponseParamsDataView::GetGlobalMemoryDumpDataView(
    GlobalMemoryDumpDataView* output) {
  auto pointer = data_->global_memory_dump.Get();
  *output = GlobalMemoryDumpDataView(pointer, context_);
}


inline void Coordinator_RequestGlobalMemoryDumpForPid_ParamsDataView::GetPidDataView(
    ::mojo_base::mojom::ProcessIdDataView* output) {
  auto pointer = data_->pid.Get();
  *output = ::mojo_base::mojom::ProcessIdDataView(pointer, context_);
}
inline void Coordinator_RequestGlobalMemoryDumpForPid_ParamsDataView::GetAllocatorDumpNamesDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->allocator_dump_names.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}


inline void Coordinator_RequestGlobalMemoryDumpForPid_ResponseParamsDataView::GetGlobalMemoryDumpDataView(
    GlobalMemoryDumpDataView* output) {
  auto pointer = data_->global_memory_dump.Get();
  *output = GlobalMemoryDumpDataView(pointer, context_);
}








inline void RawAllocatorDumpEntryValueDataView::GetValueStringDataView(
    mojo::StringDataView* output) {
  DCHECK(is_value_string());
  *output = mojo::StringDataView(data_->data.f_value_string.Get(), context_);
}


}  // namespace mojom
}  // namespace memory_instrumentation

#endif  // SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_SHARED_H_
