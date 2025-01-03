// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared-internal.h"
#include "services/ui/public/interfaces/cursor/cursor.mojom-shared-internal.h"
#include "services/ui/public/interfaces/event_matcher.mojom-shared-internal.h"
#include "services/ui/public/interfaces/mus_constants.mojom-shared-internal.h"
#include "services/ui/public/interfaces/window_manager.mojom-shared-internal.h"
#include "services/ui/public/interfaces/window_manager_constants.mojom-shared-internal.h"
#include "services/ui/public/interfaces/window_tree_constants.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/compositor_frame_sink.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/frame_sink_id.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/local_surface_id.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/surface_info.mojom-shared-internal.h"
#include "skia/public/interfaces/bitmap.mojom-shared-internal.h"
#include "ui/base/mojo/ui_base_types.mojom-shared-internal.h"
#include "ui/events/mojo/event.mojom-shared-internal.h"
#include "ui/events/mojo/event_constants.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "ui/gfx/mojo/transform.mojom-shared-internal.h"
#include "ui/platform_window/mojo/text_input_state.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace ui {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  WindowTree_NewWindow_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_NewWindow_Params_Data));
      new (data()) WindowTree_NewWindow_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_NewWindow_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_NewWindow_Params_Data>(index_);
    }
    WindowTree_NewWindow_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t pad0_[4];
  uint64_t window_id;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>>>> properties;

 private:
  WindowTree_NewWindow_Params_Data();
  ~WindowTree_NewWindow_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_NewWindow_Params_Data) == 32,
              "Bad sizeof(WindowTree_NewWindow_Params_Data)");
class  WindowTree_NewTopLevelWindow_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_NewTopLevelWindow_Params_Data));
      new (data()) WindowTree_NewTopLevelWindow_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_NewTopLevelWindow_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_NewTopLevelWindow_Params_Data>(index_);
    }
    WindowTree_NewTopLevelWindow_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t pad0_[4];
  uint64_t window_id;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>>>> properties;

 private:
  WindowTree_NewTopLevelWindow_Params_Data();
  ~WindowTree_NewTopLevelWindow_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_NewTopLevelWindow_Params_Data) == 32,
              "Bad sizeof(WindowTree_NewTopLevelWindow_Params_Data)");
class  WindowTree_DeleteWindow_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_DeleteWindow_Params_Data));
      new (data()) WindowTree_DeleteWindow_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_DeleteWindow_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_DeleteWindow_Params_Data>(index_);
    }
    WindowTree_DeleteWindow_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t pad0_[4];
  uint64_t window_id;

 private:
  WindowTree_DeleteWindow_Params_Data();
  ~WindowTree_DeleteWindow_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_DeleteWindow_Params_Data) == 24,
              "Bad sizeof(WindowTree_DeleteWindow_Params_Data)");
class  WindowTree_SetCapture_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_SetCapture_Params_Data));
      new (data()) WindowTree_SetCapture_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_SetCapture_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_SetCapture_Params_Data>(index_);
    }
    WindowTree_SetCapture_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t pad0_[4];
  uint64_t window_id;

 private:
  WindowTree_SetCapture_Params_Data();
  ~WindowTree_SetCapture_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_SetCapture_Params_Data) == 24,
              "Bad sizeof(WindowTree_SetCapture_Params_Data)");
class  WindowTree_ReleaseCapture_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_ReleaseCapture_Params_Data));
      new (data()) WindowTree_ReleaseCapture_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_ReleaseCapture_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_ReleaseCapture_Params_Data>(index_);
    }
    WindowTree_ReleaseCapture_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t pad0_[4];
  uint64_t window_id;

 private:
  WindowTree_ReleaseCapture_Params_Data();
  ~WindowTree_ReleaseCapture_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_ReleaseCapture_Params_Data) == 24,
              "Bad sizeof(WindowTree_ReleaseCapture_Params_Data)");
class  WindowTree_StartPointerWatcher_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_StartPointerWatcher_Params_Data));
      new (data()) WindowTree_StartPointerWatcher_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_StartPointerWatcher_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_StartPointerWatcher_Params_Data>(index_);
    }
    WindowTree_StartPointerWatcher_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t want_moves : 1;
  uint8_t padfinal_[7];

 private:
  WindowTree_StartPointerWatcher_Params_Data();
  ~WindowTree_StartPointerWatcher_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_StartPointerWatcher_Params_Data) == 16,
              "Bad sizeof(WindowTree_StartPointerWatcher_Params_Data)");
class  WindowTree_StopPointerWatcher_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_StopPointerWatcher_Params_Data));
      new (data()) WindowTree_StopPointerWatcher_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_StopPointerWatcher_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_StopPointerWatcher_Params_Data>(index_);
    }
    WindowTree_StopPointerWatcher_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  WindowTree_StopPointerWatcher_Params_Data();
  ~WindowTree_StopPointerWatcher_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_StopPointerWatcher_Params_Data) == 8,
              "Bad sizeof(WindowTree_StopPointerWatcher_Params_Data)");
class  WindowTree_SetWindowBounds_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_SetWindowBounds_Params_Data));
      new (data()) WindowTree_SetWindowBounds_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_SetWindowBounds_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_SetWindowBounds_Params_Data>(index_);
    }
    WindowTree_SetWindowBounds_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t pad0_[4];
  uint64_t window_id;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> bounds;
  mojo::internal::Pointer<::viz::mojom::internal::LocalSurfaceId_Data> local_surface_id;

 private:
  WindowTree_SetWindowBounds_Params_Data();
  ~WindowTree_SetWindowBounds_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_SetWindowBounds_Params_Data) == 40,
              "Bad sizeof(WindowTree_SetWindowBounds_Params_Data)");
class  WindowTree_SetWindowTransform_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_SetWindowTransform_Params_Data));
      new (data()) WindowTree_SetWindowTransform_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_SetWindowTransform_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_SetWindowTransform_Params_Data>(index_);
    }
    WindowTree_SetWindowTransform_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t pad0_[4];
  uint64_t window_id;
  mojo::internal::Pointer<::gfx::mojom::internal::Transform_Data> transform;

 private:
  WindowTree_SetWindowTransform_Params_Data();
  ~WindowTree_SetWindowTransform_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_SetWindowTransform_Params_Data) == 32,
              "Bad sizeof(WindowTree_SetWindowTransform_Params_Data)");
class  WindowTree_SetClientArea_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_SetClientArea_Params_Data));
      new (data()) WindowTree_SetClientArea_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_SetClientArea_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_SetClientArea_Params_Data>(index_);
    }
    WindowTree_SetClientArea_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;
  mojo::internal::Pointer<::gfx::mojom::internal::Insets_Data> insets;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data>>> additional_client_areas;

 private:
  WindowTree_SetClientArea_Params_Data();
  ~WindowTree_SetClientArea_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_SetClientArea_Params_Data) == 32,
              "Bad sizeof(WindowTree_SetClientArea_Params_Data)");
class  WindowTree_SetHitTestMask_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_SetHitTestMask_Params_Data));
      new (data()) WindowTree_SetHitTestMask_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_SetHitTestMask_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_SetHitTestMask_Params_Data>(index_);
    }
    WindowTree_SetHitTestMask_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> mask;

 private:
  WindowTree_SetHitTestMask_Params_Data();
  ~WindowTree_SetHitTestMask_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_SetHitTestMask_Params_Data) == 24,
              "Bad sizeof(WindowTree_SetHitTestMask_Params_Data)");
