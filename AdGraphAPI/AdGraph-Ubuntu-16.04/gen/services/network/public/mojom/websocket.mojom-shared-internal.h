// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_WEBSOCKET_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_WEBSOCKET_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
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
class HttpHeader_Data;
class WebSocketHandshakeRequest_Data;
class WebSocketHandshakeResponse_Data;

struct WebSocketMessageType_Data {
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
class  HttpHeader_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HttpHeader_Data));
      new (data()) HttpHeader_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HttpHeader_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HttpHeader_Data>(index_);
    }
    HttpHeader_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  mojo::internal::Pointer<mojo::internal::String_Data> value;

 private:
  HttpHeader_Data();
  ~HttpHeader_Data() = delete;
};
static_assert(sizeof(HttpHeader_Data) == 24,
              "Bad sizeof(HttpHeader_Data)");
// Used by HttpHeader::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct HttpHeader_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  HttpHeader_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~HttpHeader_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    HttpHeader_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    HttpHeader_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  WebSocketHandshakeRequest_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebSocketHandshakeRequest_Data));
      new (data()) WebSocketHandshakeRequest_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebSocketHandshakeRequest_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebSocketHandshakeRequest_Data>(index_);
    }
    WebSocketHandshakeRequest_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::HttpHeader_Data>>> headers;
  mojo::internal::Pointer<mojo::internal::String_Data> headers_text;

 private:
  WebSocketHandshakeRequest_Data();
  ~WebSocketHandshakeRequest_Data() = delete;
};
static_assert(sizeof(WebSocketHandshakeRequest_Data) == 32,
              "Bad sizeof(WebSocketHandshakeRequest_Data)");
// Used by WebSocketHandshakeRequest::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct WebSocketHandshakeRequest_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  WebSocketHandshakeRequest_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~WebSocketHandshakeRequest_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    WebSocketHandshakeRequest_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    WebSocketHandshakeRequest_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  WebSocketHandshakeResponse_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebSocketHandshakeResponse_Data));
      new (data()) WebSocketHandshakeResponse_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebSocketHandshakeResponse_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebSocketHandshakeResponse_Data>(index_);
    }
    WebSocketHandshakeResponse_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  int32_t status_code;
  uint8_t pad1_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> status_text;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::HttpHeader_Data>>> headers;
  mojo::internal::Pointer<mojo::internal::String_Data> headers_text;

 private:
  WebSocketHandshakeResponse_Data();
  ~WebSocketHandshakeResponse_Data() = delete;
};
static_assert(sizeof(WebSocketHandshakeResponse_Data) == 48,
              "Bad sizeof(WebSocketHandshakeResponse_Data)");
// Used by WebSocketHandshakeResponse::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct WebSocketHandshakeResponse_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  WebSocketHandshakeResponse_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~WebSocketHandshakeResponse_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    WebSocketHandshakeResponse_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    WebSocketHandshakeResponse_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  WebSocketClient_OnFailChannel_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebSocketClient_OnFailChannel_Params_Data));
      new (data()) WebSocketClient_OnFailChannel_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebSocketClient_OnFailChannel_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebSocketClient_OnFailChannel_Params_Data>(index_);
    }
    WebSocketClient_OnFailChannel_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> reason;

 private:
  WebSocketClient_OnFailChannel_Params_Data();
  ~WebSocketClient_OnFailChannel_Params_Data() = delete;
};
static_assert(sizeof(WebSocketClient_OnFailChannel_Params_Data) == 16,
              "Bad sizeof(WebSocketClient_OnFailChannel_Params_Data)");
