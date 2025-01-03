// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_MOJOM_SHARED_INTERNAL_H_
#define MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "media/capture/mojom/video_capture_types.mojom-shared-internal.h"
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

struct VideoCaptureState_Data {
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
class  VideoCaptureObserver_OnStateChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoCaptureObserver_OnStateChanged_Params_Data));
      new (data()) VideoCaptureObserver_OnStateChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoCaptureObserver_OnStateChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoCaptureObserver_OnStateChanged_Params_Data>(index_);
    }
    VideoCaptureObserver_OnStateChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t state;
  uint8_t padfinal_[4];

 private:
  VideoCaptureObserver_OnStateChanged_Params_Data();
  ~VideoCaptureObserver_OnStateChanged_Params_Data() = delete;
};
static_assert(sizeof(VideoCaptureObserver_OnStateChanged_Params_Data) == 16,
              "Bad sizeof(VideoCaptureObserver_OnStateChanged_Params_Data)");
class  VideoCaptureObserver_OnNewBuffer_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoCaptureObserver_OnNewBuffer_Params_Data));
      new (data()) VideoCaptureObserver_OnNewBuffer_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoCaptureObserver_OnNewBuffer_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoCaptureObserver_OnNewBuffer_Params_Data>(index_);
    }
    VideoCaptureObserver_OnNewBuffer_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t buffer_id;
  uint8_t pad0_[4];
  ::media::mojom::internal::VideoBufferHandle_Data buffer_handle;

 private:
  VideoCaptureObserver_OnNewBuffer_Params_Data();
  ~VideoCaptureObserver_OnNewBuffer_Params_Data() = delete;
};
static_assert(sizeof(VideoCaptureObserver_OnNewBuffer_Params_Data) == 32,
              "Bad sizeof(VideoCaptureObserver_OnNewBuffer_Params_Data)");
class  VideoCaptureObserver_OnBufferReady_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoCaptureObserver_OnBufferReady_Params_Data));
      new (data()) VideoCaptureObserver_OnBufferReady_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoCaptureObserver_OnBufferReady_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoCaptureObserver_OnBufferReady_Params_Data>(index_);
    }
    VideoCaptureObserver_OnBufferReady_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t buffer_id;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::media::mojom::internal::VideoFrameInfo_Data> info;

 private:
  VideoCaptureObserver_OnBufferReady_Params_Data();
  ~VideoCaptureObserver_OnBufferReady_Params_Data() = delete;
};
static_assert(sizeof(VideoCaptureObserver_OnBufferReady_Params_Data) == 24,
              "Bad sizeof(VideoCaptureObserver_OnBufferReady_Params_Data)");
class  VideoCaptureObserver_OnBufferDestroyed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoCaptureObserver_OnBufferDestroyed_Params_Data));
      new (data()) VideoCaptureObserver_OnBufferDestroyed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoCaptureObserver_OnBufferDestroyed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoCaptureObserver_OnBufferDestroyed_Params_Data>(index_);
    }
    VideoCaptureObserver_OnBufferDestroyed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t buffer_id;
  uint8_t padfinal_[4];

 private:
  VideoCaptureObserver_OnBufferDestroyed_Params_Data();
  ~VideoCaptureObserver_OnBufferDestroyed_Params_Data() = delete;
};
static_assert(sizeof(VideoCaptureObserver_OnBufferDestroyed_Params_Data) == 16,
              "Bad sizeof(VideoCaptureObserver_OnBufferDestroyed_Params_Data)");
class  VideoCaptureHost_Start_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoCaptureHost_Start_Params_Data));
      new (data()) VideoCaptureHost_Start_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoCaptureHost_Start_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoCaptureHost_Start_Params_Data>(index_);
    }
    VideoCaptureHost_Start_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t device_id;
  int32_t session_id;
  mojo::internal::Pointer<::media::mojom::internal::VideoCaptureParams_Data> params;
  mojo::internal::Interface_Data observer;

 private:
  VideoCaptureHost_Start_Params_Data();
  ~VideoCaptureHost_Start_Params_Data() = delete;
};
static_assert(sizeof(VideoCaptureHost_Start_Params_Data) == 32,
              "Bad sizeof(VideoCaptureHost_Start_Params_Data)");
