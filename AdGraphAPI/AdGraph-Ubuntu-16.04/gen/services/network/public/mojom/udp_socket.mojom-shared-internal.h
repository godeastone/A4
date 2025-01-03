// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom-shared-internal.h"
#include "mojo/public/mojom/base/read_only_buffer.mojom-shared-internal.h"
#include "net/interfaces/address_family.mojom-shared-internal.h"
#include "net/interfaces/ip_address.mojom-shared-internal.h"
#include "net/interfaces/ip_endpoint.mojom-shared-internal.h"
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
class UDPSocketOptions_Data;

#pragma pack(push, 1)
class  UDPSocketOptions_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocketOptions_Data));
      new (data()) UDPSocketOptions_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocketOptions_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocketOptions_Data>(index_);
    }
    UDPSocketOptions_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t allow_address_reuse : 1;
  uint8_t multicast_loopback_mode : 1;
  uint8_t pad1_[3];
  uint32_t multicast_interface;
  uint32_t multicast_time_to_live;
  int32_t send_buffer_size;
  int32_t receive_buffer_size;
  uint8_t padfinal_[4];

 private:
  UDPSocketOptions_Data();
  ~UDPSocketOptions_Data() = delete;
};
static_assert(sizeof(UDPSocketOptions_Data) == 32,
              "Bad sizeof(UDPSocketOptions_Data)");
// Used by UDPSocketOptions::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct UDPSocketOptions_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  UDPSocketOptions_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~UDPSocketOptions_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    UDPSocketOptions_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    UDPSocketOptions_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  UDPSocket_Bind_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocket_Bind_Params_Data));
      new (data()) UDPSocket_Bind_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocket_Bind_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocket_Bind_Params_Data>(index_);
    }
    UDPSocket_Bind_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::net::interfaces::internal::IPEndPoint_Data> local_addr;
  mojo::internal::Pointer<internal::UDPSocketOptions_Data> socket_options;

 private:
  UDPSocket_Bind_Params_Data();
  ~UDPSocket_Bind_Params_Data() = delete;
};
static_assert(sizeof(UDPSocket_Bind_Params_Data) == 24,
              "Bad sizeof(UDPSocket_Bind_Params_Data)");
class  UDPSocket_Bind_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocket_Bind_ResponseParams_Data));
      new (data()) UDPSocket_Bind_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocket_Bind_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocket_Bind_ResponseParams_Data>(index_);
    }
    UDPSocket_Bind_ResponseParams_Data* operator->() { return data(); }

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
  UDPSocket_Bind_ResponseParams_Data();
  ~UDPSocket_Bind_ResponseParams_Data() = delete;
};
static_assert(sizeof(UDPSocket_Bind_ResponseParams_Data) == 24,
              "Bad sizeof(UDPSocket_Bind_ResponseParams_Data)");
class  UDPSocket_Connect_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocket_Connect_Params_Data));
      new (data()) UDPSocket_Connect_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocket_Connect_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocket_Connect_Params_Data>(index_);
    }
    UDPSocket_Connect_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::net::interfaces::internal::IPEndPoint_Data> remote_addr;
  mojo::internal::Pointer<internal::UDPSocketOptions_Data> socket_options;

 private:
  UDPSocket_Connect_Params_Data();
  ~UDPSocket_Connect_Params_Data() = delete;
};
static_assert(sizeof(UDPSocket_Connect_Params_Data) == 24,
              "Bad sizeof(UDPSocket_Connect_Params_Data)");
class  UDPSocket_Connect_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocket_Connect_ResponseParams_Data));
      new (data()) UDPSocket_Connect_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocket_Connect_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocket_Connect_ResponseParams_Data>(index_);
    }
    UDPSocket_Connect_ResponseParams_Data* operator->() { return data(); }

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
  UDPSocket_Connect_ResponseParams_Data();
  ~UDPSocket_Connect_ResponseParams_Data() = delete;
};
static_assert(sizeof(UDPSocket_Connect_ResponseParams_Data) == 24,
              "Bad sizeof(UDPSocket_Connect_ResponseParams_Data)");
class  UDPSocket_SetBroadcast_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocket_SetBroadcast_Params_Data));
      new (data()) UDPSocket_SetBroadcast_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocket_SetBroadcast_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocket_SetBroadcast_Params_Data>(index_);
    }
    UDPSocket_SetBroadcast_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t broadcast : 1;
  uint8_t padfinal_[7];

 private:
  UDPSocket_SetBroadcast_Params_Data();
  ~UDPSocket_SetBroadcast_Params_Data() = delete;
};
static_assert(sizeof(UDPSocket_SetBroadcast_Params_Data) == 16,
              "Bad sizeof(UDPSocket_SetBroadcast_Params_Data)");
