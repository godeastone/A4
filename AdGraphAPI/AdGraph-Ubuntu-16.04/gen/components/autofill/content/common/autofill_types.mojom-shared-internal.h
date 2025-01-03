// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_AUTOFILL_CONTENT_COMMON_AUTOFILL_TYPES_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_AUTOFILL_CONTENT_COMMON_AUTOFILL_TYPES_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/text_direction.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
#include "url/mojom/origin.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace autofill {
namespace mojom {
namespace internal {
class FormFieldData_Data;
class FormData_Data;
class FormFieldDataPredictions_Data;
class FormDataPredictions_Data;
class PasswordAndRealm_Data;
class PasswordFormFillData_Data;
class PasswordFormGenerationData_Data;
class ValueElementPair_Data;
class PasswordForm_Data;
class PasswordFormFieldPredictionMap_Data;
class FormsPredictionsMap_Data;

struct CheckStatus_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct RoleAttribute_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct GenerationUploadStatus_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 10:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct PasswordFormLayout_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct PasswordFormType_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct PasswordFormScheme_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct PasswordFormSubmissionIndicatorEvent_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct PasswordFormFieldPredictionType_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct SubmissionSource_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct LabelSource_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

#pragma pack(push, 1)
class  FormFieldData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FormFieldData_Data));
      new (data()) FormFieldData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FormFieldData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FormFieldData_Data>(index_);
    }
    FormFieldData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> label;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> name;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> id;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> value;
  mojo::internal::Pointer<mojo::internal::String_Data> form_control_type;
  mojo::internal::Pointer<mojo::internal::String_Data> autocomplete_attribute;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> placeholder;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> css_classes;
  uint32_t unique_renderer_id;
  uint32_t properties_mask;
  uint64_t max_length;
  uint8_t is_autofilled : 1;
  uint8_t is_focusable : 1;
  uint8_t should_autocomplete : 1;
  uint8_t is_enabled : 1;
  uint8_t is_readonly : 1;
  uint8_t is_default : 1;
  uint8_t pad16_[3];
  int32_t check_status;
  mojo::internal::Pointer<mojo::internal::String_Data> section;
  int32_t role;
  int32_t text_direction;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> typed_value;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data>>> option_values;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data>>> option_contents;
  int32_t label_source;
  uint8_t padfinal_[4];

 private:
  FormFieldData_Data();
  ~FormFieldData_Data() = delete;
};
static_assert(sizeof(FormFieldData_Data) == 144,
              "Bad sizeof(FormFieldData_Data)");
// Used by FormFieldData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct FormFieldData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  FormFieldData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~FormFieldData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    FormFieldData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    FormFieldData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  FormData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FormData_Data));
      new (data()) FormData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FormData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FormData_Data>(index_);
    }
    FormData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> name;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> origin;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> action;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> main_frame_origin;
  uint8_t is_form_tag : 1;
  uint8_t is_formless_checkout : 1;
  uint8_t pad5_[3];
  uint32_t unique_renderer_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::FormFieldData_Data>>> fields;

 private:
  FormData_Data();
  ~FormData_Data() = delete;
};
static_assert(sizeof(FormData_Data) == 56,
              "Bad sizeof(FormData_Data)");
// Used by FormData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct FormData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  FormData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~FormData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    FormData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    FormData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  FormFieldDataPredictions_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FormFieldDataPredictions_Data));
      new (data()) FormFieldDataPredictions_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FormFieldDataPredictions_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FormFieldDataPredictions_Data>(index_);
    }
    FormFieldDataPredictions_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::FormFieldData_Data> field;
  mojo::internal::Pointer<mojo::internal::String_Data> signature;
  mojo::internal::Pointer<mojo::internal::String_Data> heuristic_type;
  mojo::internal::Pointer<mojo::internal::String_Data> server_type;
  mojo::internal::Pointer<mojo::internal::String_Data> overall_type;
  mojo::internal::Pointer<mojo::internal::String_Data> parseable_name;
  mojo::internal::Pointer<mojo::internal::String_Data> section;

 private:
  FormFieldDataPredictions_Data();
  ~FormFieldDataPredictions_Data() = delete;
};
static_assert(sizeof(FormFieldDataPredictions_Data) == 64,
              "Bad sizeof(FormFieldDataPredictions_Data)");
