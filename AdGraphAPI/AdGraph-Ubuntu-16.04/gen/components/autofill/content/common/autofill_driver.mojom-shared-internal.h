// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_AUTOFILL_CONTENT_COMMON_AUTOFILL_DRIVER_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_AUTOFILL_CONTENT_COMMON_AUTOFILL_DRIVER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "components/autofill/content/common/autofill_types.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
#include "mojo/public/mojom/base/text_direction.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
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

#pragma pack(push, 1)
class  AutofillDriver_FormsSeen_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AutofillDriver_FormsSeen_Params_Data));
      new (data()) AutofillDriver_FormsSeen_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AutofillDriver_FormsSeen_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AutofillDriver_FormsSeen_Params_Data>(index_);
    }
    AutofillDriver_FormsSeen_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::autofill::mojom::internal::FormData_Data>>> forms;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> timestamp;

 private:
  AutofillDriver_FormsSeen_Params_Data();
  ~AutofillDriver_FormsSeen_Params_Data() = delete;
};
static_assert(sizeof(AutofillDriver_FormsSeen_Params_Data) == 24,
              "Bad sizeof(AutofillDriver_FormsSeen_Params_Data)");
class  AutofillDriver_FormSubmitted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AutofillDriver_FormSubmitted_Params_Data));
      new (data()) AutofillDriver_FormSubmitted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AutofillDriver_FormSubmitted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AutofillDriver_FormSubmitted_Params_Data>(index_);
    }
    AutofillDriver_FormSubmitted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::autofill::mojom::internal::FormData_Data> form;
  uint8_t known_success : 1;
  uint8_t pad1_[3];
  int32_t source;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> timestamp;

 private:
  AutofillDriver_FormSubmitted_Params_Data();
  ~AutofillDriver_FormSubmitted_Params_Data() = delete;
};
static_assert(sizeof(AutofillDriver_FormSubmitted_Params_Data) == 32,
              "Bad sizeof(AutofillDriver_FormSubmitted_Params_Data)");
class  AutofillDriver_TextFieldDidChange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AutofillDriver_TextFieldDidChange_Params_Data));
      new (data()) AutofillDriver_TextFieldDidChange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AutofillDriver_TextFieldDidChange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AutofillDriver_TextFieldDidChange_Params_Data>(index_);
    }
    AutofillDriver_TextFieldDidChange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::autofill::mojom::internal::FormData_Data> form;
  mojo::internal::Pointer<::autofill::mojom::internal::FormFieldData_Data> field;
  mojo::internal::Pointer<::gfx::mojom::internal::RectF_Data> bounding_box;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> timestamp;

 private:
  AutofillDriver_TextFieldDidChange_Params_Data();
  ~AutofillDriver_TextFieldDidChange_Params_Data() = delete;
};
static_assert(sizeof(AutofillDriver_TextFieldDidChange_Params_Data) == 40,
              "Bad sizeof(AutofillDriver_TextFieldDidChange_Params_Data)");
class  AutofillDriver_TextFieldDidScroll_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AutofillDriver_TextFieldDidScroll_Params_Data));
      new (data()) AutofillDriver_TextFieldDidScroll_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AutofillDriver_TextFieldDidScroll_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AutofillDriver_TextFieldDidScroll_Params_Data>(index_);
    }
    AutofillDriver_TextFieldDidScroll_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::autofill::mojom::internal::FormData_Data> form;
  mojo::internal::Pointer<::autofill::mojom::internal::FormFieldData_Data> field;
  mojo::internal::Pointer<::gfx::mojom::internal::RectF_Data> bounding_box;

 private:
  AutofillDriver_TextFieldDidScroll_Params_Data();
  ~AutofillDriver_TextFieldDidScroll_Params_Data() = delete;
};
static_assert(sizeof(AutofillDriver_TextFieldDidScroll_Params_Data) == 32,
              "Bad sizeof(AutofillDriver_TextFieldDidScroll_Params_Data)");
