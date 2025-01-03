// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_IDENTITY_PUBLIC_MOJOM_ACCOUNT_MOJOM_H_
#define SERVICES_IDENTITY_PUBLIC_MOJOM_ACCOUNT_MOJOM_H_

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
#include "services/identity/public/mojom/account.mojom-shared.h"
#include "services/identity/public/mojom/account_info.mojom.h"
#include "services/identity/public/mojom/account_state.mojom.h"
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
class Account;
using AccountPtr = mojo::StructPtr<Account>;






class  Account {
 public:
  using DataView = AccountDataView;
  using Data_ = internal::Account_Data;

  template <typename... Args>
  static AccountPtr New(Args&&... args) {
    return AccountPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static AccountPtr From(const U& u) {
    return mojo::TypeConverter<AccountPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Account>::Convert(*this);
  }


  Account();

  Account(
      const ::AccountInfo& info,
      const identity::AccountState& state);

  ~Account();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AccountPtr>
  AccountPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Account>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Account::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Account::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Account_UnserializedMessageContext<
            UserType, Account::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Account::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Account::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Account_UnserializedMessageContext<
            UserType, Account::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Account::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  ::AccountInfo info;
  identity::AccountState state;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
AccountPtr Account::Clone() const {
  return New(
      mojo::Clone(info),
      mojo::Clone(state)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Account>::value>::type*>
bool Account::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->info, other_struct.info))
    return false;
  if (!mojo::Equals(this->state, other_struct.state))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace identity

namespace mojo {


template <>
struct  StructTraits<::identity::mojom::Account::DataView,
                                         ::identity::mojom::AccountPtr> {
  static bool IsNull(const ::identity::mojom::AccountPtr& input) { return !input; }
  static void SetToNull(::identity::mojom::AccountPtr* output) { output->reset(); }

  static const decltype(::identity::mojom::Account::info)& info(
      const ::identity::mojom::AccountPtr& input) {
    return input->info;
  }

  static const decltype(::identity::mojom::Account::state)& state(
      const ::identity::mojom::AccountPtr& input) {
    return input->state;
  }

  static bool Read(::identity::mojom::Account::DataView input, ::identity::mojom::AccountPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_IDENTITY_PUBLIC_MOJOM_ACCOUNT_MOJOM_H_