// Used by FormFieldDataPredictions::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct FormFieldDataPredictions_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  FormFieldDataPredictions_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~FormFieldDataPredictions_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    FormFieldDataPredictions_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    FormFieldDataPredictions_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  FormDataPredictions_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FormDataPredictions_Data));
      new (data()) FormDataPredictions_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FormDataPredictions_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FormDataPredictions_Data>(index_);
    }
    FormDataPredictions_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::FormData_Data> data;
  mojo::internal::Pointer<mojo::internal::String_Data> signature;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::FormFieldDataPredictions_Data>>> fields;

 private:
  FormDataPredictions_Data();
  ~FormDataPredictions_Data() = delete;
};
static_assert(sizeof(FormDataPredictions_Data) == 32,
              "Bad sizeof(FormDataPredictions_Data)");
// Used by FormDataPredictions::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct FormDataPredictions_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  FormDataPredictions_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~FormDataPredictions_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    FormDataPredictions_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    FormDataPredictions_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  PasswordAndRealm_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PasswordAndRealm_Data));
      new (data()) PasswordAndRealm_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PasswordAndRealm_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PasswordAndRealm_Data>(index_);
    }
    PasswordAndRealm_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> password;
  mojo::internal::Pointer<mojo::internal::String_Data> realm;

 private:
  PasswordAndRealm_Data();
  ~PasswordAndRealm_Data() = delete;
};
static_assert(sizeof(PasswordAndRealm_Data) == 24,
              "Bad sizeof(PasswordAndRealm_Data)");
// Used by PasswordAndRealm::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PasswordAndRealm_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PasswordAndRealm_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PasswordAndRealm_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PasswordAndRealm_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PasswordAndRealm_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  PasswordFormFillData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PasswordFormFillData_Data));
      new (data()) PasswordFormFillData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PasswordFormFillData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PasswordFormFillData_Data>(index_);
    }
    PasswordFormFillData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> name;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> origin;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> action;
  mojo::internal::Pointer<internal::FormFieldData_Data> username_field;
  mojo::internal::Pointer<internal::FormFieldData_Data> password_field;
  mojo::internal::Pointer<mojo::internal::String_Data> preferred_realm;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data>, mojo::internal::Pointer<internal::PasswordAndRealm_Data>>> additional_logins;
  uint8_t wait_for_username : 1;
  uint8_t is_possible_change_password_form : 1;
  uint8_t padfinal_[7];

 private:
  PasswordFormFillData_Data();
  ~PasswordFormFillData_Data() = delete;
};
static_assert(sizeof(PasswordFormFillData_Data) == 72,
              "Bad sizeof(PasswordFormFillData_Data)");
// Used by PasswordFormFillData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PasswordFormFillData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PasswordFormFillData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PasswordFormFillData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PasswordFormFillData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PasswordFormFillData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  PasswordFormGenerationData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PasswordFormGenerationData_Data));
      new (data()) PasswordFormGenerationData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PasswordFormGenerationData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PasswordFormGenerationData_Data>(index_);
    }
    PasswordFormGenerationData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t form_signature;
  uint32_t field_signature;
  uint8_t has_confirmation_field : 1;
  uint8_t pad2_[3];
  uint32_t confirmation_field_signature;
  uint8_t padfinal_[4];

 private:
  PasswordFormGenerationData_Data();
  ~PasswordFormGenerationData_Data() = delete;
};
static_assert(sizeof(PasswordFormGenerationData_Data) == 32,
              "Bad sizeof(PasswordFormGenerationData_Data)");
// Used by PasswordFormGenerationData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PasswordFormGenerationData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PasswordFormGenerationData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PasswordFormGenerationData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PasswordFormGenerationData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PasswordFormGenerationData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  ValueElementPair_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ValueElementPair_Data));
      new (data()) ValueElementPair_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ValueElementPair_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ValueElementPair_Data>(index_);
    }
    ValueElementPair_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> value;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> field_name;

 private:
  ValueElementPair_Data();
  ~ValueElementPair_Data() = delete;
};
static_assert(sizeof(ValueElementPair_Data) == 24,
              "Bad sizeof(ValueElementPair_Data)");
