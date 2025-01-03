// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_RENDERER_HOST_MOJOM_SHARED_H_
#define CONTENT_COMMON_RENDERER_HOST_MOJOM_SHARED_H_

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
#include "content/common/renderer_host.mojom-shared-internal.h"
#include "services/network/public/mojom/url_loader_factory.mojom-shared.h"

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
class RendererHostInterfaceBase {};

using RendererHostPtrDataView =
    mojo::InterfacePtrDataView<RendererHostInterfaceBase>;
using RendererHostRequestDataView =
    mojo::InterfaceRequestDataView<RendererHostInterfaceBase>;
using RendererHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<RendererHostInterfaceBase>;
using RendererHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<RendererHostInterfaceBase>;
class RendererHost_GetBlobURLLoaderFactory_ParamsDataView {
 public:
  RendererHost_GetBlobURLLoaderFactory_ParamsDataView() {}

  RendererHost_GetBlobURLLoaderFactory_ParamsDataView(
      internal::RendererHost_GetBlobURLLoaderFactory_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeLoader() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::URLLoaderFactoryRequestDataView>(
            &data_->loader, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::RendererHost_GetBlobURLLoaderFactory_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RendererHost_GetBrowserHistogram_ParamsDataView {
 public:
  RendererHost_GetBrowserHistogram_ParamsDataView() {}

  RendererHost_GetBrowserHistogram_ParamsDataView(
      internal::RendererHost_GetBrowserHistogram_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::RendererHost_GetBrowserHistogram_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RendererHost_GetBrowserHistogram_ResponseParamsDataView {
 public:
  RendererHost_GetBrowserHistogram_ResponseParamsDataView() {}

  RendererHost_GetBrowserHistogram_ResponseParamsDataView(
      internal::RendererHost_GetBrowserHistogram_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHistogramJsonDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHistogramJson(UserType* output) {
    auto* pointer = data_->histogram_json.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::RendererHost_GetBrowserHistogram_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RendererHost_SuddenTerminationChanged_ParamsDataView {
 public:
  RendererHost_SuddenTerminationChanged_ParamsDataView() {}

  RendererHost_SuddenTerminationChanged_ParamsDataView(
      internal::RendererHost_SuddenTerminationChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool enabled() const {
    return data_->enabled;
  }
 private:
  internal::RendererHost_SuddenTerminationChanged_Params_Data* data_ = nullptr;
};

class RendererHost_ShutdownRequest_ParamsDataView {
 public:
  RendererHost_ShutdownRequest_ParamsDataView() {}

  RendererHost_ShutdownRequest_ParamsDataView(
      internal::RendererHost_ShutdownRequest_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::RendererHost_ShutdownRequest_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace content

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace content {
namespace mojom {



inline void RendererHost_GetBrowserHistogram_ParamsDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void RendererHost_GetBrowserHistogram_ResponseParamsDataView::GetHistogramJsonDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->histogram_json.Get();
  *output = mojo::StringDataView(pointer, context_);
}







}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_RENDERER_HOST_MOJOM_SHARED_H_
