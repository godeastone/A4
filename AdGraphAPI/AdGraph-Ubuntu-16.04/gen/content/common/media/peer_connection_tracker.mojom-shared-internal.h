// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_MEDIA_PEER_CONNECTION_TRACKER_MOJOM_SHARED_INTERNAL_H_
#define CONTENT_COMMON_MEDIA_PEER_CONNECTION_TRACKER_MOJOM_SHARED_INTERNAL_H_

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
namespace content {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PeerConnectionTrackerHost_RemovePeerConnection_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PeerConnectionTrackerHost_RemovePeerConnection_Params_Data));
      new (data()) PeerConnectionTrackerHost_RemovePeerConnection_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PeerConnectionTrackerHost_RemovePeerConnection_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PeerConnectionTrackerHost_RemovePeerConnection_Params_Data>(index_);
    }
    PeerConnectionTrackerHost_RemovePeerConnection_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t lid;
  uint8_t padfinal_[4];

 private:
  PeerConnectionTrackerHost_RemovePeerConnection_Params_Data();
  ~PeerConnectionTrackerHost_RemovePeerConnection_Params_Data() = delete;
};
static_assert(sizeof(PeerConnectionTrackerHost_RemovePeerConnection_Params_Data) == 16,
              "Bad sizeof(PeerConnectionTrackerHost_RemovePeerConnection_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PeerConnectionTrackerHost_UpdatePeerConnection_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PeerConnectionTrackerHost_UpdatePeerConnection_Params_Data));
      new (data()) PeerConnectionTrackerHost_UpdatePeerConnection_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PeerConnectionTrackerHost_UpdatePeerConnection_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PeerConnectionTrackerHost_UpdatePeerConnection_Params_Data>(index_);
    }
    PeerConnectionTrackerHost_UpdatePeerConnection_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t lid;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> type;
  mojo::internal::Pointer<mojo::internal::String_Data> value;

 private:
  PeerConnectionTrackerHost_UpdatePeerConnection_Params_Data();
  ~PeerConnectionTrackerHost_UpdatePeerConnection_Params_Data() = delete;
};
static_assert(sizeof(PeerConnectionTrackerHost_UpdatePeerConnection_Params_Data) == 32,
              "Bad sizeof(PeerConnectionTrackerHost_UpdatePeerConnection_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PeerConnectionTrackerHost_GetUserMedia_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PeerConnectionTrackerHost_GetUserMedia_Params_Data));
      new (data()) PeerConnectionTrackerHost_GetUserMedia_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PeerConnectionTrackerHost_GetUserMedia_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PeerConnectionTrackerHost_GetUserMedia_Params_Data>(index_);
    }
    PeerConnectionTrackerHost_GetUserMedia_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> origin;
  uint8_t audio : 1;
  uint8_t video : 1;
  uint8_t pad2_[7];
  mojo::internal::Pointer<mojo::internal::String_Data> audio_constraints;
  mojo::internal::Pointer<mojo::internal::String_Data> video_constraints;

 private:
  PeerConnectionTrackerHost_GetUserMedia_Params_Data();
  ~PeerConnectionTrackerHost_GetUserMedia_Params_Data() = delete;
};
static_assert(sizeof(PeerConnectionTrackerHost_GetUserMedia_Params_Data) == 40,
              "Bad sizeof(PeerConnectionTrackerHost_GetUserMedia_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PeerConnectionTrackerHost_WebRtcEventLogWrite_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PeerConnectionTrackerHost_WebRtcEventLogWrite_Params_Data));
      new (data()) PeerConnectionTrackerHost_WebRtcEventLogWrite_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PeerConnectionTrackerHost_WebRtcEventLogWrite_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PeerConnectionTrackerHost_WebRtcEventLogWrite_Params_Data>(index_);
    }
    PeerConnectionTrackerHost_WebRtcEventLogWrite_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t lid;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> output;

 private:
  PeerConnectionTrackerHost_WebRtcEventLogWrite_Params_Data();
  ~PeerConnectionTrackerHost_WebRtcEventLogWrite_Params_Data() = delete;
};
static_assert(sizeof(PeerConnectionTrackerHost_WebRtcEventLogWrite_Params_Data) == 24,
              "Bad sizeof(PeerConnectionTrackerHost_WebRtcEventLogWrite_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_MEDIA_PEER_CONNECTION_TRACKER_MOJOM_SHARED_INTERNAL_H_