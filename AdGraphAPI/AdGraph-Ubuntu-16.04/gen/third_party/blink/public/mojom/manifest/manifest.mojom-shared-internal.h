// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "services/device/public/mojom/screen_orientation_lock_types.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/manifest/display_mode.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
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
class Manifest_Data;
class ManifestIcon_Data;
class ManifestRelatedApplication_Data;
class ManifestShareTarget_Data;
class ManifestDebugInfo_Data;
class ManifestError_Data;

struct ManifestIcon_Purpose_Data {
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

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Manifest_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Manifest_Data));
      new (data()) Manifest_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Manifest_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Manifest_Data>(index_);
    }
    Manifest_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> name;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> short_name;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> start_url;
  int32_t display;
  int32_t orientation;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::ManifestIcon_Data>>> icons;
  mojo::internal::Pointer<internal::ManifestShareTarget_Data> share_target;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::ManifestRelatedApplication_Data>>> related_applications;
  uint8_t prefer_related_applications : 1;
  uint8_t has_theme_color : 1;
  uint8_t has_background_color : 1;
  uint8_t pad10_[3];
  uint32_t theme_color;
  uint32_t background_color;
  uint8_t pad12_[4];
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> splash_screen_url;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> gcm_sender_id;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> scope;

 private:
  Manifest_Data();
  ~Manifest_Data() = delete;
};
static_assert(sizeof(Manifest_Data) == 104,
              "Bad sizeof(Manifest_Data)");
// Used by Manifest::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Manifest_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Manifest_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Manifest_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Manifest_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Manifest_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ManifestIcon_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ManifestIcon_Data));
      new (data()) ManifestIcon_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ManifestIcon_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ManifestIcon_Data>(index_);
    }
    ManifestIcon_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> src;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> type;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::gfx::mojom::internal::Size_Data>>> sizes;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> purpose;

 private:
  ManifestIcon_Data();
  ~ManifestIcon_Data() = delete;
};
static_assert(sizeof(ManifestIcon_Data) == 40,
              "Bad sizeof(ManifestIcon_Data)");
// Used by ManifestIcon::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ManifestIcon_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ManifestIcon_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ManifestIcon_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ManifestIcon_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ManifestIcon_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ManifestRelatedApplication_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ManifestRelatedApplication_Data));
      new (data()) ManifestRelatedApplication_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ManifestRelatedApplication_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ManifestRelatedApplication_Data>(index_);
    }
    ManifestRelatedApplication_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> platform;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> id;

 private:
  ManifestRelatedApplication_Data();
  ~ManifestRelatedApplication_Data() = delete;
};
static_assert(sizeof(ManifestRelatedApplication_Data) == 32,
              "Bad sizeof(ManifestRelatedApplication_Data)");
// Used by ManifestRelatedApplication::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ManifestRelatedApplication_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ManifestRelatedApplication_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ManifestRelatedApplication_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ManifestRelatedApplication_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ManifestRelatedApplication_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ManifestShareTarget_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ManifestShareTarget_Data));
      new (data()) ManifestShareTarget_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ManifestShareTarget_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ManifestShareTarget_Data>(index_);
    }
    ManifestShareTarget_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url_template;

 private:
  ManifestShareTarget_Data();
  ~ManifestShareTarget_Data() = delete;
};
static_assert(sizeof(ManifestShareTarget_Data) == 16,
              "Bad sizeof(ManifestShareTarget_Data)");
// Used by ManifestShareTarget::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ManifestShareTarget_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ManifestShareTarget_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ManifestShareTarget_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ManifestShareTarget_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ManifestShareTarget_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ManifestDebugInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ManifestDebugInfo_Data));
      new (data()) ManifestDebugInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ManifestDebugInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ManifestDebugInfo_Data>(index_);
    }
    ManifestDebugInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::ManifestError_Data>>> errors;
  mojo::internal::Pointer<mojo::internal::String_Data> raw_manifest;

 private:
  ManifestDebugInfo_Data();
  ~ManifestDebugInfo_Data() = delete;
};
static_assert(sizeof(ManifestDebugInfo_Data) == 24,
              "Bad sizeof(ManifestDebugInfo_Data)");
// Used by ManifestDebugInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ManifestDebugInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ManifestDebugInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ManifestDebugInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ManifestDebugInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ManifestDebugInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ManifestError_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ManifestError_Data));
      new (data()) ManifestError_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ManifestError_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ManifestError_Data>(index_);
    }
    ManifestError_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> message;
  uint8_t critical : 1;
  uint8_t pad1_[3];
  uint32_t line;
  uint32_t column;
  uint8_t padfinal_[4];

 private:
  ManifestError_Data();
  ~ManifestError_Data() = delete;
};
static_assert(sizeof(ManifestError_Data) == 32,
              "Bad sizeof(ManifestError_Data)");
// Used by ManifestError::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ManifestError_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ManifestError_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ManifestError_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ManifestError_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ManifestError_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MOJOM_SHARED_INTERNAL_H_