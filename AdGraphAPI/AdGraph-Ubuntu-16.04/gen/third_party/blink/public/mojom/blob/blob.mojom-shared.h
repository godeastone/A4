// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/blob/blob.mojom-shared-internal.h"
#include "services/network/public/mojom/data_pipe_getter.mojom-shared.h"
#include "services/network/public/mojom/http_request_headers.mojom-shared.h"

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
class BlobReaderClientInterfaceBase {};

using BlobReaderClientPtrDataView =
    mojo::InterfacePtrDataView<BlobReaderClientInterfaceBase>;
using BlobReaderClientRequestDataView =
    mojo::InterfaceRequestDataView<BlobReaderClientInterfaceBase>;
using BlobReaderClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<BlobReaderClientInterfaceBase>;
using BlobReaderClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<BlobReaderClientInterfaceBase>;
class BlobInterfaceBase {};

using BlobPtrDataView =
    mojo::InterfacePtrDataView<BlobInterfaceBase>;
using BlobRequestDataView =
    mojo::InterfaceRequestDataView<BlobInterfaceBase>;
using BlobAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<BlobInterfaceBase>;
using BlobAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<BlobInterfaceBase>;
class BlobReaderClient_OnCalculatedSize_ParamsDataView {
 public:
  BlobReaderClient_OnCalculatedSize_ParamsDataView() {}

  BlobReaderClient_OnCalculatedSize_ParamsDataView(
      internal::BlobReaderClient_OnCalculatedSize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t total_size() const {
    return data_->total_size;
  }
  uint64_t expected_content_size() const {
    return data_->expected_content_size;
  }
 private:
  internal::BlobReaderClient_OnCalculatedSize_Params_Data* data_ = nullptr;
};

class BlobReaderClient_OnComplete_ParamsDataView {
 public:
  BlobReaderClient_OnComplete_ParamsDataView() {}

  BlobReaderClient_OnComplete_ParamsDataView(
      internal::BlobReaderClient_OnComplete_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t status() const {
    return data_->status;
  }
  uint64_t data_length() const {
    return data_->data_length;
  }
 private:
  internal::BlobReaderClient_OnComplete_Params_Data* data_ = nullptr;
};

class Blob_Clone_ParamsDataView {
 public:
  Blob_Clone_ParamsDataView() {}

  Blob_Clone_ParamsDataView(
      internal::Blob_Clone_Params_Data* data,
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
 private:
  internal::Blob_Clone_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Blob_AsDataPipeGetter_ParamsDataView {
 public:
  Blob_AsDataPipeGetter_ParamsDataView() {}

  Blob_AsDataPipeGetter_ParamsDataView(
      internal::Blob_AsDataPipeGetter_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeDataPipeGetter() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::DataPipeGetterRequestDataView>(
            &data_->data_pipe_getter, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Blob_AsDataPipeGetter_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Blob_ReadAll_ParamsDataView {
 public:
  Blob_ReadAll_ParamsDataView() {}

  Blob_ReadAll_ParamsDataView(
      internal::Blob_ReadAll_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedDataPipeProducerHandle TakePipe() {
    mojo::ScopedDataPipeProducerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeProducerHandle>(
            &data_->pipe, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::BlobReaderClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Blob_ReadAll_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Blob_ReadRange_ParamsDataView {
 public:
  Blob_ReadRange_ParamsDataView() {}

  Blob_ReadRange_ParamsDataView(
      internal::Blob_ReadRange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t offset() const {
    return data_->offset;
  }
  uint64_t length() const {
    return data_->length;
  }
  mojo::ScopedDataPipeProducerHandle TakePipe() {
    mojo::ScopedDataPipeProducerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeProducerHandle>(
            &data_->pipe, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::BlobReaderClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Blob_ReadRange_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Blob_ReadSideData_ParamsDataView {
 public:
  Blob_ReadSideData_ParamsDataView() {}

  Blob_ReadSideData_ParamsDataView(
      internal::Blob_ReadSideData_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Blob_ReadSideData_Params_Data* data_ = nullptr;
};

class Blob_ReadSideData_ResponseParamsDataView {
 public:
  Blob_ReadSideData_ResponseParamsDataView() {}

  Blob_ReadSideData_ResponseParamsDataView(
      internal::Blob_ReadSideData_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::Blob_ReadSideData_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Blob_GetInternalUUID_ParamsDataView {
 public:
  Blob_GetInternalUUID_ParamsDataView() {}

  Blob_GetInternalUUID_ParamsDataView(
      internal::Blob_GetInternalUUID_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Blob_GetInternalUUID_Params_Data* data_ = nullptr;
};

class Blob_GetInternalUUID_ResponseParamsDataView {
 public:
  Blob_GetInternalUUID_ResponseParamsDataView() {}

  Blob_GetInternalUUID_ResponseParamsDataView(
      internal::Blob_GetInternalUUID_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUuidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUuid(UserType* output) {
    auto* pointer = data_->uuid.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Blob_GetInternalUUID_ResponseParams_Data* data_ = nullptr;
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















inline void Blob_ReadSideData_ResponseParamsDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}




inline void Blob_GetInternalUUID_ResponseParamsDataView::GetUuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->uuid.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_MOJOM_SHARED_H_
