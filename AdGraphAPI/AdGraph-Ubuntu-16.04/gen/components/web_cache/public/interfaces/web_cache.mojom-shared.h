// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_WEB_CACHE_PUBLIC_INTERFACES_WEB_CACHE_MOJOM_SHARED_H_
#define COMPONENTS_WEB_CACHE_PUBLIC_INTERFACES_WEB_CACHE_MOJOM_SHARED_H_

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
#include "components/web_cache/public/interfaces/web_cache.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace web_cache {
namespace mojom {


}  // namespace mojom
}  // namespace web_cache

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace web_cache {
namespace mojom {
// Interface base classes. They are used for type safety check.
class WebCacheInterfaceBase {};

using WebCachePtrDataView =
    mojo::InterfacePtrDataView<WebCacheInterfaceBase>;
using WebCacheRequestDataView =
    mojo::InterfaceRequestDataView<WebCacheInterfaceBase>;
using WebCacheAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<WebCacheInterfaceBase>;
using WebCacheAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<WebCacheInterfaceBase>;
class WebCache_SetCacheCapacity_ParamsDataView {
 public:
  WebCache_SetCacheCapacity_ParamsDataView() {}

  WebCache_SetCacheCapacity_ParamsDataView(
      internal::WebCache_SetCacheCapacity_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t capacity() const {
    return data_->capacity;
  }
 private:
  internal::WebCache_SetCacheCapacity_Params_Data* data_ = nullptr;
};

class WebCache_ClearCache_ParamsDataView {
 public:
  WebCache_ClearCache_ParamsDataView() {}

  WebCache_ClearCache_ParamsDataView(
      internal::WebCache_ClearCache_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool on_navigation() const {
    return data_->on_navigation;
  }
 private:
  internal::WebCache_ClearCache_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace web_cache

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace web_cache {
namespace mojom {






}  // namespace mojom
}  // namespace web_cache

#endif  // COMPONENTS_WEB_CACHE_PUBLIC_INTERFACES_WEB_CACHE_MOJOM_SHARED_H_
