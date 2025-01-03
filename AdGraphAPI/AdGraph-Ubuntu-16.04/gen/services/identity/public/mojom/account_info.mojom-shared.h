// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_IDENTITY_PUBLIC_MOJOM_ACCOUNT_INFO_MOJOM_SHARED_H_
#define SERVICES_IDENTITY_PUBLIC_MOJOM_ACCOUNT_INFO_MOJOM_SHARED_H_

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
#include "services/identity/public/mojom/account_info.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace identity {
namespace mojom {
class AccountInfoDataView;



}  // namespace mojom
}  // namespace identity

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::identity::mojom::AccountInfoDataView> {
  using Data = ::identity::mojom::internal::AccountInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace identity {
namespace mojom {
class AccountInfoDataView {
 public:
  AccountInfoDataView() {}

  AccountInfoDataView(
      internal::AccountInfo_Data* data,
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
  inline void GetGaiaDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGaia(UserType* output) {
    auto* pointer = data_->gaia.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetEmailDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEmail(UserType* output) {
    auto* pointer = data_->email.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetFullNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFullName(UserType* output) {
    auto* pointer = data_->full_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetGivenNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGivenName(UserType* output) {
    auto* pointer = data_->given_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetHostedDomainDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHostedDomain(UserType* output) {
    auto* pointer = data_->hosted_domain.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetLocaleDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocale(UserType* output) {
    auto* pointer = data_->locale.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetPictureUrlDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPictureUrl(UserType* output) {
    auto* pointer = data_->picture_url.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool is_child_account() const {
    return data_->is_child_account;
  }
 private:
  internal::AccountInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace identity

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::identity::mojom::AccountInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::identity::mojom::AccountInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::identity::mojom::internal::AccountInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::account_id, input, custom_context)) in_account_id = CallWithContext(Traits::account_id, input, custom_context);
    typename decltype((*output)->account_id)::BaseType::BufferWriter
        account_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_account_id, buffer, &account_id_writer, context);
    (*output)->account_id.Set(
        account_id_writer.is_null() ? nullptr : account_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->account_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null account_id in AccountInfo struct");
    decltype(CallWithContext(Traits::gaia, input, custom_context)) in_gaia = CallWithContext(Traits::gaia, input, custom_context);
    typename decltype((*output)->gaia)::BaseType::BufferWriter
        gaia_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_gaia, buffer, &gaia_writer, context);
    (*output)->gaia.Set(
        gaia_writer.is_null() ? nullptr : gaia_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->gaia.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null gaia in AccountInfo struct");
    decltype(CallWithContext(Traits::email, input, custom_context)) in_email = CallWithContext(Traits::email, input, custom_context);
    typename decltype((*output)->email)::BaseType::BufferWriter
        email_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_email, buffer, &email_writer, context);
    (*output)->email.Set(
        email_writer.is_null() ? nullptr : email_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->email.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null email in AccountInfo struct");
    decltype(CallWithContext(Traits::full_name, input, custom_context)) in_full_name = CallWithContext(Traits::full_name, input, custom_context);
    typename decltype((*output)->full_name)::BaseType::BufferWriter
        full_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_full_name, buffer, &full_name_writer, context);
    (*output)->full_name.Set(
        full_name_writer.is_null() ? nullptr : full_name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->full_name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null full_name in AccountInfo struct");
    decltype(CallWithContext(Traits::given_name, input, custom_context)) in_given_name = CallWithContext(Traits::given_name, input, custom_context);
    typename decltype((*output)->given_name)::BaseType::BufferWriter
        given_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_given_name, buffer, &given_name_writer, context);
    (*output)->given_name.Set(
        given_name_writer.is_null() ? nullptr : given_name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->given_name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null given_name in AccountInfo struct");
    decltype(CallWithContext(Traits::hosted_domain, input, custom_context)) in_hosted_domain = CallWithContext(Traits::hosted_domain, input, custom_context);
    typename decltype((*output)->hosted_domain)::BaseType::BufferWriter
        hosted_domain_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_hosted_domain, buffer, &hosted_domain_writer, context);
    (*output)->hosted_domain.Set(
        hosted_domain_writer.is_null() ? nullptr : hosted_domain_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->hosted_domain.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null hosted_domain in AccountInfo struct");
    decltype(CallWithContext(Traits::locale, input, custom_context)) in_locale = CallWithContext(Traits::locale, input, custom_context);
    typename decltype((*output)->locale)::BaseType::BufferWriter
        locale_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_locale, buffer, &locale_writer, context);
    (*output)->locale.Set(
        locale_writer.is_null() ? nullptr : locale_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->locale.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null locale in AccountInfo struct");
    decltype(CallWithContext(Traits::picture_url, input, custom_context)) in_picture_url = CallWithContext(Traits::picture_url, input, custom_context);
    typename decltype((*output)->picture_url)::BaseType::BufferWriter
        picture_url_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_picture_url, buffer, &picture_url_writer, context);
    (*output)->picture_url.Set(
        picture_url_writer.is_null() ? nullptr : picture_url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->picture_url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null picture_url in AccountInfo struct");
    (*output)->is_child_account = CallWithContext(Traits::is_child_account, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::identity::mojom::internal::AccountInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::identity::mojom::AccountInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace identity {
namespace mojom {

inline void AccountInfoDataView::GetAccountIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->account_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AccountInfoDataView::GetGaiaDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->gaia.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AccountInfoDataView::GetEmailDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->email.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AccountInfoDataView::GetFullNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->full_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AccountInfoDataView::GetGivenNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->given_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AccountInfoDataView::GetHostedDomainDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->hosted_domain.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AccountInfoDataView::GetLocaleDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->locale.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AccountInfoDataView::GetPictureUrlDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->picture_url.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace identity

#endif  // SERVICES_IDENTITY_PUBLIC_MOJOM_ACCOUNT_INFO_MOJOM_SHARED_H_
