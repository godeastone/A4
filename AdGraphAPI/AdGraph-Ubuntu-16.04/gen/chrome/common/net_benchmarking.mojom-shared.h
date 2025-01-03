// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_NET_BENCHMARKING_MOJOM_SHARED_H_
#define CHROME_COMMON_NET_BENCHMARKING_MOJOM_SHARED_H_

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
#include "chrome/common/net_benchmarking.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace chrome {
namespace mojom {


}  // namespace mojom
}  // namespace chrome

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace chrome {
namespace mojom {
// Interface base classes. They are used for type safety check.
class NetBenchmarkingInterfaceBase {};

using NetBenchmarkingPtrDataView =
    mojo::InterfacePtrDataView<NetBenchmarkingInterfaceBase>;
using NetBenchmarkingRequestDataView =
    mojo::InterfaceRequestDataView<NetBenchmarkingInterfaceBase>;
using NetBenchmarkingAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<NetBenchmarkingInterfaceBase>;
using NetBenchmarkingAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<NetBenchmarkingInterfaceBase>;
class NetBenchmarking_CloseCurrentConnections_ParamsDataView {
 public:
  NetBenchmarking_CloseCurrentConnections_ParamsDataView() {}

  NetBenchmarking_CloseCurrentConnections_ParamsDataView(
      internal::NetBenchmarking_CloseCurrentConnections_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetBenchmarking_CloseCurrentConnections_Params_Data* data_ = nullptr;
};

class NetBenchmarking_CloseCurrentConnections_ResponseParamsDataView {
 public:
  NetBenchmarking_CloseCurrentConnections_ResponseParamsDataView() {}

  NetBenchmarking_CloseCurrentConnections_ResponseParamsDataView(
      internal::NetBenchmarking_CloseCurrentConnections_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetBenchmarking_CloseCurrentConnections_ResponseParams_Data* data_ = nullptr;
};

class NetBenchmarking_ClearCache_ParamsDataView {
 public:
  NetBenchmarking_ClearCache_ParamsDataView() {}

  NetBenchmarking_ClearCache_ParamsDataView(
      internal::NetBenchmarking_ClearCache_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetBenchmarking_ClearCache_Params_Data* data_ = nullptr;
};

class NetBenchmarking_ClearCache_ResponseParamsDataView {
 public:
  NetBenchmarking_ClearCache_ResponseParamsDataView() {}

  NetBenchmarking_ClearCache_ResponseParamsDataView(
      internal::NetBenchmarking_ClearCache_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t result() const {
    return data_->result;
  }
 private:
  internal::NetBenchmarking_ClearCache_ResponseParams_Data* data_ = nullptr;
};

class NetBenchmarking_ClearHostResolverCache_ParamsDataView {
 public:
  NetBenchmarking_ClearHostResolverCache_ParamsDataView() {}

  NetBenchmarking_ClearHostResolverCache_ParamsDataView(
      internal::NetBenchmarking_ClearHostResolverCache_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetBenchmarking_ClearHostResolverCache_Params_Data* data_ = nullptr;
};

class NetBenchmarking_ClearHostResolverCache_ResponseParamsDataView {
 public:
  NetBenchmarking_ClearHostResolverCache_ResponseParamsDataView() {}

  NetBenchmarking_ClearHostResolverCache_ResponseParamsDataView(
      internal::NetBenchmarking_ClearHostResolverCache_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetBenchmarking_ClearHostResolverCache_ResponseParams_Data* data_ = nullptr;
};

class NetBenchmarking_ClearPredictorCache_ParamsDataView {
 public:
  NetBenchmarking_ClearPredictorCache_ParamsDataView() {}

  NetBenchmarking_ClearPredictorCache_ParamsDataView(
      internal::NetBenchmarking_ClearPredictorCache_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetBenchmarking_ClearPredictorCache_Params_Data* data_ = nullptr;
};

class NetBenchmarking_ClearPredictorCache_ResponseParamsDataView {
 public:
  NetBenchmarking_ClearPredictorCache_ResponseParamsDataView() {}

  NetBenchmarking_ClearPredictorCache_ResponseParamsDataView(
      internal::NetBenchmarking_ClearPredictorCache_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetBenchmarking_ClearPredictorCache_ResponseParams_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace chrome

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace chrome {
namespace mojom {


















}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_COMMON_NET_BENCHMARKING_MOJOM_SHARED_H_
