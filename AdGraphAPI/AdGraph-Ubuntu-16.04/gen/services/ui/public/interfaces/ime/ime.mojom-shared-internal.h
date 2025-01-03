// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_IME_IME_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_UI_PUBLIC_INTERFACES_IME_IME_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/text_direction.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
#include "ui/events/mojo/event.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "ui/gfx/range/mojo/range.mojom-shared-internal.h"
#include "ui/platform_window/mojo/text_input_state.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace ui {
namespace mojom {
namespace internal {
class CandidateWindowProperties_Data;
class CandidateWindowEntry_Data;
class ImeTextSpan_Data;
class CompositionText_Data;
class StartSessionDetails_Data;

struct CandidateWindowPosition_Data {
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

struct ImeTextSpanType_Data {
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

struct ImeTextSpanThickness_Data {
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

struct TextInputMode_Data {
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

#pragma pack(push, 1)
class  CandidateWindowProperties_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CandidateWindowProperties_Data));
      new (data()) CandidateWindowProperties_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CandidateWindowProperties_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CandidateWindowProperties_Data>(index_);
    }
    CandidateWindowProperties_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t page_size;
  uint8_t vertical : 1;
  uint8_t auxiliary_text_visible : 1;
  uint8_t cursor_visible : 1;
  uint8_t pad3_[3];
  mojo::internal::Pointer<mojo::internal::String_Data> auxiliary_text;
  int32_t cursor_position;
  int32_t window_position;

 private:
  CandidateWindowProperties_Data();
  ~CandidateWindowProperties_Data() = delete;
};
static_assert(sizeof(CandidateWindowProperties_Data) == 32,
              "Bad sizeof(CandidateWindowProperties_Data)");
// Used by CandidateWindowProperties::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CandidateWindowProperties_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CandidateWindowProperties_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CandidateWindowProperties_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CandidateWindowProperties_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CandidateWindowProperties_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  CandidateWindowEntry_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CandidateWindowEntry_Data));
      new (data()) CandidateWindowEntry_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CandidateWindowEntry_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CandidateWindowEntry_Data>(index_);
    }
    CandidateWindowEntry_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> value;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> label;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> annotation;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> description_title;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> description_body;

 private:
  CandidateWindowEntry_Data();
  ~CandidateWindowEntry_Data() = delete;
};
static_assert(sizeof(CandidateWindowEntry_Data) == 48,
              "Bad sizeof(CandidateWindowEntry_Data)");
// Used by CandidateWindowEntry::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CandidateWindowEntry_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CandidateWindowEntry_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CandidateWindowEntry_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CandidateWindowEntry_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CandidateWindowEntry_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  ImeTextSpan_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ImeTextSpan_Data));
      new (data()) ImeTextSpan_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ImeTextSpan_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ImeTextSpan_Data>(index_);
    }
    ImeTextSpan_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  uint32_t start_offset;
  uint32_t end_offset;
  uint32_t underline_color;
  int32_t thickness;
  uint32_t background_color;
  uint32_t suggestion_highlight_color;
  uint8_t pad6_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> suggestions;

 private:
  ImeTextSpan_Data();
  ~ImeTextSpan_Data() = delete;
};
static_assert(sizeof(ImeTextSpan_Data) == 48,
              "Bad sizeof(ImeTextSpan_Data)");
// Used by ImeTextSpan::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ImeTextSpan_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ImeTextSpan_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ImeTextSpan_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ImeTextSpan_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ImeTextSpan_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  CompositionText_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CompositionText_Data));
      new (data()) CompositionText_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CompositionText_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CompositionText_Data>(index_);
    }
    CompositionText_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> text;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::ImeTextSpan_Data>>> ime_text_spans;
  mojo::internal::Pointer<::gfx::mojom::internal::Range_Data> selection;

 private:
  CompositionText_Data();
  ~CompositionText_Data() = delete;
};
static_assert(sizeof(CompositionText_Data) == 32,
              "Bad sizeof(CompositionText_Data)");
// Used by CompositionText::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CompositionText_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CompositionText_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CompositionText_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CompositionText_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CompositionText_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  StartSessionDetails_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StartSessionDetails_Data));
      new (data()) StartSessionDetails_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StartSessionDetails_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StartSessionDetails_Data>(index_);
    }
    StartSessionDetails_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data client;
  mojo::internal::Handle_Data input_method_request;
  int32_t text_input_type;
  int32_t text_input_mode;
  int32_t text_direction;
  int32_t text_input_flags;
  uint8_t pad5_[4];
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> caret_bounds;

 private:
  StartSessionDetails_Data();
  ~StartSessionDetails_Data() = delete;
};
static_assert(sizeof(StartSessionDetails_Data) == 48,
              "Bad sizeof(StartSessionDetails_Data)");