class  AutofillDriver_SelectControlDidChange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AutofillDriver_SelectControlDidChange_Params_Data));
      new (data()) AutofillDriver_SelectControlDidChange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AutofillDriver_SelectControlDidChange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AutofillDriver_SelectControlDidChange_Params_Data>(index_);
    }
    AutofillDriver_SelectControlDidChange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::autofill::mojom::internal::FormData_Data> form;
  mojo::internal::Pointer<::autofill::mojom::internal::FormFieldData_Data> field;
  mojo::internal::Pointer<::gfx::mojom::internal::RectF_Data> bounding_box;

 private:
  AutofillDriver_SelectControlDidChange_Params_Data();
  ~AutofillDriver_SelectControlDidChange_Params_Data() = delete;
};
static_assert(sizeof(AutofillDriver_SelectControlDidChange_Params_Data) == 32,
              "Bad sizeof(AutofillDriver_SelectControlDidChange_Params_Data)");
class  AutofillDriver_SelectFieldOptionsDidChange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AutofillDriver_SelectFieldOptionsDidChange_Params_Data));
      new (data()) AutofillDriver_SelectFieldOptionsDidChange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AutofillDriver_SelectFieldOptionsDidChange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AutofillDriver_SelectFieldOptionsDidChange_Params_Data>(index_);
    }
    AutofillDriver_SelectFieldOptionsDidChange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::autofill::mojom::internal::FormData_Data> form;

 private:
  AutofillDriver_SelectFieldOptionsDidChange_Params_Data();
  ~AutofillDriver_SelectFieldOptionsDidChange_Params_Data() = delete;
};
static_assert(sizeof(AutofillDriver_SelectFieldOptionsDidChange_Params_Data) == 16,
              "Bad sizeof(AutofillDriver_SelectFieldOptionsDidChange_Params_Data)");
class  AutofillDriver_QueryFormFieldAutofill_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AutofillDriver_QueryFormFieldAutofill_Params_Data));
      new (data()) AutofillDriver_QueryFormFieldAutofill_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AutofillDriver_QueryFormFieldAutofill_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AutofillDriver_QueryFormFieldAutofill_Params_Data>(index_);
    }
    AutofillDriver_QueryFormFieldAutofill_Params_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::autofill::mojom::internal::FormFieldData_Data> field;
  mojo::internal::Pointer<::gfx::mojom::internal::RectF_Data> bounding_box;

 private:
  AutofillDriver_QueryFormFieldAutofill_Params_Data();
  ~AutofillDriver_QueryFormFieldAutofill_Params_Data() = delete;
};
static_assert(sizeof(AutofillDriver_QueryFormFieldAutofill_Params_Data) == 40,
              "Bad sizeof(AutofillDriver_QueryFormFieldAutofill_Params_Data)");
class  AutofillDriver_HidePopup_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AutofillDriver_HidePopup_Params_Data));
      new (data()) AutofillDriver_HidePopup_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AutofillDriver_HidePopup_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AutofillDriver_HidePopup_Params_Data>(index_);
    }
    AutofillDriver_HidePopup_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AutofillDriver_HidePopup_Params_Data();
  ~AutofillDriver_HidePopup_Params_Data() = delete;
};
static_assert(sizeof(AutofillDriver_HidePopup_Params_Data) == 8,
              "Bad sizeof(AutofillDriver_HidePopup_Params_Data)");
class  AutofillDriver_FocusNoLongerOnForm_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AutofillDriver_FocusNoLongerOnForm_Params_Data));
      new (data()) AutofillDriver_FocusNoLongerOnForm_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AutofillDriver_FocusNoLongerOnForm_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AutofillDriver_FocusNoLongerOnForm_Params_Data>(index_);
    }
    AutofillDriver_FocusNoLongerOnForm_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AutofillDriver_FocusNoLongerOnForm_Params_Data();
  ~AutofillDriver_FocusNoLongerOnForm_Params_Data() = delete;
};
static_assert(sizeof(AutofillDriver_FocusNoLongerOnForm_Params_Data) == 8,
              "Bad sizeof(AutofillDriver_FocusNoLongerOnForm_Params_Data)");
