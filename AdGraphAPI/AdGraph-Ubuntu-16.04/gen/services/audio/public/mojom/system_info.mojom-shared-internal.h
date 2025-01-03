// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_AUDIO_PUBLIC_MOJOM_SYSTEM_INFO_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_AUDIO_PUBLIC_MOJOM_SYSTEM_INFO_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "media/mojo/interfaces/audio_parameters.mojom-shared-internal.h"
#include "services/audio/public/mojom/audio_device_description.mojom-shared-internal.h"
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

#pragma pack(push, 1)
class  SystemInfo_GetInputStreamParameters_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SystemInfo_GetInputStreamParameters_Params_Data));
      new (data()) SystemInfo_GetInputStreamParameters_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SystemInfo_GetInputStreamParameters_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SystemInfo_GetInputStreamParameters_Params_Data>(index_);
    }
    SystemInfo_GetInputStreamParameters_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> device_id;

 private:
  SystemInfo_GetInputStreamParameters_Params_Data();
  ~SystemInfo_GetInputStreamParameters_Params_Data() = delete;
};
static_assert(sizeof(SystemInfo_GetInputStreamParameters_Params_Data) == 16,
              "Bad sizeof(SystemInfo_GetInputStreamParameters_Params_Data)");
class  SystemInfo_GetInputStreamParameters_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SystemInfo_GetInputStreamParameters_ResponseParams_Data));
      new (data()) SystemInfo_GetInputStreamParameters_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SystemInfo_GetInputStreamParameters_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SystemInfo_GetInputStreamParameters_ResponseParams_Data>(index_);
    }
    SystemInfo_GetInputStreamParameters_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::AudioParameters_Data> params;

 private:
  SystemInfo_GetInputStreamParameters_ResponseParams_Data();
  ~SystemInfo_GetInputStreamParameters_ResponseParams_Data() = delete;
};
static_assert(sizeof(SystemInfo_GetInputStreamParameters_ResponseParams_Data) == 16,
              "Bad sizeof(SystemInfo_GetInputStreamParameters_ResponseParams_Data)");
class  SystemInfo_GetOutputStreamParameters_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SystemInfo_GetOutputStreamParameters_Params_Data));
      new (data()) SystemInfo_GetOutputStreamParameters_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SystemInfo_GetOutputStreamParameters_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SystemInfo_GetOutputStreamParameters_Params_Data>(index_);
    }
    SystemInfo_GetOutputStreamParameters_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> device_id;

 private:
  SystemInfo_GetOutputStreamParameters_Params_Data();
  ~SystemInfo_GetOutputStreamParameters_Params_Data() = delete;
};
static_assert(sizeof(SystemInfo_GetOutputStreamParameters_Params_Data) == 16,
              "Bad sizeof(SystemInfo_GetOutputStreamParameters_Params_Data)");
class  SystemInfo_GetOutputStreamParameters_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SystemInfo_GetOutputStreamParameters_ResponseParams_Data));
      new (data()) SystemInfo_GetOutputStreamParameters_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SystemInfo_GetOutputStreamParameters_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SystemInfo_GetOutputStreamParameters_ResponseParams_Data>(index_);
    }
    SystemInfo_GetOutputStreamParameters_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::AudioParameters_Data> params;

 private:
  SystemInfo_GetOutputStreamParameters_ResponseParams_Data();
  ~SystemInfo_GetOutputStreamParameters_ResponseParams_Data() = delete;
};
static_assert(sizeof(SystemInfo_GetOutputStreamParameters_ResponseParams_Data) == 16,
              "Bad sizeof(SystemInfo_GetOutputStreamParameters_ResponseParams_Data)");
class  SystemInfo_HasInputDevices_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SystemInfo_HasInputDevices_Params_Data));
      new (data()) SystemInfo_HasInputDevices_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SystemInfo_HasInputDevices_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SystemInfo_HasInputDevices_Params_Data>(index_);
    }
    SystemInfo_HasInputDevices_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SystemInfo_HasInputDevices_Params_Data();
  ~SystemInfo_HasInputDevices_Params_Data() = delete;
};
static_assert(sizeof(SystemInfo_HasInputDevices_Params_Data) == 8,
              "Bad sizeof(SystemInfo_HasInputDevices_Params_Data)");
