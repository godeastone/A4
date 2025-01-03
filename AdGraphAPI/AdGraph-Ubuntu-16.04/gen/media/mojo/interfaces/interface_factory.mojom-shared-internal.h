// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_SHARED_INTERNAL_H_
#define MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "media/mojo/interfaces/audio_decoder.mojom-shared-internal.h"
#include "media/mojo/interfaces/cdm_proxy.mojom-shared-internal.h"
#include "media/mojo/interfaces/decryptor.mojom-shared-internal.h"
#include "media/mojo/interfaces/content_decryption_module.mojom-shared-internal.h"
#include "media/mojo/interfaces/renderer.mojom-shared-internal.h"
#include "media/mojo/interfaces/video_decoder.mojom-shared-internal.h"
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

struct HostedRendererType_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
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
class  InterfaceFactory_CreateAudioDecoder_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InterfaceFactory_CreateAudioDecoder_Params_Data));
      new (data()) InterfaceFactory_CreateAudioDecoder_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InterfaceFactory_CreateAudioDecoder_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InterfaceFactory_CreateAudioDecoder_Params_Data>(index_);
    }
    InterfaceFactory_CreateAudioDecoder_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data audio_decoder;
  uint8_t padfinal_[4];

 private:
  InterfaceFactory_CreateAudioDecoder_Params_Data();
  ~InterfaceFactory_CreateAudioDecoder_Params_Data() = delete;
};
static_assert(sizeof(InterfaceFactory_CreateAudioDecoder_Params_Data) == 16,
              "Bad sizeof(InterfaceFactory_CreateAudioDecoder_Params_Data)");
class  InterfaceFactory_CreateVideoDecoder_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InterfaceFactory_CreateVideoDecoder_Params_Data));
      new (data()) InterfaceFactory_CreateVideoDecoder_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InterfaceFactory_CreateVideoDecoder_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InterfaceFactory_CreateVideoDecoder_Params_Data>(index_);
    }
    InterfaceFactory_CreateVideoDecoder_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data video_decoder;
  uint8_t padfinal_[4];

 private:
  InterfaceFactory_CreateVideoDecoder_Params_Data();
  ~InterfaceFactory_CreateVideoDecoder_Params_Data() = delete;
};
static_assert(sizeof(InterfaceFactory_CreateVideoDecoder_Params_Data) == 16,
              "Bad sizeof(InterfaceFactory_CreateVideoDecoder_Params_Data)");
class  InterfaceFactory_CreateRenderer_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InterfaceFactory_CreateRenderer_Params_Data));
      new (data()) InterfaceFactory_CreateRenderer_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InterfaceFactory_CreateRenderer_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InterfaceFactory_CreateRenderer_Params_Data>(index_);
    }
    InterfaceFactory_CreateRenderer_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  mojo::internal::Handle_Data renderer;
  mojo::internal::Pointer<mojo::internal::String_Data> type_specific_id;

 private:
  InterfaceFactory_CreateRenderer_Params_Data();
  ~InterfaceFactory_CreateRenderer_Params_Data() = delete;
};
static_assert(sizeof(InterfaceFactory_CreateRenderer_Params_Data) == 24,
              "Bad sizeof(InterfaceFactory_CreateRenderer_Params_Data)");
class  InterfaceFactory_CreateCdm_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InterfaceFactory_CreateCdm_Params_Data));
      new (data()) InterfaceFactory_CreateCdm_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InterfaceFactory_CreateCdm_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InterfaceFactory_CreateCdm_Params_Data>(index_);
    }
    InterfaceFactory_CreateCdm_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> key_system;
  mojo::internal::Handle_Data cdm;
  uint8_t padfinal_[4];

 private:
  InterfaceFactory_CreateCdm_Params_Data();
  ~InterfaceFactory_CreateCdm_Params_Data() = delete;
};
static_assert(sizeof(InterfaceFactory_CreateCdm_Params_Data) == 24,
              "Bad sizeof(InterfaceFactory_CreateCdm_Params_Data)");
class  InterfaceFactory_CreateDecryptor_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InterfaceFactory_CreateDecryptor_Params_Data));
      new (data()) InterfaceFactory_CreateDecryptor_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InterfaceFactory_CreateDecryptor_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InterfaceFactory_CreateDecryptor_Params_Data>(index_);
    }
    InterfaceFactory_CreateDecryptor_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t cdm_id;
  mojo::internal::Handle_Data decryptor;

 private:
  InterfaceFactory_CreateDecryptor_Params_Data();
  ~InterfaceFactory_CreateDecryptor_Params_Data() = delete;
};
static_assert(sizeof(InterfaceFactory_CreateDecryptor_Params_Data) == 16,
              "Bad sizeof(InterfaceFactory_CreateDecryptor_Params_Data)");
class  InterfaceFactory_CreateCdmProxy_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InterfaceFactory_CreateCdmProxy_Params_Data));
      new (data()) InterfaceFactory_CreateCdmProxy_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InterfaceFactory_CreateCdmProxy_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InterfaceFactory_CreateCdmProxy_Params_Data>(index_);
    }
    InterfaceFactory_CreateCdmProxy_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> cdm_guid;
  mojo::internal::Handle_Data cdm_proxy;
  uint8_t padfinal_[4];

 private:
  InterfaceFactory_CreateCdmProxy_Params_Data();
  ~InterfaceFactory_CreateCdmProxy_Params_Data() = delete;
};
static_assert(sizeof(InterfaceFactory_CreateCdmProxy_Params_Data) == 24,
              "Bad sizeof(InterfaceFactory_CreateCdmProxy_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_SHARED_INTERNAL_H_