class  AutofillDriver_FocusOnFormField_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AutofillDriver_FocusOnFormField_Params_Data));
      new (data()) AutofillDriver_FocusOnFormField_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AutofillDriver_FocusOnFormField_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AutofillDriver_FocusOnFormField_Params_Data>(index_);
    }
    AutofillDriver_FocusOnFormField_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::autofill::mojom::internal::FormData_Data> form;
  mojo::internal::Pointer<::autofill::mojom::internal::FormFieldData_Data> field;
  mojo::internal::Pointer<::gfx::mojom::internal::RectF_Data> bounding_box;

 private:
  AutofillDriver_FocusOnFormField_Params_Data();
  ~AutofillDriver_FocusOnFormField_Params_Data() = delete;
};
static_assert(sizeof(AutofillDriver_FocusOnFormField_Params_Data) == 32,
              "Bad sizeof(AutofillDriver_FocusOnFormField_Params_Data)");
class  AutofillDriver_DidFillAutofillFormData_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AutofillDriver_DidFillAutofillFormData_Params_Data));
      new (data()) AutofillDriver_DidFillAutofillFormData_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AutofillDriver_DidFillAutofillFormData_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AutofillDriver_DidFillAutofillFormData_Params_Data>(index_);
    }
    AutofillDriver_DidFillAutofillFormData_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::autofill::mojom::internal::FormData_Data> form;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> timestamp;

 private:
  AutofillDriver_DidFillAutofillFormData_Params_Data();
  ~AutofillDriver_DidFillAutofillFormData_Params_Data() = delete;
};
static_assert(sizeof(AutofillDriver_DidFillAutofillFormData_Params_Data) == 24,
              "Bad sizeof(AutofillDriver_DidFillAutofillFormData_Params_Data)");
class  AutofillDriver_DidPreviewAutofillFormData_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AutofillDriver_DidPreviewAutofillFormData_Params_Data));
      new (data()) AutofillDriver_DidPreviewAutofillFormData_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AutofillDriver_DidPreviewAutofillFormData_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AutofillDriver_DidPreviewAutofillFormData_Params_Data>(index_);
    }
    AutofillDriver_DidPreviewAutofillFormData_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AutofillDriver_DidPreviewAutofillFormData_Params_Data();
  ~AutofillDriver_DidPreviewAutofillFormData_Params_Data() = delete;
};
static_assert(sizeof(AutofillDriver_DidPreviewAutofillFormData_Params_Data) == 8,
              "Bad sizeof(AutofillDriver_DidPreviewAutofillFormData_Params_Data)");
class  AutofillDriver_DidEndTextFieldEditing_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AutofillDriver_DidEndTextFieldEditing_Params_Data));
      new (data()) AutofillDriver_DidEndTextFieldEditing_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AutofillDriver_DidEndTextFieldEditing_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AutofillDriver_DidEndTextFieldEditing_Params_Data>(index_);
    }
    AutofillDriver_DidEndTextFieldEditing_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AutofillDriver_DidEndTextFieldEditing_Params_Data();
  ~AutofillDriver_DidEndTextFieldEditing_Params_Data() = delete;
};
static_assert(sizeof(AutofillDriver_DidEndTextFieldEditing_Params_Data) == 8,
              "Bad sizeof(AutofillDriver_DidEndTextFieldEditing_Params_Data)");
class  AutofillDriver_SetDataList_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AutofillDriver_SetDataList_Params_Data));
      new (data()) AutofillDriver_SetDataList_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AutofillDriver_SetDataList_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AutofillDriver_SetDataList_Params_Data>(index_);
    }
    AutofillDriver_SetDataList_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data>>> values;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data>>> labels;

 private:
  AutofillDriver_SetDataList_Params_Data();
  ~AutofillDriver_SetDataList_Params_Data() = delete;
};
static_assert(sizeof(AutofillDriver_SetDataList_Params_Data) == 24,
              "Bad sizeof(AutofillDriver_SetDataList_Params_Data)");
