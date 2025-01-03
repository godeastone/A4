// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_CLIENT_HINTS_MOJOM_SHARED_INTERNAL_H_
#define CHROME_COMMON_CLIENT_HINTS_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "third_party/blink/public/platform/web_client_hints_types.mojom-shared-internal.h"
#include "url/mojom/origin.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace client_hints {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  ClientHints_PersistClientHints_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClientHints_PersistClientHints_Params_Data));
      new (data()) ClientHints_PersistClientHints_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClientHints_PersistClientHints_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClientHints_PersistClientHints_Params_Data>(index_);
    }
    ClientHints_PersistClientHints_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> primary_origin;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> client_hints;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> expiration_duration;

 private:
  ClientHints_PersistClientHints_Params_Data();
  ~ClientHints_PersistClientHints_Params_Data() = delete;
};
static_assert(sizeof(ClientHints_PersistClientHints_Params_Data) == 32,
              "Bad sizeof(ClientHints_PersistClientHints_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace client_hints

#endif  // CHROME_COMMON_CLIENT_HINTS_MOJOM_SHARED_INTERNAL_H_