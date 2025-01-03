// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_AUTOFILL_CONTENT_COMMON_AUTOFILL_AGENT_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_AUTOFILL_CONTENT_COMMON_AUTOFILL_AGENT_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "components/autofill/content/common/autofill_types.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
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

#pragma pack(push, 1)
class  AutofillAgent_FillForm_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AutofillAgent_FillForm_Params_Data));
      new (data()) AutofillAgent_FillForm_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AutofillAgent_FillForm_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AutofillAgent_FillForm_Params_Data>(index_);
    }
    AutofillAgent_FillForm_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t id;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::autofill::mojom::internal::FormData_Data> form;

 private:
  AutofillAgent_FillForm_Params_Data();
  ~AutofillAgent_FillForm_Params_Data() = delete;
};
static_assert(sizeof(AutofillAgent_FillForm_Params_Data) == 24,
              "Bad sizeof(AutofillAgent_FillForm_Params_Data)");
class  AutofillAgent_PreviewForm_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AutofillAgent_PreviewForm_Params_Data));
      new (data()) AutofillAgent_PreviewForm_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AutofillAgent_PreviewForm_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AutofillAgent_PreviewForm_Params_Data>(index_);
    }
    AutofillAgent_PreviewForm_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t id;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::autofill::mojom::internal::FormData_Data> form;

 private:
  AutofillAgent_PreviewForm_Params_Data();
  ~AutofillAgent_PreviewForm_Params_Data() = delete;
};
static_assert(sizeof(AutofillAgent_PreviewForm_Params_Data) == 24,
              "Bad sizeof(AutofillAgent_PreviewForm_Params_Data)");
class  AutofillAgent_FieldTypePredictionsAvailable_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AutofillAgent_FieldTypePredictionsAvailable_Params_Data));
      new (data()) AutofillAgent_FieldTypePredictionsAvailable_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AutofillAgent_FieldTypePredictionsAvailable_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AutofillAgent_FieldTypePredictionsAvailable_Params_Data>(index_);
    }
    AutofillAgent_FieldTypePredictionsAvailable_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::autofill::mojom::internal::FormDataPredictions_Data>>> forms;

 private:
  AutofillAgent_FieldTypePredictionsAvailable_Params_Data();
  ~AutofillAgent_FieldTypePredictionsAvailable_Params_Data() = delete;
};
static_assert(sizeof(AutofillAgent_FieldTypePredictionsAvailable_Params_Data) == 16,
              "Bad sizeof(AutofillAgent_FieldTypePredictionsAvailable_Params_Data)");
class  AutofillAgent_ClearSection_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AutofillAgent_ClearSection_Params_Data));
      new (data()) AutofillAgent_ClearSection_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AutofillAgent_ClearSection_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AutofillAgent_ClearSection_Params_Data>(index_);
    }
    AutofillAgent_ClearSection_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AutofillAgent_ClearSection_Params_Data();
  ~AutofillAgent_ClearSection_Params_Data() = delete;
};
static_assert(sizeof(AutofillAgent_ClearSection_Params_Data) == 8,
              "Bad sizeof(AutofillAgent_ClearSection_Params_Data)");
class  AutofillAgent_ClearPreviewedForm_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AutofillAgent_ClearPreviewedForm_Params_Data));
      new (data()) AutofillAgent_ClearPreviewedForm_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AutofillAgent_ClearPreviewedForm_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AutofillAgent_ClearPreviewedForm_Params_Data>(index_);
    }
    AutofillAgent_ClearPreviewedForm_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AutofillAgent_ClearPreviewedForm_Params_Data();
  ~AutofillAgent_ClearPreviewedForm_Params_Data() = delete;
};
static_assert(sizeof(AutofillAgent_ClearPreviewedForm_Params_Data) == 8,
              "Bad sizeof(AutofillAgent_ClearPreviewedForm_Params_Data)");
class  AutofillAgent_FillFieldWithValue_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AutofillAgent_FillFieldWithValue_Params_Data));
      new (data()) AutofillAgent_FillFieldWithValue_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AutofillAgent_FillFieldWithValue_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AutofillAgent_FillFieldWithValue_Params_Data>(index_);
    }
    AutofillAgent_FillFieldWithValue_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> value;

 private:
  AutofillAgent_FillFieldWithValue_Params_Data();
  ~AutofillAgent_FillFieldWithValue_Params_Data() = delete;
};
static_assert(sizeof(AutofillAgent_FillFieldWithValue_Params_Data) == 16,
              "Bad sizeof(AutofillAgent_FillFieldWithValue_Params_Data)");
