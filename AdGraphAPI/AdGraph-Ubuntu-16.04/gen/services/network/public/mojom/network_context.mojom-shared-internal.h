// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/file.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file_path.mojom-shared-internal.h"
#include "mojo/public/mojom/base/values.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "net/interfaces/address_list.mojom-shared-internal.h"
#include "net/interfaces/ip_endpoint.mojom-shared-internal.h"
#include "services/network/public/mojom/cookie_manager.mojom-shared-internal.h"
#include "services/network/public/mojom/ct_log_info.mojom-shared-internal.h"
#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom-shared-internal.h"
#include "services/network/public/mojom/proxy_config.mojom-shared-internal.h"
#include "services/network/public/mojom/proxy_config_with_annotation.mojom-shared-internal.h"
#include "services/network/public/mojom/ssl_config.mojom-shared-internal.h"
#include "services/network/public/mojom/tcp_socket.mojom-shared-internal.h"
#include "services/network/public/mojom/udp_socket.mojom-shared-internal.h"
#include "services/network/public/mojom/url_loader.mojom-shared-internal.h"
#include "services/network/public/mojom/url_loader_factory.mojom-shared-internal.h"
#include "services/network/public/mojom/websocket.mojom-shared-internal.h"
#include "services/proxy_resolver/public/mojom/proxy_resolver.mojom-shared-internal.h"
#include "services/network/public/mojom/restricted_cookie_manager.mojom-shared-internal.h"
#include "url/mojom/origin.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace network {
namespace mojom {
namespace internal {
class NetworkContextParams_Data;
class NetworkConditions_Data;
class ClearDataFilter_Data;
class NetworkUsage_Data;
class URLLoaderFactoryParams_Data;

struct ClearDataFilter_Type_Data {
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

struct NetLogExporter_CaptureMode_Data {
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
class  NetworkContextParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContextParams_Data));
      new (data()) NetworkContextParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContextParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContextParams_Data>(index_);
    }
    NetworkContextParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> context_name;
  mojo::internal::Pointer<mojo::internal::String_Data> user_agent;
  mojo::internal::Pointer<mojo::internal::String_Data> accept_language;
  uint8_t enable_brotli : 1;
  uint8_t restore_old_session_cookies : 1;
  uint8_t persist_session_cookies : 1;
  uint8_t http_cache_enabled : 1;
  uint8_t enable_data_url_support : 1;
  uint8_t enable_file_url_support : 1;
  uint8_t enable_ftp_url_support : 1;
  uint8_t enforce_chrome_ct_policy : 1;
  uint8_t http_09_on_non_default_ports_enabled : 1;
  uint8_t pac_quick_check_enabled : 1;
  uint8_t dangerously_allow_pac_access_to_secure_urls : 1;
  uint8_t allow_gssapi_library_load : 1;
  uint8_t enable_certificate_reporting : 1;
  uint8_t pad15_[2];
  int32_t http_cache_max_size;
  mojo::internal::Pointer<mojo::internal::String_Data> quic_user_agent_id;
  mojo::internal::Interface_Data proxy_resolver_factory;
  mojo::internal::Pointer<::mojo_base::mojom::internal::FilePath_Data> cookie_path;
  mojo::internal::Pointer<::mojo_base::mojom::internal::FilePath_Data> channel_id_path;
  mojo::internal::Pointer<::mojo_base::mojom::internal::FilePath_Data> http_cache_path;
  mojo::internal::Pointer<::mojo_base::mojom::internal::FilePath_Data> http_server_properties_path;
  mojo::internal::Pointer<::mojo_base::mojom::internal::FilePath_Data> transport_security_persister_path;
  mojo::internal::Pointer<::network::mojom::internal::SSLConfig_Data> initial_ssl_config;
  mojo::internal::Handle_Data ssl_config_client_request;
  mojo::internal::Handle_Data proxy_config_client_request;
  mojo::internal::Pointer<::network::mojom::internal::ProxyConfigWithAnnotation_Data> initial_proxy_config;
  mojo::internal::Interface_Data proxy_config_poller_client;
  mojo::internal::Pointer<mojo::internal::String_Data> gssapi_library_name;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::network::mojom::internal::CTLogInfo_Data>>> ct_logs;

