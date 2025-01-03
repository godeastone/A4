// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_SHARED_H_
#define SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_SHARED_H_

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
#include "services/tracing/public/mojom/perfetto_service.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace tracing {
namespace mojom {
class ChunksToMoveDataView;

class ChunkPatchDataView;

class ChunksToPatchDataView;

class CommitDataRequestDataView;

class DataSourceConfigDataView;



}  // namespace mojom
}  // namespace tracing

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::tracing::mojom::ChunksToMoveDataView> {
  using Data = ::tracing::mojom::internal::ChunksToMove_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::tracing::mojom::ChunkPatchDataView> {
  using Data = ::tracing::mojom::internal::ChunkPatch_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::tracing::mojom::ChunksToPatchDataView> {
  using Data = ::tracing::mojom::internal::ChunksToPatch_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::tracing::mojom::CommitDataRequestDataView> {
  using Data = ::tracing::mojom::internal::CommitDataRequest_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::tracing::mojom::DataSourceConfigDataView> {
  using Data = ::tracing::mojom::internal::DataSourceConfig_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace tracing {
namespace mojom {
// Interface base classes. They are used for type safety check.
class ProducerHostInterfaceBase {};

using ProducerHostPtrDataView =
    mojo::InterfacePtrDataView<ProducerHostInterfaceBase>;
using ProducerHostRequestDataView =
    mojo::InterfaceRequestDataView<ProducerHostInterfaceBase>;
using ProducerHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ProducerHostInterfaceBase>;
using ProducerHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ProducerHostInterfaceBase>;
class ProducerClientInterfaceBase {};

using ProducerClientPtrDataView =
    mojo::InterfacePtrDataView<ProducerClientInterfaceBase>;
using ProducerClientRequestDataView =
    mojo::InterfaceRequestDataView<ProducerClientInterfaceBase>;
using ProducerClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ProducerClientInterfaceBase>;
using ProducerClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ProducerClientInterfaceBase>;
class PerfettoServiceInterfaceBase {};

using PerfettoServicePtrDataView =
    mojo::InterfacePtrDataView<PerfettoServiceInterfaceBase>;
using PerfettoServiceRequestDataView =
    mojo::InterfaceRequestDataView<PerfettoServiceInterfaceBase>;
using PerfettoServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PerfettoServiceInterfaceBase>;
using PerfettoServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PerfettoServiceInterfaceBase>;
class ChunksToMoveDataView {
 public:
  ChunksToMoveDataView() {}

  ChunksToMoveDataView(
      internal::ChunksToMove_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t page() const {
    return data_->page;
  }
  uint32_t chunk() const {
    return data_->chunk;
  }
  uint32_t target_buffer() const {
    return data_->target_buffer;
  }
 private:
  internal::ChunksToMove_Data* data_ = nullptr;
};

class ChunkPatchDataView {
 public:
  ChunkPatchDataView() {}

  ChunkPatchDataView(
      internal::ChunkPatch_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t offset() const {
    return data_->offset;
  }
  inline void GetDataDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ChunkPatch_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ChunksToPatchDataView {
 public:
  ChunksToPatchDataView() {}

  ChunksToPatchDataView(
      internal::ChunksToPatch_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t target_buffer() const {
    return data_->target_buffer;
  }
  uint32_t writer_id() const {
    return data_->writer_id;
  }
  uint32_t chunk_id() const {
    return data_->chunk_id;
  }
  inline void GetPatchesDataView(
      mojo::ArrayDataView<ChunkPatchDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPatches(UserType* output) {
    auto* pointer = data_->patches.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::tracing::mojom::ChunkPatchDataView>>(
        pointer, output, context_);
  }
  bool has_more_patches() const {
    return data_->has_more_patches;
  }
 private:
  internal::ChunksToPatch_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CommitDataRequestDataView {
 public:
  CommitDataRequestDataView() {}

  CommitDataRequestDataView(
      internal::CommitDataRequest_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetChunksToMoveDataView(
      mojo::ArrayDataView<ChunksToMoveDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadChunksToMove(UserType* output) {
    auto* pointer = data_->chunks_to_move.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::tracing::mojom::ChunksToMoveDataView>>(
        pointer, output, context_);
  }
  inline void GetChunksToPatchDataView(
      mojo::ArrayDataView<ChunksToPatchDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadChunksToPatch(UserType* output) {
    auto* pointer = data_->chunks_to_patch.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::tracing::mojom::ChunksToPatchDataView>>(
        pointer, output, context_);
  }
 private:
  internal::CommitDataRequest_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DataSourceConfigDataView {
 public:
  DataSourceConfigDataView() {}

  DataSourceConfigDataView(
      internal::DataSourceConfig_Data* data,
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
  inline void GetTraceConfigDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTraceConfig(UserType* output) {
    auto* pointer = data_->trace_config.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  uint32_t target_buffer() const {
    return data_->target_buffer;
  }
 private:
  internal::DataSourceConfig_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProducerHost_CommitData_ParamsDataView {
 public:
  ProducerHost_CommitData_ParamsDataView() {}

  ProducerHost_CommitData_ParamsDataView(
      internal::ProducerHost_CommitData_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataRequestDataView(
      CommitDataRequestDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDataRequest(UserType* output) {
    auto* pointer = data_->data_request.Get();
    return mojo::internal::Deserialize<::tracing::mojom::CommitDataRequestDataView>(
        pointer, output, context_);
  }
 private:
  internal::ProducerHost_CommitData_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProducerClient_OnTracingStart_ParamsDataView {
 public:
  ProducerClient_OnTracingStart_ParamsDataView() {}

  ProducerClient_OnTracingStart_ParamsDataView(
      internal::ProducerClient_OnTracingStart_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedSharedBufferHandle TakeSharedMemory() {
    mojo::ScopedSharedBufferHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedSharedBufferHandle>(
            &data_->shared_memory, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ProducerClient_OnTracingStart_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProducerClient_CreateDataSourceInstance_ParamsDataView {
 public:
  ProducerClient_CreateDataSourceInstance_ParamsDataView() {}

  ProducerClient_CreateDataSourceInstance_ParamsDataView(
      internal::ProducerClient_CreateDataSourceInstance_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t id() const {
    return data_->id;
  }
  inline void GetDataSourceConfigDataView(
      DataSourceConfigDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDataSourceConfig(UserType* output) {
    auto* pointer = data_->data_source_config.Get();
    return mojo::internal::Deserialize<::tracing::mojom::DataSourceConfigDataView>(
        pointer, output, context_);
  }
 private:
  internal::ProducerClient_CreateDataSourceInstance_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProducerClient_TearDownDataSourceInstance_ParamsDataView {
 public:
  ProducerClient_TearDownDataSourceInstance_ParamsDataView() {}

  ProducerClient_TearDownDataSourceInstance_ParamsDataView(
      internal::ProducerClient_TearDownDataSourceInstance_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t id() const {
    return data_->id;
  }
 private:
  internal::ProducerClient_TearDownDataSourceInstance_Params_Data* data_ = nullptr;
};

class ProducerClient_Flush_ParamsDataView {
 public:
  ProducerClient_Flush_ParamsDataView() {}

  ProducerClient_Flush_ParamsDataView(
      internal::ProducerClient_Flush_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t flush_request_id() const {
    return data_->flush_request_id;
  }
  inline void GetDataSourceIdsDataView(
      mojo::ArrayDataView<uint64_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDataSourceIds(UserType* output) {
    auto* pointer = data_->data_source_ids.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint64_t>>(
        pointer, output, context_);
  }
 private:
  internal::ProducerClient_Flush_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PerfettoService_ConnectToProducerHost_ParamsDataView {
 public:
  PerfettoService_ConnectToProducerHost_ParamsDataView() {}

  PerfettoService_ConnectToProducerHost_ParamsDataView(
      internal::PerfettoService_ConnectToProducerHost_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeProducerClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::tracing::mojom::ProducerClientPtrDataView>(
            &data_->producer_client, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeProducerHost() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::tracing::mojom::ProducerHostRequestDataView>(
            &data_->producer_host, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::PerfettoService_ConnectToProducerHost_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace tracing

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::tracing::mojom::ChunksToMoveDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::tracing::mojom::ChunksToMoveDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::tracing::mojom::internal::ChunksToMove_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->page = CallWithContext(Traits::page, input, custom_context);
    (*output)->chunk = CallWithContext(Traits::chunk, input, custom_context);
    (*output)->target_buffer = CallWithContext(Traits::target_buffer, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::tracing::mojom::internal::ChunksToMove_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::tracing::mojom::ChunksToMoveDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::tracing::mojom::ChunkPatchDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::tracing::mojom::ChunkPatchDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::tracing::mojom::internal::ChunkPatch_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->offset = CallWithContext(Traits::offset, input, custom_context);
    decltype(CallWithContext(Traits::data, input, custom_context)) in_data = CallWithContext(Traits::data, input, custom_context);
    typename decltype((*output)->data)::BaseType::BufferWriter
        data_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_data, buffer, &data_writer, context);
    (*output)->data.Set(
        data_writer.is_null() ? nullptr : data_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null data in ChunkPatch struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::tracing::mojom::internal::ChunkPatch_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::tracing::mojom::ChunkPatchDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::tracing::mojom::ChunksToPatchDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::tracing::mojom::ChunksToPatchDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::tracing::mojom::internal::ChunksToPatch_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->target_buffer = CallWithContext(Traits::target_buffer, input, custom_context);
    (*output)->writer_id = CallWithContext(Traits::writer_id, input, custom_context);
    (*output)->chunk_id = CallWithContext(Traits::chunk_id, input, custom_context);
    decltype(CallWithContext(Traits::patches, input, custom_context)) in_patches = CallWithContext(Traits::patches, input, custom_context);
    typename decltype((*output)->patches)::BaseType::BufferWriter
        patches_writer;
    const mojo::internal::ContainerValidateParams patches_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::tracing::mojom::ChunkPatchDataView>>(
        in_patches, buffer, &patches_writer, &patches_validate_params,
        context);
    (*output)->patches.Set(
        patches_writer.is_null() ? nullptr : patches_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->patches.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null patches in ChunksToPatch struct");
    (*output)->has_more_patches = CallWithContext(Traits::has_more_patches, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::tracing::mojom::internal::ChunksToPatch_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::tracing::mojom::ChunksToPatchDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::tracing::mojom::CommitDataRequestDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::tracing::mojom::CommitDataRequestDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::tracing::mojom::internal::CommitDataRequest_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::chunks_to_move, input, custom_context)) in_chunks_to_move = CallWithContext(Traits::chunks_to_move, input, custom_context);
    typename decltype((*output)->chunks_to_move)::BaseType::BufferWriter
        chunks_to_move_writer;
    const mojo::internal::ContainerValidateParams chunks_to_move_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::tracing::mojom::ChunksToMoveDataView>>(
        in_chunks_to_move, buffer, &chunks_to_move_writer, &chunks_to_move_validate_params,
        context);
    (*output)->chunks_to_move.Set(
        chunks_to_move_writer.is_null() ? nullptr : chunks_to_move_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->chunks_to_move.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null chunks_to_move in CommitDataRequest struct");
    decltype(CallWithContext(Traits::chunks_to_patch, input, custom_context)) in_chunks_to_patch = CallWithContext(Traits::chunks_to_patch, input, custom_context);
    typename decltype((*output)->chunks_to_patch)::BaseType::BufferWriter
        chunks_to_patch_writer;
    const mojo::internal::ContainerValidateParams chunks_to_patch_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::tracing::mojom::ChunksToPatchDataView>>(
        in_chunks_to_patch, buffer, &chunks_to_patch_writer, &chunks_to_patch_validate_params,
        context);
    (*output)->chunks_to_patch.Set(
        chunks_to_patch_writer.is_null() ? nullptr : chunks_to_patch_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->chunks_to_patch.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null chunks_to_patch in CommitDataRequest struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::tracing::mojom::internal::CommitDataRequest_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::tracing::mojom::CommitDataRequestDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::tracing::mojom::DataSourceConfigDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::tracing::mojom::DataSourceConfigDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::tracing::mojom::internal::DataSourceConfig_Data::BufferWriter* output,
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
        "null name in DataSourceConfig struct");
    decltype(CallWithContext(Traits::trace_config, input, custom_context)) in_trace_config = CallWithContext(Traits::trace_config, input, custom_context);
    typename decltype((*output)->trace_config)::BaseType::BufferWriter
        trace_config_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_trace_config, buffer, &trace_config_writer, context);
    (*output)->trace_config.Set(
        trace_config_writer.is_null() ? nullptr : trace_config_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->trace_config.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null trace_config in DataSourceConfig struct");
    (*output)->target_buffer = CallWithContext(Traits::target_buffer, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::tracing::mojom::internal::DataSourceConfig_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::tracing::mojom::DataSourceConfigDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace tracing {
namespace mojom {



inline void ChunkPatchDataView::GetDataDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->data.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ChunksToPatchDataView::GetPatchesDataView(
    mojo::ArrayDataView<ChunkPatchDataView>* output) {
  auto pointer = data_->patches.Get();
  *output = mojo::ArrayDataView<ChunkPatchDataView>(pointer, context_);
}


inline void CommitDataRequestDataView::GetChunksToMoveDataView(
    mojo::ArrayDataView<ChunksToMoveDataView>* output) {
  auto pointer = data_->chunks_to_move.Get();
  *output = mojo::ArrayDataView<ChunksToMoveDataView>(pointer, context_);
}
inline void CommitDataRequestDataView::GetChunksToPatchDataView(
    mojo::ArrayDataView<ChunksToPatchDataView>* output) {
  auto pointer = data_->chunks_to_patch.Get();
  *output = mojo::ArrayDataView<ChunksToPatchDataView>(pointer, context_);
}


inline void DataSourceConfigDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void DataSourceConfigDataView::GetTraceConfigDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->trace_config.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ProducerHost_CommitData_ParamsDataView::GetDataRequestDataView(
    CommitDataRequestDataView* output) {
  auto pointer = data_->data_request.Get();
  *output = CommitDataRequestDataView(pointer, context_);
}




inline void ProducerClient_CreateDataSourceInstance_ParamsDataView::GetDataSourceConfigDataView(
    DataSourceConfigDataView* output) {
  auto pointer = data_->data_source_config.Get();
  *output = DataSourceConfigDataView(pointer, context_);
}




inline void ProducerClient_Flush_ParamsDataView::GetDataSourceIdsDataView(
    mojo::ArrayDataView<uint64_t>* output) {
  auto pointer = data_->data_source_ids.Get();
  *output = mojo::ArrayDataView<uint64_t>(pointer, context_);
}





}  // namespace mojom
}  // namespace tracing

#endif  // SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_SHARED_H_