class  AutofillAgent_PreviewFieldWithValue_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AutofillAgent_PreviewFieldWithValue_Params_Data));
      new (data()) AutofillAgent_PreviewFieldWithValue_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AutofillAgent_PreviewFieldWithValue_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AutofillAgent_PreviewFieldWithValue_Params_Data>(index_);
    }
    AutofillAgent_PreviewFieldWithValue_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> value;

 private:
  AutofillAgent_PreviewFieldWithValue_Params_Data();
  ~AutofillAgent_PreviewFieldWithValue_Params_Data() = delete;
};
static_assert(sizeof(AutofillAgent_PreviewFieldWithValue_Params_Data) == 16,
              "Bad sizeof(AutofillAgent_PreviewFieldWithValue_Params_Data)");
class  AutofillAgent_AcceptDataListSuggestion_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AutofillAgent_AcceptDataListSuggestion_Params_Data));
      new (data()) AutofillAgent_AcceptDataListSuggestion_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AutofillAgent_AcceptDataListSuggestion_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AutofillAgent_AcceptDataListSuggestion_Params_Data>(index_);
    }
    AutofillAgent_AcceptDataListSuggestion_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> value;

 private:
  AutofillAgent_AcceptDataListSuggestion_Params_Data();
  ~AutofillAgent_AcceptDataListSuggestion_Params_Data() = delete;
};
static_assert(sizeof(AutofillAgent_AcceptDataListSuggestion_Params_Data) == 16,
              "Bad sizeof(AutofillAgent_AcceptDataListSuggestion_Params_Data)");
class  AutofillAgent_FillPasswordSuggestion_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AutofillAgent_FillPasswordSuggestion_Params_Data));
      new (data()) AutofillAgent_FillPasswordSuggestion_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AutofillAgent_FillPasswordSuggestion_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AutofillAgent_FillPasswordSuggestion_Params_Data>(index_);
    }
    AutofillAgent_FillPasswordSuggestion_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> username;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> password;

 private:
  AutofillAgent_FillPasswordSuggestion_Params_Data();
  ~AutofillAgent_FillPasswordSuggestion_Params_Data() = delete;
};
static_assert(sizeof(AutofillAgent_FillPasswordSuggestion_Params_Data) == 24,
              "Bad sizeof(AutofillAgent_FillPasswordSuggestion_Params_Data)");
class  AutofillAgent_PreviewPasswordSuggestion_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AutofillAgent_PreviewPasswordSuggestion_Params_Data));
      new (data()) AutofillAgent_PreviewPasswordSuggestion_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AutofillAgent_PreviewPasswordSuggestion_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AutofillAgent_PreviewPasswordSuggestion_Params_Data>(index_);
    }
    AutofillAgent_PreviewPasswordSuggestion_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> username;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> password;

 private:
  AutofillAgent_PreviewPasswordSuggestion_Params_Data();
  ~AutofillAgent_PreviewPasswordSuggestion_Params_Data() = delete;
};
static_assert(sizeof(AutofillAgent_PreviewPasswordSuggestion_Params_Data) == 24,
              "Bad sizeof(AutofillAgent_PreviewPasswordSuggestion_Params_Data)");
class  AutofillAgent_ShowInitialPasswordAccountSuggestions_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AutofillAgent_ShowInitialPasswordAccountSuggestions_Params_Data));
      new (data()) AutofillAgent_ShowInitialPasswordAccountSuggestions_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AutofillAgent_ShowInitialPasswordAccountSuggestions_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AutofillAgent_ShowInitialPasswordAccountSuggestions_Params_Data>(index_);
    }
    AutofillAgent_ShowInitialPasswordAccountSuggestions_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t key;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::autofill::mojom::internal::PasswordFormFillData_Data> form_data;

 private:
  AutofillAgent_ShowInitialPasswordAccountSuggestions_Params_Data();
  ~AutofillAgent_ShowInitialPasswordAccountSuggestions_Params_Data() = delete;
};
static_assert(sizeof(AutofillAgent_ShowInitialPasswordAccountSuggestions_Params_Data) == 24,
              "Bad sizeof(AutofillAgent_ShowInitialPasswordAccountSuggestions_Params_Data)");