 private:
  NetworkContextParams_Data();
  ~NetworkContextParams_Data() = delete;
};
static_assert(sizeof(NetworkContextParams_Data) == 144,
              "Bad sizeof(NetworkContextParams_Data)");
// Used by NetworkContextParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct NetworkContextParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  NetworkContextParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~NetworkContextParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    NetworkContextParams_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    NetworkContextParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  NetworkConditions_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkConditions_Data));
      new (data()) NetworkConditions_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkConditions_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkConditions_Data>(index_);
    }
    NetworkConditions_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t offline : 1;
  uint8_t pad0_[7];
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> latency;
  double download_throughput;
  double upload_throughput;

 private:
  NetworkConditions_Data();
  ~NetworkConditions_Data() = delete;
};
static_assert(sizeof(NetworkConditions_Data) == 40,
              "Bad sizeof(NetworkConditions_Data)");
// Used by NetworkConditions::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct NetworkConditions_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  NetworkConditions_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~NetworkConditions_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    NetworkConditions_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    NetworkConditions_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  ClearDataFilter_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClearDataFilter_Data));
      new (data()) ClearDataFilter_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClearDataFilter_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClearDataFilter_Data>(index_);
    }
    ClearDataFilter_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> domains;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::url::mojom::internal::Origin_Data>>> origins;

 private:
  ClearDataFilter_Data();
  ~ClearDataFilter_Data() = delete;
};
static_assert(sizeof(ClearDataFilter_Data) == 32,
              "Bad sizeof(ClearDataFilter_Data)");
// Used by ClearDataFilter::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ClearDataFilter_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ClearDataFilter_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ClearDataFilter_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ClearDataFilter_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ClearDataFilter_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  NetworkUsage_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkUsage_Data));
      new (data()) NetworkUsage_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkUsage_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkUsage_Data>(index_);
    }
    NetworkUsage_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t process_id;
  uint32_t routing_id;
  int64_t total_bytes_received;
  int64_t total_bytes_sent;

 private:
  NetworkUsage_Data();
  ~NetworkUsage_Data() = delete;
};
static_assert(sizeof(NetworkUsage_Data) == 32,
              "Bad sizeof(NetworkUsage_Data)");
// Used by NetworkUsage::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct NetworkUsage_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  NetworkUsage_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~NetworkUsage_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    NetworkUsage_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    NetworkUsage_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  URLLoaderFactoryParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(URLLoaderFactoryParams_Data));
      new (data()) URLLoaderFactoryParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    URLLoaderFactoryParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<URLLoaderFactoryParams_Data>(index_);
    }
    URLLoaderFactoryParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t process_id;
  uint8_t is_corb_enabled : 1;
  uint8_t pad1_[3];
  mojo::internal::Pointer<mojo::internal::String_Data> corb_excluded_initiator_scheme;

 private:
  URLLoaderFactoryParams_Data();
  ~URLLoaderFactoryParams_Data() = delete;
};
static_assert(sizeof(URLLoaderFactoryParams_Data) == 24,
              "Bad sizeof(URLLoaderFactoryParams_Data)");
