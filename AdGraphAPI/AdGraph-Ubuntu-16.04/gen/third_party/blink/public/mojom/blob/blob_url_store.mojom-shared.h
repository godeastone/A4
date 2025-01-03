// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_URL_STORE_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_URL_STORE_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/blob/blob_url_store.mojom-shared-internal.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared.h"
#include "services/network/public/mojom/url_loader_factory.mojom-shared.h"
#include "third_party/blink/public/mojom/blob/blob.mojom-shared.h"
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
// Interface base classes. They are used for type safety check.
class BlobURLStoreInterfaceBase {};

using BlobURLStorePtrDataView =
    mojo::InterfacePtrDataView<BlobURLStoreInterfaceBase>;
using BlobURLStoreRequestDataView =
    mojo::InterfaceRequestDataView<BlobURLStoreInterfaceBase>;
using BlobURLStoreAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<BlobURLStoreInterfaceBase>;
using BlobURLStoreAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<BlobURLStoreInterfaceBase>;
class BlobURLTokenInterfaceBase {};

using BlobURLTokenPtrDataView =
    mojo::InterfacePtrDataView<BlobURLTokenInterfaceBase>;
using BlobURLTokenRequestDataView =
    mojo::InterfaceRequestDataView<BlobURLTokenInterfaceBase>;
using BlobURLTokenAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<BlobURLTokenInterfaceBase>;
using BlobURLTokenAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<BlobURLTokenInterfaceBase>;
class BlobURLStore_Register_ParamsDataView {
 public:
  BlobURLStore_Register_ParamsDataView() {}

  BlobURLStore_Register_ParamsDataView(
      internal::BlobURLStore_Register_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeBlob() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::BlobPtrDataView>(
            &data_->blob, &result, context_);
    DCHECK(ret);
    return result;
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
  internal::BlobURLStore_Register_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BlobURLStore_Register_ResponseParamsDataView {
 public:
  BlobURLStore_Register_ResponseParamsDataView() {}

  BlobURLStore_Register_ResponseParamsDataView(
      internal::BlobURLStore_Register_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::BlobURLStore_Register_ResponseParams_Data* data_ = nullptr;
};

class BlobURLStore_Revoke_ParamsDataView {
 public:
  BlobURLStore_Revoke_ParamsDataView() {}

  BlobURLStore_Revoke_ParamsDataView(
      internal::BlobURLStore_Revoke_Params_Data* data,
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
  internal::BlobURLStore_Revoke_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BlobURLStore_Resolve_ParamsDataView {
 public:
  BlobURLStore_Resolve_ParamsDataView() {}

  BlobURLStore_Resolve_ParamsDataView(
      internal::BlobURLStore_Resolve_Params_Data* data,
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
  internal::BlobURLStore_Resolve_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BlobURLStore_Resolve_ResponseParamsDataView {
 public:
  BlobURLStore_Resolve_ResponseParamsDataView() {}

  BlobURLStore_Resolve_ResponseParamsDataView(
      internal::BlobURLStore_Resolve_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeBlob() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::BlobPtrDataView>(
            &data_->blob, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::BlobURLStore_Resolve_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BlobURLStore_ResolveAsURLLoaderFactory_ParamsDataView {
 public:
  BlobURLStore_ResolveAsURLLoaderFactory_ParamsDataView() {}

  BlobURLStore_ResolveAsURLLoaderFactory_ParamsDataView(
      internal::BlobURLStore_ResolveAsURLLoaderFactory_Params_Data* data,
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
  template <typename UserType>
  UserType TakeFactory() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::URLLoaderFactoryRequestDataView>(
            &data_->factory, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::BlobURLStore_ResolveAsURLLoaderFactory_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BlobURLStore_ResolveForNavigation_ParamsDataView {
 public:
  BlobURLStore_ResolveForNavigation_ParamsDataView() {}

  BlobURLStore_ResolveForNavigation_ParamsDataView(
      internal::BlobURLStore_ResolveForNavigation_Params_Data* data,
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
  template <typename UserType>
  UserType TakeToken() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::BlobURLTokenRequestDataView>(
            &data_->token, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::BlobURLStore_ResolveForNavigation_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BlobURLToken_Clone_ParamsDataView {
 public:
  BlobURLToken_Clone_ParamsDataView() {}

  BlobURLToken_Clone_ParamsDataView(
      internal::BlobURLToken_Clone_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeToken() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::BlobURLTokenRequestDataView>(
            &data_->token, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::BlobURLToken_Clone_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BlobURLToken_GetToken_ParamsDataView {
 public:
  BlobURLToken_GetToken_ParamsDataView() {}

  BlobURLToken_GetToken_ParamsDataView(
      internal::BlobURLToken_GetToken_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::BlobURLToken_GetToken_Params_Data* data_ = nullptr;
};

class BlobURLToken_GetToken_ResponseParamsDataView {
 public:
  BlobURLToken_GetToken_ResponseParamsDataView() {}

  BlobURLToken_GetToken_ResponseParamsDataView(
      internal::BlobURLToken_GetToken_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTokenDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadToken(UserType* output) {
    auto* pointer = data_->token.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::BlobURLToken_GetToken_ResponseParams_Data* data_ = nullptr;
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

inline void BlobURLStore_Register_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}




inline void BlobURLStore_Revoke_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void BlobURLStore_Resolve_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}




inline void BlobURLStore_ResolveAsURLLoaderFactory_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void BlobURLStore_ResolveForNavigation_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}






inline void BlobURLToken_GetToken_ResponseParamsDataView::GetTokenDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->token.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_URL_STORE_MOJOM_SHARED_H_