class  AutofillAgent_SetUserGestureRequired_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AutofillAgent_SetUserGestureRequired_Params_Data));
      new (data()) AutofillAgent_SetUserGestureRequired_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AutofillAgent_SetUserGestureRequired_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AutofillAgent_SetUserGestureRequired_Params_Data>(index_);
    }
    AutofillAgent_SetUserGestureRequired_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t required : 1;
  uint8_t padfinal_[7];

 private:
  AutofillAgent_SetUserGestureRequired_Params_Data();
  ~AutofillAgent_SetUserGestureRequired_Params_Data() = delete;
};
static_assert(sizeof(AutofillAgent_SetUserGestureRequired_Params_Data) == 16,
              "Bad sizeof(AutofillAgent_SetUserGestureRequired_Params_Data)");
class  AutofillAgent_SetSecureContextRequired_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AutofillAgent_SetSecureContextRequired_Params_Data));
      new (data()) AutofillAgent_SetSecureContextRequired_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AutofillAgent_SetSecureContextRequired_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AutofillAgent_SetSecureContextRequired_Params_Data>(index_);
    }
    AutofillAgent_SetSecureContextRequired_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t required : 1;
  uint8_t padfinal_[7];

 private:
  AutofillAgent_SetSecureContextRequired_Params_Data();
  ~AutofillAgent_SetSecureContextRequired_Params_Data() = delete;
};
static_assert(sizeof(AutofillAgent_SetSecureContextRequired_Params_Data) == 16,
              "Bad sizeof(AutofillAgent_SetSecureContextRequired_Params_Data)");
class  AutofillAgent_SetFocusRequiresScroll_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AutofillAgent_SetFocusRequiresScroll_Params_Data));
      new (data()) AutofillAgent_SetFocusRequiresScroll_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AutofillAgent_SetFocusRequiresScroll_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AutofillAgent_SetFocusRequiresScroll_Params_Data>(index_);
    }
    AutofillAgent_SetFocusRequiresScroll_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t require : 1;
  uint8_t padfinal_[7];

 private:
  AutofillAgent_SetFocusRequiresScroll_Params_Data();
  ~AutofillAgent_SetFocusRequiresScroll_Params_Data() = delete;
};
static_assert(sizeof(AutofillAgent_SetFocusRequiresScroll_Params_Data) == 16,
              "Bad sizeof(AutofillAgent_SetFocusRequiresScroll_Params_Data)");
class  AutofillAgent_SetQueryPasswordSuggestion_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AutofillAgent_SetQueryPasswordSuggestion_Params_Data));
      new (data()) AutofillAgent_SetQueryPasswordSuggestion_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AutofillAgent_SetQueryPasswordSuggestion_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AutofillAgent_SetQueryPasswordSuggestion_Params_Data>(index_);
    }
    AutofillAgent_SetQueryPasswordSuggestion_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t query : 1;
  uint8_t padfinal_[7];

 private:
  AutofillAgent_SetQueryPasswordSuggestion_Params_Data();
  ~AutofillAgent_SetQueryPasswordSuggestion_Params_Data() = delete;
};
static_assert(sizeof(AutofillAgent_SetQueryPasswordSuggestion_Params_Data) == 16,
              "Bad sizeof(AutofillAgent_SetQueryPasswordSuggestion_Params_Data)");
class  PasswordAutofillAgent_FillPasswordForm_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PasswordAutofillAgent_FillPasswordForm_Params_Data));
      new (data()) PasswordAutofillAgent_FillPasswordForm_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PasswordAutofillAgent_FillPasswordForm_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PasswordAutofillAgent_FillPasswordForm_Params_Data>(index_);
    }
    PasswordAutofillAgent_FillPasswordForm_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t key;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::autofill::mojom::internal::PasswordFormFillData_Data> form_data;

 private:
  PasswordAutofillAgent_FillPasswordForm_Params_Data();
  ~PasswordAutofillAgent_FillPasswordForm_Params_Data() = delete;
};
static_assert(sizeof(PasswordAutofillAgent_FillPasswordForm_Params_Data) == 24,
              "Bad sizeof(PasswordAutofillAgent_FillPasswordForm_Params_Data)");
class  PasswordAutofillAgent_SetLoggingState_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PasswordAutofillAgent_SetLoggingState_Params_Data));
      new (data()) PasswordAutofillAgent_SetLoggingState_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PasswordAutofillAgent_SetLoggingState_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PasswordAutofillAgent_SetLoggingState_Params_Data>(index_);
    }
    PasswordAutofillAgent_SetLoggingState_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t active : 1;
  uint8_t padfinal_[7];

 private:
  PasswordAutofillAgent_SetLoggingState_Params_Data();
  ~PasswordAutofillAgent_SetLoggingState_Params_Data() = delete;
};
static_assert(sizeof(PasswordAutofillAgent_SetLoggingState_Params_Data) == 16,
              "Bad sizeof(PasswordAutofillAgent_SetLoggingState_Params_Data)");
