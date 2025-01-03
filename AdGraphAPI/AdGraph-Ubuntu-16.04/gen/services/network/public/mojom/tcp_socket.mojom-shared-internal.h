// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_TCP_SOCKET_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_TCP_SOCKET_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "net/interfaces/ip_endpoint.mojom-shared-internal.h"
#include "services/network/public/mojom/tls_socket.mojom-shared-internal.h"
#include "services/network/public/mojom/network_param.mojom-shared-internal.h"
#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom-shared-internal.h"
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

#pragma pack(push, 1)
class  TCPConnectedSocket_GetLocalAddress_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TCPConnectedSocket_GetLocalAddress_Params_Data));
      new (data()) TCPConnectedSocket_GetLocalAddress_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TCPConnectedSocket_GetLocalAddress_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TCPConnectedSocket_GetLocalAddress_Params_Data>(index_);
    }
    TCPConnectedSocket_GetLocalAddress_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  TCPConnectedSocket_GetLocalAddress_Params_Data();
  ~TCPConnectedSocket_GetLocalAddress_Params_Data() = delete;
};
static_assert(sizeof(TCPConnectedSocket_GetLocalAddress_Params_Data) == 8,
              "Bad sizeof(TCPConnectedSocket_GetLocalAddress_Params_Data)");
class  TCPConnectedSocket_GetLocalAddress_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TCPConnectedSocket_GetLocalAddress_ResponseParams_Data));
      new (data()) TCPConnectedSocket_GetLocalAddress_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TCPConnectedSocket_GetLocalAddress_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TCPConnectedSocket_GetLocalAddress_ResponseParams_Data>(index_);
    }
    TCPConnectedSocket_GetLocalAddress_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t net_error;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::net::interfaces::internal::IPEndPoint_Data> local_addr;

 private:
  TCPConnectedSocket_GetLocalAddress_ResponseParams_Data();
  ~TCPConnectedSocket_GetLocalAddress_ResponseParams_Data() = delete;
};
static_assert(sizeof(TCPConnectedSocket_GetLocalAddress_ResponseParams_Data) == 24,
              "Bad sizeof(TCPConnectedSocket_GetLocalAddress_ResponseParams_Data)");
class  TCPConnectedSocket_UpgradeToTLS_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TCPConnectedSocket_UpgradeToTLS_Params_Data));
      new (data()) TCPConnectedSocket_UpgradeToTLS_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TCPConnectedSocket_UpgradeToTLS_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TCPConnectedSocket_UpgradeToTLS_Params_Data>(index_);
    }
    TCPConnectedSocket_UpgradeToTLS_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::HostPortPair_Data> host_port_pair;
  mojo::internal::Pointer<::network::mojom::internal::MutableNetworkTrafficAnnotationTag_Data> traffic_annotation;
  mojo::internal::Handle_Data request;
  mojo::internal::Interface_Data observer;
  uint8_t padfinal_[4];

 private:
  TCPConnectedSocket_UpgradeToTLS_Params_Data();
  ~TCPConnectedSocket_UpgradeToTLS_Params_Data() = delete;
};
static_assert(sizeof(TCPConnectedSocket_UpgradeToTLS_Params_Data) == 40,
              "Bad sizeof(TCPConnectedSocket_UpgradeToTLS_Params_Data)");
class  TCPConnectedSocket_UpgradeToTLS_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TCPConnectedSocket_UpgradeToTLS_ResponseParams_Data));
      new (data()) TCPConnectedSocket_UpgradeToTLS_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TCPConnectedSocket_UpgradeToTLS_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TCPConnectedSocket_UpgradeToTLS_ResponseParams_Data>(index_);
    }
    TCPConnectedSocket_UpgradeToTLS_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t net_error;
  mojo::internal::Handle_Data receive_stream;
  mojo::internal::Handle_Data send_stream;
  uint8_t padfinal_[4];

 private:
  TCPConnectedSocket_UpgradeToTLS_ResponseParams_Data();
  ~TCPConnectedSocket_UpgradeToTLS_ResponseParams_Data() = delete;
};
static_assert(sizeof(TCPConnectedSocket_UpgradeToTLS_ResponseParams_Data) == 24,
              "Bad sizeof(TCPConnectedSocket_UpgradeToTLS_ResponseParams_Data)");
