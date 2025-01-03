// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_ARC_COMMON_PROTECTED_BUFFER_MANAGER_MOJOM_SHARED_H_
#define COMPONENTS_ARC_COMMON_PROTECTED_BUFFER_MANAGER_MOJOM_SHARED_H_

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
#include "components/arc/common/protected_buffer_manager.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace arc {
namespace mojom {


}  // namespace mojom
}  // namespace arc

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace arc {
namespace mojom {
// Interface base classes. They are used for type safety check.
class ProtectedBufferManagerInterfaceBase {};

using ProtectedBufferManagerPtrDataView =
    mojo::InterfacePtrDataView<ProtectedBufferManagerInterfaceBase>;
using ProtectedBufferManagerRequestDataView =
    mojo::InterfaceRequestDataView<ProtectedBufferManagerInterfaceBase>;
using ProtectedBufferManagerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ProtectedBufferManagerInterfaceBase>;
using ProtectedBufferManagerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ProtectedBufferManagerInterfaceBase>;
class ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ParamsDataView {
 public:
  ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ParamsDataView() {}

  ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ParamsDataView(
      internal::ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedHandle TakeDummyHandle() {
    mojo::ScopedHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedHandle>(
            &data_->dummy_handle, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ResponseParamsDataView {
 public:
  ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ResponseParamsDataView() {}

  ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ResponseParamsDataView(
      internal::ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedHandle TakeSharedMemoryHandle() {
    mojo::ScopedHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedHandle>(
            &data_->shared_memory_handle, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ProtectedBufferManager_GetProtectedSharedMemoryFromHandle_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace arc

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace arc {
namespace mojom {






}  // namespace mojom
}  // namespace arc

#endif  // COMPONENTS_ARC_COMMON_PROTECTED_BUFFER_MANAGER_MOJOM_SHARED_H_
