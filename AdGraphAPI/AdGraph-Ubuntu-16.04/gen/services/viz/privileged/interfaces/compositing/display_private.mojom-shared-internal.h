// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_DISPLAY_PRIVATE_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_DISPLAY_PRIVATE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "ui/gfx/mojo/ca_layer_params.mojom-shared-internal.h"
#include "ui/gfx/mojo/color_space.mojom-shared-internal.h"
#include "ui/gfx/mojo/transform.mojom-shared-internal.h"
#include "ui/latency/mojo/latency_info.mojom-shared-internal.h"
#include "services/viz/privileged/interfaces/compositing/layered_window_updater.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace viz {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  DisplayPrivate_SetDisplayVisible_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DisplayPrivate_SetDisplayVisible_Params_Data));
      new (data()) DisplayPrivate_SetDisplayVisible_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DisplayPrivate_SetDisplayVisible_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DisplayPrivate_SetDisplayVisible_Params_Data>(index_);
    }
    DisplayPrivate_SetDisplayVisible_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t visible : 1;
  uint8_t padfinal_[7];

 private:
  DisplayPrivate_SetDisplayVisible_Params_Data();
  ~DisplayPrivate_SetDisplayVisible_Params_Data() = delete;
};
static_assert(sizeof(DisplayPrivate_SetDisplayVisible_Params_Data) == 16,
              "Bad sizeof(DisplayPrivate_SetDisplayVisible_Params_Data)");
class  DisplayPrivate_SetDisplayColorMatrix_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DisplayPrivate_SetDisplayColorMatrix_Params_Data));
      new (data()) DisplayPrivate_SetDisplayColorMatrix_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DisplayPrivate_SetDisplayColorMatrix_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DisplayPrivate_SetDisplayColorMatrix_Params_Data>(index_);
    }
    DisplayPrivate_SetDisplayColorMatrix_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Transform_Data> color_matrix;

 private:
  DisplayPrivate_SetDisplayColorMatrix_Params_Data();
  ~DisplayPrivate_SetDisplayColorMatrix_Params_Data() = delete;
};
static_assert(sizeof(DisplayPrivate_SetDisplayColorMatrix_Params_Data) == 16,
              "Bad sizeof(DisplayPrivate_SetDisplayColorMatrix_Params_Data)");
class  DisplayPrivate_SetDisplayColorSpace_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DisplayPrivate_SetDisplayColorSpace_Params_Data));
      new (data()) DisplayPrivate_SetDisplayColorSpace_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DisplayPrivate_SetDisplayColorSpace_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DisplayPrivate_SetDisplayColorSpace_Params_Data>(index_);
    }
    DisplayPrivate_SetDisplayColorSpace_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::ColorSpace_Data> blending_color_space;
  mojo::internal::Pointer<::gfx::mojom::internal::ColorSpace_Data> device_color_space;

 private:
  DisplayPrivate_SetDisplayColorSpace_Params_Data();
  ~DisplayPrivate_SetDisplayColorSpace_Params_Data() = delete;
};
static_assert(sizeof(DisplayPrivate_SetDisplayColorSpace_Params_Data) == 24,
              "Bad sizeof(DisplayPrivate_SetDisplayColorSpace_Params_Data)");
class  DisplayPrivate_SetOutputIsSecure_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DisplayPrivate_SetOutputIsSecure_Params_Data));
      new (data()) DisplayPrivate_SetOutputIsSecure_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DisplayPrivate_SetOutputIsSecure_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DisplayPrivate_SetOutputIsSecure_Params_Data>(index_);
    }
    DisplayPrivate_SetOutputIsSecure_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t secure : 1;
  uint8_t padfinal_[7];

 private:
  DisplayPrivate_SetOutputIsSecure_Params_Data();
  ~DisplayPrivate_SetOutputIsSecure_Params_Data() = delete;
};
static_assert(sizeof(DisplayPrivate_SetOutputIsSecure_Params_Data) == 16,
              "Bad sizeof(DisplayPrivate_SetOutputIsSecure_Params_Data)");