class  SocketObserver_OnReadError_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SocketObserver_OnReadError_Params_Data));
      new (data()) SocketObserver_OnReadError_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SocketObserver_OnReadError_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SocketObserver_OnReadError_Params_Data>(index_);
    }
    SocketObserver_OnReadError_Params_Data* operator->() { return data(); }

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
  SocketObserver_OnReadError_Params_Data();
  ~SocketObserver_OnReadError_Params_Data() = delete;
};
static_assert(sizeof(SocketObserver_OnReadError_Params_Data) == 16,
              "Bad sizeof(SocketObserver_OnReadError_Params_Data)");
class  SocketObserver_OnWriteError_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SocketObserver_OnWriteError_Params_Data));
      new (data()) SocketObserver_OnWriteError_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SocketObserver_OnWriteError_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SocketObserver_OnWriteError_Params_Data>(index_);
    }
    SocketObserver_OnWriteError_Params_Data* operator->() { return data(); }

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
  SocketObserver_OnWriteError_Params_Data();
  ~SocketObserver_OnWriteError_Params_Data() = delete;
};
static_assert(sizeof(SocketObserver_OnWriteError_Params_Data) == 16,
              "Bad sizeof(SocketObserver_OnWriteError_Params_Data)");
class  TCPServerSocket_Accept_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TCPServerSocket_Accept_Params_Data));
      new (data()) TCPServerSocket_Accept_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TCPServerSocket_Accept_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TCPServerSocket_Accept_Params_Data>(index_);
    }
    TCPServerSocket_Accept_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data observer;

 private:
  TCPServerSocket_Accept_Params_Data();
  ~TCPServerSocket_Accept_Params_Data() = delete;
};
static_assert(sizeof(TCPServerSocket_Accept_Params_Data) == 16,
              "Bad sizeof(TCPServerSocket_Accept_Params_Data)");
class  TCPServerSocket_Accept_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TCPServerSocket_Accept_ResponseParams_Data));
      new (data()) TCPServerSocket_Accept_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TCPServerSocket_Accept_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TCPServerSocket_Accept_ResponseParams_Data>(index_);
    }
    TCPServerSocket_Accept_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t net_error;
  mojo::internal::Handle_Data send_stream;
  mojo::internal::Pointer<::net::interfaces::internal::IPEndPoint_Data> remote_addr;
  mojo::internal::Interface_Data connected_socket;
  mojo::internal::Handle_Data receive_stream;
  uint8_t padfinal_[4];

 private:
  TCPServerSocket_Accept_ResponseParams_Data();
  ~TCPServerSocket_Accept_ResponseParams_Data() = delete;
};
static_assert(sizeof(TCPServerSocket_Accept_ResponseParams_Data) == 40,
              "Bad sizeof(TCPServerSocket_Accept_ResponseParams_Data)");
class  TCPServerSocket_GetLocalAddress_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TCPServerSocket_GetLocalAddress_Params_Data));
      new (data()) TCPServerSocket_GetLocalAddress_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TCPServerSocket_GetLocalAddress_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TCPServerSocket_GetLocalAddress_Params_Data>(index_);
    }
    TCPServerSocket_GetLocalAddress_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  TCPServerSocket_GetLocalAddress_Params_Data();
  ~TCPServerSocket_GetLocalAddress_Params_Data() = delete;
};
static_assert(sizeof(TCPServerSocket_GetLocalAddress_Params_Data) == 8,
              "Bad sizeof(TCPServerSocket_GetLocalAddress_Params_Data)");
class  TCPServerSocket_GetLocalAddress_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TCPServerSocket_GetLocalAddress_ResponseParams_Data));
      new (data()) TCPServerSocket_GetLocalAddress_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TCPServerSocket_GetLocalAddress_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TCPServerSocket_GetLocalAddress_ResponseParams_Data>(index_);
    }
    TCPServerSocket_GetLocalAddress_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t net_error;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::net::interfaces::internal::IPEndPoint_Data> local_addr;

 private:
  TCPServerSocket_GetLocalAddress_ResponseParams_Data();
  ~TCPServerSocket_GetLocalAddress_ResponseParams_Data() = delete;
};
static_assert(sizeof(TCPServerSocket_GetLocalAddress_ResponseParams_Data) == 24,
              "Bad sizeof(TCPServerSocket_GetLocalAddress_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_TCP_SOCKET_MOJOM_SHARED_INTERNAL_H_