// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_FIELD_TRIAL_RECORDER_MOJOM_SHARED_H_
#define CONTENT_COMMON_FIELD_TRIAL_RECORDER_MOJOM_SHARED_H_

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
#include "content/common/field_trial_recorder.mojom-shared-internal.h"

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
class FieldTrialRecorderInterfaceBase {};

using FieldTrialRecorderPtrDataView =
    mojo::InterfacePtrDataView<FieldTrialRecorderInterfaceBase>;
using FieldTrialRecorderRequestDataView =
    mojo::InterfaceRequestDataView<FieldTrialRecorderInterfaceBase>;
using FieldTrialRecorderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<FieldTrialRecorderInterfaceBase>;
using FieldTrialRecorderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<FieldTrialRecorderInterfaceBase>;
class FieldTrialRecorder_FieldTrialActivated_ParamsDataView {
 public:
  FieldTrialRecorder_FieldTrialActivated_ParamsDataView() {}

  FieldTrialRecorder_FieldTrialActivated_ParamsDataView(
      internal::FieldTrialRecorder_FieldTrialActivated_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTrialNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTrialName(UserType* output) {
    auto* pointer = data_->trial_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::FieldTrialRecorder_FieldTrialActivated_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace content

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace content {
namespace mojom {

inline void FieldTrialRecorder_FieldTrialActivated_ParamsDataView::GetTrialNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->trial_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_FIELD_TRIAL_RECORDER_MOJOM_SHARED_H_
