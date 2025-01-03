// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_PLUGIN_MOJOM_SHARED_INTERNAL_H_
#define CHROME_COMMON_PLUGIN_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "content/public/common/webplugininfo.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file_path.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
#include "url/mojom/origin.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
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
class PluginInfo_Data;
class PluginParam_Data;

struct PluginStatus_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 11:
      case 12:
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
class  PluginInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PluginInfo_Data));
      new (data()) PluginInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PluginInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PluginInfo_Data>(index_);
    }
    PluginInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::content::mojom::internal::WebPluginInfo_Data> plugin;
  mojo::internal::Pointer<mojo::internal::String_Data> actual_mime_type;
  mojo::internal::Pointer<mojo::internal::String_Data> group_identifier;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> group_name;

 private:
  PluginInfo_Data();
  ~PluginInfo_Data() = delete;
};
static_assert(sizeof(PluginInfo_Data) == 48,
              "Bad sizeof(PluginInfo_Data)");
// Used by PluginInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PluginInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PluginInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PluginInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PluginInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PluginInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  PluginParam_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PluginParam_Data));
      new (data()) PluginParam_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PluginParam_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PluginParam_Data>(index_);
    }
    PluginParam_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> name;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> value;

 private:
  PluginParam_Data();
  ~PluginParam_Data() = delete;
};
static_assert(sizeof(PluginParam_Data) == 24,
              "Bad sizeof(PluginParam_Data)");
// Used by PluginParam::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PluginParam_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PluginParam_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PluginParam_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PluginParam_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PluginParam_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  PluginHost_ShowFlashPermissionBubble_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PluginHost_ShowFlashPermissionBubble_Params_Data));
      new (data()) PluginHost_ShowFlashPermissionBubble_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PluginHost_ShowFlashPermissionBubble_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PluginHost_ShowFlashPermissionBubble_Params_Data>(index_);
    }
    PluginHost_ShowFlashPermissionBubble_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PluginHost_ShowFlashPermissionBubble_Params_Data();
  ~PluginHost_ShowFlashPermissionBubble_Params_Data() = delete;
};
static_assert(sizeof(PluginHost_ShowFlashPermissionBubble_Params_Data) == 8,
              "Bad sizeof(PluginHost_ShowFlashPermissionBubble_Params_Data)");
class  PluginHost_CouldNotLoadPlugin_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PluginHost_CouldNotLoadPlugin_Params_Data));
      new (data()) PluginHost_CouldNotLoadPlugin_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PluginHost_CouldNotLoadPlugin_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PluginHost_CouldNotLoadPlugin_Params_Data>(index_);
    }
    PluginHost_CouldNotLoadPlugin_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::FilePath_Data> file_path;

 private:
  PluginHost_CouldNotLoadPlugin_Params_Data();
  ~PluginHost_CouldNotLoadPlugin_Params_Data() = delete;
};
static_assert(sizeof(PluginHost_CouldNotLoadPlugin_Params_Data) == 16,
              "Bad sizeof(PluginHost_CouldNotLoadPlugin_Params_Data)");
class  PluginHost_BlockedOutdatedPlugin_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PluginHost_BlockedOutdatedPlugin_Params_Data));
      new (data()) PluginHost_BlockedOutdatedPlugin_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PluginHost_BlockedOutdatedPlugin_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PluginHost_BlockedOutdatedPlugin_Params_Data>(index_);
    }
    PluginHost_BlockedOutdatedPlugin_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data plugin_renderer;
  mojo::internal::Pointer<mojo::internal::String_Data> group_id;

 private:
  PluginHost_BlockedOutdatedPlugin_Params_Data();
  ~PluginHost_BlockedOutdatedPlugin_Params_Data() = delete;
};
static_assert(sizeof(PluginHost_BlockedOutdatedPlugin_Params_Data) == 24,
              "Bad sizeof(PluginHost_BlockedOutdatedPlugin_Params_Data)");
class  PluginHost_BlockedComponentUpdatedPlugin_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PluginHost_BlockedComponentUpdatedPlugin_Params_Data));
      new (data()) PluginHost_BlockedComponentUpdatedPlugin_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PluginHost_BlockedComponentUpdatedPlugin_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PluginHost_BlockedComponentUpdatedPlugin_Params_Data>(index_);
    }
    PluginHost_BlockedComponentUpdatedPlugin_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data plugin_renderer;
  mojo::internal::Pointer<mojo::internal::String_Data> group_id;

 private:
  PluginHost_BlockedComponentUpdatedPlugin_Params_Data();
  ~PluginHost_BlockedComponentUpdatedPlugin_Params_Data() = delete;
};
static_assert(sizeof(PluginHost_BlockedComponentUpdatedPlugin_Params_Data) == 24,
              "Bad sizeof(PluginHost_BlockedComponentUpdatedPlugin_Params_Data)");