class  DisplayPrivate_SetAuthoritativeVSyncInterval_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DisplayPrivate_SetAuthoritativeVSyncInterval_Params_Data));
      new (data()) DisplayPrivate_SetAuthoritativeVSyncInterval_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DisplayPrivate_SetAuthoritativeVSyncInterval_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DisplayPrivate_SetAuthoritativeVSyncInterval_Params_Data>(index_);
    }
    DisplayPrivate_SetAuthoritativeVSyncInterval_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> interval;

 private:
  DisplayPrivate_SetAuthoritativeVSyncInterval_Params_Data();
  ~DisplayPrivate_SetAuthoritativeVSyncInterval_Params_Data() = delete;
};
static_assert(sizeof(DisplayPrivate_SetAuthoritativeVSyncInterval_Params_Data) == 16,
              "Bad sizeof(DisplayPrivate_SetAuthoritativeVSyncInterval_Params_Data)");
class  DisplayPrivate_SetDisplayVSyncParameters_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DisplayPrivate_SetDisplayVSyncParameters_Params_Data));
      new (data()) DisplayPrivate_SetDisplayVSyncParameters_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DisplayPrivate_SetDisplayVSyncParameters_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DisplayPrivate_SetDisplayVSyncParameters_Params_Data>(index_);
    }
    DisplayPrivate_SetDisplayVSyncParameters_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> timebase;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> interval;

 private:
  DisplayPrivate_SetDisplayVSyncParameters_Params_Data();
  ~DisplayPrivate_SetDisplayVSyncParameters_Params_Data() = delete;
};
static_assert(sizeof(DisplayPrivate_SetDisplayVSyncParameters_Params_Data) == 24,
              "Bad sizeof(DisplayPrivate_SetDisplayVSyncParameters_Params_Data)");
class  DisplayClient_OnDisplayReceivedCALayerParams_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DisplayClient_OnDisplayReceivedCALayerParams_Params_Data));
      new (data()) DisplayClient_OnDisplayReceivedCALayerParams_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DisplayClient_OnDisplayReceivedCALayerParams_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DisplayClient_OnDisplayReceivedCALayerParams_Params_Data>(index_);
    }
    DisplayClient_OnDisplayReceivedCALayerParams_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::CALayerParams_Data> ca_layer_params;

 private:
  DisplayClient_OnDisplayReceivedCALayerParams_Params_Data();
  ~DisplayClient_OnDisplayReceivedCALayerParams_Params_Data() = delete;
};
static_assert(sizeof(DisplayClient_OnDisplayReceivedCALayerParams_Params_Data) == 16,
              "Bad sizeof(DisplayClient_OnDisplayReceivedCALayerParams_Params_Data)");
class  DisplayClient_DidSwapAfterSnapshotRequestReceived_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DisplayClient_DidSwapAfterSnapshotRequestReceived_Params_Data));
      new (data()) DisplayClient_DidSwapAfterSnapshotRequestReceived_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DisplayClient_DidSwapAfterSnapshotRequestReceived_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DisplayClient_DidSwapAfterSnapshotRequestReceived_Params_Data>(index_);
    }
    DisplayClient_DidSwapAfterSnapshotRequestReceived_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::ui::mojom::internal::LatencyInfo_Data>>> latency_info;

 private:
  DisplayClient_DidSwapAfterSnapshotRequestReceived_Params_Data();
  ~DisplayClient_DidSwapAfterSnapshotRequestReceived_Params_Data() = delete;
};
static_assert(sizeof(DisplayClient_DidSwapAfterSnapshotRequestReceived_Params_Data) == 16,
              "Bad sizeof(DisplayClient_DidSwapAfterSnapshotRequestReceived_Params_Data)");
class  DisplayClient_CreateLayeredWindowUpdater_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DisplayClient_CreateLayeredWindowUpdater_Params_Data));
      new (data()) DisplayClient_CreateLayeredWindowUpdater_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DisplayClient_CreateLayeredWindowUpdater_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DisplayClient_CreateLayeredWindowUpdater_Params_Data>(index_);
    }
    DisplayClient_CreateLayeredWindowUpdater_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data layered_window_updater;
  uint8_t padfinal_[4];

 private:
  DisplayClient_CreateLayeredWindowUpdater_Params_Data();
  ~DisplayClient_CreateLayeredWindowUpdater_Params_Data() = delete;
};
static_assert(sizeof(DisplayClient_CreateLayeredWindowUpdater_Params_Data) == 16,
              "Bad sizeof(DisplayClient_CreateLayeredWindowUpdater_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_DISPLAY_PRIVATE_MOJOM_SHARED_INTERNAL_H_