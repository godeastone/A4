// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_COLOR_CHOOSER_COLOR_CHOOSER_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_COLOR_CHOOSER_COLOR_CHOOSER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace blink {
namespace mojom {
namespace internal {
class ColorSuggestion_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ColorSuggestion_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ColorSuggestion_Data));
      new (data()) ColorSuggestion_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ColorSuggestion_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ColorSuggestion_Data>(index_);
    }
    ColorSuggestion_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t color;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> label;

 private:
  ColorSuggestion_Data();
  ~ColorSuggestion_Data() = delete;
};
static_assert(sizeof(ColorSuggestion_Data) == 24,
              "Bad sizeof(ColorSuggestion_Data)");
// Used by ColorSuggestion::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ColorSuggestion_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ColorSuggestion_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ColorSuggestion_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ColorSuggestion_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ColorSuggestion_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ColorChooserFactory_OpenColorChooser_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ColorChooserFactory_OpenColorChooser_Params_Data));
      new (data()) ColorChooserFactory_OpenColorChooser_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ColorChooserFactory_OpenColorChooser_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ColorChooserFactory_OpenColorChooser_Params_Data>(index_);
    }
    ColorChooserFactory_OpenColorChooser_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data chooser;
  mojo::internal::Interface_Data client;
  uint32_t color;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::ColorSuggestion_Data>>> suggestions;

 private:
  ColorChooserFactory_OpenColorChooser_Params_Data();
  ~ColorChooserFactory_OpenColorChooser_Params_Data() = delete;
};
static_assert(sizeof(ColorChooserFactory_OpenColorChooser_Params_Data) == 32,
              "Bad sizeof(ColorChooserFactory_OpenColorChooser_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ColorChooser_SetSelectedColor_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ColorChooser_SetSelectedColor_Params_Data));
      new (data()) ColorChooser_SetSelectedColor_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ColorChooser_SetSelectedColor_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ColorChooser_SetSelectedColor_Params_Data>(index_);
    }
    ColorChooser_SetSelectedColor_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t color;
  uint8_t padfinal_[4];

 private:
  ColorChooser_SetSelectedColor_Params_Data();
  ~ColorChooser_SetSelectedColor_Params_Data() = delete;
};
static_assert(sizeof(ColorChooser_SetSelectedColor_Params_Data) == 16,
              "Bad sizeof(ColorChooser_SetSelectedColor_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ColorChooserClient_DidChooseColor_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ColorChooserClient_DidChooseColor_Params_Data));
      new (data()) ColorChooserClient_DidChooseColor_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ColorChooserClient_DidChooseColor_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ColorChooserClient_DidChooseColor_Params_Data>(index_);
    }
    ColorChooserClient_DidChooseColor_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t color;
  uint8_t padfinal_[4];

 private:
  ColorChooserClient_DidChooseColor_Params_Data();
  ~ColorChooserClient_DidChooseColor_Params_Data() = delete;
};
static_assert(sizeof(ColorChooserClient_DidChooseColor_Params_Data) == 16,
              "Bad sizeof(ColorChooserClient_DidChooseColor_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_COLOR_CHOOSER_COLOR_CHOOSER_MOJOM_SHARED_INTERNAL_H_