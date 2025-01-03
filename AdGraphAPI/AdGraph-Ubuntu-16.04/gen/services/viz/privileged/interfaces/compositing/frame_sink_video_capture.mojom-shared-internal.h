// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_FRAME_SINK_VIDEO_CAPTURE_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_FRAME_SINK_VIDEO_CAPTURE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "media/capture/mojom/video_capture_types.mojom-shared-internal.h"
#include "media/mojo/interfaces/media_types.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/frame_sink_id.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace viz {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  FrameSinkVideoConsumerFrameCallbacks_Done_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameSinkVideoConsumerFrameCallbacks_Done_Params_Data));
      new (data()) FrameSinkVideoConsumerFrameCallbacks_Done_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameSinkVideoConsumerFrameCallbacks_Done_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameSinkVideoConsumerFrameCallbacks_Done_Params_Data>(index_);
    }
    FrameSinkVideoConsumerFrameCallbacks_Done_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  FrameSinkVideoConsumerFrameCallbacks_Done_Params_Data();
  ~FrameSinkVideoConsumerFrameCallbacks_Done_Params_Data() = delete;
};
static_assert(sizeof(FrameSinkVideoConsumerFrameCallbacks_Done_Params_Data) == 8,
              "Bad sizeof(FrameSinkVideoConsumerFrameCallbacks_Done_Params_Data)");
class  FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Params_Data));
      new (data()) FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Params_Data>(index_);
    }
    FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  double utilization;

 private:
  FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Params_Data();
  ~FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Params_Data() = delete;
};
static_assert(sizeof(FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Params_Data) == 16,
              "Bad sizeof(FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Params_Data)");
class  FrameSinkVideoConsumer_OnFrameCaptured_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameSinkVideoConsumer_OnFrameCaptured_Params_Data));
      new (data()) FrameSinkVideoConsumer_OnFrameCaptured_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameSinkVideoConsumer_OnFrameCaptured_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameSinkVideoConsumer_OnFrameCaptured_Params_Data>(index_);
    }
    FrameSinkVideoConsumer_OnFrameCaptured_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data buffer;
  uint32_t buffer_size;
  mojo::internal::Pointer<::media::mojom::internal::VideoFrameInfo_Data> info;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> update_rect;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> content_rect;
  mojo::internal::Interface_Data callbacks;

 private:
  FrameSinkVideoConsumer_OnFrameCaptured_Params_Data();
  ~FrameSinkVideoConsumer_OnFrameCaptured_Params_Data() = delete;
};
static_assert(sizeof(FrameSinkVideoConsumer_OnFrameCaptured_Params_Data) == 48,
              "Bad sizeof(FrameSinkVideoConsumer_OnFrameCaptured_Params_Data)");
class  FrameSinkVideoConsumer_OnTargetLost_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameSinkVideoConsumer_OnTargetLost_Params_Data));
      new (data()) FrameSinkVideoConsumer_OnTargetLost_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameSinkVideoConsumer_OnTargetLost_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameSinkVideoConsumer_OnTargetLost_Params_Data>(index_);
    }
    FrameSinkVideoConsumer_OnTargetLost_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::FrameSinkId_Data> frame_sink_id;

 private:
  FrameSinkVideoConsumer_OnTargetLost_Params_Data();
  ~FrameSinkVideoConsumer_OnTargetLost_Params_Data() = delete;
};
static_assert(sizeof(FrameSinkVideoConsumer_OnTargetLost_Params_Data) == 16,
              "Bad sizeof(FrameSinkVideoConsumer_OnTargetLost_Params_Data)");
class  FrameSinkVideoConsumer_OnStopped_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameSinkVideoConsumer_OnStopped_Params_Data));
      new (data()) FrameSinkVideoConsumer_OnStopped_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameSinkVideoConsumer_OnStopped_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameSinkVideoConsumer_OnStopped_Params_Data>(index_);
    }
    FrameSinkVideoConsumer_OnStopped_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  FrameSinkVideoConsumer_OnStopped_Params_Data();
  ~FrameSinkVideoConsumer_OnStopped_Params_Data() = delete;
};
static_assert(sizeof(FrameSinkVideoConsumer_OnStopped_Params_Data) == 8,
              "Bad sizeof(FrameSinkVideoConsumer_OnStopped_Params_Data)");
