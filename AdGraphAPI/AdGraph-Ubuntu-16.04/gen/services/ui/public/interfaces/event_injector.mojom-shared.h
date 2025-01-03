// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_EVENT_INJECTOR_MOJOM_SHARED_H_
#define SERVICES_UI_PUBLIC_INTERFACES_EVENT_INJECTOR_MOJOM_SHARED_H_

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
#include "services/ui/public/interfaces/event_injector.mojom-shared-internal.h"
#include "ui/events/mojo/event.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace ui {
namespace mojom {


}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace ui {
namespace mojom {
// Interface base classes. They are used for type safety check.
class EventInjectorInterfaceBase {};

using EventInjectorPtrDataView =
    mojo::InterfacePtrDataView<EventInjectorInterfaceBase>;
using EventInjectorRequestDataView =
    mojo::InterfaceRequestDataView<EventInjectorInterfaceBase>;
using EventInjectorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<EventInjectorInterfaceBase>;
using EventInjectorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<EventInjectorInterfaceBase>;
class EventInjector_InjectEvent_ParamsDataView {
 public:
  EventInjector_InjectEvent_ParamsDataView() {}

  EventInjector_InjectEvent_ParamsDataView(
      internal::EventInjector_InjectEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t display_id() const {
    return data_->display_id;
  }
  inline void GetEventDataView(
      ::ui::mojom::EventDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEvent(UserType* output) {
    auto* pointer = data_->event.Get();
    return mojo::internal::Deserialize<::ui::mojom::EventDataView>(
        pointer, output, context_);
  }
 private:
  internal::EventInjector_InjectEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EventInjector_InjectEvent_ResponseParamsDataView {
 public:
  EventInjector_InjectEvent_ResponseParamsDataView() {}

  EventInjector_InjectEvent_ResponseParamsDataView(
      internal::EventInjector_InjectEvent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool result() const {
    return data_->result;
  }
 private:
  internal::EventInjector_InjectEvent_ResponseParams_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace ui {
namespace mojom {

inline void EventInjector_InjectEvent_ParamsDataView::GetEventDataView(
    ::ui::mojom::EventDataView* output) {
  auto pointer = data_->event.Get();
  *output = ::ui::mojom::EventDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_EVENT_INJECTOR_MOJOM_SHARED_H_
