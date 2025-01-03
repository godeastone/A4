// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_SHARED_INTERNAL_H_
#define CONTENT_COMMON_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "content/common/native_types.mojom-shared-internal.h"
#include "content/common/service_worker/controller_service_worker.mojom-shared-internal.h"
#include "content/common/service_worker/service_worker_event_dispatcher.mojom-shared-internal.h"
#include "content/common/service_worker/service_worker_provider.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared-internal.h"
#include "services/service_manager/public/mojom/interface_provider.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_installed_scripts_manager.mojom-shared-internal.h"
#include "third_party/blink/public/platform/web_feature.mojom-shared-internal.h"
#include "third_party/blink/public/web/console_message.mojom-shared-internal.h"
#include "third_party/blink/public/web/devtools_agent.mojom-shared-internal.h"
#include "third_party/blink/public/web/worker_content_settings_proxy.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
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
class EmbeddedWorkerStartParams_Data;
class EmbeddedWorkerStartTiming_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) EmbeddedWorkerStartParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedWorkerStartParams_Data));
      new (data()) EmbeddedWorkerStartParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedWorkerStartParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedWorkerStartParams_Data>(index_);
    }
    EmbeddedWorkerStartParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t embedded_worker_id;
  int32_t worker_devtools_agent_route_id;
  int64_t service_worker_version_id;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> scope;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> script_url;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> devtools_worker_token;
  uint8_t pause_after_download : 1;
  uint8_t wait_for_debugger : 1;
  uint8_t is_installed : 1;
  uint8_t data_saver_enabled : 1;
  uint8_t pad9_[3];
  int32_t v8_cache_options;
  mojo::internal::Handle_Data dispatcher_request;
  mojo::internal::Handle_Data controller_request;
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerInstalledScriptsInfo_Data> installed_scripts_info;
  mojo::internal::AssociatedInterface_Data instance_host;
  mojo::internal::Pointer<::content::mojom::internal::ServiceWorkerProviderInfoForStartWorker_Data> provider_info;
  mojo::internal::Interface_Data content_settings_proxy;

 private:
  EmbeddedWorkerStartParams_Data();
  ~EmbeddedWorkerStartParams_Data() = delete;
};
static_assert(sizeof(EmbeddedWorkerStartParams_Data) == 96,
              "Bad sizeof(EmbeddedWorkerStartParams_Data)");
// Used by EmbeddedWorkerStartParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct EmbeddedWorkerStartParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  EmbeddedWorkerStartParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~EmbeddedWorkerStartParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    EmbeddedWorkerStartParams_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    EmbeddedWorkerStartParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) EmbeddedWorkerStartTiming_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedWorkerStartTiming_Data));
      new (data()) EmbeddedWorkerStartTiming_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedWorkerStartTiming_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedWorkerStartTiming_Data>(index_);
    }
    EmbeddedWorkerStartTiming_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> blink_initialized_time;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> start_worker_received_time;

 private:
  EmbeddedWorkerStartTiming_Data();
  ~EmbeddedWorkerStartTiming_Data() = delete;
};
static_assert(sizeof(EmbeddedWorkerStartTiming_Data) == 24,
              "Bad sizeof(EmbeddedWorkerStartTiming_Data)");
