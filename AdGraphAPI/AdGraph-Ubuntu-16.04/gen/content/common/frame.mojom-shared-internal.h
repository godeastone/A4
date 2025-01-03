// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_FRAME_MOJOM_SHARED_INTERNAL_H_
#define CONTENT_COMMON_FRAME_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "content/common/navigation_params.mojom-shared-internal.h"
#include "content/common/service_worker/controller_service_worker.mojom-shared-internal.h"
#include "content/common/url_loader_factory_bundle.mojom-shared-internal.h"
#include "content/public/common/resource_type.mojom-shared-internal.h"
#include "content/public/common/resource_load_info.mojom-shared-internal.h"
#include "content/public/common/transferrable_url_loader.mojom-shared-internal.h"
#include "content/public/common/window_container_type.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared-internal.h"
#include "services/network/public/mojom/url_loader.mojom-shared-internal.h"
#include "services/service_manager/public/mojom/interface_provider.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/surface_id.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/blob/blob_url_store.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/feature_policy/feature_policy.mojom-shared-internal.h"
#include "third_party/blink/public/platform/referrer.mojom-shared-internal.h"
#include "third_party/blink/public/web/commit_result.mojom-shared-internal.h"
#include "third_party/blink/public/web/window_features.mojom-shared-internal.h"
#include "ui/base/mojo/window_open_disposition.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
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
using CommonNavigationParams_Data = mojo::native::internal::NativeStruct_Data;
using RequestNavigationParams_Data = mojo::native::internal::NativeStruct_Data;
class CreateNewWindowParams_Data;
class CreateNewWindowReply_Data;
using DidCommitProvisionalLoadParams_Data = mojo::native::internal::NativeStruct_Data;

struct CreateNewWindowStatus_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
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
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) CreateNewWindowParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CreateNewWindowParams_Data));
      new (data()) CreateNewWindowParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CreateNewWindowParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CreateNewWindowParams_Data>(index_);
    }
    CreateNewWindowParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t user_gesture : 1;
  uint8_t opener_suppressed : 1;
  uint8_t pad1_[3];
  int32_t window_container_type;
  mojo::internal::Pointer<mojo::internal::String_Data> session_storage_namespace_id;
  mojo::internal::Pointer<mojo::internal::String_Data> clone_from_session_storage_namespace_id;
  mojo::internal::Pointer<mojo::internal::String_Data> frame_name;
  int32_t disposition;
  uint8_t pad6_[4];
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> target_url;
  mojo::internal::Pointer<::blink::mojom::internal::Referrer_Data> referrer;
  mojo::internal::Pointer<::blink::mojom::internal::WindowFeatures_Data> features;

 private:
  CreateNewWindowParams_Data();
  ~CreateNewWindowParams_Data() = delete;
};
static_assert(sizeof(CreateNewWindowParams_Data) == 72,
              "Bad sizeof(CreateNewWindowParams_Data)");
// Used by CreateNewWindowParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CreateNewWindowParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CreateNewWindowParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CreateNewWindowParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CreateNewWindowParams_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CreateNewWindowParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) CreateNewWindowReply_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CreateNewWindowReply_Data));
      new (data()) CreateNewWindowReply_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CreateNewWindowReply_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CreateNewWindowReply_Data>(index_);
    }
    CreateNewWindowReply_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t route_id;
  int32_t main_frame_route_id;
  int32_t main_frame_widget_route_id;
  mojo::internal::Interface_Data main_frame_interface_provider;
  uint8_t pad3_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> cloned_session_storage_namespace_id;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> devtools_main_frame_token;

 private:
  CreateNewWindowReply_Data();
  ~CreateNewWindowReply_Data() = delete;
};
static_assert(sizeof(CreateNewWindowReply_Data) == 48,
              "Bad sizeof(CreateNewWindowReply_Data)");
