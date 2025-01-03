// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_MEDIA_ROUTER_MOJO_MEDIA_CONTROLLER_MOJOM_SHARED_INTERNAL_H_
#define CHROME_COMMON_MEDIA_ROUTER_MOJO_MEDIA_CONTROLLER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "chrome/common/media_router/mojo/media_status.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace media_router {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  MediaController_Play_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaController_Play_Params_Data));
      new (data()) MediaController_Play_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaController_Play_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaController_Play_Params_Data>(index_);
    }
    MediaController_Play_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  MediaController_Play_Params_Data();
  ~MediaController_Play_Params_Data() = delete;
};
static_assert(sizeof(MediaController_Play_Params_Data) == 8,
              "Bad sizeof(MediaController_Play_Params_Data)");
class  MediaController_Pause_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaController_Pause_Params_Data));
      new (data()) MediaController_Pause_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaController_Pause_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaController_Pause_Params_Data>(index_);
    }
    MediaController_Pause_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  MediaController_Pause_Params_Data();
  ~MediaController_Pause_Params_Data() = delete;
};
static_assert(sizeof(MediaController_Pause_Params_Data) == 8,
              "Bad sizeof(MediaController_Pause_Params_Data)");
class  MediaController_SetMute_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaController_SetMute_Params_Data));
      new (data()) MediaController_SetMute_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaController_SetMute_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaController_SetMute_Params_Data>(index_);
    }
    MediaController_SetMute_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t mute : 1;
  uint8_t padfinal_[7];

 private:
  MediaController_SetMute_Params_Data();
  ~MediaController_SetMute_Params_Data() = delete;
};
static_assert(sizeof(MediaController_SetMute_Params_Data) == 16,
              "Bad sizeof(MediaController_SetMute_Params_Data)");
class  MediaController_SetVolume_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaController_SetVolume_Params_Data));
      new (data()) MediaController_SetVolume_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaController_SetVolume_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaController_SetVolume_Params_Data>(index_);
    }
    MediaController_SetVolume_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  float volume;
  uint8_t padfinal_[4];

 private:
  MediaController_SetVolume_Params_Data();
  ~MediaController_SetVolume_Params_Data() = delete;
};
static_assert(sizeof(MediaController_SetVolume_Params_Data) == 16,
              "Bad sizeof(MediaController_SetVolume_Params_Data)");
class  MediaController_Seek_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaController_Seek_Params_Data));
      new (data()) MediaController_Seek_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaController_Seek_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaController_Seek_Params_Data>(index_);
    }
    MediaController_Seek_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> time;

 private:
  MediaController_Seek_Params_Data();
  ~MediaController_Seek_Params_Data() = delete;
};
static_assert(sizeof(MediaController_Seek_Params_Data) == 16,
              "Bad sizeof(MediaController_Seek_Params_Data)");
class  MediaController_ConnectHangoutsMediaRouteController_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaController_ConnectHangoutsMediaRouteController_Params_Data));
      new (data()) MediaController_ConnectHangoutsMediaRouteController_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaController_ConnectHangoutsMediaRouteController_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaController_ConnectHangoutsMediaRouteController_Params_Data>(index_);
    }
    MediaController_ConnectHangoutsMediaRouteController_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data controller_request;
  uint8_t padfinal_[4];

 private:
  MediaController_ConnectHangoutsMediaRouteController_Params_Data();
  ~MediaController_ConnectHangoutsMediaRouteController_Params_Data() = delete;
};
static_assert(sizeof(MediaController_ConnectHangoutsMediaRouteController_Params_Data) == 16,
              "Bad sizeof(MediaController_ConnectHangoutsMediaRouteController_Params_Data)");
class  HangoutsMediaRouteController_SetLocalPresent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HangoutsMediaRouteController_SetLocalPresent_Params_Data));
      new (data()) HangoutsMediaRouteController_SetLocalPresent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HangoutsMediaRouteController_SetLocalPresent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HangoutsMediaRouteController_SetLocalPresent_Params_Data>(index_);
    }
    HangoutsMediaRouteController_SetLocalPresent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t local_present : 1;
  uint8_t padfinal_[7];

 private:
  HangoutsMediaRouteController_SetLocalPresent_Params_Data();
  ~HangoutsMediaRouteController_SetLocalPresent_Params_Data() = delete;
};
static_assert(sizeof(HangoutsMediaRouteController_SetLocalPresent_Params_Data) == 16,
              "Bad sizeof(HangoutsMediaRouteController_SetLocalPresent_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media_router

#endif  // CHROME_COMMON_MEDIA_ROUTER_MOJO_MEDIA_CONTROLLER_MOJOM_SHARED_INTERNAL_H_