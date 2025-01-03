// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_SHARED_H_

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
#include "media/mojo/interfaces/content_decryption_module.mojom-shared-internal.h"
#include "media/mojo/interfaces/decryptor.mojom-shared.h"
#include "url/mojom/origin.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace media {
namespace mojom {
using CdmConfigDataView = mojo::native::NativeStructDataView;

class CdmPromiseResultDataView;

class CdmKeyInformationDataView;



}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::media::mojom::CdmPromiseResultDataView> {
  using Data = ::media::mojom::internal::CdmPromiseResult_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::CdmKeyInformationDataView> {
  using Data = ::media::mojom::internal::CdmKeyInformation_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace media {
namespace mojom {
using EmeInitDataType = mojo::NativeEnum;
using CdmSessionType = mojo::NativeEnum;
using CdmMessageType = mojo::NativeEnum;
using CdmKeyStatus = mojo::NativeEnum;
using HdcpVersion = mojo::NativeEnum;
using CdmPromiseResult_Exception = mojo::NativeEnum;
// Interface base classes. They are used for type safety check.
class ContentDecryptionModuleInterfaceBase {};

using ContentDecryptionModulePtrDataView =
    mojo::InterfacePtrDataView<ContentDecryptionModuleInterfaceBase>;
using ContentDecryptionModuleRequestDataView =
    mojo::InterfaceRequestDataView<ContentDecryptionModuleInterfaceBase>;
using ContentDecryptionModuleAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ContentDecryptionModuleInterfaceBase>;
using ContentDecryptionModuleAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ContentDecryptionModuleInterfaceBase>;
class ContentDecryptionModuleClientInterfaceBase {};

using ContentDecryptionModuleClientPtrDataView =
    mojo::InterfacePtrDataView<ContentDecryptionModuleClientInterfaceBase>;
using ContentDecryptionModuleClientRequestDataView =
    mojo::InterfaceRequestDataView<ContentDecryptionModuleClientInterfaceBase>;
using ContentDecryptionModuleClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ContentDecryptionModuleClientInterfaceBase>;
using ContentDecryptionModuleClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ContentDecryptionModuleClientInterfaceBase>;
class CdmFactoryInterfaceBase {};

using CdmFactoryPtrDataView =
    mojo::InterfacePtrDataView<CdmFactoryInterfaceBase>;
using CdmFactoryRequestDataView =
    mojo::InterfaceRequestDataView<CdmFactoryInterfaceBase>;
using CdmFactoryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CdmFactoryInterfaceBase>;
using CdmFactoryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CdmFactoryInterfaceBase>;
class CdmPromiseResultDataView {
 public:
  CdmPromiseResultDataView() {}

  CdmPromiseResultDataView(
      internal::CdmPromiseResult_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadException(UserType* output) const {
    auto data_value = data_->exception;
    return mojo::internal::Deserialize<::media::mojom::CdmPromiseResult_Exception>(
        data_value, output);
  }

  CdmPromiseResult_Exception exception() const {
    return static_cast<CdmPromiseResult_Exception>(data_->exception);
  }
  uint32_t system_code() const {
    return data_->system_code;
  }
  inline void GetErrorMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorMessage(UserType* output) {
    auto* pointer = data_->error_message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::CdmPromiseResult_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CdmKeyInformationDataView {
 public:
  CdmKeyInformationDataView() {}

  CdmKeyInformationDataView(
      internal::CdmKeyInformation_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyIdDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyId(UserType* output) {
    auto* pointer = data_->key_id.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::media::mojom::CdmKeyStatus>(
        data_value, output);
  }

  CdmKeyStatus status() const {
    return static_cast<CdmKeyStatus>(data_->status);
  }
  uint32_t system_code() const {
    return data_->system_code;
  }
 private:
  internal::CdmKeyInformation_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentDecryptionModule_SetClient_ParamsDataView {
 public:
  ContentDecryptionModule_SetClient_ParamsDataView() {}

  ContentDecryptionModule_SetClient_ParamsDataView(
      internal::ContentDecryptionModule_SetClient_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::ContentDecryptionModuleClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ContentDecryptionModule_SetClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentDecryptionModule_Initialize_ParamsDataView {
 public:
  ContentDecryptionModule_Initialize_ParamsDataView() {}

  ContentDecryptionModule_Initialize_ParamsDataView(
      internal::ContentDecryptionModule_Initialize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeySystemDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeySystem(UserType* output) {
    auto* pointer = data_->key_system.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSecurityOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSecurityOrigin(UserType* output) {
    auto* pointer = data_->security_origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
  inline void GetCdmConfigDataView(
      CdmConfigDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCdmConfig(UserType* output) {
    auto* pointer = data_->cdm_config.Get();
    return mojo::internal::Deserialize<::media::mojom::CdmConfigDataView>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModule_Initialize_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentDecryptionModule_Initialize_ResponseParamsDataView {
 public:
  ContentDecryptionModule_Initialize_ResponseParamsDataView() {}

  ContentDecryptionModule_Initialize_ResponseParamsDataView(
      internal::ContentDecryptionModule_Initialize_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      CdmPromiseResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::media::mojom::CdmPromiseResultDataView>(
        pointer, output, context_);
  }
  int32_t cdm_id() const {
    return data_->cdm_id;
  }
  template <typename UserType>
  UserType TakeDecryptor() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::DecryptorPtrDataView>(
            &data_->decryptor, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ContentDecryptionModule_Initialize_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentDecryptionModule_SetServerCertificate_ParamsDataView {
 public:
  ContentDecryptionModule_SetServerCertificate_ParamsDataView() {}

  ContentDecryptionModule_SetServerCertificate_ParamsDataView(
      internal::ContentDecryptionModule_SetServerCertificate_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCertificateDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCertificateData(UserType* output) {
    auto* pointer = data_->certificate_data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModule_SetServerCertificate_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentDecryptionModule_SetServerCertificate_ResponseParamsDataView {
 public:
  ContentDecryptionModule_SetServerCertificate_ResponseParamsDataView() {}

  ContentDecryptionModule_SetServerCertificate_ResponseParamsDataView(
      internal::ContentDecryptionModule_SetServerCertificate_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      CdmPromiseResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::media::mojom::CdmPromiseResultDataView>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModule_SetServerCertificate_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentDecryptionModule_GetStatusForPolicy_ParamsDataView {
 public:
  ContentDecryptionModule_GetStatusForPolicy_ParamsDataView() {}

  ContentDecryptionModule_GetStatusForPolicy_ParamsDataView(
      internal::ContentDecryptionModule_GetStatusForPolicy_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMinHdcpVersion(UserType* output) const {
    auto data_value = data_->min_hdcp_version;
    return mojo::internal::Deserialize<::media::mojom::HdcpVersion>(
        data_value, output);
  }

  HdcpVersion min_hdcp_version() const {
    return static_cast<HdcpVersion>(data_->min_hdcp_version);
  }
 private:
  internal::ContentDecryptionModule_GetStatusForPolicy_Params_Data* data_ = nullptr;
};

class ContentDecryptionModule_GetStatusForPolicy_ResponseParamsDataView {
 public:
  ContentDecryptionModule_GetStatusForPolicy_ResponseParamsDataView() {}

  ContentDecryptionModule_GetStatusForPolicy_ResponseParamsDataView(
      internal::ContentDecryptionModule_GetStatusForPolicy_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      CdmPromiseResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::media::mojom::CdmPromiseResultDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyStatus(UserType* output) const {
    auto data_value = data_->key_status;
    return mojo::internal::Deserialize<::media::mojom::CdmKeyStatus>(
        data_value, output);
  }

  CdmKeyStatus key_status() const {
    return static_cast<CdmKeyStatus>(data_->key_status);
  }
 private:
  internal::ContentDecryptionModule_GetStatusForPolicy_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentDecryptionModule_CreateSessionAndGenerateRequest_ParamsDataView {
 public:
  ContentDecryptionModule_CreateSessionAndGenerateRequest_ParamsDataView() {}

  ContentDecryptionModule_CreateSessionAndGenerateRequest_ParamsDataView(
      internal::ContentDecryptionModule_CreateSessionAndGenerateRequest_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionType(UserType* output) const {
    auto data_value = data_->session_type;
    return mojo::internal::Deserialize<::media::mojom::CdmSessionType>(
        data_value, output);
  }

  CdmSessionType session_type() const {
    return static_cast<CdmSessionType>(data_->session_type);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInitDataType(UserType* output) const {
    auto data_value = data_->init_data_type;
    return mojo::internal::Deserialize<::media::mojom::EmeInitDataType>(
        data_value, output);
  }

  EmeInitDataType init_data_type() const {
    return static_cast<EmeInitDataType>(data_->init_data_type);
  }
  inline void GetInitDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInitData(UserType* output) {
    auto* pointer = data_->init_data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModule_CreateSessionAndGenerateRequest_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParamsDataView {
 public:
  ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParamsDataView() {}

  ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParamsDataView(
      internal::ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      CdmPromiseResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::media::mojom::CdmPromiseResultDataView>(
        pointer, output, context_);
  }
  inline void GetSessionIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionId(UserType* output) {
    auto* pointer = data_->session_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentDecryptionModule_LoadSession_ParamsDataView {
 public:
  ContentDecryptionModule_LoadSession_ParamsDataView() {}

  ContentDecryptionModule_LoadSession_ParamsDataView(
      internal::ContentDecryptionModule_LoadSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionType(UserType* output) const {
    auto data_value = data_->session_type;
    return mojo::internal::Deserialize<::media::mojom::CdmSessionType>(
        data_value, output);
  }

  CdmSessionType session_type() const {
    return static_cast<CdmSessionType>(data_->session_type);
  }
  inline void GetSessionIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionId(UserType* output) {
    auto* pointer = data_->session_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModule_LoadSession_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentDecryptionModule_LoadSession_ResponseParamsDataView {
 public:
  ContentDecryptionModule_LoadSession_ResponseParamsDataView() {}

  ContentDecryptionModule_LoadSession_ResponseParamsDataView(
      internal::ContentDecryptionModule_LoadSession_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      CdmPromiseResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::media::mojom::CdmPromiseResultDataView>(
        pointer, output, context_);
  }
  inline void GetSessionIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionId(UserType* output) {
    auto* pointer = data_->session_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModule_LoadSession_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentDecryptionModule_UpdateSession_ParamsDataView {
 public:
  ContentDecryptionModule_UpdateSession_ParamsDataView() {}

  ContentDecryptionModule_UpdateSession_ParamsDataView(
      internal::ContentDecryptionModule_UpdateSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSessionIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionId(UserType* output) {
    auto* pointer = data_->session_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetResponseDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResponse(UserType* output) {
    auto* pointer = data_->response.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModule_UpdateSession_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentDecryptionModule_UpdateSession_ResponseParamsDataView {
 public:
  ContentDecryptionModule_UpdateSession_ResponseParamsDataView() {}

  ContentDecryptionModule_UpdateSession_ResponseParamsDataView(
      internal::ContentDecryptionModule_UpdateSession_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      CdmPromiseResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::media::mojom::CdmPromiseResultDataView>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModule_UpdateSession_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentDecryptionModule_CloseSession_ParamsDataView {
 public:
  ContentDecryptionModule_CloseSession_ParamsDataView() {}

  ContentDecryptionModule_CloseSession_ParamsDataView(
      internal::ContentDecryptionModule_CloseSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSessionIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionId(UserType* output) {
    auto* pointer = data_->session_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModule_CloseSession_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentDecryptionModule_CloseSession_ResponseParamsDataView {
 public:
  ContentDecryptionModule_CloseSession_ResponseParamsDataView() {}

  ContentDecryptionModule_CloseSession_ResponseParamsDataView(
      internal::ContentDecryptionModule_CloseSession_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      CdmPromiseResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::media::mojom::CdmPromiseResultDataView>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModule_CloseSession_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentDecryptionModule_RemoveSession_ParamsDataView {
 public:
  ContentDecryptionModule_RemoveSession_ParamsDataView() {}

  ContentDecryptionModule_RemoveSession_ParamsDataView(
      internal::ContentDecryptionModule_RemoveSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSessionIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionId(UserType* output) {
    auto* pointer = data_->session_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModule_RemoveSession_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentDecryptionModule_RemoveSession_ResponseParamsDataView {
 public:
  ContentDecryptionModule_RemoveSession_ResponseParamsDataView() {}

  ContentDecryptionModule_RemoveSession_ResponseParamsDataView(
      internal::ContentDecryptionModule_RemoveSession_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      CdmPromiseResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::media::mojom::CdmPromiseResultDataView>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModule_RemoveSession_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentDecryptionModuleClient_OnSessionMessage_ParamsDataView {
 public:
  ContentDecryptionModuleClient_OnSessionMessage_ParamsDataView() {}

  ContentDecryptionModuleClient_OnSessionMessage_ParamsDataView(
      internal::ContentDecryptionModuleClient_OnSessionMessage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSessionIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionId(UserType* output) {
    auto* pointer = data_->session_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessageType(UserType* output) const {
    auto data_value = data_->message_type;
    return mojo::internal::Deserialize<::media::mojom::CdmMessageType>(
        data_value, output);
  }

  CdmMessageType message_type() const {
    return static_cast<CdmMessageType>(data_->message_type);
  }
  inline void GetMessageDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModuleClient_OnSessionMessage_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentDecryptionModuleClient_OnSessionClosed_ParamsDataView {
 public:
  ContentDecryptionModuleClient_OnSessionClosed_ParamsDataView() {}

  ContentDecryptionModuleClient_OnSessionClosed_ParamsDataView(
      internal::ContentDecryptionModuleClient_OnSessionClosed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSessionIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionId(UserType* output) {
    auto* pointer = data_->session_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModuleClient_OnSessionClosed_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentDecryptionModuleClient_OnSessionKeysChange_ParamsDataView {
 public:
  ContentDecryptionModuleClient_OnSessionKeysChange_ParamsDataView() {}

  ContentDecryptionModuleClient_OnSessionKeysChange_ParamsDataView(
      internal::ContentDecryptionModuleClient_OnSessionKeysChange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSessionIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionId(UserType* output) {
    auto* pointer = data_->session_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool has_additional_usable_key() const {
    return data_->has_additional_usable_key;
  }
  inline void GetKeysInfoDataView(
      mojo::ArrayDataView<CdmKeyInformationDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeysInfo(UserType* output) {
    auto* pointer = data_->keys_info.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media::mojom::CdmKeyInformationDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModuleClient_OnSessionKeysChange_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentDecryptionModuleClient_OnSessionExpirationUpdate_ParamsDataView {
 public:
  ContentDecryptionModuleClient_OnSessionExpirationUpdate_ParamsDataView() {}

  ContentDecryptionModuleClient_OnSessionExpirationUpdate_ParamsDataView(
      internal::ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSessionIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionId(UserType* output) {
    auto* pointer = data_->session_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  double new_expiry_time_sec() const {
    return data_->new_expiry_time_sec;
  }
 private:
  internal::ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CdmFactory_CreateCdm_ParamsDataView {
 public:
  CdmFactory_CreateCdm_ParamsDataView() {}

  CdmFactory_CreateCdm_ParamsDataView(
      internal::CdmFactory_CreateCdm_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeySystemDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeySystem(UserType* output) {
    auto* pointer = data_->key_system.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeCdm() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::ContentDecryptionModuleRequestDataView>(
            &data_->cdm, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::CdmFactory_CreateCdm_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::CdmPromiseResultDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::CdmPromiseResultDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::CdmPromiseResult_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->success = CallWithContext(Traits::success, input, custom_context);
    mojo::internal::Serialize<::media::mojom::CdmPromiseResult_Exception>(
        CallWithContext(Traits::exception, input, custom_context), &(*output)->exception);
    (*output)->system_code = CallWithContext(Traits::system_code, input, custom_context);
    decltype(CallWithContext(Traits::error_message, input, custom_context)) in_error_message = CallWithContext(Traits::error_message, input, custom_context);
    typename decltype((*output)->error_message)::BaseType::BufferWriter
        error_message_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_error_message, buffer, &error_message_writer, context);
    (*output)->error_message.Set(
        error_message_writer.is_null() ? nullptr : error_message_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->error_message.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null error_message in CdmPromiseResult struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media::mojom::internal::CdmPromiseResult_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::CdmPromiseResultDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::CdmKeyInformationDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::CdmKeyInformationDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::CdmKeyInformation_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::key_id, input, custom_context)) in_key_id = CallWithContext(Traits::key_id, input, custom_context);
    typename decltype((*output)->key_id)::BaseType::BufferWriter
        key_id_writer;
    const mojo::internal::ContainerValidateParams key_id_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_key_id, buffer, &key_id_writer, &key_id_validate_params,
        context);
    (*output)->key_id.Set(
        key_id_writer.is_null() ? nullptr : key_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->key_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null key_id in CdmKeyInformation struct");
    mojo::internal::Serialize<::media::mojom::CdmKeyStatus>(
        CallWithContext(Traits::status, input, custom_context), &(*output)->status);
    (*output)->system_code = CallWithContext(Traits::system_code, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media::mojom::internal::CdmKeyInformation_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::CdmKeyInformationDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace media {
namespace mojom {

inline void CdmPromiseResultDataView::GetErrorMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_message.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void CdmKeyInformationDataView::GetKeyIdDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key_id.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}




inline void ContentDecryptionModule_Initialize_ParamsDataView::GetKeySystemDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->key_system.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ContentDecryptionModule_Initialize_ParamsDataView::GetSecurityOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->security_origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}
inline void ContentDecryptionModule_Initialize_ParamsDataView::GetCdmConfigDataView(
    CdmConfigDataView* output) {
  auto pointer = data_->cdm_config.Get();
  *output = CdmConfigDataView(pointer, context_);
}


inline void ContentDecryptionModule_Initialize_ResponseParamsDataView::GetResultDataView(
    CdmPromiseResultDataView* output) {
  auto pointer = data_->result.Get();
  *output = CdmPromiseResultDataView(pointer, context_);
}


inline void ContentDecryptionModule_SetServerCertificate_ParamsDataView::GetCertificateDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->certificate_data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void ContentDecryptionModule_SetServerCertificate_ResponseParamsDataView::GetResultDataView(
    CdmPromiseResultDataView* output) {
  auto pointer = data_->result.Get();
  *output = CdmPromiseResultDataView(pointer, context_);
}




inline void ContentDecryptionModule_GetStatusForPolicy_ResponseParamsDataView::GetResultDataView(
    CdmPromiseResultDataView* output) {
  auto pointer = data_->result.Get();
  *output = CdmPromiseResultDataView(pointer, context_);
}


inline void ContentDecryptionModule_CreateSessionAndGenerateRequest_ParamsDataView::GetInitDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->init_data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParamsDataView::GetResultDataView(
    CdmPromiseResultDataView* output) {
  auto pointer = data_->result.Get();
  *output = CdmPromiseResultDataView(pointer, context_);
}
inline void ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParamsDataView::GetSessionIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->session_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ContentDecryptionModule_LoadSession_ParamsDataView::GetSessionIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->session_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ContentDecryptionModule_LoadSession_ResponseParamsDataView::GetResultDataView(
    CdmPromiseResultDataView* output) {
  auto pointer = data_->result.Get();
  *output = CdmPromiseResultDataView(pointer, context_);
}
inline void ContentDecryptionModule_LoadSession_ResponseParamsDataView::GetSessionIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->session_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ContentDecryptionModule_UpdateSession_ParamsDataView::GetSessionIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->session_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ContentDecryptionModule_UpdateSession_ParamsDataView::GetResponseDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->response.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void ContentDecryptionModule_UpdateSession_ResponseParamsDataView::GetResultDataView(
    CdmPromiseResultDataView* output) {
  auto pointer = data_->result.Get();
  *output = CdmPromiseResultDataView(pointer, context_);
}


inline void ContentDecryptionModule_CloseSession_ParamsDataView::GetSessionIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->session_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ContentDecryptionModule_CloseSession_ResponseParamsDataView::GetResultDataView(
    CdmPromiseResultDataView* output) {
  auto pointer = data_->result.Get();
  *output = CdmPromiseResultDataView(pointer, context_);
}


inline void ContentDecryptionModule_RemoveSession_ParamsDataView::GetSessionIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->session_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ContentDecryptionModule_RemoveSession_ResponseParamsDataView::GetResultDataView(
    CdmPromiseResultDataView* output) {
  auto pointer = data_->result.Get();
  *output = CdmPromiseResultDataView(pointer, context_);
}


inline void ContentDecryptionModuleClient_OnSessionMessage_ParamsDataView::GetSessionIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->session_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ContentDecryptionModuleClient_OnSessionMessage_ParamsDataView::GetMessageDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->message.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void ContentDecryptionModuleClient_OnSessionClosed_ParamsDataView::GetSessionIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->session_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ContentDecryptionModuleClient_OnSessionKeysChange_ParamsDataView::GetSessionIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->session_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ContentDecryptionModuleClient_OnSessionKeysChange_ParamsDataView::GetKeysInfoDataView(
    mojo::ArrayDataView<CdmKeyInformationDataView>* output) {
  auto pointer = data_->keys_info.Get();
  *output = mojo::ArrayDataView<CdmKeyInformationDataView>(pointer, context_);
}


inline void ContentDecryptionModuleClient_OnSessionExpirationUpdate_ParamsDataView::GetSessionIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->session_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void CdmFactory_CreateCdm_ParamsDataView::GetKeySystemDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->key_system.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_SHARED_H_