// Used by URLLoaderFactoryParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct URLLoaderFactoryParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  URLLoaderFactoryParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~URLLoaderFactoryParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    URLLoaderFactoryParams_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    URLLoaderFactoryParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  NetLogExporter_Start_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetLogExporter_Start_Params_Data));
      new (data()) NetLogExporter_Start_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetLogExporter_Start_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetLogExporter_Start_Params_Data>(index_);
    }
    NetLogExporter_Start_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::File_Data> destination;
  mojo::internal::Pointer<::mojo_base::mojom::internal::DictionaryValue_Data> extra_constants;
  int32_t capture_mode;
  uint8_t pad2_[4];
  uint64_t max_file_size;

 private:
  NetLogExporter_Start_Params_Data();
  ~NetLogExporter_Start_Params_Data() = delete;
};
static_assert(sizeof(NetLogExporter_Start_Params_Data) == 40,
              "Bad sizeof(NetLogExporter_Start_Params_Data)");
class  NetLogExporter_Start_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetLogExporter_Start_ResponseParams_Data));
      new (data()) NetLogExporter_Start_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetLogExporter_Start_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetLogExporter_Start_ResponseParams_Data>(index_);
    }
    NetLogExporter_Start_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t net_error;
  uint8_t padfinal_[4];

 private:
  NetLogExporter_Start_ResponseParams_Data();
  ~NetLogExporter_Start_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetLogExporter_Start_ResponseParams_Data) == 16,
              "Bad sizeof(NetLogExporter_Start_ResponseParams_Data)");
class  NetLogExporter_Stop_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetLogExporter_Stop_Params_Data));
      new (data()) NetLogExporter_Stop_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetLogExporter_Stop_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetLogExporter_Stop_Params_Data>(index_);
    }
    NetLogExporter_Stop_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::DictionaryValue_Data> polled_values;

 private:
  NetLogExporter_Stop_Params_Data();
  ~NetLogExporter_Stop_Params_Data() = delete;
};
static_assert(sizeof(NetLogExporter_Stop_Params_Data) == 16,
              "Bad sizeof(NetLogExporter_Stop_Params_Data)");
class  NetLogExporter_Stop_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetLogExporter_Stop_ResponseParams_Data));
      new (data()) NetLogExporter_Stop_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetLogExporter_Stop_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetLogExporter_Stop_ResponseParams_Data>(index_);
    }
    NetLogExporter_Stop_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t net_error;
  uint8_t padfinal_[4];

 private:
  NetLogExporter_Stop_ResponseParams_Data();
  ~NetLogExporter_Stop_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetLogExporter_Stop_ResponseParams_Data) == 16,
              "Bad sizeof(NetLogExporter_Stop_ResponseParams_Data)");
class  NetworkContext_CreateURLLoaderFactory_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_CreateURLLoaderFactory_Params_Data));
      new (data()) NetworkContext_CreateURLLoaderFactory_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_CreateURLLoaderFactory_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_CreateURLLoaderFactory_Params_Data>(index_);
    }
    NetworkContext_CreateURLLoaderFactory_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data url_loader_factory;
  uint8_t pad0_[4];
  mojo::internal::Pointer<internal::URLLoaderFactoryParams_Data> params;

 private:
  NetworkContext_CreateURLLoaderFactory_Params_Data();
  ~NetworkContext_CreateURLLoaderFactory_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_CreateURLLoaderFactory_Params_Data) == 24,
              "Bad sizeof(NetworkContext_CreateURLLoaderFactory_Params_Data)");
class  NetworkContext_GetCookieManager_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_GetCookieManager_Params_Data));
      new (data()) NetworkContext_GetCookieManager_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_GetCookieManager_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_GetCookieManager_Params_Data>(index_);
    }
    NetworkContext_GetCookieManager_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data cookie_manager;
  uint8_t padfinal_[4];

 private:
  NetworkContext_GetCookieManager_Params_Data();
  ~NetworkContext_GetCookieManager_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_GetCookieManager_Params_Data) == 16,
              "Bad sizeof(NetworkContext_GetCookieManager_Params_Data)");