class  WindowTree_SetCanAcceptDrops_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_SetCanAcceptDrops_Params_Data));
      new (data()) WindowTree_SetCanAcceptDrops_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_SetCanAcceptDrops_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_SetCanAcceptDrops_Params_Data>(index_);
    }
    WindowTree_SetCanAcceptDrops_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;
  uint8_t accepts_drops : 1;
  uint8_t padfinal_[7];

 private:
  WindowTree_SetCanAcceptDrops_Params_Data();
  ~WindowTree_SetCanAcceptDrops_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_SetCanAcceptDrops_Params_Data) == 24,
              "Bad sizeof(WindowTree_SetCanAcceptDrops_Params_Data)");
class  WindowTree_SetWindowVisibility_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_SetWindowVisibility_Params_Data));
      new (data()) WindowTree_SetWindowVisibility_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_SetWindowVisibility_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_SetWindowVisibility_Params_Data>(index_);
    }
    WindowTree_SetWindowVisibility_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t visible : 1;
  uint8_t pad1_[3];
  uint64_t window_id;

 private:
  WindowTree_SetWindowVisibility_Params_Data();
  ~WindowTree_SetWindowVisibility_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_SetWindowVisibility_Params_Data) == 24,
              "Bad sizeof(WindowTree_SetWindowVisibility_Params_Data)");
class  WindowTree_SetWindowProperty_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_SetWindowProperty_Params_Data));
      new (data()) WindowTree_SetWindowProperty_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_SetWindowProperty_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_SetWindowProperty_Params_Data>(index_);
    }
    WindowTree_SetWindowProperty_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t pad0_[4];
  uint64_t window_id;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> value;

 private:
  WindowTree_SetWindowProperty_Params_Data();
  ~WindowTree_SetWindowProperty_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_SetWindowProperty_Params_Data) == 40,
              "Bad sizeof(WindowTree_SetWindowProperty_Params_Data)");
class  WindowTree_SetWindowOpacity_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_SetWindowOpacity_Params_Data));
      new (data()) WindowTree_SetWindowOpacity_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_SetWindowOpacity_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_SetWindowOpacity_Params_Data>(index_);
    }
    WindowTree_SetWindowOpacity_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  float opacity;
  uint64_t window_id;

 private:
  WindowTree_SetWindowOpacity_Params_Data();
  ~WindowTree_SetWindowOpacity_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_SetWindowOpacity_Params_Data) == 24,
              "Bad sizeof(WindowTree_SetWindowOpacity_Params_Data)");
class  WindowTree_AttachCompositorFrameSink_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_AttachCompositorFrameSink_Params_Data));
      new (data()) WindowTree_AttachCompositorFrameSink_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_AttachCompositorFrameSink_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_AttachCompositorFrameSink_Params_Data>(index_);
    }
    WindowTree_AttachCompositorFrameSink_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;
  mojo::internal::Handle_Data compositor_frame_sink;
  mojo::internal::Interface_Data client;
  uint8_t padfinal_[4];

 private:
  WindowTree_AttachCompositorFrameSink_Params_Data();
  ~WindowTree_AttachCompositorFrameSink_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_AttachCompositorFrameSink_Params_Data) == 32,
              "Bad sizeof(WindowTree_AttachCompositorFrameSink_Params_Data)");
class  WindowTree_AddWindow_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_AddWindow_Params_Data));
      new (data()) WindowTree_AddWindow_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_AddWindow_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_AddWindow_Params_Data>(index_);
    }
    WindowTree_AddWindow_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t pad0_[4];
  uint64_t parent;
  uint64_t child;

 private:
  WindowTree_AddWindow_Params_Data();
  ~WindowTree_AddWindow_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_AddWindow_Params_Data) == 32,
              "Bad sizeof(WindowTree_AddWindow_Params_Data)");
class  WindowTree_RemoveWindowFromParent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_RemoveWindowFromParent_Params_Data));
      new (data()) WindowTree_RemoveWindowFromParent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_RemoveWindowFromParent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_RemoveWindowFromParent_Params_Data>(index_);
    }
    WindowTree_RemoveWindowFromParent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t pad0_[4];
  uint64_t window_id;

 private:
  WindowTree_RemoveWindowFromParent_Params_Data();
  ~WindowTree_RemoveWindowFromParent_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_RemoveWindowFromParent_Params_Data) == 24,
              "Bad sizeof(WindowTree_RemoveWindowFromParent_Params_Data)");
class  WindowTree_AddTransientWindow_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_AddTransientWindow_Params_Data));
      new (data()) WindowTree_AddTransientWindow_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_AddTransientWindow_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_AddTransientWindow_Params_Data>(index_);
    }
    WindowTree_AddTransientWindow_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t pad0_[4];
  uint64_t window_id;
  uint64_t transient_window_id;

 private:
  WindowTree_AddTransientWindow_Params_Data();
  ~WindowTree_AddTransientWindow_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_AddTransientWindow_Params_Data) == 32,
              "Bad sizeof(WindowTree_AddTransientWindow_Params_Data)");
class  WindowTree_RemoveTransientWindowFromParent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_RemoveTransientWindowFromParent_Params_Data));
      new (data()) WindowTree_RemoveTransientWindowFromParent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_RemoveTransientWindowFromParent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_RemoveTransientWindowFromParent_Params_Data>(index_);
    }
    WindowTree_RemoveTransientWindowFromParent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t pad0_[4];
  uint64_t transient_window_id;

 private:
  WindowTree_RemoveTransientWindowFromParent_Params_Data();
  ~WindowTree_RemoveTransientWindowFromParent_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_RemoveTransientWindowFromParent_Params_Data) == 24,
              "Bad sizeof(WindowTree_RemoveTransientWindowFromParent_Params_Data)");
class  WindowTree_SetModalType_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_SetModalType_Params_Data));
      new (data()) WindowTree_SetModalType_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_SetModalType_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_SetModalType_Params_Data>(index_);
    }
    WindowTree_SetModalType_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  int32_t type;
  uint64_t window_id;

 private:
  WindowTree_SetModalType_Params_Data();
  ~WindowTree_SetModalType_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_SetModalType_Params_Data) == 24,
              "Bad sizeof(WindowTree_SetModalType_Params_Data)");
class  WindowTree_SetChildModalParent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_SetChildModalParent_Params_Data));
      new (data()) WindowTree_SetChildModalParent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_SetChildModalParent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_SetChildModalParent_Params_Data>(index_);
    }
    WindowTree_SetChildModalParent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t pad0_[4];
  uint64_t window_id;
  uint64_t parent_window_id;

 private:
  WindowTree_SetChildModalParent_Params_Data();
  ~WindowTree_SetChildModalParent_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_SetChildModalParent_Params_Data) == 32,
              "Bad sizeof(WindowTree_SetChildModalParent_Params_Data)");
class  WindowTree_ReorderWindow_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_ReorderWindow_Params_Data));
      new (data()) WindowTree_ReorderWindow_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_ReorderWindow_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_ReorderWindow_Params_Data>(index_);
    }
    WindowTree_ReorderWindow_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  int32_t direction;
  uint64_t window_id;
  uint64_t relative_window_id;

 private:
  WindowTree_ReorderWindow_Params_Data();
  ~WindowTree_ReorderWindow_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_ReorderWindow_Params_Data) == 32,
              "Bad sizeof(WindowTree_ReorderWindow_Params_Data)");
