// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJO_BUFFER_TYPES_MOJOM_SHARED_INTERNAL_H_
#define UI_GFX_MOJO_BUFFER_TYPES_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace gfx {
namespace mojom {
namespace internal {
class BufferUsageAndFormat_Data;
class GpuMemoryBufferId_Data;
class NativePixmapPlane_Data;
class NativePixmapHandle_Data;
class GpuMemoryBufferHandle_Data;

struct BufferFormat_Data {
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
      case 11:
      case 12:
      case 13:
      case 14:
      case 15:
      case 16:
      case 17:
      case 18:
      case 19:
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

struct BufferUsage_Data {
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

struct GpuMemoryBufferType_Data {
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

#pragma pack(push, 1)
class  BufferUsageAndFormat_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BufferUsageAndFormat_Data));
      new (data()) BufferUsageAndFormat_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BufferUsageAndFormat_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BufferUsageAndFormat_Data>(index_);
    }
    BufferUsageAndFormat_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t usage;
  int32_t format;

 private:
  BufferUsageAndFormat_Data();
  ~BufferUsageAndFormat_Data() = delete;
};
static_assert(sizeof(BufferUsageAndFormat_Data) == 16,
              "Bad sizeof(BufferUsageAndFormat_Data)");
// Used by BufferUsageAndFormat::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct BufferUsageAndFormat_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  BufferUsageAndFormat_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~BufferUsageAndFormat_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    BufferUsageAndFormat_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    BufferUsageAndFormat_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  GpuMemoryBufferId_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuMemoryBufferId_Data));
      new (data()) GpuMemoryBufferId_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuMemoryBufferId_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuMemoryBufferId_Data>(index_);
    }
    GpuMemoryBufferId_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t id;
  uint8_t padfinal_[4];

 private:
  GpuMemoryBufferId_Data();
  ~GpuMemoryBufferId_Data() = delete;
};
static_assert(sizeof(GpuMemoryBufferId_Data) == 16,
              "Bad sizeof(GpuMemoryBufferId_Data)");
// Used by GpuMemoryBufferId::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct GpuMemoryBufferId_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  GpuMemoryBufferId_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~GpuMemoryBufferId_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    GpuMemoryBufferId_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    GpuMemoryBufferId_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  NativePixmapPlane_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativePixmapPlane_Data));
      new (data()) NativePixmapPlane_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativePixmapPlane_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativePixmapPlane_Data>(index_);
    }
    NativePixmapPlane_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t stride;
  int32_t offset;
  uint64_t size;
  uint64_t modifier;

 private:
  NativePixmapPlane_Data();
  ~NativePixmapPlane_Data() = delete;
};
static_assert(sizeof(NativePixmapPlane_Data) == 32,
              "Bad sizeof(NativePixmapPlane_Data)");
// Used by NativePixmapPlane::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct NativePixmapPlane_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  NativePixmapPlane_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~NativePixmapPlane_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    NativePixmapPlane_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    NativePixmapPlane_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  NativePixmapHandle_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativePixmapHandle_Data));
      new (data()) NativePixmapHandle_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativePixmapHandle_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativePixmapHandle_Data>(index_);
    }
    NativePixmapHandle_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Handle_Data>> fds;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::NativePixmapPlane_Data>>> planes;

 private:
  NativePixmapHandle_Data();
  ~NativePixmapHandle_Data() = delete;
};
static_assert(sizeof(NativePixmapHandle_Data) == 24,
              "Bad sizeof(NativePixmapHandle_Data)");
// Used by NativePixmapHandle::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct NativePixmapHandle_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  NativePixmapHandle_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~NativePixmapHandle_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    NativePixmapHandle_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    NativePixmapHandle_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  GpuMemoryBufferHandle_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuMemoryBufferHandle_Data));
      new (data()) GpuMemoryBufferHandle_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuMemoryBufferHandle_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuMemoryBufferHandle_Data>(index_);
    }
    GpuMemoryBufferHandle_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  mojo::internal::Handle_Data shared_memory_handle;
  mojo::internal::Pointer<internal::GpuMemoryBufferId_Data> id;
  uint32_t offset;
  uint32_t stride;
  mojo::internal::Pointer<internal::NativePixmapHandle_Data> native_pixmap_handle;
  mojo::internal::Handle_Data mach_port;
  uint8_t padfinal_[4];

 private:
  GpuMemoryBufferHandle_Data();
  ~GpuMemoryBufferHandle_Data() = delete;
};
static_assert(sizeof(GpuMemoryBufferHandle_Data) == 48,
              "Bad sizeof(GpuMemoryBufferHandle_Data)");
// Used by GpuMemoryBufferHandle::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct GpuMemoryBufferHandle_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  GpuMemoryBufferHandle_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~GpuMemoryBufferHandle_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    GpuMemoryBufferHandle_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    GpuMemoryBufferHandle_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace gfx

#endif  // UI_GFX_MOJO_BUFFER_TYPES_MOJOM_SHARED_INTERNAL_H_