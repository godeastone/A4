// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_NETWORK_DIAGNOSTICS_MOJOM_SHARED_INTERNAL_H_
#define CHROME_COMMON_NETWORK_DIAGNOSTICS_MOJOM_SHARED_INTERNAL_H_

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
namespace chrome {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  NetworkDiagnostics_RunNetworkDiagnostics_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkDiagnostics_RunNetworkDiagnostics_Params_Data));
      new (data()) NetworkDiagnostics_RunNetworkDiagnostics_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkDiagnostics_RunNetworkDiagnostics_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkDiagnostics_RunNetworkDiagnostics_Params_Data>(index_);
    }
    NetworkDiagnostics_RunNetworkDiagnostics_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> failed_url;

 private:
  NetworkDiagnostics_RunNetworkDiagnostics_Params_Data();
  ~NetworkDiagnostics_RunNetworkDiagnostics_Params_Data() = delete;
};
static_assert(sizeof(NetworkDiagnostics_RunNetworkDiagnostics_Params_Data) == 16,
              "Bad sizeof(NetworkDiagnostics_RunNetworkDiagnostics_Params_Data)");
class  NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Params_Data));
      new (data()) NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Params_Data>(index_);
    }
    NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t can_show : 1;
  uint8_t padfinal_[7];

 private:
  NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Params_Data();
  ~NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Params_Data() = delete;
};
static_assert(sizeof(NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Params_Data) == 16,
              "Bad sizeof(NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Params_Data)");
class  NetworkDiagnosticsClient_DNSProbeStatus_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkDiagnosticsClient_DNSProbeStatus_Params_Data));
      new (data()) NetworkDiagnosticsClient_DNSProbeStatus_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkDiagnosticsClient_DNSProbeStatus_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkDiagnosticsClient_DNSProbeStatus_Params_Data>(index_);
    }
    NetworkDiagnosticsClient_DNSProbeStatus_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  NetworkDiagnosticsClient_DNSProbeStatus_Params_Data();
  ~NetworkDiagnosticsClient_DNSProbeStatus_Params_Data() = delete;
};
static_assert(sizeof(NetworkDiagnosticsClient_DNSProbeStatus_Params_Data) == 16,
              "Bad sizeof(NetworkDiagnosticsClient_DNSProbeStatus_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_COMMON_NETWORK_DIAGNOSTICS_MOJOM_SHARED_INTERNAL_H_