class  PasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Params_Data));
      new (data()) PasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Params_Data>(index_);
    }
    PasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::autofill::mojom::internal::FormsPredictionsMap_Data> predictions;

 private:
  PasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Params_Data();
  ~PasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Params_Data() = delete;
};
static_assert(sizeof(PasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Params_Data) == 16,
              "Bad sizeof(PasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Params_Data)");
class  PasswordAutofillAgent_FindFocusedPasswordForm_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PasswordAutofillAgent_FindFocusedPasswordForm_Params_Data));
      new (data()) PasswordAutofillAgent_FindFocusedPasswordForm_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PasswordAutofillAgent_FindFocusedPasswordForm_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PasswordAutofillAgent_FindFocusedPasswordForm_Params_Data>(index_);
    }
    PasswordAutofillAgent_FindFocusedPasswordForm_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PasswordAutofillAgent_FindFocusedPasswordForm_Params_Data();
  ~PasswordAutofillAgent_FindFocusedPasswordForm_Params_Data() = delete;
};
static_assert(sizeof(PasswordAutofillAgent_FindFocusedPasswordForm_Params_Data) == 8,
              "Bad sizeof(PasswordAutofillAgent_FindFocusedPasswordForm_Params_Data)");
class  PasswordAutofillAgent_FindFocusedPasswordForm_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PasswordAutofillAgent_FindFocusedPasswordForm_ResponseParams_Data));
      new (data()) PasswordAutofillAgent_FindFocusedPasswordForm_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PasswordAutofillAgent_FindFocusedPasswordForm_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PasswordAutofillAgent_FindFocusedPasswordForm_ResponseParams_Data>(index_);
    }
    PasswordAutofillAgent_FindFocusedPasswordForm_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::autofill::mojom::internal::PasswordForm_Data> form;

 private:
  PasswordAutofillAgent_FindFocusedPasswordForm_ResponseParams_Data();
  ~PasswordAutofillAgent_FindFocusedPasswordForm_ResponseParams_Data() = delete;
};
static_assert(sizeof(PasswordAutofillAgent_FindFocusedPasswordForm_ResponseParams_Data) == 16,
              "Bad sizeof(PasswordAutofillAgent_FindFocusedPasswordForm_ResponseParams_Data)");
class  PasswordAutofillAgent_BlacklistedFormFound_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PasswordAutofillAgent_BlacklistedFormFound_Params_Data));
      new (data()) PasswordAutofillAgent_BlacklistedFormFound_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PasswordAutofillAgent_BlacklistedFormFound_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PasswordAutofillAgent_BlacklistedFormFound_Params_Data>(index_);
    }
    PasswordAutofillAgent_BlacklistedFormFound_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PasswordAutofillAgent_BlacklistedFormFound_Params_Data();
  ~PasswordAutofillAgent_BlacklistedFormFound_Params_Data() = delete;
};
static_assert(sizeof(PasswordAutofillAgent_BlacklistedFormFound_Params_Data) == 8,
              "Bad sizeof(PasswordAutofillAgent_BlacklistedFormFound_Params_Data)");
class  PasswordGenerationAgent_GeneratedPasswordAccepted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PasswordGenerationAgent_GeneratedPasswordAccepted_Params_Data));
      new (data()) PasswordGenerationAgent_GeneratedPasswordAccepted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PasswordGenerationAgent_GeneratedPasswordAccepted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PasswordGenerationAgent_GeneratedPasswordAccepted_Params_Data>(index_);
    }
    PasswordGenerationAgent_GeneratedPasswordAccepted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> generated_password;

 private:
  PasswordGenerationAgent_GeneratedPasswordAccepted_Params_Data();
  ~PasswordGenerationAgent_GeneratedPasswordAccepted_Params_Data() = delete;
};
static_assert(sizeof(PasswordGenerationAgent_GeneratedPasswordAccepted_Params_Data) == 16,
              "Bad sizeof(PasswordGenerationAgent_GeneratedPasswordAccepted_Params_Data)");