// Used by CreateNewWindowReply::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CreateNewWindowReply_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CreateNewWindowReply_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CreateNewWindowReply_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CreateNewWindowReply_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CreateNewWindowReply_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Frame_GetInterfaceProvider_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Frame_GetInterfaceProvider_Params_Data));
      new (data()) Frame_GetInterfaceProvider_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Frame_GetInterfaceProvider_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Frame_GetInterfaceProvider_Params_Data>(index_);
    }
    Frame_GetInterfaceProvider_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data interfaces;
  uint8_t padfinal_[4];

 private:
  Frame_GetInterfaceProvider_Params_Data();
  ~Frame_GetInterfaceProvider_Params_Data() = delete;
};
static_assert(sizeof(Frame_GetInterfaceProvider_Params_Data) == 16,
              "Bad sizeof(Frame_GetInterfaceProvider_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Frame_GetCanonicalUrlForSharing_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Frame_GetCanonicalUrlForSharing_Params_Data));
      new (data()) Frame_GetCanonicalUrlForSharing_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Frame_GetCanonicalUrlForSharing_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Frame_GetCanonicalUrlForSharing_Params_Data>(index_);
    }
    Frame_GetCanonicalUrlForSharing_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Frame_GetCanonicalUrlForSharing_Params_Data();
  ~Frame_GetCanonicalUrlForSharing_Params_Data() = delete;
};
static_assert(sizeof(Frame_GetCanonicalUrlForSharing_Params_Data) == 8,
              "Bad sizeof(Frame_GetCanonicalUrlForSharing_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Frame_GetCanonicalUrlForSharing_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Frame_GetCanonicalUrlForSharing_ResponseParams_Data));
      new (data()) Frame_GetCanonicalUrlForSharing_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Frame_GetCanonicalUrlForSharing_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Frame_GetCanonicalUrlForSharing_ResponseParams_Data>(index_);
    }
    Frame_GetCanonicalUrlForSharing_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> canonical_url;

 private:
  Frame_GetCanonicalUrlForSharing_ResponseParams_Data();
  ~Frame_GetCanonicalUrlForSharing_ResponseParams_Data() = delete;
};
static_assert(sizeof(Frame_GetCanonicalUrlForSharing_ResponseParams_Data) == 16,
              "Bad sizeof(Frame_GetCanonicalUrlForSharing_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameNavigationControl_CommitNavigation_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameNavigationControl_CommitNavigation_Params_Data));
      new (data()) FrameNavigationControl_CommitNavigation_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameNavigationControl_CommitNavigation_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameNavigationControl_CommitNavigation_Params_Data>(index_);
    }
    FrameNavigationControl_CommitNavigation_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::URLResponseHead_Data> head;
  mojo::internal::Pointer<internal::CommonNavigationParams_Data> common_params;
  mojo::internal::Pointer<internal::RequestNavigationParams_Data> request_params;
  mojo::internal::Pointer<::network::mojom::internal::URLLoaderClientEndpoints_Data> url_loader_client_endpoints;
  mojo::internal::Pointer<::content::mojom::internal::URLLoaderFactoryBundle_Data> subresource_loader_factories;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::content::mojom::internal::TransferrableURLLoader_Data>>> subresource_overrides;
  mojo::internal::Pointer<::content::mojom::internal::ControllerServiceWorkerInfo_Data> controller_service_worker_info;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> devtools_navigation_token;

 private:
  FrameNavigationControl_CommitNavigation_Params_Data();
  ~FrameNavigationControl_CommitNavigation_Params_Data() = delete;
};
static_assert(sizeof(FrameNavigationControl_CommitNavigation_Params_Data) == 72,
              "Bad sizeof(FrameNavigationControl_CommitNavigation_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameNavigationControl_CommitFailedNavigation_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameNavigationControl_CommitFailedNavigation_Params_Data));
      new (data()) FrameNavigationControl_CommitFailedNavigation_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameNavigationControl_CommitFailedNavigation_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameNavigationControl_CommitFailedNavigation_Params_Data>(index_);
    }
    FrameNavigationControl_CommitFailedNavigation_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CommonNavigationParams_Data> common_params;
  mojo::internal::Pointer<internal::RequestNavigationParams_Data> request_params;
  uint8_t has_stale_copy_in_cache : 1;
  uint8_t pad2_[3];
  int32_t error_code;
  mojo::internal::Pointer<mojo::internal::String_Data> error_page_content;
  mojo::internal::Pointer<::content::mojom::internal::URLLoaderFactoryBundle_Data> subresource_loader_factories;

 private:
  FrameNavigationControl_CommitFailedNavigation_Params_Data();
  ~FrameNavigationControl_CommitFailedNavigation_Params_Data() = delete;
};
static_assert(sizeof(FrameNavigationControl_CommitFailedNavigation_Params_Data) == 48,
              "Bad sizeof(FrameNavigationControl_CommitFailedNavigation_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameNavigationControl_CommitSameDocumentNavigation_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameNavigationControl_CommitSameDocumentNavigation_Params_Data));
      new (data()) FrameNavigationControl_CommitSameDocumentNavigation_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameNavigationControl_CommitSameDocumentNavigation_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameNavigationControl_CommitSameDocumentNavigation_Params_Data>(index_);
    }
    FrameNavigationControl_CommitSameDocumentNavigation_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CommonNavigationParams_Data> common_params;
  mojo::internal::Pointer<internal::RequestNavigationParams_Data> request_params;

 private:
  FrameNavigationControl_CommitSameDocumentNavigation_Params_Data();
  ~FrameNavigationControl_CommitSameDocumentNavigation_Params_Data() = delete;
};
static_assert(sizeof(FrameNavigationControl_CommitSameDocumentNavigation_Params_Data) == 24,
              "Bad sizeof(FrameNavigationControl_CommitSameDocumentNavigation_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameNavigationControl_CommitSameDocumentNavigation_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameNavigationControl_CommitSameDocumentNavigation_ResponseParams_Data));
      new (data()) FrameNavigationControl_CommitSameDocumentNavigation_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameNavigationControl_CommitSameDocumentNavigation_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameNavigationControl_CommitSameDocumentNavigation_ResponseParams_Data>(index_);
    }
    FrameNavigationControl_CommitSameDocumentNavigation_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t commit_result;
  uint8_t padfinal_[4];

 private:
  FrameNavigationControl_CommitSameDocumentNavigation_ResponseParams_Data();
  ~FrameNavigationControl_CommitSameDocumentNavigation_ResponseParams_Data() = delete;
};
static_assert(sizeof(FrameNavigationControl_CommitSameDocumentNavigation_ResponseParams_Data) == 16,
              "Bad sizeof(FrameNavigationControl_CommitSameDocumentNavigation_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameNavigationControl_HandleRendererDebugURL_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameNavigationControl_HandleRendererDebugURL_Params_Data));
      new (data()) FrameNavigationControl_HandleRendererDebugURL_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameNavigationControl_HandleRendererDebugURL_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameNavigationControl_HandleRendererDebugURL_Params_Data>(index_);
    }
    FrameNavigationControl_HandleRendererDebugURL_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;

 private:
  FrameNavigationControl_HandleRendererDebugURL_Params_Data();
  ~FrameNavigationControl_HandleRendererDebugURL_Params_Data() = delete;
};
static_assert(sizeof(FrameNavigationControl_HandleRendererDebugURL_Params_Data) == 16,
              "Bad sizeof(FrameNavigationControl_HandleRendererDebugURL_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameNavigationControl_UpdateSubresourceLoaderFactories_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameNavigationControl_UpdateSubresourceLoaderFactories_Params_Data));
      new (data()) FrameNavigationControl_UpdateSubresourceLoaderFactories_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameNavigationControl_UpdateSubresourceLoaderFactories_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameNavigationControl_UpdateSubresourceLoaderFactories_Params_Data>(index_);
    }
    FrameNavigationControl_UpdateSubresourceLoaderFactories_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::content::mojom::internal::URLLoaderFactoryBundle_Data> subresource_loader_factories;

 private:
  FrameNavigationControl_UpdateSubresourceLoaderFactories_Params_Data();
  ~FrameNavigationControl_UpdateSubresourceLoaderFactories_Params_Data() = delete;
};
static_assert(sizeof(FrameNavigationControl_UpdateSubresourceLoaderFactories_Params_Data) == 16,
              "Bad sizeof(FrameNavigationControl_UpdateSubresourceLoaderFactories_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameBindingsControl_AllowBindings_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameBindingsControl_AllowBindings_Params_Data));
      new (data()) FrameBindingsControl_AllowBindings_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameBindingsControl_AllowBindings_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameBindingsControl_AllowBindings_Params_Data>(index_);
    }
    FrameBindingsControl_AllowBindings_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t enabled_bindings_flags;
  uint8_t padfinal_[4];

 private:
  FrameBindingsControl_AllowBindings_Params_Data();
  ~FrameBindingsControl_AllowBindings_Params_Data() = delete;
};
static_assert(sizeof(FrameBindingsControl_AllowBindings_Params_Data) == 16,
              "Bad sizeof(FrameBindingsControl_AllowBindings_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameFactory_CreateFrame_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameFactory_CreateFrame_Params_Data));
      new (data()) FrameFactory_CreateFrame_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameFactory_CreateFrame_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameFactory_CreateFrame_Params_Data>(index_);
    }
    FrameFactory_CreateFrame_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t frame_routing_id;
  mojo::internal::Handle_Data frame;

 private:
  FrameFactory_CreateFrame_Params_Data();
  ~FrameFactory_CreateFrame_Params_Data() = delete;
};
static_assert(sizeof(FrameFactory_CreateFrame_Params_Data) == 16,
              "Bad sizeof(FrameFactory_CreateFrame_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameHost_CreateNewWindow_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameHost_CreateNewWindow_Params_Data));
      new (data()) FrameHost_CreateNewWindow_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameHost_CreateNewWindow_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameHost_CreateNewWindow_Params_Data>(index_);
    }
    FrameHost_CreateNewWindow_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CreateNewWindowParams_Data> params;

 private:
  FrameHost_CreateNewWindow_Params_Data();
  ~FrameHost_CreateNewWindow_Params_Data() = delete;
};
static_assert(sizeof(FrameHost_CreateNewWindow_Params_Data) == 16,
              "Bad sizeof(FrameHost_CreateNewWindow_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameHost_CreateNewWindow_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameHost_CreateNewWindow_ResponseParams_Data));
      new (data()) FrameHost_CreateNewWindow_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameHost_CreateNewWindow_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameHost_CreateNewWindow_ResponseParams_Data>(index_);
    }
    FrameHost_CreateNewWindow_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<internal::CreateNewWindowReply_Data> reply;

 private:
  FrameHost_CreateNewWindow_ResponseParams_Data();
  ~FrameHost_CreateNewWindow_ResponseParams_Data() = delete;
};
static_assert(sizeof(FrameHost_CreateNewWindow_ResponseParams_Data) == 24,
              "Bad sizeof(FrameHost_CreateNewWindow_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameHost_IssueKeepAliveHandle_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameHost_IssueKeepAliveHandle_Params_Data));
      new (data()) FrameHost_IssueKeepAliveHandle_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameHost_IssueKeepAliveHandle_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameHost_IssueKeepAliveHandle_Params_Data>(index_);
    }
    FrameHost_IssueKeepAliveHandle_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data keep_alive_handle;
  uint8_t padfinal_[4];

 private:
  FrameHost_IssueKeepAliveHandle_Params_Data();
  ~FrameHost_IssueKeepAliveHandle_Params_Data() = delete;
};
static_assert(sizeof(FrameHost_IssueKeepAliveHandle_Params_Data) == 16,
              "Bad sizeof(FrameHost_IssueKeepAliveHandle_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameHost_DidCommitProvisionalLoad_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameHost_DidCommitProvisionalLoad_Params_Data));
      new (data()) FrameHost_DidCommitProvisionalLoad_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameHost_DidCommitProvisionalLoad_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameHost_DidCommitProvisionalLoad_Params_Data>(index_);
    }
    FrameHost_DidCommitProvisionalLoad_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::DidCommitProvisionalLoadParams_Data> params;
  mojo::internal::Handle_Data interface_provider_request;
  uint8_t padfinal_[4];

 private:
  FrameHost_DidCommitProvisionalLoad_Params_Data();
  ~FrameHost_DidCommitProvisionalLoad_Params_Data() = delete;
};
static_assert(sizeof(FrameHost_DidCommitProvisionalLoad_Params_Data) == 24,
              "Bad sizeof(FrameHost_DidCommitProvisionalLoad_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameHost_DidCommitSameDocumentNavigation_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameHost_DidCommitSameDocumentNavigation_Params_Data));
      new (data()) FrameHost_DidCommitSameDocumentNavigation_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameHost_DidCommitSameDocumentNavigation_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameHost_DidCommitSameDocumentNavigation_Params_Data>(index_);
    }
    FrameHost_DidCommitSameDocumentNavigation_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::DidCommitProvisionalLoadParams_Data> params;

 private:
  FrameHost_DidCommitSameDocumentNavigation_Params_Data();
  ~FrameHost_DidCommitSameDocumentNavigation_Params_Data() = delete;
};
static_assert(sizeof(FrameHost_DidCommitSameDocumentNavigation_Params_Data) == 16,
              "Bad sizeof(FrameHost_DidCommitSameDocumentNavigation_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameHost_BeginNavigation_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameHost_BeginNavigation_Params_Data));
      new (data()) FrameHost_BeginNavigation_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameHost_BeginNavigation_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameHost_BeginNavigation_Params_Data>(index_);
    }
    FrameHost_BeginNavigation_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CommonNavigationParams_Data> common_params;
  mojo::internal::Pointer<::content::mojom::internal::BeginNavigationParams_Data> begin_params;
  mojo::internal::Interface_Data blob_url_token;

 private:
  FrameHost_BeginNavigation_Params_Data();
  ~FrameHost_BeginNavigation_Params_Data() = delete;
};
static_assert(sizeof(FrameHost_BeginNavigation_Params_Data) == 32,
              "Bad sizeof(FrameHost_BeginNavigation_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameHost_SubresourceResponseStarted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameHost_SubresourceResponseStarted_Params_Data));
      new (data()) FrameHost_SubresourceResponseStarted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameHost_SubresourceResponseStarted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameHost_SubresourceResponseStarted_Params_Data>(index_);
    }
    FrameHost_SubresourceResponseStarted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  uint32_t cert_status;
  uint8_t padfinal_[4];

 private:
  FrameHost_SubresourceResponseStarted_Params_Data();
  ~FrameHost_SubresourceResponseStarted_Params_Data() = delete;
};
static_assert(sizeof(FrameHost_SubresourceResponseStarted_Params_Data) == 24,
              "Bad sizeof(FrameHost_SubresourceResponseStarted_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameHost_ResourceLoadComplete_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameHost_ResourceLoadComplete_Params_Data));
      new (data()) FrameHost_ResourceLoadComplete_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameHost_ResourceLoadComplete_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameHost_ResourceLoadComplete_Params_Data>(index_);
    }
    FrameHost_ResourceLoadComplete_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::content::mojom::internal::ResourceLoadInfo_Data> url_load_info;

 private:
  FrameHost_ResourceLoadComplete_Params_Data();
  ~FrameHost_ResourceLoadComplete_Params_Data() = delete;
};
static_assert(sizeof(FrameHost_ResourceLoadComplete_Params_Data) == 16,
              "Bad sizeof(FrameHost_ResourceLoadComplete_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameHost_DidChangeName_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameHost_DidChangeName_Params_Data));
      new (data()) FrameHost_DidChangeName_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameHost_DidChangeName_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameHost_DidChangeName_Params_Data>(index_);
    }
    FrameHost_DidChangeName_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  mojo::internal::Pointer<mojo::internal::String_Data> unique_name;

 private:
  FrameHost_DidChangeName_Params_Data();
  ~FrameHost_DidChangeName_Params_Data() = delete;
};
static_assert(sizeof(FrameHost_DidChangeName_Params_Data) == 24,
              "Bad sizeof(FrameHost_DidChangeName_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameHost_EnforceInsecureRequestPolicy_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameHost_EnforceInsecureRequestPolicy_Params_Data));
      new (data()) FrameHost_EnforceInsecureRequestPolicy_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameHost_EnforceInsecureRequestPolicy_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameHost_EnforceInsecureRequestPolicy_Params_Data>(index_);
    }
    FrameHost_EnforceInsecureRequestPolicy_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t policy_bitmap;
  uint8_t padfinal_[7];

 private:
  FrameHost_EnforceInsecureRequestPolicy_Params_Data();
  ~FrameHost_EnforceInsecureRequestPolicy_Params_Data() = delete;
};
static_assert(sizeof(FrameHost_EnforceInsecureRequestPolicy_Params_Data) == 16,
              "Bad sizeof(FrameHost_EnforceInsecureRequestPolicy_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameHost_EnforceInsecureNavigationsSet_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameHost_EnforceInsecureNavigationsSet_Params_Data));
      new (data()) FrameHost_EnforceInsecureNavigationsSet_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameHost_EnforceInsecureNavigationsSet_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameHost_EnforceInsecureNavigationsSet_Params_Data>(index_);
    }
    FrameHost_EnforceInsecureNavigationsSet_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint32_t>> set;

 private:
  FrameHost_EnforceInsecureNavigationsSet_Params_Data();
  ~FrameHost_EnforceInsecureNavigationsSet_Params_Data() = delete;
};
static_assert(sizeof(FrameHost_EnforceInsecureNavigationsSet_Params_Data) == 16,
              "Bad sizeof(FrameHost_EnforceInsecureNavigationsSet_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameHost_DidSetFramePolicyHeaders_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameHost_DidSetFramePolicyHeaders_Params_Data));
      new (data()) FrameHost_DidSetFramePolicyHeaders_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameHost_DidSetFramePolicyHeaders_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameHost_DidSetFramePolicyHeaders_Params_Data>(index_);
    }
    FrameHost_DidSetFramePolicyHeaders_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t sandbox_flags;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::blink::mojom::internal::ParsedFeaturePolicyDeclaration_Data>>> parsed_header;

 private:
  FrameHost_DidSetFramePolicyHeaders_Params_Data();
  ~FrameHost_DidSetFramePolicyHeaders_Params_Data() = delete;
};
static_assert(sizeof(FrameHost_DidSetFramePolicyHeaders_Params_Data) == 24,
              "Bad sizeof(FrameHost_DidSetFramePolicyHeaders_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameHost_CancelInitialHistoryLoad_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameHost_CancelInitialHistoryLoad_Params_Data));
      new (data()) FrameHost_CancelInitialHistoryLoad_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameHost_CancelInitialHistoryLoad_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameHost_CancelInitialHistoryLoad_Params_Data>(index_);
    }
    FrameHost_CancelInitialHistoryLoad_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  FrameHost_CancelInitialHistoryLoad_Params_Data();
  ~FrameHost_CancelInitialHistoryLoad_Params_Data() = delete;
};
static_assert(sizeof(FrameHost_CancelInitialHistoryLoad_Params_Data) == 8,
              "Bad sizeof(FrameHost_CancelInitialHistoryLoad_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameHost_UpdateEncoding_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameHost_UpdateEncoding_Params_Data));
      new (data()) FrameHost_UpdateEncoding_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameHost_UpdateEncoding_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameHost_UpdateEncoding_Params_Data>(index_);
    }
    FrameHost_UpdateEncoding_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> encoding_name;

 private:
  FrameHost_UpdateEncoding_Params_Data();
  ~FrameHost_UpdateEncoding_Params_Data() = delete;
};
static_assert(sizeof(FrameHost_UpdateEncoding_Params_Data) == 16,
              "Bad sizeof(FrameHost_UpdateEncoding_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameHost_FrameSizeChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameHost_FrameSizeChanged_Params_Data));
      new (data()) FrameHost_FrameSizeChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameHost_FrameSizeChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameHost_FrameSizeChanged_Params_Data>(index_);
    }
    FrameHost_FrameSizeChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> size;

 private:
  FrameHost_FrameSizeChanged_Params_Data();
  ~FrameHost_FrameSizeChanged_Params_Data() = delete;
};
static_assert(sizeof(FrameHost_FrameSizeChanged_Params_Data) == 16,
              "Bad sizeof(FrameHost_FrameSizeChanged_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_FRAME_MOJOM_SHARED_INTERNAL_H_