class  NetworkContext_GetRestrictedCookieManager_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_GetRestrictedCookieManager_Params_Data));
      new (data()) NetworkContext_GetRestrictedCookieManager_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_GetRestrictedCookieManager_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_GetRestrictedCookieManager_Params_Data>(index_);
    }
    NetworkContext_GetRestrictedCookieManager_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data restricted_cookie_manager;
  int32_t render_process_id;
  int32_t render_frame_id;
  uint8_t padfinal_[4];

 private:
  NetworkContext_GetRestrictedCookieManager_Params_Data();
  ~NetworkContext_GetRestrictedCookieManager_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_GetRestrictedCookieManager_Params_Data) == 24,
              "Bad sizeof(NetworkContext_GetRestrictedCookieManager_Params_Data)");
class  NetworkContext_ClearNetworkingHistorySince_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_ClearNetworkingHistorySince_Params_Data));
      new (data()) NetworkContext_ClearNetworkingHistorySince_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_ClearNetworkingHistorySince_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_ClearNetworkingHistorySince_Params_Data>(index_);
    }
    NetworkContext_ClearNetworkingHistorySince_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> start_time;

 private:
  NetworkContext_ClearNetworkingHistorySince_Params_Data();
  ~NetworkContext_ClearNetworkingHistorySince_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_ClearNetworkingHistorySince_Params_Data) == 16,
              "Bad sizeof(NetworkContext_ClearNetworkingHistorySince_Params_Data)");
class  NetworkContext_ClearNetworkingHistorySince_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_ClearNetworkingHistorySince_ResponseParams_Data));
      new (data()) NetworkContext_ClearNetworkingHistorySince_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_ClearNetworkingHistorySince_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_ClearNetworkingHistorySince_ResponseParams_Data>(index_);
    }
    NetworkContext_ClearNetworkingHistorySince_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkContext_ClearNetworkingHistorySince_ResponseParams_Data();
  ~NetworkContext_ClearNetworkingHistorySince_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_ClearNetworkingHistorySince_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkContext_ClearNetworkingHistorySince_ResponseParams_Data)");
class  NetworkContext_ClearHttpCache_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_ClearHttpCache_Params_Data));
      new (data()) NetworkContext_ClearHttpCache_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_ClearHttpCache_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_ClearHttpCache_Params_Data>(index_);
    }
    NetworkContext_ClearHttpCache_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> start_time;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> end_time;
  mojo::internal::Pointer<internal::ClearDataFilter_Data> filter;

 private:
  NetworkContext_ClearHttpCache_Params_Data();
  ~NetworkContext_ClearHttpCache_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_ClearHttpCache_Params_Data) == 32,
              "Bad sizeof(NetworkContext_ClearHttpCache_Params_Data)");
class  NetworkContext_ClearHttpCache_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_ClearHttpCache_ResponseParams_Data));
      new (data()) NetworkContext_ClearHttpCache_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_ClearHttpCache_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_ClearHttpCache_ResponseParams_Data>(index_);
    }
    NetworkContext_ClearHttpCache_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkContext_ClearHttpCache_ResponseParams_Data();
  ~NetworkContext_ClearHttpCache_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_ClearHttpCache_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkContext_ClearHttpCache_ResponseParams_Data)");
class  NetworkContext_ClearChannelIds_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_ClearChannelIds_Params_Data));
      new (data()) NetworkContext_ClearChannelIds_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_ClearChannelIds_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_ClearChannelIds_Params_Data>(index_);
    }
    NetworkContext_ClearChannelIds_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> start_time;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> end_time;
  mojo::internal::Pointer<internal::ClearDataFilter_Data> filter;

 private:
  NetworkContext_ClearChannelIds_Params_Data();
  ~NetworkContext_ClearChannelIds_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_ClearChannelIds_Params_Data) == 32,
              "Bad sizeof(NetworkContext_ClearChannelIds_Params_Data)");
class  NetworkContext_ClearChannelIds_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_ClearChannelIds_ResponseParams_Data));
      new (data()) NetworkContext_ClearChannelIds_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_ClearChannelIds_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_ClearChannelIds_ResponseParams_Data>(index_);
    }
    NetworkContext_ClearChannelIds_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkContext_ClearChannelIds_ResponseParams_Data();
  ~NetworkContext_ClearChannelIds_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_ClearChannelIds_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkContext_ClearChannelIds_ResponseParams_Data)");