class  UDPSocket_SetBroadcast_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocket_SetBroadcast_ResponseParams_Data));
      new (data()) UDPSocket_SetBroadcast_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocket_SetBroadcast_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocket_SetBroadcast_ResponseParams_Data>(index_);
    }
    UDPSocket_SetBroadcast_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t padfinal_[4];

 private:
  UDPSocket_SetBroadcast_ResponseParams_Data();
  ~UDPSocket_SetBroadcast_ResponseParams_Data() = delete;
};
static_assert(sizeof(UDPSocket_SetBroadcast_ResponseParams_Data) == 16,
              "Bad sizeof(UDPSocket_SetBroadcast_ResponseParams_Data)");
class  UDPSocket_JoinGroup_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocket_JoinGroup_Params_Data));
      new (data()) UDPSocket_JoinGroup_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocket_JoinGroup_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocket_JoinGroup_Params_Data>(index_);
    }
    UDPSocket_JoinGroup_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::net::interfaces::internal::IPAddress_Data> group_address;

 private:
  UDPSocket_JoinGroup_Params_Data();
  ~UDPSocket_JoinGroup_Params_Data() = delete;
};
static_assert(sizeof(UDPSocket_JoinGroup_Params_Data) == 16,
              "Bad sizeof(UDPSocket_JoinGroup_Params_Data)");
class  UDPSocket_JoinGroup_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocket_JoinGroup_ResponseParams_Data));
      new (data()) UDPSocket_JoinGroup_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocket_JoinGroup_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocket_JoinGroup_ResponseParams_Data>(index_);
    }
    UDPSocket_JoinGroup_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t padfinal_[4];

 private:
  UDPSocket_JoinGroup_ResponseParams_Data();
  ~UDPSocket_JoinGroup_ResponseParams_Data() = delete;
};
static_assert(sizeof(UDPSocket_JoinGroup_ResponseParams_Data) == 16,
              "Bad sizeof(UDPSocket_JoinGroup_ResponseParams_Data)");
class  UDPSocket_LeaveGroup_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocket_LeaveGroup_Params_Data));
      new (data()) UDPSocket_LeaveGroup_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocket_LeaveGroup_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocket_LeaveGroup_Params_Data>(index_);
    }
    UDPSocket_LeaveGroup_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::net::interfaces::internal::IPAddress_Data> group_address;

 private:
  UDPSocket_LeaveGroup_Params_Data();
  ~UDPSocket_LeaveGroup_Params_Data() = delete;
};
static_assert(sizeof(UDPSocket_LeaveGroup_Params_Data) == 16,
              "Bad sizeof(UDPSocket_LeaveGroup_Params_Data)");
class  UDPSocket_LeaveGroup_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocket_LeaveGroup_ResponseParams_Data));
      new (data()) UDPSocket_LeaveGroup_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocket_LeaveGroup_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocket_LeaveGroup_ResponseParams_Data>(index_);
    }
    UDPSocket_LeaveGroup_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t padfinal_[4];

 private:
  UDPSocket_LeaveGroup_ResponseParams_Data();
  ~UDPSocket_LeaveGroup_ResponseParams_Data() = delete;
};
static_assert(sizeof(UDPSocket_LeaveGroup_ResponseParams_Data) == 16,
              "Bad sizeof(UDPSocket_LeaveGroup_ResponseParams_Data)");
class  UDPSocket_ReceiveMore_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocket_ReceiveMore_Params_Data));
      new (data()) UDPSocket_ReceiveMore_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocket_ReceiveMore_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocket_ReceiveMore_Params_Data>(index_);
    }
    UDPSocket_ReceiveMore_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t num_additional_datagrams;
  uint8_t padfinal_[4];

 private:
  UDPSocket_ReceiveMore_Params_Data();
  ~UDPSocket_ReceiveMore_Params_Data() = delete;
};
static_assert(sizeof(UDPSocket_ReceiveMore_Params_Data) == 16,
              "Bad sizeof(UDPSocket_ReceiveMore_Params_Data)");