class  WindowTree_GetWindowTree_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_GetWindowTree_Params_Data));
      new (data()) WindowTree_GetWindowTree_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_GetWindowTree_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_GetWindowTree_Params_Data>(index_);
    }
    WindowTree_GetWindowTree_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;

 private:
  WindowTree_GetWindowTree_Params_Data();
  ~WindowTree_GetWindowTree_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_GetWindowTree_Params_Data) == 16,
              "Bad sizeof(WindowTree_GetWindowTree_Params_Data)");
class  WindowTree_GetWindowTree_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_GetWindowTree_ResponseParams_Data));
      new (data()) WindowTree_GetWindowTree_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_GetWindowTree_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_GetWindowTree_ResponseParams_Data>(index_);
    }
    WindowTree_GetWindowTree_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::ui::mojom::internal::WindowData_Data>>> windows;

 private:
  WindowTree_GetWindowTree_ResponseParams_Data();
  ~WindowTree_GetWindowTree_ResponseParams_Data() = delete;
};
static_assert(sizeof(WindowTree_GetWindowTree_ResponseParams_Data) == 16,
              "Bad sizeof(WindowTree_GetWindowTree_ResponseParams_Data)");
class  WindowTree_Embed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_Embed_Params_Data));
      new (data()) WindowTree_Embed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_Embed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_Embed_Params_Data>(index_);
    }
    WindowTree_Embed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;
  mojo::internal::Interface_Data client;
  uint32_t embed_flags;
  uint8_t padfinal_[4];

 private:
  WindowTree_Embed_Params_Data();
  ~WindowTree_Embed_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_Embed_Params_Data) == 32,
              "Bad sizeof(WindowTree_Embed_Params_Data)");
class  WindowTree_Embed_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_Embed_ResponseParams_Data));
      new (data()) WindowTree_Embed_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_Embed_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_Embed_ResponseParams_Data>(index_);
    }
    WindowTree_Embed_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  WindowTree_Embed_ResponseParams_Data();
  ~WindowTree_Embed_ResponseParams_Data() = delete;
};
static_assert(sizeof(WindowTree_Embed_ResponseParams_Data) == 16,
              "Bad sizeof(WindowTree_Embed_ResponseParams_Data)");
class  WindowTree_ScheduleEmbed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_ScheduleEmbed_Params_Data));
      new (data()) WindowTree_ScheduleEmbed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_ScheduleEmbed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_ScheduleEmbed_Params_Data>(index_);
    }
    WindowTree_ScheduleEmbed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data client;

 private:
  WindowTree_ScheduleEmbed_Params_Data();
  ~WindowTree_ScheduleEmbed_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_ScheduleEmbed_Params_Data) == 16,
              "Bad sizeof(WindowTree_ScheduleEmbed_Params_Data)");
class  WindowTree_ScheduleEmbed_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_ScheduleEmbed_ResponseParams_Data));
      new (data()) WindowTree_ScheduleEmbed_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_ScheduleEmbed_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_ScheduleEmbed_ResponseParams_Data>(index_);
    }
    WindowTree_ScheduleEmbed_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> token;

 private:
  WindowTree_ScheduleEmbed_ResponseParams_Data();
  ~WindowTree_ScheduleEmbed_ResponseParams_Data() = delete;
};
static_assert(sizeof(WindowTree_ScheduleEmbed_ResponseParams_Data) == 16,
              "Bad sizeof(WindowTree_ScheduleEmbed_ResponseParams_Data)");
class  WindowTree_ScheduleEmbedForExistingClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_ScheduleEmbedForExistingClient_Params_Data));
      new (data()) WindowTree_ScheduleEmbedForExistingClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_ScheduleEmbedForExistingClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_ScheduleEmbedForExistingClient_Params_Data>(index_);
    }
    WindowTree_ScheduleEmbedForExistingClient_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t window_id;
  uint8_t padfinal_[4];

 private:
  WindowTree_ScheduleEmbedForExistingClient_Params_Data();
  ~WindowTree_ScheduleEmbedForExistingClient_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_ScheduleEmbedForExistingClient_Params_Data) == 16,
              "Bad sizeof(WindowTree_ScheduleEmbedForExistingClient_Params_Data)");
class  WindowTree_ScheduleEmbedForExistingClient_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_ScheduleEmbedForExistingClient_ResponseParams_Data));
      new (data()) WindowTree_ScheduleEmbedForExistingClient_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_ScheduleEmbedForExistingClient_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_ScheduleEmbedForExistingClient_ResponseParams_Data>(index_);
    }
    WindowTree_ScheduleEmbedForExistingClient_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> token;

 private:
  WindowTree_ScheduleEmbedForExistingClient_ResponseParams_Data();
  ~WindowTree_ScheduleEmbedForExistingClient_ResponseParams_Data() = delete;
};
static_assert(sizeof(WindowTree_ScheduleEmbedForExistingClient_ResponseParams_Data) == 16,
              "Bad sizeof(WindowTree_ScheduleEmbedForExistingClient_ResponseParams_Data)");
class  WindowTree_EmbedUsingToken_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_EmbedUsingToken_Params_Data));
      new (data()) WindowTree_EmbedUsingToken_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_EmbedUsingToken_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_EmbedUsingToken_Params_Data>(index_);
    }
    WindowTree_EmbedUsingToken_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> token;
  uint32_t embed_flags;
  uint8_t padfinal_[4];

 private:
  WindowTree_EmbedUsingToken_Params_Data();
  ~WindowTree_EmbedUsingToken_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_EmbedUsingToken_Params_Data) == 32,
              "Bad sizeof(WindowTree_EmbedUsingToken_Params_Data)");
class  WindowTree_EmbedUsingToken_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_EmbedUsingToken_ResponseParams_Data));
      new (data()) WindowTree_EmbedUsingToken_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_EmbedUsingToken_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_EmbedUsingToken_ResponseParams_Data>(index_);
    }
    WindowTree_EmbedUsingToken_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  WindowTree_EmbedUsingToken_ResponseParams_Data();
  ~WindowTree_EmbedUsingToken_ResponseParams_Data() = delete;
};
static_assert(sizeof(WindowTree_EmbedUsingToken_ResponseParams_Data) == 16,
              "Bad sizeof(WindowTree_EmbedUsingToken_ResponseParams_Data)");
class  WindowTree_SetFocus_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_SetFocus_Params_Data));
      new (data()) WindowTree_SetFocus_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_SetFocus_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_SetFocus_Params_Data>(index_);
    }
    WindowTree_SetFocus_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t pad0_[4];
  uint64_t window_id;

 private:
  WindowTree_SetFocus_Params_Data();
  ~WindowTree_SetFocus_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_SetFocus_Params_Data) == 24,
              "Bad sizeof(WindowTree_SetFocus_Params_Data)");
class  WindowTree_SetCanFocus_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_SetCanFocus_Params_Data));
      new (data()) WindowTree_SetCanFocus_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_SetCanFocus_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_SetCanFocus_Params_Data>(index_);
    }
    WindowTree_SetCanFocus_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;
  uint8_t can_focus : 1;
  uint8_t padfinal_[7];

 private:
  WindowTree_SetCanFocus_Params_Data();
  ~WindowTree_SetCanFocus_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_SetCanFocus_Params_Data) == 24,
              "Bad sizeof(WindowTree_SetCanFocus_Params_Data)");
