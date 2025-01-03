// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_APP_BANNER_APP_BANNER_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_APP_BANNER_APP_BANNER_MOJOM_SHARED_INTERNAL_H_

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

struct AppBannerPromptReply_Data {
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
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) AppBannerController_BannerPromptRequest_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppBannerController_BannerPromptRequest_Params_Data));
      new (data()) AppBannerController_BannerPromptRequest_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppBannerController_BannerPromptRequest_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppBannerController_BannerPromptRequest_Params_Data>(index_);
    }
    AppBannerController_BannerPromptRequest_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data service;
  mojo::internal::Handle_Data event;
  uint8_t pad1_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> platform;

 private:
  AppBannerController_BannerPromptRequest_Params_Data();
  ~AppBannerController_BannerPromptRequest_Params_Data() = delete;
};
static_assert(sizeof(AppBannerController_BannerPromptRequest_Params_Data) == 32,
              "Bad sizeof(AppBannerController_BannerPromptRequest_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) AppBannerController_BannerPromptRequest_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppBannerController_BannerPromptRequest_ResponseParams_Data));
      new (data()) AppBannerController_BannerPromptRequest_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppBannerController_BannerPromptRequest_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppBannerController_BannerPromptRequest_ResponseParams_Data>(index_);
    }
    AppBannerController_BannerPromptRequest_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t reply;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> referrer;

 private:
  AppBannerController_BannerPromptRequest_ResponseParams_Data();
  ~AppBannerController_BannerPromptRequest_ResponseParams_Data() = delete;
};
static_assert(sizeof(AppBannerController_BannerPromptRequest_ResponseParams_Data) == 24,
              "Bad sizeof(AppBannerController_BannerPromptRequest_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) AppBannerEvent_BannerAccepted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppBannerEvent_BannerAccepted_Params_Data));
      new (data()) AppBannerEvent_BannerAccepted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppBannerEvent_BannerAccepted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppBannerEvent_BannerAccepted_Params_Data>(index_);
    }
    AppBannerEvent_BannerAccepted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> platform;

 private:
  AppBannerEvent_BannerAccepted_Params_Data();
  ~AppBannerEvent_BannerAccepted_Params_Data() = delete;
};
static_assert(sizeof(AppBannerEvent_BannerAccepted_Params_Data) == 16,
              "Bad sizeof(AppBannerEvent_BannerAccepted_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) AppBannerEvent_BannerDismissed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppBannerEvent_BannerDismissed_Params_Data));
      new (data()) AppBannerEvent_BannerDismissed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppBannerEvent_BannerDismissed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppBannerEvent_BannerDismissed_Params_Data>(index_);
    }
    AppBannerEvent_BannerDismissed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AppBannerEvent_BannerDismissed_Params_Data();
  ~AppBannerEvent_BannerDismissed_Params_Data() = delete;
};
static_assert(sizeof(AppBannerEvent_BannerDismissed_Params_Data) == 8,
              "Bad sizeof(AppBannerEvent_BannerDismissed_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) AppBannerService_DisplayAppBanner_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppBannerService_DisplayAppBanner_Params_Data));
      new (data()) AppBannerService_DisplayAppBanner_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppBannerService_DisplayAppBanner_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppBannerService_DisplayAppBanner_Params_Data>(index_);
    }
    AppBannerService_DisplayAppBanner_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t user_gesture : 1;
  uint8_t padfinal_[7];

 private:
  AppBannerService_DisplayAppBanner_Params_Data();
  ~AppBannerService_DisplayAppBanner_Params_Data() = delete;
};
static_assert(sizeof(AppBannerService_DisplayAppBanner_Params_Data) == 16,
              "Bad sizeof(AppBannerService_DisplayAppBanner_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_APP_BANNER_APP_BANNER_MOJOM_SHARED_INTERNAL_H_