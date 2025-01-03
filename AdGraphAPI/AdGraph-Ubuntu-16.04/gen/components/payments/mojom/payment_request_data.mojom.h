// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_PAYMENTS_MOJOM_PAYMENT_REQUEST_DATA_MOJOM_H_
#define COMPONENTS_PAYMENTS_MOJOM_PAYMENT_REQUEST_DATA_MOJOM_H_

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
#include "components/payments/mojom/payment_request_data.mojom-shared.h"
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


namespace payments {
namespace mojom {
class PaymentAddress;
using PaymentAddressPtr = mojo::StructPtr<PaymentAddress>;

class PaymentCurrencyAmount;
using PaymentCurrencyAmountPtr = mojo::InlinedStructPtr<PaymentCurrencyAmount>;




class  PaymentCurrencyAmount {
 public:
  using DataView = PaymentCurrencyAmountDataView;
  using Data_ = internal::PaymentCurrencyAmount_Data;

  template <typename... Args>
  static PaymentCurrencyAmountPtr New(Args&&... args) {
    return PaymentCurrencyAmountPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PaymentCurrencyAmountPtr From(const U& u) {
    return mojo::TypeConverter<PaymentCurrencyAmountPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PaymentCurrencyAmount>::Convert(*this);
  }


  PaymentCurrencyAmount();

  PaymentCurrencyAmount(
      const std::string& currency,
      const std::string& value);

  ~PaymentCurrencyAmount();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PaymentCurrencyAmountPtr>
  PaymentCurrencyAmountPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PaymentCurrencyAmount>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PaymentCurrencyAmount::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PaymentCurrencyAmount::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PaymentCurrencyAmount_UnserializedMessageContext<
            UserType, PaymentCurrencyAmount::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PaymentCurrencyAmount::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PaymentCurrencyAmount::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PaymentCurrencyAmount_UnserializedMessageContext<
            UserType, PaymentCurrencyAmount::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PaymentCurrencyAmount::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string currency;
  std::string value;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




class  PaymentAddress {
 public:
  using DataView = PaymentAddressDataView;
  using Data_ = internal::PaymentAddress_Data;

  template <typename... Args>
  static PaymentAddressPtr New(Args&&... args) {
    return PaymentAddressPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PaymentAddressPtr From(const U& u) {
    return mojo::TypeConverter<PaymentAddressPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PaymentAddress>::Convert(*this);
  }


  PaymentAddress();

  PaymentAddress(
      const std::string& country,
      const std::vector<std::string>& address_line,
      const std::string& region,
      const std::string& city,
      const std::string& dependent_locality,
      const std::string& postal_code,
      const std::string& sorting_code,
      const std::string& language_code,
      const std::string& script_code,
      const std::string& organization,
      const std::string& recipient,
      const std::string& phone);

  ~PaymentAddress();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PaymentAddressPtr>
  PaymentAddressPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PaymentAddress>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PaymentAddress::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PaymentAddress::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PaymentAddress_UnserializedMessageContext<
            UserType, PaymentAddress::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PaymentAddress::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PaymentAddress::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PaymentAddress_UnserializedMessageContext<
            UserType, PaymentAddress::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PaymentAddress::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string country;
  std::vector<std::string> address_line;
  std::string region;
  std::string city;
  std::string dependent_locality;
  std::string postal_code;
  std::string sorting_code;
  std::string language_code;
  std::string script_code;
  std::string organization;
  std::string recipient;
  std::string phone;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


template <typename StructPtrType>
PaymentAddressPtr PaymentAddress::Clone() const {
  return New(
      mojo::Clone(country),
      mojo::Clone(address_line),
      mojo::Clone(region),
      mojo::Clone(city),
      mojo::Clone(dependent_locality),
      mojo::Clone(postal_code),
      mojo::Clone(sorting_code),
      mojo::Clone(language_code),
      mojo::Clone(script_code),
      mojo::Clone(organization),
      mojo::Clone(recipient),
      mojo::Clone(phone)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PaymentAddress>::value>::type*>
bool PaymentAddress::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->country, other_struct.country))
    return false;
  if (!mojo::Equals(this->address_line, other_struct.address_line))
    return false;
  if (!mojo::Equals(this->region, other_struct.region))
    return false;
  if (!mojo::Equals(this->city, other_struct.city))
    return false;
  if (!mojo::Equals(this->dependent_locality, other_struct.dependent_locality))
    return false;
  if (!mojo::Equals(this->postal_code, other_struct.postal_code))
    return false;
  if (!mojo::Equals(this->sorting_code, other_struct.sorting_code))
    return false;
  if (!mojo::Equals(this->language_code, other_struct.language_code))
    return false;
  if (!mojo::Equals(this->script_code, other_struct.script_code))
    return false;
  if (!mojo::Equals(this->organization, other_struct.organization))
    return false;
  if (!mojo::Equals(this->recipient, other_struct.recipient))
    return false;
  if (!mojo::Equals(this->phone, other_struct.phone))
    return false;
  return true;
}
template <typename StructPtrType>
PaymentCurrencyAmountPtr PaymentCurrencyAmount::Clone() const {
  return New(
      mojo::Clone(currency),
      mojo::Clone(value)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PaymentCurrencyAmount>::value>::type*>
bool PaymentCurrencyAmount::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->currency, other_struct.currency))
    return false;
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace payments

namespace mojo {


template <>
struct  StructTraits<::payments::mojom::PaymentAddress::DataView,
                                         ::payments::mojom::PaymentAddressPtr> {
  static bool IsNull(const ::payments::mojom::PaymentAddressPtr& input) { return !input; }
  static void SetToNull(::payments::mojom::PaymentAddressPtr* output) { output->reset(); }

  static const decltype(::payments::mojom::PaymentAddress::country)& country(
      const ::payments::mojom::PaymentAddressPtr& input) {
    return input->country;
  }

  static const decltype(::payments::mojom::PaymentAddress::address_line)& address_line(
      const ::payments::mojom::PaymentAddressPtr& input) {
    return input->address_line;
  }

  static const decltype(::payments::mojom::PaymentAddress::region)& region(
      const ::payments::mojom::PaymentAddressPtr& input) {
    return input->region;
  }

  static const decltype(::payments::mojom::PaymentAddress::city)& city(
      const ::payments::mojom::PaymentAddressPtr& input) {
    return input->city;
  }

  static const decltype(::payments::mojom::PaymentAddress::dependent_locality)& dependent_locality(
      const ::payments::mojom::PaymentAddressPtr& input) {
    return input->dependent_locality;
  }

  static const decltype(::payments::mojom::PaymentAddress::postal_code)& postal_code(
      const ::payments::mojom::PaymentAddressPtr& input) {
    return input->postal_code;
  }

  static const decltype(::payments::mojom::PaymentAddress::sorting_code)& sorting_code(
      const ::payments::mojom::PaymentAddressPtr& input) {
    return input->sorting_code;
  }

  static const decltype(::payments::mojom::PaymentAddress::language_code)& language_code(
      const ::payments::mojom::PaymentAddressPtr& input) {
    return input->language_code;
  }

  static const decltype(::payments::mojom::PaymentAddress::script_code)& script_code(
      const ::payments::mojom::PaymentAddressPtr& input) {
    return input->script_code;
  }

  static const decltype(::payments::mojom::PaymentAddress::organization)& organization(
      const ::payments::mojom::PaymentAddressPtr& input) {
    return input->organization;
  }

  static const decltype(::payments::mojom::PaymentAddress::recipient)& recipient(
      const ::payments::mojom::PaymentAddressPtr& input) {
    return input->recipient;
  }

  static const decltype(::payments::mojom::PaymentAddress::phone)& phone(
      const ::payments::mojom::PaymentAddressPtr& input) {
    return input->phone;
  }

  static bool Read(::payments::mojom::PaymentAddress::DataView input, ::payments::mojom::PaymentAddressPtr* output);
};


template <>
struct  StructTraits<::payments::mojom::PaymentCurrencyAmount::DataView,
                                         ::payments::mojom::PaymentCurrencyAmountPtr> {
  static bool IsNull(const ::payments::mojom::PaymentCurrencyAmountPtr& input) { return !input; }
  static void SetToNull(::payments::mojom::PaymentCurrencyAmountPtr* output) { output->reset(); }

  static const decltype(::payments::mojom::PaymentCurrencyAmount::currency)& currency(
      const ::payments::mojom::PaymentCurrencyAmountPtr& input) {
    return input->currency;
  }

  static const decltype(::payments::mojom::PaymentCurrencyAmount::value)& value(
      const ::payments::mojom::PaymentCurrencyAmountPtr& input) {
    return input->value;
  }

  static bool Read(::payments::mojom::PaymentCurrencyAmount::DataView input, ::payments::mojom::PaymentCurrencyAmountPtr* output);
};

}  // namespace mojo

#endif  // COMPONENTS_PAYMENTS_MOJOM_PAYMENT_REQUEST_DATA_MOJOM_H_