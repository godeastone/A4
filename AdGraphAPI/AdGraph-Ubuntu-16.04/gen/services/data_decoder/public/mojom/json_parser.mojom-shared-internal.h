// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DATA_DECODER_PUBLIC_MOJOM_JSON_PARSER_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_DATA_DECODER_PUBLIC_MOJOM_JSON_PARSER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/values.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace data_decoder {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  JsonParser_Parse_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(JsonParser_Parse_Params_Data));
      new (data()) JsonParser_Parse_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    JsonParser_Parse_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<JsonParser_Parse_Params_Data>(index_);
    }
    JsonParser_Parse_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> json;

 private:
  JsonParser_Parse_Params_Data();
  ~JsonParser_Parse_Params_Data() = delete;
};
static_assert(sizeof(JsonParser_Parse_Params_Data) == 16,
              "Bad sizeof(JsonParser_Parse_Params_Data)");
class  JsonParser_Parse_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(JsonParser_Parse_ResponseParams_Data));
      new (data()) JsonParser_Parse_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    JsonParser_Parse_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<JsonParser_Parse_ResponseParams_Data>(index_);
    }
    JsonParser_Parse_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  ::mojo_base::mojom::internal::Value_Data result;
  mojo::internal::Pointer<mojo::internal::String_Data> error;

 private:
  JsonParser_Parse_ResponseParams_Data();
  ~JsonParser_Parse_ResponseParams_Data() = delete;
};
static_assert(sizeof(JsonParser_Parse_ResponseParams_Data) == 32,
              "Bad sizeof(JsonParser_Parse_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace data_decoder

#endif  // SERVICES_DATA_DECODER_PUBLIC_MOJOM_JSON_PARSER_MOJOM_SHARED_INTERNAL_H_