class  PasswordManagerDriver_PasswordFormsParsed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PasswordManagerDriver_PasswordFormsParsed_Params_Data));
      new (data()) PasswordManagerDriver_PasswordFormsParsed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PasswordManagerDriver_PasswordFormsParsed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PasswordManagerDriver_PasswordFormsParsed_Params_Data>(index_);
    }
    PasswordManagerDriver_PasswordFormsParsed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::autofill::mojom::internal::PasswordForm_Data>>> forms;

 private:
  PasswordManagerDriver_PasswordFormsParsed_Params_Data();
  ~PasswordManagerDriver_PasswordFormsParsed_Params_Data() = delete;
};
static_assert(sizeof(PasswordManagerDriver_PasswordFormsParsed_Params_Data) == 16,
              "Bad sizeof(PasswordManagerDriver_PasswordFormsParsed_Params_Data)");
class  PasswordManagerDriver_PasswordFormsRendered_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PasswordManagerDriver_PasswordFormsRendered_Params_Data));
      new (data()) PasswordManagerDriver_PasswordFormsRendered_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PasswordManagerDriver_PasswordFormsRendered_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PasswordManagerDriver_PasswordFormsRendered_Params_Data>(index_);
    }
    PasswordManagerDriver_PasswordFormsRendered_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::autofill::mojom::internal::PasswordForm_Data>>> visible_forms;
  uint8_t did_stop_loading : 1;
  uint8_t padfinal_[7];

 private:
  PasswordManagerDriver_PasswordFormsRendered_Params_Data();
  ~PasswordManagerDriver_PasswordFormsRendered_Params_Data() = delete;
};
static_assert(sizeof(PasswordManagerDriver_PasswordFormsRendered_Params_Data) == 24,
              "Bad sizeof(PasswordManagerDriver_PasswordFormsRendered_Params_Data)");
class  PasswordManagerDriver_PasswordFormSubmitted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PasswordManagerDriver_PasswordFormSubmitted_Params_Data));
      new (data()) PasswordManagerDriver_PasswordFormSubmitted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PasswordManagerDriver_PasswordFormSubmitted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PasswordManagerDriver_PasswordFormSubmitted_Params_Data>(index_);
    }
    PasswordManagerDriver_PasswordFormSubmitted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::autofill::mojom::internal::PasswordForm_Data> password_form;

 private:
  PasswordManagerDriver_PasswordFormSubmitted_Params_Data();
  ~PasswordManagerDriver_PasswordFormSubmitted_Params_Data() = delete;
};
static_assert(sizeof(PasswordManagerDriver_PasswordFormSubmitted_Params_Data) == 16,
              "Bad sizeof(PasswordManagerDriver_PasswordFormSubmitted_Params_Data)");
class  PasswordManagerDriver_ShowManualFallbackForSaving_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PasswordManagerDriver_ShowManualFallbackForSaving_Params_Data));
      new (data()) PasswordManagerDriver_ShowManualFallbackForSaving_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PasswordManagerDriver_ShowManualFallbackForSaving_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PasswordManagerDriver_ShowManualFallbackForSaving_Params_Data>(index_);
    }
    PasswordManagerDriver_ShowManualFallbackForSaving_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::autofill::mojom::internal::PasswordForm_Data> password_form;

 private:
  PasswordManagerDriver_ShowManualFallbackForSaving_Params_Data();
  ~PasswordManagerDriver_ShowManualFallbackForSaving_Params_Data() = delete;
};
static_assert(sizeof(PasswordManagerDriver_ShowManualFallbackForSaving_Params_Data) == 16,
              "Bad sizeof(PasswordManagerDriver_ShowManualFallbackForSaving_Params_Data)");
class  PasswordManagerDriver_HideManualFallbackForSaving_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PasswordManagerDriver_HideManualFallbackForSaving_Params_Data));
      new (data()) PasswordManagerDriver_HideManualFallbackForSaving_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PasswordManagerDriver_HideManualFallbackForSaving_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PasswordManagerDriver_HideManualFallbackForSaving_Params_Data>(index_);
    }
    PasswordManagerDriver_HideManualFallbackForSaving_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PasswordManagerDriver_HideManualFallbackForSaving_Params_Data();
  ~PasswordManagerDriver_HideManualFallbackForSaving_Params_Data() = delete;
};
static_assert(sizeof(PasswordManagerDriver_HideManualFallbackForSaving_Params_Data) == 8,
              "Bad sizeof(PasswordManagerDriver_HideManualFallbackForSaving_Params_Data)");
