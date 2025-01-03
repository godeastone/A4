// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_DISPLAY_MOJO_NATIVE_DISPLAY_DELEGATE_MOJOM_SHARED_INTERNAL_H_
#define UI_DISPLAY_MOJO_NATIVE_DISPLAY_DELEGATE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "ui/display/mojo/display_constants.mojom-shared-internal.h"
#include "ui/display/mojo/display_mode.mojom-shared-internal.h"
#include "ui/display/mojo/display_snapshot.mojom-shared-internal.h"
#include "ui/display/mojo/gamma_ramp_rgb_entry.mojom-shared-internal.h"
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
class  NativeDisplayObserver_OnConfigurationChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeDisplayObserver_OnConfigurationChanged_Params_Data));
      new (data()) NativeDisplayObserver_OnConfigurationChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeDisplayObserver_OnConfigurationChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeDisplayObserver_OnConfigurationChanged_Params_Data>(index_);
    }
    NativeDisplayObserver_OnConfigurationChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NativeDisplayObserver_OnConfigurationChanged_Params_Data();
  ~NativeDisplayObserver_OnConfigurationChanged_Params_Data() = delete;
};
static_assert(sizeof(NativeDisplayObserver_OnConfigurationChanged_Params_Data) == 8,
              "Bad sizeof(NativeDisplayObserver_OnConfigurationChanged_Params_Data)");
class  NativeDisplayDelegate_Initialize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeDisplayDelegate_Initialize_Params_Data));
      new (data()) NativeDisplayDelegate_Initialize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeDisplayDelegate_Initialize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeDisplayDelegate_Initialize_Params_Data>(index_);
    }
    NativeDisplayDelegate_Initialize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data observer;

 private:
  NativeDisplayDelegate_Initialize_Params_Data();
  ~NativeDisplayDelegate_Initialize_Params_Data() = delete;
};
static_assert(sizeof(NativeDisplayDelegate_Initialize_Params_Data) == 16,
              "Bad sizeof(NativeDisplayDelegate_Initialize_Params_Data)");
class  NativeDisplayDelegate_Initialize_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeDisplayDelegate_Initialize_ResponseParams_Data));
      new (data()) NativeDisplayDelegate_Initialize_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeDisplayDelegate_Initialize_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeDisplayDelegate_Initialize_ResponseParams_Data>(index_);
    }
    NativeDisplayDelegate_Initialize_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::display::mojom::internal::DisplaySnapshot_Data>>> snapshots;

 private:
  NativeDisplayDelegate_Initialize_ResponseParams_Data();
  ~NativeDisplayDelegate_Initialize_ResponseParams_Data() = delete;
};
static_assert(sizeof(NativeDisplayDelegate_Initialize_ResponseParams_Data) == 16,
              "Bad sizeof(NativeDisplayDelegate_Initialize_ResponseParams_Data)");
class  NativeDisplayDelegate_TakeDisplayControl_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeDisplayDelegate_TakeDisplayControl_Params_Data));
      new (data()) NativeDisplayDelegate_TakeDisplayControl_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeDisplayDelegate_TakeDisplayControl_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeDisplayDelegate_TakeDisplayControl_Params_Data>(index_);
    }
    NativeDisplayDelegate_TakeDisplayControl_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NativeDisplayDelegate_TakeDisplayControl_Params_Data();
  ~NativeDisplayDelegate_TakeDisplayControl_Params_Data() = delete;
};
static_assert(sizeof(NativeDisplayDelegate_TakeDisplayControl_Params_Data) == 8,
              "Bad sizeof(NativeDisplayDelegate_TakeDisplayControl_Params_Data)");
class  NativeDisplayDelegate_TakeDisplayControl_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeDisplayDelegate_TakeDisplayControl_ResponseParams_Data));
      new (data()) NativeDisplayDelegate_TakeDisplayControl_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeDisplayDelegate_TakeDisplayControl_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeDisplayDelegate_TakeDisplayControl_ResponseParams_Data>(index_);
    }
    NativeDisplayDelegate_TakeDisplayControl_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t result : 1;
  uint8_t padfinal_[7];

 private:
  NativeDisplayDelegate_TakeDisplayControl_ResponseParams_Data();
  ~NativeDisplayDelegate_TakeDisplayControl_ResponseParams_Data() = delete;
};
static_assert(sizeof(NativeDisplayDelegate_TakeDisplayControl_ResponseParams_Data) == 16,
              "Bad sizeof(NativeDisplayDelegate_TakeDisplayControl_ResponseParams_Data)");