class  WindowTree_SetCursor_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_SetCursor_Params_Data));
      new (data()) WindowTree_SetCursor_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_SetCursor_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_SetCursor_Params_Data>(index_);
    }
    WindowTree_SetCursor_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t pad0_[4];
  uint64_t window_id;
  mojo::internal::Pointer<::ui::mojom::internal::CursorData_Data> cursor;

 private:
  WindowTree_SetCursor_Params_Data();
  ~WindowTree_SetCursor_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_SetCursor_Params_Data) == 32,
              "Bad sizeof(WindowTree_SetCursor_Params_Data)");
class  WindowTree_SetWindowTextInputState_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_SetWindowTextInputState_Params_Data));
      new (data()) WindowTree_SetWindowTextInputState_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_SetWindowTextInputState_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_SetWindowTextInputState_Params_Data>(index_);
    }
    WindowTree_SetWindowTextInputState_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;
  mojo::internal::Pointer<::ui::mojom::internal::TextInputState_Data> state;

 private:
  WindowTree_SetWindowTextInputState_Params_Data();
  ~WindowTree_SetWindowTextInputState_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_SetWindowTextInputState_Params_Data) == 24,
              "Bad sizeof(WindowTree_SetWindowTextInputState_Params_Data)");
class  WindowTree_SetImeVisibility_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_SetImeVisibility_Params_Data));
      new (data()) WindowTree_SetImeVisibility_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_SetImeVisibility_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_SetImeVisibility_Params_Data>(index_);
    }
    WindowTree_SetImeVisibility_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;
  uint8_t visible : 1;
  uint8_t pad1_[7];
  mojo::internal::Pointer<::ui::mojom::internal::TextInputState_Data> state;

 private:
  WindowTree_SetImeVisibility_Params_Data();
  ~WindowTree_SetImeVisibility_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_SetImeVisibility_Params_Data) == 32,
              "Bad sizeof(WindowTree_SetImeVisibility_Params_Data)");
class  WindowTree_SetEventTargetingPolicy_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_SetEventTargetingPolicy_Params_Data));
      new (data()) WindowTree_SetEventTargetingPolicy_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_SetEventTargetingPolicy_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_SetEventTargetingPolicy_Params_Data>(index_);
    }
    WindowTree_SetEventTargetingPolicy_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;
  int32_t policy;
  uint8_t padfinal_[4];

 private:
  WindowTree_SetEventTargetingPolicy_Params_Data();
  ~WindowTree_SetEventTargetingPolicy_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_SetEventTargetingPolicy_Params_Data) == 24,
              "Bad sizeof(WindowTree_SetEventTargetingPolicy_Params_Data)");
class  WindowTree_OnWindowInputEventAck_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_OnWindowInputEventAck_Params_Data));
      new (data()) WindowTree_OnWindowInputEventAck_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_OnWindowInputEventAck_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_OnWindowInputEventAck_Params_Data>(index_);
    }
    WindowTree_OnWindowInputEventAck_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t event_id;
  int32_t result;

 private:
  WindowTree_OnWindowInputEventAck_Params_Data();
  ~WindowTree_OnWindowInputEventAck_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_OnWindowInputEventAck_Params_Data) == 16,
              "Bad sizeof(WindowTree_OnWindowInputEventAck_Params_Data)");
class  WindowTree_DeactivateWindow_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_DeactivateWindow_Params_Data));
      new (data()) WindowTree_DeactivateWindow_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_DeactivateWindow_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_DeactivateWindow_Params_Data>(index_);
    }
    WindowTree_DeactivateWindow_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;

 private:
  WindowTree_DeactivateWindow_Params_Data();
  ~WindowTree_DeactivateWindow_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_DeactivateWindow_Params_Data) == 16,
              "Bad sizeof(WindowTree_DeactivateWindow_Params_Data)");
class  WindowTree_StackAbove_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_StackAbove_Params_Data));
      new (data()) WindowTree_StackAbove_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_StackAbove_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_StackAbove_Params_Data>(index_);
    }
    WindowTree_StackAbove_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t pad0_[4];
  uint64_t above_id;
  uint64_t below_id;

 private:
  WindowTree_StackAbove_Params_Data();
  ~WindowTree_StackAbove_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_StackAbove_Params_Data) == 32,
              "Bad sizeof(WindowTree_StackAbove_Params_Data)");
class  WindowTree_StackAtTop_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_StackAtTop_Params_Data));
      new (data()) WindowTree_StackAtTop_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_StackAtTop_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_StackAtTop_Params_Data>(index_);
    }
    WindowTree_StackAtTop_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t pad0_[4];
  uint64_t window_id;

 private:
  WindowTree_StackAtTop_Params_Data();
  ~WindowTree_StackAtTop_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_StackAtTop_Params_Data) == 24,
              "Bad sizeof(WindowTree_StackAtTop_Params_Data)");
class  WindowTree_PerformWmAction_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_PerformWmAction_Params_Data));
      new (data()) WindowTree_PerformWmAction_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_PerformWmAction_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_PerformWmAction_Params_Data>(index_);
    }
    WindowTree_PerformWmAction_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;
  mojo::internal::Pointer<mojo::internal::String_Data> action;

 private:
  WindowTree_PerformWmAction_Params_Data();
  ~WindowTree_PerformWmAction_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_PerformWmAction_Params_Data) == 24,
              "Bad sizeof(WindowTree_PerformWmAction_Params_Data)");
class  WindowTree_GetWindowManagerClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_GetWindowManagerClient_Params_Data));
      new (data()) WindowTree_GetWindowManagerClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_GetWindowManagerClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_GetWindowManagerClient_Params_Data>(index_);
    }
    WindowTree_GetWindowManagerClient_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedEndpointHandle_Data internal;
  uint8_t padfinal_[4];

 private:
  WindowTree_GetWindowManagerClient_Params_Data();
  ~WindowTree_GetWindowManagerClient_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_GetWindowManagerClient_Params_Data) == 16,
              "Bad sizeof(WindowTree_GetWindowManagerClient_Params_Data)");
class  WindowTree_GetCursorLocationMemory_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_GetCursorLocationMemory_Params_Data));
      new (data()) WindowTree_GetCursorLocationMemory_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_GetCursorLocationMemory_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_GetCursorLocationMemory_Params_Data>(index_);
    }
    WindowTree_GetCursorLocationMemory_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  WindowTree_GetCursorLocationMemory_Params_Data();
  ~WindowTree_GetCursorLocationMemory_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_GetCursorLocationMemory_Params_Data) == 8,
              "Bad sizeof(WindowTree_GetCursorLocationMemory_Params_Data)");
class  WindowTree_GetCursorLocationMemory_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_GetCursorLocationMemory_ResponseParams_Data));
      new (data()) WindowTree_GetCursorLocationMemory_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_GetCursorLocationMemory_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_GetCursorLocationMemory_ResponseParams_Data>(index_);
    }
    WindowTree_GetCursorLocationMemory_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data cursor_buffer;
  uint8_t padfinal_[4];

 private:
  WindowTree_GetCursorLocationMemory_ResponseParams_Data();
  ~WindowTree_GetCursorLocationMemory_ResponseParams_Data() = delete;
};
static_assert(sizeof(WindowTree_GetCursorLocationMemory_ResponseParams_Data) == 16,
              "Bad sizeof(WindowTree_GetCursorLocationMemory_ResponseParams_Data)");
