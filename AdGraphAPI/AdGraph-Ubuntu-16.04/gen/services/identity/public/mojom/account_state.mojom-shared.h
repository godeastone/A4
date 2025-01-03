// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_IDENTITY_PUBLIC_MOJOM_ACCOUNT_STATE_MOJOM_SHARED_H_
#define SERVICES_IDENTITY_PUBLIC_MOJOM_ACCOUNT_STATE_MOJOM_SHARED_H_

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
#include "services/identity/public/mojom/account_state.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace identity {
namespace mojom {
class AccountStateDataView;



}  // namespace mojom
}  // namespace identity

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::identity::mojom::AccountStateDataView> {
  using Data = ::identity::mojom::internal::AccountState_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace identity {
namespace mojom {
class AccountStateDataView {
 public:
  AccountStateDataView() {}

  AccountStateDataView(
      internal::AccountState_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool has_refresh_token() const {
    return data_->has_refresh_token;
  }
  bool is_primary_account() const {
    return data_->is_primary_account;
  }
 private:
  internal::AccountState_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace identity

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::identity::mojom::AccountStateDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::identity::mojom::AccountStateDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::identity::mojom::internal::AccountState_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->has_refresh_token = CallWithContext(Traits::has_refresh_token, input, custom_context);
    (*output)->is_primary_account = CallWithContext(Traits::is_primary_account, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::identity::mojom::internal::AccountState_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::identity::mojom::AccountStateDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace identity {
namespace mojom {




}  // namespace mojom
}  // namespace identity

#endif  // SERVICES_IDENTITY_PUBLIC_MOJOM_ACCOUNT_STATE_MOJOM_SHARED_H_