// Used by ValueElementPair::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ValueElementPair_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ValueElementPair_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ValueElementPair_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ValueElementPair_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ValueElementPair_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  PasswordForm_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PasswordForm_Data));
      new (data()) PasswordForm_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PasswordForm_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PasswordForm_Data>(index_);
    }
    PasswordForm_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t scheme;
  uint8_t username_marked_by_site : 1;
  uint8_t form_has_autofilled_value : 1;
  uint8_t password_value_is_default : 1;
  uint8_t new_password_value_is_default : 1;
  uint8_t new_password_marked_by_site : 1;
  uint8_t preferred : 1;
  uint8_t blacklisted_by_user : 1;
  uint8_t skip_zero_click : 1;
  uint8_t was_parsed_using_autofill_predictions : 1;
  uint8_t is_public_suffix_match : 1;
  uint8_t is_affiliation_based_match : 1;
  uint8_t only_for_fallback_saving : 1;
  uint8_t pad12_[2];
  mojo::internal::Pointer<mojo::internal::String_Data> signon_realm;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> origin_with_path;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> action;
  mojo::internal::Pointer<mojo::internal::String_Data> affiliated_web_realm;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> submit_element;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> username_element;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> username_value;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::ValueElementPair_Data>>> other_possible_usernames;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::ValueElementPair_Data>>> all_possible_passwords;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> password_element;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> password_value;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> new_password_element;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> new_password_value;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> confirmation_password_element;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> date_created;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> date_synced;
  int32_t type;
  int32_t times_used;
  mojo::internal::Pointer<internal::FormData_Data> form_data;
  int32_t generation_upload_status;
  int32_t layout;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> display_name;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> icon_url;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> federation_origin;
  int32_t submission_event;
  uint8_t padfinal_[4];

 private:
  PasswordForm_Data();
  ~PasswordForm_Data() = delete;
};
static_assert(sizeof(PasswordForm_Data) == 200,
              "Bad sizeof(PasswordForm_Data)");
// Used by PasswordForm::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PasswordForm_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PasswordForm_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PasswordForm_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PasswordForm_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PasswordForm_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  PasswordFormFieldPredictionMap_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PasswordFormFieldPredictionMap_Data));
      new (data()) PasswordFormFieldPredictionMap_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PasswordFormFieldPredictionMap_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PasswordFormFieldPredictionMap_Data>(index_);
    }
    PasswordFormFieldPredictionMap_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::FormFieldData_Data>>> keys;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> values;

 private:
  PasswordFormFieldPredictionMap_Data();
  ~PasswordFormFieldPredictionMap_Data() = delete;
};
static_assert(sizeof(PasswordFormFieldPredictionMap_Data) == 24,
              "Bad sizeof(PasswordFormFieldPredictionMap_Data)");
// Used by PasswordFormFieldPredictionMap::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PasswordFormFieldPredictionMap_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PasswordFormFieldPredictionMap_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PasswordFormFieldPredictionMap_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PasswordFormFieldPredictionMap_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PasswordFormFieldPredictionMap_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  FormsPredictionsMap_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FormsPredictionsMap_Data));
      new (data()) FormsPredictionsMap_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FormsPredictionsMap_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FormsPredictionsMap_Data>(index_);
    }
    FormsPredictionsMap_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::FormData_Data>>> keys;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::PasswordFormFieldPredictionMap_Data>>> values;

 private:
  FormsPredictionsMap_Data();
  ~FormsPredictionsMap_Data() = delete;
};
static_assert(sizeof(FormsPredictionsMap_Data) == 24,
              "Bad sizeof(FormsPredictionsMap_Data)");
// Used by FormsPredictionsMap::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct FormsPredictionsMap_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  FormsPredictionsMap_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~FormsPredictionsMap_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    FormsPredictionsMap_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    FormsPredictionsMap_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace autofill

#endif  // COMPONENTS_AUTOFILL_CONTENT_COMMON_AUTOFILL_TYPES_MOJOM_SHARED_INTERNAL_H_