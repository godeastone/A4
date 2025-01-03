// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_REGISTRY_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_REGISTRY_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/blob/blob_registry.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/blob/blob.mojom-shared.h"
#include "third_party/blink/public/mojom/blob/blob_url_store.mojom-shared.h"
#include "third_party/blink/public/mojom/blob/data_element.mojom-shared.h"
#include "third_party/blink/public/mojom/blob/serialized_blob.mojom-shared.h"
#include "url/mojom/origin.mojom-shared.h"

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
// Interface base classes. They are used for type safety check.
class ProgressClientInterfaceBase {};

using ProgressClientPtrDataView =
    mojo::InterfacePtrDataView<ProgressClientInterfaceBase>;
using ProgressClientRequestDataView =
    mojo::InterfaceRequestDataView<ProgressClientInterfaceBase>;
using ProgressClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ProgressClientInterfaceBase>;
using ProgressClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ProgressClientInterfaceBase>;
class BlobRegistryInterfaceBase {};

using BlobRegistryPtrDataView =
    mojo::InterfacePtrDataView<BlobRegistryInterfaceBase>;
using BlobRegistryRequestDataView =
    mojo::InterfaceRequestDataView<BlobRegistryInterfaceBase>;
using BlobRegistryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<BlobRegistryInterfaceBase>;
using BlobRegistryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<BlobRegistryInterfaceBase>;
class ProgressClient_OnProgress_ParamsDataView {
 public:
  ProgressClient_OnProgress_ParamsDataView() {}

  ProgressClient_OnProgress_ParamsDataView(
      internal::ProgressClient_OnProgress_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t delta() const {
    return data_->delta;
  }
 private:
  internal::ProgressClient_OnProgress_Params_Data* data_ = nullptr;
};

class BlobRegistry_Register_ParamsDataView {
 public:
  BlobRegistry_Register_ParamsDataView() {}

  BlobRegistry_Register_ParamsDataView(
      internal::BlobRegistry_Register_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeBlob() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::BlobRequestDataView>(
            &data_->blob, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetUuidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUuid(UserType* output) {
    auto* pointer = data_->uuid.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetContentTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadContentType(UserType* output) {
    auto* pointer = data_->content_type.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetContentDispositionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadContentDisposition(UserType* output) {
    auto* pointer = data_->content_disposition.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetElementsDataView(
      mojo::ArrayDataView<::blink::mojom::DataElementDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadElements(UserType* output) {
    auto* pointer = data_->elements.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::DataElementDataView>>(
        pointer, output, context_);
  }
 private:
  internal::BlobRegistry_Register_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BlobRegistry_Register_ResponseParamsDataView {
 public:
  BlobRegistry_Register_ResponseParamsDataView() {}

  BlobRegistry_Register_ResponseParamsDataView(
      internal::BlobRegistry_Register_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::BlobRegistry_Register_ResponseParams_Data* data_ = nullptr;
};

class BlobRegistry_RegisterFromStream_ParamsDataView {
 public:
  BlobRegistry_RegisterFromStream_ParamsDataView() {}

  BlobRegistry_RegisterFromStream_ParamsDataView(
      internal::BlobRegistry_RegisterFromStream_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetContentTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadContentType(UserType* output) {
    auto* pointer = data_->content_type.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetContentDispositionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadContentDisposition(UserType* output) {
    auto* pointer = data_->content_disposition.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  uint64_t length_hint() const {
    return data_->length_hint;
  }
  mojo::ScopedDataPipeConsumerHandle TakeData() {
    mojo::ScopedDataPipeConsumerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeConsumerHandle>(
            &data_->data, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeProgressClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::ProgressClientAssociatedPtrInfoDataView>(
            &data_->progress_client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::BlobRegistry_RegisterFromStream_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BlobRegistry_RegisterFromStream_ResponseParamsDataView {
 public:
  BlobRegistry_RegisterFromStream_ResponseParamsDataView() {}

  BlobRegistry_RegisterFromStream_ResponseParamsDataView(
      internal::BlobRegistry_RegisterFromStream_ResponseParams_Data* data,
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
  internal::BlobRegistry_RegisterFromStream_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BlobRegistry_GetBlobFromUUID_ParamsDataView {
 public:
  BlobRegistry_GetBlobFromUUID_ParamsDataView() {}

  BlobRegistry_GetBlobFromUUID_ParamsDataView(
      internal::BlobRegistry_GetBlobFromUUID_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeBlob() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::BlobRequestDataView>(
            &data_->blob, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetUuidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUuid(UserType* output) {
    auto* pointer = data_->uuid.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::BlobRegistry_GetBlobFromUUID_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BlobRegistry_GetBlobFromUUID_ResponseParamsDataView {
 public:
  BlobRegistry_GetBlobFromUUID_ResponseParamsDataView() {}

  BlobRegistry_GetBlobFromUUID_ResponseParamsDataView(
      internal::BlobRegistry_GetBlobFromUUID_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::BlobRegistry_GetBlobFromUUID_ResponseParams_Data* data_ = nullptr;
};

class BlobRegistry_URLStoreForOrigin_ParamsDataView {
 public:
  BlobRegistry_URLStoreForOrigin_ParamsDataView() {}

  BlobRegistry_URLStoreForOrigin_ParamsDataView(
      internal::BlobRegistry_URLStoreForOrigin_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeUrlStore() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::BlobURLStoreAssociatedRequestDataView>(
            &data_->url_store, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::BlobRegistry_URLStoreForOrigin_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace blink {
namespace mojom {



inline void BlobRegistry_Register_ParamsDataView::GetUuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->uuid.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void BlobRegistry_Register_ParamsDataView::GetContentTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->content_type.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void BlobRegistry_Register_ParamsDataView::GetContentDispositionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->content_disposition.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void BlobRegistry_Register_ParamsDataView::GetElementsDataView(
    mojo::ArrayDataView<::blink::mojom::DataElementDataView>* output) {
  auto pointer = data_->elements.Get();
  *output = mojo::ArrayDataView<::blink::mojom::DataElementDataView>(pointer, context_);
}




inline void BlobRegistry_RegisterFromStream_ParamsDataView::GetContentTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->content_type.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void BlobRegistry_RegisterFromStream_ParamsDataView::GetContentDispositionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->content_disposition.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void BlobRegistry_RegisterFromStream_ResponseParamsDataView::GetBlobDataView(
    ::blink::mojom::SerializedBlobDataView* output) {
  auto pointer = data_->blob.Get();
  *output = ::blink::mojom::SerializedBlobDataView(pointer, context_);
}


inline void BlobRegistry_GetBlobFromUUID_ParamsDataView::GetUuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->uuid.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void BlobRegistry_URLStoreForOrigin_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_REGISTRY_MOJOM_SHARED_H_
