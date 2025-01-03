// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_AUDIO_PUBLIC_MOJOM_DEBUG_RECORDING_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_AUDIO_PUBLIC_MOJOM_DEBUG_RECORDING_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/file.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file_path.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace audio {
namespace mojom {
namespace internal {

struct DebugRecordingStreamType_Data {
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
class  DebugRecordingFileProvider_CreateWavFile_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DebugRecordingFileProvider_CreateWavFile_Params_Data));
      new (data()) DebugRecordingFileProvider_CreateWavFile_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DebugRecordingFileProvider_CreateWavFile_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DebugRecordingFileProvider_CreateWavFile_Params_Data>(index_);
    }
    DebugRecordingFileProvider_CreateWavFile_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t stream_type;
  uint32_t id;

 private:
  DebugRecordingFileProvider_CreateWavFile_Params_Data();
  ~DebugRecordingFileProvider_CreateWavFile_Params_Data() = delete;
};
static_assert(sizeof(DebugRecordingFileProvider_CreateWavFile_Params_Data) == 16,
              "Bad sizeof(DebugRecordingFileProvider_CreateWavFile_Params_Data)");
class  DebugRecordingFileProvider_CreateWavFile_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DebugRecordingFileProvider_CreateWavFile_ResponseParams_Data));
      new (data()) DebugRecordingFileProvider_CreateWavFile_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DebugRecordingFileProvider_CreateWavFile_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DebugRecordingFileProvider_CreateWavFile_ResponseParams_Data>(index_);
    }
    DebugRecordingFileProvider_CreateWavFile_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::File_Data> file;

 private:
  DebugRecordingFileProvider_CreateWavFile_ResponseParams_Data();
  ~DebugRecordingFileProvider_CreateWavFile_ResponseParams_Data() = delete;
};
static_assert(sizeof(DebugRecordingFileProvider_CreateWavFile_ResponseParams_Data) == 16,
              "Bad sizeof(DebugRecordingFileProvider_CreateWavFile_ResponseParams_Data)");
class  DebugRecording_Enable_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DebugRecording_Enable_Params_Data));
      new (data()) DebugRecording_Enable_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DebugRecording_Enable_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DebugRecording_Enable_Params_Data>(index_);
    }
    DebugRecording_Enable_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data file_provider;

 private:
  DebugRecording_Enable_Params_Data();
  ~DebugRecording_Enable_Params_Data() = delete;
};
static_assert(sizeof(DebugRecording_Enable_Params_Data) == 16,
              "Bad sizeof(DebugRecording_Enable_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace audio

#endif  // SERVICES_AUDIO_PUBLIC_MOJOM_DEBUG_RECORDING_MOJOM_SHARED_INTERNAL_H_