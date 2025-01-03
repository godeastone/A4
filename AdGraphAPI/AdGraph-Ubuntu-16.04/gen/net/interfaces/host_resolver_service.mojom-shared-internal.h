// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef NET_INTERFACES_HOST_RESOLVER_SERVICE_MOJOM_SHARED_INTERNAL_H_
#define NET_INTERFACES_HOST_RESOLVER_SERVICE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "net/interfaces/address_family.mojom-shared-internal.h"
#include "net/interfaces/address_list.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace net {
namespace interfaces {
namespace internal {
class HostResolverRequestInfo_Data;

#pragma pack(push, 1)
class  HostResolverRequestInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HostResolverRequestInfo_Data));
      new (data()) HostResolverRequestInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HostResolverRequestInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HostResolverRequestInfo_Data>(index_);
    }
    HostResolverRequestInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> host;
  uint16_t port;
  uint8_t is_my_ip_address : 1;
  uint8_t pad2_[1];
  int32_t address_family;

 private:
  HostResolverRequestInfo_Data();
  ~HostResolverRequestInfo_Data() = delete;
};
static_assert(sizeof(HostResolverRequestInfo_Data) == 24,
              "Bad sizeof(HostResolverRequestInfo_Data)");
// Used by HostResolverRequestInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct HostResolverRequestInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  HostResolverRequestInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~HostResolverRequestInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    HostResolverRequestInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    HostResolverRequestInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  HostResolverRequestClient_ReportResult_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HostResolverRequestClient_ReportResult_Params_Data));
      new (data()) HostResolverRequestClient_ReportResult_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HostResolverRequestClient_ReportResult_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HostResolverRequestClient_ReportResult_Params_Data>(index_);
    }
    HostResolverRequestClient_ReportResult_Params_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::net::interfaces::internal::AddressList_Data> result;

 private:
  HostResolverRequestClient_ReportResult_Params_Data();
  ~HostResolverRequestClient_ReportResult_Params_Data() = delete;
};
static_assert(sizeof(HostResolverRequestClient_ReportResult_Params_Data) == 24,
              "Bad sizeof(HostResolverRequestClient_ReportResult_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace interfaces
}  // namespace net

#endif  // NET_INTERFACES_HOST_RESOLVER_SERVICE_MOJOM_SHARED_INTERNAL_H_