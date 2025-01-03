// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_MEDIA_METRICS_PROVIDER_MOJOM_SHARED_INTERNAL_H_
#define MEDIA_MOJO_INTERFACES_MEDIA_METRICS_PROVIDER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "media/mojo/interfaces/media_types.mojom-shared-internal.h"
#include "media/mojo/interfaces/video_decode_stats_recorder.mojom-shared-internal.h"
#include "media/mojo/interfaces/watch_time_recorder.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "url/mojom/origin.mojom-shared-internal.h"
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

#pragma pack(push, 1)
class  MediaMetricsProvider_Initialize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaMetricsProvider_Initialize_Params_Data));
      new (data()) MediaMetricsProvider_Initialize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaMetricsProvider_Initialize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaMetricsProvider_Initialize_Params_Data>(index_);
    }
    MediaMetricsProvider_Initialize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t is_mse : 1;
  uint8_t is_top_frame : 1;
  uint8_t pad1_[7];
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> untrusted_top_origin;

 private:
  MediaMetricsProvider_Initialize_Params_Data();
  ~MediaMetricsProvider_Initialize_Params_Data() = delete;
};
static_assert(sizeof(MediaMetricsProvider_Initialize_Params_Data) == 24,
              "Bad sizeof(MediaMetricsProvider_Initialize_Params_Data)");
class  MediaMetricsProvider_OnError_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaMetricsProvider_OnError_Params_Data));
      new (data()) MediaMetricsProvider_OnError_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaMetricsProvider_OnError_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaMetricsProvider_OnError_Params_Data>(index_);
    }
    MediaMetricsProvider_OnError_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  MediaMetricsProvider_OnError_Params_Data();
  ~MediaMetricsProvider_OnError_Params_Data() = delete;
};
static_assert(sizeof(MediaMetricsProvider_OnError_Params_Data) == 16,
              "Bad sizeof(MediaMetricsProvider_OnError_Params_Data)");
class  MediaMetricsProvider_SetIsEME_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaMetricsProvider_SetIsEME_Params_Data));
      new (data()) MediaMetricsProvider_SetIsEME_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaMetricsProvider_SetIsEME_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaMetricsProvider_SetIsEME_Params_Data>(index_);
    }
    MediaMetricsProvider_SetIsEME_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  MediaMetricsProvider_SetIsEME_Params_Data();
  ~MediaMetricsProvider_SetIsEME_Params_Data() = delete;
};
static_assert(sizeof(MediaMetricsProvider_SetIsEME_Params_Data) == 8,
              "Bad sizeof(MediaMetricsProvider_SetIsEME_Params_Data)");
class  MediaMetricsProvider_SetTimeToMetadata_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaMetricsProvider_SetTimeToMetadata_Params_Data));
      new (data()) MediaMetricsProvider_SetTimeToMetadata_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaMetricsProvider_SetTimeToMetadata_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaMetricsProvider_SetTimeToMetadata_Params_Data>(index_);
    }
    MediaMetricsProvider_SetTimeToMetadata_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> elapsed;

 private:
  MediaMetricsProvider_SetTimeToMetadata_Params_Data();
  ~MediaMetricsProvider_SetTimeToMetadata_Params_Data() = delete;
};
static_assert(sizeof(MediaMetricsProvider_SetTimeToMetadata_Params_Data) == 16,
              "Bad sizeof(MediaMetricsProvider_SetTimeToMetadata_Params_Data)");
class  MediaMetricsProvider_SetTimeToFirstFrame_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaMetricsProvider_SetTimeToFirstFrame_Params_Data));
      new (data()) MediaMetricsProvider_SetTimeToFirstFrame_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaMetricsProvider_SetTimeToFirstFrame_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaMetricsProvider_SetTimeToFirstFrame_Params_Data>(index_);
    }
    MediaMetricsProvider_SetTimeToFirstFrame_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> elapsed;

 private:
  MediaMetricsProvider_SetTimeToFirstFrame_Params_Data();
  ~MediaMetricsProvider_SetTimeToFirstFrame_Params_Data() = delete;
};
static_assert(sizeof(MediaMetricsProvider_SetTimeToFirstFrame_Params_Data) == 16,
              "Bad sizeof(MediaMetricsProvider_SetTimeToFirstFrame_Params_Data)");
class  MediaMetricsProvider_SetTimeToPlayReady_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaMetricsProvider_SetTimeToPlayReady_Params_Data));
      new (data()) MediaMetricsProvider_SetTimeToPlayReady_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaMetricsProvider_SetTimeToPlayReady_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaMetricsProvider_SetTimeToPlayReady_Params_Data>(index_);
    }
    MediaMetricsProvider_SetTimeToPlayReady_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> elapsed;

 private:
  MediaMetricsProvider_SetTimeToPlayReady_Params_Data();
  ~MediaMetricsProvider_SetTimeToPlayReady_Params_Data() = delete;
};
static_assert(sizeof(MediaMetricsProvider_SetTimeToPlayReady_Params_Data) == 16,
              "Bad sizeof(MediaMetricsProvider_SetTimeToPlayReady_Params_Data)");
class  MediaMetricsProvider_AcquireWatchTimeRecorder_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaMetricsProvider_AcquireWatchTimeRecorder_Params_Data));
      new (data()) MediaMetricsProvider_AcquireWatchTimeRecorder_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaMetricsProvider_AcquireWatchTimeRecorder_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaMetricsProvider_AcquireWatchTimeRecorder_Params_Data>(index_);
    }
    MediaMetricsProvider_AcquireWatchTimeRecorder_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::PlaybackProperties_Data> properties;
  mojo::internal::Handle_Data recorder;
  uint8_t padfinal_[4];

 private:
  MediaMetricsProvider_AcquireWatchTimeRecorder_Params_Data();
  ~MediaMetricsProvider_AcquireWatchTimeRecorder_Params_Data() = delete;
};
static_assert(sizeof(MediaMetricsProvider_AcquireWatchTimeRecorder_Params_Data) == 24,
              "Bad sizeof(MediaMetricsProvider_AcquireWatchTimeRecorder_Params_Data)");
class  MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params_Data));
      new (data()) MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params_Data>(index_);
    }
    MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data recorder;
  uint8_t padfinal_[4];

 private:
  MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params_Data();
  ~MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params_Data() = delete;
};
static_assert(sizeof(MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params_Data) == 16,
              "Bad sizeof(MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_MEDIA_METRICS_PROVIDER_MOJOM_SHARED_INTERNAL_H_