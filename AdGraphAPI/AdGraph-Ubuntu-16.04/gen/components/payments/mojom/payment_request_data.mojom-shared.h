// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_PAYMENTS_MOJOM_PAYMENT_REQUEST_DATA_MOJOM_SHARED_H_
#define COMPONENTS_PAYMENTS_MOJOM_PAYMENT_REQUEST_DATA_MOJOM_SHARED_H_

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
#include "components/payments/mojom/payment_request_data.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace payments {
namespace mojom {
class PaymentAddressDataView;

class PaymentCurrencyAmountDataView;



}  // namespace mojom
}  // namespace payments

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::payments::mojom::PaymentAddressDataView> {
  using Data = ::payments::mojom::internal::PaymentAddress_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::payments::mojom::PaymentCurrencyAmountDataView> {
  using Data = ::payments::mojom::internal::PaymentCurrencyAmount_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace payments {
namespace mojom {
class PaymentAddressDataView {
 public:
  PaymentAddressDataView() {}

  PaymentAddressDataView(
      internal::PaymentAddress_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCountryDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCountry(UserType* output) {
    auto* pointer = data_->country.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetAddressLineDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAddressLine(UserType* output) {
    auto* pointer = data_->address_line.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetRegionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRegion(UserType* output) {
    auto* pointer = data_->region.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetCityDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCity(UserType* output) {
    auto* pointer = data_->city.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDependentLocalityDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDependentLocality(UserType* output) {
    auto* pointer = data_->dependent_locality.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetPostalCodeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPostalCode(UserType* output) {
    auto* pointer = data_->postal_code.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSortingCodeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSortingCode(UserType* output) {
    auto* pointer = data_->sorting_code.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetLanguageCodeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLanguageCode(UserType* output) {
    auto* pointer = data_->language_code.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetScriptCodeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScriptCode(UserType* output) {
    auto* pointer = data_->script_code.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetOrganizationDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrganization(UserType* output) {
    auto* pointer = data_->organization.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetRecipientDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRecipient(UserType* output) {
    auto* pointer = data_->recipient.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetPhoneDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPhone(UserType* output) {
    auto* pointer = data_->phone.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PaymentAddress_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentCurrencyAmountDataView {
 public:
  PaymentCurrencyAmountDataView() {}

  PaymentCurrencyAmountDataView(
      internal::PaymentCurrencyAmount_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCurrencyDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCurrency(UserType* output) {
    auto* pointer = data_->currency.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PaymentCurrencyAmount_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace payments

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::payments::mojom::PaymentAddressDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::payments::mojom::PaymentAddressDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::payments::mojom::internal::PaymentAddress_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::country, input, custom_context)) in_country = CallWithContext(Traits::country, input, custom_context);
    typename decltype((*output)->country)::BaseType::BufferWriter
        country_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_country, buffer, &country_writer, context);
    (*output)->country.Set(
        country_writer.is_null() ? nullptr : country_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->country.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null country in PaymentAddress struct");
    decltype(CallWithContext(Traits::address_line, input, custom_context)) in_address_line = CallWithContext(Traits::address_line, input, custom_context);
    typename decltype((*output)->address_line)::BaseType::BufferWriter
        address_line_writer;
    const mojo::internal::ContainerValidateParams address_line_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_address_line, buffer, &address_line_writer, &address_line_validate_params,
        context);
    (*output)->address_line.Set(
        address_line_writer.is_null() ? nullptr : address_line_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->address_line.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null address_line in PaymentAddress struct");
    decltype(CallWithContext(Traits::region, input, custom_context)) in_region = CallWithContext(Traits::region, input, custom_context);
    typename decltype((*output)->region)::BaseType::BufferWriter
        region_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_region, buffer, &region_writer, context);
    (*output)->region.Set(
        region_writer.is_null() ? nullptr : region_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->region.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null region in PaymentAddress struct");
    decltype(CallWithContext(Traits::city, input, custom_context)) in_city = CallWithContext(Traits::city, input, custom_context);
    typename decltype((*output)->city)::BaseType::BufferWriter
        city_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_city, buffer, &city_writer, context);
    (*output)->city.Set(
        city_writer.is_null() ? nullptr : city_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->city.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null city in PaymentAddress struct");
    decltype(CallWithContext(Traits::dependent_locality, input, custom_context)) in_dependent_locality = CallWithContext(Traits::dependent_locality, input, custom_context);
    typename decltype((*output)->dependent_locality)::BaseType::BufferWriter
        dependent_locality_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_dependent_locality, buffer, &dependent_locality_writer, context);
    (*output)->dependent_locality.Set(
        dependent_locality_writer.is_null() ? nullptr : dependent_locality_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->dependent_locality.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null dependent_locality in PaymentAddress struct");
    decltype(CallWithContext(Traits::postal_code, input, custom_context)) in_postal_code = CallWithContext(Traits::postal_code, input, custom_context);
    typename decltype((*output)->postal_code)::BaseType::BufferWriter
        postal_code_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_postal_code, buffer, &postal_code_writer, context);
    (*output)->postal_code.Set(
        postal_code_writer.is_null() ? nullptr : postal_code_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->postal_code.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null postal_code in PaymentAddress struct");
    decltype(CallWithContext(Traits::sorting_code, input, custom_context)) in_sorting_code = CallWithContext(Traits::sorting_code, input, custom_context);
    typename decltype((*output)->sorting_code)::BaseType::BufferWriter
        sorting_code_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_sorting_code, buffer, &sorting_code_writer, context);
    (*output)->sorting_code.Set(
        sorting_code_writer.is_null() ? nullptr : sorting_code_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->sorting_code.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null sorting_code in PaymentAddress struct");
    decltype(CallWithContext(Traits::language_code, input, custom_context)) in_language_code = CallWithContext(Traits::language_code, input, custom_context);
    typename decltype((*output)->language_code)::BaseType::BufferWriter
        language_code_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_language_code, buffer, &language_code_writer, context);
    (*output)->language_code.Set(
        language_code_writer.is_null() ? nullptr : language_code_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->language_code.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null language_code in PaymentAddress struct");
    decltype(CallWithContext(Traits::script_code, input, custom_context)) in_script_code = CallWithContext(Traits::script_code, input, custom_context);
    typename decltype((*output)->script_code)::BaseType::BufferWriter
        script_code_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_script_code, buffer, &script_code_writer, context);
    (*output)->script_code.Set(
        script_code_writer.is_null() ? nullptr : script_code_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->script_code.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null script_code in PaymentAddress struct");
    decltype(CallWithContext(Traits::organization, input, custom_context)) in_organization = CallWithContext(Traits::organization, input, custom_context);
    typename decltype((*output)->organization)::BaseType::BufferWriter
        organization_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_organization, buffer, &organization_writer, context);
    (*output)->organization.Set(
        organization_writer.is_null() ? nullptr : organization_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->organization.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null organization in PaymentAddress struct");
    decltype(CallWithContext(Traits::recipient, input, custom_context)) in_recipient = CallWithContext(Traits::recipient, input, custom_context);
    typename decltype((*output)->recipient)::BaseType::BufferWriter
        recipient_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_recipient, buffer, &recipient_writer, context);
    (*output)->recipient.Set(
        recipient_writer.is_null() ? nullptr : recipient_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->recipient.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null recipient in PaymentAddress struct");
    decltype(CallWithContext(Traits::phone, input, custom_context)) in_phone = CallWithContext(Traits::phone, input, custom_context);
    typename decltype((*output)->phone)::BaseType::BufferWriter
        phone_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_phone, buffer, &phone_writer, context);
    (*output)->phone.Set(
        phone_writer.is_null() ? nullptr : phone_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->phone.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null phone in PaymentAddress struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::payments::mojom::internal::PaymentAddress_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::payments::mojom::PaymentAddressDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::payments::mojom::PaymentCurrencyAmountDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::payments::mojom::PaymentCurrencyAmountDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::payments::mojom::internal::PaymentCurrencyAmount_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::currency, input, custom_context)) in_currency = CallWithContext(Traits::currency, input, custom_context);
    typename decltype((*output)->currency)::BaseType::BufferWriter
        currency_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_currency, buffer, &currency_writer, context);
    (*output)->currency.Set(
        currency_writer.is_null() ? nullptr : currency_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->currency.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null currency in PaymentCurrencyAmount struct");
    decltype(CallWithContext(Traits::value, input, custom_context)) in_value = CallWithContext(Traits::value, input, custom_context);
    typename decltype((*output)->value)::BaseType::BufferWriter
        value_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_value, buffer, &value_writer, context);
    (*output)->value.Set(
        value_writer.is_null() ? nullptr : value_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->value.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null value in PaymentCurrencyAmount struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::payments::mojom::internal::PaymentCurrencyAmount_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::payments::mojom::PaymentCurrencyAmountDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace payments {
namespace mojom {

inline void PaymentAddressDataView::GetCountryDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->country.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentAddressDataView::GetAddressLineDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->address_line.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void PaymentAddressDataView::GetRegionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->region.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentAddressDataView::GetCityDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->city.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentAddressDataView::GetDependentLocalityDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->dependent_locality.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentAddressDataView::GetPostalCodeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->postal_code.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentAddressDataView::GetSortingCodeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->sorting_code.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentAddressDataView::GetLanguageCodeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->language_code.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentAddressDataView::GetScriptCodeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->script_code.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentAddressDataView::GetOrganizationDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->organization.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentAddressDataView::GetRecipientDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->recipient.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentAddressDataView::GetPhoneDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->phone.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PaymentCurrencyAmountDataView::GetCurrencyDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->currency.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentCurrencyAmountDataView::GetValueDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->value.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace payments

#endif  // COMPONENTS_PAYMENTS_MOJOM_PAYMENT_REQUEST_DATA_MOJOM_SHARED_H_