class  PasswordManagerDriver_SameDocumentNavigation_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PasswordManagerDriver_SameDocumentNavigation_Params_Data));
      new (data()) PasswordManagerDriver_SameDocumentNavigation_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PasswordManagerDriver_SameDocumentNavigation_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PasswordManagerDriver_SameDocumentNavigation_Params_Data>(index_);
    }
    PasswordManagerDriver_SameDocumentNavigation_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::autofill::mojom::internal::PasswordForm_Data> password_form;

 private:
  PasswordManagerDriver_SameDocumentNavigation_Params_Data();
  ~PasswordManagerDriver_SameDocumentNavigation_Params_Data() = delete;
};
static_assert(sizeof(PasswordManagerDriver_SameDocumentNavigation_Params_Data) == 16,
              "Bad sizeof(PasswordManagerDriver_SameDocumentNavigation_Params_Data)");
class  PasswordManagerDriver_RecordSavePasswordProgress_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PasswordManagerDriver_RecordSavePasswordProgress_Params_Data));
      new (data()) PasswordManagerDriver_RecordSavePasswordProgress_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PasswordManagerDriver_RecordSavePasswordProgress_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PasswordManagerDriver_RecordSavePasswordProgress_Params_Data>(index_);
    }
    PasswordManagerDriver_RecordSavePasswordProgress_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> log;

 private:
  PasswordManagerDriver_RecordSavePasswordProgress_Params_Data();
  ~PasswordManagerDriver_RecordSavePasswordProgress_Params_Data() = delete;
};
static_assert(sizeof(PasswordManagerDriver_RecordSavePasswordProgress_Params_Data) == 16,
              "Bad sizeof(PasswordManagerDriver_RecordSavePasswordProgress_Params_Data)");
class  PasswordManagerDriver_UserModifiedPasswordField_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PasswordManagerDriver_UserModifiedPasswordField_Params_Data));
      new (data()) PasswordManagerDriver_UserModifiedPasswordField_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PasswordManagerDriver_UserModifiedPasswordField_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PasswordManagerDriver_UserModifiedPasswordField_Params_Data>(index_);
    }
    PasswordManagerDriver_UserModifiedPasswordField_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PasswordManagerDriver_UserModifiedPasswordField_Params_Data();
  ~PasswordManagerDriver_UserModifiedPasswordField_Params_Data() = delete;
};
static_assert(sizeof(PasswordManagerDriver_UserModifiedPasswordField_Params_Data) == 8,
              "Bad sizeof(PasswordManagerDriver_UserModifiedPasswordField_Params_Data)");
class  PasswordManagerDriver_ShowPasswordSuggestions_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PasswordManagerDriver_ShowPasswordSuggestions_Params_Data));
      new (data()) PasswordManagerDriver_ShowPasswordSuggestions_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PasswordManagerDriver_ShowPasswordSuggestions_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PasswordManagerDriver_ShowPasswordSuggestions_Params_Data>(index_);
    }
    PasswordManagerDriver_ShowPasswordSuggestions_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t key;
  int32_t text_direction;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> typed_username;
  int32_t options;
  uint8_t pad3_[4];
  mojo::internal::Pointer<::gfx::mojom::internal::RectF_Data> bounds;

 private:
  PasswordManagerDriver_ShowPasswordSuggestions_Params_Data();
  ~PasswordManagerDriver_ShowPasswordSuggestions_Params_Data() = delete;
};
static_assert(sizeof(PasswordManagerDriver_ShowPasswordSuggestions_Params_Data) == 40,
              "Bad sizeof(PasswordManagerDriver_ShowPasswordSuggestions_Params_Data)");
