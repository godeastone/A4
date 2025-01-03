// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_WINDOW_MANAGER_CONSTANTS_MOJOM_H_
#define SERVICES_UI_PUBLIC_INTERFACES_WINDOW_MANAGER_CONSTANTS_MOJOM_H_

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
#include "services/ui/public/interfaces/window_manager_constants.mojom-shared.h"
#include "ui/display/mojo/display.mojom.h"
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


namespace ui {
namespace mojom {
constexpr int32_t kResizeBehaviorNone = 0;
constexpr int32_t kResizeBehaviorCanResize = 1;
constexpr int32_t kResizeBehaviorCanMaximize = 2;
constexpr int32_t kResizeBehaviorCanMinimize = 4;
constexpr float kCursorMultiplierForExternalDisplays = 1.2f;
class FrameDecorationValues;
using FrameDecorationValuesPtr = mojo::StructPtr<FrameDecorationValues>;

class WsDisplay;
using WsDisplayPtr = mojo::StructPtr<WsDisplay>;

class WmViewportMetrics;
using WmViewportMetricsPtr = mojo::StructPtr<WmViewportMetrics>;

class BlockingContainers;
using BlockingContainersPtr = mojo::InlinedStructPtr<BlockingContainers>;






class  BlockingContainers {
 public:
  using DataView = BlockingContainersDataView;
  using Data_ = internal::BlockingContainers_Data;