class  NetworkContext_ClearHttpAuthCache_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_ClearHttpAuthCache_Params_Data));
      new (data()) NetworkContext_ClearHttpAuthCache_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_ClearHttpAuthCache_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_ClearHttpAuthCache_Params_Data>(index_);
    }
    NetworkContext_ClearHttpAuthCache_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> start_time;

 private:
  NetworkContext_ClearHttpAuthCache_Params_Data();
  ~NetworkContext_ClearHttpAuthCache_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_ClearHttpAuthCache_Params_Data) == 16,
              "Bad sizeof(NetworkContext_ClearHttpAuthCache_Params_Data)");
class  NetworkContext_ClearHttpAuthCache_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_ClearHttpAuthCache_ResponseParams_Data));
      new (data()) NetworkContext_ClearHttpAuthCache_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_ClearHttpAuthCache_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_ClearHttpAuthCache_ResponseParams_Data>(index_);
    }
    NetworkContext_ClearHttpAuthCache_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkContext_ClearHttpAuthCache_ResponseParams_Data();
  ~NetworkContext_ClearHttpAuthCache_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_ClearHttpAuthCache_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkContext_ClearHttpAuthCache_ResponseParams_Data)");
class  NetworkContext_ClearReportingCacheReports_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_ClearReportingCacheReports_Params_Data));
      new (data()) NetworkContext_ClearReportingCacheReports_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_ClearReportingCacheReports_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_ClearReportingCacheReports_Params_Data>(index_);
    }
    NetworkContext_ClearReportingCacheReports_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::ClearDataFilter_Data> filter;

 private:
  NetworkContext_ClearReportingCacheReports_Params_Data();
  ~NetworkContext_ClearReportingCacheReports_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_ClearReportingCacheReports_Params_Data) == 16,
              "Bad sizeof(NetworkContext_ClearReportingCacheReports_Params_Data)");
class  NetworkContext_ClearReportingCacheReports_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_ClearReportingCacheReports_ResponseParams_Data));
      new (data()) NetworkContext_ClearReportingCacheReports_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_ClearReportingCacheReports_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_ClearReportingCacheReports_ResponseParams_Data>(index_);
    }
    NetworkContext_ClearReportingCacheReports_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkContext_ClearReportingCacheReports_ResponseParams_Data();
  ~NetworkContext_ClearReportingCacheReports_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_ClearReportingCacheReports_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkContext_ClearReportingCacheReports_ResponseParams_Data)");
class  NetworkContext_ClearReportingCacheClients_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_ClearReportingCacheClients_Params_Data));
      new (data()) NetworkContext_ClearReportingCacheClients_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_ClearReportingCacheClients_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_ClearReportingCacheClients_Params_Data>(index_);
    }
    NetworkContext_ClearReportingCacheClients_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::ClearDataFilter_Data> filter;

 private:
  NetworkContext_ClearReportingCacheClients_Params_Data();
  ~NetworkContext_ClearReportingCacheClients_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_ClearReportingCacheClients_Params_Data) == 16,
              "Bad sizeof(NetworkContext_ClearReportingCacheClients_Params_Data)");
class  NetworkContext_ClearReportingCacheClients_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_ClearReportingCacheClients_ResponseParams_Data));
      new (data()) NetworkContext_ClearReportingCacheClients_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_ClearReportingCacheClients_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_ClearReportingCacheClients_ResponseParams_Data>(index_);
    }
    NetworkContext_ClearReportingCacheClients_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkContext_ClearReportingCacheClients_ResponseParams_Data();
  ~NetworkContext_ClearReportingCacheClients_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_ClearReportingCacheClients_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkContext_ClearReportingCacheClients_ResponseParams_Data)");
