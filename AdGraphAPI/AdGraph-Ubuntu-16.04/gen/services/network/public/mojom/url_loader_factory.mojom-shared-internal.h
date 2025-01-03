// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_FACTORY_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_FACTORY_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom-shared-internal.h"
#include "services/network/public/mojom/url_loader.mojom-shared-internal.h"
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
class  URLLoaderFactory_CreateLoaderAndStart_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(URLLoaderFactory_CreateLoaderAndStart_Params_Data));
      new (data()) URLLoaderFactory_CreateLoaderAndStart_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    URLLoaderFactory_CreateLoaderAndStart_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<URLLoaderFactory_CreateLoaderAndStart_Params_Data>(index_);
    }
    URLLoaderFactory_CreateLoaderAndStart_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data loader;
  int32_t routing_id;
  int32_t request_id;
  uint32_t options;
  mojo::internal::Pointer<::network::mojom::internal::URLRequest_Data> request;
  mojo::internal::Interface_Data client;
  mojo::internal::Pointer<::network::mojom::internal::MutableNetworkTrafficAnnotationTag_Data> traffic_annotation;

 private:
  URLLoaderFactory_CreateLoaderAndStart_Params_Data();
  ~URLLoaderFactory_CreateLoaderAndStart_Params_Data() = delete;
};
static_assert(sizeof(URLLoaderFactory_CreateLoaderAndStart_Params_Data) == 48,
              "Bad sizeof(URLLoaderFactory_CreateLoaderAndStart_Params_Data)");
class  URLLoaderFactory_Clone_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(URLLoaderFactory_Clone_Params_Data));
      new (data()) URLLoaderFactory_Clone_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    URLLoaderFactory_Clone_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<URLLoaderFactory_Clone_Params_Data>(index_);
    }
    URLLoaderFactory_Clone_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data factory;
  uint8_t padfinal_[4];

 private:
  URLLoaderFactory_Clone_Params_Data();
  ~URLLoaderFactory_Clone_Params_Data() = delete;
};
static_assert(sizeof(URLLoaderFactory_Clone_Params_Data) == 16,
              "Bad sizeof(URLLoaderFactory_Clone_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_FACTORY_MOJOM_SHARED_INTERNAL_H_