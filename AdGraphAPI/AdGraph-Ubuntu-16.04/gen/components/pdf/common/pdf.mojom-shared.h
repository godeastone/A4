// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_PDF_COMMON_PDF_MOJOM_SHARED_H_
#define COMPONENTS_PDF_COMMON_PDF_MOJOM_SHARED_H_

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
#include "components/pdf/common/pdf.mojom-shared-internal.h"
#include "third_party/blink/public/platform/referrer.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace pdf {
namespace mojom {


}  // namespace mojom
}  // namespace pdf

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace pdf {
namespace mojom {
// Interface base classes. They are used for type safety check.
class PdfListenerInterfaceBase {};

using PdfListenerPtrDataView =
    mojo::InterfacePtrDataView<PdfListenerInterfaceBase>;
using PdfListenerRequestDataView =
    mojo::InterfaceRequestDataView<PdfListenerInterfaceBase>;
using PdfListenerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PdfListenerInterfaceBase>;
using PdfListenerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PdfListenerInterfaceBase>;
class PdfServiceInterfaceBase {};

using PdfServicePtrDataView =
    mojo::InterfacePtrDataView<PdfServiceInterfaceBase>;
using PdfServiceRequestDataView =
    mojo::InterfaceRequestDataView<PdfServiceInterfaceBase>;
using PdfServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PdfServiceInterfaceBase>;
using PdfServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PdfServiceInterfaceBase>;
class PdfListener_SetCaretPosition_ParamsDataView {
 public:
  PdfListener_SetCaretPosition_ParamsDataView() {}

  PdfListener_SetCaretPosition_ParamsDataView(
      internal::PdfListener_SetCaretPosition_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPositionDataView(
      ::gfx::mojom::PointFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPosition(UserType* output) {
    auto* pointer = data_->position.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointFDataView>(
        pointer, output, context_);
  }
 private:
  internal::PdfListener_SetCaretPosition_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PdfListener_MoveRangeSelectionExtent_ParamsDataView {
 public:
  PdfListener_MoveRangeSelectionExtent_ParamsDataView() {}

  PdfListener_MoveRangeSelectionExtent_ParamsDataView(
      internal::PdfListener_MoveRangeSelectionExtent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetExtentDataView(
      ::gfx::mojom::PointFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExtent(UserType* output) {
    auto* pointer = data_->extent.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointFDataView>(
        pointer, output, context_);
  }
 private:
  internal::PdfListener_MoveRangeSelectionExtent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PdfListener_SetSelectionBounds_ParamsDataView {
 public:
  PdfListener_SetSelectionBounds_ParamsDataView() {}

  PdfListener_SetSelectionBounds_ParamsDataView(
      internal::PdfListener_SetSelectionBounds_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBaseDataView(
      ::gfx::mojom::PointFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBase(UserType* output) {
    auto* pointer = data_->base.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointFDataView>(
        pointer, output, context_);
  }
  inline void GetExtentDataView(
      ::gfx::mojom::PointFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExtent(UserType* output) {
    auto* pointer = data_->extent.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointFDataView>(
        pointer, output, context_);
  }
 private:
  internal::PdfListener_SetSelectionBounds_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PdfService_SetListener_ParamsDataView {
 public:
  PdfService_SetListener_ParamsDataView() {}

  PdfService_SetListener_ParamsDataView(
      internal::PdfService_SetListener_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::pdf::mojom::PdfListenerPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::PdfService_SetListener_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PdfService_UpdateContentRestrictions_ParamsDataView {
 public:
  PdfService_UpdateContentRestrictions_ParamsDataView() {}

  PdfService_UpdateContentRestrictions_ParamsDataView(
      internal::PdfService_UpdateContentRestrictions_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t restrictions() const {
    return data_->restrictions;
  }
 private:
  internal::PdfService_UpdateContentRestrictions_Params_Data* data_ = nullptr;
};

class PdfService_HasUnsupportedFeature_ParamsDataView {
 public:
  PdfService_HasUnsupportedFeature_ParamsDataView() {}

  PdfService_HasUnsupportedFeature_ParamsDataView(
      internal::PdfService_HasUnsupportedFeature_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PdfService_HasUnsupportedFeature_Params_Data* data_ = nullptr;
};

class PdfService_SaveUrlAs_ParamsDataView {
 public:
  PdfService_SaveUrlAs_ParamsDataView() {}

  PdfService_SaveUrlAs_ParamsDataView(
      internal::PdfService_SaveUrlAs_Params_Data* data,
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
  inline void GetReferrerDataView(
      ::blink::mojom::ReferrerDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReferrer(UserType* output) {
    auto* pointer = data_->referrer.Get();
    return mojo::internal::Deserialize<::blink::mojom::ReferrerDataView>(
        pointer, output, context_);
  }
 private:
  internal::PdfService_SaveUrlAs_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PdfService_SelectionChanged_ParamsDataView {
 public:
  PdfService_SelectionChanged_ParamsDataView() {}

  PdfService_SelectionChanged_ParamsDataView(
      internal::PdfService_SelectionChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLeftDataView(
      ::gfx::mojom::PointFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLeft(UserType* output) {
    auto* pointer = data_->left.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointFDataView>(
        pointer, output, context_);
  }
  int32_t left_height() const {
    return data_->left_height;
  }
  inline void GetRightDataView(
      ::gfx::mojom::PointFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRight(UserType* output) {
    auto* pointer = data_->right.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointFDataView>(
        pointer, output, context_);
  }
  int32_t right_height() const {
    return data_->right_height;
  }
 private:
  internal::PdfService_SelectionChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace pdf

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace pdf {
namespace mojom {

inline void PdfListener_SetCaretPosition_ParamsDataView::GetPositionDataView(
    ::gfx::mojom::PointFDataView* output) {
  auto pointer = data_->position.Get();
  *output = ::gfx::mojom::PointFDataView(pointer, context_);
}


inline void PdfListener_MoveRangeSelectionExtent_ParamsDataView::GetExtentDataView(
    ::gfx::mojom::PointFDataView* output) {
  auto pointer = data_->extent.Get();
  *output = ::gfx::mojom::PointFDataView(pointer, context_);
}


inline void PdfListener_SetSelectionBounds_ParamsDataView::GetBaseDataView(
    ::gfx::mojom::PointFDataView* output) {
  auto pointer = data_->base.Get();
  *output = ::gfx::mojom::PointFDataView(pointer, context_);
}
inline void PdfListener_SetSelectionBounds_ParamsDataView::GetExtentDataView(
    ::gfx::mojom::PointFDataView* output) {
  auto pointer = data_->extent.Get();
  *output = ::gfx::mojom::PointFDataView(pointer, context_);
}








inline void PdfService_SaveUrlAs_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void PdfService_SaveUrlAs_ParamsDataView::GetReferrerDataView(
    ::blink::mojom::ReferrerDataView* output) {
  auto pointer = data_->referrer.Get();
  *output = ::blink::mojom::ReferrerDataView(pointer, context_);
}


inline void PdfService_SelectionChanged_ParamsDataView::GetLeftDataView(
    ::gfx::mojom::PointFDataView* output) {
  auto pointer = data_->left.Get();
  *output = ::gfx::mojom::PointFDataView(pointer, context_);
}
inline void PdfService_SelectionChanged_ParamsDataView::GetRightDataView(
    ::gfx::mojom::PointFDataView* output) {
  auto pointer = data_->right.Get();
  *output = ::gfx::mojom::PointFDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace pdf

#endif  // COMPONENTS_PDF_COMMON_PDF_MOJOM_SHARED_H_
