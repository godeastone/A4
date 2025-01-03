// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_IDENTITY_PUBLIC_MOJOM_IDENTITY_MANAGER_MOJOM_H_
#define SERVICES_IDENTITY_PUBLIC_MOJOM_IDENTITY_MANAGER_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "services/identity/public/mojom/identity_manager.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "services/identity/public/mojom/account.mojom.h"
#include "services/identity/public/mojom/account_info.mojom.h"
#include "services/identity/public/mojom/account_state.mojom.h"
#include "services/identity/public/mojom/google_service_auth_error.mojom.h"
#include "services/identity/public/mojom/scope_set.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace identity {
namespace mojom {
class IdentityManager;
using IdentityManagerPtr = mojo::InterfacePtr<IdentityManager>;
using IdentityManagerPtrInfo = mojo::InterfacePtrInfo<IdentityManager>;
using ThreadSafeIdentityManagerPtr =
    mojo::ThreadSafeInterfacePtr<IdentityManager>;
using IdentityManagerRequest = mojo::InterfaceRequest<IdentityManager>;
using IdentityManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<IdentityManager>;
using ThreadSafeIdentityManagerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<IdentityManager>;
using IdentityManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<IdentityManager>;
using IdentityManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<IdentityManager>;


class IdentityManagerProxy;

template <typename ImplRefTraits>
class IdentityManagerStub;

class IdentityManagerRequestValidator;
class IdentityManagerResponseValidator;

class  IdentityManager
    : public IdentityManagerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = IdentityManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = IdentityManagerStub<ImplRefTraits>;

  using RequestValidator_ = IdentityManagerRequestValidator;
  using ResponseValidator_ = IdentityManagerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetPrimaryAccountInfoMinVersion = 0,
    kGetPrimaryAccountWhenAvailableMinVersion = 0,
    kGetAccountInfoFromGaiaIdMinVersion = 0,
    kGetAccountsMinVersion = 0,
    kGetAccessTokenMinVersion = 0,
  };
  virtual ~IdentityManager() {}


  using GetPrimaryAccountInfoCallback = base::OnceCallback<void(const base::Optional<::AccountInfo>&, const identity::AccountState&)>;
  virtual void GetPrimaryAccountInfo(GetPrimaryAccountInfoCallback callback) = 0;


  using GetPrimaryAccountWhenAvailableCallback = base::OnceCallback<void(const ::AccountInfo&, const identity::AccountState&)>;
  virtual void GetPrimaryAccountWhenAvailable(GetPrimaryAccountWhenAvailableCallback callback) = 0;


  using GetAccountInfoFromGaiaIdCallback = base::OnceCallback<void(const base::Optional<::AccountInfo>&, const identity::AccountState&)>;
  virtual void GetAccountInfoFromGaiaId(const std::string& gaia_id, GetAccountInfoFromGaiaIdCallback callback) = 0;


  using GetAccountsCallback = base::OnceCallback<void(std::vector<::identity::mojom::AccountPtr>)>;
  virtual void GetAccounts(GetAccountsCallback callback) = 0;


  using GetAccessTokenCallback = base::OnceCallback<void(const base::Optional<std::string>&, base::Time, const ::GoogleServiceAuthError&)>;
  virtual void GetAccessToken(const std::string& account_id, const ::identity::ScopeSet& scopes, const std::string& consumer_id, GetAccessTokenCallback callback) = 0;
};
class  IdentityManagerInterceptorForTesting : public IdentityManager {
  virtual IdentityManager* GetForwardingInterface() = 0;
  void GetPrimaryAccountInfo(GetPrimaryAccountInfoCallback callback) override;
  void GetPrimaryAccountWhenAvailable(GetPrimaryAccountWhenAvailableCallback callback) override;
  void GetAccountInfoFromGaiaId(const std::string& gaia_id, GetAccountInfoFromGaiaIdCallback callback) override;
  void GetAccounts(GetAccountsCallback callback) override;
  void GetAccessToken(const std::string& account_id, const ::identity::ScopeSet& scopes, const std::string& consumer_id, GetAccessTokenCallback callback) override;
};
class  IdentityManagerAsyncWaiter {
 public:
  explicit IdentityManagerAsyncWaiter(IdentityManager* proxy);
  ~IdentityManagerAsyncWaiter();
  void GetPrimaryAccountInfo(
      base::Optional<::AccountInfo>* out_account_info, identity::AccountState* out_account_state);
  void GetPrimaryAccountWhenAvailable(
      ::AccountInfo* out_account_info, identity::AccountState* out_account_state);
  void GetAccountInfoFromGaiaId(
      const std::string& gaia_id, base::Optional<::AccountInfo>* out_account_info, identity::AccountState* out_account_state);
  void GetAccounts(
      std::vector<::identity::mojom::AccountPtr>* out_accounts);
  void GetAccessToken(
      const std::string& account_id, const ::identity::ScopeSet& scopes, const std::string& consumer_id, base::Optional<std::string>* out_token, base::Time* out_expiration_time, ::GoogleServiceAuthError* out_error);

 private:
  IdentityManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(IdentityManagerAsyncWaiter);
};

class  IdentityManagerProxy
    : public IdentityManager {
 public:
  explicit IdentityManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetPrimaryAccountInfo(GetPrimaryAccountInfoCallback callback) final;
  void GetPrimaryAccountWhenAvailable(GetPrimaryAccountWhenAvailableCallback callback) final;
  void GetAccountInfoFromGaiaId(const std::string& gaia_id, GetAccountInfoFromGaiaIdCallback callback) final;
  void GetAccounts(GetAccountsCallback callback) final;
  void GetAccessToken(const std::string& account_id, const ::identity::ScopeSet& scopes, const std::string& consumer_id, GetAccessTokenCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  IdentityManagerStubDispatch {
 public:
  static bool Accept(IdentityManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      IdentityManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<IdentityManager>>
class IdentityManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  IdentityManagerStub() {}
  ~IdentityManagerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IdentityManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IdentityManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  IdentityManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  IdentityManagerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace identity

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_IDENTITY_PUBLIC_MOJOM_IDENTITY_MANAGER_MOJOM_H_