class  WebSocketClient_OnStartOpeningHandshake_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebSocketClient_OnStartOpeningHandshake_Params_Data));
      new (data()) WebSocketClient_OnStartOpeningHandshake_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebSocketClient_OnStartOpeningHandshake_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebSocketClient_OnStartOpeningHandshake_Params_Data>(index_);
    }
    WebSocketClient_OnStartOpeningHandshake_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::WebSocketHandshakeRequest_Data> request;

 private:
  WebSocketClient_OnStartOpeningHandshake_Params_Data();
  ~WebSocketClient_OnStartOpeningHandshake_Params_Data() = delete;
};
static_assert(sizeof(WebSocketClient_OnStartOpeningHandshake_Params_Data) == 16,
              "Bad sizeof(WebSocketClient_OnStartOpeningHandshake_Params_Data)");
class  WebSocketClient_OnFinishOpeningHandshake_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebSocketClient_OnFinishOpeningHandshake_Params_Data));
      new (data()) WebSocketClient_OnFinishOpeningHandshake_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebSocketClient_OnFinishOpeningHandshake_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebSocketClient_OnFinishOpeningHandshake_Params_Data>(index_);
    }
    WebSocketClient_OnFinishOpeningHandshake_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::WebSocketHandshakeResponse_Data> response;

 private:
  WebSocketClient_OnFinishOpeningHandshake_Params_Data();
  ~WebSocketClient_OnFinishOpeningHandshake_Params_Data() = delete;
};
static_assert(sizeof(WebSocketClient_OnFinishOpeningHandshake_Params_Data) == 16,
              "Bad sizeof(WebSocketClient_OnFinishOpeningHandshake_Params_Data)");
class  WebSocketClient_OnAddChannelResponse_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebSocketClient_OnAddChannelResponse_Params_Data));
      new (data()) WebSocketClient_OnAddChannelResponse_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebSocketClient_OnAddChannelResponse_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebSocketClient_OnAddChannelResponse_Params_Data>(index_);
    }
    WebSocketClient_OnAddChannelResponse_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> selected_protocol;
  mojo::internal::Pointer<mojo::internal::String_Data> extensions;

 private:
  WebSocketClient_OnAddChannelResponse_Params_Data();
  ~WebSocketClient_OnAddChannelResponse_Params_Data() = delete;
};
static_assert(sizeof(WebSocketClient_OnAddChannelResponse_Params_Data) == 24,
              "Bad sizeof(WebSocketClient_OnAddChannelResponse_Params_Data)");
class  WebSocketClient_OnDataFrame_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebSocketClient_OnDataFrame_Params_Data));
      new (data()) WebSocketClient_OnDataFrame_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebSocketClient_OnDataFrame_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebSocketClient_OnDataFrame_Params_Data>(index_);
    }
    WebSocketClient_OnDataFrame_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t fin : 1;
  uint8_t pad0_[3];
  int32_t type;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> data;

 private:
  WebSocketClient_OnDataFrame_Params_Data();
  ~WebSocketClient_OnDataFrame_Params_Data() = delete;
};
static_assert(sizeof(WebSocketClient_OnDataFrame_Params_Data) == 24,
              "Bad sizeof(WebSocketClient_OnDataFrame_Params_Data)");
class  WebSocketClient_OnFlowControl_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebSocketClient_OnFlowControl_Params_Data));
      new (data()) WebSocketClient_OnFlowControl_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebSocketClient_OnFlowControl_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebSocketClient_OnFlowControl_Params_Data>(index_);
    }
    WebSocketClient_OnFlowControl_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t quota;

 private:
  WebSocketClient_OnFlowControl_Params_Data();
  ~WebSocketClient_OnFlowControl_Params_Data() = delete;
};
static_assert(sizeof(WebSocketClient_OnFlowControl_Params_Data) == 16,
              "Bad sizeof(WebSocketClient_OnFlowControl_Params_Data)");
class  WebSocketClient_OnDropChannel_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebSocketClient_OnDropChannel_Params_Data));
      new (data()) WebSocketClient_OnDropChannel_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebSocketClient_OnDropChannel_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebSocketClient_OnDropChannel_Params_Data>(index_);
    }
    WebSocketClient_OnDropChannel_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t was_clean : 1;
  uint8_t pad0_[1];
  uint16_t code;
  uint8_t pad1_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> reason;

 private:
  WebSocketClient_OnDropChannel_Params_Data();
  ~WebSocketClient_OnDropChannel_Params_Data() = delete;
};
static_assert(sizeof(WebSocketClient_OnDropChannel_Params_Data) == 24,
              "Bad sizeof(WebSocketClient_OnDropChannel_Params_Data)");
