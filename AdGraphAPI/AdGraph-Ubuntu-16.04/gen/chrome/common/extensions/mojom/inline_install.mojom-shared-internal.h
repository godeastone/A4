// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_EXTENSIONS_MOJOM_INLINE_INSTALL_MOJOM_SHARED_INTERNAL_H_
#define CHROME_COMMON_EXTENSIONS_MOJOM_INLINE_INSTALL_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace extensions {
namespace mojom {
namespace internal {
using WebstoreInstallResult_Data =
    mojo::internal::NativeEnum_Data;
using WebstoreInstallStage_Data =
    mojo::internal::NativeEnum_Data;

#pragma pack(push, 1)
class  InlineInstallProgressListener_InlineInstallStageChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InlineInstallProgressListener_InlineInstallStageChanged_Params_Data));
      new (data()) InlineInstallProgressListener_InlineInstallStageChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InlineInstallProgressListener_InlineInstallStageChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InlineInstallProgressListener_InlineInstallStageChanged_Params_Data>(index_);
    }
    InlineInstallProgressListener_InlineInstallStageChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t stage;
  uint8_t padfinal_[4];

 private:
  InlineInstallProgressListener_InlineInstallStageChanged_Params_Data();
  ~InlineInstallProgressListener_InlineInstallStageChanged_Params_Data() = delete;
};
static_assert(sizeof(InlineInstallProgressListener_InlineInstallStageChanged_Params_Data) == 16,
              "Bad sizeof(InlineInstallProgressListener_InlineInstallStageChanged_Params_Data)");
class  InlineInstallProgressListener_InlineInstallDownloadProgress_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InlineInstallProgressListener_InlineInstallDownloadProgress_Params_Data));
      new (data()) InlineInstallProgressListener_InlineInstallDownloadProgress_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InlineInstallProgressListener_InlineInstallDownloadProgress_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InlineInstallProgressListener_InlineInstallDownloadProgress_Params_Data>(index_);
    }
    InlineInstallProgressListener_InlineInstallDownloadProgress_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t percent_downloaded;
  uint8_t padfinal_[4];

 private:
  InlineInstallProgressListener_InlineInstallDownloadProgress_Params_Data();
  ~InlineInstallProgressListener_InlineInstallDownloadProgress_Params_Data() = delete;
};
static_assert(sizeof(InlineInstallProgressListener_InlineInstallDownloadProgress_Params_Data) == 16,
              "Bad sizeof(InlineInstallProgressListener_InlineInstallDownloadProgress_Params_Data)");
class  InlineInstaller_DoInlineInstall_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InlineInstaller_DoInlineInstall_Params_Data));
      new (data()) InlineInstaller_DoInlineInstall_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InlineInstaller_DoInlineInstall_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InlineInstaller_DoInlineInstall_Params_Data>(index_);
    }
    InlineInstaller_DoInlineInstall_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> webstore_item_id;
  int32_t listeners_mask;
  mojo::internal::Interface_Data install_progress_listener;
  uint8_t padfinal_[4];

 private:
  InlineInstaller_DoInlineInstall_Params_Data();
  ~InlineInstaller_DoInlineInstall_Params_Data() = delete;
};
static_assert(sizeof(InlineInstaller_DoInlineInstall_Params_Data) == 32,
              "Bad sizeof(InlineInstaller_DoInlineInstall_Params_Data)");
class  InlineInstaller_DoInlineInstall_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InlineInstaller_DoInlineInstall_ResponseParams_Data));
      new (data()) InlineInstaller_DoInlineInstall_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InlineInstaller_DoInlineInstall_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InlineInstaller_DoInlineInstall_ResponseParams_Data>(index_);
    }
    InlineInstaller_DoInlineInstall_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t pad0_[3];
  int32_t result;
  mojo::internal::Pointer<mojo::internal::String_Data> error;

 private:
  InlineInstaller_DoInlineInstall_ResponseParams_Data();
  ~InlineInstaller_DoInlineInstall_ResponseParams_Data() = delete;
};
static_assert(sizeof(InlineInstaller_DoInlineInstall_ResponseParams_Data) == 24,
              "Bad sizeof(InlineInstaller_DoInlineInstall_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace extensions

#endif  // CHROME_COMMON_EXTENSIONS_MOJOM_INLINE_INSTALL_MOJOM_SHARED_INTERNAL_H_