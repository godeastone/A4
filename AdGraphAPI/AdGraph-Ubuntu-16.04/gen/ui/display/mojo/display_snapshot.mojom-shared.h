// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_DISPLAY_MOJO_DISPLAY_SNAPSHOT_MOJOM_SHARED_H_
#define UI_DISPLAY_MOJO_DISPLAY_SNAPSHOT_MOJOM_SHARED_H_

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
#include "ui/display/mojo/display_snapshot.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file_path.mojom-shared.h"
#include "ui/display/mojo/display_constants.mojom-shared.h"
#include "ui/display/mojo/display_mode.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "ui/gfx/mojo/color_space.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace display {
namespace mojom {
class DisplaySnapshotDataView;



}  // namespace mojom
}  // namespace display

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::display::mojom::DisplaySnapshotDataView> {
  using Data = ::display::mojom::internal::DisplaySnapshot_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace display {
namespace mojom {
class DisplaySnapshotDataView {
 public:
  DisplaySnapshotDataView() {}

  DisplaySnapshotDataView(
      internal::DisplaySnapshot_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t display_id() const {
    return data_->display_id;
  }
  inline void GetOriginDataView(
      ::gfx::mojom::PointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointDataView>(
        pointer, output, context_);
  }
  inline void GetPhysicalSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPhysicalSize(UserType* output) {
    auto* pointer = data_->physical_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::display::mojom::DisplayConnectionType>(
        data_value, output);
  }

  ::display::mojom::DisplayConnectionType type() const {
    return static_cast<::display::mojom::DisplayConnectionType>(data_->type);
  }
  bool is_aspect_preserving_scaling() const {
    return data_->is_aspect_preserving_scaling;
  }
  bool has_overscan() const {
    return data_->has_overscan;
  }
  bool has_color_correction_matrix() const {
    return data_->has_color_correction_matrix;
  }
  inline void GetColorSpaceDataView(
      ::gfx::mojom::ColorSpaceDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadColorSpace(UserType* output) {
    auto* pointer = data_->color_space.Get();
    return mojo::internal::Deserialize<::gfx::mojom::ColorSpaceDataView>(
        pointer, output, context_);
  }
  inline void GetDisplayNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisplayName(UserType* output) {
    auto* pointer = data_->display_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSysPathDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSysPath(UserType* output) {
    auto* pointer = data_->sys_path.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, context_);
  }
  inline void GetModesDataView(
      mojo::ArrayDataView<::display::mojom::DisplayModeDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadModes(UserType* output) {
    auto* pointer = data_->modes.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::display::mojom::DisplayModeDataView>>(
        pointer, output, context_);
  }
  inline void GetEdidDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEdid(UserType* output) {
    auto* pointer = data_->edid.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  uint64_t current_mode_index() const {
    return data_->current_mode_index;
  }
  bool has_current_mode() const {
    return data_->has_current_mode;
  }
  uint64_t native_mode_index() const {
    return data_->native_mode_index;
  }
  bool has_native_mode() const {
    return data_->has_native_mode;
  }
  int64_t product_code() const {
    return data_->product_code;
  }
  int32_t year_of_manufacture() const {
    return data_->year_of_manufacture;
  }
  inline void GetMaximumCursorSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMaximumCursorSize(UserType* output) {
    auto* pointer = data_->maximum_cursor_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
 private:
  internal::DisplaySnapshot_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace display

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::display::mojom::DisplaySnapshotDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::display::mojom::DisplaySnapshotDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::display::mojom::internal::DisplaySnapshot_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->display_id = CallWithContext(Traits::display_id, input, custom_context);
    decltype(CallWithContext(Traits::origin, input, custom_context)) in_origin = CallWithContext(Traits::origin, input, custom_context);
    typename decltype((*output)->origin)::BaseType::BufferWriter
        origin_writer;
    mojo::internal::Serialize<::gfx::mojom::PointDataView>(
        in_origin, buffer, &origin_writer, context);
    (*output)->origin.Set(
        origin_writer.is_null() ? nullptr : origin_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->origin.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null origin in DisplaySnapshot struct");
    decltype(CallWithContext(Traits::physical_size, input, custom_context)) in_physical_size = CallWithContext(Traits::physical_size, input, custom_context);
    typename decltype((*output)->physical_size)::BaseType::BufferWriter
        physical_size_writer;
    mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
        in_physical_size, buffer, &physical_size_writer, context);
    (*output)->physical_size.Set(
        physical_size_writer.is_null() ? nullptr : physical_size_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->physical_size.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null physical_size in DisplaySnapshot struct");
    mojo::internal::Serialize<::display::mojom::DisplayConnectionType>(
        CallWithContext(Traits::type, input, custom_context), &(*output)->type);
    (*output)->is_aspect_preserving_scaling = CallWithContext(Traits::is_aspect_preserving_scaling, input, custom_context);
    (*output)->has_overscan = CallWithContext(Traits::has_overscan, input, custom_context);
    (*output)->has_color_correction_matrix = CallWithContext(Traits::has_color_correction_matrix, input, custom_context);
    decltype(CallWithContext(Traits::color_space, input, custom_context)) in_color_space = CallWithContext(Traits::color_space, input, custom_context);
    typename decltype((*output)->color_space)::BaseType::BufferWriter
        color_space_writer;
    mojo::internal::Serialize<::gfx::mojom::ColorSpaceDataView>(
        in_color_space, buffer, &color_space_writer, context);
    (*output)->color_space.Set(
        color_space_writer.is_null() ? nullptr : color_space_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->color_space.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null color_space in DisplaySnapshot struct");
    decltype(CallWithContext(Traits::display_name, input, custom_context)) in_display_name = CallWithContext(Traits::display_name, input, custom_context);
    typename decltype((*output)->display_name)::BaseType::BufferWriter
        display_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_display_name, buffer, &display_name_writer, context);
    (*output)->display_name.Set(
        display_name_writer.is_null() ? nullptr : display_name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->display_name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null display_name in DisplaySnapshot struct");
    decltype(CallWithContext(Traits::sys_path, input, custom_context)) in_sys_path = CallWithContext(Traits::sys_path, input, custom_context);
    typename decltype((*output)->sys_path)::BaseType::BufferWriter
        sys_path_writer;
    mojo::internal::Serialize<::mojo_base::mojom::FilePathDataView>(
        in_sys_path, buffer, &sys_path_writer, context);
    (*output)->sys_path.Set(
        sys_path_writer.is_null() ? nullptr : sys_path_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->sys_path.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null sys_path in DisplaySnapshot struct");
    decltype(CallWithContext(Traits::modes, input, custom_context)) in_modes = CallWithContext(Traits::modes, input, custom_context);
    typename decltype((*output)->modes)::BaseType::BufferWriter
        modes_writer;
    const mojo::internal::ContainerValidateParams modes_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::display::mojom::DisplayModeDataView>>(
        in_modes, buffer, &modes_writer, &modes_validate_params,
        context);
    (*output)->modes.Set(
        modes_writer.is_null() ? nullptr : modes_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->modes.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null modes in DisplaySnapshot struct");
    decltype(CallWithContext(Traits::edid, input, custom_context)) in_edid = CallWithContext(Traits::edid, input, custom_context);
    typename decltype((*output)->edid)::BaseType::BufferWriter
        edid_writer;
    const mojo::internal::ContainerValidateParams edid_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_edid, buffer, &edid_writer, &edid_validate_params,
        context);
    (*output)->edid.Set(
        edid_writer.is_null() ? nullptr : edid_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->edid.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null edid in DisplaySnapshot struct");
    (*output)->current_mode_index = CallWithContext(Traits::current_mode_index, input, custom_context);
    (*output)->has_current_mode = CallWithContext(Traits::has_current_mode, input, custom_context);
    (*output)->native_mode_index = CallWithContext(Traits::native_mode_index, input, custom_context);
    (*output)->has_native_mode = CallWithContext(Traits::has_native_mode, input, custom_context);
    (*output)->product_code = CallWithContext(Traits::product_code, input, custom_context);
    (*output)->year_of_manufacture = CallWithContext(Traits::year_of_manufacture, input, custom_context);
    decltype(CallWithContext(Traits::maximum_cursor_size, input, custom_context)) in_maximum_cursor_size = CallWithContext(Traits::maximum_cursor_size, input, custom_context);
    typename decltype((*output)->maximum_cursor_size)::BaseType::BufferWriter
        maximum_cursor_size_writer;
    mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
        in_maximum_cursor_size, buffer, &maximum_cursor_size_writer, context);
    (*output)->maximum_cursor_size.Set(
        maximum_cursor_size_writer.is_null() ? nullptr : maximum_cursor_size_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->maximum_cursor_size.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null maximum_cursor_size in DisplaySnapshot struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::display::mojom::internal::DisplaySnapshot_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::display::mojom::DisplaySnapshotDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace display {
namespace mojom {

inline void DisplaySnapshotDataView::GetOriginDataView(
    ::gfx::mojom::PointDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::gfx::mojom::PointDataView(pointer, context_);
}
inline void DisplaySnapshotDataView::GetPhysicalSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->physical_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}
inline void DisplaySnapshotDataView::GetColorSpaceDataView(
    ::gfx::mojom::ColorSpaceDataView* output) {
  auto pointer = data_->color_space.Get();
  *output = ::gfx::mojom::ColorSpaceDataView(pointer, context_);
}
inline void DisplaySnapshotDataView::GetDisplayNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->display_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void DisplaySnapshotDataView::GetSysPathDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->sys_path.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, context_);
}
inline void DisplaySnapshotDataView::GetModesDataView(
    mojo::ArrayDataView<::display::mojom::DisplayModeDataView>* output) {
  auto pointer = data_->modes.Get();
  *output = mojo::ArrayDataView<::display::mojom::DisplayModeDataView>(pointer, context_);
}
inline void DisplaySnapshotDataView::GetEdidDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->edid.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void DisplaySnapshotDataView::GetMaximumCursorSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->maximum_cursor_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace display

#endif  // UI_DISPLAY_MOJO_DISPLAY_SNAPSHOT_MOJOM_SHARED_H_
