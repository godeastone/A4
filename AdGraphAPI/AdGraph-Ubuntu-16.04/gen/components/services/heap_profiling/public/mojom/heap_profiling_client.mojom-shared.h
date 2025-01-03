// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_CLIENT_MOJOM_SHARED_H_
#define COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_CLIENT_MOJOM_SHARED_H_

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
#include "components/services/heap_profiling/public/mojom/heap_profiling_client.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace heap_profiling {
namespace mojom {
class ProfilingParamsDataView;



}  // namespace mojom
}  // namespace heap_profiling

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::heap_profiling::mojom::ProfilingParamsDataView> {
  using Data = ::heap_profiling::mojom::internal::ProfilingParams_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace heap_profiling {
namespace mojom {

enum class StackMode : int32_t {
  NATIVE_WITH_THREAD_NAMES,
  NATIVE_WITHOUT_THREAD_NAMES,
  PSEUDO,
  MIXED,
  kMinValue = 0,
  kMaxValue = 3,
};

inline std::ostream& operator<<(std::ostream& os, StackMode value) {
  switch(value) {
    case StackMode::NATIVE_WITH_THREAD_NAMES:
      return os << "StackMode::NATIVE_WITH_THREAD_NAMES";
    case StackMode::NATIVE_WITHOUT_THREAD_NAMES:
      return os << "StackMode::NATIVE_WITHOUT_THREAD_NAMES";
    case StackMode::PSEUDO:
      return os << "StackMode::PSEUDO";
    case StackMode::MIXED:
      return os << "StackMode::MIXED";
    default:
      return os << "Unknown StackMode value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(StackMode value) {
  return internal::StackMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class ProfilingClientInterfaceBase {};

using ProfilingClientPtrDataView =
    mojo::InterfacePtrDataView<ProfilingClientInterfaceBase>;
using ProfilingClientRequestDataView =
    mojo::InterfaceRequestDataView<ProfilingClientInterfaceBase>;
using ProfilingClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ProfilingClientInterfaceBase>;
using ProfilingClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ProfilingClientInterfaceBase>;
class ProfilingParamsDataView {
 public:
  ProfilingParamsDataView() {}

  ProfilingParamsDataView(
      internal::ProfilingParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedHandle TakeSenderPipe() {
    mojo::ScopedHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedHandle>(
            &data_->sender_pipe, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStackMode(UserType* output) const {
    auto data_value = data_->stack_mode;
    return mojo::internal::Deserialize<::heap_profiling::mojom::StackMode>(
        data_value, output);
  }

  StackMode stack_mode() const {
    return static_cast<StackMode>(data_->stack_mode);
  }
  uint32_t sampling_rate() const {
    return data_->sampling_rate;
  }
 private:
  internal::ProfilingParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProfilingClient_StartProfiling_ParamsDataView {
 public:
  ProfilingClient_StartProfiling_ParamsDataView() {}

  ProfilingClient_StartProfiling_ParamsDataView(
      internal::ProfilingClient_StartProfiling_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParamsDataView(
      ProfilingParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::heap_profiling::mojom::ProfilingParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::ProfilingClient_StartProfiling_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProfilingClient_FlushMemlogPipe_ParamsDataView {
 public:
  ProfilingClient_FlushMemlogPipe_ParamsDataView() {}

  ProfilingClient_FlushMemlogPipe_ParamsDataView(
      internal::ProfilingClient_FlushMemlogPipe_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t barrier_id() const {
    return data_->barrier_id;
  }
 private:
  internal::ProfilingClient_FlushMemlogPipe_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace heap_profiling

namespace std {

template <>
struct hash<::heap_profiling::mojom::StackMode>
    : public mojo::internal::EnumHashImpl<::heap_profiling::mojom::StackMode> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::heap_profiling::mojom::StackMode, ::heap_profiling::mojom::StackMode> {
  static ::heap_profiling::mojom::StackMode ToMojom(::heap_profiling::mojom::StackMode input) { return input; }
  static bool FromMojom(::heap_profiling::mojom::StackMode input, ::heap_profiling::mojom::StackMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::heap_profiling::mojom::StackMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::heap_profiling::mojom::StackMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::heap_profiling::mojom::StackMode>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::heap_profiling::mojom::ProfilingParamsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::heap_profiling::mojom::ProfilingParamsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::heap_profiling::mojom::internal::ProfilingParams_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::sender_pipe, input, custom_context)) in_sender_pipe = CallWithContext(Traits::sender_pipe, input, custom_context);
    mojo::internal::Serialize<mojo::ScopedHandle>(
        in_sender_pipe, &(*output)->sender_pipe, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->sender_pipe),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid sender_pipe in ProfilingParams struct");
    mojo::internal::Serialize<::heap_profiling::mojom::StackMode>(
        CallWithContext(Traits::stack_mode, input, custom_context), &(*output)->stack_mode);
    (*output)->sampling_rate = CallWithContext(Traits::sampling_rate, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::heap_profiling::mojom::internal::ProfilingParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::heap_profiling::mojom::ProfilingParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace heap_profiling {
namespace mojom {



inline void ProfilingClient_StartProfiling_ParamsDataView::GetParamsDataView(
    ProfilingParamsDataView* output) {
  auto pointer = data_->params.Get();
  *output = ProfilingParamsDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace heap_profiling

#endif  // COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_CLIENT_MOJOM_SHARED_H_