// Used by EmbeddedWorkerStartTiming::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct EmbeddedWorkerStartTiming_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  EmbeddedWorkerStartTiming_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~EmbeddedWorkerStartTiming_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    EmbeddedWorkerStartTiming_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    EmbeddedWorkerStartTiming_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) EmbeddedWorkerInstanceClient_StartWorker_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedWorkerInstanceClient_StartWorker_Params_Data));
      new (data()) EmbeddedWorkerInstanceClient_StartWorker_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedWorkerInstanceClient_StartWorker_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedWorkerInstanceClient_StartWorker_Params_Data>(index_);
    }
    EmbeddedWorkerInstanceClient_StartWorker_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::EmbeddedWorkerStartParams_Data> params;

 private:
  EmbeddedWorkerInstanceClient_StartWorker_Params_Data();
  ~EmbeddedWorkerInstanceClient_StartWorker_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedWorkerInstanceClient_StartWorker_Params_Data) == 16,
              "Bad sizeof(EmbeddedWorkerInstanceClient_StartWorker_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) EmbeddedWorkerInstanceClient_StopWorker_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedWorkerInstanceClient_StopWorker_Params_Data));
      new (data()) EmbeddedWorkerInstanceClient_StopWorker_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedWorkerInstanceClient_StopWorker_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedWorkerInstanceClient_StopWorker_Params_Data>(index_);
    }
    EmbeddedWorkerInstanceClient_StopWorker_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  EmbeddedWorkerInstanceClient_StopWorker_Params_Data();
  ~EmbeddedWorkerInstanceClient_StopWorker_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedWorkerInstanceClient_StopWorker_Params_Data) == 8,
              "Bad sizeof(EmbeddedWorkerInstanceClient_StopWorker_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params_Data));
      new (data()) EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params_Data>(index_);
    }
    EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params_Data();
  ~EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params_Data) == 8,
              "Bad sizeof(EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) EmbeddedWorkerInstanceClient_AddMessageToConsole_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedWorkerInstanceClient_AddMessageToConsole_Params_Data));
      new (data()) EmbeddedWorkerInstanceClient_AddMessageToConsole_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedWorkerInstanceClient_AddMessageToConsole_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedWorkerInstanceClient_AddMessageToConsole_Params_Data>(index_);
    }
    EmbeddedWorkerInstanceClient_AddMessageToConsole_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t level;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> message;

 private:
  EmbeddedWorkerInstanceClient_AddMessageToConsole_Params_Data();
  ~EmbeddedWorkerInstanceClient_AddMessageToConsole_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedWorkerInstanceClient_AddMessageToConsole_Params_Data) == 24,
              "Bad sizeof(EmbeddedWorkerInstanceClient_AddMessageToConsole_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params_Data));
      new (data()) EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params_Data>(index_);
    }
    EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedEndpointHandle_Data devtools_agent;
  uint8_t padfinal_[4];

 private:
  EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params_Data();
  ~EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params_Data) == 16,
              "Bad sizeof(EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) EmbeddedWorkerInstanceHost_RequestTermination_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedWorkerInstanceHost_RequestTermination_Params_Data));
      new (data()) EmbeddedWorkerInstanceHost_RequestTermination_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedWorkerInstanceHost_RequestTermination_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedWorkerInstanceHost_RequestTermination_Params_Data>(index_);
    }
    EmbeddedWorkerInstanceHost_RequestTermination_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  EmbeddedWorkerInstanceHost_RequestTermination_Params_Data();
  ~EmbeddedWorkerInstanceHost_RequestTermination_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedWorkerInstanceHost_RequestTermination_Params_Data) == 8,
              "Bad sizeof(EmbeddedWorkerInstanceHost_RequestTermination_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) EmbeddedWorkerInstanceHost_CountFeature_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedWorkerInstanceHost_CountFeature_Params_Data));
      new (data()) EmbeddedWorkerInstanceHost_CountFeature_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedWorkerInstanceHost_CountFeature_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedWorkerInstanceHost_CountFeature_Params_Data>(index_);
    }
    EmbeddedWorkerInstanceHost_CountFeature_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t feature;
  uint8_t padfinal_[4];

 private:
  EmbeddedWorkerInstanceHost_CountFeature_Params_Data();
  ~EmbeddedWorkerInstanceHost_CountFeature_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedWorkerInstanceHost_CountFeature_Params_Data) == 16,
              "Bad sizeof(EmbeddedWorkerInstanceHost_CountFeature_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) EmbeddedWorkerInstanceHost_OnReadyForInspection_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedWorkerInstanceHost_OnReadyForInspection_Params_Data));
      new (data()) EmbeddedWorkerInstanceHost_OnReadyForInspection_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedWorkerInstanceHost_OnReadyForInspection_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedWorkerInstanceHost_OnReadyForInspection_Params_Data>(index_);
    }
    EmbeddedWorkerInstanceHost_OnReadyForInspection_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  EmbeddedWorkerInstanceHost_OnReadyForInspection_Params_Data();
  ~EmbeddedWorkerInstanceHost_OnReadyForInspection_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedWorkerInstanceHost_OnReadyForInspection_Params_Data) == 8,
              "Bad sizeof(EmbeddedWorkerInstanceHost_OnReadyForInspection_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) EmbeddedWorkerInstanceHost_OnScriptLoaded_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedWorkerInstanceHost_OnScriptLoaded_Params_Data));
      new (data()) EmbeddedWorkerInstanceHost_OnScriptLoaded_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedWorkerInstanceHost_OnScriptLoaded_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedWorkerInstanceHost_OnScriptLoaded_Params_Data>(index_);
    }
    EmbeddedWorkerInstanceHost_OnScriptLoaded_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  EmbeddedWorkerInstanceHost_OnScriptLoaded_Params_Data();
  ~EmbeddedWorkerInstanceHost_OnScriptLoaded_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedWorkerInstanceHost_OnScriptLoaded_Params_Data) == 8,
              "Bad sizeof(EmbeddedWorkerInstanceHost_OnScriptLoaded_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) EmbeddedWorkerInstanceHost_OnScriptLoadFailed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedWorkerInstanceHost_OnScriptLoadFailed_Params_Data));
      new (data()) EmbeddedWorkerInstanceHost_OnScriptLoadFailed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedWorkerInstanceHost_OnScriptLoadFailed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedWorkerInstanceHost_OnScriptLoadFailed_Params_Data>(index_);
    }
    EmbeddedWorkerInstanceHost_OnScriptLoadFailed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  EmbeddedWorkerInstanceHost_OnScriptLoadFailed_Params_Data();
  ~EmbeddedWorkerInstanceHost_OnScriptLoadFailed_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedWorkerInstanceHost_OnScriptLoadFailed_Params_Data) == 8,
              "Bad sizeof(EmbeddedWorkerInstanceHost_OnScriptLoadFailed_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) EmbeddedWorkerInstanceHost_OnThreadStarted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedWorkerInstanceHost_OnThreadStarted_Params_Data));
      new (data()) EmbeddedWorkerInstanceHost_OnThreadStarted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedWorkerInstanceHost_OnThreadStarted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedWorkerInstanceHost_OnThreadStarted_Params_Data>(index_);
    }
    EmbeddedWorkerInstanceHost_OnThreadStarted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t thread_id;
  uint8_t padfinal_[4];

 private:
  EmbeddedWorkerInstanceHost_OnThreadStarted_Params_Data();
  ~EmbeddedWorkerInstanceHost_OnThreadStarted_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedWorkerInstanceHost_OnThreadStarted_Params_Data) == 16,
              "Bad sizeof(EmbeddedWorkerInstanceHost_OnThreadStarted_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) EmbeddedWorkerInstanceHost_OnScriptEvaluated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedWorkerInstanceHost_OnScriptEvaluated_Params_Data));
      new (data()) EmbeddedWorkerInstanceHost_OnScriptEvaluated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedWorkerInstanceHost_OnScriptEvaluated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedWorkerInstanceHost_OnScriptEvaluated_Params_Data>(index_);
    }
    EmbeddedWorkerInstanceHost_OnScriptEvaluated_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  EmbeddedWorkerInstanceHost_OnScriptEvaluated_Params_Data();
  ~EmbeddedWorkerInstanceHost_OnScriptEvaluated_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedWorkerInstanceHost_OnScriptEvaluated_Params_Data) == 16,
              "Bad sizeof(EmbeddedWorkerInstanceHost_OnScriptEvaluated_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) EmbeddedWorkerInstanceHost_OnStarted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedWorkerInstanceHost_OnStarted_Params_Data));
      new (data()) EmbeddedWorkerInstanceHost_OnStarted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedWorkerInstanceHost_OnStarted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedWorkerInstanceHost_OnStarted_Params_Data>(index_);
    }
    EmbeddedWorkerInstanceHost_OnStarted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::EmbeddedWorkerStartTiming_Data> start_timing;

 private:
  EmbeddedWorkerInstanceHost_OnStarted_Params_Data();
  ~EmbeddedWorkerInstanceHost_OnStarted_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedWorkerInstanceHost_OnStarted_Params_Data) == 16,
              "Bad sizeof(EmbeddedWorkerInstanceHost_OnStarted_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) EmbeddedWorkerInstanceHost_OnReportException_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedWorkerInstanceHost_OnReportException_Params_Data));
      new (data()) EmbeddedWorkerInstanceHost_OnReportException_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedWorkerInstanceHost_OnReportException_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedWorkerInstanceHost_OnReportException_Params_Data>(index_);
    }
    EmbeddedWorkerInstanceHost_OnReportException_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> error_message;
  int32_t line_number;
  int32_t column_number;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> source_url;

 private:
  EmbeddedWorkerInstanceHost_OnReportException_Params_Data();
  ~EmbeddedWorkerInstanceHost_OnReportException_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedWorkerInstanceHost_OnReportException_Params_Data) == 32,
              "Bad sizeof(EmbeddedWorkerInstanceHost_OnReportException_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params_Data));
      new (data()) EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params_Data>(index_);
    }
    EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t source_identifier;
  int32_t message_level;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> message;
  int32_t line_number;
  uint8_t pad3_[4];
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> source_url;

 private:
  EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params_Data();
  ~EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params_Data) == 40,
              "Bad sizeof(EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) EmbeddedWorkerInstanceHost_OnStopped_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedWorkerInstanceHost_OnStopped_Params_Data));
      new (data()) EmbeddedWorkerInstanceHost_OnStopped_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedWorkerInstanceHost_OnStopped_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedWorkerInstanceHost_OnStopped_Params_Data>(index_);
    }
    EmbeddedWorkerInstanceHost_OnStopped_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  EmbeddedWorkerInstanceHost_OnStopped_Params_Data();
  ~EmbeddedWorkerInstanceHost_OnStopped_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedWorkerInstanceHost_OnStopped_Params_Data) == 8,
              "Bad sizeof(EmbeddedWorkerInstanceHost_OnStopped_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_SHARED_INTERNAL_H_