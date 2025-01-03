// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_INPUT_INPUT_INJECTOR_MOJOM_SHARED_H_
#define CONTENT_COMMON_INPUT_INPUT_INJECTOR_MOJOM_SHARED_H_

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
#include "content/common/input/input_injector.mojom-shared-internal.h"
#include "content/common/native_types.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace content {
namespace mojom {


}  // namespace mojom
}  // namespace content

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace content {
namespace mojom {
// Interface base classes. They are used for type safety check.
class InputInjectorInterfaceBase {};

using InputInjectorPtrDataView =
    mojo::InterfacePtrDataView<InputInjectorInterfaceBase>;
using InputInjectorRequestDataView =
    mojo::InterfaceRequestDataView<InputInjectorInterfaceBase>;
using InputInjectorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<InputInjectorInterfaceBase>;
using InputInjectorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<InputInjectorInterfaceBase>;
class InputInjector_QueueSyntheticSmoothDrag_ParamsDataView {
 public:
  InputInjector_QueueSyntheticSmoothDrag_ParamsDataView() {}

  InputInjector_QueueSyntheticSmoothDrag_ParamsDataView(
      internal::InputInjector_QueueSyntheticSmoothDrag_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDragDataView(
      ::content::mojom::SyntheticSmoothDragDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDrag(UserType* output) {
    auto* pointer = data_->drag.Get();
    return mojo::internal::Deserialize<::content::mojom::SyntheticSmoothDragDataView>(
        pointer, output, context_);
  }
 private:
  internal::InputInjector_QueueSyntheticSmoothDrag_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InputInjector_QueueSyntheticSmoothDrag_ResponseParamsDataView {
 public:
  InputInjector_QueueSyntheticSmoothDrag_ResponseParamsDataView() {}

  InputInjector_QueueSyntheticSmoothDrag_ResponseParamsDataView(
      internal::InputInjector_QueueSyntheticSmoothDrag_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::InputInjector_QueueSyntheticSmoothDrag_ResponseParams_Data* data_ = nullptr;
};

class InputInjector_QueueSyntheticSmoothScroll_ParamsDataView {
 public:
  InputInjector_QueueSyntheticSmoothScroll_ParamsDataView() {}

  InputInjector_QueueSyntheticSmoothScroll_ParamsDataView(
      internal::InputInjector_QueueSyntheticSmoothScroll_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetScrollDataView(
      ::content::mojom::SyntheticSmoothScrollDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScroll(UserType* output) {
    auto* pointer = data_->scroll.Get();
    return mojo::internal::Deserialize<::content::mojom::SyntheticSmoothScrollDataView>(
        pointer, output, context_);
  }
 private:
  internal::InputInjector_QueueSyntheticSmoothScroll_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InputInjector_QueueSyntheticSmoothScroll_ResponseParamsDataView {
 public:
  InputInjector_QueueSyntheticSmoothScroll_ResponseParamsDataView() {}

  InputInjector_QueueSyntheticSmoothScroll_ResponseParamsDataView(
      internal::InputInjector_QueueSyntheticSmoothScroll_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::InputInjector_QueueSyntheticSmoothScroll_ResponseParams_Data* data_ = nullptr;
};

class InputInjector_QueueSyntheticPinch_ParamsDataView {
 public:
  InputInjector_QueueSyntheticPinch_ParamsDataView() {}

  InputInjector_QueueSyntheticPinch_ParamsDataView(
      internal::InputInjector_QueueSyntheticPinch_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPinchDataView(
      ::content::mojom::SyntheticPinchDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPinch(UserType* output) {
    auto* pointer = data_->pinch.Get();
    return mojo::internal::Deserialize<::content::mojom::SyntheticPinchDataView>(
        pointer, output, context_);
  }
 private:
  internal::InputInjector_QueueSyntheticPinch_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InputInjector_QueueSyntheticPinch_ResponseParamsDataView {
 public:
  InputInjector_QueueSyntheticPinch_ResponseParamsDataView() {}

  InputInjector_QueueSyntheticPinch_ResponseParamsDataView(
      internal::InputInjector_QueueSyntheticPinch_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::InputInjector_QueueSyntheticPinch_ResponseParams_Data* data_ = nullptr;
};

class InputInjector_QueueSyntheticTap_ParamsDataView {
 public:
  InputInjector_QueueSyntheticTap_ParamsDataView() {}

  InputInjector_QueueSyntheticTap_ParamsDataView(
      internal::InputInjector_QueueSyntheticTap_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTapDataView(
      ::content::mojom::SyntheticTapDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTap(UserType* output) {
    auto* pointer = data_->tap.Get();
    return mojo::internal::Deserialize<::content::mojom::SyntheticTapDataView>(
        pointer, output, context_);
  }
 private:
  internal::InputInjector_QueueSyntheticTap_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InputInjector_QueueSyntheticTap_ResponseParamsDataView {
 public:
  InputInjector_QueueSyntheticTap_ResponseParamsDataView() {}

  InputInjector_QueueSyntheticTap_ResponseParamsDataView(
      internal::InputInjector_QueueSyntheticTap_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::InputInjector_QueueSyntheticTap_ResponseParams_Data* data_ = nullptr;
};

class InputInjector_QueueSyntheticPointerAction_ParamsDataView {
 public:
  InputInjector_QueueSyntheticPointerAction_ParamsDataView() {}

  InputInjector_QueueSyntheticPointerAction_ParamsDataView(
      internal::InputInjector_QueueSyntheticPointerAction_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPointerActionDataView(
      ::content::mojom::SyntheticPointerActionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPointerAction(UserType* output) {
    auto* pointer = data_->pointer_action.Get();
    return mojo::internal::Deserialize<::content::mojom::SyntheticPointerActionDataView>(
        pointer, output, context_);
  }
 private:
  internal::InputInjector_QueueSyntheticPointerAction_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InputInjector_QueueSyntheticPointerAction_ResponseParamsDataView {
 public:
  InputInjector_QueueSyntheticPointerAction_ResponseParamsDataView() {}

  InputInjector_QueueSyntheticPointerAction_ResponseParamsDataView(
      internal::InputInjector_QueueSyntheticPointerAction_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::InputInjector_QueueSyntheticPointerAction_ResponseParams_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace content

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace content {
namespace mojom {

inline void InputInjector_QueueSyntheticSmoothDrag_ParamsDataView::GetDragDataView(
    ::content::mojom::SyntheticSmoothDragDataView* output) {
  auto pointer = data_->drag.Get();
  *output = ::content::mojom::SyntheticSmoothDragDataView(pointer, context_);
}




inline void InputInjector_QueueSyntheticSmoothScroll_ParamsDataView::GetScrollDataView(
    ::content::mojom::SyntheticSmoothScrollDataView* output) {
  auto pointer = data_->scroll.Get();
  *output = ::content::mojom::SyntheticSmoothScrollDataView(pointer, context_);
}




inline void InputInjector_QueueSyntheticPinch_ParamsDataView::GetPinchDataView(
    ::content::mojom::SyntheticPinchDataView* output) {
  auto pointer = data_->pinch.Get();
  *output = ::content::mojom::SyntheticPinchDataView(pointer, context_);
}




inline void InputInjector_QueueSyntheticTap_ParamsDataView::GetTapDataView(
    ::content::mojom::SyntheticTapDataView* output) {
  auto pointer = data_->tap.Get();
  *output = ::content::mojom::SyntheticTapDataView(pointer, context_);
}




inline void InputInjector_QueueSyntheticPointerAction_ParamsDataView::GetPointerActionDataView(
    ::content::mojom::SyntheticPointerActionDataView* output) {
  auto pointer = data_->pointer_action.Get();
  *output = ::content::mojom::SyntheticPointerActionDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_INPUT_INPUT_INJECTOR_MOJOM_SHARED_H_
