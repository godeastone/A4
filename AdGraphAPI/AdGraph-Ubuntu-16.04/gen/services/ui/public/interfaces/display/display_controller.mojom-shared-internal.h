// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_DISPLAY_DISPLAY_CONTROLLER_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_UI_PUBLIC_INTERFACES_DISPLAY_DISPLAY_CONTROLLER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace display {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  DisplayController_IncreaseInternalDisplayZoom_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DisplayController_IncreaseInternalDisplayZoom_Params_Data));
      new (data()) DisplayController_IncreaseInternalDisplayZoom_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DisplayController_IncreaseInternalDisplayZoom_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DisplayController_IncreaseInternalDisplayZoom_Params_Data>(index_);
    }
    DisplayController_IncreaseInternalDisplayZoom_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  DisplayController_IncreaseInternalDisplayZoom_Params_Data();
  ~DisplayController_IncreaseInternalDisplayZoom_Params_Data() = delete;
};
static_assert(sizeof(DisplayController_IncreaseInternalDisplayZoom_Params_Data) == 8,
              "Bad sizeof(DisplayController_IncreaseInternalDisplayZoom_Params_Data)");
class  DisplayController_DecreaseInternalDisplayZoom_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DisplayController_DecreaseInternalDisplayZoom_Params_Data));
      new (data()) DisplayController_DecreaseInternalDisplayZoom_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DisplayController_DecreaseInternalDisplayZoom_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DisplayController_DecreaseInternalDisplayZoom_Params_Data>(index_);
    }
    DisplayController_DecreaseInternalDisplayZoom_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  DisplayController_DecreaseInternalDisplayZoom_Params_Data();
  ~DisplayController_DecreaseInternalDisplayZoom_Params_Data() = delete;
};
static_assert(sizeof(DisplayController_DecreaseInternalDisplayZoom_Params_Data) == 8,
              "Bad sizeof(DisplayController_DecreaseInternalDisplayZoom_Params_Data)");
class  DisplayController_ResetInternalDisplayZoom_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DisplayController_ResetInternalDisplayZoom_Params_Data));
      new (data()) DisplayController_ResetInternalDisplayZoom_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DisplayController_ResetInternalDisplayZoom_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DisplayController_ResetInternalDisplayZoom_Params_Data>(index_);
    }
    DisplayController_ResetInternalDisplayZoom_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  DisplayController_ResetInternalDisplayZoom_Params_Data();
  ~DisplayController_ResetInternalDisplayZoom_Params_Data() = delete;
};
static_assert(sizeof(DisplayController_ResetInternalDisplayZoom_Params_Data) == 8,
              "Bad sizeof(DisplayController_ResetInternalDisplayZoom_Params_Data)");
class  DisplayController_RotateCurrentDisplayCW_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DisplayController_RotateCurrentDisplayCW_Params_Data));
      new (data()) DisplayController_RotateCurrentDisplayCW_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DisplayController_RotateCurrentDisplayCW_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DisplayController_RotateCurrentDisplayCW_Params_Data>(index_);
    }
    DisplayController_RotateCurrentDisplayCW_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  DisplayController_RotateCurrentDisplayCW_Params_Data();
  ~DisplayController_RotateCurrentDisplayCW_Params_Data() = delete;
};
static_assert(sizeof(DisplayController_RotateCurrentDisplayCW_Params_Data) == 8,
              "Bad sizeof(DisplayController_RotateCurrentDisplayCW_Params_Data)");
class  DisplayController_SwapPrimaryDisplay_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DisplayController_SwapPrimaryDisplay_Params_Data));
      new (data()) DisplayController_SwapPrimaryDisplay_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DisplayController_SwapPrimaryDisplay_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DisplayController_SwapPrimaryDisplay_Params_Data>(index_);
    }
    DisplayController_SwapPrimaryDisplay_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  DisplayController_SwapPrimaryDisplay_Params_Data();
  ~DisplayController_SwapPrimaryDisplay_Params_Data() = delete;
};
static_assert(sizeof(DisplayController_SwapPrimaryDisplay_Params_Data) == 8,
              "Bad sizeof(DisplayController_SwapPrimaryDisplay_Params_Data)");