class  WindowTree_PerformWindowMove_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_PerformWindowMove_Params_Data));
      new (data()) WindowTree_PerformWindowMove_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_PerformWindowMove_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_PerformWindowMove_Params_Data>(index_);
    }
    WindowTree_PerformWindowMove_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  int32_t source;
  uint64_t window_id;
  mojo::internal::Pointer<::gfx::mojom::internal::Point_Data> cursor;

 private:
  WindowTree_PerformWindowMove_Params_Data();
  ~WindowTree_PerformWindowMove_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_PerformWindowMove_Params_Data) == 32,
              "Bad sizeof(WindowTree_PerformWindowMove_Params_Data)");
class  WindowTree_CancelWindowMove_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_CancelWindowMove_Params_Data));
      new (data()) WindowTree_CancelWindowMove_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_CancelWindowMove_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_CancelWindowMove_Params_Data>(index_);
    }
    WindowTree_CancelWindowMove_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;

 private:
  WindowTree_CancelWindowMove_Params_Data();
  ~WindowTree_CancelWindowMove_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_CancelWindowMove_Params_Data) == 16,
              "Bad sizeof(WindowTree_CancelWindowMove_Params_Data)");
class  WindowTree_PerformDragDrop_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_PerformDragDrop_Params_Data));
      new (data()) WindowTree_PerformDragDrop_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_PerformDragDrop_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_PerformDragDrop_Params_Data>(index_);
    }
    WindowTree_PerformDragDrop_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint32_t drag_operation;
  uint64_t source_window_id;
  mojo::internal::Pointer<::gfx::mojom::internal::Point_Data> screen_location;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>>>> drag_data;
  mojo::internal::Pointer<::skia::mojom::internal::Bitmap_Data> drag_image;
  mojo::internal::Pointer<::gfx::mojom::internal::Vector2d_Data> drag_image_offset;
  int32_t source;
  uint8_t padfinal_[4];

 private:
  WindowTree_PerformDragDrop_Params_Data();
  ~WindowTree_PerformDragDrop_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_PerformDragDrop_Params_Data) == 64,
              "Bad sizeof(WindowTree_PerformDragDrop_Params_Data)");
class  WindowTree_CancelDragDrop_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTree_CancelDragDrop_Params_Data));
      new (data()) WindowTree_CancelDragDrop_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTree_CancelDragDrop_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTree_CancelDragDrop_Params_Data>(index_);
    }
    WindowTree_CancelDragDrop_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;

 private:
  WindowTree_CancelDragDrop_Params_Data();
  ~WindowTree_CancelDragDrop_Params_Data() = delete;
};
static_assert(sizeof(WindowTree_CancelDragDrop_Params_Data) == 16,
              "Bad sizeof(WindowTree_CancelDragDrop_Params_Data)");
class  WindowTreeClient_OnEmbed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnEmbed_Params_Data));
      new (data()) WindowTreeClient_OnEmbed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnEmbed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnEmbed_Params_Data>(index_);
    }
    WindowTreeClient_OnEmbed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::ui::mojom::internal::WindowData_Data> root;
  mojo::internal::Interface_Data tree;
  int64_t display_id;
  uint64_t focused_window;
  uint8_t parent_drawn : 1;
  uint8_t pad4_[7];
  mojo::internal::Pointer<::viz::mojom::internal::LocalSurfaceId_Data> local_surface_id;

 private:
  WindowTreeClient_OnEmbed_Params_Data();
  ~WindowTreeClient_OnEmbed_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnEmbed_Params_Data) == 56,
              "Bad sizeof(WindowTreeClient_OnEmbed_Params_Data)");
class  WindowTreeClient_OnEmbedFromToken_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnEmbedFromToken_Params_Data));
      new (data()) WindowTreeClient_OnEmbedFromToken_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnEmbedFromToken_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnEmbedFromToken_Params_Data>(index_);
    }
    WindowTreeClient_OnEmbedFromToken_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> token;
  mojo::internal::Pointer<::ui::mojom::internal::WindowData_Data> root;
  int64_t display_id;
  mojo::internal::Pointer<::viz::mojom::internal::LocalSurfaceId_Data> local_surface_id;

 private:
  WindowTreeClient_OnEmbedFromToken_Params_Data();
  ~WindowTreeClient_OnEmbedFromToken_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnEmbedFromToken_Params_Data) == 40,
              "Bad sizeof(WindowTreeClient_OnEmbedFromToken_Params_Data)");
class  WindowTreeClient_OnEmbeddedAppDisconnected_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnEmbeddedAppDisconnected_Params_Data));
      new (data()) WindowTreeClient_OnEmbeddedAppDisconnected_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnEmbeddedAppDisconnected_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnEmbeddedAppDisconnected_Params_Data>(index_);
    }
    WindowTreeClient_OnEmbeddedAppDisconnected_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window;

 private:
  WindowTreeClient_OnEmbeddedAppDisconnected_Params_Data();
  ~WindowTreeClient_OnEmbeddedAppDisconnected_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnEmbeddedAppDisconnected_Params_Data) == 16,
              "Bad sizeof(WindowTreeClient_OnEmbeddedAppDisconnected_Params_Data)");
class  WindowTreeClient_OnUnembed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnUnembed_Params_Data));
      new (data()) WindowTreeClient_OnUnembed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnUnembed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnUnembed_Params_Data>(index_);
    }
    WindowTreeClient_OnUnembed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window;

 private:
  WindowTreeClient_OnUnembed_Params_Data();
  ~WindowTreeClient_OnUnembed_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnUnembed_Params_Data) == 16,
              "Bad sizeof(WindowTreeClient_OnUnembed_Params_Data)");
class  WindowTreeClient_OnCaptureChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnCaptureChanged_Params_Data));
      new (data()) WindowTreeClient_OnCaptureChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnCaptureChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnCaptureChanged_Params_Data>(index_);
    }
    WindowTreeClient_OnCaptureChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t new_capture;
  uint64_t old_capture;

 private:
  WindowTreeClient_OnCaptureChanged_Params_Data();
  ~WindowTreeClient_OnCaptureChanged_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnCaptureChanged_Params_Data) == 24,
              "Bad sizeof(WindowTreeClient_OnCaptureChanged_Params_Data)");
class  WindowTreeClient_OnFrameSinkIdAllocated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnFrameSinkIdAllocated_Params_Data));
      new (data()) WindowTreeClient_OnFrameSinkIdAllocated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnFrameSinkIdAllocated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnFrameSinkIdAllocated_Params_Data>(index_);
    }
    WindowTreeClient_OnFrameSinkIdAllocated_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window;
  mojo::internal::Pointer<::viz::mojom::internal::FrameSinkId_Data> frame_sink_id;

 private:
  WindowTreeClient_OnFrameSinkIdAllocated_Params_Data();
  ~WindowTreeClient_OnFrameSinkIdAllocated_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnFrameSinkIdAllocated_Params_Data) == 24,
              "Bad sizeof(WindowTreeClient_OnFrameSinkIdAllocated_Params_Data)");
