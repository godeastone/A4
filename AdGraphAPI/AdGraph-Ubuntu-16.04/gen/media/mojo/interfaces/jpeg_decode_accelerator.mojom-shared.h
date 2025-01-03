// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_JPEG_DECODE_ACCELERATOR_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_JPEG_DECODE_ACCELERATOR_MOJOM_SHARED_H_

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
#include "media/mojo/interfaces/jpeg_decode_accelerator.mojom-shared-internal.h"
#include "media/mojo/interfaces/media_types.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace media {
namespace mojom {
class BitstreamBufferDataView;



}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::media::mojom::BitstreamBufferDataView> {
  using Data = ::media::mojom::internal::BitstreamBuffer_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace media {
namespace mojom {

enum class DecodeError : int32_t {
  NO_ERRORS,
  INVALID_ARGUMENT,
  UNREADABLE_INPUT,
  PARSE_JPEG_FAILED,
  UNSUPPORTED_JPEG,
  PLATFORM_FAILURE,
  kMinValue = 0,
  kMaxValue = 5,
};

inline std::ostream& operator<<(std::ostream& os, DecodeError value) {
  switch(value) {
    case DecodeError::NO_ERRORS:
      return os << "DecodeError::NO_ERRORS";
    case DecodeError::INVALID_ARGUMENT:
      return os << "DecodeError::INVALID_ARGUMENT";
    case DecodeError::UNREADABLE_INPUT:
      return os << "DecodeError::UNREADABLE_INPUT";
    case DecodeError::PARSE_JPEG_FAILED:
      return os << "DecodeError::PARSE_JPEG_FAILED";
    case DecodeError::UNSUPPORTED_JPEG:
      return os << "DecodeError::UNSUPPORTED_JPEG";
    case DecodeError::PLATFORM_FAILURE:
      return os << "DecodeError::PLATFORM_FAILURE";
    default:
      return os << "Unknown DecodeError value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(DecodeError value) {
  return internal::DecodeError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class JpegDecodeAcceleratorInterfaceBase {};

using JpegDecodeAcceleratorPtrDataView =
    mojo::InterfacePtrDataView<JpegDecodeAcceleratorInterfaceBase>;
using JpegDecodeAcceleratorRequestDataView =
    mojo::InterfaceRequestDataView<JpegDecodeAcceleratorInterfaceBase>;
using JpegDecodeAcceleratorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<JpegDecodeAcceleratorInterfaceBase>;
using JpegDecodeAcceleratorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<JpegDecodeAcceleratorInterfaceBase>;
class BitstreamBufferDataView {
 public:
  BitstreamBufferDataView() {}

  BitstreamBufferDataView(
      internal::BitstreamBuffer_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t id() const {
    return data_->id;
  }
  mojo::ScopedSharedBufferHandle TakeMemoryHandle() {
    mojo::ScopedSharedBufferHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedSharedBufferHandle>(
            &data_->memory_handle, &result, context_);
    DCHECK(ret);
    return result;
  }
  uint32_t size() const {
    return data_->size;
  }
  int64_t offset() const {
    return data_->offset;
  }
  inline void GetTimestampDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTimestamp(UserType* output) {
    auto* pointer = data_->timestamp.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetKeyIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyId(UserType* output) {
    auto* pointer = data_->key_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetIvDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIv(UserType* output) {
    auto* pointer = data_->iv.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSubsamplesDataView(
      mojo::ArrayDataView<::media::mojom::SubsampleEntryDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSubsamples(UserType* output) {
    auto* pointer = data_->subsamples.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media::mojom::SubsampleEntryDataView>>(
        pointer, output, context_);
  }
 private:
  internal::BitstreamBuffer_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class JpegDecodeAccelerator_Initialize_ParamsDataView {
 public:
  JpegDecodeAccelerator_Initialize_ParamsDataView() {}

  JpegDecodeAccelerator_Initialize_ParamsDataView(
      internal::JpegDecodeAccelerator_Initialize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::JpegDecodeAccelerator_Initialize_Params_Data* data_ = nullptr;
};

class JpegDecodeAccelerator_Initialize_ResponseParamsDataView {
 public:
  JpegDecodeAccelerator_Initialize_ResponseParamsDataView() {}

  JpegDecodeAccelerator_Initialize_ResponseParamsDataView(
      internal::JpegDecodeAccelerator_Initialize_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::JpegDecodeAccelerator_Initialize_ResponseParams_Data* data_ = nullptr;
};

class JpegDecodeAccelerator_Decode_ParamsDataView {
 public:
  JpegDecodeAccelerator_Decode_ParamsDataView() {}

  JpegDecodeAccelerator_Decode_ParamsDataView(
      internal::JpegDecodeAccelerator_Decode_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInputBufferDataView(
      BitstreamBufferDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInputBuffer(UserType* output) {
    auto* pointer = data_->input_buffer.Get();
    return mojo::internal::Deserialize<::media::mojom::BitstreamBufferDataView>(
        pointer, output, context_);
  }
  inline void GetCodedSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCodedSize(UserType* output) {
    auto* pointer = data_->coded_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  mojo::ScopedSharedBufferHandle TakeOutputHandle() {
    mojo::ScopedSharedBufferHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedSharedBufferHandle>(
            &data_->output_handle, &result, context_);
    DCHECK(ret);
    return result;
  }
  uint32_t output_buffer_size() const {
    return data_->output_buffer_size;
  }
 private:
  internal::JpegDecodeAccelerator_Decode_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class JpegDecodeAccelerator_Decode_ResponseParamsDataView {
 public:
  JpegDecodeAccelerator_Decode_ResponseParamsDataView() {}

  JpegDecodeAccelerator_Decode_ResponseParamsDataView(
      internal::JpegDecodeAccelerator_Decode_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t bitstream_buffer_id() const {
    return data_->bitstream_buffer_id;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::media::mojom::DecodeError>(
        data_value, output);
  }

  DecodeError error() const {
    return static_cast<DecodeError>(data_->error);
  }
 private:
  internal::JpegDecodeAccelerator_Decode_ResponseParams_Data* data_ = nullptr;
};

class JpegDecodeAccelerator_DecodeWithFD_ParamsDataView {
 public:
  JpegDecodeAccelerator_DecodeWithFD_ParamsDataView() {}

  JpegDecodeAccelerator_DecodeWithFD_ParamsDataView(
      internal::JpegDecodeAccelerator_DecodeWithFD_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t buffer_id() const {
    return data_->buffer_id;
  }
  mojo::ScopedHandle TakeInputFd() {
    mojo::ScopedHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedHandle>(
            &data_->input_fd, &result, context_);
    DCHECK(ret);
    return result;
  }
  uint32_t input_buffer_size() const {
    return data_->input_buffer_size;
  }
  int32_t coded_size_width() const {
    return data_->coded_size_width;
  }
  int32_t coded_size_height() const {
    return data_->coded_size_height;
  }
  mojo::ScopedHandle TakeOutputFd() {
    mojo::ScopedHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedHandle>(
            &data_->output_fd, &result, context_);
    DCHECK(ret);
    return result;
  }
  uint32_t output_buffer_size() const {
    return data_->output_buffer_size;
  }
 private:
  internal::JpegDecodeAccelerator_DecodeWithFD_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class JpegDecodeAccelerator_DecodeWithFD_ResponseParamsDataView {
 public:
  JpegDecodeAccelerator_DecodeWithFD_ResponseParamsDataView() {}

  JpegDecodeAccelerator_DecodeWithFD_ResponseParamsDataView(
      internal::JpegDecodeAccelerator_DecodeWithFD_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t buffer_id() const {
    return data_->buffer_id;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::media::mojom::DecodeError>(
        data_value, output);
  }

  DecodeError error() const {
    return static_cast<DecodeError>(data_->error);
  }
 private:
  internal::JpegDecodeAccelerator_DecodeWithFD_ResponseParams_Data* data_ = nullptr;
};

class JpegDecodeAccelerator_Uninitialize_ParamsDataView {
 public:
  JpegDecodeAccelerator_Uninitialize_ParamsDataView() {}

  JpegDecodeAccelerator_Uninitialize_ParamsDataView(
      internal::JpegDecodeAccelerator_Uninitialize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::JpegDecodeAccelerator_Uninitialize_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace std {

template <>
struct hash<::media::mojom::DecodeError>
    : public mojo::internal::EnumHashImpl<::media::mojom::DecodeError> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::media::mojom::DecodeError, ::media::mojom::DecodeError> {
  static ::media::mojom::DecodeError ToMojom(::media::mojom::DecodeError input) { return input; }
  static bool FromMojom(::media::mojom::DecodeError input, ::media::mojom::DecodeError* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::DecodeError, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::DecodeError, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::DecodeError>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::BitstreamBufferDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::BitstreamBufferDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::BitstreamBuffer_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->id = CallWithContext(Traits::id, input, custom_context);
    decltype(CallWithContext(Traits::memory_handle, input, custom_context)) in_memory_handle = CallWithContext(Traits::memory_handle, input, custom_context);
    mojo::internal::Serialize<mojo::ScopedSharedBufferHandle>(
        in_memory_handle, &(*output)->memory_handle, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->memory_handle),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid memory_handle in BitstreamBuffer struct");
    (*output)->size = CallWithContext(Traits::size, input, custom_context);
    (*output)->offset = CallWithContext(Traits::offset, input, custom_context);
    decltype(CallWithContext(Traits::timestamp, input, custom_context)) in_timestamp = CallWithContext(Traits::timestamp, input, custom_context);
    typename decltype((*output)->timestamp)::BaseType::BufferWriter
        timestamp_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_timestamp, buffer, &timestamp_writer, context);
    (*output)->timestamp.Set(
        timestamp_writer.is_null() ? nullptr : timestamp_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->timestamp.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null timestamp in BitstreamBuffer struct");
    decltype(CallWithContext(Traits::key_id, input, custom_context)) in_key_id = CallWithContext(Traits::key_id, input, custom_context);
    typename decltype((*output)->key_id)::BaseType::BufferWriter
        key_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_key_id, buffer, &key_id_writer, context);
    (*output)->key_id.Set(
        key_id_writer.is_null() ? nullptr : key_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->key_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null key_id in BitstreamBuffer struct");
    decltype(CallWithContext(Traits::iv, input, custom_context)) in_iv = CallWithContext(Traits::iv, input, custom_context);
    typename decltype((*output)->iv)::BaseType::BufferWriter
        iv_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_iv, buffer, &iv_writer, context);
    (*output)->iv.Set(
        iv_writer.is_null() ? nullptr : iv_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->iv.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null iv in BitstreamBuffer struct");
    decltype(CallWithContext(Traits::subsamples, input, custom_context)) in_subsamples = CallWithContext(Traits::subsamples, input, custom_context);
    typename decltype((*output)->subsamples)::BaseType::BufferWriter
        subsamples_writer;
    const mojo::internal::ContainerValidateParams subsamples_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::media::mojom::SubsampleEntryDataView>>(
        in_subsamples, buffer, &subsamples_writer, &subsamples_validate_params,
        context);
    (*output)->subsamples.Set(
        subsamples_writer.is_null() ? nullptr : subsamples_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->subsamples.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null subsamples in BitstreamBuffer struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media::mojom::internal::BitstreamBuffer_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::BitstreamBufferDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace media {
namespace mojom {

inline void BitstreamBufferDataView::GetTimestampDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->timestamp.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void BitstreamBufferDataView::GetKeyIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->key_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void BitstreamBufferDataView::GetIvDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->iv.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void BitstreamBufferDataView::GetSubsamplesDataView(
    mojo::ArrayDataView<::media::mojom::SubsampleEntryDataView>* output) {
  auto pointer = data_->subsamples.Get();
  *output = mojo::ArrayDataView<::media::mojom::SubsampleEntryDataView>(pointer, context_);
}






inline void JpegDecodeAccelerator_Decode_ParamsDataView::GetInputBufferDataView(
    BitstreamBufferDataView* output) {
  auto pointer = data_->input_buffer.Get();
  *output = BitstreamBufferDataView(pointer, context_);
}
inline void JpegDecodeAccelerator_Decode_ParamsDataView::GetCodedSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->coded_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}











}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_JPEG_DECODE_ACCELERATOR_MOJOM_SHARED_H_
