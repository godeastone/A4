// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/network_service.mojom-shared-internal.h"
#include "services/network/public/mojom/network_change_manager.mojom-shared.h"
#include "services/network/public/mojom/network_context.mojom-shared.h"
#include "services/network/public/mojom/url_loader.mojom-shared.h"
#include "services/network/public/mojom/network_param.mojom-shared.h"
#include "services/network/public/mojom/signed_tree_head.mojom-shared.h"
#include "services/network/public/mojom/url_loader_factory.mojom-shared.h"
#include "url/mojom/origin.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace network {
namespace mojom {


}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {
// Interface base classes. They are used for type safety check.
class SSLPrivateKeyInterfaceBase {};

using SSLPrivateKeyPtrDataView =
    mojo::InterfacePtrDataView<SSLPrivateKeyInterfaceBase>;
using SSLPrivateKeyRequestDataView =
    mojo::InterfaceRequestDataView<SSLPrivateKeyInterfaceBase>;
using SSLPrivateKeyAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SSLPrivateKeyInterfaceBase>;
using SSLPrivateKeyAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SSLPrivateKeyInterfaceBase>;
class AuthChallengeResponderInterfaceBase {};

using AuthChallengeResponderPtrDataView =
    mojo::InterfacePtrDataView<AuthChallengeResponderInterfaceBase>;
using AuthChallengeResponderRequestDataView =
    mojo::InterfaceRequestDataView<AuthChallengeResponderInterfaceBase>;
using AuthChallengeResponderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AuthChallengeResponderInterfaceBase>;
using AuthChallengeResponderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AuthChallengeResponderInterfaceBase>;
class NetworkServiceClientInterfaceBase {};

using NetworkServiceClientPtrDataView =
    mojo::InterfacePtrDataView<NetworkServiceClientInterfaceBase>;
using NetworkServiceClientRequestDataView =
    mojo::InterfaceRequestDataView<NetworkServiceClientInterfaceBase>;
using NetworkServiceClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<NetworkServiceClientInterfaceBase>;
using NetworkServiceClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<NetworkServiceClientInterfaceBase>;
class NetworkServiceInterfaceBase {};

using NetworkServicePtrDataView =
    mojo::InterfacePtrDataView<NetworkServiceInterfaceBase>;
using NetworkServiceRequestDataView =
    mojo::InterfaceRequestDataView<NetworkServiceInterfaceBase>;
using NetworkServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<NetworkServiceInterfaceBase>;
using NetworkServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<NetworkServiceInterfaceBase>;
class SSLPrivateKey_Sign_ParamsDataView {
 public:
  SSLPrivateKey_Sign_ParamsDataView() {}

  SSLPrivateKey_Sign_ParamsDataView(
      internal::SSLPrivateKey_Sign_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint16_t algorithm() const {
    return data_->algorithm;
  }
  inline void GetInputDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInput(UserType* output) {
    auto* pointer = data_->input.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::SSLPrivateKey_Sign_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SSLPrivateKey_Sign_ResponseParamsDataView {
 public:
  SSLPrivateKey_Sign_ResponseParamsDataView() {}

  SSLPrivateKey_Sign_ResponseParamsDataView(
      internal::SSLPrivateKey_Sign_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t net_error() const {
    return data_->net_error;
  }
  inline void GetSignatureDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSignature(UserType* output) {
    auto* pointer = data_->signature.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::SSLPrivateKey_Sign_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AuthChallengeResponder_OnAuthCredentials_ParamsDataView {
 public:
  AuthChallengeResponder_OnAuthCredentials_ParamsDataView() {}

  AuthChallengeResponder_OnAuthCredentials_ParamsDataView(
      internal::AuthChallengeResponder_OnAuthCredentials_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCredentialsDataView(
      ::network::mojom::AuthCredentialsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCredentials(UserType* output) {
    auto* pointer = data_->credentials.Get();
    return mojo::internal::Deserialize<::network::mojom::AuthCredentialsDataView>(
        pointer, output, context_);
  }
 private:
  internal::AuthChallengeResponder_OnAuthCredentials_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkServiceClient_OnAuthRequired_ParamsDataView {
 public:
  NetworkServiceClient_OnAuthRequired_ParamsDataView() {}

  NetworkServiceClient_OnAuthRequired_ParamsDataView(
      internal::NetworkServiceClient_OnAuthRequired_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t process_id() const {
    return data_->process_id;
  }
  uint32_t routing_id() const {
    return data_->routing_id;
  }
  uint32_t request_id() const {
    return data_->request_id;
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetSiteForCookiesDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSiteForCookies(UserType* output) {
    auto* pointer = data_->site_for_cookies.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  bool first_auth_attempt() const {
    return data_->first_auth_attempt;
  }
  inline void GetAuthInfoDataView(
      ::network::mojom::AuthChallengeInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAuthInfo(UserType* output) {
    auto* pointer = data_->auth_info.Get();
    return mojo::internal::Deserialize<::network::mojom::AuthChallengeInfoDataView>(
        pointer, output, context_);
  }
  int32_t resource_type() const {
    return data_->resource_type;
  }
  template <typename UserType>
  UserType TakeAuthChallengeResponder() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::AuthChallengeResponderPtrDataView>(
            &data_->auth_challenge_responder, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NetworkServiceClient_OnAuthRequired_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkServiceClient_OnCertificateRequested_ParamsDataView {
 public:
  NetworkServiceClient_OnCertificateRequested_ParamsDataView() {}

  NetworkServiceClient_OnCertificateRequested_ParamsDataView(
      internal::NetworkServiceClient_OnCertificateRequested_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t process_id() const {
    return data_->process_id;
  }
  uint32_t routing_id() const {
    return data_->routing_id;
  }
  uint32_t request_id() const {
    return data_->request_id;
  }
  inline void GetCertInfoDataView(
      ::network::mojom::SSLCertRequestInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCertInfo(UserType* output) {
    auto* pointer = data_->cert_info.Get();
    return mojo::internal::Deserialize<::network::mojom::SSLCertRequestInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkServiceClient_OnCertificateRequested_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkServiceClient_OnCertificateRequested_ResponseParamsDataView {
 public:
  NetworkServiceClient_OnCertificateRequested_ResponseParamsDataView() {}

  NetworkServiceClient_OnCertificateRequested_ResponseParamsDataView(
      internal::NetworkServiceClient_OnCertificateRequested_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetX509CertificateDataView(
      ::network::mojom::X509CertificateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadX509Certificate(UserType* output) {
    auto* pointer = data_->x509_certificate.Get();
    return mojo::internal::Deserialize<::network::mojom::X509CertificateDataView>(
        pointer, output, context_);
  }
  inline void GetAlgorithmPreferencesDataView(
      mojo::ArrayDataView<uint16_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAlgorithmPreferences(UserType* output) {
    auto* pointer = data_->algorithm_preferences.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint16_t>>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeSslPrivateKey() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::SSLPrivateKeyPtrDataView>(
            &data_->ssl_private_key, &result, context_);
    DCHECK(ret);
    return result;
  }
  bool cancel_certificate_selection() const {
    return data_->cancel_certificate_selection;
  }
 private:
  internal::NetworkServiceClient_OnCertificateRequested_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkServiceClient_OnSSLCertificateError_ParamsDataView {
 public:
  NetworkServiceClient_OnSSLCertificateError_ParamsDataView() {}

  NetworkServiceClient_OnSSLCertificateError_ParamsDataView(
      internal::NetworkServiceClient_OnSSLCertificateError_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t process_id() const {
    return data_->process_id;
  }
  uint32_t routing_id() const {
    return data_->routing_id;
  }
  uint32_t request_id() const {
    return data_->request_id;
  }
  int32_t resource_type() const {
    return data_->resource_type;
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetSslInfoDataView(
      ::network::mojom::SSLInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSslInfo(UserType* output) {
    auto* pointer = data_->ssl_info.Get();
    return mojo::internal::Deserialize<::network::mojom::SSLInfoDataView>(
        pointer, output, context_);
  }
  bool fatal() const {
    return data_->fatal;
  }
 private:
  internal::NetworkServiceClient_OnSSLCertificateError_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkServiceClient_OnSSLCertificateError_ResponseParamsDataView {
 public:
  NetworkServiceClient_OnSSLCertificateError_ResponseParamsDataView() {}

  NetworkServiceClient_OnSSLCertificateError_ResponseParamsDataView(
      internal::NetworkServiceClient_OnSSLCertificateError_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t net_error() const {
    return data_->net_error;
  }
 private:
  internal::NetworkServiceClient_OnSSLCertificateError_ResponseParams_Data* data_ = nullptr;
};

class NetworkService_SetClient_ParamsDataView {
 public:
  NetworkService_SetClient_ParamsDataView() {}

  NetworkService_SetClient_ParamsDataView(
      internal::NetworkService_SetClient_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::NetworkServiceClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NetworkService_SetClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkService_CreateNetworkContext_ParamsDataView {
 public:
  NetworkService_CreateNetworkContext_ParamsDataView() {}

  NetworkService_CreateNetworkContext_ParamsDataView(
      internal::NetworkService_CreateNetworkContext_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeContext() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::NetworkContextRequestDataView>(
            &data_->context, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetParamsDataView(
      ::network::mojom::NetworkContextParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::network::mojom::NetworkContextParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkService_CreateNetworkContext_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkService_DisableQuic_ParamsDataView {
 public:
  NetworkService_DisableQuic_ParamsDataView() {}

  NetworkService_DisableQuic_ParamsDataView(
      internal::NetworkService_DisableQuic_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkService_DisableQuic_Params_Data* data_ = nullptr;
};

class NetworkService_SetRawHeadersAccess_ParamsDataView {
 public:
  NetworkService_SetRawHeadersAccess_ParamsDataView() {}

  NetworkService_SetRawHeadersAccess_ParamsDataView(
      internal::NetworkService_SetRawHeadersAccess_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t process_id() const {
    return data_->process_id;
  }
  bool allow() const {
    return data_->allow;
  }
 private:
  internal::NetworkService_SetRawHeadersAccess_Params_Data* data_ = nullptr;
};

class NetworkService_GetNetworkChangeManager_ParamsDataView {
 public:
  NetworkService_GetNetworkChangeManager_ParamsDataView() {}

  NetworkService_GetNetworkChangeManager_ParamsDataView(
      internal::NetworkService_GetNetworkChangeManager_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeNetworkChangeManager() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::NetworkChangeManagerRequestDataView>(
            &data_->network_change_manager, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NetworkService_GetNetworkChangeManager_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkService_GetTotalNetworkUsages_ParamsDataView {
 public:
  NetworkService_GetTotalNetworkUsages_ParamsDataView() {}

  NetworkService_GetTotalNetworkUsages_ParamsDataView(
      internal::NetworkService_GetTotalNetworkUsages_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NetworkService_GetTotalNetworkUsages_Params_Data* data_ = nullptr;
};

class NetworkService_GetTotalNetworkUsages_ResponseParamsDataView {
 public:
  NetworkService_GetTotalNetworkUsages_ResponseParamsDataView() {}

  NetworkService_GetTotalNetworkUsages_ResponseParamsDataView(
      internal::NetworkService_GetTotalNetworkUsages_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTotalNetworkUsagesDataView(
      mojo::ArrayDataView<::network::mojom::NetworkUsageDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTotalNetworkUsages(UserType* output) {
    auto* pointer = data_->total_network_usages.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::NetworkUsageDataView>>(
        pointer, output, context_);
  }
 private:
  internal::NetworkService_GetTotalNetworkUsages_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkService_UpdateSignedTreeHead_ParamsDataView {
 public:
  NetworkService_UpdateSignedTreeHead_ParamsDataView() {}

  NetworkService_UpdateSignedTreeHead_ParamsDataView(
      internal::NetworkService_UpdateSignedTreeHead_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSignedTreeHeadDataView(
      ::network::mojom::SignedTreeHeadDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSignedTreeHead(UserType* output) {
    auto* pointer = data_->signed_tree_head.Get();
    return mojo::internal::Deserialize<::network::mojom::SignedTreeHeadDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkService_UpdateSignedTreeHead_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace network {
namespace mojom {

inline void SSLPrivateKey_Sign_ParamsDataView::GetInputDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->input.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void SSLPrivateKey_Sign_ResponseParamsDataView::GetSignatureDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->signature.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void AuthChallengeResponder_OnAuthCredentials_ParamsDataView::GetCredentialsDataView(
    ::network::mojom::AuthCredentialsDataView* output) {
  auto pointer = data_->credentials.Get();
  *output = ::network::mojom::AuthCredentialsDataView(pointer, context_);
}


inline void NetworkServiceClient_OnAuthRequired_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void NetworkServiceClient_OnAuthRequired_ParamsDataView::GetSiteForCookiesDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->site_for_cookies.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void NetworkServiceClient_OnAuthRequired_ParamsDataView::GetAuthInfoDataView(
    ::network::mojom::AuthChallengeInfoDataView* output) {
  auto pointer = data_->auth_info.Get();
  *output = ::network::mojom::AuthChallengeInfoDataView(pointer, context_);
}


inline void NetworkServiceClient_OnCertificateRequested_ParamsDataView::GetCertInfoDataView(
    ::network::mojom::SSLCertRequestInfoDataView* output) {
  auto pointer = data_->cert_info.Get();
  *output = ::network::mojom::SSLCertRequestInfoDataView(pointer, context_);
}


inline void NetworkServiceClient_OnCertificateRequested_ResponseParamsDataView::GetX509CertificateDataView(
    ::network::mojom::X509CertificateDataView* output) {
  auto pointer = data_->x509_certificate.Get();
  *output = ::network::mojom::X509CertificateDataView(pointer, context_);
}
inline void NetworkServiceClient_OnCertificateRequested_ResponseParamsDataView::GetAlgorithmPreferencesDataView(
    mojo::ArrayDataView<uint16_t>* output) {
  auto pointer = data_->algorithm_preferences.Get();
  *output = mojo::ArrayDataView<uint16_t>(pointer, context_);
}


inline void NetworkServiceClient_OnSSLCertificateError_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void NetworkServiceClient_OnSSLCertificateError_ParamsDataView::GetSslInfoDataView(
    ::network::mojom::SSLInfoDataView* output) {
  auto pointer = data_->ssl_info.Get();
  *output = ::network::mojom::SSLInfoDataView(pointer, context_);
}






inline void NetworkService_CreateNetworkContext_ParamsDataView::GetParamsDataView(
    ::network::mojom::NetworkContextParamsDataView* output) {
  auto pointer = data_->params.Get();
  *output = ::network::mojom::NetworkContextParamsDataView(pointer, context_);
}










inline void NetworkService_GetTotalNetworkUsages_ResponseParamsDataView::GetTotalNetworkUsagesDataView(
    mojo::ArrayDataView<::network::mojom::NetworkUsageDataView>* output) {
  auto pointer = data_->total_network_usages.Get();
  *output = mojo::ArrayDataView<::network::mojom::NetworkUsageDataView>(pointer, context_);
}


inline void NetworkService_UpdateSignedTreeHead_ParamsDataView::GetSignedTreeHeadDataView(
    ::network::mojom::SignedTreeHeadDataView* output) {
  auto pointer = data_->signed_tree_head.Get();
  *output = ::network::mojom::SignedTreeHeadDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_SHARED_H_
