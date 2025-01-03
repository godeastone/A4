// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_IDENTITY_PUBLIC_MOJOM_IDENTITY_MANAGER_MOJOM_SHARED_H_
#define SERVICES_IDENTITY_PUBLIC_MOJOM_IDENTITY_MANAGER_MOJOM_SHARED_H_

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
#include "services/identity/public/mojom/identity_manager.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "services/identity/public/mojom/account.mojom-shared.h"
#include "services/identity/public/mojom/account_info.mojom-shared.h"
#include "services/identity/public/mojom/account_state.mojom-shared.h"
#include "services/identity/public/mojom/google_service_auth_error.mojom-shared.h"
#include "services/identity/public/mojom/scope_set.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace identity {
namespace mojom {


}  // namespace mojom
}  // namespace identity

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace identity {
namespace mojom {
// Interface base classes. They are used for type safety check.
class IdentityManagerInterfaceBase {};

using IdentityManagerPtrDataView =
    mojo::InterfacePtrDataView<IdentityManagerInterfaceBase>;
using IdentityManagerRequestDataView =
    mojo::InterfaceRequestDataView<IdentityManagerInterfaceBase>;
using IdentityManagerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<IdentityManagerInterfaceBase>;
using IdentityManagerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<IdentityManagerInterfaceBase>;
class IdentityManager_GetPrimaryAccountInfo_ParamsDataView {
 public:
  IdentityManager_GetPrimaryAccountInfo_ParamsDataView() {}

  IdentityManager_GetPrimaryAccountInfo_ParamsDataView(
      internal::IdentityManager_GetPrimaryAccountInfo_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::IdentityManager_GetPrimaryAccountInfo_Params_Data* data_ = nullptr;
};

class IdentityManager_GetPrimaryAccountInfo_ResponseParamsDataView {
 public:
  IdentityManager_GetPrimaryAccountInfo_ResponseParamsDataView() {}

  IdentityManager_GetPrimaryAccountInfo_ResponseParamsDataView(
      internal::IdentityManager_GetPrimaryAccountInfo_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAccountInfoDataView(
      ::identity::mojom::AccountInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAccountInfo(UserType* output) {
    auto* pointer = data_->account_info.Get();
    return mojo::internal::Deserialize<::identity::mojom::AccountInfoDataView>(
        pointer, output, context_);
  }
  inline void GetAccountStateDataView(
      ::identity::mojom::AccountStateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAccountState(UserType* output) {
    auto* pointer = data_->account_state.Get();
    return mojo::internal::Deserialize<::identity::mojom::AccountStateDataView>(
        pointer, output, context_);
  }
 private:
  internal::IdentityManager_GetPrimaryAccountInfo_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IdentityManager_GetPrimaryAccountWhenAvailable_ParamsDataView {
 public:
  IdentityManager_GetPrimaryAccountWhenAvailable_ParamsDataView() {}

  IdentityManager_GetPrimaryAccountWhenAvailable_ParamsDataView(
      internal::IdentityManager_GetPrimaryAccountWhenAvailable_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::IdentityManager_GetPrimaryAccountWhenAvailable_Params_Data* data_ = nullptr;
};

class IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParamsDataView {
 public:
  IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParamsDataView() {}

  IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParamsDataView(
      internal::IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAccountInfoDataView(
      ::identity::mojom::AccountInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAccountInfo(UserType* output) {
    auto* pointer = data_->account_info.Get();
    return mojo::internal::Deserialize<::identity::mojom::AccountInfoDataView>(
        pointer, output, context_);
  }
  inline void GetAccountStateDataView(
      ::identity::mojom::AccountStateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAccountState(UserType* output) {
    auto* pointer = data_->account_state.Get();
    return mojo::internal::Deserialize<::identity::mojom::AccountStateDataView>(
        pointer, output, context_);
  }
 private:
  internal::IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IdentityManager_GetAccountInfoFromGaiaId_ParamsDataView {
 public:
  IdentityManager_GetAccountInfoFromGaiaId_ParamsDataView() {}

  IdentityManager_GetAccountInfoFromGaiaId_ParamsDataView(
      internal::IdentityManager_GetAccountInfoFromGaiaId_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetGaiaIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGaiaId(UserType* output) {
    auto* pointer = data_->gaia_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::IdentityManager_GetAccountInfoFromGaiaId_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IdentityManager_GetAccountInfoFromGaiaId_ResponseParamsDataView {
 public:
  IdentityManager_GetAccountInfoFromGaiaId_ResponseParamsDataView() {}

  IdentityManager_GetAccountInfoFromGaiaId_ResponseParamsDataView(
      internal::IdentityManager_GetAccountInfoFromGaiaId_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAccountInfoDataView(
      ::identity::mojom::AccountInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAccountInfo(UserType* output) {
    auto* pointer = data_->account_info.Get();
    return mojo::internal::Deserialize<::identity::mojom::AccountInfoDataView>(
        pointer, output, context_);
  }
  inline void GetAccountStateDataView(
      ::identity::mojom::AccountStateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAccountState(UserType* output) {
    auto* pointer = data_->account_state.Get();
    return mojo::internal::Deserialize<::identity::mojom::AccountStateDataView>(
        pointer, output, context_);
  }
 private:
  internal::IdentityManager_GetAccountInfoFromGaiaId_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IdentityManager_GetAccounts_ParamsDataView {
 public:
  IdentityManager_GetAccounts_ParamsDataView() {}

  IdentityManager_GetAccounts_ParamsDataView(
      internal::IdentityManager_GetAccounts_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::IdentityManager_GetAccounts_Params_Data* data_ = nullptr;
};

class IdentityManager_GetAccounts_ResponseParamsDataView {
 public:
  IdentityManager_GetAccounts_ResponseParamsDataView() {}

  IdentityManager_GetAccounts_ResponseParamsDataView(
      internal::IdentityManager_GetAccounts_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAccountsDataView(
      mojo::ArrayDataView<::identity::mojom::AccountDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAccounts(UserType* output) {
    auto* pointer = data_->accounts.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::identity::mojom::AccountDataView>>(
        pointer, output, context_);
  }
 private:
  internal::IdentityManager_GetAccounts_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IdentityManager_GetAccessToken_ParamsDataView {
 public:
  IdentityManager_GetAccessToken_ParamsDataView() {}

  IdentityManager_GetAccessToken_ParamsDataView(
      internal::IdentityManager_GetAccessToken_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAccountIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAccountId(UserType* output) {
    auto* pointer = data_->account_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetScopesDataView(
      ::identity::mojom::ScopeSetDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScopes(UserType* output) {
    auto* pointer = data_->scopes.Get();
    return mojo::internal::Deserialize<::identity::mojom::ScopeSetDataView>(
        pointer, output, context_);
  }
  inline void GetConsumerIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadConsumerId(UserType* output) {
    auto* pointer = data_->consumer_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::IdentityManager_GetAccessToken_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IdentityManager_GetAccessToken_ResponseParamsDataView {
 public:
  IdentityManager_GetAccessToken_ResponseParamsDataView() {}

  IdentityManager_GetAccessToken_ResponseParamsDataView(
      internal::IdentityManager_GetAccessToken_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTokenDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadToken(UserType* output) {
    auto* pointer = data_->token.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetExpirationTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExpirationTime(UserType* output) {
    auto* pointer = data_->expiration_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  inline void GetErrorDataView(
      ::identity::mojom::GoogleServiceAuthErrorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) {
    auto* pointer = data_->error.Get();
    return mojo::internal::Deserialize<::identity::mojom::GoogleServiceAuthErrorDataView>(
        pointer, output, context_);
  }
 private:
  internal::IdentityManager_GetAccessToken_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace identity

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace identity {
namespace mojom {



inline void IdentityManager_GetPrimaryAccountInfo_ResponseParamsDataView::GetAccountInfoDataView(
    ::identity::mojom::AccountInfoDataView* output) {
  auto pointer = data_->account_info.Get();
  *output = ::identity::mojom::AccountInfoDataView(pointer, context_);
}
inline void IdentityManager_GetPrimaryAccountInfo_ResponseParamsDataView::GetAccountStateDataView(
    ::identity::mojom::AccountStateDataView* output) {
  auto pointer = data_->account_state.Get();
  *output = ::identity::mojom::AccountStateDataView(pointer, context_);
}




inline void IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParamsDataView::GetAccountInfoDataView(
    ::identity::mojom::AccountInfoDataView* output) {
  auto pointer = data_->account_info.Get();
  *output = ::identity::mojom::AccountInfoDataView(pointer, context_);
}
inline void IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParamsDataView::GetAccountStateDataView(
    ::identity::mojom::AccountStateDataView* output) {
  auto pointer = data_->account_state.Get();
  *output = ::identity::mojom::AccountStateDataView(pointer, context_);
}


inline void IdentityManager_GetAccountInfoFromGaiaId_ParamsDataView::GetGaiaIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->gaia_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void IdentityManager_GetAccountInfoFromGaiaId_ResponseParamsDataView::GetAccountInfoDataView(
    ::identity::mojom::AccountInfoDataView* output) {
  auto pointer = data_->account_info.Get();
  *output = ::identity::mojom::AccountInfoDataView(pointer, context_);
}
inline void IdentityManager_GetAccountInfoFromGaiaId_ResponseParamsDataView::GetAccountStateDataView(
    ::identity::mojom::AccountStateDataView* output) {
  auto pointer = data_->account_state.Get();
  *output = ::identity::mojom::AccountStateDataView(pointer, context_);
}




inline void IdentityManager_GetAccounts_ResponseParamsDataView::GetAccountsDataView(
    mojo::ArrayDataView<::identity::mojom::AccountDataView>* output) {
  auto pointer = data_->accounts.Get();
  *output = mojo::ArrayDataView<::identity::mojom::AccountDataView>(pointer, context_);
}


inline void IdentityManager_GetAccessToken_ParamsDataView::GetAccountIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->account_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void IdentityManager_GetAccessToken_ParamsDataView::GetScopesDataView(
    ::identity::mojom::ScopeSetDataView* output) {
  auto pointer = data_->scopes.Get();
  *output = ::identity::mojom::ScopeSetDataView(pointer, context_);
}
inline void IdentityManager_GetAccessToken_ParamsDataView::GetConsumerIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->consumer_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void IdentityManager_GetAccessToken_ResponseParamsDataView::GetTokenDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->token.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void IdentityManager_GetAccessToken_ResponseParamsDataView::GetExpirationTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->expiration_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}
inline void IdentityManager_GetAccessToken_ResponseParamsDataView::GetErrorDataView(
    ::identity::mojom::GoogleServiceAuthErrorDataView* output) {
  auto pointer = data_->error.Get();
  *output = ::identity::mojom::GoogleServiceAuthErrorDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace identity

#endif  // SERVICES_IDENTITY_PUBLIC_MOJOM_IDENTITY_MANAGER_MOJOM_SHARED_H_