  template <typename... Args>
  static BlockingContainersPtr New(Args&&... args) {
    return BlockingContainersPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BlockingContainersPtr From(const U& u) {
    return mojo::TypeConverter<BlockingContainersPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BlockingContainers>::Convert(*this);
  }


  BlockingContainers();

  BlockingContainers(
      uint64_t system_modal_container_id,
      uint64_t min_container_id);

  ~BlockingContainers();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BlockingContainersPtr>
  BlockingContainersPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, BlockingContainers>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BlockingContainers::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        BlockingContainers::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::BlockingContainers_UnserializedMessageContext<
            UserType, BlockingContainers::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<BlockingContainers::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return BlockingContainers::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::BlockingContainers_UnserializedMessageContext<
            UserType, BlockingContainers::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<BlockingContainers::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  uint64_t system_modal_container_id;
  uint64_t min_container_id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




class  FrameDecorationValues {
 public:
  using DataView = FrameDecorationValuesDataView;
  using Data_ = internal::FrameDecorationValues_Data;

  template <typename... Args>
  static FrameDecorationValuesPtr New(Args&&... args) {
    return FrameDecorationValuesPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FrameDecorationValuesPtr From(const U& u) {
    return mojo::TypeConverter<FrameDecorationValuesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FrameDecorationValues>::Convert(*this);
  }


  FrameDecorationValues();

  FrameDecorationValues(
      const gfx::Insets& normal_client_area_insets,
      const gfx::Insets& maximized_client_area_insets,
      uint32_t max_title_bar_button_width);

  ~FrameDecorationValues();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FrameDecorationValuesPtr>
  FrameDecorationValuesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FrameDecorationValues>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FrameDecorationValues::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FrameDecorationValues::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FrameDecorationValues_UnserializedMessageContext<
            UserType, FrameDecorationValues::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<FrameDecorationValues::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return FrameDecorationValues::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FrameDecorationValues_UnserializedMessageContext<
            UserType, FrameDecorationValues::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FrameDecorationValues::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  gfx::Insets normal_client_area_insets;
  gfx::Insets maximized_client_area_insets;
  uint32_t max_title_bar_button_width;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  WsDisplay {
 public:
  using DataView = WsDisplayDataView;
  using Data_ = internal::WsDisplay_Data;

  template <typename... Args>
  static WsDisplayPtr New(Args&&... args) {
    return WsDisplayPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static WsDisplayPtr From(const U& u) {
    return mojo::TypeConverter<WsDisplayPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WsDisplay>::Convert(*this);
  }


  WsDisplay();

  WsDisplay(
      const display::Display& display,
      FrameDecorationValuesPtr frame_decoration_values);

  ~WsDisplay();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WsDisplayPtr>
  WsDisplayPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WsDisplay>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        WsDisplay::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        WsDisplay::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::WsDisplay_UnserializedMessageContext<
            UserType, WsDisplay::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<WsDisplay::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return WsDisplay::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::WsDisplay_UnserializedMessageContext<
            UserType, WsDisplay::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<WsDisplay::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  display::Display display;
  FrameDecorationValuesPtr frame_decoration_values;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(WsDisplay);
};


class  WmViewportMetrics {
 public:
  using DataView = WmViewportMetricsDataView;
  using Data_ = internal::WmViewportMetrics_Data;

  template <typename... Args>
  static WmViewportMetricsPtr New(Args&&... args) {
    return WmViewportMetricsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static WmViewportMetricsPtr From(const U& u) {
    return mojo::TypeConverter<WmViewportMetricsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WmViewportMetrics>::Convert(*this);
  }


  WmViewportMetrics();

  WmViewportMetrics(
      const gfx::Rect& bounds_in_pixels,
      float device_scale_factor,
      float ui_scale_factor);

  ~WmViewportMetrics();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WmViewportMetricsPtr>
  WmViewportMetricsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WmViewportMetrics>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        WmViewportMetrics::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        WmViewportMetrics::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::WmViewportMetrics_UnserializedMessageContext<
            UserType, WmViewportMetrics::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<WmViewportMetrics::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return WmViewportMetrics::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::WmViewportMetrics_UnserializedMessageContext<
            UserType, WmViewportMetrics::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<WmViewportMetrics::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  gfx::Rect bounds_in_pixels;
  float device_scale_factor;
  float ui_scale_factor;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


template <typename StructPtrType>
FrameDecorationValuesPtr FrameDecorationValues::Clone() const {
  return New(
      mojo::Clone(normal_client_area_insets),
      mojo::Clone(maximized_client_area_insets),
      mojo::Clone(max_title_bar_button_width)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FrameDecorationValues>::value>::type*>
bool FrameDecorationValues::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->normal_client_area_insets, other_struct.normal_client_area_insets))
    return false;
  if (!mojo::Equals(this->maximized_client_area_insets, other_struct.maximized_client_area_insets))
    return false;
  if (!mojo::Equals(this->max_title_bar_button_width, other_struct.max_title_bar_button_width))
    return false;
  return true;
}
template <typename StructPtrType>
WsDisplayPtr WsDisplay::Clone() const {
  return New(
      mojo::Clone(display),
      mojo::Clone(frame_decoration_values)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WsDisplay>::value>::type*>
bool WsDisplay::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->display, other_struct.display))
    return false;
  if (!mojo::Equals(this->frame_decoration_values, other_struct.frame_decoration_values))
    return false;
  return true;
}
template <typename StructPtrType>
WmViewportMetricsPtr WmViewportMetrics::Clone() const {
  return New(
      mojo::Clone(bounds_in_pixels),
      mojo::Clone(device_scale_factor),
      mojo::Clone(ui_scale_factor)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WmViewportMetrics>::value>::type*>
bool WmViewportMetrics::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->bounds_in_pixels, other_struct.bounds_in_pixels))
    return false;
  if (!mojo::Equals(this->device_scale_factor, other_struct.device_scale_factor))
    return false;
  if (!mojo::Equals(this->ui_scale_factor, other_struct.ui_scale_factor))
    return false;
  return true;
}
template <typename StructPtrType>
BlockingContainersPtr BlockingContainers::Clone() const {
  return New(
      mojo::Clone(system_modal_container_id),
      mojo::Clone(min_container_id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, BlockingContainers>::value>::type*>
bool BlockingContainers::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->system_modal_container_id, other_struct.system_modal_container_id))
    return false;
  if (!mojo::Equals(this->min_container_id, other_struct.min_container_id))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace ui

namespace mojo {


template <>
struct  StructTraits<::ui::mojom::FrameDecorationValues::DataView,
                                         ::ui::mojom::FrameDecorationValuesPtr> {
  static bool IsNull(const ::ui::mojom::FrameDecorationValuesPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::FrameDecorationValuesPtr* output) { output->reset(); }

  static const decltype(::ui::mojom::FrameDecorationValues::normal_client_area_insets)& normal_client_area_insets(
      const ::ui::mojom::FrameDecorationValuesPtr& input) {
    return input->normal_client_area_insets;
  }

  static const decltype(::ui::mojom::FrameDecorationValues::maximized_client_area_insets)& maximized_client_area_insets(
      const ::ui::mojom::FrameDecorationValuesPtr& input) {
    return input->maximized_client_area_insets;
  }

  static decltype(::ui::mojom::FrameDecorationValues::max_title_bar_button_width) max_title_bar_button_width(
      const ::ui::mojom::FrameDecorationValuesPtr& input) {
    return input->max_title_bar_button_width;
  }

  static bool Read(::ui::mojom::FrameDecorationValues::DataView input, ::ui::mojom::FrameDecorationValuesPtr* output);
};


template <>
struct  StructTraits<::ui::mojom::WsDisplay::DataView,
                                         ::ui::mojom::WsDisplayPtr> {
  static bool IsNull(const ::ui::mojom::WsDisplayPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::WsDisplayPtr* output) { output->reset(); }

  static const decltype(::ui::mojom::WsDisplay::display)& display(
      const ::ui::mojom::WsDisplayPtr& input) {
    return input->display;
  }

  static const decltype(::ui::mojom::WsDisplay::frame_decoration_values)& frame_decoration_values(
      const ::ui::mojom::WsDisplayPtr& input) {
    return input->frame_decoration_values;
  }

  static bool Read(::ui::mojom::WsDisplay::DataView input, ::ui::mojom::WsDisplayPtr* output);
};


template <>
struct  StructTraits<::ui::mojom::WmViewportMetrics::DataView,
                                         ::ui::mojom::WmViewportMetricsPtr> {
  static bool IsNull(const ::ui::mojom::WmViewportMetricsPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::WmViewportMetricsPtr* output) { output->reset(); }

  static const decltype(::ui::mojom::WmViewportMetrics::bounds_in_pixels)& bounds_in_pixels(
      const ::ui::mojom::WmViewportMetricsPtr& input) {
    return input->bounds_in_pixels;
  }

  static decltype(::ui::mojom::WmViewportMetrics::device_scale_factor) device_scale_factor(
      const ::ui::mojom::WmViewportMetricsPtr& input) {
    return input->device_scale_factor;
  }

  static decltype(::ui::mojom::WmViewportMetrics::ui_scale_factor) ui_scale_factor(
      const ::ui::mojom::WmViewportMetricsPtr& input) {
    return input->ui_scale_factor;
  }

  static bool Read(::ui::mojom::WmViewportMetrics::DataView input, ::ui::mojom::WmViewportMetricsPtr* output);
};


template <>
struct  StructTraits<::ui::mojom::BlockingContainers::DataView,
                                         ::ui::mojom::BlockingContainersPtr> {
  static bool IsNull(const ::ui::mojom::BlockingContainersPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::BlockingContainersPtr* output) { output->reset(); }

  static decltype(::ui::mojom::BlockingContainers::system_modal_container_id) system_modal_container_id(
      const ::ui::mojom::BlockingContainersPtr& input) {
    return input->system_modal_container_id;
  }

  static decltype(::ui::mojom::BlockingContainers::min_container_id) min_container_id(
      const ::ui::mojom::BlockingContainersPtr& input) {
    return input->min_container_id;
  }

  static bool Read(::ui::mojom::BlockingContainers::DataView input, ::ui::mojom::BlockingContainersPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_WINDOW_MANAGER_CONSTANTS_MOJOM_H_