class  NativeDisplayDelegate_RelinquishDisplayControl_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeDisplayDelegate_RelinquishDisplayControl_Params_Data));
      new (data()) NativeDisplayDelegate_RelinquishDisplayControl_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeDisplayDelegate_RelinquishDisplayControl_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeDisplayDelegate_RelinquishDisplayControl_Params_Data>(index_);
    }
    NativeDisplayDelegate_RelinquishDisplayControl_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NativeDisplayDelegate_RelinquishDisplayControl_Params_Data();
  ~NativeDisplayDelegate_RelinquishDisplayControl_Params_Data() = delete;
};
static_assert(sizeof(NativeDisplayDelegate_RelinquishDisplayControl_Params_Data) == 8,
              "Bad sizeof(NativeDisplayDelegate_RelinquishDisplayControl_Params_Data)");
class  NativeDisplayDelegate_RelinquishDisplayControl_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeDisplayDelegate_RelinquishDisplayControl_ResponseParams_Data));
      new (data()) NativeDisplayDelegate_RelinquishDisplayControl_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeDisplayDelegate_RelinquishDisplayControl_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeDisplayDelegate_RelinquishDisplayControl_ResponseParams_Data>(index_);
    }
    NativeDisplayDelegate_RelinquishDisplayControl_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t result : 1;
  uint8_t padfinal_[7];

 private:
  NativeDisplayDelegate_RelinquishDisplayControl_ResponseParams_Data();
  ~NativeDisplayDelegate_RelinquishDisplayControl_ResponseParams_Data() = delete;
};
static_assert(sizeof(NativeDisplayDelegate_RelinquishDisplayControl_ResponseParams_Data) == 16,
              "Bad sizeof(NativeDisplayDelegate_RelinquishDisplayControl_ResponseParams_Data)");
class  NativeDisplayDelegate_GetDisplays_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeDisplayDelegate_GetDisplays_Params_Data));
      new (data()) NativeDisplayDelegate_GetDisplays_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeDisplayDelegate_GetDisplays_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeDisplayDelegate_GetDisplays_Params_Data>(index_);
    }
    NativeDisplayDelegate_GetDisplays_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NativeDisplayDelegate_GetDisplays_Params_Data();
  ~NativeDisplayDelegate_GetDisplays_Params_Data() = delete;
};
static_assert(sizeof(NativeDisplayDelegate_GetDisplays_Params_Data) == 8,
              "Bad sizeof(NativeDisplayDelegate_GetDisplays_Params_Data)");
class  NativeDisplayDelegate_GetDisplays_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeDisplayDelegate_GetDisplays_ResponseParams_Data));
      new (data()) NativeDisplayDelegate_GetDisplays_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeDisplayDelegate_GetDisplays_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeDisplayDelegate_GetDisplays_ResponseParams_Data>(index_);
    }
    NativeDisplayDelegate_GetDisplays_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::display::mojom::internal::DisplaySnapshot_Data>>> snapshots;

 private:
  NativeDisplayDelegate_GetDisplays_ResponseParams_Data();
  ~NativeDisplayDelegate_GetDisplays_ResponseParams_Data() = delete;
};
static_assert(sizeof(NativeDisplayDelegate_GetDisplays_ResponseParams_Data) == 16,
              "Bad sizeof(NativeDisplayDelegate_GetDisplays_ResponseParams_Data)");
class  NativeDisplayDelegate_Configure_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeDisplayDelegate_Configure_Params_Data));
      new (data()) NativeDisplayDelegate_Configure_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeDisplayDelegate_Configure_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeDisplayDelegate_Configure_Params_Data>(index_);
    }
    NativeDisplayDelegate_Configure_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t display_id;
  mojo::internal::Pointer<::display::mojom::internal::DisplayMode_Data> mode;
  mojo::internal::Pointer<::gfx::mojom::internal::Point_Data> origin;

 private:
  NativeDisplayDelegate_Configure_Params_Data();
  ~NativeDisplayDelegate_Configure_Params_Data() = delete;
};
static_assert(sizeof(NativeDisplayDelegate_Configure_Params_Data) == 32,
              "Bad sizeof(NativeDisplayDelegate_Configure_Params_Data)");
class  NativeDisplayDelegate_Configure_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeDisplayDelegate_Configure_ResponseParams_Data));
      new (data()) NativeDisplayDelegate_Configure_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeDisplayDelegate_Configure_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeDisplayDelegate_Configure_ResponseParams_Data>(index_);
    }
    NativeDisplayDelegate_Configure_ResponseParams_Data* operator->() { return data(); }

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
  NativeDisplayDelegate_Configure_ResponseParams_Data();
  ~NativeDisplayDelegate_Configure_ResponseParams_Data() = delete;
};
static_assert(sizeof(NativeDisplayDelegate_Configure_ResponseParams_Data) == 16,
              "Bad sizeof(NativeDisplayDelegate_Configure_ResponseParams_Data)");
