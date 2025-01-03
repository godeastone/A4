// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_RENDERER_MOJOM_SHARED_INTERNAL_H_
#define CONTENT_COMMON_RENDERER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "content/common/native_types.mojom-shared-internal.h"
#include "content/common/service_worker/embedded_worker.mojom-shared-internal.h"
#include "ipc/constants.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared-internal.h"
#include "services/network/public/mojom/network_types.mojom-shared-internal.h"
#include "services/service_manager/public/mojom/interface_provider.mojom-shared-internal.h"
#include "services/service_manager/public/mojom/service.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "ui/gfx/mojo/icc_profile.mojom-shared-internal.h"
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
class CreateViewParams_Data;
class CreateFrameWidgetParams_Data;
class CreateFrameParams_Data;
class UpdateScrollbarThemeParams_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) CreateViewParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CreateViewParams_Data));
      new (data()) CreateViewParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CreateViewParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CreateViewParams_Data>(index_);
    }
    CreateViewParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::content::mojom::internal::RendererPreferences_Data> renderer_preferences;
  mojo::internal::Pointer<::content::mojom::internal::WebPreferences_Data> web_preferences;
  int32_t view_id;
  int32_t main_frame_routing_id;
  mojo::internal::Interface_Data main_frame_interface_provider;
  int32_t main_frame_widget_routing_id;
  int32_t opener_frame_route_id;
  mojo::internal::Pointer<mojo::internal::String_Data> session_storage_namespace_id;
  uint8_t swapped_out : 1;
  uint8_t hidden : 1;
  uint8_t never_visible : 1;
  uint8_t window_was_created_with_opener : 1;
  uint8_t has_committed_real_load : 1;
  uint8_t renderer_wide_named_frame_lookup : 1;
  uint8_t pad13_[3];
  int32_t proxy_routing_id;
  mojo::internal::Pointer<::content::mojom::internal::FrameReplicationState_Data> replicated_frame_state;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> devtools_main_frame_token;
  mojo::internal::Pointer<::content::mojom::internal::VisualProperties_Data> visual_properties;
  double page_zoom_level;

 private:
  CreateViewParams_Data();
  ~CreateViewParams_Data() = delete;
};
static_assert(sizeof(CreateViewParams_Data) == 96,
              "Bad sizeof(CreateViewParams_Data)");
// Used by CreateViewParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CreateViewParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CreateViewParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CreateViewParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CreateViewParams_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CreateViewParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) CreateFrameWidgetParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CreateFrameWidgetParams_Data));
      new (data()) CreateFrameWidgetParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CreateFrameWidgetParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CreateFrameWidgetParams_Data>(index_);
    }
    CreateFrameWidgetParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t routing_id;
  uint8_t hidden : 1;
  uint8_t padfinal_[3];

 private:
  CreateFrameWidgetParams_Data();
  ~CreateFrameWidgetParams_Data() = delete;
};
static_assert(sizeof(CreateFrameWidgetParams_Data) == 16,
              "Bad sizeof(CreateFrameWidgetParams_Data)");
// Used by CreateFrameWidgetParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CreateFrameWidgetParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CreateFrameWidgetParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CreateFrameWidgetParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CreateFrameWidgetParams_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CreateFrameWidgetParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) CreateFrameParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CreateFrameParams_Data));
      new (data()) CreateFrameParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CreateFrameParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CreateFrameParams_Data>(index_);
    }
    CreateFrameParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t routing_id;
  int32_t proxy_routing_id;
  int32_t opener_routing_id;
  int32_t parent_routing_id;
  int32_t previous_sibling_routing_id;
  mojo::internal::Interface_Data interface_provider;
  uint8_t has_committed_real_load : 1;
  uint8_t pad6_[3];
  mojo::internal::Pointer<::content::mojom::internal::FrameReplicationState_Data> replication_state;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> devtools_frame_token;
  mojo::internal::Pointer<::content::mojom::internal::FrameOwnerProperties_Data> frame_owner_properties;
  mojo::internal::Pointer<internal::CreateFrameWidgetParams_Data> widget_params;

 private:
  CreateFrameParams_Data();
  ~CreateFrameParams_Data() = delete;
};
static_assert(sizeof(CreateFrameParams_Data) == 72,
              "Bad sizeof(CreateFrameParams_Data)");
