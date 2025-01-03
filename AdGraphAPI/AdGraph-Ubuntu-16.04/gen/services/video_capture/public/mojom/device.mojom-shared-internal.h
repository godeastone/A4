// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_DEVICE_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_DEVICE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "media/capture/mojom/video_capture_types.mojom-shared-internal.h"
#include "media/capture/mojom/image_capture.mojom-shared-internal.h"
#include "services/video_capture/public/mojom/receiver.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace video_capture {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  Device_Start_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Device_Start_Params_Data));
      new (data()) Device_Start_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Device_Start_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Device_Start_Params_Data>(index_);
    }
    Device_Start_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::VideoCaptureParams_Data> requested_settings;
  mojo::internal::Interface_Data receiver;

 private:
  Device_Start_Params_Data();
  ~Device_Start_Params_Data() = delete;
};
static_assert(sizeof(Device_Start_Params_Data) == 24,
              "Bad sizeof(Device_Start_Params_Data)");
class  Device_OnReceiverReportingUtilization_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Device_OnReceiverReportingUtilization_Params_Data));
      new (data()) Device_OnReceiverReportingUtilization_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Device_OnReceiverReportingUtilization_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Device_OnReceiverReportingUtilization_Params_Data>(index_);
    }
    Device_OnReceiverReportingUtilization_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t frame_feedback_id;
  uint8_t pad0_[4];
  double utilization;

 private:
  Device_OnReceiverReportingUtilization_Params_Data();
  ~Device_OnReceiverReportingUtilization_Params_Data() = delete;
};
static_assert(sizeof(Device_OnReceiverReportingUtilization_Params_Data) == 24,
              "Bad sizeof(Device_OnReceiverReportingUtilization_Params_Data)");
class  Device_RequestRefreshFrame_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Device_RequestRefreshFrame_Params_Data));
      new (data()) Device_RequestRefreshFrame_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Device_RequestRefreshFrame_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Device_RequestRefreshFrame_Params_Data>(index_);
    }
    Device_RequestRefreshFrame_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Device_RequestRefreshFrame_Params_Data();
  ~Device_RequestRefreshFrame_Params_Data() = delete;
};
static_assert(sizeof(Device_RequestRefreshFrame_Params_Data) == 8,
              "Bad sizeof(Device_RequestRefreshFrame_Params_Data)");
class  Device_MaybeSuspend_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Device_MaybeSuspend_Params_Data));
      new (data()) Device_MaybeSuspend_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Device_MaybeSuspend_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Device_MaybeSuspend_Params_Data>(index_);
    }
    Device_MaybeSuspend_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Device_MaybeSuspend_Params_Data();
  ~Device_MaybeSuspend_Params_Data() = delete;
};
static_assert(sizeof(Device_MaybeSuspend_Params_Data) == 8,
              "Bad sizeof(Device_MaybeSuspend_Params_Data)");
class  Device_Resume_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Device_Resume_Params_Data));
      new (data()) Device_Resume_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Device_Resume_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Device_Resume_Params_Data>(index_);
    }
    Device_Resume_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Device_Resume_Params_Data();
  ~Device_Resume_Params_Data() = delete;
};
static_assert(sizeof(Device_Resume_Params_Data) == 8,
              "Bad sizeof(Device_Resume_Params_Data)");
class  Device_GetPhotoState_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Device_GetPhotoState_Params_Data));
      new (data()) Device_GetPhotoState_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Device_GetPhotoState_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Device_GetPhotoState_Params_Data>(index_);
    }
    Device_GetPhotoState_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Device_GetPhotoState_Params_Data();
  ~Device_GetPhotoState_Params_Data() = delete;
};
static_assert(sizeof(Device_GetPhotoState_Params_Data) == 8,
              "Bad sizeof(Device_GetPhotoState_Params_Data)");
class  Device_GetPhotoState_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Device_GetPhotoState_ResponseParams_Data));
      new (data()) Device_GetPhotoState_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Device_GetPhotoState_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Device_GetPhotoState_ResponseParams_Data>(index_);
    }
    Device_GetPhotoState_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::PhotoState_Data> capabilities;

 private:
  Device_GetPhotoState_ResponseParams_Data();
  ~Device_GetPhotoState_ResponseParams_Data() = delete;
};
static_assert(sizeof(Device_GetPhotoState_ResponseParams_Data) == 16,
              "Bad sizeof(Device_GetPhotoState_ResponseParams_Data)");
class  Device_SetPhotoOptions_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Device_SetPhotoOptions_Params_Data));
      new (data()) Device_SetPhotoOptions_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Device_SetPhotoOptions_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Device_SetPhotoOptions_Params_Data>(index_);
    }
    Device_SetPhotoOptions_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::PhotoSettings_Data> settings;

 private:
  Device_SetPhotoOptions_Params_Data();
  ~Device_SetPhotoOptions_Params_Data() = delete;
};
static_assert(sizeof(Device_SetPhotoOptions_Params_Data) == 16,
              "Bad sizeof(Device_SetPhotoOptions_Params_Data)");
class  Device_SetPhotoOptions_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Device_SetPhotoOptions_ResponseParams_Data));
      new (data()) Device_SetPhotoOptions_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Device_SetPhotoOptions_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Device_SetPhotoOptions_ResponseParams_Data>(index_);
    }
    Device_SetPhotoOptions_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  Device_SetPhotoOptions_ResponseParams_Data();
  ~Device_SetPhotoOptions_ResponseParams_Data() = delete;
};
static_assert(sizeof(Device_SetPhotoOptions_ResponseParams_Data) == 16,
              "Bad sizeof(Device_SetPhotoOptions_ResponseParams_Data)");
class  Device_TakePhoto_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Device_TakePhoto_Params_Data));
      new (data()) Device_TakePhoto_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Device_TakePhoto_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Device_TakePhoto_Params_Data>(index_);
    }
    Device_TakePhoto_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Device_TakePhoto_Params_Data();
  ~Device_TakePhoto_Params_Data() = delete;
};
static_assert(sizeof(Device_TakePhoto_Params_Data) == 8,
              "Bad sizeof(Device_TakePhoto_Params_Data)");
class  Device_TakePhoto_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Device_TakePhoto_ResponseParams_Data));
      new (data()) Device_TakePhoto_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Device_TakePhoto_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Device_TakePhoto_ResponseParams_Data>(index_);
    }
    Device_TakePhoto_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::Blob_Data> blob;

 private:
  Device_TakePhoto_ResponseParams_Data();
  ~Device_TakePhoto_ResponseParams_Data() = delete;
};
static_assert(sizeof(Device_TakePhoto_ResponseParams_Data) == 16,
              "Bad sizeof(Device_TakePhoto_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace video_capture

#endif  // SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_DEVICE_MOJOM_SHARED_INTERNAL_H_