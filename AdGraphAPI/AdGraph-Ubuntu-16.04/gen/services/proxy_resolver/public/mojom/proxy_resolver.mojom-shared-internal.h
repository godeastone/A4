// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_PROXY_RESOLVER_PUBLIC_MOJOM_PROXY_RESOLVER_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_PROXY_RESOLVER_PUBLIC_MOJOM_PROXY_RESOLVER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "net/interfaces/address_family.mojom-shared-internal.h"
#include "net/interfaces/host_resolver_service.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace proxy_resolver {
namespace mojom {
namespace internal {
class ProxyServer_Data;
class ProxyInfo_Data;

struct ProxyScheme_Data {
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
class  ProxyServer_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProxyServer_Data));
      new (data()) ProxyServer_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProxyServer_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProxyServer_Data>(index_);
    }
    ProxyServer_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t scheme;
  uint16_t port;
  uint8_t pad1_[2];
  mojo::internal::Pointer<mojo::internal::String_Data> host;

 private:
  ProxyServer_Data();
  ~ProxyServer_Data() = delete;
};
static_assert(sizeof(ProxyServer_Data) == 24,
              "Bad sizeof(ProxyServer_Data)");
// Used by ProxyServer::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ProxyServer_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ProxyServer_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ProxyServer_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ProxyServer_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ProxyServer_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  ProxyInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProxyInfo_Data));
      new (data()) ProxyInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProxyInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProxyInfo_Data>(index_);
    }
    ProxyInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::ProxyServer_Data>>> proxy_servers;

 private:
  ProxyInfo_Data();
  ~ProxyInfo_Data() = delete;
};
static_assert(sizeof(ProxyInfo_Data) == 16,
              "Bad sizeof(ProxyInfo_Data)");
// Used by ProxyInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ProxyInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ProxyInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ProxyInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ProxyInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ProxyInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  ProxyResolver_GetProxyForUrl_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProxyResolver_GetProxyForUrl_Params_Data));
      new (data()) ProxyResolver_GetProxyForUrl_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProxyResolver_GetProxyForUrl_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProxyResolver_GetProxyForUrl_Params_Data>(index_);
    }
    ProxyResolver_GetProxyForUrl_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Interface_Data client;

 private:
  ProxyResolver_GetProxyForUrl_Params_Data();
  ~ProxyResolver_GetProxyForUrl_Params_Data() = delete;
};
static_assert(sizeof(ProxyResolver_GetProxyForUrl_Params_Data) == 24,
              "Bad sizeof(ProxyResolver_GetProxyForUrl_Params_Data)");
class  ProxyResolverRequestClient_ReportResult_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProxyResolverRequestClient_ReportResult_Params_Data));
      new (data()) ProxyResolverRequestClient_ReportResult_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProxyResolverRequestClient_ReportResult_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProxyResolverRequestClient_ReportResult_Params_Data>(index_);
    }
    ProxyResolverRequestClient_ReportResult_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t pad0_[4];
  mojo::internal::Pointer<internal::ProxyInfo_Data> proxy_info;

 private:
  ProxyResolverRequestClient_ReportResult_Params_Data();
  ~ProxyResolverRequestClient_ReportResult_Params_Data() = delete;
};
static_assert(sizeof(ProxyResolverRequestClient_ReportResult_Params_Data) == 24,
              "Bad sizeof(ProxyResolverRequestClient_ReportResult_Params_Data)");
class  ProxyResolverRequestClient_Alert_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProxyResolverRequestClient_Alert_Params_Data));
      new (data()) ProxyResolverRequestClient_Alert_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProxyResolverRequestClient_Alert_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProxyResolverRequestClient_Alert_Params_Data>(index_);
    }
    ProxyResolverRequestClient_Alert_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> error;

 private:
  ProxyResolverRequestClient_Alert_Params_Data();
  ~ProxyResolverRequestClient_Alert_Params_Data() = delete;
};
static_assert(sizeof(ProxyResolverRequestClient_Alert_Params_Data) == 16,
              "Bad sizeof(ProxyResolverRequestClient_Alert_Params_Data)");
class  ProxyResolverRequestClient_OnError_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProxyResolverRequestClient_OnError_Params_Data));
      new (data()) ProxyResolverRequestClient_OnError_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProxyResolverRequestClient_OnError_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProxyResolverRequestClient_OnError_Params_Data>(index_);
    }
    ProxyResolverRequestClient_OnError_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t line_number;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> error;

 private:
  ProxyResolverRequestClient_OnError_Params_Data();
  ~ProxyResolverRequestClient_OnError_Params_Data() = delete;
};
static_assert(sizeof(ProxyResolverRequestClient_OnError_Params_Data) == 24,
              "Bad sizeof(ProxyResolverRequestClient_OnError_Params_Data)");