class  FrameSinkVideoCapturer_SetFormat_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameSinkVideoCapturer_SetFormat_Params_Data));
      new (data()) FrameSinkVideoCapturer_SetFormat_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameSinkVideoCapturer_SetFormat_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameSinkVideoCapturer_SetFormat_Params_Data>(index_);
    }
    FrameSinkVideoCapturer_SetFormat_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t format;
  int32_t color_space;

 private:
  FrameSinkVideoCapturer_SetFormat_Params_Data();
  ~FrameSinkVideoCapturer_SetFormat_Params_Data() = delete;
};
static_assert(sizeof(FrameSinkVideoCapturer_SetFormat_Params_Data) == 16,
              "Bad sizeof(FrameSinkVideoCapturer_SetFormat_Params_Data)");
class  FrameSinkVideoCapturer_SetMinCapturePeriod_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameSinkVideoCapturer_SetMinCapturePeriod_Params_Data));
      new (data()) FrameSinkVideoCapturer_SetMinCapturePeriod_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameSinkVideoCapturer_SetMinCapturePeriod_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameSinkVideoCapturer_SetMinCapturePeriod_Params_Data>(index_);
    }
    FrameSinkVideoCapturer_SetMinCapturePeriod_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> min_period;

 private:
  FrameSinkVideoCapturer_SetMinCapturePeriod_Params_Data();
  ~FrameSinkVideoCapturer_SetMinCapturePeriod_Params_Data() = delete;
};
static_assert(sizeof(FrameSinkVideoCapturer_SetMinCapturePeriod_Params_Data) == 16,
              "Bad sizeof(FrameSinkVideoCapturer_SetMinCapturePeriod_Params_Data)");
class  FrameSinkVideoCapturer_SetMinSizeChangePeriod_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameSinkVideoCapturer_SetMinSizeChangePeriod_Params_Data));
      new (data()) FrameSinkVideoCapturer_SetMinSizeChangePeriod_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameSinkVideoCapturer_SetMinSizeChangePeriod_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameSinkVideoCapturer_SetMinSizeChangePeriod_Params_Data>(index_);
    }
    FrameSinkVideoCapturer_SetMinSizeChangePeriod_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> min_period;

 private:
  FrameSinkVideoCapturer_SetMinSizeChangePeriod_Params_Data();
  ~FrameSinkVideoCapturer_SetMinSizeChangePeriod_Params_Data() = delete;
};
static_assert(sizeof(FrameSinkVideoCapturer_SetMinSizeChangePeriod_Params_Data) == 16,
              "Bad sizeof(FrameSinkVideoCapturer_SetMinSizeChangePeriod_Params_Data)");
class  FrameSinkVideoCapturer_SetResolutionConstraints_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameSinkVideoCapturer_SetResolutionConstraints_Params_Data));
      new (data()) FrameSinkVideoCapturer_SetResolutionConstraints_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameSinkVideoCapturer_SetResolutionConstraints_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameSinkVideoCapturer_SetResolutionConstraints_Params_Data>(index_);
    }
    FrameSinkVideoCapturer_SetResolutionConstraints_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> min_size;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> max_size;
  uint8_t use_fixed_aspect_ratio : 1;
  uint8_t padfinal_[7];

 private:
  FrameSinkVideoCapturer_SetResolutionConstraints_Params_Data();
  ~FrameSinkVideoCapturer_SetResolutionConstraints_Params_Data() = delete;
};
static_assert(sizeof(FrameSinkVideoCapturer_SetResolutionConstraints_Params_Data) == 32,
              "Bad sizeof(FrameSinkVideoCapturer_SetResolutionConstraints_Params_Data)");