class  SystemInfo_HasInputDevices_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SystemInfo_HasInputDevices_ResponseParams_Data));
      new (data()) SystemInfo_HasInputDevices_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SystemInfo_HasInputDevices_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SystemInfo_HasInputDevices_ResponseParams_Data>(index_);
    }
    SystemInfo_HasInputDevices_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t has_input_devices : 1;
  uint8_t padfinal_[7];

 private:
  SystemInfo_HasInputDevices_ResponseParams_Data();
  ~SystemInfo_HasInputDevices_ResponseParams_Data() = delete;
};
static_assert(sizeof(SystemInfo_HasInputDevices_ResponseParams_Data) == 16,
              "Bad sizeof(SystemInfo_HasInputDevices_ResponseParams_Data)");
class  SystemInfo_HasOutputDevices_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SystemInfo_HasOutputDevices_Params_Data));
      new (data()) SystemInfo_HasOutputDevices_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SystemInfo_HasOutputDevices_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SystemInfo_HasOutputDevices_Params_Data>(index_);
    }
    SystemInfo_HasOutputDevices_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SystemInfo_HasOutputDevices_Params_Data();
  ~SystemInfo_HasOutputDevices_Params_Data() = delete;
};
static_assert(sizeof(SystemInfo_HasOutputDevices_Params_Data) == 8,
              "Bad sizeof(SystemInfo_HasOutputDevices_Params_Data)");
class  SystemInfo_HasOutputDevices_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SystemInfo_HasOutputDevices_ResponseParams_Data));
      new (data()) SystemInfo_HasOutputDevices_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SystemInfo_HasOutputDevices_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SystemInfo_HasOutputDevices_ResponseParams_Data>(index_);
    }
    SystemInfo_HasOutputDevices_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t has_output_devices : 1;
  uint8_t padfinal_[7];

 private:
  SystemInfo_HasOutputDevices_ResponseParams_Data();
  ~SystemInfo_HasOutputDevices_ResponseParams_Data() = delete;
};
static_assert(sizeof(SystemInfo_HasOutputDevices_ResponseParams_Data) == 16,
              "Bad sizeof(SystemInfo_HasOutputDevices_ResponseParams_Data)");
class  SystemInfo_GetInputDeviceDescriptions_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SystemInfo_GetInputDeviceDescriptions_Params_Data));
      new (data()) SystemInfo_GetInputDeviceDescriptions_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SystemInfo_GetInputDeviceDescriptions_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SystemInfo_GetInputDeviceDescriptions_Params_Data>(index_);
    }
    SystemInfo_GetInputDeviceDescriptions_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SystemInfo_GetInputDeviceDescriptions_Params_Data();
  ~SystemInfo_GetInputDeviceDescriptions_Params_Data() = delete;
};
static_assert(sizeof(SystemInfo_GetInputDeviceDescriptions_Params_Data) == 8,
              "Bad sizeof(SystemInfo_GetInputDeviceDescriptions_Params_Data)");
class  SystemInfo_GetInputDeviceDescriptions_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SystemInfo_GetInputDeviceDescriptions_ResponseParams_Data));
      new (data()) SystemInfo_GetInputDeviceDescriptions_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SystemInfo_GetInputDeviceDescriptions_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SystemInfo_GetInputDeviceDescriptions_ResponseParams_Data>(index_);
    }
    SystemInfo_GetInputDeviceDescriptions_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::audio::mojom::internal::AudioDeviceDescription_Data>>> device_descriptions;

 private:
  SystemInfo_GetInputDeviceDescriptions_ResponseParams_Data();
  ~SystemInfo_GetInputDeviceDescriptions_ResponseParams_Data() = delete;
};
static_assert(sizeof(SystemInfo_GetInputDeviceDescriptions_ResponseParams_Data) == 16,
              "Bad sizeof(SystemInfo_GetInputDeviceDescriptions_ResponseParams_Data)");
class  SystemInfo_GetOutputDeviceDescriptions_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SystemInfo_GetOutputDeviceDescriptions_Params_Data));
      new (data()) SystemInfo_GetOutputDeviceDescriptions_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SystemInfo_GetOutputDeviceDescriptions_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SystemInfo_GetOutputDeviceDescriptions_Params_Data>(index_);
    }
    SystemInfo_GetOutputDeviceDescriptions_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SystemInfo_GetOutputDeviceDescriptions_Params_Data();
  ~SystemInfo_GetOutputDeviceDescriptions_Params_Data() = delete;
};
static_assert(sizeof(SystemInfo_GetOutputDeviceDescriptions_Params_Data) == 8,
              "Bad sizeof(SystemInfo_GetOutputDeviceDescriptions_Params_Data)");
