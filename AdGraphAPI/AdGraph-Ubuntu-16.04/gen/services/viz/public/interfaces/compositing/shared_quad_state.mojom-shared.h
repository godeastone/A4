// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_SHARED_QUAD_STATE_MOJOM_SHARED_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_SHARED_QUAD_STATE_MOJOM_SHARED_H_

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
#include "services/viz/public/interfaces/compositing/shared_quad_state.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "ui/gfx/mojo/transform.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace viz {
namespace mojom {
class SharedQuadStateDataView;



}  // namespace mojom
}  // namespace viz

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::viz::mojom::SharedQuadStateDataView> {
  using Data = ::viz::mojom::internal::SharedQuadState_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace viz {
namespace mojom {
class SharedQuadStateDataView {
 public:
  SharedQuadStateDataView() {}

  SharedQuadStateDataView(
      internal::SharedQuadState_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetQuadToTargetTransformDataView(
      ::gfx::mojom::TransformDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadQuadToTargetTransform(UserType* output) {
    auto* pointer = data_->quad_to_target_transform.Get();
    return mojo::internal::Deserialize<::gfx::mojom::TransformDataView>(
        pointer, output, context_);
  }
  inline void GetQuadLayerRectDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadQuadLayerRect(UserType* output) {
    auto* pointer = data_->quad_layer_rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, context_);
  }
  inline void GetVisibleQuadLayerRectDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVisibleQuadLayerRect(UserType* output) {
    auto* pointer = data_->visible_quad_layer_rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, context_);
  }
  inline void GetClipRectDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClipRect(UserType* output) {
    auto* pointer = data_->clip_rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, context_);
  }
  bool is_clipped() const {
    return data_->is_clipped;
  }
  bool are_contents_opaque() const {
    return data_->are_contents_opaque;
  }
  float opacity() const {
    return data_->opacity;
  }
  uint32_t blend_mode() const {
    return data_->blend_mode;
  }
  int32_t sorting_context_id() const {
    return data_->sorting_context_id;
  }
 private:
  internal::SharedQuadState_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace viz

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::viz::mojom::SharedQuadStateDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::viz::mojom::SharedQuadStateDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::viz::mojom::internal::SharedQuadState_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::quad_to_target_transform, input, custom_context)) in_quad_to_target_transform = CallWithContext(Traits::quad_to_target_transform, input, custom_context);
    typename decltype((*output)->quad_to_target_transform)::BaseType::BufferWriter
        quad_to_target_transform_writer;
    mojo::internal::Serialize<::gfx::mojom::TransformDataView>(
        in_quad_to_target_transform, buffer, &quad_to_target_transform_writer, context);
    (*output)->quad_to_target_transform.Set(
        quad_to_target_transform_writer.is_null() ? nullptr : quad_to_target_transform_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->quad_to_target_transform.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null quad_to_target_transform in SharedQuadState struct");
    decltype(CallWithContext(Traits::quad_layer_rect, input, custom_context)) in_quad_layer_rect = CallWithContext(Traits::quad_layer_rect, input, custom_context);
    typename decltype((*output)->quad_layer_rect)::BaseType::BufferWriter
        quad_layer_rect_writer;
    mojo::internal::Serialize<::gfx::mojom::RectDataView>(
        in_quad_layer_rect, buffer, &quad_layer_rect_writer, context);
    (*output)->quad_layer_rect.Set(
        quad_layer_rect_writer.is_null() ? nullptr : quad_layer_rect_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->quad_layer_rect.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null quad_layer_rect in SharedQuadState struct");
    decltype(CallWithContext(Traits::visible_quad_layer_rect, input, custom_context)) in_visible_quad_layer_rect = CallWithContext(Traits::visible_quad_layer_rect, input, custom_context);
    typename decltype((*output)->visible_quad_layer_rect)::BaseType::BufferWriter
        visible_quad_layer_rect_writer;
    mojo::internal::Serialize<::gfx::mojom::RectDataView>(
        in_visible_quad_layer_rect, buffer, &visible_quad_layer_rect_writer, context);
    (*output)->visible_quad_layer_rect.Set(
        visible_quad_layer_rect_writer.is_null() ? nullptr : visible_quad_layer_rect_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->visible_quad_layer_rect.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null visible_quad_layer_rect in SharedQuadState struct");
    decltype(CallWithContext(Traits::clip_rect, input, custom_context)) in_clip_rect = CallWithContext(Traits::clip_rect, input, custom_context);
    typename decltype((*output)->clip_rect)::BaseType::BufferWriter
        clip_rect_writer;
    mojo::internal::Serialize<::gfx::mojom::RectDataView>(
        in_clip_rect, buffer, &clip_rect_writer, context);
    (*output)->clip_rect.Set(
        clip_rect_writer.is_null() ? nullptr : clip_rect_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->clip_rect.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null clip_rect in SharedQuadState struct");
    (*output)->is_clipped = CallWithContext(Traits::is_clipped, input, custom_context);
    (*output)->are_contents_opaque = CallWithContext(Traits::are_contents_opaque, input, custom_context);
    (*output)->opacity = CallWithContext(Traits::opacity, input, custom_context);
    (*output)->blend_mode = CallWithContext(Traits::blend_mode, input, custom_context);
    (*output)->sorting_context_id = CallWithContext(Traits::sorting_context_id, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::viz::mojom::internal::SharedQuadState_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::viz::mojom::SharedQuadStateDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace viz {
namespace mojom {

inline void SharedQuadStateDataView::GetQuadToTargetTransformDataView(
    ::gfx::mojom::TransformDataView* output) {
  auto pointer = data_->quad_to_target_transform.Get();
  *output = ::gfx::mojom::TransformDataView(pointer, context_);
}
inline void SharedQuadStateDataView::GetQuadLayerRectDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->quad_layer_rect.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}
inline void SharedQuadStateDataView::GetVisibleQuadLayerRectDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->visible_quad_layer_rect.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}
inline void SharedQuadStateDataView::GetClipRectDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->clip_rect.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_SHARED_QUAD_STATE_MOJOM_SHARED_H_
