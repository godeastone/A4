// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_NAVIGATION_PARAMS_MOJOM_SHARED_INTERNAL_H_
#define CONTENT_COMMON_NAVIGATION_PARAMS_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/values.mojom-shared-internal.h"
#include "third_party/blink/public/platform/modules/fetch/fetch_api_request.mojom-shared-internal.h"
#include "url/mojom/origin.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace content {
namespace mojom {
namespace internal {
class BeginNavigationParams_Data;
using MixedContentContextType_Data =
    mojo::internal::NativeEnum_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) BeginNavigationParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BeginNavigationParams_Data));
      new (data()) BeginNavigationParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BeginNavigationParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BeginNavigationParams_Data>(index_);
    }
    BeginNavigationParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> headers;
  int32_t load_flags;
  uint8_t skip_service_worker : 1;
  uint8_t is_form_submission : 1;
  uint8_t pad3_[3];
  int32_t request_context_type;
  int32_t mixed_content_context_type;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> searchable_form_url;
  mojo::internal::Pointer<mojo::internal::String_Data> searchable_form_encoding;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> initiator_origin;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> client_side_redirect_url;
  mojo::internal::Pointer<::mojo_base::mojom::internal::DictionaryValue_Data> devtools_initiator;

 private:
  BeginNavigationParams_Data();
  ~BeginNavigationParams_Data() = delete;
};
static_assert(sizeof(BeginNavigationParams_Data) == 72,
              "Bad sizeof(BeginNavigationParams_Data)");
// Used by BeginNavigationParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct BeginNavigationParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  BeginNavigationParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~BeginNavigationParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    BeginNavigationParams_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    BeginNavigationParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_NAVIGATION_PARAMS_MOJOM_SHARED_INTERNAL_H_