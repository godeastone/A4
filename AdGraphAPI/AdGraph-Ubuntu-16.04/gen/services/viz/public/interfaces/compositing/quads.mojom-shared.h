// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_QUADS_MOJOM_SHARED_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_QUADS_MOJOM_SHARED_H_

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
#include "services/viz/public/interfaces/compositing/quads.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/surface_id.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/shared_quad_state.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "ui/gfx/mojo/color_space.mojom-shared.h"
#include "ui/gfx/mojo/transform.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace viz {
namespace mojom {
class DebugBorderQuadStateDataView;

class RenderPassQuadStateDataView;

class SolidColorQuadStateDataView;

class StreamVideoQuadStateDataView;

class SurfaceQuadStateDataView;

class TextureQuadStateDataView;

class TileQuadStateDataView;

class YUVVideoQuadStateDataView;

class DrawQuadDataView;

class DrawQuadStateDataView;


}  // namespace mojom
}  // namespace viz

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::viz::mojom::DebugBorderQuadStateDataView> {
  using Data = ::viz::mojom::internal::DebugBorderQuadState_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::viz::mojom::RenderPassQuadStateDataView> {
  using Data = ::viz::mojom::internal::RenderPassQuadState_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::viz::mojom::SolidColorQuadStateDataView> {
  using Data = ::viz::mojom::internal::SolidColorQuadState_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::viz::mojom::StreamVideoQuadStateDataView> {
  using Data = ::viz::mojom::internal::StreamVideoQuadState_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::viz::mojom::SurfaceQuadStateDataView> {
  using Data = ::viz::mojom::internal::SurfaceQuadState_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::viz::mojom::TextureQuadStateDataView> {
  using Data = ::viz::mojom::internal::TextureQuadState_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::viz::mojom::TileQuadStateDataView> {
  using Data = ::viz::mojom::internal::TileQuadState_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::viz::mojom::YUVVideoQuadStateDataView> {
  using Data = ::viz::mojom::internal::YUVVideoQuadState_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::viz::mojom::DrawQuadDataView> {
  using Data = ::viz::mojom::internal::DrawQuad_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::viz::mojom::DrawQuadStateDataView> {
  using Data = ::viz::mojom::internal::DrawQuadState_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

}  // namespace internal
}  // namespace mojo


namespace viz {
namespace mojom {
class DebugBorderQuadStateDataView {
 public:
  DebugBorderQuadStateDataView() {}

  DebugBorderQuadStateDataView(
      internal::DebugBorderQuadState_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t color() const {
    return data_->color;
  }
  int32_t width() const {
    return data_->width;
  }
 private:
  internal::DebugBorderQuadState_Data* data_ = nullptr;
};

class RenderPassQuadStateDataView {
 public:
  RenderPassQuadStateDataView() {}

  RenderPassQuadStateDataView(
      internal::RenderPassQuadState_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t render_pass_id() const {
    return data_->render_pass_id;
  }
  uint32_t mask_resource_id() const {
    return data_->mask_resource_id;
  }
  inline void GetMaskUvRectDataView(
      ::gfx::mojom::RectFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMaskUvRect(UserType* output) {
    auto* pointer = data_->mask_uv_rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectFDataView>(
        pointer, output, context_);
  }
  inline void GetMaskTextureSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMaskTextureSize(UserType* output) {
    auto* pointer = data_->mask_texture_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  inline void GetFiltersScaleDataView(
      ::gfx::mojom::Vector2dFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFiltersScale(UserType* output) {
    auto* pointer = data_->filters_scale.Get();
    return mojo::internal::Deserialize<::gfx::mojom::Vector2dFDataView>(
        pointer, output, context_);
  }
  inline void GetFiltersOriginDataView(
      ::gfx::mojom::PointFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFiltersOrigin(UserType* output) {
    auto* pointer = data_->filters_origin.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointFDataView>(
        pointer, output, context_);
  }
  inline void GetTexCoordRectDataView(
      ::gfx::mojom::RectFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTexCoordRect(UserType* output) {
    auto* pointer = data_->tex_coord_rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectFDataView>(
        pointer, output, context_);
  }
  bool force_anti_aliasing_off() const {
    return data_->force_anti_aliasing_off;
  }
 private:
  internal::RenderPassQuadState_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SolidColorQuadStateDataView {
 public:
  SolidColorQuadStateDataView() {}

  SolidColorQuadStateDataView(
      internal::SolidColorQuadState_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t color() const {
    return data_->color;
  }
  bool force_anti_aliasing_off() const {
    return data_->force_anti_aliasing_off;
  }
 private:
  internal::SolidColorQuadState_Data* data_ = nullptr;
};

class StreamVideoQuadStateDataView {
 public:
  StreamVideoQuadStateDataView() {}

  StreamVideoQuadStateDataView(
      internal::StreamVideoQuadState_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t resource_id() const {
    return data_->resource_id;
  }
  inline void GetResourceSizeInPixelsDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResourceSizeInPixels(UserType* output) {
    auto* pointer = data_->resource_size_in_pixels.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  inline void GetMatrixDataView(
      ::gfx::mojom::TransformDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMatrix(UserType* output) {
    auto* pointer = data_->matrix.Get();
    return mojo::internal::Deserialize<::gfx::mojom::TransformDataView>(
        pointer, output, context_);
  }
 private:
  internal::StreamVideoQuadState_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SurfaceQuadStateDataView {
 public:
  SurfaceQuadStateDataView() {}

  SurfaceQuadStateDataView(
      internal::SurfaceQuadState_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPrimarySurfaceIdDataView(
      ::viz::mojom::SurfaceIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPrimarySurfaceId(UserType* output) {
    auto* pointer = data_->primary_surface_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::SurfaceIdDataView>(
        pointer, output, context_);
  }
  inline void GetFallbackSurfaceIdDataView(
      ::viz::mojom::SurfaceIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFallbackSurfaceId(UserType* output) {
    auto* pointer = data_->fallback_surface_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::SurfaceIdDataView>(
        pointer, output, context_);
  }
  uint32_t default_background_color() const {
    return data_->default_background_color;
  }
  bool stretch_content_to_fill_bounds() const {
    return data_->stretch_content_to_fill_bounds;
  }
 private:
  internal::SurfaceQuadState_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TextureQuadStateDataView {
 public:
  TextureQuadStateDataView() {}

  TextureQuadStateDataView(
      internal::TextureQuadState_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t resource_id() const {
    return data_->resource_id;
  }
  inline void GetResourceSizeInPixelsDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResourceSizeInPixels(UserType* output) {
    auto* pointer = data_->resource_size_in_pixels.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  bool premultiplied_alpha() const {
    return data_->premultiplied_alpha;
  }
  inline void GetUvTopLeftDataView(
      ::gfx::mojom::PointFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUvTopLeft(UserType* output) {
    auto* pointer = data_->uv_top_left.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointFDataView>(
        pointer, output, context_);
  }
  inline void GetUvBottomRightDataView(
      ::gfx::mojom::PointFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUvBottomRight(UserType* output) {
    auto* pointer = data_->uv_bottom_right.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointFDataView>(
        pointer, output, context_);
  }
  uint32_t background_color() const {
    return data_->background_color;
  }
  inline void GetVertexOpacityDataView(
      mojo::ArrayDataView<float>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVertexOpacity(UserType* output) {
    auto* pointer = data_->vertex_opacity.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<float>>(
        pointer, output, context_);
  }
  bool y_flipped() const {
    return data_->y_flipped;
  }
  bool nearest_neighbor() const {
    return data_->nearest_neighbor;
  }
  bool secure_output_only() const {
    return data_->secure_output_only;
  }
 private:
  internal::TextureQuadState_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TileQuadStateDataView {
 public:
  TileQuadStateDataView() {}

  TileQuadStateDataView(
      internal::TileQuadState_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTexCoordRectDataView(
      ::gfx::mojom::RectFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTexCoordRect(UserType* output) {
    auto* pointer = data_->tex_coord_rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectFDataView>(
        pointer, output, context_);
  }
  inline void GetTextureSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTextureSize(UserType* output) {
    auto* pointer = data_->texture_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  bool swizzle_contents() const {
    return data_->swizzle_contents;
  }
  bool is_premultiplied() const {
    return data_->is_premultiplied;
  }
  uint32_t resource_id() const {
    return data_->resource_id;
  }
  bool nearest_neighbor() const {
    return data_->nearest_neighbor;
  }
  bool force_anti_aliasing_off() const {
    return data_->force_anti_aliasing_off;
  }
 private:
  internal::TileQuadState_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class YUVVideoQuadStateDataView {
 public:
  YUVVideoQuadStateDataView() {}

  YUVVideoQuadStateDataView(
      internal::YUVVideoQuadState_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetYaTexCoordRectDataView(
      ::gfx::mojom::RectFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadYaTexCoordRect(UserType* output) {
    auto* pointer = data_->ya_tex_coord_rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectFDataView>(
        pointer, output, context_);
  }
  inline void GetUvTexCoordRectDataView(
      ::gfx::mojom::RectFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUvTexCoordRect(UserType* output) {
    auto* pointer = data_->uv_tex_coord_rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectFDataView>(
        pointer, output, context_);
  }
  inline void GetYaTexSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadYaTexSize(UserType* output) {
    auto* pointer = data_->ya_tex_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  inline void GetUvTexSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUvTexSize(UserType* output) {
    auto* pointer = data_->uv_tex_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  uint32_t y_plane_resource_id() const {
    return data_->y_plane_resource_id;
  }
  uint32_t u_plane_resource_id() const {
    return data_->u_plane_resource_id;
  }
  uint32_t v_plane_resource_id() const {
    return data_->v_plane_resource_id;
  }
  uint32_t a_plane_resource_id() const {
    return data_->a_plane_resource_id;
  }
  float resource_offset() const {
    return data_->resource_offset;
  }
  float resource_multiplier() const {
    return data_->resource_multiplier;
  }
  uint32_t bits_per_channel() const {
    return data_->bits_per_channel;
  }
  inline void GetVideoColorSpaceDataView(
      ::gfx::mojom::ColorSpaceDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVideoColorSpace(UserType* output) {
    auto* pointer = data_->video_color_space.Get();
    return mojo::internal::Deserialize<::gfx::mojom::ColorSpaceDataView>(
        pointer, output, context_);
  }
  bool require_overlay() const {
    return data_->require_overlay;
  }
  bool is_protected_video() const {
    return data_->is_protected_video;
  }
 private:
  internal::YUVVideoQuadState_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DrawQuadDataView {
 public:
  DrawQuadDataView() {}

  DrawQuadDataView(
      internal::DrawQuad_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRectDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRect(UserType* output) {
    auto* pointer = data_->rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, context_);
  }
  inline void GetVisibleRectDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVisibleRect(UserType* output) {
    auto* pointer = data_->visible_rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, context_);
  }
  bool needs_blending() const {
    return data_->needs_blending;
  }
  inline void GetSqsDataView(
      ::viz::mojom::SharedQuadStateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSqs(UserType* output) {
    auto* pointer = data_->sqs.Get();
    return mojo::internal::Deserialize<::viz::mojom::SharedQuadStateDataView>(
        pointer, output, context_);
  }
  inline void GetDrawQuadStateDataView(
      DrawQuadStateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDrawQuadState(UserType* output) {
    auto* pointer = !data_->draw_quad_state.is_null() ? &data_->draw_quad_state : nullptr;
    return mojo::internal::Deserialize<::viz::mojom::DrawQuadStateDataView>(
        pointer, output, context_);
  }
 private:
  internal::DrawQuad_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DrawQuadStateDataView {
 public:
  using Tag = internal::DrawQuadState_Data::DrawQuadState_Tag;

  DrawQuadStateDataView() {}

  DrawQuadStateDataView(
      internal::DrawQuadState_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_debug_border_quad_state() const { return data_->tag == Tag::DEBUG_BORDER_QUAD_STATE; }
  inline void GetDebugBorderQuadStateDataView(
      DebugBorderQuadStateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDebugBorderQuadState(UserType* output) {
    DCHECK(is_debug_border_quad_state());
    return mojo::internal::Deserialize<::viz::mojom::DebugBorderQuadStateDataView>(
        data_->data.f_debug_border_quad_state.Get(), output, context_);
  }
  bool is_render_pass_quad_state() const { return data_->tag == Tag::RENDER_PASS_QUAD_STATE; }
  inline void GetRenderPassQuadStateDataView(
      RenderPassQuadStateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRenderPassQuadState(UserType* output) {
    DCHECK(is_render_pass_quad_state());
    return mojo::internal::Deserialize<::viz::mojom::RenderPassQuadStateDataView>(
        data_->data.f_render_pass_quad_state.Get(), output, context_);
  }
  bool is_solid_color_quad_state() const { return data_->tag == Tag::SOLID_COLOR_QUAD_STATE; }
  inline void GetSolidColorQuadStateDataView(
      SolidColorQuadStateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSolidColorQuadState(UserType* output) {
    DCHECK(is_solid_color_quad_state());
    return mojo::internal::Deserialize<::viz::mojom::SolidColorQuadStateDataView>(
        data_->data.f_solid_color_quad_state.Get(), output, context_);
  }
  bool is_stream_video_quad_state() const { return data_->tag == Tag::STREAM_VIDEO_QUAD_STATE; }
  inline void GetStreamVideoQuadStateDataView(
      StreamVideoQuadStateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStreamVideoQuadState(UserType* output) {
    DCHECK(is_stream_video_quad_state());
    return mojo::internal::Deserialize<::viz::mojom::StreamVideoQuadStateDataView>(
        data_->data.f_stream_video_quad_state.Get(), output, context_);
  }
  bool is_surface_quad_state() const { return data_->tag == Tag::SURFACE_QUAD_STATE; }
  inline void GetSurfaceQuadStateDataView(
      SurfaceQuadStateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSurfaceQuadState(UserType* output) {
    DCHECK(is_surface_quad_state());
    return mojo::internal::Deserialize<::viz::mojom::SurfaceQuadStateDataView>(
        data_->data.f_surface_quad_state.Get(), output, context_);
  }
  bool is_texture_quad_state() const { return data_->tag == Tag::TEXTURE_QUAD_STATE; }
  inline void GetTextureQuadStateDataView(
      TextureQuadStateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTextureQuadState(UserType* output) {
    DCHECK(is_texture_quad_state());
    return mojo::internal::Deserialize<::viz::mojom::TextureQuadStateDataView>(
        data_->data.f_texture_quad_state.Get(), output, context_);
  }
  bool is_tile_quad_state() const { return data_->tag == Tag::TILE_QUAD_STATE; }
  inline void GetTileQuadStateDataView(
      TileQuadStateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTileQuadState(UserType* output) {
    DCHECK(is_tile_quad_state());
    return mojo::internal::Deserialize<::viz::mojom::TileQuadStateDataView>(
        data_->data.f_tile_quad_state.Get(), output, context_);
  }
  bool is_yuv_video_quad_state() const { return data_->tag == Tag::YUV_VIDEO_QUAD_STATE; }
  inline void GetYuvVideoQuadStateDataView(
      YUVVideoQuadStateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadYuvVideoQuadState(UserType* output) {
    DCHECK(is_yuv_video_quad_state());
    return mojo::internal::Deserialize<::viz::mojom::YUVVideoQuadStateDataView>(
        data_->data.f_yuv_video_quad_state.Get(), output, context_);
  }

 private:
  internal::DrawQuadState_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace viz

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::viz::mojom::DebugBorderQuadStateDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::viz::mojom::DebugBorderQuadStateDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::viz::mojom::internal::DebugBorderQuadState_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->color = CallWithContext(Traits::color, input, custom_context);
    (*output)->width = CallWithContext(Traits::width, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::viz::mojom::internal::DebugBorderQuadState_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::viz::mojom::DebugBorderQuadStateDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::viz::mojom::RenderPassQuadStateDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::viz::mojom::RenderPassQuadStateDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::viz::mojom::internal::RenderPassQuadState_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->render_pass_id = CallWithContext(Traits::render_pass_id, input, custom_context);
    (*output)->mask_resource_id = CallWithContext(Traits::mask_resource_id, input, custom_context);
    decltype(CallWithContext(Traits::mask_uv_rect, input, custom_context)) in_mask_uv_rect = CallWithContext(Traits::mask_uv_rect, input, custom_context);
    typename decltype((*output)->mask_uv_rect)::BaseType::BufferWriter
        mask_uv_rect_writer;
    mojo::internal::Serialize<::gfx::mojom::RectFDataView>(
        in_mask_uv_rect, buffer, &mask_uv_rect_writer, context);
    (*output)->mask_uv_rect.Set(
        mask_uv_rect_writer.is_null() ? nullptr : mask_uv_rect_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->mask_uv_rect.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null mask_uv_rect in RenderPassQuadState struct");
    decltype(CallWithContext(Traits::mask_texture_size, input, custom_context)) in_mask_texture_size = CallWithContext(Traits::mask_texture_size, input, custom_context);
    typename decltype((*output)->mask_texture_size)::BaseType::BufferWriter
        mask_texture_size_writer;
    mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
        in_mask_texture_size, buffer, &mask_texture_size_writer, context);
    (*output)->mask_texture_size.Set(
        mask_texture_size_writer.is_null() ? nullptr : mask_texture_size_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->mask_texture_size.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null mask_texture_size in RenderPassQuadState struct");
    decltype(CallWithContext(Traits::filters_scale, input, custom_context)) in_filters_scale = CallWithContext(Traits::filters_scale, input, custom_context);
    typename decltype((*output)->filters_scale)::BaseType::BufferWriter
        filters_scale_writer;
    mojo::internal::Serialize<::gfx::mojom::Vector2dFDataView>(
        in_filters_scale, buffer, &filters_scale_writer, context);
    (*output)->filters_scale.Set(
        filters_scale_writer.is_null() ? nullptr : filters_scale_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->filters_scale.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null filters_scale in RenderPassQuadState struct");
    decltype(CallWithContext(Traits::filters_origin, input, custom_context)) in_filters_origin = CallWithContext(Traits::filters_origin, input, custom_context);
    typename decltype((*output)->filters_origin)::BaseType::BufferWriter
        filters_origin_writer;
    mojo::internal::Serialize<::gfx::mojom::PointFDataView>(
        in_filters_origin, buffer, &filters_origin_writer, context);
    (*output)->filters_origin.Set(
        filters_origin_writer.is_null() ? nullptr : filters_origin_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->filters_origin.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null filters_origin in RenderPassQuadState struct");
    decltype(CallWithContext(Traits::tex_coord_rect, input, custom_context)) in_tex_coord_rect = CallWithContext(Traits::tex_coord_rect, input, custom_context);
    typename decltype((*output)->tex_coord_rect)::BaseType::BufferWriter
        tex_coord_rect_writer;
    mojo::internal::Serialize<::gfx::mojom::RectFDataView>(
        in_tex_coord_rect, buffer, &tex_coord_rect_writer, context);
    (*output)->tex_coord_rect.Set(
        tex_coord_rect_writer.is_null() ? nullptr : tex_coord_rect_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->tex_coord_rect.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null tex_coord_rect in RenderPassQuadState struct");
    (*output)->force_anti_aliasing_off = CallWithContext(Traits::force_anti_aliasing_off, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::viz::mojom::internal::RenderPassQuadState_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::viz::mojom::RenderPassQuadStateDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::viz::mojom::SolidColorQuadStateDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::viz::mojom::SolidColorQuadStateDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::viz::mojom::internal::SolidColorQuadState_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->color = CallWithContext(Traits::color, input, custom_context);
    (*output)->force_anti_aliasing_off = CallWithContext(Traits::force_anti_aliasing_off, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::viz::mojom::internal::SolidColorQuadState_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::viz::mojom::SolidColorQuadStateDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::viz::mojom::StreamVideoQuadStateDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::viz::mojom::StreamVideoQuadStateDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::viz::mojom::internal::StreamVideoQuadState_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->resource_id = CallWithContext(Traits::resource_id, input, custom_context);
    decltype(CallWithContext(Traits::resource_size_in_pixels, input, custom_context)) in_resource_size_in_pixels = CallWithContext(Traits::resource_size_in_pixels, input, custom_context);
    typename decltype((*output)->resource_size_in_pixels)::BaseType::BufferWriter
        resource_size_in_pixels_writer;
    mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
        in_resource_size_in_pixels, buffer, &resource_size_in_pixels_writer, context);
    (*output)->resource_size_in_pixels.Set(
        resource_size_in_pixels_writer.is_null() ? nullptr : resource_size_in_pixels_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->resource_size_in_pixels.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null resource_size_in_pixels in StreamVideoQuadState struct");
    decltype(CallWithContext(Traits::matrix, input, custom_context)) in_matrix = CallWithContext(Traits::matrix, input, custom_context);
    typename decltype((*output)->matrix)::BaseType::BufferWriter
        matrix_writer;
    mojo::internal::Serialize<::gfx::mojom::TransformDataView>(
        in_matrix, buffer, &matrix_writer, context);
    (*output)->matrix.Set(
        matrix_writer.is_null() ? nullptr : matrix_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->matrix.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null matrix in StreamVideoQuadState struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::viz::mojom::internal::StreamVideoQuadState_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::viz::mojom::StreamVideoQuadStateDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::viz::mojom::SurfaceQuadStateDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::viz::mojom::SurfaceQuadStateDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::viz::mojom::internal::SurfaceQuadState_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::primary_surface_id, input, custom_context)) in_primary_surface_id = CallWithContext(Traits::primary_surface_id, input, custom_context);
    typename decltype((*output)->primary_surface_id)::BaseType::BufferWriter
        primary_surface_id_writer;
    mojo::internal::Serialize<::viz::mojom::SurfaceIdDataView>(
        in_primary_surface_id, buffer, &primary_surface_id_writer, context);
    (*output)->primary_surface_id.Set(
        primary_surface_id_writer.is_null() ? nullptr : primary_surface_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->primary_surface_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null primary_surface_id in SurfaceQuadState struct");
    decltype(CallWithContext(Traits::fallback_surface_id, input, custom_context)) in_fallback_surface_id = CallWithContext(Traits::fallback_surface_id, input, custom_context);
    typename decltype((*output)->fallback_surface_id)::BaseType::BufferWriter
        fallback_surface_id_writer;
    mojo::internal::Serialize<::viz::mojom::SurfaceIdDataView>(
        in_fallback_surface_id, buffer, &fallback_surface_id_writer, context);
    (*output)->fallback_surface_id.Set(
        fallback_surface_id_writer.is_null() ? nullptr : fallback_surface_id_writer.data());
    (*output)->default_background_color = CallWithContext(Traits::default_background_color, input, custom_context);
    (*output)->stretch_content_to_fill_bounds = CallWithContext(Traits::stretch_content_to_fill_bounds, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::viz::mojom::internal::SurfaceQuadState_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::viz::mojom::SurfaceQuadStateDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::viz::mojom::TextureQuadStateDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::viz::mojom::TextureQuadStateDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::viz::mojom::internal::TextureQuadState_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->resource_id = CallWithContext(Traits::resource_id, input, custom_context);
    decltype(CallWithContext(Traits::resource_size_in_pixels, input, custom_context)) in_resource_size_in_pixels = CallWithContext(Traits::resource_size_in_pixels, input, custom_context);
    typename decltype((*output)->resource_size_in_pixels)::BaseType::BufferWriter
        resource_size_in_pixels_writer;
    mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
        in_resource_size_in_pixels, buffer, &resource_size_in_pixels_writer, context);
    (*output)->resource_size_in_pixels.Set(
        resource_size_in_pixels_writer.is_null() ? nullptr : resource_size_in_pixels_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->resource_size_in_pixels.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null resource_size_in_pixels in TextureQuadState struct");
    (*output)->premultiplied_alpha = CallWithContext(Traits::premultiplied_alpha, input, custom_context);
    decltype(CallWithContext(Traits::uv_top_left, input, custom_context)) in_uv_top_left = CallWithContext(Traits::uv_top_left, input, custom_context);
    typename decltype((*output)->uv_top_left)::BaseType::BufferWriter
        uv_top_left_writer;
    mojo::internal::Serialize<::gfx::mojom::PointFDataView>(
        in_uv_top_left, buffer, &uv_top_left_writer, context);
    (*output)->uv_top_left.Set(
        uv_top_left_writer.is_null() ? nullptr : uv_top_left_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->uv_top_left.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null uv_top_left in TextureQuadState struct");
    decltype(CallWithContext(Traits::uv_bottom_right, input, custom_context)) in_uv_bottom_right = CallWithContext(Traits::uv_bottom_right, input, custom_context);
    typename decltype((*output)->uv_bottom_right)::BaseType::BufferWriter
        uv_bottom_right_writer;
    mojo::internal::Serialize<::gfx::mojom::PointFDataView>(
        in_uv_bottom_right, buffer, &uv_bottom_right_writer, context);
    (*output)->uv_bottom_right.Set(
        uv_bottom_right_writer.is_null() ? nullptr : uv_bottom_right_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->uv_bottom_right.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null uv_bottom_right in TextureQuadState struct");
    (*output)->background_color = CallWithContext(Traits::background_color, input, custom_context);
    decltype(CallWithContext(Traits::vertex_opacity, input, custom_context)) in_vertex_opacity = CallWithContext(Traits::vertex_opacity, input, custom_context);
    typename decltype((*output)->vertex_opacity)::BaseType::BufferWriter
        vertex_opacity_writer;
    const mojo::internal::ContainerValidateParams vertex_opacity_validate_params(
        4, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<float>>(
        in_vertex_opacity, buffer, &vertex_opacity_writer, &vertex_opacity_validate_params,
        context);
    (*output)->vertex_opacity.Set(
        vertex_opacity_writer.is_null() ? nullptr : vertex_opacity_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->vertex_opacity.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null vertex_opacity in TextureQuadState struct");
    (*output)->y_flipped = CallWithContext(Traits::y_flipped, input, custom_context);
    (*output)->nearest_neighbor = CallWithContext(Traits::nearest_neighbor, input, custom_context);
    (*output)->secure_output_only = CallWithContext(Traits::secure_output_only, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::viz::mojom::internal::TextureQuadState_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::viz::mojom::TextureQuadStateDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::viz::mojom::TileQuadStateDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::viz::mojom::TileQuadStateDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::viz::mojom::internal::TileQuadState_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::tex_coord_rect, input, custom_context)) in_tex_coord_rect = CallWithContext(Traits::tex_coord_rect, input, custom_context);
    typename decltype((*output)->tex_coord_rect)::BaseType::BufferWriter
        tex_coord_rect_writer;
    mojo::internal::Serialize<::gfx::mojom::RectFDataView>(
        in_tex_coord_rect, buffer, &tex_coord_rect_writer, context);
    (*output)->tex_coord_rect.Set(
        tex_coord_rect_writer.is_null() ? nullptr : tex_coord_rect_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->tex_coord_rect.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null tex_coord_rect in TileQuadState struct");
    decltype(CallWithContext(Traits::texture_size, input, custom_context)) in_texture_size = CallWithContext(Traits::texture_size, input, custom_context);
    typename decltype((*output)->texture_size)::BaseType::BufferWriter
        texture_size_writer;
    mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
        in_texture_size, buffer, &texture_size_writer, context);
    (*output)->texture_size.Set(
        texture_size_writer.is_null() ? nullptr : texture_size_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->texture_size.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null texture_size in TileQuadState struct");
    (*output)->swizzle_contents = CallWithContext(Traits::swizzle_contents, input, custom_context);
    (*output)->is_premultiplied = CallWithContext(Traits::is_premultiplied, input, custom_context);
    (*output)->resource_id = CallWithContext(Traits::resource_id, input, custom_context);
    (*output)->nearest_neighbor = CallWithContext(Traits::nearest_neighbor, input, custom_context);
    (*output)->force_anti_aliasing_off = CallWithContext(Traits::force_anti_aliasing_off, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::viz::mojom::internal::TileQuadState_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::viz::mojom::TileQuadStateDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::viz::mojom::YUVVideoQuadStateDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::viz::mojom::YUVVideoQuadStateDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::viz::mojom::internal::YUVVideoQuadState_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::ya_tex_coord_rect, input, custom_context)) in_ya_tex_coord_rect = CallWithContext(Traits::ya_tex_coord_rect, input, custom_context);
    typename decltype((*output)->ya_tex_coord_rect)::BaseType::BufferWriter
        ya_tex_coord_rect_writer;
    mojo::internal::Serialize<::gfx::mojom::RectFDataView>(
        in_ya_tex_coord_rect, buffer, &ya_tex_coord_rect_writer, context);
    (*output)->ya_tex_coord_rect.Set(
        ya_tex_coord_rect_writer.is_null() ? nullptr : ya_tex_coord_rect_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->ya_tex_coord_rect.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null ya_tex_coord_rect in YUVVideoQuadState struct");
    decltype(CallWithContext(Traits::uv_tex_coord_rect, input, custom_context)) in_uv_tex_coord_rect = CallWithContext(Traits::uv_tex_coord_rect, input, custom_context);
    typename decltype((*output)->uv_tex_coord_rect)::BaseType::BufferWriter
        uv_tex_coord_rect_writer;
    mojo::internal::Serialize<::gfx::mojom::RectFDataView>(
        in_uv_tex_coord_rect, buffer, &uv_tex_coord_rect_writer, context);
    (*output)->uv_tex_coord_rect.Set(
        uv_tex_coord_rect_writer.is_null() ? nullptr : uv_tex_coord_rect_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->uv_tex_coord_rect.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null uv_tex_coord_rect in YUVVideoQuadState struct");
    decltype(CallWithContext(Traits::ya_tex_size, input, custom_context)) in_ya_tex_size = CallWithContext(Traits::ya_tex_size, input, custom_context);
    typename decltype((*output)->ya_tex_size)::BaseType::BufferWriter
        ya_tex_size_writer;
    mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
        in_ya_tex_size, buffer, &ya_tex_size_writer, context);
    (*output)->ya_tex_size.Set(
        ya_tex_size_writer.is_null() ? nullptr : ya_tex_size_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->ya_tex_size.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null ya_tex_size in YUVVideoQuadState struct");
    decltype(CallWithContext(Traits::uv_tex_size, input, custom_context)) in_uv_tex_size = CallWithContext(Traits::uv_tex_size, input, custom_context);
    typename decltype((*output)->uv_tex_size)::BaseType::BufferWriter
        uv_tex_size_writer;
    mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
        in_uv_tex_size, buffer, &uv_tex_size_writer, context);
    (*output)->uv_tex_size.Set(
        uv_tex_size_writer.is_null() ? nullptr : uv_tex_size_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->uv_tex_size.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null uv_tex_size in YUVVideoQuadState struct");
    (*output)->y_plane_resource_id = CallWithContext(Traits::y_plane_resource_id, input, custom_context);
    (*output)->u_plane_resource_id = CallWithContext(Traits::u_plane_resource_id, input, custom_context);
    (*output)->v_plane_resource_id = CallWithContext(Traits::v_plane_resource_id, input, custom_context);
    (*output)->a_plane_resource_id = CallWithContext(Traits::a_plane_resource_id, input, custom_context);
    (*output)->resource_offset = CallWithContext(Traits::resource_offset, input, custom_context);
    (*output)->resource_multiplier = CallWithContext(Traits::resource_multiplier, input, custom_context);
    (*output)->bits_per_channel = CallWithContext(Traits::bits_per_channel, input, custom_context);
    decltype(CallWithContext(Traits::video_color_space, input, custom_context)) in_video_color_space = CallWithContext(Traits::video_color_space, input, custom_context);
    typename decltype((*output)->video_color_space)::BaseType::BufferWriter
        video_color_space_writer;
    mojo::internal::Serialize<::gfx::mojom::ColorSpaceDataView>(
        in_video_color_space, buffer, &video_color_space_writer, context);
    (*output)->video_color_space.Set(
        video_color_space_writer.is_null() ? nullptr : video_color_space_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->video_color_space.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null video_color_space in YUVVideoQuadState struct");
    (*output)->require_overlay = CallWithContext(Traits::require_overlay, input, custom_context);
    (*output)->is_protected_video = CallWithContext(Traits::is_protected_video, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::viz::mojom::internal::YUVVideoQuadState_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::viz::mojom::YUVVideoQuadStateDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::viz::mojom::DrawQuadDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::viz::mojom::DrawQuadDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::viz::mojom::internal::DrawQuad_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::rect, input, custom_context)) in_rect = CallWithContext(Traits::rect, input, custom_context);
    typename decltype((*output)->rect)::BaseType::BufferWriter
        rect_writer;
    mojo::internal::Serialize<::gfx::mojom::RectDataView>(
        in_rect, buffer, &rect_writer, context);
    (*output)->rect.Set(
        rect_writer.is_null() ? nullptr : rect_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->rect.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null rect in DrawQuad struct");
    decltype(CallWithContext(Traits::visible_rect, input, custom_context)) in_visible_rect = CallWithContext(Traits::visible_rect, input, custom_context);
    typename decltype((*output)->visible_rect)::BaseType::BufferWriter
        visible_rect_writer;
    mojo::internal::Serialize<::gfx::mojom::RectDataView>(
        in_visible_rect, buffer, &visible_rect_writer, context);
    (*output)->visible_rect.Set(
        visible_rect_writer.is_null() ? nullptr : visible_rect_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->visible_rect.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null visible_rect in DrawQuad struct");
    (*output)->needs_blending = CallWithContext(Traits::needs_blending, input, custom_context);
    decltype(CallWithContext(Traits::sqs, input, custom_context)) in_sqs = CallWithContext(Traits::sqs, input, custom_context);
    typename decltype((*output)->sqs)::BaseType::BufferWriter
        sqs_writer;
    mojo::internal::Serialize<::viz::mojom::SharedQuadStateDataView>(
        in_sqs, buffer, &sqs_writer, context);
    (*output)->sqs.Set(
        sqs_writer.is_null() ? nullptr : sqs_writer.data());
    decltype(CallWithContext(Traits::draw_quad_state, input, custom_context)) in_draw_quad_state = CallWithContext(Traits::draw_quad_state, input, custom_context);
    typename decltype((*output)->draw_quad_state)::BufferWriter draw_quad_state_writer;
    draw_quad_state_writer.AllocateInline(buffer, &(*output)->draw_quad_state);
    mojo::internal::Serialize<::viz::mojom::DrawQuadStateDataView>(
        in_draw_quad_state, buffer, &draw_quad_state_writer, true, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->draw_quad_state.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null draw_quad_state in DrawQuad struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::viz::mojom::internal::DrawQuad_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::viz::mojom::DrawQuadDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::viz::mojom::DrawQuadStateDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::viz::mojom::DrawQuadStateDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::viz::mojom::internal::DrawQuadState_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);

    if (!inlined)
      writer->Allocate(buffer);

    ::viz::mojom::internal::DrawQuadState_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = CallWithContext(Traits::GetTag, input, custom_context);
    switch (result->tag) {
      case ::viz::mojom::DrawQuadStateDataView::Tag::DEBUG_BORDER_QUAD_STATE: {
        decltype(CallWithContext(Traits::debug_border_quad_state, input, custom_context))
            in_debug_border_quad_state = CallWithContext(Traits::debug_border_quad_state, input,
                                          custom_context);
        typename decltype(result->data.f_debug_border_quad_state)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::viz::mojom::DebugBorderQuadStateDataView>(
            in_debug_border_quad_state, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null debug_border_quad_state in DrawQuadState union");
        result->data.f_debug_border_quad_state.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::viz::mojom::DrawQuadStateDataView::Tag::RENDER_PASS_QUAD_STATE: {
        decltype(CallWithContext(Traits::render_pass_quad_state, input, custom_context))
            in_render_pass_quad_state = CallWithContext(Traits::render_pass_quad_state, input,
                                          custom_context);
        typename decltype(result->data.f_render_pass_quad_state)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::viz::mojom::RenderPassQuadStateDataView>(
            in_render_pass_quad_state, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null render_pass_quad_state in DrawQuadState union");
        result->data.f_render_pass_quad_state.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::viz::mojom::DrawQuadStateDataView::Tag::SOLID_COLOR_QUAD_STATE: {
        decltype(CallWithContext(Traits::solid_color_quad_state, input, custom_context))
            in_solid_color_quad_state = CallWithContext(Traits::solid_color_quad_state, input,
                                          custom_context);
        typename decltype(result->data.f_solid_color_quad_state)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::viz::mojom::SolidColorQuadStateDataView>(
            in_solid_color_quad_state, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null solid_color_quad_state in DrawQuadState union");
        result->data.f_solid_color_quad_state.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::viz::mojom::DrawQuadStateDataView::Tag::STREAM_VIDEO_QUAD_STATE: {
        decltype(CallWithContext(Traits::stream_video_quad_state, input, custom_context))
            in_stream_video_quad_state = CallWithContext(Traits::stream_video_quad_state, input,
                                          custom_context);
        typename decltype(result->data.f_stream_video_quad_state)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::viz::mojom::StreamVideoQuadStateDataView>(
            in_stream_video_quad_state, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null stream_video_quad_state in DrawQuadState union");
        result->data.f_stream_video_quad_state.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::viz::mojom::DrawQuadStateDataView::Tag::SURFACE_QUAD_STATE: {
        decltype(CallWithContext(Traits::surface_quad_state, input, custom_context))
            in_surface_quad_state = CallWithContext(Traits::surface_quad_state, input,
                                          custom_context);
        typename decltype(result->data.f_surface_quad_state)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::viz::mojom::SurfaceQuadStateDataView>(
            in_surface_quad_state, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null surface_quad_state in DrawQuadState union");
        result->data.f_surface_quad_state.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::viz::mojom::DrawQuadStateDataView::Tag::TEXTURE_QUAD_STATE: {
        decltype(CallWithContext(Traits::texture_quad_state, input, custom_context))
            in_texture_quad_state = CallWithContext(Traits::texture_quad_state, input,
                                          custom_context);
        typename decltype(result->data.f_texture_quad_state)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::viz::mojom::TextureQuadStateDataView>(
            in_texture_quad_state, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null texture_quad_state in DrawQuadState union");
        result->data.f_texture_quad_state.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::viz::mojom::DrawQuadStateDataView::Tag::TILE_QUAD_STATE: {
        decltype(CallWithContext(Traits::tile_quad_state, input, custom_context))
            in_tile_quad_state = CallWithContext(Traits::tile_quad_state, input,
                                          custom_context);
        typename decltype(result->data.f_tile_quad_state)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::viz::mojom::TileQuadStateDataView>(
            in_tile_quad_state, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null tile_quad_state in DrawQuadState union");
        result->data.f_tile_quad_state.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::viz::mojom::DrawQuadStateDataView::Tag::YUV_VIDEO_QUAD_STATE: {
        decltype(CallWithContext(Traits::yuv_video_quad_state, input, custom_context))
            in_yuv_video_quad_state = CallWithContext(Traits::yuv_video_quad_state, input,
                                          custom_context);
        typename decltype(result->data.f_yuv_video_quad_state)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::viz::mojom::YUVVideoQuadStateDataView>(
            in_yuv_video_quad_state, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null yuv_video_quad_state in DrawQuadState union");
        result->data.f_yuv_video_quad_state.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
    }

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::viz::mojom::internal::DrawQuadState_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::viz::mojom::DrawQuadStateDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace viz {
namespace mojom {



inline void RenderPassQuadStateDataView::GetMaskUvRectDataView(
    ::gfx::mojom::RectFDataView* output) {
  auto pointer = data_->mask_uv_rect.Get();
  *output = ::gfx::mojom::RectFDataView(pointer, context_);
}
inline void RenderPassQuadStateDataView::GetMaskTextureSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->mask_texture_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}
inline void RenderPassQuadStateDataView::GetFiltersScaleDataView(
    ::gfx::mojom::Vector2dFDataView* output) {
  auto pointer = data_->filters_scale.Get();
  *output = ::gfx::mojom::Vector2dFDataView(pointer, context_);
}
inline void RenderPassQuadStateDataView::GetFiltersOriginDataView(
    ::gfx::mojom::PointFDataView* output) {
  auto pointer = data_->filters_origin.Get();
  *output = ::gfx::mojom::PointFDataView(pointer, context_);
}
inline void RenderPassQuadStateDataView::GetTexCoordRectDataView(
    ::gfx::mojom::RectFDataView* output) {
  auto pointer = data_->tex_coord_rect.Get();
  *output = ::gfx::mojom::RectFDataView(pointer, context_);
}




inline void StreamVideoQuadStateDataView::GetResourceSizeInPixelsDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->resource_size_in_pixels.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}
inline void StreamVideoQuadStateDataView::GetMatrixDataView(
    ::gfx::mojom::TransformDataView* output) {
  auto pointer = data_->matrix.Get();
  *output = ::gfx::mojom::TransformDataView(pointer, context_);
}


inline void SurfaceQuadStateDataView::GetPrimarySurfaceIdDataView(
    ::viz::mojom::SurfaceIdDataView* output) {
  auto pointer = data_->primary_surface_id.Get();
  *output = ::viz::mojom::SurfaceIdDataView(pointer, context_);
}
inline void SurfaceQuadStateDataView::GetFallbackSurfaceIdDataView(
    ::viz::mojom::SurfaceIdDataView* output) {
  auto pointer = data_->fallback_surface_id.Get();
  *output = ::viz::mojom::SurfaceIdDataView(pointer, context_);
}


inline void TextureQuadStateDataView::GetResourceSizeInPixelsDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->resource_size_in_pixels.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}
inline void TextureQuadStateDataView::GetUvTopLeftDataView(
    ::gfx::mojom::PointFDataView* output) {
  auto pointer = data_->uv_top_left.Get();
  *output = ::gfx::mojom::PointFDataView(pointer, context_);
}
inline void TextureQuadStateDataView::GetUvBottomRightDataView(
    ::gfx::mojom::PointFDataView* output) {
  auto pointer = data_->uv_bottom_right.Get();
  *output = ::gfx::mojom::PointFDataView(pointer, context_);
}
inline void TextureQuadStateDataView::GetVertexOpacityDataView(
    mojo::ArrayDataView<float>* output) {
  auto pointer = data_->vertex_opacity.Get();
  *output = mojo::ArrayDataView<float>(pointer, context_);
}


inline void TileQuadStateDataView::GetTexCoordRectDataView(
    ::gfx::mojom::RectFDataView* output) {
  auto pointer = data_->tex_coord_rect.Get();
  *output = ::gfx::mojom::RectFDataView(pointer, context_);
}
inline void TileQuadStateDataView::GetTextureSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->texture_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}


inline void YUVVideoQuadStateDataView::GetYaTexCoordRectDataView(
    ::gfx::mojom::RectFDataView* output) {
  auto pointer = data_->ya_tex_coord_rect.Get();
  *output = ::gfx::mojom::RectFDataView(pointer, context_);
}
inline void YUVVideoQuadStateDataView::GetUvTexCoordRectDataView(
    ::gfx::mojom::RectFDataView* output) {
  auto pointer = data_->uv_tex_coord_rect.Get();
  *output = ::gfx::mojom::RectFDataView(pointer, context_);
}
inline void YUVVideoQuadStateDataView::GetYaTexSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->ya_tex_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}
inline void YUVVideoQuadStateDataView::GetUvTexSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->uv_tex_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}
inline void YUVVideoQuadStateDataView::GetVideoColorSpaceDataView(
    ::gfx::mojom::ColorSpaceDataView* output) {
  auto pointer = data_->video_color_space.Get();
  *output = ::gfx::mojom::ColorSpaceDataView(pointer, context_);
}


inline void DrawQuadDataView::GetRectDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->rect.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}
inline void DrawQuadDataView::GetVisibleRectDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->visible_rect.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}
inline void DrawQuadDataView::GetSqsDataView(
    ::viz::mojom::SharedQuadStateDataView* output) {
  auto pointer = data_->sqs.Get();
  *output = ::viz::mojom::SharedQuadStateDataView(pointer, context_);
}
inline void DrawQuadDataView::GetDrawQuadStateDataView(
    DrawQuadStateDataView* output) {
  auto pointer = &data_->draw_quad_state;
  *output = DrawQuadStateDataView(pointer, context_);
}


inline void DrawQuadStateDataView::GetDebugBorderQuadStateDataView(
    DebugBorderQuadStateDataView* output) {
  DCHECK(is_debug_border_quad_state());
  *output = DebugBorderQuadStateDataView(data_->data.f_debug_border_quad_state.Get(), context_);
}
inline void DrawQuadStateDataView::GetRenderPassQuadStateDataView(
    RenderPassQuadStateDataView* output) {
  DCHECK(is_render_pass_quad_state());
  *output = RenderPassQuadStateDataView(data_->data.f_render_pass_quad_state.Get(), context_);
}
inline void DrawQuadStateDataView::GetSolidColorQuadStateDataView(
    SolidColorQuadStateDataView* output) {
  DCHECK(is_solid_color_quad_state());
  *output = SolidColorQuadStateDataView(data_->data.f_solid_color_quad_state.Get(), context_);
}
inline void DrawQuadStateDataView::GetStreamVideoQuadStateDataView(
    StreamVideoQuadStateDataView* output) {
  DCHECK(is_stream_video_quad_state());
  *output = StreamVideoQuadStateDataView(data_->data.f_stream_video_quad_state.Get(), context_);
}
inline void DrawQuadStateDataView::GetSurfaceQuadStateDataView(
    SurfaceQuadStateDataView* output) {
  DCHECK(is_surface_quad_state());
  *output = SurfaceQuadStateDataView(data_->data.f_surface_quad_state.Get(), context_);
}
inline void DrawQuadStateDataView::GetTextureQuadStateDataView(
    TextureQuadStateDataView* output) {
  DCHECK(is_texture_quad_state());
  *output = TextureQuadStateDataView(data_->data.f_texture_quad_state.Get(), context_);
}
inline void DrawQuadStateDataView::GetTileQuadStateDataView(
    TileQuadStateDataView* output) {
  DCHECK(is_tile_quad_state());
  *output = TileQuadStateDataView(data_->data.f_tile_quad_state.Get(), context_);
}
inline void DrawQuadStateDataView::GetYuvVideoQuadStateDataView(
    YUVVideoQuadStateDataView* output) {
  DCHECK(is_yuv_video_quad_state());
  *output = YUVVideoQuadStateDataView(data_->data.f_yuv_video_quad_state.Get(), context_);
}


}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_QUADS_MOJOM_SHARED_H_