class  NetworkContext_ClearNetworkErrorLogging_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_ClearNetworkErrorLogging_Params_Data));
      new (data()) NetworkContext_ClearNetworkErrorLogging_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_ClearNetworkErrorLogging_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_ClearNetworkErrorLogging_Params_Data>(index_);
    }
    NetworkContext_ClearNetworkErrorLogging_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::ClearDataFilter_Data> filter;

 private:
  NetworkContext_ClearNetworkErrorLogging_Params_Data();
  ~NetworkContext_ClearNetworkErrorLogging_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_ClearNetworkErrorLogging_Params_Data) == 16,
              "Bad sizeof(NetworkContext_ClearNetworkErrorLogging_Params_Data)");
class  NetworkContext_ClearNetworkErrorLogging_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_ClearNetworkErrorLogging_ResponseParams_Data));
      new (data()) NetworkContext_ClearNetworkErrorLogging_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_ClearNetworkErrorLogging_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_ClearNetworkErrorLogging_ResponseParams_Data>(index_);
    }
    NetworkContext_ClearNetworkErrorLogging_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkContext_ClearNetworkErrorLogging_ResponseParams_Data();
  ~NetworkContext_ClearNetworkErrorLogging_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_ClearNetworkErrorLogging_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkContext_ClearNetworkErrorLogging_ResponseParams_Data)");
class  NetworkContext_SetNetworkConditions_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_SetNetworkConditions_Params_Data));
      new (data()) NetworkContext_SetNetworkConditions_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_SetNetworkConditions_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_SetNetworkConditions_Params_Data>(index_);
    }
    NetworkContext_SetNetworkConditions_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> profile_id;
  mojo::internal::Pointer<internal::NetworkConditions_Data> conditions;

 private:
  NetworkContext_SetNetworkConditions_Params_Data();
  ~NetworkContext_SetNetworkConditions_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_SetNetworkConditions_Params_Data) == 24,
              "Bad sizeof(NetworkContext_SetNetworkConditions_Params_Data)");
class  NetworkContext_SetAcceptLanguage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_SetAcceptLanguage_Params_Data));
      new (data()) NetworkContext_SetAcceptLanguage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_SetAcceptLanguage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_SetAcceptLanguage_Params_Data>(index_);
    }
    NetworkContext_SetAcceptLanguage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> new_accept_language;

 private:
  NetworkContext_SetAcceptLanguage_Params_Data();
  ~NetworkContext_SetAcceptLanguage_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_SetAcceptLanguage_Params_Data) == 16,
              "Bad sizeof(NetworkContext_SetAcceptLanguage_Params_Data)");
class  NetworkContext_SetCTPolicy_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_SetCTPolicy_Params_Data));
      new (data()) NetworkContext_SetCTPolicy_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_SetCTPolicy_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_SetCTPolicy_Params_Data>(index_);
    }
    NetworkContext_SetCTPolicy_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> required_hosts;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> excluded_hosts;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> excluded_spkis;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> excluded_legacy_spkis;

 private:
  NetworkContext_SetCTPolicy_Params_Data();
  ~NetworkContext_SetCTPolicy_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_SetCTPolicy_Params_Data) == 40,
              "Bad sizeof(NetworkContext_SetCTPolicy_Params_Data)");
class  NetworkContext_CreateUDPSocket_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_CreateUDPSocket_Params_Data));
      new (data()) NetworkContext_CreateUDPSocket_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_CreateUDPSocket_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_CreateUDPSocket_Params_Data>(index_);
    }
    NetworkContext_CreateUDPSocket_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data request;
  mojo::internal::Interface_Data receiver;
  uint8_t padfinal_[4];

 private:
  NetworkContext_CreateUDPSocket_Params_Data();
  ~NetworkContext_CreateUDPSocket_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_CreateUDPSocket_Params_Data) == 24,
              "Bad sizeof(NetworkContext_CreateUDPSocket_Params_Data)");