class  WindowTreeClient_OnTopLevelCreated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnTopLevelCreated_Params_Data));
      new (data()) WindowTreeClient_OnTopLevelCreated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnTopLevelCreated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnTopLevelCreated_Params_Data>(index_);
    }
    WindowTreeClient_OnTopLevelCreated_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t parent_drawn : 1;
  uint8_t pad1_[3];
  mojo::internal::Pointer<::ui::mojom::internal::WindowData_Data> data;
  int64_t display_id;
  mojo::internal::Pointer<::viz::mojom::internal::LocalSurfaceId_Data> local_surface_id;

 private:
  WindowTreeClient_OnTopLevelCreated_Params_Data();
  ~WindowTreeClient_OnTopLevelCreated_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnTopLevelCreated_Params_Data) == 40,
              "Bad sizeof(WindowTreeClient_OnTopLevelCreated_Params_Data)");
class  WindowTreeClient_OnWindowBoundsChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnWindowBoundsChanged_Params_Data));
      new (data()) WindowTreeClient_OnWindowBoundsChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnWindowBoundsChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnWindowBoundsChanged_Params_Data>(index_);
    }
    WindowTreeClient_OnWindowBoundsChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> old_bounds;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> new_bounds;
  mojo::internal::Pointer<::viz::mojom::internal::LocalSurfaceId_Data> local_surface_id;

 private:
  WindowTreeClient_OnWindowBoundsChanged_Params_Data();
  ~WindowTreeClient_OnWindowBoundsChanged_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnWindowBoundsChanged_Params_Data) == 40,
              "Bad sizeof(WindowTreeClient_OnWindowBoundsChanged_Params_Data)");
class  WindowTreeClient_OnWindowTransformChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnWindowTransformChanged_Params_Data));
      new (data()) WindowTreeClient_OnWindowTransformChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnWindowTransformChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnWindowTransformChanged_Params_Data>(index_);
    }
    WindowTreeClient_OnWindowTransformChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window;
  mojo::internal::Pointer<::gfx::mojom::internal::Transform_Data> old_transform;
  mojo::internal::Pointer<::gfx::mojom::internal::Transform_Data> new_transform;

 private:
  WindowTreeClient_OnWindowTransformChanged_Params_Data();
  ~WindowTreeClient_OnWindowTransformChanged_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnWindowTransformChanged_Params_Data) == 32,
              "Bad sizeof(WindowTreeClient_OnWindowTransformChanged_Params_Data)");
class  WindowTreeClient_OnClientAreaChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnClientAreaChanged_Params_Data));
      new (data()) WindowTreeClient_OnClientAreaChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnClientAreaChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnClientAreaChanged_Params_Data>(index_);
    }
    WindowTreeClient_OnClientAreaChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;
  mojo::internal::Pointer<::gfx::mojom::internal::Insets_Data> new_client_area;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data>>> new_additional_client_areas;

 private:
  WindowTreeClient_OnClientAreaChanged_Params_Data();
  ~WindowTreeClient_OnClientAreaChanged_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnClientAreaChanged_Params_Data) == 32,
              "Bad sizeof(WindowTreeClient_OnClientAreaChanged_Params_Data)");
class  WindowTreeClient_OnTransientWindowAdded_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnTransientWindowAdded_Params_Data));
      new (data()) WindowTreeClient_OnTransientWindowAdded_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnTransientWindowAdded_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnTransientWindowAdded_Params_Data>(index_);
    }
    WindowTreeClient_OnTransientWindowAdded_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;
  uint64_t transient_window_id;

 private:
  WindowTreeClient_OnTransientWindowAdded_Params_Data();
  ~WindowTreeClient_OnTransientWindowAdded_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnTransientWindowAdded_Params_Data) == 24,
              "Bad sizeof(WindowTreeClient_OnTransientWindowAdded_Params_Data)");
class  WindowTreeClient_OnTransientWindowRemoved_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnTransientWindowRemoved_Params_Data));
      new (data()) WindowTreeClient_OnTransientWindowRemoved_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnTransientWindowRemoved_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnTransientWindowRemoved_Params_Data>(index_);
    }
    WindowTreeClient_OnTransientWindowRemoved_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;
  uint64_t transient_window_id;

 private:
  WindowTreeClient_OnTransientWindowRemoved_Params_Data();
  ~WindowTreeClient_OnTransientWindowRemoved_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnTransientWindowRemoved_Params_Data) == 24,
              "Bad sizeof(WindowTreeClient_OnTransientWindowRemoved_Params_Data)");
class  WindowTreeClient_OnWindowHierarchyChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnWindowHierarchyChanged_Params_Data));
      new (data()) WindowTreeClient_OnWindowHierarchyChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnWindowHierarchyChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnWindowHierarchyChanged_Params_Data>(index_);
    }
    WindowTreeClient_OnWindowHierarchyChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window;
  uint64_t old_parent;
  uint64_t new_parent;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::ui::mojom::internal::WindowData_Data>>> windows;

 private:
  WindowTreeClient_OnWindowHierarchyChanged_Params_Data();
  ~WindowTreeClient_OnWindowHierarchyChanged_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnWindowHierarchyChanged_Params_Data) == 40,
              "Bad sizeof(WindowTreeClient_OnWindowHierarchyChanged_Params_Data)");
class  WindowTreeClient_OnWindowReordered_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnWindowReordered_Params_Data));
      new (data()) WindowTreeClient_OnWindowReordered_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnWindowReordered_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnWindowReordered_Params_Data>(index_);
    }
    WindowTreeClient_OnWindowReordered_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;
  uint64_t relative_window_id;
  int32_t direction;
  uint8_t padfinal_[4];

 private:
  WindowTreeClient_OnWindowReordered_Params_Data();
  ~WindowTreeClient_OnWindowReordered_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnWindowReordered_Params_Data) == 32,
              "Bad sizeof(WindowTreeClient_OnWindowReordered_Params_Data)");
class  WindowTreeClient_OnWindowDeleted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnWindowDeleted_Params_Data));
      new (data()) WindowTreeClient_OnWindowDeleted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnWindowDeleted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnWindowDeleted_Params_Data>(index_);
    }
    WindowTreeClient_OnWindowDeleted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window;

 private:
  WindowTreeClient_OnWindowDeleted_Params_Data();
  ~WindowTreeClient_OnWindowDeleted_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnWindowDeleted_Params_Data) == 16,
              "Bad sizeof(WindowTreeClient_OnWindowDeleted_Params_Data)");
class  WindowTreeClient_OnWindowVisibilityChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnWindowVisibilityChanged_Params_Data));
      new (data()) WindowTreeClient_OnWindowVisibilityChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnWindowVisibilityChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnWindowVisibilityChanged_Params_Data>(index_);
    }
    WindowTreeClient_OnWindowVisibilityChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window;
  uint8_t visible : 1;
  uint8_t padfinal_[7];

 private:
  WindowTreeClient_OnWindowVisibilityChanged_Params_Data();
  ~WindowTreeClient_OnWindowVisibilityChanged_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnWindowVisibilityChanged_Params_Data) == 24,
              "Bad sizeof(WindowTreeClient_OnWindowVisibilityChanged_Params_Data)");
