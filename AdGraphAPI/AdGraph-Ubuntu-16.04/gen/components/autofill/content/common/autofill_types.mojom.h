// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_AUTOFILL_CONTENT_COMMON_AUTOFILL_TYPES_MOJOM_H_
#define COMPONENTS_AUTOFILL_CONTENT_COMMON_AUTOFILL_TYPES_MOJOM_H_

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
#include "components/autofill/content/common/autofill_types.mojom-shared.h"
#include "mojo/public/mojom/base/text_direction.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "url/mojom/origin.mojom.h"
#include "url/mojom/url.mojom.h"
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
#include "components/autofill/core/common/form_data.h"
#include "components/autofill/core/common/form_data_predictions.h"
#include "components/autofill/core/common/form_field_data.h"
#include "components/autofill/core/common/form_field_data_predictions.h"
#include "components/autofill/core/common/password_form.h"
#include "components/autofill/core/common/password_form_field_prediction_map.h"
#include "components/autofill/core/common/password_form_fill_data.h"
#include "components/autofill/core/common/password_form_generation_data.h"
#include "components/autofill/core/common/submission_source.h"


namespace autofill {
namespace mojom {
class FormFieldData;
using FormFieldDataPtr = mojo::StructPtr<FormFieldData>;

class FormData;
using FormDataPtr = mojo::StructPtr<FormData>;

class FormFieldDataPredictions;
using FormFieldDataPredictionsPtr = mojo::StructPtr<FormFieldDataPredictions>;

class FormDataPredictions;
using FormDataPredictionsPtr = mojo::StructPtr<FormDataPredictions>;

class PasswordAndRealm;
using PasswordAndRealmPtr = mojo::StructPtr<PasswordAndRealm>;

class PasswordFormFillData;
using PasswordFormFillDataPtr = mojo::StructPtr<PasswordFormFillData>;

class PasswordFormGenerationData;
using PasswordFormGenerationDataPtr = mojo::InlinedStructPtr<PasswordFormGenerationData>;

class ValueElementPair;
using ValueElementPairPtr = mojo::StructPtr<ValueElementPair>;

class PasswordForm;
using PasswordFormPtr = mojo::StructPtr<PasswordForm>;

class PasswordFormFieldPredictionMap;
using PasswordFormFieldPredictionMapPtr = mojo::StructPtr<PasswordFormFieldPredictionMap>;

class FormsPredictionsMap;
using FormsPredictionsMapPtr = mojo::StructPtr<FormsPredictionsMap>;









class  PasswordFormGenerationData {
 public:
  using DataView = PasswordFormGenerationDataDataView;
  using Data_ = internal::PasswordFormGenerationData_Data;

  template <typename... Args>
  static PasswordFormGenerationDataPtr New(Args&&... args) {
    return PasswordFormGenerationDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PasswordFormGenerationDataPtr From(const U& u) {
    return mojo::TypeConverter<PasswordFormGenerationDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PasswordFormGenerationData>::Convert(*this);
  }


  PasswordFormGenerationData();

  PasswordFormGenerationData(
      uint64_t form_signature,
      uint32_t field_signature,
      bool has_confirmation_field,
      uint32_t confirmation_field_signature);

  ~PasswordFormGenerationData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PasswordFormGenerationDataPtr>
  PasswordFormGenerationDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PasswordFormGenerationData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PasswordFormGenerationData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PasswordFormGenerationData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PasswordFormGenerationData_UnserializedMessageContext<
            UserType, PasswordFormGenerationData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PasswordFormGenerationData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PasswordFormGenerationData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PasswordFormGenerationData_UnserializedMessageContext<
            UserType, PasswordFormGenerationData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PasswordFormGenerationData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  uint64_t form_signature;
  uint32_t field_signature;
  bool has_confirmation_field;
  uint32_t confirmation_field_signature;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};








class  FormFieldData {
 public:
  using DataView = FormFieldDataDataView;
  using Data_ = internal::FormFieldData_Data;

