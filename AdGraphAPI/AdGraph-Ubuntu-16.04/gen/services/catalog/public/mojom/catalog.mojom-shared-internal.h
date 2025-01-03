// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_CATALOG_PUBLIC_MOJOM_CATALOG_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_CATALOG_PUBLIC_MOJOM_CATALOG_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/file_path.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace catalog {
namespace mojom {
namespace internal {
class Entry_Data;

#pragma pack(push, 1)
class  Entry_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Entry_Data));
      new (data()) Entry_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Entry_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Entry_Data>(index_);
    }
    Entry_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  mojo::internal::Pointer<mojo::internal::String_Data> display_name;

 private:
  Entry_Data();
  ~Entry_Data() = delete;
};
static_assert(sizeof(Entry_Data) == 24,
              "Bad sizeof(Entry_Data)");
// Used by Entry::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Entry_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Entry_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Entry_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Entry_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Entry_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  Catalog_GetEntries_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Catalog_GetEntries_Params_Data));
      new (data()) Catalog_GetEntries_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Catalog_GetEntries_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Catalog_GetEntries_Params_Data>(index_);
    }
    Catalog_GetEntries_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> names;

 private:
  Catalog_GetEntries_Params_Data();
  ~Catalog_GetEntries_Params_Data() = delete;
};
static_assert(sizeof(Catalog_GetEntries_Params_Data) == 16,
              "Bad sizeof(Catalog_GetEntries_Params_Data)");
class  Catalog_GetEntries_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Catalog_GetEntries_ResponseParams_Data));
      new (data()) Catalog_GetEntries_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Catalog_GetEntries_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Catalog_GetEntries_ResponseParams_Data>(index_);
    }
    Catalog_GetEntries_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::Entry_Data>>> entries;

 private:
  Catalog_GetEntries_ResponseParams_Data();
  ~Catalog_GetEntries_ResponseParams_Data() = delete;
};
static_assert(sizeof(Catalog_GetEntries_ResponseParams_Data) == 16,
              "Bad sizeof(Catalog_GetEntries_ResponseParams_Data)");
class  Catalog_GetEntriesProvidingCapability_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Catalog_GetEntriesProvidingCapability_Params_Data));
      new (data()) Catalog_GetEntriesProvidingCapability_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Catalog_GetEntriesProvidingCapability_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Catalog_GetEntriesProvidingCapability_Params_Data>(index_);
    }
    Catalog_GetEntriesProvidingCapability_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> capability;

 private:
  Catalog_GetEntriesProvidingCapability_Params_Data();
  ~Catalog_GetEntriesProvidingCapability_Params_Data() = delete;
};
static_assert(sizeof(Catalog_GetEntriesProvidingCapability_Params_Data) == 16,
              "Bad sizeof(Catalog_GetEntriesProvidingCapability_Params_Data)");
class  Catalog_GetEntriesProvidingCapability_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Catalog_GetEntriesProvidingCapability_ResponseParams_Data));
      new (data()) Catalog_GetEntriesProvidingCapability_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Catalog_GetEntriesProvidingCapability_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Catalog_GetEntriesProvidingCapability_ResponseParams_Data>(index_);
    }
    Catalog_GetEntriesProvidingCapability_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::Entry_Data>>> entries;

 private:
  Catalog_GetEntriesProvidingCapability_ResponseParams_Data();
  ~Catalog_GetEntriesProvidingCapability_ResponseParams_Data() = delete;
};
static_assert(sizeof(Catalog_GetEntriesProvidingCapability_ResponseParams_Data) == 16,
              "Bad sizeof(Catalog_GetEntriesProvidingCapability_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace catalog

#endif  // SERVICES_CATALOG_PUBLIC_MOJOM_CATALOG_MOJOM_SHARED_INTERNAL_H_