// Used by CreateFrameParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CreateFrameParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CreateFrameParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CreateFrameParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CreateFrameParams_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CreateFrameParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) UpdateScrollbarThemeParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UpdateScrollbarThemeParams_Data));
      new (data()) UpdateScrollbarThemeParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UpdateScrollbarThemeParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UpdateScrollbarThemeParams_Data>(index_);
    }
    UpdateScrollbarThemeParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  float initial_button_delay;
  float autoscroll_button_delay;
  uint8_t jump_on_track_click : 1;
  uint8_t redraw : 1;
  uint8_t scroll_view_rubber_banding : 1;
  uint8_t pad4_[3];
  int32_t preferred_scroller_style;
  int32_t button_placement;
  uint8_t padfinal_[4];

 private:
  UpdateScrollbarThemeParams_Data();
  ~UpdateScrollbarThemeParams_Data() = delete;
};
static_assert(sizeof(UpdateScrollbarThemeParams_Data) == 32,
              "Bad sizeof(UpdateScrollbarThemeParams_Data)");
// Used by UpdateScrollbarThemeParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct UpdateScrollbarThemeParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  UpdateScrollbarThemeParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~UpdateScrollbarThemeParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    UpdateScrollbarThemeParams_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    UpdateScrollbarThemeParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Renderer_CreateEmbedderRendererService_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Renderer_CreateEmbedderRendererService_Params_Data));
      new (data()) Renderer_CreateEmbedderRendererService_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Renderer_CreateEmbedderRendererService_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Renderer_CreateEmbedderRendererService_Params_Data>(index_);
    }
    Renderer_CreateEmbedderRendererService_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data service_request;
  uint8_t padfinal_[4];

 private:
  Renderer_CreateEmbedderRendererService_Params_Data();
  ~Renderer_CreateEmbedderRendererService_Params_Data() = delete;
};
static_assert(sizeof(Renderer_CreateEmbedderRendererService_Params_Data) == 16,
              "Bad sizeof(Renderer_CreateEmbedderRendererService_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Renderer_CreateView_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Renderer_CreateView_Params_Data));
      new (data()) Renderer_CreateView_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Renderer_CreateView_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Renderer_CreateView_Params_Data>(index_);
    }
    Renderer_CreateView_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CreateViewParams_Data> params;

 private:
  Renderer_CreateView_Params_Data();
  ~Renderer_CreateView_Params_Data() = delete;
};
static_assert(sizeof(Renderer_CreateView_Params_Data) == 16,
              "Bad sizeof(Renderer_CreateView_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Renderer_CreateFrame_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Renderer_CreateFrame_Params_Data));
      new (data()) Renderer_CreateFrame_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Renderer_CreateFrame_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Renderer_CreateFrame_Params_Data>(index_);
    }
    Renderer_CreateFrame_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CreateFrameParams_Data> params;

 private:
  Renderer_CreateFrame_Params_Data();
  ~Renderer_CreateFrame_Params_Data() = delete;
};
static_assert(sizeof(Renderer_CreateFrame_Params_Data) == 16,
              "Bad sizeof(Renderer_CreateFrame_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Renderer_CreateFrameProxy_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Renderer_CreateFrameProxy_Params_Data));
      new (data()) Renderer_CreateFrameProxy_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Renderer_CreateFrameProxy_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Renderer_CreateFrameProxy_Params_Data>(index_);
    }
    Renderer_CreateFrameProxy_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t routing_id;
  int32_t render_view_routing_id;
  int32_t opener_routing_id;
  int32_t parent_routing_id;
  mojo::internal::Pointer<::content::mojom::internal::FrameReplicationState_Data> replication_state;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> devtools_frame_token;

 private:
  Renderer_CreateFrameProxy_Params_Data();
  ~Renderer_CreateFrameProxy_Params_Data() = delete;
};
static_assert(sizeof(Renderer_CreateFrameProxy_Params_Data) == 40,
              "Bad sizeof(Renderer_CreateFrameProxy_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_Params_Data));
      new (data()) Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_Params_Data>(index_);
    }
    Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data client_request;
  uint8_t padfinal_[4];

 private:
  Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_Params_Data();
  ~Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_Params_Data() = delete;
};
static_assert(sizeof(Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_Params_Data) == 16,
              "Bad sizeof(Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Renderer_OnNetworkConnectionChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Renderer_OnNetworkConnectionChanged_Params_Data));
      new (data()) Renderer_OnNetworkConnectionChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Renderer_OnNetworkConnectionChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Renderer_OnNetworkConnectionChanged_Params_Data>(index_);
    }
    Renderer_OnNetworkConnectionChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t connection_type;
  uint8_t pad0_[4];
  double max_bandwidth_mbps;

 private:
  Renderer_OnNetworkConnectionChanged_Params_Data();
  ~Renderer_OnNetworkConnectionChanged_Params_Data() = delete;
};
static_assert(sizeof(Renderer_OnNetworkConnectionChanged_Params_Data) == 24,
              "Bad sizeof(Renderer_OnNetworkConnectionChanged_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Renderer_OnNetworkQualityChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Renderer_OnNetworkQualityChanged_Params_Data));
      new (data()) Renderer_OnNetworkQualityChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Renderer_OnNetworkQualityChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Renderer_OnNetworkQualityChanged_Params_Data>(index_);
    }
    Renderer_OnNetworkQualityChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t effective_connection_type;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> http_rtt;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> transport_rtt;
  double bandwidth_kbps;

 private:
  Renderer_OnNetworkQualityChanged_Params_Data();
  ~Renderer_OnNetworkQualityChanged_Params_Data() = delete;
};
static_assert(sizeof(Renderer_OnNetworkQualityChanged_Params_Data) == 40,
              "Bad sizeof(Renderer_OnNetworkQualityChanged_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Renderer_SetWebKitSharedTimersSuspended_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Renderer_SetWebKitSharedTimersSuspended_Params_Data));
      new (data()) Renderer_SetWebKitSharedTimersSuspended_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Renderer_SetWebKitSharedTimersSuspended_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Renderer_SetWebKitSharedTimersSuspended_Params_Data>(index_);
    }
    Renderer_SetWebKitSharedTimersSuspended_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t suspend : 1;
  uint8_t padfinal_[7];

 private:
  Renderer_SetWebKitSharedTimersSuspended_Params_Data();
  ~Renderer_SetWebKitSharedTimersSuspended_Params_Data() = delete;
};
static_assert(sizeof(Renderer_SetWebKitSharedTimersSuspended_Params_Data) == 16,
              "Bad sizeof(Renderer_SetWebKitSharedTimersSuspended_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Renderer_SetUserAgent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Renderer_SetUserAgent_Params_Data));
      new (data()) Renderer_SetUserAgent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Renderer_SetUserAgent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Renderer_SetUserAgent_Params_Data>(index_);
    }
    Renderer_SetUserAgent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> user_agent;

 private:
  Renderer_SetUserAgent_Params_Data();
  ~Renderer_SetUserAgent_Params_Data() = delete;
};
static_assert(sizeof(Renderer_SetUserAgent_Params_Data) == 16,
              "Bad sizeof(Renderer_SetUserAgent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Renderer_UpdateScrollbarTheme_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Renderer_UpdateScrollbarTheme_Params_Data));
      new (data()) Renderer_UpdateScrollbarTheme_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Renderer_UpdateScrollbarTheme_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Renderer_UpdateScrollbarTheme_Params_Data>(index_);
    }
    Renderer_UpdateScrollbarTheme_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::UpdateScrollbarThemeParams_Data> params;

 private:
  Renderer_UpdateScrollbarTheme_Params_Data();
  ~Renderer_UpdateScrollbarTheme_Params_Data() = delete;
};
static_assert(sizeof(Renderer_UpdateScrollbarTheme_Params_Data) == 16,
              "Bad sizeof(Renderer_UpdateScrollbarTheme_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Renderer_OnSystemColorsChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Renderer_OnSystemColorsChanged_Params_Data));
      new (data()) Renderer_OnSystemColorsChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Renderer_OnSystemColorsChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Renderer_OnSystemColorsChanged_Params_Data>(index_);
    }
    Renderer_OnSystemColorsChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t aqua_color_variant;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> highlight_text_color;
  mojo::internal::Pointer<mojo::internal::String_Data> highlight_color;

 private:
  Renderer_OnSystemColorsChanged_Params_Data();
  ~Renderer_OnSystemColorsChanged_Params_Data() = delete;
};
static_assert(sizeof(Renderer_OnSystemColorsChanged_Params_Data) == 32,
              "Bad sizeof(Renderer_OnSystemColorsChanged_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Renderer_PurgePluginListCache_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Renderer_PurgePluginListCache_Params_Data));
      new (data()) Renderer_PurgePluginListCache_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Renderer_PurgePluginListCache_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Renderer_PurgePluginListCache_Params_Data>(index_);
    }
    Renderer_PurgePluginListCache_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t reload_pages : 1;
  uint8_t padfinal_[7];

 private:
  Renderer_PurgePluginListCache_Params_Data();
  ~Renderer_PurgePluginListCache_Params_Data() = delete;
};
static_assert(sizeof(Renderer_PurgePluginListCache_Params_Data) == 16,
              "Bad sizeof(Renderer_PurgePluginListCache_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Renderer_SetProcessBackgrounded_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Renderer_SetProcessBackgrounded_Params_Data));
      new (data()) Renderer_SetProcessBackgrounded_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Renderer_SetProcessBackgrounded_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Renderer_SetProcessBackgrounded_Params_Data>(index_);
    }
    Renderer_SetProcessBackgrounded_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t background : 1;
  uint8_t padfinal_[7];

 private:
  Renderer_SetProcessBackgrounded_Params_Data();
  ~Renderer_SetProcessBackgrounded_Params_Data() = delete;
};
static_assert(sizeof(Renderer_SetProcessBackgrounded_Params_Data) == 16,
              "Bad sizeof(Renderer_SetProcessBackgrounded_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Renderer_SetSchedulerKeepActive_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Renderer_SetSchedulerKeepActive_Params_Data));
      new (data()) Renderer_SetSchedulerKeepActive_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Renderer_SetSchedulerKeepActive_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Renderer_SetSchedulerKeepActive_Params_Data>(index_);
    }
    Renderer_SetSchedulerKeepActive_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t keep_active : 1;
  uint8_t padfinal_[7];

 private:
  Renderer_SetSchedulerKeepActive_Params_Data();
  ~Renderer_SetSchedulerKeepActive_Params_Data() = delete;
};
static_assert(sizeof(Renderer_SetSchedulerKeepActive_Params_Data) == 16,
              "Bad sizeof(Renderer_SetSchedulerKeepActive_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Renderer_ProcessPurgeAndSuspend_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Renderer_ProcessPurgeAndSuspend_Params_Data));
      new (data()) Renderer_ProcessPurgeAndSuspend_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Renderer_ProcessPurgeAndSuspend_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Renderer_ProcessPurgeAndSuspend_Params_Data>(index_);
    }
    Renderer_ProcessPurgeAndSuspend_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Renderer_ProcessPurgeAndSuspend_Params_Data();
  ~Renderer_ProcessPurgeAndSuspend_Params_Data() = delete;
};
static_assert(sizeof(Renderer_ProcessPurgeAndSuspend_Params_Data) == 8,
              "Bad sizeof(Renderer_ProcessPurgeAndSuspend_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_RENDERER_MOJOM_SHARED_INTERNAL_H_