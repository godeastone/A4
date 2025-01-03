// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_CLOUD_PRINT_MOJOM_SHARED_INTERNAL_H_
#define CHROME_COMMON_CLOUD_PRINT_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/values.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace cloud_print {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  CloudPrint_EnableCloudPrintProxyWithRobot_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CloudPrint_EnableCloudPrintProxyWithRobot_Params_Data));
      new (data()) CloudPrint_EnableCloudPrintProxyWithRobot_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CloudPrint_EnableCloudPrintProxyWithRobot_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CloudPrint_EnableCloudPrintProxyWithRobot_Params_Data>(index_);
    }
    CloudPrint_EnableCloudPrintProxyWithRobot_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> robot_auth_code;
  mojo::internal::Pointer<mojo::internal::String_Data> robot_email;
  mojo::internal::Pointer<mojo::internal::String_Data> user_email;
  mojo::internal::Pointer<::mojo_base::mojom::internal::DictionaryValue_Data> user_settings;

 private:
  CloudPrint_EnableCloudPrintProxyWithRobot_Params_Data();
  ~CloudPrint_EnableCloudPrintProxyWithRobot_Params_Data() = delete;
};
static_assert(sizeof(CloudPrint_EnableCloudPrintProxyWithRobot_Params_Data) == 40,
              "Bad sizeof(CloudPrint_EnableCloudPrintProxyWithRobot_Params_Data)");
class  CloudPrint_DisableCloudPrintProxy_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CloudPrint_DisableCloudPrintProxy_Params_Data));
      new (data()) CloudPrint_DisableCloudPrintProxy_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CloudPrint_DisableCloudPrintProxy_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CloudPrint_DisableCloudPrintProxy_Params_Data>(index_);
    }
    CloudPrint_DisableCloudPrintProxy_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  CloudPrint_DisableCloudPrintProxy_Params_Data();
  ~CloudPrint_DisableCloudPrintProxy_Params_Data() = delete;
};
static_assert(sizeof(CloudPrint_DisableCloudPrintProxy_Params_Data) == 8,
              "Bad sizeof(CloudPrint_DisableCloudPrintProxy_Params_Data)");
class  CloudPrint_GetCloudPrintProxyInfo_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CloudPrint_GetCloudPrintProxyInfo_Params_Data));
      new (data()) CloudPrint_GetCloudPrintProxyInfo_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CloudPrint_GetCloudPrintProxyInfo_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CloudPrint_GetCloudPrintProxyInfo_Params_Data>(index_);
    }
    CloudPrint_GetCloudPrintProxyInfo_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  CloudPrint_GetCloudPrintProxyInfo_Params_Data();
  ~CloudPrint_GetCloudPrintProxyInfo_Params_Data() = delete;
};
static_assert(sizeof(CloudPrint_GetCloudPrintProxyInfo_Params_Data) == 8,
              "Bad sizeof(CloudPrint_GetCloudPrintProxyInfo_Params_Data)");
class  CloudPrint_GetCloudPrintProxyInfo_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CloudPrint_GetCloudPrintProxyInfo_ResponseParams_Data));
      new (data()) CloudPrint_GetCloudPrintProxyInfo_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CloudPrint_GetCloudPrintProxyInfo_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CloudPrint_GetCloudPrintProxyInfo_ResponseParams_Data>(index_);
    }
    CloudPrint_GetCloudPrintProxyInfo_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t enabled : 1;
  uint8_t pad0_[7];
  mojo::internal::Pointer<mojo::internal::String_Data> email;
  mojo::internal::Pointer<mojo::internal::String_Data> proxy_id;

 private:
  CloudPrint_GetCloudPrintProxyInfo_ResponseParams_Data();
  ~CloudPrint_GetCloudPrintProxyInfo_ResponseParams_Data() = delete;
};
static_assert(sizeof(CloudPrint_GetCloudPrintProxyInfo_ResponseParams_Data) == 32,
              "Bad sizeof(CloudPrint_GetCloudPrintProxyInfo_ResponseParams_Data)");
class  CloudPrint_GetPrinters_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CloudPrint_GetPrinters_Params_Data));
      new (data()) CloudPrint_GetPrinters_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CloudPrint_GetPrinters_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CloudPrint_GetPrinters_Params_Data>(index_);
    }
    CloudPrint_GetPrinters_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  CloudPrint_GetPrinters_Params_Data();
  ~CloudPrint_GetPrinters_Params_Data() = delete;
};
static_assert(sizeof(CloudPrint_GetPrinters_Params_Data) == 8,
              "Bad sizeof(CloudPrint_GetPrinters_Params_Data)");
class  CloudPrint_GetPrinters_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CloudPrint_GetPrinters_ResponseParams_Data));
      new (data()) CloudPrint_GetPrinters_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CloudPrint_GetPrinters_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CloudPrint_GetPrinters_ResponseParams_Data>(index_);
    }
    CloudPrint_GetPrinters_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> printers;

 private:
  CloudPrint_GetPrinters_ResponseParams_Data();
  ~CloudPrint_GetPrinters_ResponseParams_Data() = delete;
};
static_assert(sizeof(CloudPrint_GetPrinters_ResponseParams_Data) == 16,
              "Bad sizeof(CloudPrint_GetPrinters_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace cloud_print

#endif  // CHROME_COMMON_CLOUD_PRINT_MOJOM_SHARED_INTERNAL_H_