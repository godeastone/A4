// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_TYPES_MOJOM_SHARED_INTERNAL_H_
#define MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_TYPES_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "gpu/ipc/common/mailbox_holder.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "mojo/public/mojom/base/values.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace media {
namespace mojom {
namespace internal {
class VideoCaptureFormat_Data;
class VideoCaptureParams_Data;
class VideoFrameInfo_Data;
class VideoCaptureDeviceDescriptorCameraCalibration_Data;
class VideoCaptureDeviceDescriptor_Data;
class VideoCaptureDeviceInfo_Data;
class MailboxBufferHandleSet_Data;
class VideoBufferHandle_Data;

struct VideoCapturePixelFormat_Data {
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

struct ResolutionChangePolicy_Data {
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

struct PowerLineFrequency_Data {
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

struct VideoCaptureApi_Data {
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

struct VideoCaptureTransportType_Data {
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


class  VideoBufferHandle_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  VideoBufferHandle_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~VideoBufferHandle_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoBufferHandle_Data));
      new (data()) VideoBufferHandle_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) VideoBufferHandle_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoBufferHandle_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoBufferHandle_Data>(index_);
    }
    VideoBufferHandle_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context,
                       bool inlined);

  bool is_null() const { return size == 0; }

  void set_null() {
    size = 0U;
    tag = static_cast<VideoBufferHandle_Tag>(0);
    data.unknown = 0U;
  }

  enum class VideoBufferHandle_Tag : uint32_t {

    SHARED_BUFFER_HANDLE,
    MAILBOX_HANDLES,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    mojo::internal::Handle_Data f_shared_buffer_handle;
    mojo::internal::Pointer<internal::MailboxBufferHandleSet_Data> f_mailbox_handles;
    uint64_t unknown;
  };

  uint32_t size;
  VideoBufferHandle_Tag tag;
  Union_ data;
};
static_assert(sizeof(VideoBufferHandle_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(VideoBufferHandle_Data)");
class  VideoCaptureFormat_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoCaptureFormat_Data));
      new (data()) VideoCaptureFormat_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoCaptureFormat_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoCaptureFormat_Data>(index_);
    }
    VideoCaptureFormat_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> frame_size;
  float frame_rate;
  int32_t pixel_format;

 private:
  VideoCaptureFormat_Data();
  ~VideoCaptureFormat_Data() = delete;
};
static_assert(sizeof(VideoCaptureFormat_Data) == 24,
              "Bad sizeof(VideoCaptureFormat_Data)");
// Used by VideoCaptureFormat::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VideoCaptureFormat_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VideoCaptureFormat_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VideoCaptureFormat_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VideoCaptureFormat_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VideoCaptureFormat_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  VideoCaptureParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoCaptureParams_Data));
      new (data()) VideoCaptureParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoCaptureParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoCaptureParams_Data>(index_);
    }
    VideoCaptureParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::VideoCaptureFormat_Data> requested_format;
  int32_t resolution_change_policy;
  int32_t power_line_frequency;

 private:
  VideoCaptureParams_Data();
  ~VideoCaptureParams_Data() = delete;
};
static_assert(sizeof(VideoCaptureParams_Data) == 24,
              "Bad sizeof(VideoCaptureParams_Data)");
// Used by VideoCaptureParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VideoCaptureParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VideoCaptureParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VideoCaptureParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VideoCaptureParams_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VideoCaptureParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  VideoFrameInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoFrameInfo_Data));
      new (data()) VideoFrameInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoFrameInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoFrameInfo_Data>(index_);
    }
    VideoFrameInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> timestamp;
  mojo::internal::Pointer<::mojo_base::mojom::internal::DictionaryValue_Data> metadata;
  int32_t pixel_format;
  uint8_t pad2_[4];
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> coded_size;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> visible_rect;

 private:
  VideoFrameInfo_Data();
  ~VideoFrameInfo_Data() = delete;
};
static_assert(sizeof(VideoFrameInfo_Data) == 48,
              "Bad sizeof(VideoFrameInfo_Data)");
