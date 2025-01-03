// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
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

struct StopFindAction_Data {
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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FindInPage_StopFinding_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FindInPage_StopFinding_Params_Data));
      new (data()) FindInPage_StopFinding_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FindInPage_StopFinding_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FindInPage_StopFinding_Params_Data>(index_);
    }
    FindInPage_StopFinding_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t action;
  uint8_t padfinal_[4];

 private:
  FindInPage_StopFinding_Params_Data();
  ~FindInPage_StopFinding_Params_Data() = delete;
};
static_assert(sizeof(FindInPage_StopFinding_Params_Data) == 16,
              "Bad sizeof(FindInPage_StopFinding_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FindInPage_ClearActiveFindMatch_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FindInPage_ClearActiveFindMatch_Params_Data));
      new (data()) FindInPage_ClearActiveFindMatch_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FindInPage_ClearActiveFindMatch_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FindInPage_ClearActiveFindMatch_Params_Data>(index_);
    }
    FindInPage_ClearActiveFindMatch_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  FindInPage_ClearActiveFindMatch_Params_Data();
  ~FindInPage_ClearActiveFindMatch_Params_Data() = delete;
};
static_assert(sizeof(FindInPage_ClearActiveFindMatch_Params_Data) == 8,
              "Bad sizeof(FindInPage_ClearActiveFindMatch_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FindInPage_GetNearestFindResult_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FindInPage_GetNearestFindResult_Params_Data));
      new (data()) FindInPage_GetNearestFindResult_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FindInPage_GetNearestFindResult_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FindInPage_GetNearestFindResult_Params_Data>(index_);
    }
    FindInPage_GetNearestFindResult_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::PointF_Data> point;

 private:
  FindInPage_GetNearestFindResult_Params_Data();
  ~FindInPage_GetNearestFindResult_Params_Data() = delete;
};
static_assert(sizeof(FindInPage_GetNearestFindResult_Params_Data) == 16,
              "Bad sizeof(FindInPage_GetNearestFindResult_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FindInPage_GetNearestFindResult_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FindInPage_GetNearestFindResult_ResponseParams_Data));
      new (data()) FindInPage_GetNearestFindResult_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FindInPage_GetNearestFindResult_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FindInPage_GetNearestFindResult_ResponseParams_Data>(index_);
    }
    FindInPage_GetNearestFindResult_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  float distance;
  uint8_t padfinal_[4];

 private:
  FindInPage_GetNearestFindResult_ResponseParams_Data();
  ~FindInPage_GetNearestFindResult_ResponseParams_Data() = delete;
};
static_assert(sizeof(FindInPage_GetNearestFindResult_ResponseParams_Data) == 16,
              "Bad sizeof(FindInPage_GetNearestFindResult_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FindInPage_ActivateNearestFindResult_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FindInPage_ActivateNearestFindResult_Params_Data));
      new (data()) FindInPage_ActivateNearestFindResult_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FindInPage_ActivateNearestFindResult_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FindInPage_ActivateNearestFindResult_Params_Data>(index_);
    }
    FindInPage_ActivateNearestFindResult_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::PointF_Data> point;

 private:
  FindInPage_ActivateNearestFindResult_Params_Data();
  ~FindInPage_ActivateNearestFindResult_Params_Data() = delete;
};
static_assert(sizeof(FindInPage_ActivateNearestFindResult_Params_Data) == 16,
              "Bad sizeof(FindInPage_ActivateNearestFindResult_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FindInPage_ActivateNearestFindResult_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FindInPage_ActivateNearestFindResult_ResponseParams_Data));
      new (data()) FindInPage_ActivateNearestFindResult_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FindInPage_ActivateNearestFindResult_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FindInPage_ActivateNearestFindResult_ResponseParams_Data>(index_);
    }
    FindInPage_ActivateNearestFindResult_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> active_match_rect;
  int32_t number_of_matches;
  int32_t active_match_ordinal;
  uint8_t final_update : 1;
  uint8_t padfinal_[7];

 private:
  FindInPage_ActivateNearestFindResult_ResponseParams_Data();
  ~FindInPage_ActivateNearestFindResult_ResponseParams_Data() = delete;
};
static_assert(sizeof(FindInPage_ActivateNearestFindResult_ResponseParams_Data) == 32,
              "Bad sizeof(FindInPage_ActivateNearestFindResult_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FindInPage_FindMatchRects_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FindInPage_FindMatchRects_Params_Data));
      new (data()) FindInPage_FindMatchRects_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FindInPage_FindMatchRects_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FindInPage_FindMatchRects_Params_Data>(index_);
    }
    FindInPage_FindMatchRects_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t current_version;
  uint8_t padfinal_[4];

 private:
  FindInPage_FindMatchRects_Params_Data();
  ~FindInPage_FindMatchRects_Params_Data() = delete;
};
static_assert(sizeof(FindInPage_FindMatchRects_Params_Data) == 16,
              "Bad sizeof(FindInPage_FindMatchRects_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FindInPage_FindMatchRects_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FindInPage_FindMatchRects_ResponseParams_Data));
      new (data()) FindInPage_FindMatchRects_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FindInPage_FindMatchRects_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FindInPage_FindMatchRects_ResponseParams_Data>(index_);
    }
    FindInPage_FindMatchRects_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t version;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::gfx::mojom::internal::RectF_Data>>> rects;
  mojo::internal::Pointer<::gfx::mojom::internal::RectF_Data> active_match_rect;

 private:
  FindInPage_FindMatchRects_ResponseParams_Data();
  ~FindInPage_FindMatchRects_ResponseParams_Data() = delete;
};
static_assert(sizeof(FindInPage_FindMatchRects_ResponseParams_Data) == 32,
              "Bad sizeof(FindInPage_FindMatchRects_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_SHARED_INTERNAL_H_