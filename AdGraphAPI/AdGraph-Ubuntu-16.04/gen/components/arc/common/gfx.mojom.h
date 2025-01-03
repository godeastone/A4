// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_ARC_COMMON_GFX_MOJOM_H_
#define COMPONENTS_ARC_COMMON_GFX_MOJOM_H_

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
#include "components/arc/common/gfx.mojom-shared.h"
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
#include "ui/gfx/geometry/rect.h"
#include "ui/gfx/range/range.h"


namespace arc {
namespace mojom {
class Rect;
using RectPtr = mojo::InlinedStructPtr<Rect>;

class Range;
using RangePtr = mojo::InlinedStructPtr<Range>;



class  Rect {
 public:
  using DataView = RectDataView;
  using Data_ = internal::Rect_Data;

  template <typename... Args>
  static RectPtr New(Args&&... args) {
    return RectPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RectPtr From(const U& u) {
    return mojo::TypeConverter<RectPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Rect>::Convert(*this);
  }


  Rect();

  Rect(
      int32_t left,
      int32_t top,
      int32_t right,
      int32_t bottom);

  ~Rect();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RectPtr>
  RectPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Rect>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Rect::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Rect::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Rect_UnserializedMessageContext<
            UserType, Rect::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Rect::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Rect::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Rect_UnserializedMessageContext<
            UserType, Rect::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Rect::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  int32_t left;
  int32_t top;
  int32_t right;
  int32_t bottom;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  Range {
 public:
  using DataView = RangeDataView;
  using Data_ = internal::Range_Data;

  template <typename... Args>
  static RangePtr New(Args&&... args) {
    return RangePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RangePtr From(const U& u) {
    return mojo::TypeConverter<RangePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Range>::Convert(*this);
  }


  Range();

  Range(
      uint32_t start,
      uint32_t end);

  ~Range();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RangePtr>
  RangePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Range>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Range::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Range::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Range_UnserializedMessageContext<
            UserType, Range::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Range::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Range::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Range_UnserializedMessageContext<
            UserType, Range::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Range::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  uint32_t start;
  uint32_t end;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





template <typename StructPtrType>
RectPtr Rect::Clone() const {
  return New(
      mojo::Clone(left),
      mojo::Clone(top),
      mojo::Clone(right),
      mojo::Clone(bottom)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Rect>::value>::type*>
bool Rect::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->left, other_struct.left))
    return false;
  if (!mojo::Equals(this->top, other_struct.top))
    return false;
  if (!mojo::Equals(this->right, other_struct.right))
    return false;
  if (!mojo::Equals(this->bottom, other_struct.bottom))
    return false;
  return true;
}
template <typename StructPtrType>
RangePtr Range::Clone() const {
  return New(
      mojo::Clone(start),
      mojo::Clone(end)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Range>::value>::type*>
bool Range::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->start, other_struct.start))
    return false;
  if (!mojo::Equals(this->end, other_struct.end))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace arc

namespace mojo {


template <>
struct  StructTraits<::arc::mojom::Rect::DataView,
                                         ::arc::mojom::RectPtr> {
  static bool IsNull(const ::arc::mojom::RectPtr& input) { return !input; }
  static void SetToNull(::arc::mojom::RectPtr* output) { output->reset(); }

  static decltype(::arc::mojom::Rect::left) left(
      const ::arc::mojom::RectPtr& input) {
    return input->left;
  }

  static decltype(::arc::mojom::Rect::top) top(
      const ::arc::mojom::RectPtr& input) {
    return input->top;
  }

  static decltype(::arc::mojom::Rect::right) right(
      const ::arc::mojom::RectPtr& input) {
    return input->right;
  }

  static decltype(::arc::mojom::Rect::bottom) bottom(
      const ::arc::mojom::RectPtr& input) {
    return input->bottom;
  }

  static bool Read(::arc::mojom::Rect::DataView input, ::arc::mojom::RectPtr* output);
};


template <>
struct  StructTraits<::arc::mojom::Range::DataView,
                                         ::arc::mojom::RangePtr> {
  static bool IsNull(const ::arc::mojom::RangePtr& input) { return !input; }
  static void SetToNull(::arc::mojom::RangePtr* output) { output->reset(); }

  static decltype(::arc::mojom::Range::start) start(
      const ::arc::mojom::RangePtr& input) {
    return input->start;
  }

  static decltype(::arc::mojom::Range::end) end(
      const ::arc::mojom::RangePtr& input) {
    return input->end;
  }

  static bool Read(::arc::mojom::Range::DataView input, ::arc::mojom::RangePtr* output);
};

}  // namespace mojo

#endif  // COMPONENTS_ARC_COMMON_GFX_MOJOM_H_