// Used by VideoFrameInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VideoFrameInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VideoFrameInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VideoFrameInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VideoFrameInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VideoFrameInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  VideoCaptureDeviceDescriptorCameraCalibration_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoCaptureDeviceDescriptorCameraCalibration_Data));
      new (data()) VideoCaptureDeviceDescriptorCameraCalibration_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoCaptureDeviceDescriptorCameraCalibration_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoCaptureDeviceDescriptorCameraCalibration_Data>(index_);
    }
    VideoCaptureDeviceDescriptorCameraCalibration_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  double focal_length_x;
  double focal_length_y;
  double depth_near;
  double depth_far;

 private:
  VideoCaptureDeviceDescriptorCameraCalibration_Data();
  ~VideoCaptureDeviceDescriptorCameraCalibration_Data() = delete;
};
static_assert(sizeof(VideoCaptureDeviceDescriptorCameraCalibration_Data) == 40,
              "Bad sizeof(VideoCaptureDeviceDescriptorCameraCalibration_Data)");
// Used by VideoCaptureDeviceDescriptorCameraCalibration::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VideoCaptureDeviceDescriptorCameraCalibration_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VideoCaptureDeviceDescriptorCameraCalibration_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VideoCaptureDeviceDescriptorCameraCalibration_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VideoCaptureDeviceDescriptorCameraCalibration_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VideoCaptureDeviceDescriptorCameraCalibration_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  VideoCaptureDeviceDescriptor_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoCaptureDeviceDescriptor_Data));
      new (data()) VideoCaptureDeviceDescriptor_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoCaptureDeviceDescriptor_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoCaptureDeviceDescriptor_Data>(index_);
    }
    VideoCaptureDeviceDescriptor_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> display_name;
  mojo::internal::Pointer<mojo::internal::String_Data> device_id;
  mojo::internal::Pointer<mojo::internal::String_Data> model_id;
  int32_t capture_api;
  int32_t transport_type;
  mojo::internal::Pointer<internal::VideoCaptureDeviceDescriptorCameraCalibration_Data> camera_calibration;

 private:
  VideoCaptureDeviceDescriptor_Data();
  ~VideoCaptureDeviceDescriptor_Data() = delete;
};
static_assert(sizeof(VideoCaptureDeviceDescriptor_Data) == 48,
              "Bad sizeof(VideoCaptureDeviceDescriptor_Data)");
// Used by VideoCaptureDeviceDescriptor::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VideoCaptureDeviceDescriptor_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VideoCaptureDeviceDescriptor_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VideoCaptureDeviceDescriptor_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VideoCaptureDeviceDescriptor_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VideoCaptureDeviceDescriptor_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  VideoCaptureDeviceInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoCaptureDeviceInfo_Data));
      new (data()) VideoCaptureDeviceInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoCaptureDeviceInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoCaptureDeviceInfo_Data>(index_);
    }
    VideoCaptureDeviceInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::VideoCaptureDeviceDescriptor_Data> descriptor;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::VideoCaptureFormat_Data>>> supported_formats;

 private:
  VideoCaptureDeviceInfo_Data();
  ~VideoCaptureDeviceInfo_Data() = delete;
};
static_assert(sizeof(VideoCaptureDeviceInfo_Data) == 24,
              "Bad sizeof(VideoCaptureDeviceInfo_Data)");
// Used by VideoCaptureDeviceInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VideoCaptureDeviceInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VideoCaptureDeviceInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VideoCaptureDeviceInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VideoCaptureDeviceInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VideoCaptureDeviceInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  MailboxBufferHandleSet_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MailboxBufferHandleSet_Data));
      new (data()) MailboxBufferHandleSet_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MailboxBufferHandleSet_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MailboxBufferHandleSet_Data>(index_);
    }
    MailboxBufferHandleSet_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::gpu::mojom::internal::MailboxHolder_Data>>> mailbox_holder;

 private:
  MailboxBufferHandleSet_Data();
  ~MailboxBufferHandleSet_Data() = delete;
};
static_assert(sizeof(MailboxBufferHandleSet_Data) == 16,
              "Bad sizeof(MailboxBufferHandleSet_Data)");
// Used by MailboxBufferHandleSet::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct MailboxBufferHandleSet_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  MailboxBufferHandleSet_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~MailboxBufferHandleSet_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    MailboxBufferHandleSet_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    MailboxBufferHandleSet_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_TYPES_MOJOM_SHARED_INTERNAL_H_