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

#include "components/payments/mojom/payment_request_data.mojom-blink.h"

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
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
namespace payments {
namespace mojom {
namespace blink {
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
    const WTF::String& country_in,
    const WTF::Vector<WTF::String>& address_line_in,
    const WTF::String& region_in,
    const WTF::String& city_in,
    const WTF::String& dependent_locality_in,
    const WTF::String& postal_code_in,
    const WTF::String& sorting_code_in,
    const WTF::String& language_code_in,
    const WTF::String& script_code_in,
    const WTF::String& organization_in,
    const WTF::String& recipient_in,
    const WTF::String& phone_in)
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
    const WTF::String& currency_in,
    const WTF::String& value_in)
    : currency(std::move(currency_in)),
      value(std::move(value_in)) {}

PaymentCurrencyAmount::~PaymentCurrencyAmount() = default;
size_t PaymentCurrencyAmount::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->currency);
  seed = mojo::internal::WTFHash(seed, this->value);
  return seed;
}

bool PaymentCurrencyAmount::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace payments

namespace mojo {


// static
bool StructTraits<::payments::mojom::blink::PaymentAddress::DataView, ::payments::mojom::blink::PaymentAddressPtr>::Read(
    ::payments::mojom::blink::PaymentAddress::DataView input,
    ::payments::mojom::blink::PaymentAddressPtr* output) {
  bool success = true;
  ::payments::mojom::blink::PaymentAddressPtr result(::payments::mojom::blink::PaymentAddress::New());
  
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
bool StructTraits<::payments::mojom::blink::PaymentCurrencyAmount::DataView, ::payments::mojom::blink::PaymentCurrencyAmountPtr>::Read(
    ::payments::mojom::blink::PaymentCurrencyAmount::DataView input,
    ::payments::mojom::blink::PaymentCurrencyAmountPtr* output) {
  bool success = true;
  ::payments::mojom::blink::PaymentCurrencyAmountPtr result(::payments::mojom::blink::PaymentCurrencyAmount::New());
  
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