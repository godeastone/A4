// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_PDF_COMPOSITOR_PUBLIC_INTERFACES_PDF_COMPOSITOR_MOJOM_SHARED_H_
#define COMPONENTS_SERVICES_PDF_COMPOSITOR_PUBLIC_INTERFACES_PDF_COMPOSITOR_MOJOM_SHARED_H_

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
#include "components/services/pdf_compositor/public/interfaces/pdf_compositor.mojom-shared-internal.h"
#include "mojo/public/mojom/base/shared_memory.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace printing {
namespace mojom {


}  // namespace mojom
}  // namespace printing

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace printing {
namespace mojom {

enum class PdfCompositor_Status : int32_t {
  SUCCESS = 0,
  HANDLE_MAP_ERROR = 1,
  CONTENT_FORMAT_ERROR = 2,
  COMPOSTING_FAILURE = 3,
  kMinValue = 0,
  kMaxValue = 3,
};

inline std::ostream& operator<<(std::ostream& os, PdfCompositor_Status value) {
  switch(value) {
    case PdfCompositor_Status::SUCCESS:
      return os << "PdfCompositor_Status::SUCCESS";
    case PdfCompositor_Status::HANDLE_MAP_ERROR:
      return os << "PdfCompositor_Status::HANDLE_MAP_ERROR";
    case PdfCompositor_Status::CONTENT_FORMAT_ERROR:
      return os << "PdfCompositor_Status::CONTENT_FORMAT_ERROR";
    case PdfCompositor_Status::COMPOSTING_FAILURE:
      return os << "PdfCompositor_Status::COMPOSTING_FAILURE";
    default:
      return os << "Unknown PdfCompositor_Status value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PdfCompositor_Status value) {
  return internal::PdfCompositor_Status_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class PdfCompositorInterfaceBase {};

using PdfCompositorPtrDataView =
    mojo::InterfacePtrDataView<PdfCompositorInterfaceBase>;
using PdfCompositorRequestDataView =
    mojo::InterfaceRequestDataView<PdfCompositorInterfaceBase>;
using PdfCompositorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PdfCompositorInterfaceBase>;
using PdfCompositorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PdfCompositorInterfaceBase>;
class PdfCompositor_NotifyUnavailableSubframe_ParamsDataView {
 public:
  PdfCompositor_NotifyUnavailableSubframe_ParamsDataView() {}

  PdfCompositor_NotifyUnavailableSubframe_ParamsDataView(
      internal::PdfCompositor_NotifyUnavailableSubframe_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t frame_guid() const {
    return data_->frame_guid;
  }
 private:
  internal::PdfCompositor_NotifyUnavailableSubframe_Params_Data* data_ = nullptr;
};

class PdfCompositor_AddSubframeContent_ParamsDataView {
 public:
  PdfCompositor_AddSubframeContent_ParamsDataView() {}

  PdfCompositor_AddSubframeContent_ParamsDataView(
      internal::PdfCompositor_AddSubframeContent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t frame_guid() const {
    return data_->frame_guid;
  }
  mojo::ScopedSharedBufferHandle TakeSerializedContent() {
    mojo::ScopedSharedBufferHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedSharedBufferHandle>(
            &data_->serialized_content, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetSubframeContentInfoDataView(
      mojo::MapDataView<uint32_t, uint64_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSubframeContentInfo(UserType* output) {
    auto* pointer = data_->subframe_content_info.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<uint32_t, uint64_t>>(
        pointer, output, context_);
  }
 private:
  internal::PdfCompositor_AddSubframeContent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PdfCompositor_CompositePageToPdf_ParamsDataView {
 public:
  PdfCompositor_CompositePageToPdf_ParamsDataView() {}

  PdfCompositor_CompositePageToPdf_ParamsDataView(
      internal::PdfCompositor_CompositePageToPdf_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t frame_guid() const {
    return data_->frame_guid;
  }
  uint32_t page_num() const {
    return data_->page_num;
  }
  mojo::ScopedSharedBufferHandle TakeSkHandle() {
    mojo::ScopedSharedBufferHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedSharedBufferHandle>(
            &data_->sk_handle, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetSubframeContentInfoDataView(
      mojo::MapDataView<uint32_t, uint64_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSubframeContentInfo(UserType* output) {
    auto* pointer = data_->subframe_content_info.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<uint32_t, uint64_t>>(
        pointer, output, context_);
  }
 private:
  internal::PdfCompositor_CompositePageToPdf_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PdfCompositor_CompositePageToPdf_ResponseParamsDataView {
 public:
  PdfCompositor_CompositePageToPdf_ResponseParamsDataView() {}

  PdfCompositor_CompositePageToPdf_ResponseParamsDataView(
      internal::PdfCompositor_CompositePageToPdf_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::printing::mojom::PdfCompositor_Status>(
        data_value, output);
  }

  PdfCompositor_Status status() const {
    return static_cast<PdfCompositor_Status>(data_->status);
  }
  inline void GetPdfRegionDataView(
      ::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPdfRegion(UserType* output) {
    auto* pointer = data_->pdf_region.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView>(
        pointer, output, context_);
  }
 private:
  internal::PdfCompositor_CompositePageToPdf_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PdfCompositor_CompositeDocumentToPdf_ParamsDataView {
 public:
  PdfCompositor_CompositeDocumentToPdf_ParamsDataView() {}

  PdfCompositor_CompositeDocumentToPdf_ParamsDataView(
      internal::PdfCompositor_CompositeDocumentToPdf_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t frame_guid() const {
    return data_->frame_guid;
  }
  mojo::ScopedSharedBufferHandle TakeSkHandle() {
    mojo::ScopedSharedBufferHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedSharedBufferHandle>(
            &data_->sk_handle, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetSubframeContentInfoDataView(
      mojo::MapDataView<uint32_t, uint64_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSubframeContentInfo(UserType* output) {
    auto* pointer = data_->subframe_content_info.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<uint32_t, uint64_t>>(
        pointer, output, context_);
  }
 private:
  internal::PdfCompositor_CompositeDocumentToPdf_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PdfCompositor_CompositeDocumentToPdf_ResponseParamsDataView {
 public:
  PdfCompositor_CompositeDocumentToPdf_ResponseParamsDataView() {}

  PdfCompositor_CompositeDocumentToPdf_ResponseParamsDataView(
      internal::PdfCompositor_CompositeDocumentToPdf_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::printing::mojom::PdfCompositor_Status>(
        data_value, output);
  }

  PdfCompositor_Status status() const {
    return static_cast<PdfCompositor_Status>(data_->status);
  }
  inline void GetPdfRegionDataView(
      ::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPdfRegion(UserType* output) {
    auto* pointer = data_->pdf_region.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView>(
        pointer, output, context_);
  }
 private:
  internal::PdfCompositor_CompositeDocumentToPdf_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PdfCompositor_SetWebContentsURL_ParamsDataView {
 public:
  PdfCompositor_SetWebContentsURL_ParamsDataView() {}

  PdfCompositor_SetWebContentsURL_ParamsDataView(
      internal::PdfCompositor_SetWebContentsURL_Params_Data* data,
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
  internal::PdfCompositor_SetWebContentsURL_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace printing

namespace std {

template <>
struct hash<::printing::mojom::PdfCompositor_Status>
    : public mojo::internal::EnumHashImpl<::printing::mojom::PdfCompositor_Status> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::printing::mojom::PdfCompositor_Status, ::printing::mojom::PdfCompositor_Status> {
  static ::printing::mojom::PdfCompositor_Status ToMojom(::printing::mojom::PdfCompositor_Status input) { return input; }
  static bool FromMojom(::printing::mojom::PdfCompositor_Status input, ::printing::mojom::PdfCompositor_Status* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::printing::mojom::PdfCompositor_Status, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::printing::mojom::PdfCompositor_Status, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::printing::mojom::PdfCompositor_Status>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace printing {
namespace mojom {



inline void PdfCompositor_AddSubframeContent_ParamsDataView::GetSubframeContentInfoDataView(
    mojo::MapDataView<uint32_t, uint64_t>* output) {
  auto pointer = data_->subframe_content_info.Get();
  *output = mojo::MapDataView<uint32_t, uint64_t>(pointer, context_);
}


inline void PdfCompositor_CompositePageToPdf_ParamsDataView::GetSubframeContentInfoDataView(
    mojo::MapDataView<uint32_t, uint64_t>* output) {
  auto pointer = data_->subframe_content_info.Get();
  *output = mojo::MapDataView<uint32_t, uint64_t>(pointer, context_);
}


inline void PdfCompositor_CompositePageToPdf_ResponseParamsDataView::GetPdfRegionDataView(
    ::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView* output) {
  auto pointer = data_->pdf_region.Get();
  *output = ::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView(pointer, context_);
}


inline void PdfCompositor_CompositeDocumentToPdf_ParamsDataView::GetSubframeContentInfoDataView(
    mojo::MapDataView<uint32_t, uint64_t>* output) {
  auto pointer = data_->subframe_content_info.Get();
  *output = mojo::MapDataView<uint32_t, uint64_t>(pointer, context_);
}


inline void PdfCompositor_CompositeDocumentToPdf_ResponseParamsDataView::GetPdfRegionDataView(
    ::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView* output) {
  auto pointer = data_->pdf_region.Get();
  *output = ::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView(pointer, context_);
}


inline void PdfCompositor_SetWebContentsURL_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace printing

#endif  // COMPONENTS_SERVICES_PDF_COMPOSITOR_PUBLIC_INTERFACES_PDF_COMPOSITOR_MOJOM_SHARED_H_