class  FrameSinkVideoCapturer_SetAutoThrottlingEnabled_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameSinkVideoCapturer_SetAutoThrottlingEnabled_Params_Data));
      new (data()) FrameSinkVideoCapturer_SetAutoThrottlingEnabled_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameSinkVideoCapturer_SetAutoThrottlingEnabled_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameSinkVideoCapturer_SetAutoThrottlingEnabled_Params_Data>(index_);
    }
    FrameSinkVideoCapturer_SetAutoThrottlingEnabled_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t enabled : 1;
  uint8_t padfinal_[7];

 private:
  FrameSinkVideoCapturer_SetAutoThrottlingEnabled_Params_Data();
  ~FrameSinkVideoCapturer_SetAutoThrottlingEnabled_Params_Data() = delete;
};
static_assert(sizeof(FrameSinkVideoCapturer_SetAutoThrottlingEnabled_Params_Data) == 16,
              "Bad sizeof(FrameSinkVideoCapturer_SetAutoThrottlingEnabled_Params_Data)");
class  FrameSinkVideoCapturer_ChangeTarget_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameSinkVideoCapturer_ChangeTarget_Params_Data));
      new (data()) FrameSinkVideoCapturer_ChangeTarget_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameSinkVideoCapturer_ChangeTarget_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameSinkVideoCapturer_ChangeTarget_Params_Data>(index_);
    }
    FrameSinkVideoCapturer_ChangeTarget_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::FrameSinkId_Data> frame_sink_id;

 private:
  FrameSinkVideoCapturer_ChangeTarget_Params_Data();
  ~FrameSinkVideoCapturer_ChangeTarget_Params_Data() = delete;
};
static_assert(sizeof(FrameSinkVideoCapturer_ChangeTarget_Params_Data) == 16,
              "Bad sizeof(FrameSinkVideoCapturer_ChangeTarget_Params_Data)");
class  FrameSinkVideoCapturer_Start_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameSinkVideoCapturer_Start_Params_Data));
      new (data()) FrameSinkVideoCapturer_Start_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameSinkVideoCapturer_Start_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameSinkVideoCapturer_Start_Params_Data>(index_);
    }
    FrameSinkVideoCapturer_Start_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data consumer;

 private:
  FrameSinkVideoCapturer_Start_Params_Data();
  ~FrameSinkVideoCapturer_Start_Params_Data() = delete;
};
static_assert(sizeof(FrameSinkVideoCapturer_Start_Params_Data) == 16,
              "Bad sizeof(FrameSinkVideoCapturer_Start_Params_Data)");
class  FrameSinkVideoCapturer_Stop_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameSinkVideoCapturer_Stop_Params_Data));
      new (data()) FrameSinkVideoCapturer_Stop_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameSinkVideoCapturer_Stop_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameSinkVideoCapturer_Stop_Params_Data>(index_);
    }
    FrameSinkVideoCapturer_Stop_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  FrameSinkVideoCapturer_Stop_Params_Data();
  ~FrameSinkVideoCapturer_Stop_Params_Data() = delete;
};
static_assert(sizeof(FrameSinkVideoCapturer_Stop_Params_Data) == 8,
              "Bad sizeof(FrameSinkVideoCapturer_Stop_Params_Data)");
class  FrameSinkVideoCapturer_RequestRefreshFrame_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameSinkVideoCapturer_RequestRefreshFrame_Params_Data));
      new (data()) FrameSinkVideoCapturer_RequestRefreshFrame_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameSinkVideoCapturer_RequestRefreshFrame_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameSinkVideoCapturer_RequestRefreshFrame_Params_Data>(index_);
    }
    FrameSinkVideoCapturer_RequestRefreshFrame_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  FrameSinkVideoCapturer_RequestRefreshFrame_Params_Data();
  ~FrameSinkVideoCapturer_RequestRefreshFrame_Params_Data() = delete;
};
static_assert(sizeof(FrameSinkVideoCapturer_RequestRefreshFrame_Params_Data) == 8,
              "Bad sizeof(FrameSinkVideoCapturer_RequestRefreshFrame_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_FRAME_SINK_VIDEO_CAPTURE_MOJOM_SHARED_INTERNAL_H_