class  UDPSocket_ReceiveMoreWithBufferSize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocket_ReceiveMoreWithBufferSize_Params_Data));
      new (data()) UDPSocket_ReceiveMoreWithBufferSize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocket_ReceiveMoreWithBufferSize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocket_ReceiveMoreWithBufferSize_Params_Data>(index_);
    }
    UDPSocket_ReceiveMoreWithBufferSize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t num_additional_datagrams;
  uint32_t buffer_size;

 private:
  UDPSocket_ReceiveMoreWithBufferSize_Params_Data();
  ~UDPSocket_ReceiveMoreWithBufferSize_Params_Data() = delete;
};
static_assert(sizeof(UDPSocket_ReceiveMoreWithBufferSize_Params_Data) == 16,
              "Bad sizeof(UDPSocket_ReceiveMoreWithBufferSize_Params_Data)");
class  UDPSocket_SendTo_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocket_SendTo_Params_Data));
      new (data()) UDPSocket_SendTo_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocket_SendTo_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocket_SendTo_Params_Data>(index_);
    }
    UDPSocket_SendTo_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::net::interfaces::internal::IPEndPoint_Data> dest_addr;
  mojo::internal::Pointer<::mojo_base::mojom::internal::ReadOnlyBuffer_Data> data;
  mojo::internal::Pointer<::network::mojom::internal::MutableNetworkTrafficAnnotationTag_Data> traffic_annotation;

 private:
  UDPSocket_SendTo_Params_Data();
  ~UDPSocket_SendTo_Params_Data() = delete;
};
static_assert(sizeof(UDPSocket_SendTo_Params_Data) == 32,
              "Bad sizeof(UDPSocket_SendTo_Params_Data)");
class  UDPSocket_SendTo_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocket_SendTo_ResponseParams_Data));
      new (data()) UDPSocket_SendTo_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocket_SendTo_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocket_SendTo_ResponseParams_Data>(index_);
    }
    UDPSocket_SendTo_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t padfinal_[4];

 private:
  UDPSocket_SendTo_ResponseParams_Data();
  ~UDPSocket_SendTo_ResponseParams_Data() = delete;
};
static_assert(sizeof(UDPSocket_SendTo_ResponseParams_Data) == 16,
              "Bad sizeof(UDPSocket_SendTo_ResponseParams_Data)");
class  UDPSocket_Send_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocket_Send_Params_Data));
      new (data()) UDPSocket_Send_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocket_Send_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocket_Send_Params_Data>(index_);
    }
    UDPSocket_Send_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::ReadOnlyBuffer_Data> data;
  mojo::internal::Pointer<::network::mojom::internal::MutableNetworkTrafficAnnotationTag_Data> traffic_annotation;

 private:
  UDPSocket_Send_Params_Data();
  ~UDPSocket_Send_Params_Data() = delete;
};
static_assert(sizeof(UDPSocket_Send_Params_Data) == 24,
              "Bad sizeof(UDPSocket_Send_Params_Data)");
class  UDPSocket_Send_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocket_Send_ResponseParams_Data));
      new (data()) UDPSocket_Send_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocket_Send_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocket_Send_ResponseParams_Data>(index_);
    }
    UDPSocket_Send_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t padfinal_[4];

 private:
  UDPSocket_Send_ResponseParams_Data();
  ~UDPSocket_Send_ResponseParams_Data() = delete;
};
static_assert(sizeof(UDPSocket_Send_ResponseParams_Data) == 16,
              "Bad sizeof(UDPSocket_Send_ResponseParams_Data)");
class  UDPSocket_Close_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocket_Close_Params_Data));
      new (data()) UDPSocket_Close_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocket_Close_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocket_Close_Params_Data>(index_);
    }
    UDPSocket_Close_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  UDPSocket_Close_Params_Data();
  ~UDPSocket_Close_Params_Data() = delete;
};
static_assert(sizeof(UDPSocket_Close_Params_Data) == 8,
              "Bad sizeof(UDPSocket_Close_Params_Data)");
class  UDPSocketReceiver_OnReceived_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocketReceiver_OnReceived_Params_Data));
      new (data()) UDPSocketReceiver_OnReceived_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocketReceiver_OnReceived_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocketReceiver_OnReceived_Params_Data>(index_);
    }
    UDPSocketReceiver_OnReceived_Params_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::net::interfaces::internal::IPEndPoint_Data> src_addr;
  mojo::internal::Pointer<::mojo_base::mojom::internal::ReadOnlyBuffer_Data> data;

 private:
  UDPSocketReceiver_OnReceived_Params_Data();
  ~UDPSocketReceiver_OnReceived_Params_Data() = delete;
};
static_assert(sizeof(UDPSocketReceiver_OnReceived_Params_Data) == 32,
              "Bad sizeof(UDPSocketReceiver_OnReceived_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_SHARED_INTERNAL_H_