  template <typename... Args>
  static FormFieldDataPtr New(Args&&... args) {
    return FormFieldDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FormFieldDataPtr From(const U& u) {
    return mojo::TypeConverter<FormFieldDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FormFieldData>::Convert(*this);
  }


  FormFieldData();

  FormFieldData(
      const base::string16& label,
      const base::string16& name,
      const base::string16& id,
      const base::string16& value,
      const std::string& form_control_type,
      const std::string& autocomplete_attribute,
      const base::string16& placeholder,
      const base::string16& css_classes,
      uint32_t unique_renderer_id,
      uint32_t properties_mask,
      uint64_t max_length,
      bool is_autofilled,
      const std::string& section,
      autofill::FormFieldData::CheckStatus check_status,
      bool is_focusable,
      bool should_autocomplete,
      autofill::FormFieldData::RoleAttribute role,
      base::i18n::TextDirection text_direction,
      bool is_enabled,
      bool is_readonly,
      bool is_default,
      const base::string16& typed_value,
      const std::vector<base::string16>& option_values,
      const std::vector<base::string16>& option_contents,
      LabelSource label_source);

  ~FormFieldData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FormFieldDataPtr>
  FormFieldDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FormFieldData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FormFieldData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FormFieldData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FormFieldData_UnserializedMessageContext<
            UserType, FormFieldData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<FormFieldData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return FormFieldData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FormFieldData_UnserializedMessageContext<
            UserType, FormFieldData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FormFieldData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  base::string16 label;
  base::string16 name;
  base::string16 id;
  base::string16 value;
  std::string form_control_type;
  std::string autocomplete_attribute;
  base::string16 placeholder;
  base::string16 css_classes;
  uint32_t unique_renderer_id;
  uint32_t properties_mask;
  uint64_t max_length;
  bool is_autofilled;
  std::string section;
  autofill::FormFieldData::CheckStatus check_status;
  bool is_focusable;
  bool should_autocomplete;
  autofill::FormFieldData::RoleAttribute role;
  base::i18n::TextDirection text_direction;
  bool is_enabled;
  bool is_readonly;
  bool is_default;
  base::string16 typed_value;
  std::vector<base::string16> option_values;
  std::vector<base::string16> option_contents;
  LabelSource label_source;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  FormData {
 public:
  using DataView = FormDataDataView;
  using Data_ = internal::FormData_Data;

  template <typename... Args>
  static FormDataPtr New(Args&&... args) {
    return FormDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FormDataPtr From(const U& u) {
    return mojo::TypeConverter<FormDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FormData>::Convert(*this);
  }


  FormData();

  FormData(
      const base::string16& name,
      const GURL& origin,
      const GURL& action,
      const url::Origin& main_frame_origin,
      bool is_form_tag,
      bool is_formless_checkout,
      uint32_t unique_renderer_id,
      const std::vector<autofill::FormFieldData>& fields);

  ~FormData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FormDataPtr>
  FormDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FormData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FormData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FormData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FormData_UnserializedMessageContext<
            UserType, FormData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<FormData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return FormData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FormData_UnserializedMessageContext<
            UserType, FormData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FormData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  base::string16 name;
  GURL origin;
  GURL action;
  url::Origin main_frame_origin;
  bool is_form_tag;
  bool is_formless_checkout;
  uint32_t unique_renderer_id;
  std::vector<autofill::FormFieldData> fields;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  FormFieldDataPredictions {
 public:
  using DataView = FormFieldDataPredictionsDataView;
  using Data_ = internal::FormFieldDataPredictions_Data;

  template <typename... Args>
  static FormFieldDataPredictionsPtr New(Args&&... args) {
    return FormFieldDataPredictionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FormFieldDataPredictionsPtr From(const U& u) {
    return mojo::TypeConverter<FormFieldDataPredictionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FormFieldDataPredictions>::Convert(*this);
  }


  FormFieldDataPredictions();

  FormFieldDataPredictions(
      const autofill::FormFieldData& field,
      const std::string& signature,
      const std::string& heuristic_type,
      const std::string& server_type,
      const std::string& overall_type,
      const std::string& parseable_name,
      const std::string& section);

  ~FormFieldDataPredictions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FormFieldDataPredictionsPtr>
  FormFieldDataPredictionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FormFieldDataPredictions>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FormFieldDataPredictions::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FormFieldDataPredictions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FormFieldDataPredictions_UnserializedMessageContext<
            UserType, FormFieldDataPredictions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<FormFieldDataPredictions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return FormFieldDataPredictions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FormFieldDataPredictions_UnserializedMessageContext<
            UserType, FormFieldDataPredictions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FormFieldDataPredictions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  autofill::FormFieldData field;
  std::string signature;
  std::string heuristic_type;
  std::string server_type;
  std::string overall_type;
  std::string parseable_name;
  std::string section;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  FormDataPredictions {
 public:
  using DataView = FormDataPredictionsDataView;
  using Data_ = internal::FormDataPredictions_Data;

  template <typename... Args>
  static FormDataPredictionsPtr New(Args&&... args) {
    return FormDataPredictionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FormDataPredictionsPtr From(const U& u) {
    return mojo::TypeConverter<FormDataPredictionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FormDataPredictions>::Convert(*this);
  }


  FormDataPredictions();

  FormDataPredictions(
      const autofill::FormData& data,
      const std::string& signature,
      const std::vector<autofill::FormFieldDataPredictions>& fields);

  ~FormDataPredictions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FormDataPredictionsPtr>
  FormDataPredictionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FormDataPredictions>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FormDataPredictions::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FormDataPredictions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FormDataPredictions_UnserializedMessageContext<
            UserType, FormDataPredictions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<FormDataPredictions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return FormDataPredictions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FormDataPredictions_UnserializedMessageContext<
            UserType, FormDataPredictions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FormDataPredictions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  autofill::FormData data;
  std::string signature;
  std::vector<autofill::FormFieldDataPredictions> fields;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  PasswordAndRealm {
 public:
  using DataView = PasswordAndRealmDataView;
  using Data_ = internal::PasswordAndRealm_Data;

  template <typename... Args>
  static PasswordAndRealmPtr New(Args&&... args) {
    return PasswordAndRealmPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PasswordAndRealmPtr From(const U& u) {
    return mojo::TypeConverter<PasswordAndRealmPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PasswordAndRealm>::Convert(*this);
  }


  PasswordAndRealm();

  PasswordAndRealm(
      const base::string16& password,
      const std::string& realm);

  ~PasswordAndRealm();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PasswordAndRealmPtr>
  PasswordAndRealmPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PasswordAndRealm>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PasswordAndRealm::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PasswordAndRealm::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PasswordAndRealm_UnserializedMessageContext<
            UserType, PasswordAndRealm::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PasswordAndRealm::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PasswordAndRealm::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PasswordAndRealm_UnserializedMessageContext<
            UserType, PasswordAndRealm::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PasswordAndRealm::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  base::string16 password;
  std::string realm;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  PasswordFormFillData {
 public:
  using DataView = PasswordFormFillDataDataView;
  using Data_ = internal::PasswordFormFillData_Data;

  template <typename... Args>
  static PasswordFormFillDataPtr New(Args&&... args) {
    return PasswordFormFillDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PasswordFormFillDataPtr From(const U& u) {
    return mojo::TypeConverter<PasswordFormFillDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PasswordFormFillData>::Convert(*this);
  }


  PasswordFormFillData();

  PasswordFormFillData(
      const base::string16& name,
      const GURL& origin,
      const GURL& action,
      const autofill::FormFieldData& username_field,
      const autofill::FormFieldData& password_field,
      const std::string& preferred_realm,
      const base::flat_map<base::string16, autofill::PasswordAndRealm>& additional_logins,
      bool wait_for_username,
      bool is_possible_change_password_form);

  ~PasswordFormFillData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PasswordFormFillDataPtr>
  PasswordFormFillDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PasswordFormFillData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PasswordFormFillData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PasswordFormFillData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PasswordFormFillData_UnserializedMessageContext<
            UserType, PasswordFormFillData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PasswordFormFillData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PasswordFormFillData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PasswordFormFillData_UnserializedMessageContext<
            UserType, PasswordFormFillData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PasswordFormFillData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  base::string16 name;
  GURL origin;
  GURL action;
  autofill::FormFieldData username_field;
  autofill::FormFieldData password_field;
  std::string preferred_realm;
  base::flat_map<base::string16, autofill::PasswordAndRealm> additional_logins;
  bool wait_for_username;
  bool is_possible_change_password_form;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};



class  ValueElementPair {
 public:
  using DataView = ValueElementPairDataView;
  using Data_ = internal::ValueElementPair_Data;

  template <typename... Args>
  static ValueElementPairPtr New(Args&&... args) {
    return ValueElementPairPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ValueElementPairPtr From(const U& u) {
    return mojo::TypeConverter<ValueElementPairPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ValueElementPair>::Convert(*this);
  }


  ValueElementPair();

  ValueElementPair(
      const base::string16& value,
      const base::string16& field_name);

  ~ValueElementPair();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ValueElementPairPtr>
  ValueElementPairPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ValueElementPair>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ValueElementPair::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ValueElementPair::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ValueElementPair_UnserializedMessageContext<
            UserType, ValueElementPair::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ValueElementPair::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ValueElementPair::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ValueElementPair_UnserializedMessageContext<
            UserType, ValueElementPair::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ValueElementPair::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  base::string16 value;
  base::string16 field_name;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  PasswordForm {
 public:
  using DataView = PasswordFormDataView;
  using Data_ = internal::PasswordForm_Data;

  template <typename... Args>
  static PasswordFormPtr New(Args&&... args) {
    return PasswordFormPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PasswordFormPtr From(const U& u) {
    return mojo::TypeConverter<PasswordFormPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PasswordForm>::Convert(*this);
  }


  PasswordForm();

  PasswordForm(
      autofill::PasswordForm::Scheme scheme,
      const std::string& signon_realm,
      const GURL& origin_with_path,
      const GURL& action,
      const std::string& affiliated_web_realm,
      const base::string16& submit_element,
      const base::string16& username_element,
      bool username_marked_by_site,
      const base::string16& username_value,
      const std::vector<autofill::ValueElementPair>& other_possible_usernames,
      const std::vector<autofill::ValueElementPair>& all_possible_passwords,
      bool form_has_autofilled_value,
      const base::string16& password_element,
      const base::string16& password_value,
      bool password_value_is_default,
      const base::string16& new_password_element,
      const base::string16& new_password_value,
      bool new_password_value_is_default,
      bool new_password_marked_by_site,
      const base::string16& confirmation_password_element,
      bool preferred,
      base::Time date_created,
      base::Time date_synced,
      bool blacklisted_by_user,
      autofill::PasswordForm::Type type,
      int32_t times_used,
      const autofill::FormData& form_data,
      autofill::PasswordForm::GenerationUploadStatus generation_upload_status,
      const base::string16& display_name,
      const GURL& icon_url,
      const url::Origin& federation_origin,
      bool skip_zero_click,
      autofill::PasswordForm::Layout layout,
      bool was_parsed_using_autofill_predictions,
      bool is_public_suffix_match,
      bool is_affiliation_based_match,
      autofill::PasswordForm::SubmissionIndicatorEvent submission_event,
      bool only_for_fallback_saving);

  ~PasswordForm();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PasswordFormPtr>
  PasswordFormPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PasswordForm>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PasswordForm::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PasswordForm::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PasswordForm_UnserializedMessageContext<
            UserType, PasswordForm::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PasswordForm::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PasswordForm::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PasswordForm_UnserializedMessageContext<
            UserType, PasswordForm::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PasswordForm::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  autofill::PasswordForm::Scheme scheme;
  std::string signon_realm;
  GURL origin_with_path;
  GURL action;
  std::string affiliated_web_realm;
  base::string16 submit_element;
  base::string16 username_element;
  bool username_marked_by_site;
  base::string16 username_value;
  std::vector<autofill::ValueElementPair> other_possible_usernames;
  std::vector<autofill::ValueElementPair> all_possible_passwords;
  bool form_has_autofilled_value;
  base::string16 password_element;
  base::string16 password_value;
  bool password_value_is_default;
  base::string16 new_password_element;
  base::string16 new_password_value;
  bool new_password_value_is_default;
  bool new_password_marked_by_site;
  base::string16 confirmation_password_element;
  bool preferred;
  base::Time date_created;
  base::Time date_synced;
  bool blacklisted_by_user;
  autofill::PasswordForm::Type type;
  int32_t times_used;
  autofill::FormData form_data;
  autofill::PasswordForm::GenerationUploadStatus generation_upload_status;
  base::string16 display_name;
  GURL icon_url;
  url::Origin federation_origin;
  bool skip_zero_click;
  autofill::PasswordForm::Layout layout;
  bool was_parsed_using_autofill_predictions;
  bool is_public_suffix_match;
  bool is_affiliation_based_match;
  autofill::PasswordForm::SubmissionIndicatorEvent submission_event;
  bool only_for_fallback_saving;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  PasswordFormFieldPredictionMap {
 public:
  using DataView = PasswordFormFieldPredictionMapDataView;
  using Data_ = internal::PasswordFormFieldPredictionMap_Data;

  template <typename... Args>
  static PasswordFormFieldPredictionMapPtr New(Args&&... args) {
    return PasswordFormFieldPredictionMapPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PasswordFormFieldPredictionMapPtr From(const U& u) {
    return mojo::TypeConverter<PasswordFormFieldPredictionMapPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PasswordFormFieldPredictionMap>::Convert(*this);
  }


  PasswordFormFieldPredictionMap();

  PasswordFormFieldPredictionMap(
      const std::vector<autofill::FormFieldData>& keys,
      const std::vector<autofill::PasswordFormFieldPredictionType>& values);

  ~PasswordFormFieldPredictionMap();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PasswordFormFieldPredictionMapPtr>
  PasswordFormFieldPredictionMapPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PasswordFormFieldPredictionMap>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PasswordFormFieldPredictionMap::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PasswordFormFieldPredictionMap::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PasswordFormFieldPredictionMap_UnserializedMessageContext<
            UserType, PasswordFormFieldPredictionMap::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PasswordFormFieldPredictionMap::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PasswordFormFieldPredictionMap::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PasswordFormFieldPredictionMap_UnserializedMessageContext<
            UserType, PasswordFormFieldPredictionMap::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PasswordFormFieldPredictionMap::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::vector<autofill::FormFieldData> keys;
  std::vector<autofill::PasswordFormFieldPredictionType> values;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  FormsPredictionsMap {
 public:
  using DataView = FormsPredictionsMapDataView;
  using Data_ = internal::FormsPredictionsMap_Data;

  template <typename... Args>
  static FormsPredictionsMapPtr New(Args&&... args) {
    return FormsPredictionsMapPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FormsPredictionsMapPtr From(const U& u) {
    return mojo::TypeConverter<FormsPredictionsMapPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FormsPredictionsMap>::Convert(*this);
  }


  FormsPredictionsMap();

  FormsPredictionsMap(
      const std::vector<autofill::FormData>& keys,
      const std::vector<autofill::PasswordFormFieldPredictionMap>& values);

  ~FormsPredictionsMap();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FormsPredictionsMapPtr>
  FormsPredictionsMapPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FormsPredictionsMap>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FormsPredictionsMap::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FormsPredictionsMap::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FormsPredictionsMap_UnserializedMessageContext<
            UserType, FormsPredictionsMap::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<FormsPredictionsMap::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return FormsPredictionsMap::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FormsPredictionsMap_UnserializedMessageContext<
            UserType, FormsPredictionsMap::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FormsPredictionsMap::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::vector<autofill::FormData> keys;
  std::vector<autofill::PasswordFormFieldPredictionMap> values;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
FormFieldDataPtr FormFieldData::Clone() const {
  return New(
      mojo::Clone(label),
      mojo::Clone(name),
      mojo::Clone(id),
      mojo::Clone(value),
      mojo::Clone(form_control_type),
      mojo::Clone(autocomplete_attribute),
      mojo::Clone(placeholder),
      mojo::Clone(css_classes),
      mojo::Clone(unique_renderer_id),
      mojo::Clone(properties_mask),
      mojo::Clone(max_length),
      mojo::Clone(is_autofilled),
      mojo::Clone(section),
      mojo::Clone(check_status),
      mojo::Clone(is_focusable),
      mojo::Clone(should_autocomplete),
      mojo::Clone(role),
      mojo::Clone(text_direction),
      mojo::Clone(is_enabled),
      mojo::Clone(is_readonly),
      mojo::Clone(is_default),
      mojo::Clone(typed_value),
      mojo::Clone(option_values),
      mojo::Clone(option_contents),
      mojo::Clone(label_source)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FormFieldData>::value>::type*>
bool FormFieldData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->label, other_struct.label))
    return false;
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  if (!mojo::Equals(this->form_control_type, other_struct.form_control_type))
    return false;
  if (!mojo::Equals(this->autocomplete_attribute, other_struct.autocomplete_attribute))
    return false;
  if (!mojo::Equals(this->placeholder, other_struct.placeholder))
    return false;
  if (!mojo::Equals(this->css_classes, other_struct.css_classes))
    return false;
  if (!mojo::Equals(this->unique_renderer_id, other_struct.unique_renderer_id))
    return false;
  if (!mojo::Equals(this->properties_mask, other_struct.properties_mask))
    return false;
  if (!mojo::Equals(this->max_length, other_struct.max_length))
    return false;
  if (!mojo::Equals(this->is_autofilled, other_struct.is_autofilled))
    return false;
  if (!mojo::Equals(this->section, other_struct.section))
    return false;
  if (!mojo::Equals(this->check_status, other_struct.check_status))
    return false;
  if (!mojo::Equals(this->is_focusable, other_struct.is_focusable))
    return false;
  if (!mojo::Equals(this->should_autocomplete, other_struct.should_autocomplete))
    return false;
  if (!mojo::Equals(this->role, other_struct.role))
    return false;
  if (!mojo::Equals(this->text_direction, other_struct.text_direction))
    return false;
  if (!mojo::Equals(this->is_enabled, other_struct.is_enabled))
    return false;
  if (!mojo::Equals(this->is_readonly, other_struct.is_readonly))
    return false;
  if (!mojo::Equals(this->is_default, other_struct.is_default))
    return false;
  if (!mojo::Equals(this->typed_value, other_struct.typed_value))
    return false;
  if (!mojo::Equals(this->option_values, other_struct.option_values))
    return false;
  if (!mojo::Equals(this->option_contents, other_struct.option_contents))
    return false;
  if (!mojo::Equals(this->label_source, other_struct.label_source))
    return false;
  return true;
}
template <typename StructPtrType>
FormDataPtr FormData::Clone() const {
  return New(
      mojo::Clone(name),
      mojo::Clone(origin),
      mojo::Clone(action),
      mojo::Clone(main_frame_origin),
      mojo::Clone(is_form_tag),
      mojo::Clone(is_formless_checkout),
      mojo::Clone(unique_renderer_id),
      mojo::Clone(fields)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FormData>::value>::type*>
bool FormData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->origin, other_struct.origin))
    return false;
  if (!mojo::Equals(this->action, other_struct.action))
    return false;
  if (!mojo::Equals(this->main_frame_origin, other_struct.main_frame_origin))
    return false;
  if (!mojo::Equals(this->is_form_tag, other_struct.is_form_tag))
    return false;
  if (!mojo::Equals(this->is_formless_checkout, other_struct.is_formless_checkout))
    return false;
  if (!mojo::Equals(this->unique_renderer_id, other_struct.unique_renderer_id))
    return false;
  if (!mojo::Equals(this->fields, other_struct.fields))
    return false;
  return true;
}
template <typename StructPtrType>
FormFieldDataPredictionsPtr FormFieldDataPredictions::Clone() const {
  return New(
      mojo::Clone(field),
      mojo::Clone(signature),
      mojo::Clone(heuristic_type),
      mojo::Clone(server_type),
      mojo::Clone(overall_type),
      mojo::Clone(parseable_name),
      mojo::Clone(section)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FormFieldDataPredictions>::value>::type*>
bool FormFieldDataPredictions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->field, other_struct.field))
    return false;
  if (!mojo::Equals(this->signature, other_struct.signature))
    return false;
  if (!mojo::Equals(this->heuristic_type, other_struct.heuristic_type))
    return false;
  if (!mojo::Equals(this->server_type, other_struct.server_type))
    return false;
  if (!mojo::Equals(this->overall_type, other_struct.overall_type))
    return false;
  if (!mojo::Equals(this->parseable_name, other_struct.parseable_name))
    return false;
  if (!mojo::Equals(this->section, other_struct.section))
    return false;
  return true;
}
template <typename StructPtrType>
FormDataPredictionsPtr FormDataPredictions::Clone() const {
  return New(
      mojo::Clone(data),
      mojo::Clone(signature),
      mojo::Clone(fields)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FormDataPredictions>::value>::type*>
bool FormDataPredictions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->data, other_struct.data))
    return false;
  if (!mojo::Equals(this->signature, other_struct.signature))
    return false;
  if (!mojo::Equals(this->fields, other_struct.fields))
    return false;
  return true;
}
template <typename StructPtrType>
PasswordAndRealmPtr PasswordAndRealm::Clone() const {
  return New(
      mojo::Clone(password),
      mojo::Clone(realm)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PasswordAndRealm>::value>::type*>
bool PasswordAndRealm::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->password, other_struct.password))
    return false;
  if (!mojo::Equals(this->realm, other_struct.realm))
    return false;
  return true;
}
template <typename StructPtrType>
PasswordFormFillDataPtr PasswordFormFillData::Clone() const {
  return New(
      mojo::Clone(name),
      mojo::Clone(origin),
      mojo::Clone(action),
      mojo::Clone(username_field),
      mojo::Clone(password_field),
      mojo::Clone(preferred_realm),
      mojo::Clone(additional_logins),
      mojo::Clone(wait_for_username),
      mojo::Clone(is_possible_change_password_form)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PasswordFormFillData>::value>::type*>
bool PasswordFormFillData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->origin, other_struct.origin))
    return false;
  if (!mojo::Equals(this->action, other_struct.action))
    return false;
  if (!mojo::Equals(this->username_field, other_struct.username_field))
    return false;
  if (!mojo::Equals(this->password_field, other_struct.password_field))
    return false;
  if (!mojo::Equals(this->preferred_realm, other_struct.preferred_realm))
    return false;
  if (!mojo::Equals(this->additional_logins, other_struct.additional_logins))
    return false;
  if (!mojo::Equals(this->wait_for_username, other_struct.wait_for_username))
    return false;
  if (!mojo::Equals(this->is_possible_change_password_form, other_struct.is_possible_change_password_form))
    return false;
  return true;
}
template <typename StructPtrType>
PasswordFormGenerationDataPtr PasswordFormGenerationData::Clone() const {
  return New(
      mojo::Clone(form_signature),
      mojo::Clone(field_signature),
      mojo::Clone(has_confirmation_field),
      mojo::Clone(confirmation_field_signature)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PasswordFormGenerationData>::value>::type*>
bool PasswordFormGenerationData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->form_signature, other_struct.form_signature))
    return false;
  if (!mojo::Equals(this->field_signature, other_struct.field_signature))
    return false;
  if (!mojo::Equals(this->has_confirmation_field, other_struct.has_confirmation_field))
    return false;
  if (!mojo::Equals(this->confirmation_field_signature, other_struct.confirmation_field_signature))
    return false;
  return true;
}
template <typename StructPtrType>
ValueElementPairPtr ValueElementPair::Clone() const {
  return New(
      mojo::Clone(value),
      mojo::Clone(field_name)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ValueElementPair>::value>::type*>
bool ValueElementPair::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  if (!mojo::Equals(this->field_name, other_struct.field_name))
    return false;
  return true;
}
template <typename StructPtrType>
PasswordFormPtr PasswordForm::Clone() const {
  return New(
      mojo::Clone(scheme),
      mojo::Clone(signon_realm),
      mojo::Clone(origin_with_path),
      mojo::Clone(action),
      mojo::Clone(affiliated_web_realm),
      mojo::Clone(submit_element),
      mojo::Clone(username_element),
      mojo::Clone(username_marked_by_site),
      mojo::Clone(username_value),
      mojo::Clone(other_possible_usernames),
      mojo::Clone(all_possible_passwords),
      mojo::Clone(form_has_autofilled_value),
      mojo::Clone(password_element),
      mojo::Clone(password_value),
      mojo::Clone(password_value_is_default),
      mojo::Clone(new_password_element),
      mojo::Clone(new_password_value),
      mojo::Clone(new_password_value_is_default),
      mojo::Clone(new_password_marked_by_site),
      mojo::Clone(confirmation_password_element),
      mojo::Clone(preferred),
      mojo::Clone(date_created),
      mojo::Clone(date_synced),
      mojo::Clone(blacklisted_by_user),
      mojo::Clone(type),
      mojo::Clone(times_used),
      mojo::Clone(form_data),
      mojo::Clone(generation_upload_status),
      mojo::Clone(display_name),
      mojo::Clone(icon_url),
      mojo::Clone(federation_origin),
      mojo::Clone(skip_zero_click),
      mojo::Clone(layout),
      mojo::Clone(was_parsed_using_autofill_predictions),
      mojo::Clone(is_public_suffix_match),
      mojo::Clone(is_affiliation_based_match),
      mojo::Clone(submission_event),
      mojo::Clone(only_for_fallback_saving)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PasswordForm>::value>::type*>
bool PasswordForm::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->scheme, other_struct.scheme))
    return false;
  if (!mojo::Equals(this->signon_realm, other_struct.signon_realm))
    return false;
  if (!mojo::Equals(this->origin_with_path, other_struct.origin_with_path))
    return false;
  if (!mojo::Equals(this->action, other_struct.action))
    return false;
  if (!mojo::Equals(this->affiliated_web_realm, other_struct.affiliated_web_realm))
    return false;
  if (!mojo::Equals(this->submit_element, other_struct.submit_element))
    return false;
  if (!mojo::Equals(this->username_element, other_struct.username_element))
    return false;
  if (!mojo::Equals(this->username_marked_by_site, other_struct.username_marked_by_site))
    return false;
  if (!mojo::Equals(this->username_value, other_struct.username_value))
    return false;
  if (!mojo::Equals(this->other_possible_usernames, other_struct.other_possible_usernames))
    return false;
  if (!mojo::Equals(this->all_possible_passwords, other_struct.all_possible_passwords))
    return false;
  if (!mojo::Equals(this->form_has_autofilled_value, other_struct.form_has_autofilled_value))
    return false;
  if (!mojo::Equals(this->password_element, other_struct.password_element))
    return false;
  if (!mojo::Equals(this->password_value, other_struct.password_value))
    return false;
  if (!mojo::Equals(this->password_value_is_default, other_struct.password_value_is_default))
    return false;
  if (!mojo::Equals(this->new_password_element, other_struct.new_password_element))
    return false;
  if (!mojo::Equals(this->new_password_value, other_struct.new_password_value))
    return false;
  if (!mojo::Equals(this->new_password_value_is_default, other_struct.new_password_value_is_default))
    return false;
  if (!mojo::Equals(this->new_password_marked_by_site, other_struct.new_password_marked_by_site))
    return false;
  if (!mojo::Equals(this->confirmation_password_element, other_struct.confirmation_password_element))
    return false;
  if (!mojo::Equals(this->preferred, other_struct.preferred))
    return false;
  if (!mojo::Equals(this->date_created, other_struct.date_created))
    return false;
  if (!mojo::Equals(this->date_synced, other_struct.date_synced))
    return false;
  if (!mojo::Equals(this->blacklisted_by_user, other_struct.blacklisted_by_user))
    return false;
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->times_used, other_struct.times_used))
    return false;
  if (!mojo::Equals(this->form_data, other_struct.form_data))
    return false;
  if (!mojo::Equals(this->generation_upload_status, other_struct.generation_upload_status))
    return false;
  if (!mojo::Equals(this->display_name, other_struct.display_name))
    return false;
  if (!mojo::Equals(this->icon_url, other_struct.icon_url))
    return false;
  if (!mojo::Equals(this->federation_origin, other_struct.federation_origin))
    return false;
  if (!mojo::Equals(this->skip_zero_click, other_struct.skip_zero_click))
    return false;
  if (!mojo::Equals(this->layout, other_struct.layout))
    return false;
  if (!mojo::Equals(this->was_parsed_using_autofill_predictions, other_struct.was_parsed_using_autofill_predictions))
    return false;
  if (!mojo::Equals(this->is_public_suffix_match, other_struct.is_public_suffix_match))
    return false;
  if (!mojo::Equals(this->is_affiliation_based_match, other_struct.is_affiliation_based_match))
    return false;
  if (!mojo::Equals(this->submission_event, other_struct.submission_event))
    return false;
  if (!mojo::Equals(this->only_for_fallback_saving, other_struct.only_for_fallback_saving))
    return false;
  return true;
}
template <typename StructPtrType>
PasswordFormFieldPredictionMapPtr PasswordFormFieldPredictionMap::Clone() const {
  return New(
      mojo::Clone(keys),
      mojo::Clone(values)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PasswordFormFieldPredictionMap>::value>::type*>
bool PasswordFormFieldPredictionMap::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->keys, other_struct.keys))
    return false;
  if (!mojo::Equals(this->values, other_struct.values))
    return false;
  return true;
}
template <typename StructPtrType>
FormsPredictionsMapPtr FormsPredictionsMap::Clone() const {
  return New(
      mojo::Clone(keys),
      mojo::Clone(values)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FormsPredictionsMap>::value>::type*>
bool FormsPredictionsMap::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->keys, other_struct.keys))
    return false;
  if (!mojo::Equals(this->values, other_struct.values))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace autofill

namespace mojo {


template <>
struct  StructTraits<::autofill::mojom::FormFieldData::DataView,
                                         ::autofill::mojom::FormFieldDataPtr> {
  static bool IsNull(const ::autofill::mojom::FormFieldDataPtr& input) { return !input; }
  static void SetToNull(::autofill::mojom::FormFieldDataPtr* output) { output->reset(); }

  static const decltype(::autofill::mojom::FormFieldData::label)& label(
      const ::autofill::mojom::FormFieldDataPtr& input) {
    return input->label;
  }

  static const decltype(::autofill::mojom::FormFieldData::name)& name(
      const ::autofill::mojom::FormFieldDataPtr& input) {
    return input->name;
  }

  static const decltype(::autofill::mojom::FormFieldData::id)& id(
      const ::autofill::mojom::FormFieldDataPtr& input) {
    return input->id;
  }

  static const decltype(::autofill::mojom::FormFieldData::value)& value(
      const ::autofill::mojom::FormFieldDataPtr& input) {
    return input->value;
  }

  static const decltype(::autofill::mojom::FormFieldData::form_control_type)& form_control_type(
      const ::autofill::mojom::FormFieldDataPtr& input) {
    return input->form_control_type;
  }

  static const decltype(::autofill::mojom::FormFieldData::autocomplete_attribute)& autocomplete_attribute(
      const ::autofill::mojom::FormFieldDataPtr& input) {
    return input->autocomplete_attribute;
  }

  static const decltype(::autofill::mojom::FormFieldData::placeholder)& placeholder(
      const ::autofill::mojom::FormFieldDataPtr& input) {
    return input->placeholder;
  }

  static const decltype(::autofill::mojom::FormFieldData::css_classes)& css_classes(
      const ::autofill::mojom::FormFieldDataPtr& input) {
    return input->css_classes;
  }

  static decltype(::autofill::mojom::FormFieldData::unique_renderer_id) unique_renderer_id(
      const ::autofill::mojom::FormFieldDataPtr& input) {
    return input->unique_renderer_id;
  }

  static decltype(::autofill::mojom::FormFieldData::properties_mask) properties_mask(
      const ::autofill::mojom::FormFieldDataPtr& input) {
    return input->properties_mask;
  }

  static decltype(::autofill::mojom::FormFieldData::max_length) max_length(
      const ::autofill::mojom::FormFieldDataPtr& input) {
    return input->max_length;
  }

  static decltype(::autofill::mojom::FormFieldData::is_autofilled) is_autofilled(
      const ::autofill::mojom::FormFieldDataPtr& input) {
    return input->is_autofilled;
  }

  static const decltype(::autofill::mojom::FormFieldData::section)& section(
      const ::autofill::mojom::FormFieldDataPtr& input) {
    return input->section;
  }

  static decltype(::autofill::mojom::FormFieldData::check_status) check_status(
      const ::autofill::mojom::FormFieldDataPtr& input) {
    return input->check_status;
  }

  static decltype(::autofill::mojom::FormFieldData::is_focusable) is_focusable(
      const ::autofill::mojom::FormFieldDataPtr& input) {
    return input->is_focusable;
  }

  static decltype(::autofill::mojom::FormFieldData::should_autocomplete) should_autocomplete(
      const ::autofill::mojom::FormFieldDataPtr& input) {
    return input->should_autocomplete;
  }

  static decltype(::autofill::mojom::FormFieldData::role) role(
      const ::autofill::mojom::FormFieldDataPtr& input) {
    return input->role;
  }

  static decltype(::autofill::mojom::FormFieldData::text_direction) text_direction(
      const ::autofill::mojom::FormFieldDataPtr& input) {
    return input->text_direction;
  }

  static decltype(::autofill::mojom::FormFieldData::is_enabled) is_enabled(
      const ::autofill::mojom::FormFieldDataPtr& input) {
    return input->is_enabled;
  }

  static decltype(::autofill::mojom::FormFieldData::is_readonly) is_readonly(
      const ::autofill::mojom::FormFieldDataPtr& input) {
    return input->is_readonly;
  }

  static decltype(::autofill::mojom::FormFieldData::is_default) is_default(
      const ::autofill::mojom::FormFieldDataPtr& input) {
    return input->is_default;
  }

  static const decltype(::autofill::mojom::FormFieldData::typed_value)& typed_value(
      const ::autofill::mojom::FormFieldDataPtr& input) {
    return input->typed_value;
  }

  static const decltype(::autofill::mojom::FormFieldData::option_values)& option_values(
      const ::autofill::mojom::FormFieldDataPtr& input) {
    return input->option_values;
  }

  static const decltype(::autofill::mojom::FormFieldData::option_contents)& option_contents(
      const ::autofill::mojom::FormFieldDataPtr& input) {
    return input->option_contents;
  }

  static decltype(::autofill::mojom::FormFieldData::label_source) label_source(
      const ::autofill::mojom::FormFieldDataPtr& input) {
    return input->label_source;
  }

  static bool Read(::autofill::mojom::FormFieldData::DataView input, ::autofill::mojom::FormFieldDataPtr* output);
};


template <>
struct  StructTraits<::autofill::mojom::FormData::DataView,
                                         ::autofill::mojom::FormDataPtr> {
  static bool IsNull(const ::autofill::mojom::FormDataPtr& input) { return !input; }
  static void SetToNull(::autofill::mojom::FormDataPtr* output) { output->reset(); }

  static const decltype(::autofill::mojom::FormData::name)& name(
      const ::autofill::mojom::FormDataPtr& input) {
    return input->name;
  }

  static const decltype(::autofill::mojom::FormData::origin)& origin(
      const ::autofill::mojom::FormDataPtr& input) {
    return input->origin;
  }

  static const decltype(::autofill::mojom::FormData::action)& action(
      const ::autofill::mojom::FormDataPtr& input) {
    return input->action;
  }

  static const decltype(::autofill::mojom::FormData::main_frame_origin)& main_frame_origin(
      const ::autofill::mojom::FormDataPtr& input) {
    return input->main_frame_origin;
  }

  static decltype(::autofill::mojom::FormData::is_form_tag) is_form_tag(
      const ::autofill::mojom::FormDataPtr& input) {
    return input->is_form_tag;
  }

  static decltype(::autofill::mojom::FormData::is_formless_checkout) is_formless_checkout(
      const ::autofill::mojom::FormDataPtr& input) {
    return input->is_formless_checkout;
  }

  static decltype(::autofill::mojom::FormData::unique_renderer_id) unique_renderer_id(
      const ::autofill::mojom::FormDataPtr& input) {
    return input->unique_renderer_id;
  }

  static const decltype(::autofill::mojom::FormData::fields)& fields(
      const ::autofill::mojom::FormDataPtr& input) {
    return input->fields;
  }

  static bool Read(::autofill::mojom::FormData::DataView input, ::autofill::mojom::FormDataPtr* output);
};


template <>
struct  StructTraits<::autofill::mojom::FormFieldDataPredictions::DataView,
                                         ::autofill::mojom::FormFieldDataPredictionsPtr> {
  static bool IsNull(const ::autofill::mojom::FormFieldDataPredictionsPtr& input) { return !input; }
  static void SetToNull(::autofill::mojom::FormFieldDataPredictionsPtr* output) { output->reset(); }

  static const decltype(::autofill::mojom::FormFieldDataPredictions::field)& field(
      const ::autofill::mojom::FormFieldDataPredictionsPtr& input) {
    return input->field;
  }

  static const decltype(::autofill::mojom::FormFieldDataPredictions::signature)& signature(
      const ::autofill::mojom::FormFieldDataPredictionsPtr& input) {
    return input->signature;
  }

  static const decltype(::autofill::mojom::FormFieldDataPredictions::heuristic_type)& heuristic_type(
      const ::autofill::mojom::FormFieldDataPredictionsPtr& input) {
    return input->heuristic_type;
  }

  static const decltype(::autofill::mojom::FormFieldDataPredictions::server_type)& server_type(
      const ::autofill::mojom::FormFieldDataPredictionsPtr& input) {
    return input->server_type;
  }

  static const decltype(::autofill::mojom::FormFieldDataPredictions::overall_type)& overall_type(
      const ::autofill::mojom::FormFieldDataPredictionsPtr& input) {
    return input->overall_type;
  }

  static const decltype(::autofill::mojom::FormFieldDataPredictions::parseable_name)& parseable_name(
      const ::autofill::mojom::FormFieldDataPredictionsPtr& input) {
    return input->parseable_name;
  }

  static const decltype(::autofill::mojom::FormFieldDataPredictions::section)& section(
      const ::autofill::mojom::FormFieldDataPredictionsPtr& input) {
    return input->section;
  }

  static bool Read(::autofill::mojom::FormFieldDataPredictions::DataView input, ::autofill::mojom::FormFieldDataPredictionsPtr* output);
};


template <>
struct  StructTraits<::autofill::mojom::FormDataPredictions::DataView,
                                         ::autofill::mojom::FormDataPredictionsPtr> {
  static bool IsNull(const ::autofill::mojom::FormDataPredictionsPtr& input) { return !input; }
  static void SetToNull(::autofill::mojom::FormDataPredictionsPtr* output) { output->reset(); }

  static const decltype(::autofill::mojom::FormDataPredictions::data)& data(
      const ::autofill::mojom::FormDataPredictionsPtr& input) {
    return input->data;
  }

  static const decltype(::autofill::mojom::FormDataPredictions::signature)& signature(
      const ::autofill::mojom::FormDataPredictionsPtr& input) {
    return input->signature;
  }

  static const decltype(::autofill::mojom::FormDataPredictions::fields)& fields(
      const ::autofill::mojom::FormDataPredictionsPtr& input) {
    return input->fields;
  }

  static bool Read(::autofill::mojom::FormDataPredictions::DataView input, ::autofill::mojom::FormDataPredictionsPtr* output);
};


template <>
struct  StructTraits<::autofill::mojom::PasswordAndRealm::DataView,
                                         ::autofill::mojom::PasswordAndRealmPtr> {
  static bool IsNull(const ::autofill::mojom::PasswordAndRealmPtr& input) { return !input; }
  static void SetToNull(::autofill::mojom::PasswordAndRealmPtr* output) { output->reset(); }

  static const decltype(::autofill::mojom::PasswordAndRealm::password)& password(
      const ::autofill::mojom::PasswordAndRealmPtr& input) {
    return input->password;
  }

  static const decltype(::autofill::mojom::PasswordAndRealm::realm)& realm(
      const ::autofill::mojom::PasswordAndRealmPtr& input) {
    return input->realm;
  }

  static bool Read(::autofill::mojom::PasswordAndRealm::DataView input, ::autofill::mojom::PasswordAndRealmPtr* output);
};


template <>
struct  StructTraits<::autofill::mojom::PasswordFormFillData::DataView,
                                         ::autofill::mojom::PasswordFormFillDataPtr> {
  static bool IsNull(const ::autofill::mojom::PasswordFormFillDataPtr& input) { return !input; }
  static void SetToNull(::autofill::mojom::PasswordFormFillDataPtr* output) { output->reset(); }

  static const decltype(::autofill::mojom::PasswordFormFillData::name)& name(
      const ::autofill::mojom::PasswordFormFillDataPtr& input) {
    return input->name;
  }

  static const decltype(::autofill::mojom::PasswordFormFillData::origin)& origin(
      const ::autofill::mojom::PasswordFormFillDataPtr& input) {
    return input->origin;
  }

  static const decltype(::autofill::mojom::PasswordFormFillData::action)& action(
      const ::autofill::mojom::PasswordFormFillDataPtr& input) {
    return input->action;
  }

  static const decltype(::autofill::mojom::PasswordFormFillData::username_field)& username_field(
      const ::autofill::mojom::PasswordFormFillDataPtr& input) {
    return input->username_field;
  }

  static const decltype(::autofill::mojom::PasswordFormFillData::password_field)& password_field(
      const ::autofill::mojom::PasswordFormFillDataPtr& input) {
    return input->password_field;
  }

  static const decltype(::autofill::mojom::PasswordFormFillData::preferred_realm)& preferred_realm(
      const ::autofill::mojom::PasswordFormFillDataPtr& input) {
    return input->preferred_realm;
  }

  static const decltype(::autofill::mojom::PasswordFormFillData::additional_logins)& additional_logins(
      const ::autofill::mojom::PasswordFormFillDataPtr& input) {
    return input->additional_logins;
  }

  static decltype(::autofill::mojom::PasswordFormFillData::wait_for_username) wait_for_username(
      const ::autofill::mojom::PasswordFormFillDataPtr& input) {
    return input->wait_for_username;
  }

  static decltype(::autofill::mojom::PasswordFormFillData::is_possible_change_password_form) is_possible_change_password_form(
      const ::autofill::mojom::PasswordFormFillDataPtr& input) {
    return input->is_possible_change_password_form;
  }

  static bool Read(::autofill::mojom::PasswordFormFillData::DataView input, ::autofill::mojom::PasswordFormFillDataPtr* output);
};


template <>
struct  StructTraits<::autofill::mojom::PasswordFormGenerationData::DataView,
                                         ::autofill::mojom::PasswordFormGenerationDataPtr> {
  static bool IsNull(const ::autofill::mojom::PasswordFormGenerationDataPtr& input) { return !input; }
  static void SetToNull(::autofill::mojom::PasswordFormGenerationDataPtr* output) { output->reset(); }

  static decltype(::autofill::mojom::PasswordFormGenerationData::form_signature) form_signature(
      const ::autofill::mojom::PasswordFormGenerationDataPtr& input) {
    return input->form_signature;
  }

  static decltype(::autofill::mojom::PasswordFormGenerationData::field_signature) field_signature(
      const ::autofill::mojom::PasswordFormGenerationDataPtr& input) {
    return input->field_signature;
  }

  static decltype(::autofill::mojom::PasswordFormGenerationData::has_confirmation_field) has_confirmation_field(
      const ::autofill::mojom::PasswordFormGenerationDataPtr& input) {
    return input->has_confirmation_field;
  }

  static decltype(::autofill::mojom::PasswordFormGenerationData::confirmation_field_signature) confirmation_field_signature(
      const ::autofill::mojom::PasswordFormGenerationDataPtr& input) {
    return input->confirmation_field_signature;
  }

  static bool Read(::autofill::mojom::PasswordFormGenerationData::DataView input, ::autofill::mojom::PasswordFormGenerationDataPtr* output);
};


template <>
struct  StructTraits<::autofill::mojom::ValueElementPair::DataView,
                                         ::autofill::mojom::ValueElementPairPtr> {
  static bool IsNull(const ::autofill::mojom::ValueElementPairPtr& input) { return !input; }
  static void SetToNull(::autofill::mojom::ValueElementPairPtr* output) { output->reset(); }

  static const decltype(::autofill::mojom::ValueElementPair::value)& value(
      const ::autofill::mojom::ValueElementPairPtr& input) {
    return input->value;
  }

  static const decltype(::autofill::mojom::ValueElementPair::field_name)& field_name(
      const ::autofill::mojom::ValueElementPairPtr& input) {
    return input->field_name;
  }

  static bool Read(::autofill::mojom::ValueElementPair::DataView input, ::autofill::mojom::ValueElementPairPtr* output);
};


template <>
struct  StructTraits<::autofill::mojom::PasswordForm::DataView,
                                         ::autofill::mojom::PasswordFormPtr> {
  static bool IsNull(const ::autofill::mojom::PasswordFormPtr& input) { return !input; }
  static void SetToNull(::autofill::mojom::PasswordFormPtr* output) { output->reset(); }

  static decltype(::autofill::mojom::PasswordForm::scheme) scheme(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->scheme;
  }

  static const decltype(::autofill::mojom::PasswordForm::signon_realm)& signon_realm(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->signon_realm;
  }

  static const decltype(::autofill::mojom::PasswordForm::origin_with_path)& origin_with_path(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->origin_with_path;
  }

  static const decltype(::autofill::mojom::PasswordForm::action)& action(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->action;
  }

  static const decltype(::autofill::mojom::PasswordForm::affiliated_web_realm)& affiliated_web_realm(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->affiliated_web_realm;
  }

  static const decltype(::autofill::mojom::PasswordForm::submit_element)& submit_element(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->submit_element;
  }

  static const decltype(::autofill::mojom::PasswordForm::username_element)& username_element(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->username_element;
  }

  static decltype(::autofill::mojom::PasswordForm::username_marked_by_site) username_marked_by_site(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->username_marked_by_site;
  }

  static const decltype(::autofill::mojom::PasswordForm::username_value)& username_value(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->username_value;
  }

  static const decltype(::autofill::mojom::PasswordForm::other_possible_usernames)& other_possible_usernames(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->other_possible_usernames;
  }

  static const decltype(::autofill::mojom::PasswordForm::all_possible_passwords)& all_possible_passwords(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->all_possible_passwords;
  }

  static decltype(::autofill::mojom::PasswordForm::form_has_autofilled_value) form_has_autofilled_value(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->form_has_autofilled_value;
  }

  static const decltype(::autofill::mojom::PasswordForm::password_element)& password_element(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->password_element;
  }

  static const decltype(::autofill::mojom::PasswordForm::password_value)& password_value(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->password_value;
  }

  static decltype(::autofill::mojom::PasswordForm::password_value_is_default) password_value_is_default(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->password_value_is_default;
  }

  static const decltype(::autofill::mojom::PasswordForm::new_password_element)& new_password_element(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->new_password_element;
  }

  static const decltype(::autofill::mojom::PasswordForm::new_password_value)& new_password_value(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->new_password_value;
  }

  static decltype(::autofill::mojom::PasswordForm::new_password_value_is_default) new_password_value_is_default(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->new_password_value_is_default;
  }

  static decltype(::autofill::mojom::PasswordForm::new_password_marked_by_site) new_password_marked_by_site(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->new_password_marked_by_site;
  }

  static const decltype(::autofill::mojom::PasswordForm::confirmation_password_element)& confirmation_password_element(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->confirmation_password_element;
  }

  static decltype(::autofill::mojom::PasswordForm::preferred) preferred(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->preferred;
  }

  static const decltype(::autofill::mojom::PasswordForm::date_created)& date_created(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->date_created;
  }

  static const decltype(::autofill::mojom::PasswordForm::date_synced)& date_synced(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->date_synced;
  }

  static decltype(::autofill::mojom::PasswordForm::blacklisted_by_user) blacklisted_by_user(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->blacklisted_by_user;
  }

  static decltype(::autofill::mojom::PasswordForm::type) type(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->type;
  }

  static decltype(::autofill::mojom::PasswordForm::times_used) times_used(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->times_used;
  }

  static const decltype(::autofill::mojom::PasswordForm::form_data)& form_data(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->form_data;
  }

  static decltype(::autofill::mojom::PasswordForm::generation_upload_status) generation_upload_status(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->generation_upload_status;
  }

  static const decltype(::autofill::mojom::PasswordForm::display_name)& display_name(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->display_name;
  }

  static const decltype(::autofill::mojom::PasswordForm::icon_url)& icon_url(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->icon_url;
  }

  static const decltype(::autofill::mojom::PasswordForm::federation_origin)& federation_origin(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->federation_origin;
  }

  static decltype(::autofill::mojom::PasswordForm::skip_zero_click) skip_zero_click(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->skip_zero_click;
  }

  static decltype(::autofill::mojom::PasswordForm::layout) layout(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->layout;
  }

  static decltype(::autofill::mojom::PasswordForm::was_parsed_using_autofill_predictions) was_parsed_using_autofill_predictions(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->was_parsed_using_autofill_predictions;
  }

  static decltype(::autofill::mojom::PasswordForm::is_public_suffix_match) is_public_suffix_match(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->is_public_suffix_match;
  }

  static decltype(::autofill::mojom::PasswordForm::is_affiliation_based_match) is_affiliation_based_match(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->is_affiliation_based_match;
  }

  static decltype(::autofill::mojom::PasswordForm::submission_event) submission_event(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->submission_event;
  }

  static decltype(::autofill::mojom::PasswordForm::only_for_fallback_saving) only_for_fallback_saving(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->only_for_fallback_saving;
  }

  static bool Read(::autofill::mojom::PasswordForm::DataView input, ::autofill::mojom::PasswordFormPtr* output);
};


template <>
struct  StructTraits<::autofill::mojom::PasswordFormFieldPredictionMap::DataView,
                                         ::autofill::mojom::PasswordFormFieldPredictionMapPtr> {
  static bool IsNull(const ::autofill::mojom::PasswordFormFieldPredictionMapPtr& input) { return !input; }
  static void SetToNull(::autofill::mojom::PasswordFormFieldPredictionMapPtr* output) { output->reset(); }

  static const decltype(::autofill::mojom::PasswordFormFieldPredictionMap::keys)& keys(
      const ::autofill::mojom::PasswordFormFieldPredictionMapPtr& input) {
    return input->keys;
  }

  static const decltype(::autofill::mojom::PasswordFormFieldPredictionMap::values)& values(
      const ::autofill::mojom::PasswordFormFieldPredictionMapPtr& input) {
    return input->values;
  }

  static bool Read(::autofill::mojom::PasswordFormFieldPredictionMap::DataView input, ::autofill::mojom::PasswordFormFieldPredictionMapPtr* output);
};


template <>
struct  StructTraits<::autofill::mojom::FormsPredictionsMap::DataView,
                                         ::autofill::mojom::FormsPredictionsMapPtr> {
  static bool IsNull(const ::autofill::mojom::FormsPredictionsMapPtr& input) { return !input; }
  static void SetToNull(::autofill::mojom::FormsPredictionsMapPtr* output) { output->reset(); }

  static const decltype(::autofill::mojom::FormsPredictionsMap::keys)& keys(
      const ::autofill::mojom::FormsPredictionsMapPtr& input) {
    return input->keys;
  }

  static const decltype(::autofill::mojom::FormsPredictionsMap::values)& values(
      const ::autofill::mojom::FormsPredictionsMapPtr& input) {
    return input->values;
  }

  static bool Read(::autofill::mojom::FormsPredictionsMap::DataView input, ::autofill::mojom::FormsPredictionsMapPtr* output);
};

}  // namespace mojo

#endif  // COMPONENTS_AUTOFILL_CONTENT_COMMON_AUTOFILL_TYPES_MOJOM_H_