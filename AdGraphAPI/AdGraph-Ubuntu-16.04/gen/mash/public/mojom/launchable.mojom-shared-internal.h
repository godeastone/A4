// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MASH_PUBLIC_MOJOM_LAUNCHABLE_MOJOM_SHARED_INTERNAL_H_
#define MASH_PUBLIC_MOJOM_LAUNCHABLE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace mash {
namespace mojom {
namespace internal {

struct LaunchMode_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

#pragma pack(push, 1)
class  Launchable_Launch_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Launchable_Launch_Params_Data));
      new (data()) Launchable_Launch_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Launchable_Launch_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Launchable_Launch_Params_Data>(index_);
    }
    Launchable_Launch_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t what;
  int32_t how;

 private:
  Launchable_Launch_Params_Data();
  ~Launchable_Launch_Params_Data() = delete;
};
static_assert(sizeof(Launchable_Launch_Params_Data) == 16,
              "Bad sizeof(Launchable_Launch_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace mash

#endif  // MASH_PUBLIC_MOJOM_LAUNCHABLE_MOJOM_SHARED_INTERNAL_H_