// Used by StartSessionDetails::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct StartSessionDetails_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  StartSessionDetails_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~StartSessionDetails_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    StartSessionDetails_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    StartSessionDetails_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  IMEDriver_StartSession_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IMEDriver_StartSession_Params_Data));
      new (data()) IMEDriver_StartSession_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IMEDriver_StartSession_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IMEDriver_StartSession_Params_Data>(index_);
    }
    IMEDriver_StartSession_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::StartSessionDetails_Data> details;

 private:
  IMEDriver_StartSession_Params_Data();
  ~IMEDriver_StartSession_Params_Data() = delete;
};
static_assert(sizeof(IMEDriver_StartSession_Params_Data) == 16,
              "Bad sizeof(IMEDriver_StartSession_Params_Data)");
class  IMERegistrar_RegisterDriver_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IMERegistrar_RegisterDriver_Params_Data));
      new (data()) IMERegistrar_RegisterDriver_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IMERegistrar_RegisterDriver_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IMERegistrar_RegisterDriver_Params_Data>(index_);
    }
    IMERegistrar_RegisterDriver_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data driver;

 private:
  IMERegistrar_RegisterDriver_Params_Data();
  ~IMERegistrar_RegisterDriver_Params_Data() = delete;
};
static_assert(sizeof(IMERegistrar_RegisterDriver_Params_Data) == 16,
              "Bad sizeof(IMERegistrar_RegisterDriver_Params_Data)");
class  InputMethod_OnTextInputTypeChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputMethod_OnTextInputTypeChanged_Params_Data));
      new (data()) InputMethod_OnTextInputTypeChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputMethod_OnTextInputTypeChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputMethod_OnTextInputTypeChanged_Params_Data>(index_);
    }
    InputMethod_OnTextInputTypeChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t text_input_type;
  uint8_t padfinal_[4];

 private:
  InputMethod_OnTextInputTypeChanged_Params_Data();
  ~InputMethod_OnTextInputTypeChanged_Params_Data() = delete;
};
static_assert(sizeof(InputMethod_OnTextInputTypeChanged_Params_Data) == 16,
              "Bad sizeof(InputMethod_OnTextInputTypeChanged_Params_Data)");
class  InputMethod_OnCaretBoundsChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputMethod_OnCaretBoundsChanged_Params_Data));
      new (data()) InputMethod_OnCaretBoundsChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputMethod_OnCaretBoundsChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputMethod_OnCaretBoundsChanged_Params_Data>(index_);
    }
    InputMethod_OnCaretBoundsChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> caret_bounds;

 private:
  InputMethod_OnCaretBoundsChanged_Params_Data();
  ~InputMethod_OnCaretBoundsChanged_Params_Data() = delete;
};
static_assert(sizeof(InputMethod_OnCaretBoundsChanged_Params_Data) == 16,
              "Bad sizeof(InputMethod_OnCaretBoundsChanged_Params_Data)");
class  InputMethod_ProcessKeyEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputMethod_ProcessKeyEvent_Params_Data));
      new (data()) InputMethod_ProcessKeyEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputMethod_ProcessKeyEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputMethod_ProcessKeyEvent_Params_Data>(index_);
    }
    InputMethod_ProcessKeyEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::ui::mojom::internal::Event_Data> key_event;

 private:
  InputMethod_ProcessKeyEvent_Params_Data();
  ~InputMethod_ProcessKeyEvent_Params_Data() = delete;
};
static_assert(sizeof(InputMethod_ProcessKeyEvent_Params_Data) == 16,
              "Bad sizeof(InputMethod_ProcessKeyEvent_Params_Data)");
class  InputMethod_ProcessKeyEvent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputMethod_ProcessKeyEvent_ResponseParams_Data));
      new (data()) InputMethod_ProcessKeyEvent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputMethod_ProcessKeyEvent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputMethod_ProcessKeyEvent_ResponseParams_Data>(index_);
    }
    InputMethod_ProcessKeyEvent_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t handled : 1;
  uint8_t padfinal_[7];

 private:
  InputMethod_ProcessKeyEvent_ResponseParams_Data();
  ~InputMethod_ProcessKeyEvent_ResponseParams_Data() = delete;
};
static_assert(sizeof(InputMethod_ProcessKeyEvent_ResponseParams_Data) == 16,
              "Bad sizeof(InputMethod_ProcessKeyEvent_ResponseParams_Data)");
class  InputMethod_CancelComposition_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputMethod_CancelComposition_Params_Data));
      new (data()) InputMethod_CancelComposition_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputMethod_CancelComposition_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputMethod_CancelComposition_Params_Data>(index_);
    }
    InputMethod_CancelComposition_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  InputMethod_CancelComposition_Params_Data();
  ~InputMethod_CancelComposition_Params_Data() = delete;
};
static_assert(sizeof(InputMethod_CancelComposition_Params_Data) == 8,
              "Bad sizeof(InputMethod_CancelComposition_Params_Data)");
