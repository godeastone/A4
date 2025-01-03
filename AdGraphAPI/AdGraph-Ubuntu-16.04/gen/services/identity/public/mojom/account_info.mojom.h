// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_IDENTITY_PUBLIC_MOJOM_ACCOUNT_INFO_MOJOM_H_
#define SERVICES_IDENTITY_PUBLIC_MOJOM_ACCOUNT_INFO_MOJOM_H_

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
#include "services/identity/public/mojom/account_info.mojom-shared.h"
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
#include "components/signin/core/browser/account_info.h"


namespace identity {
namespace mojom {
class AccountInfo;
using AccountInfoPtr = mojo::StructPtr<AccountInfo>;






class  AccountInfo {
 public:
  using DataView = AccountInfoDataView;
  using Data_ = internal::AccountInfo_Data;

  template <typename... Args>
  static AccountInfoPtr New(Args&&... args) {
    return AccountInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static AccountInfoPtr From(const U& u) {
    return mojo::TypeConverter<AccountInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AccountInfo>::Convert(*this);
  }


  AccountInfo();

  AccountInfo(
      const std::string& account_id,
      const std::string& gaia,
      const std::string& email,
      const std::string& full_name,
      const std::string& given_name,
      const std::string& hosted_domain,
      const std::string& locale,
      const std::string& picture_url,
      bool is_child_account);

  ~AccountInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AccountInfoPtr>
  AccountInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AccountInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        AccountInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        AccountInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::AccountInfo_UnserializedMessageContext<
            UserType, AccountInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<AccountInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return AccountInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::AccountInfo_UnserializedMessageContext<
            UserType, AccountInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<AccountInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string account_id;
  std::string gaia;
  std::string email;
  std::string full_name;
  std::string given_name;
  std::string hosted_domain;
  std::string locale;
  std::string picture_url;
  bool is_child_account;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
AccountInfoPtr AccountInfo::Clone() const {
  return New(
      mojo::Clone(account_id),
      mojo::Clone(gaia),
      mojo::Clone(email),
      mojo::Clone(full_name),
      mojo::Clone(given_name),
      mojo::Clone(hosted_domain),
      mojo::Clone(locale),
      mojo::Clone(picture_url),
      mojo::Clone(is_child_account)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AccountInfo>::value>::type*>
bool AccountInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->account_id, other_struct.account_id))
    return false;
  if (!mojo::Equals(this->gaia, other_struct.gaia))
    return false;
  if (!mojo::Equals(this->email, other_struct.email))
    return false;
  if (!mojo::Equals(this->full_name, other_struct.full_name))
    return false;
  if (!mojo::Equals(this->given_name, other_struct.given_name))
    return false;
  if (!mojo::Equals(this->hosted_domain, other_struct.hosted_domain))
    return false;
  if (!mojo::Equals(this->locale, other_struct.locale))
    return false;
  if (!mojo::Equals(this->picture_url, other_struct.picture_url))
    return false;
  if (!mojo::Equals(this->is_child_account, other_struct.is_child_account))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace identity

namespace mojo {


template <>
struct  StructTraits<::identity::mojom::AccountInfo::DataView,
                                         ::identity::mojom::AccountInfoPtr> {
  static bool IsNull(const ::identity::mojom::AccountInfoPtr& input) { return !input; }
  static void SetToNull(::identity::mojom::AccountInfoPtr* output) { output->reset(); }

  static const decltype(::identity::mojom::AccountInfo::account_id)& account_id(
      const ::identity::mojom::AccountInfoPtr& input) {
    return input->account_id;
  }

  static const decltype(::identity::mojom::AccountInfo::gaia)& gaia(
      const ::identity::mojom::AccountInfoPtr& input) {
    return input->gaia;
  }

  static const decltype(::identity::mojom::AccountInfo::email)& email(
      const ::identity::mojom::AccountInfoPtr& input) {
    return input->email;
  }

  static const decltype(::identity::mojom::AccountInfo::full_name)& full_name(
      const ::identity::mojom::AccountInfoPtr& input) {
    return input->full_name;
  }

  static const decltype(::identity::mojom::AccountInfo::given_name)& given_name(
      const ::identity::mojom::AccountInfoPtr& input) {
    return input->given_name;
  }

  static const decltype(::identity::mojom::AccountInfo::hosted_domain)& hosted_domain(
      const ::identity::mojom::AccountInfoPtr& input) {
    return input->hosted_domain;
  }

  static const decltype(::identity::mojom::AccountInfo::locale)& locale(
      const ::identity::mojom::AccountInfoPtr& input) {
    return input->locale;
  }

  static const decltype(::identity::mojom::AccountInfo::picture_url)& picture_url(
      const ::identity::mojom::AccountInfoPtr& input) {
    return input->picture_url;
  }

  static decltype(::identity::mojom::AccountInfo::is_child_account) is_child_account(
      const ::identity::mojom::AccountInfoPtr& input) {
    return input->is_child_account;
  }

  static bool Read(::identity::mojom::AccountInfo::DataView input, ::identity::mojom::AccountInfoPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_IDENTITY_PUBLIC_MOJOM_ACCOUNT_INFO_MOJOM_H_