class  SystemInfo_GetOutputDeviceDescriptions_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SystemInfo_GetOutputDeviceDescriptions_ResponseParams_Data));
      new (data()) SystemInfo_GetOutputDeviceDescriptions_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SystemInfo_GetOutputDeviceDescriptions_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SystemInfo_GetOutputDeviceDescriptions_ResponseParams_Data>(index_);
    }
    SystemInfo_GetOutputDeviceDescriptions_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::audio::mojom::internal::AudioDeviceDescription_Data>>> device_descriptions;

 private:
  SystemInfo_GetOutputDeviceDescriptions_ResponseParams_Data();
  ~SystemInfo_GetOutputDeviceDescriptions_ResponseParams_Data() = delete;
};
static_assert(sizeof(SystemInfo_GetOutputDeviceDescriptions_ResponseParams_Data) == 16,
              "Bad sizeof(SystemInfo_GetOutputDeviceDescriptions_ResponseParams_Data)");
class  SystemInfo_GetAssociatedOutputDeviceID_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SystemInfo_GetAssociatedOutputDeviceID_Params_Data));
      new (data()) SystemInfo_GetAssociatedOutputDeviceID_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SystemInfo_GetAssociatedOutputDeviceID_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SystemInfo_GetAssociatedOutputDeviceID_Params_Data>(index_);
    }
    SystemInfo_GetAssociatedOutputDeviceID_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> input_device_id;

 private:
  SystemInfo_GetAssociatedOutputDeviceID_Params_Data();
  ~SystemInfo_GetAssociatedOutputDeviceID_Params_Data() = delete;
};
static_assert(sizeof(SystemInfo_GetAssociatedOutputDeviceID_Params_Data) == 16,
              "Bad sizeof(SystemInfo_GetAssociatedOutputDeviceID_Params_Data)");
class  SystemInfo_GetAssociatedOutputDeviceID_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SystemInfo_GetAssociatedOutputDeviceID_ResponseParams_Data));
      new (data()) SystemInfo_GetAssociatedOutputDeviceID_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SystemInfo_GetAssociatedOutputDeviceID_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SystemInfo_GetAssociatedOutputDeviceID_ResponseParams_Data>(index_);
    }
    SystemInfo_GetAssociatedOutputDeviceID_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> associated_output_device_id;

 private:
  SystemInfo_GetAssociatedOutputDeviceID_ResponseParams_Data();
  ~SystemInfo_GetAssociatedOutputDeviceID_ResponseParams_Data() = delete;
};
static_assert(sizeof(SystemInfo_GetAssociatedOutputDeviceID_ResponseParams_Data) == 16,
              "Bad sizeof(SystemInfo_GetAssociatedOutputDeviceID_ResponseParams_Data)");
class  SystemInfo_GetInputDeviceInfo_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SystemInfo_GetInputDeviceInfo_Params_Data));
      new (data()) SystemInfo_GetInputDeviceInfo_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SystemInfo_GetInputDeviceInfo_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SystemInfo_GetInputDeviceInfo_Params_Data>(index_);
    }
    SystemInfo_GetInputDeviceInfo_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> input_device_id;

 private:
  SystemInfo_GetInputDeviceInfo_Params_Data();
  ~SystemInfo_GetInputDeviceInfo_Params_Data() = delete;
};
static_assert(sizeof(SystemInfo_GetInputDeviceInfo_Params_Data) == 16,
              "Bad sizeof(SystemInfo_GetInputDeviceInfo_Params_Data)");
class  SystemInfo_GetInputDeviceInfo_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SystemInfo_GetInputDeviceInfo_ResponseParams_Data));
      new (data()) SystemInfo_GetInputDeviceInfo_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SystemInfo_GetInputDeviceInfo_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SystemInfo_GetInputDeviceInfo_ResponseParams_Data>(index_);
    }
    SystemInfo_GetInputDeviceInfo_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::AudioParameters_Data> input_params;
  mojo::internal::Pointer<mojo::internal::String_Data> associated_output_device_id;

 private:
  SystemInfo_GetInputDeviceInfo_ResponseParams_Data();
  ~SystemInfo_GetInputDeviceInfo_ResponseParams_Data() = delete;
};
static_assert(sizeof(SystemInfo_GetInputDeviceInfo_ResponseParams_Data) == 24,
              "Bad sizeof(SystemInfo_GetInputDeviceInfo_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace audio

#endif  // SERVICES_AUDIO_PUBLIC_MOJOM_SYSTEM_INFO_MOJOM_SHARED_INTERNAL_H_