class  DisplayController_ToggleMirrorMode_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DisplayController_ToggleMirrorMode_Params_Data));
      new (data()) DisplayController_ToggleMirrorMode_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DisplayController_ToggleMirrorMode_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DisplayController_ToggleMirrorMode_Params_Data>(index_);
    }
    DisplayController_ToggleMirrorMode_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  DisplayController_ToggleMirrorMode_Params_Data();
  ~DisplayController_ToggleMirrorMode_Params_Data() = delete;
};
static_assert(sizeof(DisplayController_ToggleMirrorMode_Params_Data) == 8,
              "Bad sizeof(DisplayController_ToggleMirrorMode_Params_Data)");
class  DisplayController_TakeDisplayControl_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DisplayController_TakeDisplayControl_Params_Data));
      new (data()) DisplayController_TakeDisplayControl_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DisplayController_TakeDisplayControl_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DisplayController_TakeDisplayControl_Params_Data>(index_);
    }
    DisplayController_TakeDisplayControl_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  DisplayController_TakeDisplayControl_Params_Data();
  ~DisplayController_TakeDisplayControl_Params_Data() = delete;
};
static_assert(sizeof(DisplayController_TakeDisplayControl_Params_Data) == 8,
              "Bad sizeof(DisplayController_TakeDisplayControl_Params_Data)");
class  DisplayController_TakeDisplayControl_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DisplayController_TakeDisplayControl_ResponseParams_Data));
      new (data()) DisplayController_TakeDisplayControl_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DisplayController_TakeDisplayControl_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DisplayController_TakeDisplayControl_ResponseParams_Data>(index_);
    }
    DisplayController_TakeDisplayControl_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t status : 1;
  uint8_t padfinal_[7];

 private:
  DisplayController_TakeDisplayControl_ResponseParams_Data();
  ~DisplayController_TakeDisplayControl_ResponseParams_Data() = delete;
};
static_assert(sizeof(DisplayController_TakeDisplayControl_ResponseParams_Data) == 16,
              "Bad sizeof(DisplayController_TakeDisplayControl_ResponseParams_Data)");
class  DisplayController_RelinquishDisplayControl_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DisplayController_RelinquishDisplayControl_Params_Data));
      new (data()) DisplayController_RelinquishDisplayControl_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DisplayController_RelinquishDisplayControl_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DisplayController_RelinquishDisplayControl_Params_Data>(index_);
    }
    DisplayController_RelinquishDisplayControl_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  DisplayController_RelinquishDisplayControl_Params_Data();
  ~DisplayController_RelinquishDisplayControl_Params_Data() = delete;
};
static_assert(sizeof(DisplayController_RelinquishDisplayControl_Params_Data) == 8,
              "Bad sizeof(DisplayController_RelinquishDisplayControl_Params_Data)");
class  DisplayController_RelinquishDisplayControl_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DisplayController_RelinquishDisplayControl_ResponseParams_Data));
      new (data()) DisplayController_RelinquishDisplayControl_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DisplayController_RelinquishDisplayControl_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DisplayController_RelinquishDisplayControl_ResponseParams_Data>(index_);
    }
    DisplayController_RelinquishDisplayControl_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t status : 1;
  uint8_t padfinal_[7];

 private:
  DisplayController_RelinquishDisplayControl_ResponseParams_Data();
  ~DisplayController_RelinquishDisplayControl_ResponseParams_Data() = delete;
};
static_assert(sizeof(DisplayController_RelinquishDisplayControl_ResponseParams_Data) == 16,
              "Bad sizeof(DisplayController_RelinquishDisplayControl_ResponseParams_Data)");
class  DisplayController_SetDisplayWorkArea_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DisplayController_SetDisplayWorkArea_Params_Data));
      new (data()) DisplayController_SetDisplayWorkArea_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DisplayController_SetDisplayWorkArea_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DisplayController_SetDisplayWorkArea_Params_Data>(index_);
    }
    DisplayController_SetDisplayWorkArea_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t display_id;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> size;
  mojo::internal::Pointer<::gfx::mojom::internal::Insets_Data> insets;

 private:
  DisplayController_SetDisplayWorkArea_Params_Data();
  ~DisplayController_SetDisplayWorkArea_Params_Data() = delete;
};
static_assert(sizeof(DisplayController_SetDisplayWorkArea_Params_Data) == 32,
              "Bad sizeof(DisplayController_SetDisplayWorkArea_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace display

#endif  // SERVICES_UI_PUBLIC_INTERFACES_DISPLAY_DISPLAY_CONTROLLER_MOJOM_SHARED_INTERNAL_H_