class  NativeDisplayDelegate_GetHDCPState_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeDisplayDelegate_GetHDCPState_Params_Data));
      new (data()) NativeDisplayDelegate_GetHDCPState_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeDisplayDelegate_GetHDCPState_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeDisplayDelegate_GetHDCPState_Params_Data>(index_);
    }
    NativeDisplayDelegate_GetHDCPState_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t display_id;

 private:
  NativeDisplayDelegate_GetHDCPState_Params_Data();
  ~NativeDisplayDelegate_GetHDCPState_Params_Data() = delete;
};
static_assert(sizeof(NativeDisplayDelegate_GetHDCPState_Params_Data) == 16,
              "Bad sizeof(NativeDisplayDelegate_GetHDCPState_Params_Data)");
class  NativeDisplayDelegate_GetHDCPState_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeDisplayDelegate_GetHDCPState_ResponseParams_Data));
      new (data()) NativeDisplayDelegate_GetHDCPState_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeDisplayDelegate_GetHDCPState_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeDisplayDelegate_GetHDCPState_ResponseParams_Data>(index_);
    }
    NativeDisplayDelegate_GetHDCPState_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t status : 1;
  uint8_t pad0_[3];
  int32_t state;

 private:
  NativeDisplayDelegate_GetHDCPState_ResponseParams_Data();
  ~NativeDisplayDelegate_GetHDCPState_ResponseParams_Data() = delete;
};
static_assert(sizeof(NativeDisplayDelegate_GetHDCPState_ResponseParams_Data) == 16,
              "Bad sizeof(NativeDisplayDelegate_GetHDCPState_ResponseParams_Data)");
class  NativeDisplayDelegate_SetHDCPState_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeDisplayDelegate_SetHDCPState_Params_Data));
      new (data()) NativeDisplayDelegate_SetHDCPState_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeDisplayDelegate_SetHDCPState_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeDisplayDelegate_SetHDCPState_Params_Data>(index_);
    }
    NativeDisplayDelegate_SetHDCPState_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t display_id;
  int32_t state;
  uint8_t padfinal_[4];

 private:
  NativeDisplayDelegate_SetHDCPState_Params_Data();
  ~NativeDisplayDelegate_SetHDCPState_Params_Data() = delete;
};
static_assert(sizeof(NativeDisplayDelegate_SetHDCPState_Params_Data) == 24,
              "Bad sizeof(NativeDisplayDelegate_SetHDCPState_Params_Data)");
class  NativeDisplayDelegate_SetHDCPState_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeDisplayDelegate_SetHDCPState_ResponseParams_Data));
      new (data()) NativeDisplayDelegate_SetHDCPState_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeDisplayDelegate_SetHDCPState_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeDisplayDelegate_SetHDCPState_ResponseParams_Data>(index_);
    }
    NativeDisplayDelegate_SetHDCPState_ResponseParams_Data* operator->() { return data(); }

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
  NativeDisplayDelegate_SetHDCPState_ResponseParams_Data();
  ~NativeDisplayDelegate_SetHDCPState_ResponseParams_Data() = delete;
};
static_assert(sizeof(NativeDisplayDelegate_SetHDCPState_ResponseParams_Data) == 16,
              "Bad sizeof(NativeDisplayDelegate_SetHDCPState_ResponseParams_Data)");
class  NativeDisplayDelegate_SetColorCorrection_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeDisplayDelegate_SetColorCorrection_Params_Data));
      new (data()) NativeDisplayDelegate_SetColorCorrection_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeDisplayDelegate_SetColorCorrection_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeDisplayDelegate_SetColorCorrection_Params_Data>(index_);
    }
    NativeDisplayDelegate_SetColorCorrection_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t display_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::display::mojom::internal::GammaRampRGBEntry_Data>>> degamma_lut;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::display::mojom::internal::GammaRampRGBEntry_Data>>> gamma_lut;
  mojo::internal::Pointer<mojo::internal::Array_Data<float>> correction_matrix;

 private:
  NativeDisplayDelegate_SetColorCorrection_Params_Data();
  ~NativeDisplayDelegate_SetColorCorrection_Params_Data() = delete;
};
static_assert(sizeof(NativeDisplayDelegate_SetColorCorrection_Params_Data) == 40,
              "Bad sizeof(NativeDisplayDelegate_SetColorCorrection_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace display

#endif  // UI_DISPLAY_MOJO_NATIVE_DISPLAY_DELEGATE_MOJOM_SHARED_INTERNAL_H_