class  TextInputClient_SetCompositionText_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextInputClient_SetCompositionText_Params_Data));
      new (data()) TextInputClient_SetCompositionText_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextInputClient_SetCompositionText_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextInputClient_SetCompositionText_Params_Data>(index_);
    }
    TextInputClient_SetCompositionText_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CompositionText_Data> composition;

 private:
  TextInputClient_SetCompositionText_Params_Data();
  ~TextInputClient_SetCompositionText_Params_Data() = delete;
};
static_assert(sizeof(TextInputClient_SetCompositionText_Params_Data) == 16,
              "Bad sizeof(TextInputClient_SetCompositionText_Params_Data)");
class  TextInputClient_ConfirmCompositionText_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextInputClient_ConfirmCompositionText_Params_Data));
      new (data()) TextInputClient_ConfirmCompositionText_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextInputClient_ConfirmCompositionText_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextInputClient_ConfirmCompositionText_Params_Data>(index_);
    }
    TextInputClient_ConfirmCompositionText_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  TextInputClient_ConfirmCompositionText_Params_Data();
  ~TextInputClient_ConfirmCompositionText_Params_Data() = delete;
};
static_assert(sizeof(TextInputClient_ConfirmCompositionText_Params_Data) == 8,
              "Bad sizeof(TextInputClient_ConfirmCompositionText_Params_Data)");
class  TextInputClient_ClearCompositionText_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextInputClient_ClearCompositionText_Params_Data));
      new (data()) TextInputClient_ClearCompositionText_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextInputClient_ClearCompositionText_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextInputClient_ClearCompositionText_Params_Data>(index_);
    }
    TextInputClient_ClearCompositionText_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  TextInputClient_ClearCompositionText_Params_Data();
  ~TextInputClient_ClearCompositionText_Params_Data() = delete;
};
static_assert(sizeof(TextInputClient_ClearCompositionText_Params_Data) == 8,
              "Bad sizeof(TextInputClient_ClearCompositionText_Params_Data)");
class  TextInputClient_InsertText_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextInputClient_InsertText_Params_Data));
      new (data()) TextInputClient_InsertText_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextInputClient_InsertText_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextInputClient_InsertText_Params_Data>(index_);
    }
    TextInputClient_InsertText_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> text;

 private:
  TextInputClient_InsertText_Params_Data();
  ~TextInputClient_InsertText_Params_Data() = delete;
};
static_assert(sizeof(TextInputClient_InsertText_Params_Data) == 16,
              "Bad sizeof(TextInputClient_InsertText_Params_Data)");
class  TextInputClient_InsertChar_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextInputClient_InsertChar_Params_Data));
      new (data()) TextInputClient_InsertChar_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextInputClient_InsertChar_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextInputClient_InsertChar_Params_Data>(index_);
    }
    TextInputClient_InsertChar_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::ui::mojom::internal::Event_Data> event;

 private:
  TextInputClient_InsertChar_Params_Data();
  ~TextInputClient_InsertChar_Params_Data() = delete;
};
static_assert(sizeof(TextInputClient_InsertChar_Params_Data) == 16,
              "Bad sizeof(TextInputClient_InsertChar_Params_Data)");
class  TextInputClient_DispatchKeyEventPostIME_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextInputClient_DispatchKeyEventPostIME_Params_Data));
      new (data()) TextInputClient_DispatchKeyEventPostIME_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextInputClient_DispatchKeyEventPostIME_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextInputClient_DispatchKeyEventPostIME_Params_Data>(index_);
    }
    TextInputClient_DispatchKeyEventPostIME_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::ui::mojom::internal::Event_Data> event;

 private:
  TextInputClient_DispatchKeyEventPostIME_Params_Data();
  ~TextInputClient_DispatchKeyEventPostIME_Params_Data() = delete;
};
static_assert(sizeof(TextInputClient_DispatchKeyEventPostIME_Params_Data) == 16,
              "Bad sizeof(TextInputClient_DispatchKeyEventPostIME_Params_Data)");
class  TextInputClient_DispatchKeyEventPostIME_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextInputClient_DispatchKeyEventPostIME_ResponseParams_Data));
      new (data()) TextInputClient_DispatchKeyEventPostIME_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextInputClient_DispatchKeyEventPostIME_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextInputClient_DispatchKeyEventPostIME_ResponseParams_Data>(index_);
    }
    TextInputClient_DispatchKeyEventPostIME_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t stopped_propagation : 1;
  uint8_t padfinal_[7];

 private:
  TextInputClient_DispatchKeyEventPostIME_ResponseParams_Data();
  ~TextInputClient_DispatchKeyEventPostIME_ResponseParams_Data() = delete;
};
static_assert(sizeof(TextInputClient_DispatchKeyEventPostIME_ResponseParams_Data) == 16,
              "Bad sizeof(TextInputClient_DispatchKeyEventPostIME_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_IME_IME_MOJOM_SHARED_INTERNAL_H_