class  PluginAuthHost_BlockedUnauthorizedPlugin_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PluginAuthHost_BlockedUnauthorizedPlugin_Params_Data));
      new (data()) PluginAuthHost_BlockedUnauthorizedPlugin_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PluginAuthHost_BlockedUnauthorizedPlugin_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PluginAuthHost_BlockedUnauthorizedPlugin_Params_Data>(index_);
    }
    PluginAuthHost_BlockedUnauthorizedPlugin_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> name;
  mojo::internal::Pointer<mojo::internal::String_Data> group_id;

 private:
  PluginAuthHost_BlockedUnauthorizedPlugin_Params_Data();
  ~PluginAuthHost_BlockedUnauthorizedPlugin_Params_Data() = delete;
};
static_assert(sizeof(PluginAuthHost_BlockedUnauthorizedPlugin_Params_Data) == 24,
              "Bad sizeof(PluginAuthHost_BlockedUnauthorizedPlugin_Params_Data)");
class  PluginInfoHost_GetPluginInfo_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PluginInfoHost_GetPluginInfo_Params_Data));
      new (data()) PluginInfoHost_GetPluginInfo_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PluginInfoHost_GetPluginInfo_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PluginInfoHost_GetPluginInfo_Params_Data>(index_);
    }
    PluginInfoHost_GetPluginInfo_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t render_frame_id;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;
  mojo::internal::Pointer<mojo::internal::String_Data> mime_type;

 private:
  PluginInfoHost_GetPluginInfo_Params_Data();
  ~PluginInfoHost_GetPluginInfo_Params_Data() = delete;
};
static_assert(sizeof(PluginInfoHost_GetPluginInfo_Params_Data) == 40,
              "Bad sizeof(PluginInfoHost_GetPluginInfo_Params_Data)");
class  PluginInfoHost_GetPluginInfo_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PluginInfoHost_GetPluginInfo_ResponseParams_Data));
      new (data()) PluginInfoHost_GetPluginInfo_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PluginInfoHost_GetPluginInfo_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PluginInfoHost_GetPluginInfo_ResponseParams_Data>(index_);
    }
    PluginInfoHost_GetPluginInfo_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PluginInfo_Data> plugin_info;

 private:
  PluginInfoHost_GetPluginInfo_ResponseParams_Data();
  ~PluginInfoHost_GetPluginInfo_ResponseParams_Data() = delete;
};
static_assert(sizeof(PluginInfoHost_GetPluginInfo_ResponseParams_Data) == 16,
              "Bad sizeof(PluginInfoHost_GetPluginInfo_ResponseParams_Data)");
class  PluginRenderer_FinishedDownloading_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PluginRenderer_FinishedDownloading_Params_Data));
      new (data()) PluginRenderer_FinishedDownloading_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PluginRenderer_FinishedDownloading_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PluginRenderer_FinishedDownloading_Params_Data>(index_);
    }
    PluginRenderer_FinishedDownloading_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PluginRenderer_FinishedDownloading_Params_Data();
  ~PluginRenderer_FinishedDownloading_Params_Data() = delete;
};
static_assert(sizeof(PluginRenderer_FinishedDownloading_Params_Data) == 8,
              "Bad sizeof(PluginRenderer_FinishedDownloading_Params_Data)");
class  PluginRenderer_UpdateSuccess_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PluginRenderer_UpdateSuccess_Params_Data));
      new (data()) PluginRenderer_UpdateSuccess_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PluginRenderer_UpdateSuccess_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PluginRenderer_UpdateSuccess_Params_Data>(index_);
    }
    PluginRenderer_UpdateSuccess_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PluginRenderer_UpdateSuccess_Params_Data();
  ~PluginRenderer_UpdateSuccess_Params_Data() = delete;
};
static_assert(sizeof(PluginRenderer_UpdateSuccess_Params_Data) == 8,
              "Bad sizeof(PluginRenderer_UpdateSuccess_Params_Data)");
class  PluginRenderer_UpdateFailure_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PluginRenderer_UpdateFailure_Params_Data));
      new (data()) PluginRenderer_UpdateFailure_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PluginRenderer_UpdateFailure_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PluginRenderer_UpdateFailure_Params_Data>(index_);
    }
    PluginRenderer_UpdateFailure_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PluginRenderer_UpdateFailure_Params_Data();
  ~PluginRenderer_UpdateFailure_Params_Data() = delete;
};
static_assert(sizeof(PluginRenderer_UpdateFailure_Params_Data) == 8,
              "Bad sizeof(PluginRenderer_UpdateFailure_Params_Data)");
class  PluginRenderer_UpdateDownloading_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PluginRenderer_UpdateDownloading_Params_Data));
      new (data()) PluginRenderer_UpdateDownloading_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PluginRenderer_UpdateDownloading_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PluginRenderer_UpdateDownloading_Params_Data>(index_);
    }
    PluginRenderer_UpdateDownloading_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PluginRenderer_UpdateDownloading_Params_Data();
  ~PluginRenderer_UpdateDownloading_Params_Data() = delete;
};
static_assert(sizeof(PluginRenderer_UpdateDownloading_Params_Data) == 8,
              "Bad sizeof(PluginRenderer_UpdateDownloading_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_COMMON_PLUGIN_MOJOM_SHARED_INTERNAL_H_