class  VideoCaptureHost_Stop_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoCaptureHost_Stop_Params_Data));
      new (data()) VideoCaptureHost_Stop_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoCaptureHost_Stop_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoCaptureHost_Stop_Params_Data>(index_);
    }
    VideoCaptureHost_Stop_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t device_id;
  uint8_t padfinal_[4];

 private:
  VideoCaptureHost_Stop_Params_Data();
  ~VideoCaptureHost_Stop_Params_Data() = delete;
};
static_assert(sizeof(VideoCaptureHost_Stop_Params_Data) == 16,
              "Bad sizeof(VideoCaptureHost_Stop_Params_Data)");
class  VideoCaptureHost_Pause_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoCaptureHost_Pause_Params_Data));
      new (data()) VideoCaptureHost_Pause_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoCaptureHost_Pause_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoCaptureHost_Pause_Params_Data>(index_);
    }
    VideoCaptureHost_Pause_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t device_id;
  uint8_t padfinal_[4];

 private:
  VideoCaptureHost_Pause_Params_Data();
  ~VideoCaptureHost_Pause_Params_Data() = delete;
};
static_assert(sizeof(VideoCaptureHost_Pause_Params_Data) == 16,
              "Bad sizeof(VideoCaptureHost_Pause_Params_Data)");
class  VideoCaptureHost_Resume_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoCaptureHost_Resume_Params_Data));
      new (data()) VideoCaptureHost_Resume_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoCaptureHost_Resume_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoCaptureHost_Resume_Params_Data>(index_);
    }
    VideoCaptureHost_Resume_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t device_id;
  int32_t session_id;
  mojo::internal::Pointer<::media::mojom::internal::VideoCaptureParams_Data> params;

 private:
  VideoCaptureHost_Resume_Params_Data();
  ~VideoCaptureHost_Resume_Params_Data() = delete;
};
static_assert(sizeof(VideoCaptureHost_Resume_Params_Data) == 24,
              "Bad sizeof(VideoCaptureHost_Resume_Params_Data)");
class  VideoCaptureHost_RequestRefreshFrame_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoCaptureHost_RequestRefreshFrame_Params_Data));
      new (data()) VideoCaptureHost_RequestRefreshFrame_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoCaptureHost_RequestRefreshFrame_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoCaptureHost_RequestRefreshFrame_Params_Data>(index_);
    }
    VideoCaptureHost_RequestRefreshFrame_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t device_id;
  uint8_t padfinal_[4];

 private:
  VideoCaptureHost_RequestRefreshFrame_Params_Data();
  ~VideoCaptureHost_RequestRefreshFrame_Params_Data() = delete;
};
static_assert(sizeof(VideoCaptureHost_RequestRefreshFrame_Params_Data) == 16,
              "Bad sizeof(VideoCaptureHost_RequestRefreshFrame_Params_Data)");
class  VideoCaptureHost_ReleaseBuffer_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoCaptureHost_ReleaseBuffer_Params_Data));
      new (data()) VideoCaptureHost_ReleaseBuffer_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoCaptureHost_ReleaseBuffer_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoCaptureHost_ReleaseBuffer_Params_Data>(index_);
    }
    VideoCaptureHost_ReleaseBuffer_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t device_id;
  int32_t buffer_id;
  double consumer_resource_utilization;

 private:
  VideoCaptureHost_ReleaseBuffer_Params_Data();
  ~VideoCaptureHost_ReleaseBuffer_Params_Data() = delete;
};
static_assert(sizeof(VideoCaptureHost_ReleaseBuffer_Params_Data) == 24,
              "Bad sizeof(VideoCaptureHost_ReleaseBuffer_Params_Data)");
