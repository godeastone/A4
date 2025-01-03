// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_PRERENDER_MOJOM_SHARED_H_
#define CHROME_COMMON_PRERENDER_MOJOM_SHARED_H_

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
#include "chrome/common/prerender.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared.h"

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
class PrerenderCancelerInterfaceBase {};

using PrerenderCancelerPtrDataView =
    mojo::InterfacePtrDataView<PrerenderCancelerInterfaceBase>;
using PrerenderCancelerRequestDataView =
    mojo::InterfaceRequestDataView<PrerenderCancelerInterfaceBase>;
using PrerenderCancelerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PrerenderCancelerInterfaceBase>;
using PrerenderCancelerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PrerenderCancelerInterfaceBase>;
class PrerenderDispatcherInterfaceBase {};

using PrerenderDispatcherPtrDataView =
    mojo::InterfacePtrDataView<PrerenderDispatcherInterfaceBase>;
using PrerenderDispatcherRequestDataView =
    mojo::InterfaceRequestDataView<PrerenderDispatcherInterfaceBase>;
using PrerenderDispatcherAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PrerenderDispatcherInterfaceBase>;
using PrerenderDispatcherAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PrerenderDispatcherInterfaceBase>;
class PrerenderCanceler_CancelPrerenderForPrinting_ParamsDataView {
 public:
  PrerenderCanceler_CancelPrerenderForPrinting_ParamsDataView() {}

  PrerenderCanceler_CancelPrerenderForPrinting_ParamsDataView(
      internal::PrerenderCanceler_CancelPrerenderForPrinting_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PrerenderCanceler_CancelPrerenderForPrinting_Params_Data* data_ = nullptr;
};

class PrerenderCanceler_CancelPrerenderForUnsupportedMethod_ParamsDataView {
 public:
  PrerenderCanceler_CancelPrerenderForUnsupportedMethod_ParamsDataView() {}

  PrerenderCanceler_CancelPrerenderForUnsupportedMethod_ParamsDataView(
      internal::PrerenderCanceler_CancelPrerenderForUnsupportedMethod_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PrerenderCanceler_CancelPrerenderForUnsupportedMethod_Params_Data* data_ = nullptr;
};

class PrerenderCanceler_CancelPrerenderForUnsupportedScheme_ParamsDataView {
 public:
  PrerenderCanceler_CancelPrerenderForUnsupportedScheme_ParamsDataView() {}

  PrerenderCanceler_CancelPrerenderForUnsupportedScheme_ParamsDataView(
      internal::PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_ParamsDataView {
 public:
  PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_ParamsDataView() {}

  PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_ParamsDataView(
      internal::PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Params_Data* data_ = nullptr;
};

class PrerenderDispatcher_PrerenderStart_ParamsDataView {
 public:
  PrerenderDispatcher_PrerenderStart_ParamsDataView() {}

  PrerenderDispatcher_PrerenderStart_ParamsDataView(
      internal::PrerenderDispatcher_PrerenderStart_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t prerender_id() const {
    return data_->prerender_id;
  }
 private:
  internal::PrerenderDispatcher_PrerenderStart_Params_Data* data_ = nullptr;
};

class PrerenderDispatcher_PrerenderStopLoading_ParamsDataView {
 public:
  PrerenderDispatcher_PrerenderStopLoading_ParamsDataView() {}

  PrerenderDispatcher_PrerenderStopLoading_ParamsDataView(
      internal::PrerenderDispatcher_PrerenderStopLoading_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t prerender_id() const {
    return data_->prerender_id;
  }
 private:
  internal::PrerenderDispatcher_PrerenderStopLoading_Params_Data* data_ = nullptr;
};

class PrerenderDispatcher_PrerenderDomContentLoaded_ParamsDataView {
 public:
  PrerenderDispatcher_PrerenderDomContentLoaded_ParamsDataView() {}

  PrerenderDispatcher_PrerenderDomContentLoaded_ParamsDataView(
      internal::PrerenderDispatcher_PrerenderDomContentLoaded_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t prerender_id() const {
    return data_->prerender_id;
  }
 private:
  internal::PrerenderDispatcher_PrerenderDomContentLoaded_Params_Data* data_ = nullptr;
};

class PrerenderDispatcher_PrerenderAddAlias_ParamsDataView {
 public:
  PrerenderDispatcher_PrerenderAddAlias_ParamsDataView() {}

  PrerenderDispatcher_PrerenderAddAlias_ParamsDataView(
      internal::PrerenderDispatcher_PrerenderAddAlias_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAliasDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAlias(UserType* output) {
    auto* pointer = data_->alias.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::PrerenderDispatcher_PrerenderAddAlias_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PrerenderDispatcher_PrerenderRemoveAliases_ParamsDataView {
 public:
  PrerenderDispatcher_PrerenderRemoveAliases_ParamsDataView() {}

  PrerenderDispatcher_PrerenderRemoveAliases_ParamsDataView(
      internal::PrerenderDispatcher_PrerenderRemoveAliases_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAliasesDataView(
      mojo::ArrayDataView<::url::mojom::UrlDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAliases(UserType* output) {
    auto* pointer = data_->aliases.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::url::mojom::UrlDataView>>(
        pointer, output, context_);
  }
 private:
  internal::PrerenderDispatcher_PrerenderRemoveAliases_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PrerenderDispatcher_PrerenderStop_ParamsDataView {
 public:
  PrerenderDispatcher_PrerenderStop_ParamsDataView() {}

  PrerenderDispatcher_PrerenderStop_ParamsDataView(
      internal::PrerenderDispatcher_PrerenderStop_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t prerender_id() const {
    return data_->prerender_id;
  }
 private:
  internal::PrerenderDispatcher_PrerenderStop_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace chrome

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace chrome {
namespace mojom {





inline void PrerenderCanceler_CancelPrerenderForUnsupportedScheme_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}










inline void PrerenderDispatcher_PrerenderAddAlias_ParamsDataView::GetAliasDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->alias.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void PrerenderDispatcher_PrerenderRemoveAliases_ParamsDataView::GetAliasesDataView(
    mojo::ArrayDataView<::url::mojom::UrlDataView>* output) {
  auto pointer = data_->aliases.Get();
  *output = mojo::ArrayDataView<::url::mojom::UrlDataView>(pointer, context_);
}





}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_COMMON_PRERENDER_MOJOM_SHARED_H_
