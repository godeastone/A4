// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_INSECURE_INPUT_INSECURE_INPUT_SERVICE_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_INSECURE_INPUT_INSECURE_INPUT_SERVICE_MOJOM_SHARED_INTERNAL_H_

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
namespace blink {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) InsecureInputService_PasswordFieldVisibleInInsecureContext_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InsecureInputService_PasswordFieldVisibleInInsecureContext_Params_Data));
      new (data()) InsecureInputService_PasswordFieldVisibleInInsecureContext_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InsecureInputService_PasswordFieldVisibleInInsecureContext_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InsecureInputService_PasswordFieldVisibleInInsecureContext_Params_Data>(index_);
    }
    InsecureInputService_PasswordFieldVisibleInInsecureContext_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  InsecureInputService_PasswordFieldVisibleInInsecureContext_Params_Data();
  ~InsecureInputService_PasswordFieldVisibleInInsecureContext_Params_Data() = delete;
};
static_assert(sizeof(InsecureInputService_PasswordFieldVisibleInInsecureContext_Params_Data) == 8,
              "Bad sizeof(InsecureInputService_PasswordFieldVisibleInInsecureContext_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) InsecureInputService_AllPasswordFieldsInInsecureContextInvisible_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InsecureInputService_AllPasswordFieldsInInsecureContextInvisible_Params_Data));
      new (data()) InsecureInputService_AllPasswordFieldsInInsecureContextInvisible_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InsecureInputService_AllPasswordFieldsInInsecureContextInvisible_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InsecureInputService_AllPasswordFieldsInInsecureContextInvisible_Params_Data>(index_);
    }
    InsecureInputService_AllPasswordFieldsInInsecureContextInvisible_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  InsecureInputService_AllPasswordFieldsInInsecureContextInvisible_Params_Data();
  ~InsecureInputService_AllPasswordFieldsInInsecureContextInvisible_Params_Data() = delete;
};
static_assert(sizeof(InsecureInputService_AllPasswordFieldsInInsecureContextInvisible_Params_Data) == 8,
              "Bad sizeof(InsecureInputService_AllPasswordFieldsInInsecureContextInvisible_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) InsecureInputService_DidEditFieldInInsecureContext_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InsecureInputService_DidEditFieldInInsecureContext_Params_Data));
      new (data()) InsecureInputService_DidEditFieldInInsecureContext_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InsecureInputService_DidEditFieldInInsecureContext_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InsecureInputService_DidEditFieldInInsecureContext_Params_Data>(index_);
    }
    InsecureInputService_DidEditFieldInInsecureContext_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  InsecureInputService_DidEditFieldInInsecureContext_Params_Data();
  ~InsecureInputService_DidEditFieldInInsecureContext_Params_Data() = delete;
};
static_assert(sizeof(InsecureInputService_DidEditFieldInInsecureContext_Params_Data) == 8,
              "Bad sizeof(InsecureInputService_DidEditFieldInInsecureContext_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_INSECURE_INPUT_INSECURE_INPUT_SERVICE_MOJOM_SHARED_INTERNAL_H_