class  WindowTreeClient_OnWindowOpacityChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnWindowOpacityChanged_Params_Data));
      new (data()) WindowTreeClient_OnWindowOpacityChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnWindowOpacityChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnWindowOpacityChanged_Params_Data>(index_);
    }
    WindowTreeClient_OnWindowOpacityChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window;
  float old_opacity;
  float new_opacity;

 private:
  WindowTreeClient_OnWindowOpacityChanged_Params_Data();
  ~WindowTreeClient_OnWindowOpacityChanged_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnWindowOpacityChanged_Params_Data) == 24,
              "Bad sizeof(WindowTreeClient_OnWindowOpacityChanged_Params_Data)");
class  WindowTreeClient_OnWindowParentDrawnStateChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnWindowParentDrawnStateChanged_Params_Data));
      new (data()) WindowTreeClient_OnWindowParentDrawnStateChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnWindowParentDrawnStateChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnWindowParentDrawnStateChanged_Params_Data>(index_);
    }
    WindowTreeClient_OnWindowParentDrawnStateChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window;
  uint8_t drawn : 1;
  uint8_t padfinal_[7];

 private:
  WindowTreeClient_OnWindowParentDrawnStateChanged_Params_Data();
  ~WindowTreeClient_OnWindowParentDrawnStateChanged_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnWindowParentDrawnStateChanged_Params_Data) == 24,
              "Bad sizeof(WindowTreeClient_OnWindowParentDrawnStateChanged_Params_Data)");
class  WindowTreeClient_OnWindowSharedPropertyChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnWindowSharedPropertyChanged_Params_Data));
      new (data()) WindowTreeClient_OnWindowSharedPropertyChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnWindowSharedPropertyChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnWindowSharedPropertyChanged_Params_Data>(index_);
    }
    WindowTreeClient_OnWindowSharedPropertyChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> new_data;

 private:
  WindowTreeClient_OnWindowSharedPropertyChanged_Params_Data();
  ~WindowTreeClient_OnWindowSharedPropertyChanged_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnWindowSharedPropertyChanged_Params_Data) == 32,
              "Bad sizeof(WindowTreeClient_OnWindowSharedPropertyChanged_Params_Data)");
class  WindowTreeClient_OnWindowInputEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnWindowInputEvent_Params_Data));
      new (data()) WindowTreeClient_OnWindowInputEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnWindowInputEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnWindowInputEvent_Params_Data>(index_);
    }
    WindowTreeClient_OnWindowInputEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t event_id;
  uint8_t matches_pointer_watcher : 1;
  uint8_t pad1_[3];
  uint64_t window;
  int64_t display_id;
  uint64_t display_root_window;
  mojo::internal::Pointer<::gfx::mojom::internal::PointF_Data> event_location_in_screen_pixel_layout;
  mojo::internal::Pointer<::ui::mojom::internal::Event_Data> event;

 private:
  WindowTreeClient_OnWindowInputEvent_Params_Data();
  ~WindowTreeClient_OnWindowInputEvent_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnWindowInputEvent_Params_Data) == 56,
              "Bad sizeof(WindowTreeClient_OnWindowInputEvent_Params_Data)");
class  WindowTreeClient_OnPointerEventObserved_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnPointerEventObserved_Params_Data));
      new (data()) WindowTreeClient_OnPointerEventObserved_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnPointerEventObserved_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnPointerEventObserved_Params_Data>(index_);
    }
    WindowTreeClient_OnPointerEventObserved_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::ui::mojom::internal::Event_Data> event;
  uint64_t window_id;
  int64_t display_id;

 private:
  WindowTreeClient_OnPointerEventObserved_Params_Data();
  ~WindowTreeClient_OnPointerEventObserved_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnPointerEventObserved_Params_Data) == 32,
              "Bad sizeof(WindowTreeClient_OnPointerEventObserved_Params_Data)");
class  WindowTreeClient_OnWindowFocused_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnWindowFocused_Params_Data));
      new (data()) WindowTreeClient_OnWindowFocused_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnWindowFocused_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnWindowFocused_Params_Data>(index_);
    }
    WindowTreeClient_OnWindowFocused_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t focused_window_id;

 private:
  WindowTreeClient_OnWindowFocused_Params_Data();
  ~WindowTreeClient_OnWindowFocused_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnWindowFocused_Params_Data) == 16,
              "Bad sizeof(WindowTreeClient_OnWindowFocused_Params_Data)");
class  WindowTreeClient_OnWindowCursorChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnWindowCursorChanged_Params_Data));
      new (data()) WindowTreeClient_OnWindowCursorChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnWindowCursorChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnWindowCursorChanged_Params_Data>(index_);
    }
    WindowTreeClient_OnWindowCursorChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;
  mojo::internal::Pointer<::ui::mojom::internal::CursorData_Data> cursor;

 private:
  WindowTreeClient_OnWindowCursorChanged_Params_Data();
  ~WindowTreeClient_OnWindowCursorChanged_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnWindowCursorChanged_Params_Data) == 24,
              "Bad sizeof(WindowTreeClient_OnWindowCursorChanged_Params_Data)");
class  WindowTreeClient_OnWindowSurfaceChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnWindowSurfaceChanged_Params_Data));
      new (data()) WindowTreeClient_OnWindowSurfaceChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnWindowSurfaceChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnWindowSurfaceChanged_Params_Data>(index_);
    }
    WindowTreeClient_OnWindowSurfaceChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;
  mojo::internal::Pointer<::viz::mojom::internal::SurfaceInfo_Data> surface_info;

 private:
  WindowTreeClient_OnWindowSurfaceChanged_Params_Data();
  ~WindowTreeClient_OnWindowSurfaceChanged_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnWindowSurfaceChanged_Params_Data) == 24,
              "Bad sizeof(WindowTreeClient_OnWindowSurfaceChanged_Params_Data)");
class  WindowTreeClient_OnDragDropStart_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnDragDropStart_Params_Data));
      new (data()) WindowTreeClient_OnDragDropStart_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnDragDropStart_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnDragDropStart_Params_Data>(index_);
    }
    WindowTreeClient_OnDragDropStart_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>>>> drag_data;

 private:
  WindowTreeClient_OnDragDropStart_Params_Data();
  ~WindowTreeClient_OnDragDropStart_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnDragDropStart_Params_Data) == 16,
              "Bad sizeof(WindowTreeClient_OnDragDropStart_Params_Data)");
class  WindowTreeClient_OnDragEnter_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnDragEnter_Params_Data));
      new (data()) WindowTreeClient_OnDragEnter_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnDragEnter_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnDragEnter_Params_Data>(index_);
    }
    WindowTreeClient_OnDragEnter_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window;
  uint32_t key_state;
  uint32_t effect_bitmask;
  mojo::internal::Pointer<::gfx::mojom::internal::Point_Data> screen_position;

 private:
  WindowTreeClient_OnDragEnter_Params_Data();
  ~WindowTreeClient_OnDragEnter_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnDragEnter_Params_Data) == 32,
              "Bad sizeof(WindowTreeClient_OnDragEnter_Params_Data)");
class  WindowTreeClient_OnDragEnter_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnDragEnter_ResponseParams_Data));
      new (data()) WindowTreeClient_OnDragEnter_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnDragEnter_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnDragEnter_ResponseParams_Data>(index_);
    }
    WindowTreeClient_OnDragEnter_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t supported_op_bitmask;
  uint8_t padfinal_[4];

 private:
  WindowTreeClient_OnDragEnter_ResponseParams_Data();
  ~WindowTreeClient_OnDragEnter_ResponseParams_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnDragEnter_ResponseParams_Data) == 16,
              "Bad sizeof(WindowTreeClient_OnDragEnter_ResponseParams_Data)");