class  WebSocketClient_OnClosingHandshake_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebSocketClient_OnClosingHandshake_Params_Data));
      new (data()) WebSocketClient_OnClosingHandshake_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebSocketClient_OnClosingHandshake_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebSocketClient_OnClosingHandshake_Params_Data>(index_);
    }
    WebSocketClient_OnClosingHandshake_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  WebSocketClient_OnClosingHandshake_Params_Data();
  ~WebSocketClient_OnClosingHandshake_Params_Data() = delete;
};
static_assert(sizeof(WebSocketClient_OnClosingHandshake_Params_Data) == 8,
              "Bad sizeof(WebSocketClient_OnClosingHandshake_Params_Data)");
class  WebSocket_AddChannelRequest_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebSocket_AddChannelRequest_Params_Data));
      new (data()) WebSocket_AddChannelRequest_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebSocket_AddChannelRequest_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebSocket_AddChannelRequest_Params_Data>(index_);
    }
    WebSocket_AddChannelRequest_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> requested_protocols;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> first_party_for_cookies;
  mojo::internal::Pointer<mojo::internal::String_Data> user_agent_override;
  mojo::internal::Interface_Data client;

 private:
  WebSocket_AddChannelRequest_Params_Data();
  ~WebSocket_AddChannelRequest_Params_Data() = delete;
};
static_assert(sizeof(WebSocket_AddChannelRequest_Params_Data) == 48,
              "Bad sizeof(WebSocket_AddChannelRequest_Params_Data)");
class  WebSocket_SendFrame_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebSocket_SendFrame_Params_Data));
      new (data()) WebSocket_SendFrame_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebSocket_SendFrame_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebSocket_SendFrame_Params_Data>(index_);
    }
    WebSocket_SendFrame_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t fin : 1;
  uint8_t pad0_[3];
  int32_t type;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> data;

 private:
  WebSocket_SendFrame_Params_Data();
  ~WebSocket_SendFrame_Params_Data() = delete;
};
static_assert(sizeof(WebSocket_SendFrame_Params_Data) == 24,
              "Bad sizeof(WebSocket_SendFrame_Params_Data)");
class  WebSocket_SendFlowControl_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebSocket_SendFlowControl_Params_Data));
      new (data()) WebSocket_SendFlowControl_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebSocket_SendFlowControl_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebSocket_SendFlowControl_Params_Data>(index_);
    }
    WebSocket_SendFlowControl_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t quota;

 private:
  WebSocket_SendFlowControl_Params_Data();
  ~WebSocket_SendFlowControl_Params_Data() = delete;
};
static_assert(sizeof(WebSocket_SendFlowControl_Params_Data) == 16,
              "Bad sizeof(WebSocket_SendFlowControl_Params_Data)");
class  WebSocket_StartClosingHandshake_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebSocket_StartClosingHandshake_Params_Data));
      new (data()) WebSocket_StartClosingHandshake_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebSocket_StartClosingHandshake_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebSocket_StartClosingHandshake_Params_Data>(index_);
    }
    WebSocket_StartClosingHandshake_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint16_t code;
  uint8_t pad0_[6];
  mojo::internal::Pointer<mojo::internal::String_Data> reason;

 private:
  WebSocket_StartClosingHandshake_Params_Data();
  ~WebSocket_StartClosingHandshake_Params_Data() = delete;
};
static_assert(sizeof(WebSocket_StartClosingHandshake_Params_Data) == 24,
              "Bad sizeof(WebSocket_StartClosingHandshake_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_WEBSOCKET_MOJOM_SHARED_INTERNAL_H_