class  PasswordGenerationAgent_UserTriggeredGeneratePassword_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PasswordGenerationAgent_UserTriggeredGeneratePassword_Params_Data));
      new (data()) PasswordGenerationAgent_UserTriggeredGeneratePassword_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PasswordGenerationAgent_UserTriggeredGeneratePassword_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PasswordGenerationAgent_UserTriggeredGeneratePassword_Params_Data>(index_);
    }
    PasswordGenerationAgent_UserTriggeredGeneratePassword_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PasswordGenerationAgent_UserTriggeredGeneratePassword_Params_Data();
  ~PasswordGenerationAgent_UserTriggeredGeneratePassword_Params_Data() = delete;
};
static_assert(sizeof(PasswordGenerationAgent_UserTriggeredGeneratePassword_Params_Data) == 8,
              "Bad sizeof(PasswordGenerationAgent_UserTriggeredGeneratePassword_Params_Data)");
class  PasswordGenerationAgent_UserSelectedManualGenerationOption_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PasswordGenerationAgent_UserSelectedManualGenerationOption_Params_Data));
      new (data()) PasswordGenerationAgent_UserSelectedManualGenerationOption_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PasswordGenerationAgent_UserSelectedManualGenerationOption_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PasswordGenerationAgent_UserSelectedManualGenerationOption_Params_Data>(index_);
    }
    PasswordGenerationAgent_UserSelectedManualGenerationOption_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PasswordGenerationAgent_UserSelectedManualGenerationOption_Params_Data();
  ~PasswordGenerationAgent_UserSelectedManualGenerationOption_Params_Data() = delete;
};
static_assert(sizeof(PasswordGenerationAgent_UserSelectedManualGenerationOption_Params_Data) == 8,
              "Bad sizeof(PasswordGenerationAgent_UserSelectedManualGenerationOption_Params_Data)");
class  PasswordGenerationAgent_FormNotBlacklisted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PasswordGenerationAgent_FormNotBlacklisted_Params_Data));
      new (data()) PasswordGenerationAgent_FormNotBlacklisted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PasswordGenerationAgent_FormNotBlacklisted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PasswordGenerationAgent_FormNotBlacklisted_Params_Data>(index_);
    }
    PasswordGenerationAgent_FormNotBlacklisted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::autofill::mojom::internal::PasswordForm_Data> form;

 private:
  PasswordGenerationAgent_FormNotBlacklisted_Params_Data();
  ~PasswordGenerationAgent_FormNotBlacklisted_Params_Data() = delete;
};
static_assert(sizeof(PasswordGenerationAgent_FormNotBlacklisted_Params_Data) == 16,
              "Bad sizeof(PasswordGenerationAgent_FormNotBlacklisted_Params_Data)");
class  PasswordGenerationAgent_FoundFormsEligibleForGeneration_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PasswordGenerationAgent_FoundFormsEligibleForGeneration_Params_Data));
      new (data()) PasswordGenerationAgent_FoundFormsEligibleForGeneration_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PasswordGenerationAgent_FoundFormsEligibleForGeneration_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PasswordGenerationAgent_FoundFormsEligibleForGeneration_Params_Data>(index_);
    }
    PasswordGenerationAgent_FoundFormsEligibleForGeneration_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::autofill::mojom::internal::PasswordFormGenerationData_Data>>> forms;

 private:
  PasswordGenerationAgent_FoundFormsEligibleForGeneration_Params_Data();
  ~PasswordGenerationAgent_FoundFormsEligibleForGeneration_Params_Data() = delete;
};
static_assert(sizeof(PasswordGenerationAgent_FoundFormsEligibleForGeneration_Params_Data) == 16,
              "Bad sizeof(PasswordGenerationAgent_FoundFormsEligibleForGeneration_Params_Data)");
class  PasswordGenerationAgent_AllowToRunFormClassifier_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PasswordGenerationAgent_AllowToRunFormClassifier_Params_Data));
      new (data()) PasswordGenerationAgent_AllowToRunFormClassifier_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PasswordGenerationAgent_AllowToRunFormClassifier_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PasswordGenerationAgent_AllowToRunFormClassifier_Params_Data>(index_);
    }
    PasswordGenerationAgent_AllowToRunFormClassifier_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PasswordGenerationAgent_AllowToRunFormClassifier_Params_Data();
  ~PasswordGenerationAgent_AllowToRunFormClassifier_Params_Data() = delete;
};
static_assert(sizeof(PasswordGenerationAgent_AllowToRunFormClassifier_Params_Data) == 8,
              "Bad sizeof(PasswordGenerationAgent_AllowToRunFormClassifier_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace autofill

#endif  // COMPONENTS_AUTOFILL_CONTENT_COMMON_AUTOFILL_AGENT_MOJOM_SHARED_INTERNAL_H_