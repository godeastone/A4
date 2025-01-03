// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_AUDIO_PUBLIC_MOJOM_DEBUG_RECORDING_MOJOM_SHARED_H_
#define SERVICES_AUDIO_PUBLIC_MOJOM_DEBUG_RECORDING_MOJOM_SHARED_H_

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
#include "services/audio/public/mojom/debug_recording.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file.mojom-shared.h"
#include "mojo/public/mojom/base/file_path.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace audio {
namespace mojom {


}  // namespace mojom
}  // namespace audio

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace audio {
namespace mojom {

enum class DebugRecordingStreamType : int32_t {
  kInput = 0,
  kOutput = 1,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, DebugRecordingStreamType value) {
  switch(value) {
    case DebugRecordingStreamType::kInput:
      return os << "DebugRecordingStreamType::kInput";
    case DebugRecordingStreamType::kOutput:
      return os << "DebugRecordingStreamType::kOutput";
    default:
      return os << "Unknown DebugRecordingStreamType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(DebugRecordingStreamType value) {
  return internal::DebugRecordingStreamType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class DebugRecordingFileProviderInterfaceBase {};

using DebugRecordingFileProviderPtrDataView =
    mojo::InterfacePtrDataView<DebugRecordingFileProviderInterfaceBase>;
using DebugRecordingFileProviderRequestDataView =
    mojo::InterfaceRequestDataView<DebugRecordingFileProviderInterfaceBase>;
using DebugRecordingFileProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<DebugRecordingFileProviderInterfaceBase>;
using DebugRecordingFileProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<DebugRecordingFileProviderInterfaceBase>;
class DebugRecordingInterfaceBase {};

using DebugRecordingPtrDataView =
    mojo::InterfacePtrDataView<DebugRecordingInterfaceBase>;
using DebugRecordingRequestDataView =
    mojo::InterfaceRequestDataView<DebugRecordingInterfaceBase>;
using DebugRecordingAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<DebugRecordingInterfaceBase>;
using DebugRecordingAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<DebugRecordingInterfaceBase>;
class DebugRecordingFileProvider_CreateWavFile_ParamsDataView {
 public:
  DebugRecordingFileProvider_CreateWavFile_ParamsDataView() {}

  DebugRecordingFileProvider_CreateWavFile_ParamsDataView(
      internal::DebugRecordingFileProvider_CreateWavFile_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStreamType(UserType* output) const {
    auto data_value = data_->stream_type;
    return mojo::internal::Deserialize<::audio::mojom::DebugRecordingStreamType>(
        data_value, output);
  }

  DebugRecordingStreamType stream_type() const {
    return static_cast<DebugRecordingStreamType>(data_->stream_type);
  }
  uint32_t id() const {
    return data_->id;
  }
 private:
  internal::DebugRecordingFileProvider_CreateWavFile_Params_Data* data_ = nullptr;
};

class DebugRecordingFileProvider_CreateWavFile_ResponseParamsDataView {
 public:
  DebugRecordingFileProvider_CreateWavFile_ResponseParamsDataView() {}

  DebugRecordingFileProvider_CreateWavFile_ResponseParamsDataView(
      internal::DebugRecordingFileProvider_CreateWavFile_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFileDataView(
      ::mojo_base::mojom::FileDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFile(UserType* output) {
    auto* pointer = data_->file.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FileDataView>(
        pointer, output, context_);
  }
 private:
  internal::DebugRecordingFileProvider_CreateWavFile_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DebugRecording_Enable_ParamsDataView {
 public:
  DebugRecording_Enable_ParamsDataView() {}

  DebugRecording_Enable_ParamsDataView(
      internal::DebugRecording_Enable_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeFileProvider() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::audio::mojom::DebugRecordingFileProviderPtrDataView>(
            &data_->file_provider, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::DebugRecording_Enable_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace audio

namespace std {

template <>
struct hash<::audio::mojom::DebugRecordingStreamType>
    : public mojo::internal::EnumHashImpl<::audio::mojom::DebugRecordingStreamType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::audio::mojom::DebugRecordingStreamType, ::audio::mojom::DebugRecordingStreamType> {
  static ::audio::mojom::DebugRecordingStreamType ToMojom(::audio::mojom::DebugRecordingStreamType input) { return input; }
  static bool FromMojom(::audio::mojom::DebugRecordingStreamType input, ::audio::mojom::DebugRecordingStreamType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::audio::mojom::DebugRecordingStreamType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::audio::mojom::DebugRecordingStreamType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::audio::mojom::DebugRecordingStreamType>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace audio {
namespace mojom {



inline void DebugRecordingFileProvider_CreateWavFile_ResponseParamsDataView::GetFileDataView(
    ::mojo_base::mojom::FileDataView* output) {
  auto pointer = data_->file.Get();
  *output = ::mojo_base::mojom::FileDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace audio

#endif  // SERVICES_AUDIO_PUBLIC_MOJOM_DEBUG_RECORDING_MOJOM_SHARED_H_