class  NetworkContext_CreateTCPServerSocket_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_CreateTCPServerSocket_Params_Data));
      new (data()) NetworkContext_CreateTCPServerSocket_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_CreateTCPServerSocket_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_CreateTCPServerSocket_Params_Data>(index_);
    }
    NetworkContext_CreateTCPServerSocket_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::net::interfaces::internal::IPEndPoint_Data> local_addr;
  uint32_t backlog;
  mojo::internal::Handle_Data socket;
  mojo::internal::Pointer<::network::mojom::internal::MutableNetworkTrafficAnnotationTag_Data> traffic_annotation;

 private:
  NetworkContext_CreateTCPServerSocket_Params_Data();
  ~NetworkContext_CreateTCPServerSocket_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_CreateTCPServerSocket_Params_Data) == 32,
              "Bad sizeof(NetworkContext_CreateTCPServerSocket_Params_Data)");
class  NetworkContext_CreateTCPServerSocket_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_CreateTCPServerSocket_ResponseParams_Data));
      new (data()) NetworkContext_CreateTCPServerSocket_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_CreateTCPServerSocket_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_CreateTCPServerSocket_ResponseParams_Data>(index_);
    }
    NetworkContext_CreateTCPServerSocket_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::net::interfaces::internal::IPEndPoint_Data> local_addr_out;

 private:
  NetworkContext_CreateTCPServerSocket_ResponseParams_Data();
  ~NetworkContext_CreateTCPServerSocket_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_CreateTCPServerSocket_ResponseParams_Data) == 24,
              "Bad sizeof(NetworkContext_CreateTCPServerSocket_ResponseParams_Data)");
class  NetworkContext_CreateTCPConnectedSocket_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_CreateTCPConnectedSocket_Params_Data));
      new (data()) NetworkContext_CreateTCPConnectedSocket_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_CreateTCPConnectedSocket_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_CreateTCPConnectedSocket_Params_Data>(index_);
    }
    NetworkContext_CreateTCPConnectedSocket_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::net::interfaces::internal::IPEndPoint_Data> local_addr;
  mojo::internal::Pointer<::net::interfaces::internal::AddressList_Data> remote_addr_list;
  mojo::internal::Pointer<::network::mojom::internal::MutableNetworkTrafficAnnotationTag_Data> traffic_annotation;
  mojo::internal::Handle_Data socket;
  mojo::internal::Interface_Data observer;
  uint8_t padfinal_[4];

 private:
  NetworkContext_CreateTCPConnectedSocket_Params_Data();
  ~NetworkContext_CreateTCPConnectedSocket_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_CreateTCPConnectedSocket_Params_Data) == 48,
              "Bad sizeof(NetworkContext_CreateTCPConnectedSocket_Params_Data)");
class  NetworkContext_CreateTCPConnectedSocket_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_CreateTCPConnectedSocket_ResponseParams_Data));
      new (data()) NetworkContext_CreateTCPConnectedSocket_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_CreateTCPConnectedSocket_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_CreateTCPConnectedSocket_ResponseParams_Data>(index_);
    }
    NetworkContext_CreateTCPConnectedSocket_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  mojo::internal::Handle_Data receive_stream;
  mojo::internal::Handle_Data send_stream;
  uint8_t padfinal_[4];

 private:
  NetworkContext_CreateTCPConnectedSocket_ResponseParams_Data();
  ~NetworkContext_CreateTCPConnectedSocket_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_CreateTCPConnectedSocket_ResponseParams_Data) == 24,
              "Bad sizeof(NetworkContext_CreateTCPConnectedSocket_ResponseParams_Data)");
class  NetworkContext_CreateWebSocket_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_CreateWebSocket_Params_Data));
      new (data()) NetworkContext_CreateWebSocket_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_CreateWebSocket_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_CreateWebSocket_Params_Data>(index_);
    }
    NetworkContext_CreateWebSocket_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data request;
  int32_t process_id;
  int32_t render_frame_id;
  uint8_t pad2_[4];
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;

 private:
  NetworkContext_CreateWebSocket_Params_Data();
  ~NetworkContext_CreateWebSocket_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_CreateWebSocket_Params_Data) == 32,
              "Bad sizeof(NetworkContext_CreateWebSocket_Params_Data)");
