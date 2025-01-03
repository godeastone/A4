// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_IDENTITY_PUBLIC_MOJOM_ACCOUNT_MOJOM_SHARED_H_
#define SERVICES_IDENTITY_PUBLIC_MOJOM_ACCOUNT_MOJOM_SHARED_H_

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
#include "services/identity/public/mojom/account.mojom-shared-internal.h"
#include "services/identity/public/mojom/account_info.mojom-shared.h"
#include "services/identity/public/mojom/account_state.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace identity {
namespace mojom {
class AccountDataView;



}  // namespace mojom
}  // namespace identity

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::identity::mojom::AccountDataView> {
  using Data = ::identity::mojom::internal::Account_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace identity {
namespace mojom {
class AccountDataView {
 public:
  AccountDataView() {}

  AccountDataView(
      internal::Account_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInfoDataView(
      ::identity::mojom::AccountInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInfo(UserType* output) {
    auto* pointer = data_->info.Get();
    return mojo::internal::Deserialize<::identity::mojom::AccountInfoDataView>(
        pointer, output, context_);
  }
  inline void GetStateDataView(
      ::identity::mojom::AccountStateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) {
    auto* pointer = data_->state.Get();
    return mojo::internal::Deserialize<::identity::mojom::AccountStateDataView>(
        pointer, output, context_);
  }
 private:
  internal::Account_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace identity

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::identity::mojom::AccountDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::identity::mojom::AccountDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::identity::mojom::internal::Account_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::info, input, custom_context)) in_info = CallWithContext(Traits::info, input, custom_context);
    typename decltype((*output)->info)::BaseType::BufferWriter
        info_writer;
    mojo::internal::Serialize<::identity::mojom::AccountInfoDataView>(
        in_info, buffer, &info_writer, context);
    (*output)->info.Set(
        info_writer.is_null() ? nullptr : info_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->info.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null info in Account struct");
    decltype(CallWithContext(Traits::state, input, custom_context)) in_state = CallWithContext(Traits::state, input, custom_context);
    typename decltype((*output)->state)::BaseType::BufferWriter
        state_writer;
    mojo::internal::Serialize<::identity::mojom::AccountStateDataView>(
        in_state, buffer, &state_writer, context);
    (*output)->state.Set(
        state_writer.is_null() ? nullptr : state_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->state.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null state in Account struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::identity::mojom::internal::Account_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::identity::mojom::AccountDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace identity {
namespace mojom {

inline void AccountDataView::GetInfoDataView(
    ::identity::mojom::AccountInfoDataView* output) {
  auto pointer = data_->info.Get();
  *output = ::identity::mojom::AccountInfoDataView(pointer, context_);
}
inline void AccountDataView::GetStateDataView(
    ::identity::mojom::AccountStateDataView* output) {
  auto pointer = data_->state.Get();
  *output = ::identity::mojom::AccountStateDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace identity

#endif  // SERVICES_IDENTITY_PUBLIC_MOJOM_ACCOUNT_MOJOM_SHARED_H_
