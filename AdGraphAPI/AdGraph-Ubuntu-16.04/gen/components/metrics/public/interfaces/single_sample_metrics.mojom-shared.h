// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_METRICS_PUBLIC_INTERFACES_SINGLE_SAMPLE_METRICS_MOJOM_SHARED_H_
#define COMPONENTS_METRICS_PUBLIC_INTERFACES_SINGLE_SAMPLE_METRICS_MOJOM_SHARED_H_

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
#include "components/metrics/public/interfaces/single_sample_metrics.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace metrics {
namespace mojom {


}  // namespace mojom
}  // namespace metrics

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace metrics {
namespace mojom {
// Interface base classes. They are used for type safety check.
class SingleSampleMetricsProviderInterfaceBase {};

using SingleSampleMetricsProviderPtrDataView =
    mojo::InterfacePtrDataView<SingleSampleMetricsProviderInterfaceBase>;
using SingleSampleMetricsProviderRequestDataView =
    mojo::InterfaceRequestDataView<SingleSampleMetricsProviderInterfaceBase>;
using SingleSampleMetricsProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SingleSampleMetricsProviderInterfaceBase>;
using SingleSampleMetricsProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SingleSampleMetricsProviderInterfaceBase>;
class SingleSampleMetricInterfaceBase {};

using SingleSampleMetricPtrDataView =
    mojo::InterfacePtrDataView<SingleSampleMetricInterfaceBase>;
using SingleSampleMetricRequestDataView =
    mojo::InterfaceRequestDataView<SingleSampleMetricInterfaceBase>;
using SingleSampleMetricAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SingleSampleMetricInterfaceBase>;
using SingleSampleMetricAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SingleSampleMetricInterfaceBase>;
class SingleSampleMetricsProvider_AcquireSingleSampleMetric_ParamsDataView {
 public:
  SingleSampleMetricsProvider_AcquireSingleSampleMetric_ParamsDataView() {}

  SingleSampleMetricsProvider_AcquireSingleSampleMetric_ParamsDataView(
      internal::SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHistogramNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHistogramName(UserType* output) {
    auto* pointer = data_->histogram_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  int32_t min() const {
    return data_->min;
  }
  int32_t max() const {
    return data_->max;
  }
  uint32_t bucket_count() const {
    return data_->bucket_count;
  }
  int32_t flags() const {
    return data_->flags;
  }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::metrics::mojom::SingleSampleMetricRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SingleSampleMetric_SetSample_ParamsDataView {
 public:
  SingleSampleMetric_SetSample_ParamsDataView() {}

  SingleSampleMetric_SetSample_ParamsDataView(
      internal::SingleSampleMetric_SetSample_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t sample() const {
    return data_->sample;
  }
 private:
  internal::SingleSampleMetric_SetSample_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace metrics

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace metrics {
namespace mojom {

inline void SingleSampleMetricsProvider_AcquireSingleSampleMetric_ParamsDataView::GetHistogramNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->histogram_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace metrics

#endif  // COMPONENTS_METRICS_PUBLIC_INTERFACES_SINGLE_SAMPLE_METRICS_MOJOM_SHARED_H_