class  NetworkContext_CreateNetLogExporter_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_CreateNetLogExporter_Params_Data));
      new (data()) NetworkContext_CreateNetLogExporter_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_CreateNetLogExporter_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_CreateNetLogExporter_Params_Data>(index_);
    }
    NetworkContext_CreateNetLogExporter_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data exporter;
  uint8_t padfinal_[4];

 private:
  NetworkContext_CreateNetLogExporter_Params_Data();
  ~NetworkContext_CreateNetLogExporter_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_CreateNetLogExporter_Params_Data) == 16,
              "Bad sizeof(NetworkContext_CreateNetLogExporter_Params_Data)");
class  NetworkContext_BlockThirdPartyCookies_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_BlockThirdPartyCookies_Params_Data));
      new (data()) NetworkContext_BlockThirdPartyCookies_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_BlockThirdPartyCookies_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_BlockThirdPartyCookies_Params_Data>(index_);
    }
    NetworkContext_BlockThirdPartyCookies_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t block : 1;
  uint8_t padfinal_[7];

 private:
  NetworkContext_BlockThirdPartyCookies_Params_Data();
  ~NetworkContext_BlockThirdPartyCookies_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_BlockThirdPartyCookies_Params_Data) == 16,
              "Bad sizeof(NetworkContext_BlockThirdPartyCookies_Params_Data)");
class  NetworkContext_AddHSTSForTesting_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_AddHSTSForTesting_Params_Data));
      new (data()) NetworkContext_AddHSTSForTesting_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_AddHSTSForTesting_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_AddHSTSForTesting_Params_Data>(index_);
    }
    NetworkContext_AddHSTSForTesting_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> host;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> expiry;
  uint8_t include_subdomains : 1;
  uint8_t padfinal_[7];

 private:
  NetworkContext_AddHSTSForTesting_Params_Data();
  ~NetworkContext_AddHSTSForTesting_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_AddHSTSForTesting_Params_Data) == 32,
              "Bad sizeof(NetworkContext_AddHSTSForTesting_Params_Data)");
class  NetworkContext_AddHSTSForTesting_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_AddHSTSForTesting_ResponseParams_Data));
      new (data()) NetworkContext_AddHSTSForTesting_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_AddHSTSForTesting_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_AddHSTSForTesting_ResponseParams_Data>(index_);
    }
    NetworkContext_AddHSTSForTesting_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkContext_AddHSTSForTesting_ResponseParams_Data();
  ~NetworkContext_AddHSTSForTesting_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_AddHSTSForTesting_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkContext_AddHSTSForTesting_ResponseParams_Data)");
class  NetworkContext_SetFailingHttpTransactionForTesting_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_SetFailingHttpTransactionForTesting_Params_Data));
      new (data()) NetworkContext_SetFailingHttpTransactionForTesting_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_SetFailingHttpTransactionForTesting_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_SetFailingHttpTransactionForTesting_Params_Data>(index_);
    }
    NetworkContext_SetFailingHttpTransactionForTesting_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t rv;
  uint8_t padfinal_[4];

 private:
  NetworkContext_SetFailingHttpTransactionForTesting_Params_Data();
  ~NetworkContext_SetFailingHttpTransactionForTesting_Params_Data() = delete;
};
static_assert(sizeof(NetworkContext_SetFailingHttpTransactionForTesting_Params_Data) == 16,
              "Bad sizeof(NetworkContext_SetFailingHttpTransactionForTesting_Params_Data)");
class  NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams_Data));
      new (data()) NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams_Data>(index_);
    }
    NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams_Data();
  ~NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_SHARED_INTERNAL_H_