// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_CHROME_RENDER_FRAME_MOJOM_SHARED_INTERNAL_H_
#define CHROME_COMMON_CHROME_RENDER_FRAME_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
#include "third_party/blink/public/web/window_features.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace chrome {
namespace mojom {
namespace internal {
using WebApplicationInfo_Data = mojo::native::internal::NativeStruct_Data;

struct ImageFormat_Data {
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
using BrowserControlsState_Data =
    mojo::internal::NativeEnum_Data;

#pragma pack(push, 1)
class  ChromeRenderFrame_SetWindowFeatures_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ChromeRenderFrame_SetWindowFeatures_Params_Data));
      new (data()) ChromeRenderFrame_SetWindowFeatures_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ChromeRenderFrame_SetWindowFeatures_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ChromeRenderFrame_SetWindowFeatures_Params_Data>(index_);
    }
    ChromeRenderFrame_SetWindowFeatures_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::WindowFeatures_Data> window_features;

 private:
  ChromeRenderFrame_SetWindowFeatures_Params_Data();
  ~ChromeRenderFrame_SetWindowFeatures_Params_Data() = delete;
};
static_assert(sizeof(ChromeRenderFrame_SetWindowFeatures_Params_Data) == 16,
              "Bad sizeof(ChromeRenderFrame_SetWindowFeatures_Params_Data)");
class  ChromeRenderFrame_RequestReloadImageForContextNode_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ChromeRenderFrame_RequestReloadImageForContextNode_Params_Data));
      new (data()) ChromeRenderFrame_RequestReloadImageForContextNode_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ChromeRenderFrame_RequestReloadImageForContextNode_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ChromeRenderFrame_RequestReloadImageForContextNode_Params_Data>(index_);
    }
    ChromeRenderFrame_RequestReloadImageForContextNode_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ChromeRenderFrame_RequestReloadImageForContextNode_Params_Data();
  ~ChromeRenderFrame_RequestReloadImageForContextNode_Params_Data() = delete;
};
static_assert(sizeof(ChromeRenderFrame_RequestReloadImageForContextNode_Params_Data) == 8,
              "Bad sizeof(ChromeRenderFrame_RequestReloadImageForContextNode_Params_Data)");
class  ChromeRenderFrame_RequestThumbnailForContextNode_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ChromeRenderFrame_RequestThumbnailForContextNode_Params_Data));
      new (data()) ChromeRenderFrame_RequestThumbnailForContextNode_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ChromeRenderFrame_RequestThumbnailForContextNode_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ChromeRenderFrame_RequestThumbnailForContextNode_Params_Data>(index_);
    }
    ChromeRenderFrame_RequestThumbnailForContextNode_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t thumbnail_min_area_pixels;
  int32_t image_format;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> thumbnail_max_size_pixels;

 private:
  ChromeRenderFrame_RequestThumbnailForContextNode_Params_Data();
  ~ChromeRenderFrame_RequestThumbnailForContextNode_Params_Data() = delete;
};
static_assert(sizeof(ChromeRenderFrame_RequestThumbnailForContextNode_Params_Data) == 24,
              "Bad sizeof(ChromeRenderFrame_RequestThumbnailForContextNode_Params_Data)");
class  ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParams_Data));
      new (data()) ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParams_Data>(index_);
    }
    ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> thumbnail_data;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> original_size;

 private:
  ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParams_Data();
  ~ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParams_Data() = delete;
};
static_assert(sizeof(ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParams_Data) == 24,
              "Bad sizeof(ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParams_Data)");
class  ChromeRenderFrame_ExecuteWebUIJavaScript_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ChromeRenderFrame_ExecuteWebUIJavaScript_Params_Data));
      new (data()) ChromeRenderFrame_ExecuteWebUIJavaScript_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ChromeRenderFrame_ExecuteWebUIJavaScript_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ChromeRenderFrame_ExecuteWebUIJavaScript_Params_Data>(index_);
    }
    ChromeRenderFrame_ExecuteWebUIJavaScript_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> javascript;

 private:
  ChromeRenderFrame_ExecuteWebUIJavaScript_Params_Data();
  ~ChromeRenderFrame_ExecuteWebUIJavaScript_Params_Data() = delete;
};
static_assert(sizeof(ChromeRenderFrame_ExecuteWebUIJavaScript_Params_Data) == 16,
              "Bad sizeof(ChromeRenderFrame_ExecuteWebUIJavaScript_Params_Data)");
class  ChromeRenderFrame_SetClientSidePhishingDetection_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ChromeRenderFrame_SetClientSidePhishingDetection_Params_Data));
      new (data()) ChromeRenderFrame_SetClientSidePhishingDetection_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ChromeRenderFrame_SetClientSidePhishingDetection_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ChromeRenderFrame_SetClientSidePhishingDetection_Params_Data>(index_);
    }
    ChromeRenderFrame_SetClientSidePhishingDetection_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t enable_phishing_detection : 1;
  uint8_t padfinal_[7];

 private:
  ChromeRenderFrame_SetClientSidePhishingDetection_Params_Data();
  ~ChromeRenderFrame_SetClientSidePhishingDetection_Params_Data() = delete;
};
static_assert(sizeof(ChromeRenderFrame_SetClientSidePhishingDetection_Params_Data) == 16,
              "Bad sizeof(ChromeRenderFrame_SetClientSidePhishingDetection_Params_Data)");
class  ChromeRenderFrame_GetWebApplicationInfo_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ChromeRenderFrame_GetWebApplicationInfo_Params_Data));
      new (data()) ChromeRenderFrame_GetWebApplicationInfo_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ChromeRenderFrame_GetWebApplicationInfo_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ChromeRenderFrame_GetWebApplicationInfo_Params_Data>(index_);
    }
    ChromeRenderFrame_GetWebApplicationInfo_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ChromeRenderFrame_GetWebApplicationInfo_Params_Data();
  ~ChromeRenderFrame_GetWebApplicationInfo_Params_Data() = delete;
};
static_assert(sizeof(ChromeRenderFrame_GetWebApplicationInfo_Params_Data) == 8,
              "Bad sizeof(ChromeRenderFrame_GetWebApplicationInfo_Params_Data)");
class  ChromeRenderFrame_GetWebApplicationInfo_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ChromeRenderFrame_GetWebApplicationInfo_ResponseParams_Data));
      new (data()) ChromeRenderFrame_GetWebApplicationInfo_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ChromeRenderFrame_GetWebApplicationInfo_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ChromeRenderFrame_GetWebApplicationInfo_ResponseParams_Data>(index_);
    }
    ChromeRenderFrame_GetWebApplicationInfo_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::WebApplicationInfo_Data> web_application_info;

 private:
  ChromeRenderFrame_GetWebApplicationInfo_ResponseParams_Data();
  ~ChromeRenderFrame_GetWebApplicationInfo_ResponseParams_Data() = delete;
};
static_assert(sizeof(ChromeRenderFrame_GetWebApplicationInfo_ResponseParams_Data) == 16,
              "Bad sizeof(ChromeRenderFrame_GetWebApplicationInfo_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_COMMON_CHROME_RENDER_FRAME_MOJOM_SHARED_INTERNAL_H_