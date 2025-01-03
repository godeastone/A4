// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_WEB_DEVTOOLS_AGENT_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_WEB_DEVTOOLS_AGENT_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/big_string.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace blink {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) DevToolsAgent_AttachDevToolsSession_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DevToolsAgent_AttachDevToolsSession_Params_Data));
      new (data()) DevToolsAgent_AttachDevToolsSession_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DevToolsAgent_AttachDevToolsSession_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DevToolsAgent_AttachDevToolsSession_Params_Data>(index_);
    }
    DevToolsAgent_AttachDevToolsSession_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data host;
  mojo::internal::AssociatedEndpointHandle_Data session;
  mojo::internal::Handle_Data io_session;
  mojo::internal::Pointer<mojo::internal::String_Data> reattach_state;

 private:
  DevToolsAgent_AttachDevToolsSession_Params_Data();
  ~DevToolsAgent_AttachDevToolsSession_Params_Data() = delete;
};
static_assert(sizeof(DevToolsAgent_AttachDevToolsSession_Params_Data) == 32,
              "Bad sizeof(DevToolsAgent_AttachDevToolsSession_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) DevToolsAgent_InspectElement_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DevToolsAgent_InspectElement_Params_Data));
      new (data()) DevToolsAgent_InspectElement_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DevToolsAgent_InspectElement_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DevToolsAgent_InspectElement_Params_Data>(index_);
    }
    DevToolsAgent_InspectElement_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Point_Data> point;

 private:
  DevToolsAgent_InspectElement_Params_Data();
  ~DevToolsAgent_InspectElement_Params_Data() = delete;
};
static_assert(sizeof(DevToolsAgent_InspectElement_Params_Data) == 16,
              "Bad sizeof(DevToolsAgent_InspectElement_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) DevToolsSession_DispatchProtocolCommand_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DevToolsSession_DispatchProtocolCommand_Params_Data));
      new (data()) DevToolsSession_DispatchProtocolCommand_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DevToolsSession_DispatchProtocolCommand_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DevToolsSession_DispatchProtocolCommand_Params_Data>(index_);
    }
    DevToolsSession_DispatchProtocolCommand_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t call_id;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> method;
  mojo::internal::Pointer<mojo::internal::String_Data> message;

 private:
  DevToolsSession_DispatchProtocolCommand_Params_Data();
  ~DevToolsSession_DispatchProtocolCommand_Params_Data() = delete;
};
static_assert(sizeof(DevToolsSession_DispatchProtocolCommand_Params_Data) == 32,
              "Bad sizeof(DevToolsSession_DispatchProtocolCommand_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) DevToolsSessionHost_DispatchProtocolResponse_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DevToolsSessionHost_DispatchProtocolResponse_Params_Data));
      new (data()) DevToolsSessionHost_DispatchProtocolResponse_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DevToolsSessionHost_DispatchProtocolResponse_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DevToolsSessionHost_DispatchProtocolResponse_Params_Data>(index_);
    }
    DevToolsSessionHost_DispatchProtocolResponse_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::BigString_Data> message;
  int32_t call_id;
  uint8_t pad1_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> state;

 private:
  DevToolsSessionHost_DispatchProtocolResponse_Params_Data();
  ~DevToolsSessionHost_DispatchProtocolResponse_Params_Data() = delete;
};
static_assert(sizeof(DevToolsSessionHost_DispatchProtocolResponse_Params_Data) == 32,
              "Bad sizeof(DevToolsSessionHost_DispatchProtocolResponse_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) DevToolsSessionHost_DispatchProtocolNotification_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DevToolsSessionHost_DispatchProtocolNotification_Params_Data));
      new (data()) DevToolsSessionHost_DispatchProtocolNotification_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DevToolsSessionHost_DispatchProtocolNotification_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DevToolsSessionHost_DispatchProtocolNotification_Params_Data>(index_);
    }
    DevToolsSessionHost_DispatchProtocolNotification_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::BigString_Data> message;
  mojo::internal::Pointer<mojo::internal::String_Data> state;

 private:
  DevToolsSessionHost_DispatchProtocolNotification_Params_Data();
  ~DevToolsSessionHost_DispatchProtocolNotification_Params_Data() = delete;
};
static_assert(sizeof(DevToolsSessionHost_DispatchProtocolNotification_Params_Data) == 24,
              "Bad sizeof(DevToolsSessionHost_DispatchProtocolNotification_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_WEB_DEVTOOLS_AGENT_MOJOM_SHARED_INTERNAL_H_