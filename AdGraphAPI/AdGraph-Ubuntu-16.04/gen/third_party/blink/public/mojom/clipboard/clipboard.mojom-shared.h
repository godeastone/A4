// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/clipboard/clipboard.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "third_party/blink/public/mojom/blob/serialized_blob.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {

enum class ClipboardFormat : int32_t {
  kPlaintext,
  kHtml,
  kSmartPaste,
  kBookmark,
  kMinValue = 0,
  kMaxValue = 3,
};

inline std::ostream& operator<<(std::ostream& os, ClipboardFormat value) {
  switch(value) {
    case ClipboardFormat::kPlaintext:
      return os << "ClipboardFormat::kPlaintext";
    case ClipboardFormat::kHtml:
      return os << "ClipboardFormat::kHtml";
    case ClipboardFormat::kSmartPaste:
      return os << "ClipboardFormat::kSmartPaste";
    case ClipboardFormat::kBookmark:
      return os << "ClipboardFormat::kBookmark";
    default:
      return os << "Unknown ClipboardFormat value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(ClipboardFormat value) {
  return internal::ClipboardFormat_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class ClipboardBuffer : int32_t {
  kStandard,
  kSelection,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, ClipboardBuffer value) {
  switch(value) {
    case ClipboardBuffer::kStandard:
      return os << "ClipboardBuffer::kStandard";
    case ClipboardBuffer::kSelection:
      return os << "ClipboardBuffer::kSelection";
    default:
      return os << "Unknown ClipboardBuffer value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(ClipboardBuffer value) {
  return internal::ClipboardBuffer_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class ClipboardHostInterfaceBase {};

using ClipboardHostPtrDataView =
    mojo::InterfacePtrDataView<ClipboardHostInterfaceBase>;
using ClipboardHostRequestDataView =
    mojo::InterfaceRequestDataView<ClipboardHostInterfaceBase>;
using ClipboardHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ClipboardHostInterfaceBase>;
using ClipboardHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ClipboardHostInterfaceBase>;
class ClipboardHost_GetSequenceNumber_ParamsDataView {
 public:
  ClipboardHost_GetSequenceNumber_ParamsDataView() {}

  ClipboardHost_GetSequenceNumber_ParamsDataView(
      internal::ClipboardHost_GetSequenceNumber_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuffer(UserType* output) const {
    auto data_value = data_->buffer;
    return mojo::internal::Deserialize<::blink::mojom::ClipboardBuffer>(
        data_value, output);
  }

  ClipboardBuffer buffer() const {
    return static_cast<ClipboardBuffer>(data_->buffer);
  }
 private:
  internal::ClipboardHost_GetSequenceNumber_Params_Data* data_ = nullptr;
};

class ClipboardHost_GetSequenceNumber_ResponseParamsDataView {
 public:
  ClipboardHost_GetSequenceNumber_ResponseParamsDataView() {}

  ClipboardHost_GetSequenceNumber_ResponseParamsDataView(
      internal::ClipboardHost_GetSequenceNumber_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t result() const {
    return data_->result;
  }
 private:
  internal::ClipboardHost_GetSequenceNumber_ResponseParams_Data* data_ = nullptr;
};

class ClipboardHost_IsFormatAvailable_ParamsDataView {
 public:
  ClipboardHost_IsFormatAvailable_ParamsDataView() {}

  ClipboardHost_IsFormatAvailable_ParamsDataView(
      internal::ClipboardHost_IsFormatAvailable_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFormat(UserType* output) const {
    auto data_value = data_->format;
    return mojo::internal::Deserialize<::blink::mojom::ClipboardFormat>(
        data_value, output);
  }

  ClipboardFormat format() const {
    return static_cast<ClipboardFormat>(data_->format);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuffer(UserType* output) const {
    auto data_value = data_->buffer;
    return mojo::internal::Deserialize<::blink::mojom::ClipboardBuffer>(
        data_value, output);
  }

  ClipboardBuffer buffer() const {
    return static_cast<ClipboardBuffer>(data_->buffer);
  }
 private:
  internal::ClipboardHost_IsFormatAvailable_Params_Data* data_ = nullptr;
};

class ClipboardHost_IsFormatAvailable_ResponseParamsDataView {
 public:
  ClipboardHost_IsFormatAvailable_ResponseParamsDataView() {}

  ClipboardHost_IsFormatAvailable_ResponseParamsDataView(
      internal::ClipboardHost_IsFormatAvailable_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool result() const {
    return data_->result;
  }
 private:
  internal::ClipboardHost_IsFormatAvailable_ResponseParams_Data* data_ = nullptr;
};

class ClipboardHost_ReadAvailableTypes_ParamsDataView {
 public:
  ClipboardHost_ReadAvailableTypes_ParamsDataView() {}

  ClipboardHost_ReadAvailableTypes_ParamsDataView(
      internal::ClipboardHost_ReadAvailableTypes_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuffer(UserType* output) const {
    auto data_value = data_->buffer;
    return mojo::internal::Deserialize<::blink::mojom::ClipboardBuffer>(
        data_value, output);
  }

  ClipboardBuffer buffer() const {
    return static_cast<ClipboardBuffer>(data_->buffer);
  }
 private:
  internal::ClipboardHost_ReadAvailableTypes_Params_Data* data_ = nullptr;
};

class ClipboardHost_ReadAvailableTypes_ResponseParamsDataView {
 public:
  ClipboardHost_ReadAvailableTypes_ResponseParamsDataView() {}

  ClipboardHost_ReadAvailableTypes_ResponseParamsDataView(
      internal::ClipboardHost_ReadAvailableTypes_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTypesDataView(
      mojo::ArrayDataView<::mojo_base::mojom::String16DataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTypes(UserType* output) {
    auto* pointer = data_->types.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo_base::mojom::String16DataView>>(
        pointer, output, context_);
  }
  bool result() const {
    return data_->result;
  }
 private:
  internal::ClipboardHost_ReadAvailableTypes_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClipboardHost_ReadText_ParamsDataView {
 public:
  ClipboardHost_ReadText_ParamsDataView() {}

  ClipboardHost_ReadText_ParamsDataView(
      internal::ClipboardHost_ReadText_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuffer(UserType* output) const {
    auto data_value = data_->buffer;
    return mojo::internal::Deserialize<::blink::mojom::ClipboardBuffer>(
        data_value, output);
  }

  ClipboardBuffer buffer() const {
    return static_cast<ClipboardBuffer>(data_->buffer);
  }
 private:
  internal::ClipboardHost_ReadText_Params_Data* data_ = nullptr;
};

class ClipboardHost_ReadText_ResponseParamsDataView {
 public:
  ClipboardHost_ReadText_ResponseParamsDataView() {}

  ClipboardHost_ReadText_ResponseParamsDataView(
      internal::ClipboardHost_ReadText_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      ::mojo_base::mojom::BigString16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::BigString16DataView>(
        pointer, output, context_);
  }
 private:
  internal::ClipboardHost_ReadText_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClipboardHost_ReadHtml_ParamsDataView {
 public:
  ClipboardHost_ReadHtml_ParamsDataView() {}

  ClipboardHost_ReadHtml_ParamsDataView(
      internal::ClipboardHost_ReadHtml_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuffer(UserType* output) const {
    auto data_value = data_->buffer;
    return mojo::internal::Deserialize<::blink::mojom::ClipboardBuffer>(
        data_value, output);
  }

  ClipboardBuffer buffer() const {
    return static_cast<ClipboardBuffer>(data_->buffer);
  }
 private:
  internal::ClipboardHost_ReadHtml_Params_Data* data_ = nullptr;
};

class ClipboardHost_ReadHtml_ResponseParamsDataView {
 public:
  ClipboardHost_ReadHtml_ResponseParamsDataView() {}

  ClipboardHost_ReadHtml_ResponseParamsDataView(
      internal::ClipboardHost_ReadHtml_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMarkupDataView(
      ::mojo_base::mojom::BigString16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMarkup(UserType* output) {
    auto* pointer = data_->markup.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::BigString16DataView>(
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
  uint32_t fragment_start() const {
    return data_->fragment_start;
  }
  uint32_t fragment_end() const {
    return data_->fragment_end;
  }
 private:
  internal::ClipboardHost_ReadHtml_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClipboardHost_ReadRtf_ParamsDataView {
 public:
  ClipboardHost_ReadRtf_ParamsDataView() {}

  ClipboardHost_ReadRtf_ParamsDataView(
      internal::ClipboardHost_ReadRtf_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuffer(UserType* output) const {
    auto data_value = data_->buffer;
    return mojo::internal::Deserialize<::blink::mojom::ClipboardBuffer>(
        data_value, output);
  }

  ClipboardBuffer buffer() const {
    return static_cast<ClipboardBuffer>(data_->buffer);
  }
 private:
  internal::ClipboardHost_ReadRtf_Params_Data* data_ = nullptr;
};

class ClipboardHost_ReadRtf_ResponseParamsDataView {
 public:
  ClipboardHost_ReadRtf_ResponseParamsDataView() {}

  ClipboardHost_ReadRtf_ResponseParamsDataView(
      internal::ClipboardHost_ReadRtf_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ClipboardHost_ReadRtf_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClipboardHost_ReadImage_ParamsDataView {
 public:
  ClipboardHost_ReadImage_ParamsDataView() {}

  ClipboardHost_ReadImage_ParamsDataView(
      internal::ClipboardHost_ReadImage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuffer(UserType* output) const {
    auto data_value = data_->buffer;
    return mojo::internal::Deserialize<::blink::mojom::ClipboardBuffer>(
        data_value, output);
  }

  ClipboardBuffer buffer() const {
    return static_cast<ClipboardBuffer>(data_->buffer);
  }
 private:
  internal::ClipboardHost_ReadImage_Params_Data* data_ = nullptr;
};

class ClipboardHost_ReadImage_ResponseParamsDataView {
 public:
  ClipboardHost_ReadImage_ResponseParamsDataView() {}

  ClipboardHost_ReadImage_ResponseParamsDataView(
      internal::ClipboardHost_ReadImage_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBlobDataView(
      ::blink::mojom::SerializedBlobDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBlob(UserType* output) {
    auto* pointer = data_->blob.Get();
    return mojo::internal::Deserialize<::blink::mojom::SerializedBlobDataView>(
        pointer, output, context_);
  }
 private:
  internal::ClipboardHost_ReadImage_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClipboardHost_ReadCustomData_ParamsDataView {
 public:
  ClipboardHost_ReadCustomData_ParamsDataView() {}

  ClipboardHost_ReadCustomData_ParamsDataView(
      internal::ClipboardHost_ReadCustomData_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuffer(UserType* output) const {
    auto data_value = data_->buffer;
    return mojo::internal::Deserialize<::blink::mojom::ClipboardBuffer>(
        data_value, output);
  }

  ClipboardBuffer buffer() const {
    return static_cast<ClipboardBuffer>(data_->buffer);
  }
  inline void GetTypeDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) {
    auto* pointer = data_->type.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::ClipboardHost_ReadCustomData_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClipboardHost_ReadCustomData_ResponseParamsDataView {
 public:
  ClipboardHost_ReadCustomData_ResponseParamsDataView() {}

  ClipboardHost_ReadCustomData_ResponseParamsDataView(
      internal::ClipboardHost_ReadCustomData_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      ::mojo_base::mojom::BigString16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::BigString16DataView>(
        pointer, output, context_);
  }
 private:
  internal::ClipboardHost_ReadCustomData_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClipboardHost_WriteText_ParamsDataView {
 public:
  ClipboardHost_WriteText_ParamsDataView() {}

  ClipboardHost_WriteText_ParamsDataView(
      internal::ClipboardHost_WriteText_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuffer(UserType* output) const {
    auto data_value = data_->buffer;
    return mojo::internal::Deserialize<::blink::mojom::ClipboardBuffer>(
        data_value, output);
  }

  ClipboardBuffer buffer() const {
    return static_cast<ClipboardBuffer>(data_->buffer);
  }
  inline void GetTextDataView(
      ::mojo_base::mojom::BigString16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadText(UserType* output) {
    auto* pointer = data_->text.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::BigString16DataView>(
        pointer, output, context_);
  }
 private:
  internal::ClipboardHost_WriteText_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClipboardHost_WriteHtml_ParamsDataView {
 public:
  ClipboardHost_WriteHtml_ParamsDataView() {}

  ClipboardHost_WriteHtml_ParamsDataView(
      internal::ClipboardHost_WriteHtml_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuffer(UserType* output) const {
    auto data_value = data_->buffer;
    return mojo::internal::Deserialize<::blink::mojom::ClipboardBuffer>(
        data_value, output);
  }

  ClipboardBuffer buffer() const {
    return static_cast<ClipboardBuffer>(data_->buffer);
  }
  inline void GetMarkupDataView(
      ::mojo_base::mojom::BigString16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMarkup(UserType* output) {
    auto* pointer = data_->markup.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::BigString16DataView>(
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
  internal::ClipboardHost_WriteHtml_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClipboardHost_WriteSmartPasteMarker_ParamsDataView {
 public:
  ClipboardHost_WriteSmartPasteMarker_ParamsDataView() {}

  ClipboardHost_WriteSmartPasteMarker_ParamsDataView(
      internal::ClipboardHost_WriteSmartPasteMarker_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuffer(UserType* output) const {
    auto data_value = data_->buffer;
    return mojo::internal::Deserialize<::blink::mojom::ClipboardBuffer>(
        data_value, output);
  }

  ClipboardBuffer buffer() const {
    return static_cast<ClipboardBuffer>(data_->buffer);
  }
 private:
  internal::ClipboardHost_WriteSmartPasteMarker_Params_Data* data_ = nullptr;
};

class ClipboardHost_WriteCustomData_ParamsDataView {
 public:
  ClipboardHost_WriteCustomData_ParamsDataView() {}

  ClipboardHost_WriteCustomData_ParamsDataView(
      internal::ClipboardHost_WriteCustomData_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuffer(UserType* output) const {
    auto data_value = data_->buffer;
    return mojo::internal::Deserialize<::blink::mojom::ClipboardBuffer>(
        data_value, output);
  }

  ClipboardBuffer buffer() const {
    return static_cast<ClipboardBuffer>(data_->buffer);
  }
  inline void GetDataDataView(
      mojo::MapDataView<::mojo_base::mojom::String16DataView, ::mojo_base::mojom::BigString16DataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<::mojo_base::mojom::String16DataView, ::mojo_base::mojom::BigString16DataView>>(
        pointer, output, context_);
  }
 private:
  internal::ClipboardHost_WriteCustomData_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClipboardHost_WriteBookmark_ParamsDataView {
 public:
  ClipboardHost_WriteBookmark_ParamsDataView() {}

  ClipboardHost_WriteBookmark_ParamsDataView(
      internal::ClipboardHost_WriteBookmark_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuffer(UserType* output) const {
    auto data_value = data_->buffer;
    return mojo::internal::Deserialize<::blink::mojom::ClipboardBuffer>(
        data_value, output);
  }

  ClipboardBuffer buffer() const {
    return static_cast<ClipboardBuffer>(data_->buffer);
  }
  inline void GetUrlDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetTitleDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTitle(UserType* output) {
    auto* pointer = data_->title.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::ClipboardHost_WriteBookmark_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClipboardHost_WriteImage_ParamsDataView {
 public:
  ClipboardHost_WriteImage_ParamsDataView() {}

  ClipboardHost_WriteImage_ParamsDataView(
      internal::ClipboardHost_WriteImage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuffer(UserType* output) const {
    auto data_value = data_->buffer;
    return mojo::internal::Deserialize<::blink::mojom::ClipboardBuffer>(
        data_value, output);
  }

  ClipboardBuffer buffer() const {
    return static_cast<ClipboardBuffer>(data_->buffer);
  }
  inline void GetSizeInPixelsDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSizeInPixels(UserType* output) {
    auto* pointer = data_->size_in_pixels.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  mojo::ScopedSharedBufferHandle TakeSharedBufferHandle() {
    mojo::ScopedSharedBufferHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedSharedBufferHandle>(
            &data_->shared_buffer_handle, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ClipboardHost_WriteImage_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClipboardHost_CommitWrite_ParamsDataView {
 public:
  ClipboardHost_CommitWrite_ParamsDataView() {}

  ClipboardHost_CommitWrite_ParamsDataView(
      internal::ClipboardHost_CommitWrite_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuffer(UserType* output) const {
    auto data_value = data_->buffer;
    return mojo::internal::Deserialize<::blink::mojom::ClipboardBuffer>(
        data_value, output);
  }

  ClipboardBuffer buffer() const {
    return static_cast<ClipboardBuffer>(data_->buffer);
  }
 private:
  internal::ClipboardHost_CommitWrite_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::ClipboardFormat>
    : public mojo::internal::EnumHashImpl<::blink::mojom::ClipboardFormat> {};

template <>
struct hash<::blink::mojom::ClipboardBuffer>
    : public mojo::internal::EnumHashImpl<::blink::mojom::ClipboardBuffer> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::ClipboardFormat, ::blink::mojom::ClipboardFormat> {
  static ::blink::mojom::ClipboardFormat ToMojom(::blink::mojom::ClipboardFormat input) { return input; }
  static bool FromMojom(::blink::mojom::ClipboardFormat input, ::blink::mojom::ClipboardFormat* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ClipboardFormat, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::ClipboardFormat, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::ClipboardFormat>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::ClipboardBuffer, ::blink::mojom::ClipboardBuffer> {
  static ::blink::mojom::ClipboardBuffer ToMojom(::blink::mojom::ClipboardBuffer input) { return input; }
  static bool FromMojom(::blink::mojom::ClipboardBuffer input, ::blink::mojom::ClipboardBuffer* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ClipboardBuffer, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::ClipboardBuffer, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::ClipboardBuffer>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {











inline void ClipboardHost_ReadAvailableTypes_ResponseParamsDataView::GetTypesDataView(
    mojo::ArrayDataView<::mojo_base::mojom::String16DataView>* output) {
  auto pointer = data_->types.Get();
  *output = mojo::ArrayDataView<::mojo_base::mojom::String16DataView>(pointer, context_);
}




inline void ClipboardHost_ReadText_ResponseParamsDataView::GetResultDataView(
    ::mojo_base::mojom::BigString16DataView* output) {
  auto pointer = data_->result.Get();
  *output = ::mojo_base::mojom::BigString16DataView(pointer, context_);
}




inline void ClipboardHost_ReadHtml_ResponseParamsDataView::GetMarkupDataView(
    ::mojo_base::mojom::BigString16DataView* output) {
  auto pointer = data_->markup.Get();
  *output = ::mojo_base::mojom::BigString16DataView(pointer, context_);
}
inline void ClipboardHost_ReadHtml_ResponseParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}




inline void ClipboardHost_ReadRtf_ResponseParamsDataView::GetResultDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->result.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void ClipboardHost_ReadImage_ResponseParamsDataView::GetBlobDataView(
    ::blink::mojom::SerializedBlobDataView* output) {
  auto pointer = data_->blob.Get();
  *output = ::blink::mojom::SerializedBlobDataView(pointer, context_);
}


inline void ClipboardHost_ReadCustomData_ParamsDataView::GetTypeDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->type.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void ClipboardHost_ReadCustomData_ResponseParamsDataView::GetResultDataView(
    ::mojo_base::mojom::BigString16DataView* output) {
  auto pointer = data_->result.Get();
  *output = ::mojo_base::mojom::BigString16DataView(pointer, context_);
}


inline void ClipboardHost_WriteText_ParamsDataView::GetTextDataView(
    ::mojo_base::mojom::BigString16DataView* output) {
  auto pointer = data_->text.Get();
  *output = ::mojo_base::mojom::BigString16DataView(pointer, context_);
}


inline void ClipboardHost_WriteHtml_ParamsDataView::GetMarkupDataView(
    ::mojo_base::mojom::BigString16DataView* output) {
  auto pointer = data_->markup.Get();
  *output = ::mojo_base::mojom::BigString16DataView(pointer, context_);
}
inline void ClipboardHost_WriteHtml_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}




inline void ClipboardHost_WriteCustomData_ParamsDataView::GetDataDataView(
    mojo::MapDataView<::mojo_base::mojom::String16DataView, ::mojo_base::mojom::BigString16DataView>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::MapDataView<::mojo_base::mojom::String16DataView, ::mojo_base::mojom::BigString16DataView>(pointer, context_);
}


inline void ClipboardHost_WriteBookmark_ParamsDataView::GetUrlDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->url.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ClipboardHost_WriteBookmark_ParamsDataView::GetTitleDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->title.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void ClipboardHost_WriteImage_ParamsDataView::GetSizeInPixelsDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->size_in_pixels.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_SHARED_H_
