// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_ARC_COMMON_VIDEO_COMMON_MOJOM_H_
#define COMPONENTS_ARC_COMMON_VIDEO_COMMON_MOJOM_H_

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
#include "components/arc/common/video_common.mojom-shared.h"
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
#include "components/arc/video_accelerator/video_frame_plane.h"
#include "media/base/video_codecs.h"
#include "ui/gfx/geometry/size.h"


namespace arc {
namespace mojom {
class VideoFramePlane;
using VideoFramePlanePtr = mojo::InlinedStructPtr<VideoFramePlane>;

class Size;
using SizePtr = mojo::InlinedStructPtr<Size>;



class  VideoFramePlane {
 public:
  using DataView = VideoFramePlaneDataView;
  using Data_ = internal::VideoFramePlane_Data;

  template <typename... Args>
  static VideoFramePlanePtr New(Args&&... args) {
    return VideoFramePlanePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VideoFramePlanePtr From(const U& u) {
    return mojo::TypeConverter<VideoFramePlanePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VideoFramePlane>::Convert(*this);
  }


  VideoFramePlane();

  VideoFramePlane(
      int32_t offset,
      int32_t stride);

  ~VideoFramePlane();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VideoFramePlanePtr>
  VideoFramePlanePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VideoFramePlane>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VideoFramePlane::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VideoFramePlane::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VideoFramePlane_UnserializedMessageContext<
            UserType, VideoFramePlane::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VideoFramePlane::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return VideoFramePlane::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VideoFramePlane_UnserializedMessageContext<
            UserType, VideoFramePlane::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VideoFramePlane::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  int32_t offset;
  int32_t stride;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  Size {
 public:
  using DataView = SizeDataView;
  using Data_ = internal::Size_Data;

  template <typename... Args>
  static SizePtr New(Args&&... args) {
    return SizePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SizePtr From(const U& u) {
    return mojo::TypeConverter<SizePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Size>::Convert(*this);
  }


  Size();

  Size(
      int32_t width,
      int32_t height);

  ~Size();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SizePtr>
  SizePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Size>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Size::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Size::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Size_UnserializedMessageContext<
            UserType, Size::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Size::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Size::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Size_UnserializedMessageContext<
            UserType, Size::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Size::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  int32_t width;
  int32_t height;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





template <typename StructPtrType>
VideoFramePlanePtr VideoFramePlane::Clone() const {
  return New(
      mojo::Clone(offset),
      mojo::Clone(stride)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VideoFramePlane>::value>::type*>
bool VideoFramePlane::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->offset, other_struct.offset))
    return false;
  if (!mojo::Equals(this->stride, other_struct.stride))
    return false;
  return true;
}
template <typename StructPtrType>
SizePtr Size::Clone() const {
  return New(
      mojo::Clone(width),
      mojo::Clone(height)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Size>::value>::type*>
bool Size::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->width, other_struct.width))
    return false;
  if (!mojo::Equals(this->height, other_struct.height))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace arc

namespace mojo {


template <>
struct  StructTraits<::arc::mojom::VideoFramePlane::DataView,
                                         ::arc::mojom::VideoFramePlanePtr> {
  static bool IsNull(const ::arc::mojom::VideoFramePlanePtr& input) { return !input; }
  static void SetToNull(::arc::mojom::VideoFramePlanePtr* output) { output->reset(); }

  static decltype(::arc::mojom::VideoFramePlane::offset) offset(
      const ::arc::mojom::VideoFramePlanePtr& input) {
    return input->offset;
  }

  static decltype(::arc::mojom::VideoFramePlane::stride) stride(
      const ::arc::mojom::VideoFramePlanePtr& input) {
    return input->stride;
  }

  static bool Read(::arc::mojom::VideoFramePlane::DataView input, ::arc::mojom::VideoFramePlanePtr* output);
};


template <>
struct  StructTraits<::arc::mojom::Size::DataView,
                                         ::arc::mojom::SizePtr> {
  static bool IsNull(const ::arc::mojom::SizePtr& input) { return !input; }
  static void SetToNull(::arc::mojom::SizePtr* output) { output->reset(); }

  static decltype(::arc::mojom::Size::width) width(
      const ::arc::mojom::SizePtr& input) {
    return input->width;
  }

  static decltype(::arc::mojom::Size::height) height(
      const ::arc::mojom::SizePtr& input) {
    return input->height;
  }

  static bool Read(::arc::mojom::Size::DataView input, ::arc::mojom::SizePtr* output);
};

}  // namespace mojo

#endif  // COMPONENTS_ARC_COMMON_VIDEO_COMMON_MOJOM_H_