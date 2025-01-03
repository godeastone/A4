// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "components/payments/mojom/payment_request_data.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/logging.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "components/payments/mojom/payment_request_data.mojom-shared-message-ids.h"
namespace payments {
namespace mojom {
PaymentAddress::PaymentAddress()
    : country(),
      address_line(),
      region(),
      city(),
      dependent_locality(),
      postal_code(),
      sorting_code(),
      language_code(),
      script_code(),
      organization(),
      recipient(),
      phone() {}

PaymentAddress::PaymentAddress(
    const std::string& country_in,
    const std::vector<std::string>& address_line_in,
    const std::string& region_in,
    const std::string& city_in,
    const std::string& dependent_locality_in,
    const std::string& postal_code_in,
    const std::string& sorting_code_in,
    const std::string& language_code_in,
    const std::string& script_code_in,
    const std::string& organization_in,
    const std::string& recipient_in,
    const std::string& phone_in)
    : country(std::move(country_in)),
      address_line(std::move(address_line_in)),
      region(std::move(region_in)),
      city(std::move(city_in)),
      dependent_locality(std::move(dependent_locality_in)),
      postal_code(std::move(postal_code_in)),
      sorting_code(std::move(sorting_code_in)),
      language_code(std::move(language_code_in)),
      script_code(std::move(script_code_in)),
      organization(std::move(organization_in)),
      recipient(std::move(recipient_in)),
      phone(std::move(phone_in)) {}

PaymentAddress::~PaymentAddress() = default;

bool PaymentAddress::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PaymentCurrencyAmount::PaymentCurrencyAmount()
    : currency(),
      value() {}

PaymentCurrencyAmount::PaymentCurrencyAmount(
    const std::string& currency_in,
    const std::string& value_in)
    : currency(std::move(currency_in)),
      value(std::move(value_in)) {}

PaymentCurrencyAmount::~PaymentCurrencyAmount() = default;
size_t PaymentCurrencyAmount::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->currency);
  seed = mojo::internal::Hash(seed, this->value);
  return seed;
}

bool PaymentCurrencyAmount::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace payments

namespace mojo {


// static
bool StructTraits<::payments::mojom::PaymentAddress::DataView, ::payments::mojom::PaymentAddressPtr>::Read(
    ::payments::mojom::PaymentAddress::DataView input,
    ::payments::mojom::PaymentAddressPtr* output) {
  bool success = true;
  ::payments::mojom::PaymentAddressPtr result(::payments::mojom::PaymentAddress::New());
  
      if (!input.ReadCountry(&result->country))
        success = false;
      if (!input.ReadAddressLine(&result->address_line))
        success = false;
      if (!input.ReadRegion(&result->region))
        success = false;
      if (!input.ReadCity(&result->city))
        success = false;
      if (!input.ReadDependentLocality(&result->dependent_locality))
        success = false;
      if (!input.ReadPostalCode(&result->postal_code))
        success = false;
      if (!input.ReadSortingCode(&result->sorting_code))
        success = false;
      if (!input.ReadLanguageCode(&result->language_code))
        success = false;
      if (!input.ReadScriptCode(&result->script_code))
        success = false;
      if (!input.ReadOrganization(&result->organization))
        success = false;
      if (!input.ReadRecipient(&result->recipient))
        success = false;
      if (!input.ReadPhone(&result->phone))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::payments::mojom::PaymentCurrencyAmount::DataView, ::payments::mojom::PaymentCurrencyAmountPtr>::Read(
    ::payments::mojom::PaymentCurrencyAmount::DataView input,
    ::payments::mojom::PaymentCurrencyAmountPtr* output) {
  bool success = true;
  ::payments::mojom::PaymentCurrencyAmountPtr result(::payments::mojom::PaymentCurrencyAmount::New());
  
      if (!input.ReadCurrency(&result->currency))
        success = false;
      if (!input.ReadValue(&result->value))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif