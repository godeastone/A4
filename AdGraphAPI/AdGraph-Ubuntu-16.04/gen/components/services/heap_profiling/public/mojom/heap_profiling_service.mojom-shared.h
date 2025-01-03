// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_SERVICE_MOJOM_SHARED_H_
#define COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_SERVICE_MOJOM_SHARED_H_

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
#include "components/services/heap_profiling/public/mojom/heap_profiling_service.mojom-shared-internal.h"
#include "components/services/heap_profiling/public/mojom/heap_profiling_client.mojom-shared.h"
#include "mojo/public/mojom/base/process_id.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace heap_profiling {
namespace mojom {


}  // namespace mojom
}  // namespace heap_profiling

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace heap_profiling {
namespace mojom {

enum class ProcessType : int32_t {
  OTHER = 0,
  BROWSER = 1,
  RENDERER = 2,
  GPU = 3,
  LAST = ProcessType::GPU,
  kMinValue = 0,
  kMaxValue = 3,
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
      return os << "ProcessType::{GPU, LAST}";
    default:
      return os << "Unknown ProcessType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(ProcessType value) {
  return internal::ProcessType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class ProfilingServiceInterfaceBase {};

using ProfilingServicePtrDataView =
    mojo::InterfacePtrDataView<ProfilingServiceInterfaceBase>;
using ProfilingServiceRequestDataView =
    mojo::InterfaceRequestDataView<ProfilingServiceInterfaceBase>;
using ProfilingServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ProfilingServiceInterfaceBase>;
using ProfilingServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ProfilingServiceInterfaceBase>;
class ProfilingService_AddProfilingClient_ParamsDataView {
 public:
  ProfilingService_AddProfilingClient_ParamsDataView() {}

  ProfilingService_AddProfilingClient_ParamsDataView(
      internal::ProfilingService_AddProfilingClient_Params_Data* data,
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
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::heap_profiling::mojom::ProfilingClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
  mojo::ScopedHandle TakeMemlogPipeReceiver() {
    mojo::ScopedHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedHandle>(
            &data_->memlog_pipe_receiver, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProcessType(UserType* output) const {
    auto data_value = data_->process_type;
    return mojo::internal::Deserialize<::heap_profiling::mojom::ProcessType>(
        data_value, output);
  }

  ProcessType process_type() const {
    return static_cast<ProcessType>(data_->process_type);
  }
  inline void GetParamsDataView(
      ::heap_profiling::mojom::ProfilingParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::heap_profiling::mojom::ProfilingParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::ProfilingService_AddProfilingClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProfilingService_SetKeepSmallAllocations_ParamsDataView {
 public:
  ProfilingService_SetKeepSmallAllocations_ParamsDataView() {}

  ProfilingService_SetKeepSmallAllocations_ParamsDataView(
      internal::ProfilingService_SetKeepSmallAllocations_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool keep_small_allocations() const {
    return data_->keep_small_allocations;
  }
 private:
  internal::ProfilingService_SetKeepSmallAllocations_Params_Data* data_ = nullptr;
};

class ProfilingService_GetProfiledPids_ParamsDataView {
 public:
  ProfilingService_GetProfiledPids_ParamsDataView() {}

  ProfilingService_GetProfiledPids_ParamsDataView(
      internal::ProfilingService_GetProfiledPids_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ProfilingService_GetProfiledPids_Params_Data* data_ = nullptr;
};

class ProfilingService_GetProfiledPids_ResponseParamsDataView {
 public:
  ProfilingService_GetProfiledPids_ResponseParamsDataView() {}

  ProfilingService_GetProfiledPids_ResponseParamsDataView(
      internal::ProfilingService_GetProfiledPids_ResponseParams_Data* data,
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
  internal::ProfilingService_GetProfiledPids_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace heap_profiling

namespace std {

template <>
struct hash<::heap_profiling::mojom::ProcessType>
    : public mojo::internal::EnumHashImpl<::heap_profiling::mojom::ProcessType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::heap_profiling::mojom::ProcessType, ::heap_profiling::mojom::ProcessType> {
  static ::heap_profiling::mojom::ProcessType ToMojom(::heap_profiling::mojom::ProcessType input) { return input; }
  static bool FromMojom(::heap_profiling::mojom::ProcessType input, ::heap_profiling::mojom::ProcessType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::heap_profiling::mojom::ProcessType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::heap_profiling::mojom::ProcessType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::heap_profiling::mojom::ProcessType>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace heap_profiling {
namespace mojom {

inline void ProfilingService_AddProfilingClient_ParamsDataView::GetPidDataView(
    ::mojo_base::mojom::ProcessIdDataView* output) {
  auto pointer = data_->pid.Get();
  *output = ::mojo_base::mojom::ProcessIdDataView(pointer, context_);
}
inline void ProfilingService_AddProfilingClient_ParamsDataView::GetParamsDataView(
    ::heap_profiling::mojom::ProfilingParamsDataView* output) {
  auto pointer = data_->params.Get();
  *output = ::heap_profiling::mojom::ProfilingParamsDataView(pointer, context_);
}






inline void ProfilingService_GetProfiledPids_ResponseParamsDataView::GetPidsDataView(
    mojo::ArrayDataView<::mojo_base::mojom::ProcessIdDataView>* output) {
  auto pointer = data_->pids.Get();
  *output = mojo::ArrayDataView<::mojo_base::mojom::ProcessIdDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace heap_profiling

#endif  // COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_SERVICE_MOJOM_SHARED_H_