class  WindowTreeClient_OnDragOver_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnDragOver_Params_Data));
      new (data()) WindowTreeClient_OnDragOver_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnDragOver_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnDragOver_Params_Data>(index_);
    }
    WindowTreeClient_OnDragOver_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window;
  uint32_t key_state;
  uint32_t effect_bitmask;
  mojo::internal::Pointer<::gfx::mojom::internal::Point_Data> screen_position;

 private:
  WindowTreeClient_OnDragOver_Params_Data();
  ~WindowTreeClient_OnDragOver_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnDragOver_Params_Data) == 32,
              "Bad sizeof(WindowTreeClient_OnDragOver_Params_Data)");
class  WindowTreeClient_OnDragOver_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnDragOver_ResponseParams_Data));
      new (data()) WindowTreeClient_OnDragOver_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnDragOver_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnDragOver_ResponseParams_Data>(index_);
    }
    WindowTreeClient_OnDragOver_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t supported_op_bitmask;
  uint8_t padfinal_[4];

 private:
  WindowTreeClient_OnDragOver_ResponseParams_Data();
  ~WindowTreeClient_OnDragOver_ResponseParams_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnDragOver_ResponseParams_Data) == 16,
              "Bad sizeof(WindowTreeClient_OnDragOver_ResponseParams_Data)");
class  WindowTreeClient_OnDragLeave_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnDragLeave_Params_Data));
      new (data()) WindowTreeClient_OnDragLeave_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnDragLeave_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnDragLeave_Params_Data>(index_);
    }
    WindowTreeClient_OnDragLeave_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window;

 private:
  WindowTreeClient_OnDragLeave_Params_Data();
  ~WindowTreeClient_OnDragLeave_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnDragLeave_Params_Data) == 16,
              "Bad sizeof(WindowTreeClient_OnDragLeave_Params_Data)");
class  WindowTreeClient_OnCompleteDrop_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnCompleteDrop_Params_Data));
      new (data()) WindowTreeClient_OnCompleteDrop_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnCompleteDrop_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnCompleteDrop_Params_Data>(index_);
    }
    WindowTreeClient_OnCompleteDrop_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window;
  uint32_t key_state;
  uint32_t effect_bitmask;
  mojo::internal::Pointer<::gfx::mojom::internal::Point_Data> screen_position;

 private:
  WindowTreeClient_OnCompleteDrop_Params_Data();
  ~WindowTreeClient_OnCompleteDrop_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnCompleteDrop_Params_Data) == 32,
              "Bad sizeof(WindowTreeClient_OnCompleteDrop_Params_Data)");
class  WindowTreeClient_OnCompleteDrop_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnCompleteDrop_ResponseParams_Data));
      new (data()) WindowTreeClient_OnCompleteDrop_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnCompleteDrop_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnCompleteDrop_ResponseParams_Data>(index_);
    }
    WindowTreeClient_OnCompleteDrop_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t action_taken;
  uint8_t padfinal_[4];

 private:
  WindowTreeClient_OnCompleteDrop_ResponseParams_Data();
  ~WindowTreeClient_OnCompleteDrop_ResponseParams_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnCompleteDrop_ResponseParams_Data) == 16,
              "Bad sizeof(WindowTreeClient_OnCompleteDrop_ResponseParams_Data)");
class  WindowTreeClient_OnPerformDragDropCompleted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnPerformDragDropCompleted_Params_Data));
      new (data()) WindowTreeClient_OnPerformDragDropCompleted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnPerformDragDropCompleted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnPerformDragDropCompleted_Params_Data>(index_);
    }
    WindowTreeClient_OnPerformDragDropCompleted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t success : 1;
  uint8_t pad1_[3];
  uint32_t action_taken;
  uint8_t padfinal_[4];

 private:
  WindowTreeClient_OnPerformDragDropCompleted_Params_Data();
  ~WindowTreeClient_OnPerformDragDropCompleted_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnPerformDragDropCompleted_Params_Data) == 24,
              "Bad sizeof(WindowTreeClient_OnPerformDragDropCompleted_Params_Data)");
class  WindowTreeClient_OnDragDropDone_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnDragDropDone_Params_Data));
      new (data()) WindowTreeClient_OnDragDropDone_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnDragDropDone_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnDragDropDone_Params_Data>(index_);
    }
    WindowTreeClient_OnDragDropDone_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  WindowTreeClient_OnDragDropDone_Params_Data();
  ~WindowTreeClient_OnDragDropDone_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnDragDropDone_Params_Data) == 8,
              "Bad sizeof(WindowTreeClient_OnDragDropDone_Params_Data)");
class  WindowTreeClient_OnChangeCompleted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_OnChangeCompleted_Params_Data));
      new (data()) WindowTreeClient_OnChangeCompleted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_OnChangeCompleted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_OnChangeCompleted_Params_Data>(index_);
    }
    WindowTreeClient_OnChangeCompleted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t success : 1;
  uint8_t padfinal_[3];

 private:
  WindowTreeClient_OnChangeCompleted_Params_Data();
  ~WindowTreeClient_OnChangeCompleted_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_OnChangeCompleted_Params_Data) == 16,
              "Bad sizeof(WindowTreeClient_OnChangeCompleted_Params_Data)");
class  WindowTreeClient_RequestClose_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_RequestClose_Params_Data));
      new (data()) WindowTreeClient_RequestClose_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_RequestClose_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_RequestClose_Params_Data>(index_);
    }
    WindowTreeClient_RequestClose_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;

 private:
  WindowTreeClient_RequestClose_Params_Data();
  ~WindowTreeClient_RequestClose_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_RequestClose_Params_Data) == 16,
              "Bad sizeof(WindowTreeClient_RequestClose_Params_Data)");
class  WindowTreeClient_GetWindowManager_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeClient_GetWindowManager_Params_Data));
      new (data()) WindowTreeClient_GetWindowManager_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeClient_GetWindowManager_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeClient_GetWindowManager_Params_Data>(index_);
    }
    WindowTreeClient_GetWindowManager_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedEndpointHandle_Data internal;
  uint8_t padfinal_[4];

 private:
  WindowTreeClient_GetWindowManager_Params_Data();
  ~WindowTreeClient_GetWindowManager_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeClient_GetWindowManager_Params_Data) == 16,
              "Bad sizeof(WindowTreeClient_GetWindowManager_Params_Data)");
class  WindowTreeFactory_CreateWindowTree_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeFactory_CreateWindowTree_Params_Data));
      new (data()) WindowTreeFactory_CreateWindowTree_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeFactory_CreateWindowTree_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeFactory_CreateWindowTree_Params_Data>(index_);
    }
    WindowTreeFactory_CreateWindowTree_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data tree_request;
  mojo::internal::Interface_Data client;
  uint8_t padfinal_[4];

 private:
  WindowTreeFactory_CreateWindowTree_Params_Data();
  ~WindowTreeFactory_CreateWindowTree_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeFactory_CreateWindowTree_Params_Data) == 24,
              "Bad sizeof(WindowTreeFactory_CreateWindowTree_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_MOJOM_SHARED_INTERNAL_H_