class  ProxyResolverRequestClient_ResolveDns_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProxyResolverRequestClient_ResolveDns_Params_Data));
      new (data()) ProxyResolverRequestClient_ResolveDns_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProxyResolverRequestClient_ResolveDns_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProxyResolverRequestClient_ResolveDns_Params_Data>(index_);
    }
    ProxyResolverRequestClient_ResolveDns_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::net::interfaces::internal::HostResolverRequestInfo_Data> request_info;
  mojo::internal::Interface_Data client;

 private:
  ProxyResolverRequestClient_ResolveDns_Params_Data();
  ~ProxyResolverRequestClient_ResolveDns_Params_Data() = delete;
};
static_assert(sizeof(ProxyResolverRequestClient_ResolveDns_Params_Data) == 24,
              "Bad sizeof(ProxyResolverRequestClient_ResolveDns_Params_Data)");
class  ProxyResolverFactory_CreateResolver_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProxyResolverFactory_CreateResolver_Params_Data));
      new (data()) ProxyResolverFactory_CreateResolver_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProxyResolverFactory_CreateResolver_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProxyResolverFactory_CreateResolver_Params_Data>(index_);
    }
    ProxyResolverFactory_CreateResolver_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> pac_script;
  mojo::internal::Handle_Data resolver;
  mojo::internal::Interface_Data client;
  uint8_t padfinal_[4];

 private:
  ProxyResolverFactory_CreateResolver_Params_Data();
  ~ProxyResolverFactory_CreateResolver_Params_Data() = delete;
};
static_assert(sizeof(ProxyResolverFactory_CreateResolver_Params_Data) == 32,
              "Bad sizeof(ProxyResolverFactory_CreateResolver_Params_Data)");
class  ProxyResolverFactoryRequestClient_ReportResult_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProxyResolverFactoryRequestClient_ReportResult_Params_Data));
      new (data()) ProxyResolverFactoryRequestClient_ReportResult_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProxyResolverFactoryRequestClient_ReportResult_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProxyResolverFactoryRequestClient_ReportResult_Params_Data>(index_);
    }
    ProxyResolverFactoryRequestClient_ReportResult_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t padfinal_[4];

 private:
  ProxyResolverFactoryRequestClient_ReportResult_Params_Data();
  ~ProxyResolverFactoryRequestClient_ReportResult_Params_Data() = delete;
};
static_assert(sizeof(ProxyResolverFactoryRequestClient_ReportResult_Params_Data) == 16,
              "Bad sizeof(ProxyResolverFactoryRequestClient_ReportResult_Params_Data)");
class  ProxyResolverFactoryRequestClient_Alert_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProxyResolverFactoryRequestClient_Alert_Params_Data));
      new (data()) ProxyResolverFactoryRequestClient_Alert_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProxyResolverFactoryRequestClient_Alert_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProxyResolverFactoryRequestClient_Alert_Params_Data>(index_);
    }
    ProxyResolverFactoryRequestClient_Alert_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> error;

 private:
  ProxyResolverFactoryRequestClient_Alert_Params_Data();
  ~ProxyResolverFactoryRequestClient_Alert_Params_Data() = delete;
};
static_assert(sizeof(ProxyResolverFactoryRequestClient_Alert_Params_Data) == 16,
              "Bad sizeof(ProxyResolverFactoryRequestClient_Alert_Params_Data)");
class  ProxyResolverFactoryRequestClient_OnError_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProxyResolverFactoryRequestClient_OnError_Params_Data));
      new (data()) ProxyResolverFactoryRequestClient_OnError_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProxyResolverFactoryRequestClient_OnError_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProxyResolverFactoryRequestClient_OnError_Params_Data>(index_);
    }
    ProxyResolverFactoryRequestClient_OnError_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t line_number;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> error;

 private:
  ProxyResolverFactoryRequestClient_OnError_Params_Data();
  ~ProxyResolverFactoryRequestClient_OnError_Params_Data() = delete;
};
static_assert(sizeof(ProxyResolverFactoryRequestClient_OnError_Params_Data) == 24,
              "Bad sizeof(ProxyResolverFactoryRequestClient_OnError_Params_Data)");
class  ProxyResolverFactoryRequestClient_ResolveDns_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProxyResolverFactoryRequestClient_ResolveDns_Params_Data));
      new (data()) ProxyResolverFactoryRequestClient_ResolveDns_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProxyResolverFactoryRequestClient_ResolveDns_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProxyResolverFactoryRequestClient_ResolveDns_Params_Data>(index_);
    }
    ProxyResolverFactoryRequestClient_ResolveDns_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::net::interfaces::internal::HostResolverRequestInfo_Data> request_info;
  mojo::internal::Interface_Data client;

 private:
  ProxyResolverFactoryRequestClient_ResolveDns_Params_Data();
  ~ProxyResolverFactoryRequestClient_ResolveDns_Params_Data() = delete;
};
static_assert(sizeof(ProxyResolverFactoryRequestClient_ResolveDns_Params_Data) == 24,
              "Bad sizeof(ProxyResolverFactoryRequestClient_ResolveDns_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace proxy_resolver

#endif  // SERVICES_PROXY_RESOLVER_PUBLIC_MOJOM_PROXY_RESOLVER_MOJOM_SHARED_INTERNAL_H_