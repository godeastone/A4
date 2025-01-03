// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_JPEG_ENCODE_ACCELERATOR_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_JPEG_ENCODE_ACCELERATOR_MOJOM_SHARED_H_

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
#include "media/mojo/interfaces/jpeg_encode_accelerator.mojom-shared-internal.h"
#include "media/mojo/interfaces/media_types.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace media {
namespace mojom {


}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace media {
namespace mojom {

enum class EncodeStatus : int32_t {
  ENCODE_OK,
  HW_JPEG_ENCODE_NOT_SUPPORTED,
  THREAD_CREATION_FAILED,
  INVALID_ARGUMENT,
  INACCESSIBLE_OUTPUT_BUFFER,
  PARSE_IMAGE_FAILED,
  PLATFORM_FAILURE,
  kMinValue = 0,
  kMaxValue = 6,
};

inline std::ostream& operator<<(std::ostream& os, EncodeStatus value) {
  switch(value) {
    case EncodeStatus::ENCODE_OK:
      return os << "EncodeStatus::ENCODE_OK";
    case EncodeStatus::HW_JPEG_ENCODE_NOT_SUPPORTED:
      return os << "EncodeStatus::HW_JPEG_ENCODE_NOT_SUPPORTED";
    case EncodeStatus::THREAD_CREATION_FAILED:
      return os << "EncodeStatus::THREAD_CREATION_FAILED";
    case EncodeStatus::INVALID_ARGUMENT:
      return os << "EncodeStatus::INVALID_ARGUMENT";
    case EncodeStatus::INACCESSIBLE_OUTPUT_BUFFER:
      return os << "EncodeStatus::INACCESSIBLE_OUTPUT_BUFFER";
    case EncodeStatus::PARSE_IMAGE_FAILED:
      return os << "EncodeStatus::PARSE_IMAGE_FAILED";
    case EncodeStatus::PLATFORM_FAILURE:
      return os << "EncodeStatus::PLATFORM_FAILURE";
    default:
      return os << "Unknown EncodeStatus value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(EncodeStatus value) {
  return internal::EncodeStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class JpegEncodeAcceleratorInterfaceBase {};

using JpegEncodeAcceleratorPtrDataView =
    mojo::InterfacePtrDataView<JpegEncodeAcceleratorInterfaceBase>;
using JpegEncodeAcceleratorRequestDataView =
    mojo::InterfaceRequestDataView<JpegEncodeAcceleratorInterfaceBase>;
using JpegEncodeAcceleratorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<JpegEncodeAcceleratorInterfaceBase>;
using JpegEncodeAcceleratorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<JpegEncodeAcceleratorInterfaceBase>;
class JpegEncodeAccelerator_Initialize_ParamsDataView {
 public:
  JpegEncodeAccelerator_Initialize_ParamsDataView() {}

  JpegEncodeAccelerator_Initialize_ParamsDataView(
      internal::JpegEncodeAccelerator_Initialize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::JpegEncodeAccelerator_Initialize_Params_Data* data_ = nullptr;
};

class JpegEncodeAccelerator_Initialize_ResponseParamsDataView {
 public:
  JpegEncodeAccelerator_Initialize_ResponseParamsDataView() {}

  JpegEncodeAccelerator_Initialize_ResponseParamsDataView(
      internal::JpegEncodeAccelerator_Initialize_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::JpegEncodeAccelerator_Initialize_ResponseParams_Data* data_ = nullptr;
};

class JpegEncodeAccelerator_EncodeWithFD_ParamsDataView {
 public:
  JpegEncodeAccelerator_EncodeWithFD_ParamsDataView() {}

  JpegEncodeAccelerator_EncodeWithFD_ParamsDataView(
      internal::JpegEncodeAccelerator_EncodeWithFD_Params_Data* data,
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
  mojo::ScopedHandle TakeExifFd() {
    mojo::ScopedHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedHandle>(
            &data_->exif_fd, &result, context_);
    DCHECK(ret);
    return result;
  }
  uint32_t exif_buffer_size() const {
    return data_->exif_buffer_size;
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
  internal::JpegEncodeAccelerator_EncodeWithFD_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class JpegEncodeAccelerator_EncodeWithFD_ResponseParamsDataView {
 public:
  JpegEncodeAccelerator_EncodeWithFD_ResponseParamsDataView() {}

  JpegEncodeAccelerator_EncodeWithFD_ResponseParamsDataView(
      internal::JpegEncodeAccelerator_EncodeWithFD_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t buffer_id() const {
    return data_->buffer_id;
  }
  uint32_t encoded_buffer_size() const {
    return data_->encoded_buffer_size;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::media::mojom::EncodeStatus>(
        data_value, output);
  }

  EncodeStatus status() const {
    return static_cast<EncodeStatus>(data_->status);
  }
 private:
  internal::JpegEncodeAccelerator_EncodeWithFD_ResponseParams_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace std {

template <>
struct hash<::media::mojom::EncodeStatus>
    : public mojo::internal::EnumHashImpl<::media::mojom::EncodeStatus> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::media::mojom::EncodeStatus, ::media::mojom::EncodeStatus> {
  static ::media::mojom::EncodeStatus ToMojom(::media::mojom::EncodeStatus input) { return input; }
  static bool FromMojom(::media::mojom::EncodeStatus input, ::media::mojom::EncodeStatus* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::EncodeStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::EncodeStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::EncodeStatus>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace media {
namespace mojom {










}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_JPEG_ENCODE_ACCELERATOR_MOJOM_SHARED_H_
