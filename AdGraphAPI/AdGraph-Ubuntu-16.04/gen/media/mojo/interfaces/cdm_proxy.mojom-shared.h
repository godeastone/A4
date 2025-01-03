// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CDM_PROXY_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_CDM_PROXY_MOJOM_SHARED_H_

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
#include "media/mojo/interfaces/cdm_proxy.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace media {
namespace mojom {


}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace media {
namespace mojom {
using CdmProxy_Status = mojo::NativeEnum;
using CdmProxy_Protocol = mojo::NativeEnum;
using CdmProxy_Function = mojo::NativeEnum;
// Interface base classes. They are used for type safety check.
class CdmProxyInterfaceBase {};

using CdmProxyPtrDataView =
    mojo::InterfacePtrDataView<CdmProxyInterfaceBase>;
using CdmProxyRequestDataView =
    mojo::InterfaceRequestDataView<CdmProxyInterfaceBase>;
using CdmProxyAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CdmProxyInterfaceBase>;
using CdmProxyAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CdmProxyInterfaceBase>;
class CdmProxyClientInterfaceBase {};

using CdmProxyClientPtrDataView =
    mojo::InterfacePtrDataView<CdmProxyClientInterfaceBase>;
using CdmProxyClientRequestDataView =
    mojo::InterfaceRequestDataView<CdmProxyClientInterfaceBase>;
using CdmProxyClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CdmProxyClientInterfaceBase>;
using CdmProxyClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CdmProxyClientInterfaceBase>;
class CdmProxy_Initialize_ParamsDataView {
 public:
  CdmProxy_Initialize_ParamsDataView() {}

  CdmProxy_Initialize_ParamsDataView(
      internal::CdmProxy_Initialize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::CdmProxyClientAssociatedPtrInfoDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::CdmProxy_Initialize_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CdmProxy_Initialize_ResponseParamsDataView {
 public:
  CdmProxy_Initialize_ResponseParamsDataView() {}

  CdmProxy_Initialize_ResponseParamsDataView(
      internal::CdmProxy_Initialize_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::media::mojom::CdmProxy_Status>(
        data_value, output);
  }

  CdmProxy_Status status() const {
    return static_cast<CdmProxy_Status>(data_->status);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProtocol(UserType* output) const {
    auto data_value = data_->protocol;
    return mojo::internal::Deserialize<::media::mojom::CdmProxy_Protocol>(
        data_value, output);
  }

  CdmProxy_Protocol protocol() const {
    return static_cast<CdmProxy_Protocol>(data_->protocol);
  }
  uint32_t crypto_session_id() const {
    return data_->crypto_session_id;
  }
  int32_t cdm_id() const {
    return data_->cdm_id;
  }
 private:
  internal::CdmProxy_Initialize_ResponseParams_Data* data_ = nullptr;
};

class CdmProxy_Process_ParamsDataView {
 public:
  CdmProxy_Process_ParamsDataView() {}

  CdmProxy_Process_ParamsDataView(
      internal::CdmProxy_Process_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFunction(UserType* output) const {
    auto data_value = data_->function;
    return mojo::internal::Deserialize<::media::mojom::CdmProxy_Function>(
        data_value, output);
  }

  CdmProxy_Function function() const {
    return static_cast<CdmProxy_Function>(data_->function);
  }
  uint32_t crypto_session_id() const {
    return data_->crypto_session_id;
  }
  inline void GetInputDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInputData(UserType* output) {
    auto* pointer = data_->input_data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  uint32_t output_data_size() const {
    return data_->output_data_size;
  }
 private:
  internal::CdmProxy_Process_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CdmProxy_Process_ResponseParamsDataView {
 public:
  CdmProxy_Process_ResponseParamsDataView() {}

  CdmProxy_Process_ResponseParamsDataView(
      internal::CdmProxy_Process_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::media::mojom::CdmProxy_Status>(
        data_value, output);
  }

  CdmProxy_Status status() const {
    return static_cast<CdmProxy_Status>(data_->status);
  }
  inline void GetOutputDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOutputData(UserType* output) {
    auto* pointer = data_->output_data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::CdmProxy_Process_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CdmProxy_CreateMediaCryptoSession_ParamsDataView {
 public:
  CdmProxy_CreateMediaCryptoSession_ParamsDataView() {}

  CdmProxy_CreateMediaCryptoSession_ParamsDataView(
      internal::CdmProxy_CreateMediaCryptoSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInputDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInputData(UserType* output) {
    auto* pointer = data_->input_data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::CdmProxy_CreateMediaCryptoSession_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CdmProxy_CreateMediaCryptoSession_ResponseParamsDataView {
 public:
  CdmProxy_CreateMediaCryptoSession_ResponseParamsDataView() {}

  CdmProxy_CreateMediaCryptoSession_ResponseParamsDataView(
      internal::CdmProxy_CreateMediaCryptoSession_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::media::mojom::CdmProxy_Status>(
        data_value, output);
  }

  CdmProxy_Status status() const {
    return static_cast<CdmProxy_Status>(data_->status);
  }
  uint32_t crypto_session_id() const {
    return data_->crypto_session_id;
  }
  uint64_t output_data() const {
    return data_->output_data;
  }
 private:
  internal::CdmProxy_CreateMediaCryptoSession_ResponseParams_Data* data_ = nullptr;
};

class CdmProxy_SetKey_ParamsDataView {
 public:
  CdmProxy_SetKey_ParamsDataView() {}

  CdmProxy_SetKey_ParamsDataView(
      internal::CdmProxy_SetKey_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t crypto_session_id() const {
    return data_->crypto_session_id;
  }
  inline void GetKeyIdDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyId(UserType* output) {
    auto* pointer = data_->key_id.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetKeyBlobDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyBlob(UserType* output) {
    auto* pointer = data_->key_blob.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::CdmProxy_SetKey_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CdmProxy_RemoveKey_ParamsDataView {
 public:
  CdmProxy_RemoveKey_ParamsDataView() {}

  CdmProxy_RemoveKey_ParamsDataView(
      internal::CdmProxy_RemoveKey_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t crypto_session_id() const {
    return data_->crypto_session_id;
  }
  inline void GetKeyIdDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyId(UserType* output) {
    auto* pointer = data_->key_id.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::CdmProxy_RemoveKey_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CdmProxyClient_NotifyHardwareReset_ParamsDataView {
 public:
  CdmProxyClient_NotifyHardwareReset_ParamsDataView() {}

  CdmProxyClient_NotifyHardwareReset_ParamsDataView(
      internal::CdmProxyClient_NotifyHardwareReset_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::CdmProxyClient_NotifyHardwareReset_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace media {
namespace mojom {





inline void CdmProxy_Process_ParamsDataView::GetInputDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->input_data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void CdmProxy_Process_ResponseParamsDataView::GetOutputDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->output_data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void CdmProxy_CreateMediaCryptoSession_ParamsDataView::GetInputDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->input_data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}




inline void CdmProxy_SetKey_ParamsDataView::GetKeyIdDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key_id.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void CdmProxy_SetKey_ParamsDataView::GetKeyBlobDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key_blob.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void CdmProxy_RemoveKey_ParamsDataView::GetKeyIdDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key_id.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}





}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_CDM_PROXY_MOJOM_SHARED_H_
