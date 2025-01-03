// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_RAPPOR_PUBLIC_INTERFACES_RAPPOR_RECORDER_MOJOM_SHARED_H_
#define COMPONENTS_RAPPOR_PUBLIC_INTERFACES_RAPPOR_RECORDER_MOJOM_SHARED_H_

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
#include "components/rappor/public/interfaces/rappor_recorder.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace rappor {
namespace mojom {


}  // namespace mojom
}  // namespace rappor

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace rappor {
namespace mojom {
// Interface base classes. They are used for type safety check.
class RapporRecorderInterfaceBase {};

using RapporRecorderPtrDataView =
    mojo::InterfacePtrDataView<RapporRecorderInterfaceBase>;
using RapporRecorderRequestDataView =
    mojo::InterfaceRequestDataView<RapporRecorderInterfaceBase>;
using RapporRecorderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<RapporRecorderInterfaceBase>;
using RapporRecorderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<RapporRecorderInterfaceBase>;
class RapporRecorder_RecordRappor_ParamsDataView {
 public:
  RapporRecorder_RecordRappor_ParamsDataView() {}

  RapporRecorder_RecordRappor_ParamsDataView(
      internal::RapporRecorder_RecordRappor_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMetricDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMetric(UserType* output) {
    auto* pointer = data_->metric.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSampleDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSample(UserType* output) {
    auto* pointer = data_->sample.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::RapporRecorder_RecordRappor_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RapporRecorder_RecordRapporURL_ParamsDataView {
 public:
  RapporRecorder_RecordRapporURL_ParamsDataView() {}

  RapporRecorder_RecordRapporURL_ParamsDataView(
      internal::RapporRecorder_RecordRapporURL_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMetricDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMetric(UserType* output) {
    auto* pointer = data_->metric.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::RapporRecorder_RecordRapporURL_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace rappor

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace rappor {
namespace mojom {

inline void RapporRecorder_RecordRappor_ParamsDataView::GetMetricDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->metric.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void RapporRecorder_RecordRappor_ParamsDataView::GetSampleDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->sample.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void RapporRecorder_RecordRapporURL_ParamsDataView::GetMetricDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->metric.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void RapporRecorder_RecordRapporURL_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace rappor

#endif  // COMPONENTS_RAPPOR_PUBLIC_INTERFACES_RAPPOR_RECORDER_MOJOM_SHARED_H_
