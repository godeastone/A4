// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_CACHE_STATS_RECORDER_MOJOM_SHARED_H_
#define CHROME_COMMON_CACHE_STATS_RECORDER_MOJOM_SHARED_H_

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
#include "chrome/common/cache_stats_recorder.mojom-shared-internal.h"

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
class CacheStatsRecorderInterfaceBase {};

using CacheStatsRecorderPtrDataView =
    mojo::InterfacePtrDataView<CacheStatsRecorderInterfaceBase>;
using CacheStatsRecorderRequestDataView =
    mojo::InterfaceRequestDataView<CacheStatsRecorderInterfaceBase>;
using CacheStatsRecorderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CacheStatsRecorderInterfaceBase>;
using CacheStatsRecorderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CacheStatsRecorderInterfaceBase>;
class CacheStatsRecorder_RecordCacheStats_ParamsDataView {
 public:
  CacheStatsRecorder_RecordCacheStats_ParamsDataView() {}

  CacheStatsRecorder_RecordCacheStats_ParamsDataView(
      internal::CacheStatsRecorder_RecordCacheStats_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t capacity() const {
    return data_->capacity;
  }
  uint64_t size() const {
    return data_->size;
  }
 private:
  internal::CacheStatsRecorder_RecordCacheStats_Params_Data* data_ = nullptr;
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

#endif  // CHROME_COMMON_CACHE_STATS_RECORDER_MOJOM_SHARED_H_