class  VideoCaptureHost_GetDeviceSupportedFormats_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoCaptureHost_GetDeviceSupportedFormats_Params_Data));
      new (data()) VideoCaptureHost_GetDeviceSupportedFormats_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoCaptureHost_GetDeviceSupportedFormats_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoCaptureHost_GetDeviceSupportedFormats_Params_Data>(index_);
    }
    VideoCaptureHost_GetDeviceSupportedFormats_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t device_id;
  int32_t session_id;

 private:
  VideoCaptureHost_GetDeviceSupportedFormats_Params_Data();
  ~VideoCaptureHost_GetDeviceSupportedFormats_Params_Data() = delete;
};
static_assert(sizeof(VideoCaptureHost_GetDeviceSupportedFormats_Params_Data) == 16,
              "Bad sizeof(VideoCaptureHost_GetDeviceSupportedFormats_Params_Data)");
class  VideoCaptureHost_GetDeviceSupportedFormats_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoCaptureHost_GetDeviceSupportedFormats_ResponseParams_Data));
      new (data()) VideoCaptureHost_GetDeviceSupportedFormats_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoCaptureHost_GetDeviceSupportedFormats_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoCaptureHost_GetDeviceSupportedFormats_ResponseParams_Data>(index_);
    }
    VideoCaptureHost_GetDeviceSupportedFormats_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::media::mojom::internal::VideoCaptureFormat_Data>>> formats_supported;

 private:
  VideoCaptureHost_GetDeviceSupportedFormats_ResponseParams_Data();
  ~VideoCaptureHost_GetDeviceSupportedFormats_ResponseParams_Data() = delete;
};
static_assert(sizeof(VideoCaptureHost_GetDeviceSupportedFormats_ResponseParams_Data) == 16,
              "Bad sizeof(VideoCaptureHost_GetDeviceSupportedFormats_ResponseParams_Data)");
class  VideoCaptureHost_GetDeviceFormatsInUse_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoCaptureHost_GetDeviceFormatsInUse_Params_Data));
      new (data()) VideoCaptureHost_GetDeviceFormatsInUse_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoCaptureHost_GetDeviceFormatsInUse_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoCaptureHost_GetDeviceFormatsInUse_Params_Data>(index_);
    }
    VideoCaptureHost_GetDeviceFormatsInUse_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t device_id;
  int32_t session_id;

 private:
  VideoCaptureHost_GetDeviceFormatsInUse_Params_Data();
  ~VideoCaptureHost_GetDeviceFormatsInUse_Params_Data() = delete;
};
static_assert(sizeof(VideoCaptureHost_GetDeviceFormatsInUse_Params_Data) == 16,
              "Bad sizeof(VideoCaptureHost_GetDeviceFormatsInUse_Params_Data)");
class  VideoCaptureHost_GetDeviceFormatsInUse_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoCaptureHost_GetDeviceFormatsInUse_ResponseParams_Data));
      new (data()) VideoCaptureHost_GetDeviceFormatsInUse_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoCaptureHost_GetDeviceFormatsInUse_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoCaptureHost_GetDeviceFormatsInUse_ResponseParams_Data>(index_);
    }
    VideoCaptureHost_GetDeviceFormatsInUse_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::media::mojom::internal::VideoCaptureFormat_Data>>> formats_in_use;

 private:
  VideoCaptureHost_GetDeviceFormatsInUse_ResponseParams_Data();
  ~VideoCaptureHost_GetDeviceFormatsInUse_ResponseParams_Data() = delete;
};
static_assert(sizeof(VideoCaptureHost_GetDeviceFormatsInUse_ResponseParams_Data) == 16,
              "Bad sizeof(VideoCaptureHost_GetDeviceFormatsInUse_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_MOJOM_SHARED_INTERNAL_H_