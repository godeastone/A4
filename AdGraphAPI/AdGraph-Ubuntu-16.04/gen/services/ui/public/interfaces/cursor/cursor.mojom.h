// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_CURSOR_CURSOR_MOJOM_H_
#define SERVICES_UI_PUBLIC_INTERFACES_CURSOR_CURSOR_MOJOM_H_

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
#include "services/ui/public/interfaces/cursor/cursor.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "skia/public/interfaces/bitmap.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
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
#include "ui/base/cursor/cursor_data.h"
#include "ui/base/cursor/cursor_type.h"


namespace ui {
namespace mojom {
class CursorData;
using CursorDataPtr = mojo::StructPtr<CursorData>;






class  CursorData {
 public:
  using DataView = CursorDataDataView;
  using Data_ = internal::CursorData_Data;

  template <typename... Args>
  static CursorDataPtr New(Args&&... args) {
    return CursorDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CursorDataPtr From(const U& u) {
    return mojo::TypeConverter<CursorDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CursorData>::Convert(*this);
  }


  CursorData();

  CursorData(
      ui::CursorType cursor_type,
      base::TimeDelta frame_delay,
      const gfx::Point& hotspot_in_pixels,
      const std::vector<SkBitmap>& cursor_frames,
      float scale_factor);

  ~CursorData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CursorDataPtr>
  CursorDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CursorData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CursorData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CursorData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CursorData_UnserializedMessageContext<
            UserType, CursorData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CursorData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CursorData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CursorData_UnserializedMessageContext<
            UserType, CursorData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CursorData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  ui::CursorType cursor_type;
  base::TimeDelta frame_delay;
  gfx::Point hotspot_in_pixels;
  std::vector<SkBitmap> cursor_frames;
  float scale_factor;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
CursorDataPtr CursorData::Clone() const {
  return New(
      mojo::Clone(cursor_type),
      mojo::Clone(frame_delay),
      mojo::Clone(hotspot_in_pixels),
      mojo::Clone(cursor_frames),
      mojo::Clone(scale_factor)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CursorData>::value>::type*>
bool CursorData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->cursor_type, other_struct.cursor_type))
    return false;
  if (!mojo::Equals(this->frame_delay, other_struct.frame_delay))
    return false;
  if (!mojo::Equals(this->hotspot_in_pixels, other_struct.hotspot_in_pixels))
    return false;
  if (!mojo::Equals(this->cursor_frames, other_struct.cursor_frames))
    return false;
  if (!mojo::Equals(this->scale_factor, other_struct.scale_factor))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace ui

namespace mojo {


template <>
struct  StructTraits<::ui::mojom::CursorData::DataView,
                                         ::ui::mojom::CursorDataPtr> {
  static bool IsNull(const ::ui::mojom::CursorDataPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::CursorDataPtr* output) { output->reset(); }

  static decltype(::ui::mojom::CursorData::cursor_type) cursor_type(
      const ::ui::mojom::CursorDataPtr& input) {
    return input->cursor_type;
  }

  static const decltype(::ui::mojom::CursorData::frame_delay)& frame_delay(
      const ::ui::mojom::CursorDataPtr& input) {
    return input->frame_delay;
  }

  static const decltype(::ui::mojom::CursorData::hotspot_in_pixels)& hotspot_in_pixels(
      const ::ui::mojom::CursorDataPtr& input) {
    return input->hotspot_in_pixels;
  }

  static  decltype(::ui::mojom::CursorData::cursor_frames)& cursor_frames(
       ::ui::mojom::CursorDataPtr& input) {
    return input->cursor_frames;
  }

  static decltype(::ui::mojom::CursorData::scale_factor) scale_factor(
      const ::ui::mojom::CursorDataPtr& input) {
    return input->scale_factor;
  }

  static bool Read(::ui::mojom::CursorData::DataView input, ::ui::mojom::CursorDataPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_CURSOR_CURSOR_MOJOM_H_