class  PasswordManagerDriver_ShowManualFallbackSuggestion_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PasswordManagerDriver_ShowManualFallbackSuggestion_Params_Data));
      new (data()) PasswordManagerDriver_ShowManualFallbackSuggestion_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PasswordManagerDriver_ShowManualFallbackSuggestion_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PasswordManagerDriver_ShowManualFallbackSuggestion_Params_Data>(index_);
    }
    PasswordManagerDriver_ShowManualFallbackSuggestion_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t text_direction;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::gfx::mojom::internal::RectF_Data> bounds;

 private:
  PasswordManagerDriver_ShowManualFallbackSuggestion_Params_Data();
  ~PasswordManagerDriver_ShowManualFallbackSuggestion_Params_Data() = delete;
};
static_assert(sizeof(PasswordManagerDriver_ShowManualFallbackSuggestion_Params_Data) == 24,
              "Bad sizeof(PasswordManagerDriver_ShowManualFallbackSuggestion_Params_Data)");
class  PasswordManagerDriver_PresaveGeneratedPassword_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PasswordManagerDriver_PresaveGeneratedPassword_Params_Data));
      new (data()) PasswordManagerDriver_PresaveGeneratedPassword_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PasswordManagerDriver_PresaveGeneratedPassword_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PasswordManagerDriver_PresaveGeneratedPassword_Params_Data>(index_);
    }
    PasswordManagerDriver_PresaveGeneratedPassword_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::autofill::mojom::internal::PasswordForm_Data> password_form;

 private:
  PasswordManagerDriver_PresaveGeneratedPassword_Params_Data();
  ~PasswordManagerDriver_PresaveGeneratedPassword_Params_Data() = delete;
};
static_assert(sizeof(PasswordManagerDriver_PresaveGeneratedPassword_Params_Data) == 16,
              "Bad sizeof(PasswordManagerDriver_PresaveGeneratedPassword_Params_Data)");
class  PasswordManagerDriver_PasswordNoLongerGenerated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PasswordManagerDriver_PasswordNoLongerGenerated_Params_Data));
      new (data()) PasswordManagerDriver_PasswordNoLongerGenerated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PasswordManagerDriver_PasswordNoLongerGenerated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PasswordManagerDriver_PasswordNoLongerGenerated_Params_Data>(index_);
    }
    PasswordManagerDriver_PasswordNoLongerGenerated_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::autofill::mojom::internal::PasswordForm_Data> password_form;

 private:
  PasswordManagerDriver_PasswordNoLongerGenerated_Params_Data();
  ~PasswordManagerDriver_PasswordNoLongerGenerated_Params_Data() = delete;
};
static_assert(sizeof(PasswordManagerDriver_PasswordNoLongerGenerated_Params_Data) == 16,
              "Bad sizeof(PasswordManagerDriver_PasswordNoLongerGenerated_Params_Data)");
class  PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params_Data));
      new (data()) PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params_Data>(index_);
    }
    PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::autofill::mojom::internal::PasswordForm_Data> password_form;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> generation_field;

 private:
  PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params_Data();
  ~PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params_Data() = delete;
};
static_assert(sizeof(PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params_Data) == 24,
              "Bad sizeof(PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params_Data)");
class  PasswordManagerDriver_CheckSafeBrowsingReputation_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PasswordManagerDriver_CheckSafeBrowsingReputation_Params_Data));
      new (data()) PasswordManagerDriver_CheckSafeBrowsingReputation_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PasswordManagerDriver_CheckSafeBrowsingReputation_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PasswordManagerDriver_CheckSafeBrowsingReputation_Params_Data>(index_);
    }
    PasswordManagerDriver_CheckSafeBrowsingReputation_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> form_action;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> frame_url;

 private:
  PasswordManagerDriver_CheckSafeBrowsingReputation_Params_Data();
  ~PasswordManagerDriver_CheckSafeBrowsingReputation_Params_Data() = delete;
};
static_assert(sizeof(PasswordManagerDriver_CheckSafeBrowsingReputation_Params_Data) == 24,
              "Bad sizeof(PasswordManagerDriver_CheckSafeBrowsingReputation_Params_Data)");
