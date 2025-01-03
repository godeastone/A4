// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_CONSTANTS_MOJOM_H_
#define SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_CONSTANTS_MOJOM_H_

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
#include "services/ui/public/interfaces/window_tree_constants.mojom-shared.h"
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
constexpr uint32_t kDropEffectNone = 0U;
constexpr uint32_t kDropEffectMove = 1U;
constexpr uint32_t kDropEffectCopy = 2U;
constexpr uint32_t kDropEffectLink = 4U;
constexpr uint32_t kEmbedFlagEmbedderInterceptsEvents = 0x01U;
constexpr uint32_t kEmbedFlagEmbedderControlsVisibility = 0x02U;
class WindowData;
using WindowDataPtr = mojo::StructPtr<WindowData>;






class  WindowData {
 public:
  using DataView = WindowDataDataView;
  using Data_ = internal::WindowData_Data;

  template <typename... Args>
  static WindowDataPtr New(Args&&... args) {
    return WindowDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static WindowDataPtr From(const U& u) {
    return mojo::TypeConverter<WindowDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WindowData>::Convert(*this);
  }


  WindowData();

  WindowData(
      uint64_t parent_id,
      uint64_t window_id,
      uint64_t transient_parent_id,
      const gfx::Rect& bounds,
      const base::flat_map<std::string, std::vector<uint8_t>>& properties,
      bool visible);

  ~WindowData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WindowDataPtr>
  WindowDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WindowData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        WindowData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        WindowData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::WindowData_UnserializedMessageContext<
            UserType, WindowData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<WindowData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return WindowData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::WindowData_UnserializedMessageContext<
            UserType, WindowData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<WindowData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  uint64_t parent_id;
  uint64_t window_id;
  uint64_t transient_parent_id;
  gfx::Rect bounds;
  base::flat_map<std::string, std::vector<uint8_t>> properties;
  bool visible;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
WindowDataPtr WindowData::Clone() const {
  return New(
      mojo::Clone(parent_id),
      mojo::Clone(window_id),
      mojo::Clone(transient_parent_id),
      mojo::Clone(bounds),
      mojo::Clone(properties),
      mojo::Clone(visible)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WindowData>::value>::type*>
bool WindowData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->parent_id, other_struct.parent_id))
    return false;
  if (!mojo::Equals(this->window_id, other_struct.window_id))
    return false;
  if (!mojo::Equals(this->transient_parent_id, other_struct.transient_parent_id))
    return false;
  if (!mojo::Equals(this->bounds, other_struct.bounds))
    return false;
  if (!mojo::Equals(this->properties, other_struct.properties))
    return false;
  if (!mojo::Equals(this->visible, other_struct.visible))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace ui

namespace mojo {


template <>
struct  StructTraits<::ui::mojom::WindowData::DataView,
                                         ::ui::mojom::WindowDataPtr> {
  static bool IsNull(const ::ui::mojom::WindowDataPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::WindowDataPtr* output) { output->reset(); }

  static decltype(::ui::mojom::WindowData::parent_id) parent_id(
      const ::ui::mojom::WindowDataPtr& input) {
    return input->parent_id;
  }

  static decltype(::ui::mojom::WindowData::window_id) window_id(
      const ::ui::mojom::WindowDataPtr& input) {
    return input->window_id;
  }

  static decltype(::ui::mojom::WindowData::transient_parent_id) transient_parent_id(
      const ::ui::mojom::WindowDataPtr& input) {
    return input->transient_parent_id;
  }

  static const decltype(::ui::mojom::WindowData::bounds)& bounds(
      const ::ui::mojom::WindowDataPtr& input) {
    return input->bounds;
  }

  static const decltype(::ui::mojom::WindowData::properties)& properties(
      const ::ui::mojom::WindowDataPtr& input) {
    return input->properties;
  }

  static decltype(::ui::mojom::WindowData::visible) visible(
      const ::ui::mojom::WindowDataPtr& input) {
    return input->visible;
  }

  static bool Read(::ui::mojom::WindowData::DataView input, ::ui::mojom::WindowDataPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_CONSTANTS_MOJOM_H_