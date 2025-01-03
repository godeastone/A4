// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_TRACING_PUBLIC_MOJOM_TRACING_MOJOM_SHARED_H_
#define SERVICES_TRACING_PUBLIC_MOJOM_TRACING_MOJOM_SHARED_H_

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
#include "services/tracing/public/mojom/tracing.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "mojo/public/mojom/base/values.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace tracing {
namespace mojom {


}  // namespace mojom
}  // namespace tracing

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace tracing {
namespace mojom {

enum class TraceDataType : int32_t {
  ARRAY,
  OBJECT,
  STRING,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, TraceDataType value) {
  switch(value) {
    case TraceDataType::ARRAY:
      return os << "TraceDataType::ARRAY";
    case TraceDataType::OBJECT:
      return os << "TraceDataType::OBJECT";
    case TraceDataType::STRING:
      return os << "TraceDataType::STRING";
    default:
      return os << "Unknown TraceDataType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(TraceDataType value) {
  return internal::TraceDataType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class AgentRegistryInterfaceBase {};

using AgentRegistryPtrDataView =
    mojo::InterfacePtrDataView<AgentRegistryInterfaceBase>;
using AgentRegistryRequestDataView =
    mojo::InterfaceRequestDataView<AgentRegistryInterfaceBase>;
using AgentRegistryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AgentRegistryInterfaceBase>;
using AgentRegistryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AgentRegistryInterfaceBase>;
class AgentInterfaceBase {};

using AgentPtrDataView =
    mojo::InterfacePtrDataView<AgentInterfaceBase>;
using AgentRequestDataView =
    mojo::InterfaceRequestDataView<AgentInterfaceBase>;
using AgentAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AgentInterfaceBase>;
using AgentAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AgentInterfaceBase>;
class RecorderInterfaceBase {};

using RecorderPtrDataView =
    mojo::InterfacePtrDataView<RecorderInterfaceBase>;
using RecorderRequestDataView =
    mojo::InterfaceRequestDataView<RecorderInterfaceBase>;
using RecorderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<RecorderInterfaceBase>;
using RecorderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<RecorderInterfaceBase>;
class CoordinatorInterfaceBase {};

using CoordinatorPtrDataView =
    mojo::InterfacePtrDataView<CoordinatorInterfaceBase>;
using CoordinatorRequestDataView =
    mojo::InterfaceRequestDataView<CoordinatorInterfaceBase>;
using CoordinatorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CoordinatorInterfaceBase>;
using CoordinatorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CoordinatorInterfaceBase>;
class AgentRegistry_RegisterAgent_ParamsDataView {
 public:
  AgentRegistry_RegisterAgent_ParamsDataView() {}

  AgentRegistry_RegisterAgent_ParamsDataView(
      internal::AgentRegistry_RegisterAgent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeAgent() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::tracing::mojom::AgentPtrDataView>(
            &data_->agent, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetLabelDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLabel(UserType* output) {
    auto* pointer = data_->label.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::tracing::mojom::TraceDataType>(
        data_value, output);
  }

  TraceDataType type() const {
    return static_cast<TraceDataType>(data_->type);
  }
  bool supports_explicit_clock_sync_() const {
    return data_->supports_explicit_clock_sync_;
  }
 private:
  internal::AgentRegistry_RegisterAgent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Agent_StartTracing_ParamsDataView {
 public:
  Agent_StartTracing_ParamsDataView() {}

  Agent_StartTracing_ParamsDataView(
      internal::Agent_StartTracing_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetConfigDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadConfig(UserType* output) {
    auto* pointer = data_->config.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetCoordinatorTimeDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCoordinatorTime(UserType* output) {
    auto* pointer = data_->coordinator_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
 private:
  internal::Agent_StartTracing_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Agent_StartTracing_ResponseParamsDataView {
 public:
  Agent_StartTracing_ResponseParamsDataView() {}

  Agent_StartTracing_ResponseParamsDataView(
      internal::Agent_StartTracing_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::Agent_StartTracing_ResponseParams_Data* data_ = nullptr;
};

class Agent_StopAndFlush_ParamsDataView {
 public:
  Agent_StopAndFlush_ParamsDataView() {}

  Agent_StopAndFlush_ParamsDataView(
      internal::Agent_StopAndFlush_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRecorder() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::tracing::mojom::RecorderPtrDataView>(
            &data_->recorder, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Agent_StopAndFlush_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Agent_RequestClockSyncMarker_ParamsDataView {
 public:
  Agent_RequestClockSyncMarker_ParamsDataView() {}

  Agent_RequestClockSyncMarker_ParamsDataView(
      internal::Agent_RequestClockSyncMarker_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSyncIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSyncId(UserType* output) {
    auto* pointer = data_->sync_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Agent_RequestClockSyncMarker_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Agent_RequestClockSyncMarker_ResponseParamsDataView {
 public:
  Agent_RequestClockSyncMarker_ResponseParamsDataView() {}

  Agent_RequestClockSyncMarker_ResponseParamsDataView(
      internal::Agent_RequestClockSyncMarker_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIssueTsDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIssueTs(UserType* output) {
    auto* pointer = data_->issue_ts.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
  inline void GetIssueEndTsDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIssueEndTs(UserType* output) {
    auto* pointer = data_->issue_end_ts.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
 private:
  internal::Agent_RequestClockSyncMarker_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Agent_RequestBufferStatus_ParamsDataView {
 public:
  Agent_RequestBufferStatus_ParamsDataView() {}

  Agent_RequestBufferStatus_ParamsDataView(
      internal::Agent_RequestBufferStatus_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Agent_RequestBufferStatus_Params_Data* data_ = nullptr;
};

class Agent_RequestBufferStatus_ResponseParamsDataView {
 public:
  Agent_RequestBufferStatus_ResponseParamsDataView() {}

  Agent_RequestBufferStatus_ResponseParamsDataView(
      internal::Agent_RequestBufferStatus_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t capacity() const {
    return data_->capacity;
  }
  uint32_t count() const {
    return data_->count;
  }
 private:
  internal::Agent_RequestBufferStatus_ResponseParams_Data* data_ = nullptr;
};

class Agent_GetCategories_ParamsDataView {
 public:
  Agent_GetCategories_ParamsDataView() {}

  Agent_GetCategories_ParamsDataView(
      internal::Agent_GetCategories_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Agent_GetCategories_Params_Data* data_ = nullptr;
};

class Agent_GetCategories_ResponseParamsDataView {
 public:
  Agent_GetCategories_ResponseParamsDataView() {}

  Agent_GetCategories_ResponseParamsDataView(
      internal::Agent_GetCategories_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCategoriesDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCategories(UserType* output) {
    auto* pointer = data_->categories.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Agent_GetCategories_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Recorder_AddChunk_ParamsDataView {
 public:
  Recorder_AddChunk_ParamsDataView() {}

  Recorder_AddChunk_ParamsDataView(
      internal::Recorder_AddChunk_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetChunkDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadChunk(UserType* output) {
    auto* pointer = data_->chunk.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Recorder_AddChunk_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Recorder_AddMetadata_ParamsDataView {
 public:
  Recorder_AddMetadata_ParamsDataView() {}

  Recorder_AddMetadata_ParamsDataView(
      internal::Recorder_AddMetadata_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMetadataDataView(
      ::mojo_base::mojom::DictionaryValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMetadata(UserType* output) {
    auto* pointer = data_->metadata.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::DictionaryValueDataView>(
        pointer, output, context_);
  }
 private:
  internal::Recorder_AddMetadata_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Coordinator_StartTracing_ParamsDataView {
 public:
  Coordinator_StartTracing_ParamsDataView() {}

  Coordinator_StartTracing_ParamsDataView(
      internal::Coordinator_StartTracing_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetConfigDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadConfig(UserType* output) {
    auto* pointer = data_->config.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Coordinator_StartTracing_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Coordinator_StartTracing_ResponseParamsDataView {
 public:
  Coordinator_StartTracing_ResponseParamsDataView() {}

  Coordinator_StartTracing_ResponseParamsDataView(
      internal::Coordinator_StartTracing_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::Coordinator_StartTracing_ResponseParams_Data* data_ = nullptr;
};

class Coordinator_StopAndFlush_ParamsDataView {
 public:
  Coordinator_StopAndFlush_ParamsDataView() {}

  Coordinator_StopAndFlush_ParamsDataView(
      internal::Coordinator_StopAndFlush_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedDataPipeProducerHandle TakeStream() {
    mojo::ScopedDataPipeProducerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeProducerHandle>(
            &data_->stream, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Coordinator_StopAndFlush_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Coordinator_StopAndFlush_ResponseParamsDataView {
 public:
  Coordinator_StopAndFlush_ResponseParamsDataView() {}

  Coordinator_StopAndFlush_ResponseParamsDataView(
      internal::Coordinator_StopAndFlush_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMetadataDataView(
      ::mojo_base::mojom::DictionaryValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMetadata(UserType* output) {
    auto* pointer = data_->metadata.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::DictionaryValueDataView>(
        pointer, output, context_);
  }
 private:
  internal::Coordinator_StopAndFlush_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Coordinator_StopAndFlushAgent_ParamsDataView {
 public:
  Coordinator_StopAndFlushAgent_ParamsDataView() {}

  Coordinator_StopAndFlushAgent_ParamsDataView(
      internal::Coordinator_StopAndFlushAgent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedDataPipeProducerHandle TakeStream() {
    mojo::ScopedDataPipeProducerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeProducerHandle>(
            &data_->stream, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetAgentLabelDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAgentLabel(UserType* output) {
    auto* pointer = data_->agent_label.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Coordinator_StopAndFlushAgent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Coordinator_StopAndFlushAgent_ResponseParamsDataView {
 public:
  Coordinator_StopAndFlushAgent_ResponseParamsDataView() {}

  Coordinator_StopAndFlushAgent_ResponseParamsDataView(
      internal::Coordinator_StopAndFlushAgent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMetadataDataView(
      ::mojo_base::mojom::DictionaryValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMetadata(UserType* output) {
    auto* pointer = data_->metadata.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::DictionaryValueDataView>(
        pointer, output, context_);
  }
 private:
  internal::Coordinator_StopAndFlushAgent_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Coordinator_IsTracing_ParamsDataView {
 public:
  Coordinator_IsTracing_ParamsDataView() {}

  Coordinator_IsTracing_ParamsDataView(
      internal::Coordinator_IsTracing_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Coordinator_IsTracing_Params_Data* data_ = nullptr;
};

class Coordinator_IsTracing_ResponseParamsDataView {
 public:
  Coordinator_IsTracing_ResponseParamsDataView() {}

  Coordinator_IsTracing_ResponseParamsDataView(
      internal::Coordinator_IsTracing_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool is_tracing() const {
    return data_->is_tracing;
  }
 private:
  internal::Coordinator_IsTracing_ResponseParams_Data* data_ = nullptr;
};

class Coordinator_RequestBufferUsage_ParamsDataView {
 public:
  Coordinator_RequestBufferUsage_ParamsDataView() {}

  Coordinator_RequestBufferUsage_ParamsDataView(
      internal::Coordinator_RequestBufferUsage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Coordinator_RequestBufferUsage_Params_Data* data_ = nullptr;
};

class Coordinator_RequestBufferUsage_ResponseParamsDataView {
 public:
  Coordinator_RequestBufferUsage_ResponseParamsDataView() {}

  Coordinator_RequestBufferUsage_ResponseParamsDataView(
      internal::Coordinator_RequestBufferUsage_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  float percent_full() const {
    return data_->percent_full;
  }
  uint32_t approximate_count() const {
    return data_->approximate_count;
  }
 private:
  internal::Coordinator_RequestBufferUsage_ResponseParams_Data* data_ = nullptr;
};

class Coordinator_GetCategories_ParamsDataView {
 public:
  Coordinator_GetCategories_ParamsDataView() {}

  Coordinator_GetCategories_ParamsDataView(
      internal::Coordinator_GetCategories_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Coordinator_GetCategories_Params_Data* data_ = nullptr;
};

class Coordinator_GetCategories_ResponseParamsDataView {
 public:
  Coordinator_GetCategories_ResponseParamsDataView() {}

  Coordinator_GetCategories_ResponseParamsDataView(
      internal::Coordinator_GetCategories_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  inline void GetCategoriesDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCategories(UserType* output) {
    auto* pointer = data_->categories.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Coordinator_GetCategories_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace tracing

namespace std {

template <>
struct hash<::tracing::mojom::TraceDataType>
    : public mojo::internal::EnumHashImpl<::tracing::mojom::TraceDataType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::tracing::mojom::TraceDataType, ::tracing::mojom::TraceDataType> {
  static ::tracing::mojom::TraceDataType ToMojom(::tracing::mojom::TraceDataType input) { return input; }
  static bool FromMojom(::tracing::mojom::TraceDataType input, ::tracing::mojom::TraceDataType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::tracing::mojom::TraceDataType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::tracing::mojom::TraceDataType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::tracing::mojom::TraceDataType>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace tracing {
namespace mojom {

inline void AgentRegistry_RegisterAgent_ParamsDataView::GetLabelDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->label.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void Agent_StartTracing_ParamsDataView::GetConfigDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->config.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void Agent_StartTracing_ParamsDataView::GetCoordinatorTimeDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->coordinator_time.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}






inline void Agent_RequestClockSyncMarker_ParamsDataView::GetSyncIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->sync_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void Agent_RequestClockSyncMarker_ResponseParamsDataView::GetIssueTsDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->issue_ts.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}
inline void Agent_RequestClockSyncMarker_ResponseParamsDataView::GetIssueEndTsDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->issue_end_ts.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}








inline void Agent_GetCategories_ResponseParamsDataView::GetCategoriesDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->categories.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void Recorder_AddChunk_ParamsDataView::GetChunkDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->chunk.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void Recorder_AddMetadata_ParamsDataView::GetMetadataDataView(
    ::mojo_base::mojom::DictionaryValueDataView* output) {
  auto pointer = data_->metadata.Get();
  *output = ::mojo_base::mojom::DictionaryValueDataView(pointer, context_);
}


inline void Coordinator_StartTracing_ParamsDataView::GetConfigDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->config.Get();
  *output = mojo::StringDataView(pointer, context_);
}






inline void Coordinator_StopAndFlush_ResponseParamsDataView::GetMetadataDataView(
    ::mojo_base::mojom::DictionaryValueDataView* output) {
  auto pointer = data_->metadata.Get();
  *output = ::mojo_base::mojom::DictionaryValueDataView(pointer, context_);
}


inline void Coordinator_StopAndFlushAgent_ParamsDataView::GetAgentLabelDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->agent_label.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void Coordinator_StopAndFlushAgent_ResponseParamsDataView::GetMetadataDataView(
    ::mojo_base::mojom::DictionaryValueDataView* output) {
  auto pointer = data_->metadata.Get();
  *output = ::mojo_base::mojom::DictionaryValueDataView(pointer, context_);
}












inline void Coordinator_GetCategories_ResponseParamsDataView::GetCategoriesDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->categories.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace tracing

#endif  // SERVICES_TRACING_PUBLIC_MOJOM_TRACING_MOJOM_SHARED_H_