class  PasswordManagerClient_GenerationAvailableForForm_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PasswordManagerClient_GenerationAvailableForForm_Params_Data));
      new (data()) PasswordManagerClient_GenerationAvailableForForm_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PasswordManagerClient_GenerationAvailableForForm_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PasswordManagerClient_GenerationAvailableForForm_Params_Data>(index_);
    }
    PasswordManagerClient_GenerationAvailableForForm_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::autofill::mojom::internal::PasswordForm_Data> password_form;

 private:
  PasswordManagerClient_GenerationAvailableForForm_Params_Data();
  ~PasswordManagerClient_GenerationAvailableForForm_Params_Data() = delete;
};
static_assert(sizeof(PasswordManagerClient_GenerationAvailableForForm_Params_Data) == 16,
              "Bad sizeof(PasswordManagerClient_GenerationAvailableForForm_Params_Data)");
class  PasswordManagerClient_ShowPasswordGenerationPopup_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PasswordManagerClient_ShowPasswordGenerationPopup_Params_Data));
      new (data()) PasswordManagerClient_ShowPasswordGenerationPopup_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PasswordManagerClient_ShowPasswordGenerationPopup_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PasswordManagerClient_ShowPasswordGenerationPopup_Params_Data>(index_);
    }
    PasswordManagerClient_ShowPasswordGenerationPopup_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::RectF_Data> bounds;
  int32_t max_length;
  uint8_t is_manually_triggered : 1;
  uint8_t pad2_[3];
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> generation_element;
  mojo::internal::Pointer<::autofill::mojom::internal::PasswordForm_Data> password_form;

 private:
  PasswordManagerClient_ShowPasswordGenerationPopup_Params_Data();
  ~PasswordManagerClient_ShowPasswordGenerationPopup_Params_Data() = delete;
};
static_assert(sizeof(PasswordManagerClient_ShowPasswordGenerationPopup_Params_Data) == 40,
              "Bad sizeof(PasswordManagerClient_ShowPasswordGenerationPopup_Params_Data)");
class  PasswordManagerClient_ShowPasswordEditingPopup_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PasswordManagerClient_ShowPasswordEditingPopup_Params_Data));
      new (data()) PasswordManagerClient_ShowPasswordEditingPopup_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PasswordManagerClient_ShowPasswordEditingPopup_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PasswordManagerClient_ShowPasswordEditingPopup_Params_Data>(index_);
    }
    PasswordManagerClient_ShowPasswordEditingPopup_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::RectF_Data> bounds;
  mojo::internal::Pointer<::autofill::mojom::internal::PasswordForm_Data> password_form;

 private:
  PasswordManagerClient_ShowPasswordEditingPopup_Params_Data();
  ~PasswordManagerClient_ShowPasswordEditingPopup_Params_Data() = delete;
};
static_assert(sizeof(PasswordManagerClient_ShowPasswordEditingPopup_Params_Data) == 24,
              "Bad sizeof(PasswordManagerClient_ShowPasswordEditingPopup_Params_Data)");
class  PasswordManagerClient_HidePasswordGenerationPopup_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PasswordManagerClient_HidePasswordGenerationPopup_Params_Data));
      new (data()) PasswordManagerClient_HidePasswordGenerationPopup_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PasswordManagerClient_HidePasswordGenerationPopup_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PasswordManagerClient_HidePasswordGenerationPopup_Params_Data>(index_);
    }
    PasswordManagerClient_HidePasswordGenerationPopup_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PasswordManagerClient_HidePasswordGenerationPopup_Params_Data();
  ~PasswordManagerClient_HidePasswordGenerationPopup_Params_Data() = delete;
};
static_assert(sizeof(PasswordManagerClient_HidePasswordGenerationPopup_Params_Data) == 8,
              "Bad sizeof(PasswordManagerClient_HidePasswordGenerationPopup_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace autofill

#endif  // COMPONENTS_AUTOFILL_CONTENT_COMMON_AUTOFILL_DRIVER_MOJOM_SHARED_INTERNAL_H_