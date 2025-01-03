// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_WINDOW_MANAGER_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_UI_PUBLIC_INTERFACES_WINDOW_MANAGER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "gpu/ipc/common/surface_handle.mojom-shared-internal.h"
#include "services/ui/public/interfaces/cursor/cursor.mojom-shared-internal.h"
#include "services/ui/public/interfaces/event_matcher.mojom-shared-internal.h"
#include "services/ui/public/interfaces/window_manager_constants.mojom-shared-internal.h"
#include "services/ui/public/interfaces/window_tree_constants.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/frame_sink_id.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/local_surface_id.mojom-shared-internal.h"
#include "skia/public/interfaces/bitmap.mojom-shared-internal.h"
#include "ui/base/mojo/ui_base_types.mojom-shared-internal.h"
#include "ui/display/mojo/display.mojom-shared-internal.h"
#include "ui/events/mojo/event.mojom-shared-internal.h"
#include "ui/events/mojo/event_constants.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "ui/display/mojo/display.mojom-shared-internal.h"
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
class WmAccelerator_Data;

#pragma pack(push, 1)
class  WmAccelerator_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WmAccelerator_Data));
      new (data()) WmAccelerator_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WmAccelerator_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WmAccelerator_Data>(index_);
    }
    WmAccelerator_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t id;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::ui::mojom::internal::EventMatcher_Data> event_matcher;

 private:
  WmAccelerator_Data();
  ~WmAccelerator_Data() = delete;
};
static_assert(sizeof(WmAccelerator_Data) == 24,
              "Bad sizeof(WmAccelerator_Data)");
// Used by WmAccelerator::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct WmAccelerator_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  WmAccelerator_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~WmAccelerator_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    WmAccelerator_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    WmAccelerator_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  WindowManager_OnConnect_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManager_OnConnect_Params_Data));
      new (data()) WindowManager_OnConnect_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManager_OnConnect_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManager_OnConnect_Params_Data>(index_);
    }
    WindowManager_OnConnect_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  WindowManager_OnConnect_Params_Data();
  ~WindowManager_OnConnect_Params_Data() = delete;
};
static_assert(sizeof(WindowManager_OnConnect_Params_Data) == 8,
              "Bad sizeof(WindowManager_OnConnect_Params_Data)");
class  WindowManager_WmOnAcceleratedWidgetForDisplay_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManager_WmOnAcceleratedWidgetForDisplay_Params_Data));
      new (data()) WindowManager_WmOnAcceleratedWidgetForDisplay_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManager_WmOnAcceleratedWidgetForDisplay_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManager_WmOnAcceleratedWidgetForDisplay_Params_Data>(index_);
    }
    WindowManager_WmOnAcceleratedWidgetForDisplay_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t display_id;
  mojo::internal::Pointer<::gpu::mojom::internal::SurfaceHandle_Data> surface_handle;

 private:
  WindowManager_WmOnAcceleratedWidgetForDisplay_Params_Data();
  ~WindowManager_WmOnAcceleratedWidgetForDisplay_Params_Data() = delete;
};
static_assert(sizeof(WindowManager_WmOnAcceleratedWidgetForDisplay_Params_Data) == 24,
              "Bad sizeof(WindowManager_WmOnAcceleratedWidgetForDisplay_Params_Data)");
class  WindowManager_WmNewDisplayAdded_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManager_WmNewDisplayAdded_Params_Data));
      new (data()) WindowManager_WmNewDisplayAdded_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManager_WmNewDisplayAdded_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManager_WmNewDisplayAdded_Params_Data>(index_);
    }
    WindowManager_WmNewDisplayAdded_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::display::mojom::internal::Display_Data> display;
  mojo::internal::Pointer<::ui::mojom::internal::WindowData_Data> root;
  uint8_t parent_drawn : 1;
  uint8_t pad2_[7];
  mojo::internal::Pointer<::viz::mojom::internal::LocalSurfaceId_Data> local_surface_id;

 private:
  WindowManager_WmNewDisplayAdded_Params_Data();
  ~WindowManager_WmNewDisplayAdded_Params_Data() = delete;
};
static_assert(sizeof(WindowManager_WmNewDisplayAdded_Params_Data) == 40,
              "Bad sizeof(WindowManager_WmNewDisplayAdded_Params_Data)");
class  WindowManager_WmDisplayRemoved_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManager_WmDisplayRemoved_Params_Data));
      new (data()) WindowManager_WmDisplayRemoved_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManager_WmDisplayRemoved_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManager_WmDisplayRemoved_Params_Data>(index_);
    }
    WindowManager_WmDisplayRemoved_Params_Data* operator->() { return data(); }

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
  WindowManager_WmDisplayRemoved_Params_Data();
  ~WindowManager_WmDisplayRemoved_Params_Data() = delete;
};
static_assert(sizeof(WindowManager_WmDisplayRemoved_Params_Data) == 16,
              "Bad sizeof(WindowManager_WmDisplayRemoved_Params_Data)");
class  WindowManager_WmDisplayModified_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManager_WmDisplayModified_Params_Data));
      new (data()) WindowManager_WmDisplayModified_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManager_WmDisplayModified_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManager_WmDisplayModified_Params_Data>(index_);
    }
    WindowManager_WmDisplayModified_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::display::mojom::internal::Display_Data> display;

 private:
  WindowManager_WmDisplayModified_Params_Data();
  ~WindowManager_WmDisplayModified_Params_Data() = delete;
};
static_assert(sizeof(WindowManager_WmDisplayModified_Params_Data) == 16,
              "Bad sizeof(WindowManager_WmDisplayModified_Params_Data)");
class  WindowManager_WmSetBounds_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManager_WmSetBounds_Params_Data));
      new (data()) WindowManager_WmSetBounds_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManager_WmSetBounds_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManager_WmSetBounds_Params_Data>(index_);
    }
    WindowManager_WmSetBounds_Params_Data* operator->() { return data(); }

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

 private:
  WindowManager_WmSetBounds_Params_Data();
  ~WindowManager_WmSetBounds_Params_Data() = delete;
};
static_assert(sizeof(WindowManager_WmSetBounds_Params_Data) == 32,
              "Bad sizeof(WindowManager_WmSetBounds_Params_Data)");
class  WindowManager_WmSetProperty_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManager_WmSetProperty_Params_Data));
      new (data()) WindowManager_WmSetProperty_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManager_WmSetProperty_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManager_WmSetProperty_Params_Data>(index_);
    }
    WindowManager_WmSetProperty_Params_Data* operator->() { return data(); }

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
  WindowManager_WmSetProperty_Params_Data();
  ~WindowManager_WmSetProperty_Params_Data() = delete;
};
static_assert(sizeof(WindowManager_WmSetProperty_Params_Data) == 40,
              "Bad sizeof(WindowManager_WmSetProperty_Params_Data)");
class  WindowManager_WmSetModalType_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManager_WmSetModalType_Params_Data));
      new (data()) WindowManager_WmSetModalType_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManager_WmSetModalType_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManager_WmSetModalType_Params_Data>(index_);
    }
    WindowManager_WmSetModalType_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;
  int32_t type;
  uint8_t padfinal_[4];

 private:
  WindowManager_WmSetModalType_Params_Data();
  ~WindowManager_WmSetModalType_Params_Data() = delete;
};
static_assert(sizeof(WindowManager_WmSetModalType_Params_Data) == 24,
              "Bad sizeof(WindowManager_WmSetModalType_Params_Data)");
class  WindowManager_WmSetCanFocus_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManager_WmSetCanFocus_Params_Data));
      new (data()) WindowManager_WmSetCanFocus_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManager_WmSetCanFocus_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManager_WmSetCanFocus_Params_Data>(index_);
    }
    WindowManager_WmSetCanFocus_Params_Data* operator->() { return data(); }

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
  WindowManager_WmSetCanFocus_Params_Data();
  ~WindowManager_WmSetCanFocus_Params_Data() = delete;
};
static_assert(sizeof(WindowManager_WmSetCanFocus_Params_Data) == 24,
              "Bad sizeof(WindowManager_WmSetCanFocus_Params_Data)");
class  WindowManager_WmCreateTopLevelWindow_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManager_WmCreateTopLevelWindow_Params_Data));
      new (data()) WindowManager_WmCreateTopLevelWindow_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManager_WmCreateTopLevelWindow_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManager_WmCreateTopLevelWindow_Params_Data>(index_);
    }
    WindowManager_WmCreateTopLevelWindow_Params_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::viz::mojom::internal::FrameSinkId_Data> frame_sink_id;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>>>> properties;

 private:
  WindowManager_WmCreateTopLevelWindow_Params_Data();
  ~WindowManager_WmCreateTopLevelWindow_Params_Data() = delete;
};
static_assert(sizeof(WindowManager_WmCreateTopLevelWindow_Params_Data) == 32,
              "Bad sizeof(WindowManager_WmCreateTopLevelWindow_Params_Data)");
class  WindowManager_WmClientJankinessChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManager_WmClientJankinessChanged_Params_Data));
      new (data()) WindowManager_WmClientJankinessChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManager_WmClientJankinessChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManager_WmClientJankinessChanged_Params_Data>(index_);
    }
    WindowManager_WmClientJankinessChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t client_id;
  uint8_t janky : 1;
  uint8_t padfinal_[3];

 private:
  WindowManager_WmClientJankinessChanged_Params_Data();
  ~WindowManager_WmClientJankinessChanged_Params_Data() = delete;
};
static_assert(sizeof(WindowManager_WmClientJankinessChanged_Params_Data) == 16,
              "Bad sizeof(WindowManager_WmClientJankinessChanged_Params_Data)");
class  WindowManager_WmBuildDragImage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManager_WmBuildDragImage_Params_Data));
      new (data()) WindowManager_WmBuildDragImage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManager_WmBuildDragImage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManager_WmBuildDragImage_Params_Data>(index_);
    }
    WindowManager_WmBuildDragImage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Point_Data> screen_location;
  mojo::internal::Pointer<::skia::mojom::internal::Bitmap_Data> drag_image;
  mojo::internal::Pointer<::gfx::mojom::internal::Vector2d_Data> drag_image_offset;
  int32_t source;
  uint8_t padfinal_[4];

 private:
  WindowManager_WmBuildDragImage_Params_Data();
  ~WindowManager_WmBuildDragImage_Params_Data() = delete;
};
static_assert(sizeof(WindowManager_WmBuildDragImage_Params_Data) == 40,
              "Bad sizeof(WindowManager_WmBuildDragImage_Params_Data)");
class  WindowManager_WmMoveDragImage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManager_WmMoveDragImage_Params_Data));
      new (data()) WindowManager_WmMoveDragImage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManager_WmMoveDragImage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManager_WmMoveDragImage_Params_Data>(index_);
    }
    WindowManager_WmMoveDragImage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Point_Data> screen_location;

 private:
  WindowManager_WmMoveDragImage_Params_Data();
  ~WindowManager_WmMoveDragImage_Params_Data() = delete;
};
static_assert(sizeof(WindowManager_WmMoveDragImage_Params_Data) == 16,
              "Bad sizeof(WindowManager_WmMoveDragImage_Params_Data)");
class  WindowManager_WmMoveDragImage_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManager_WmMoveDragImage_ResponseParams_Data));
      new (data()) WindowManager_WmMoveDragImage_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManager_WmMoveDragImage_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManager_WmMoveDragImage_ResponseParams_Data>(index_);
    }
    WindowManager_WmMoveDragImage_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  WindowManager_WmMoveDragImage_ResponseParams_Data();
  ~WindowManager_WmMoveDragImage_ResponseParams_Data() = delete;
};
static_assert(sizeof(WindowManager_WmMoveDragImage_ResponseParams_Data) == 8,
              "Bad sizeof(WindowManager_WmMoveDragImage_ResponseParams_Data)");
class  WindowManager_WmDestroyDragImage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManager_WmDestroyDragImage_Params_Data));
      new (data()) WindowManager_WmDestroyDragImage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManager_WmDestroyDragImage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManager_WmDestroyDragImage_Params_Data>(index_);
    }
    WindowManager_WmDestroyDragImage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  WindowManager_WmDestroyDragImage_Params_Data();
  ~WindowManager_WmDestroyDragImage_Params_Data() = delete;
};
static_assert(sizeof(WindowManager_WmDestroyDragImage_Params_Data) == 8,
              "Bad sizeof(WindowManager_WmDestroyDragImage_Params_Data)");
class  WindowManager_WmPerformMoveLoop_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManager_WmPerformMoveLoop_Params_Data));
      new (data()) WindowManager_WmPerformMoveLoop_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManager_WmPerformMoveLoop_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManager_WmPerformMoveLoop_Params_Data>(index_);
    }
    WindowManager_WmPerformMoveLoop_Params_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::gfx::mojom::internal::Point_Data> cursor_location;

 private:
  WindowManager_WmPerformMoveLoop_Params_Data();
  ~WindowManager_WmPerformMoveLoop_Params_Data() = delete;
};
static_assert(sizeof(WindowManager_WmPerformMoveLoop_Params_Data) == 32,
              "Bad sizeof(WindowManager_WmPerformMoveLoop_Params_Data)");
class  WindowManager_WmCancelMoveLoop_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManager_WmCancelMoveLoop_Params_Data));
      new (data()) WindowManager_WmCancelMoveLoop_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManager_WmCancelMoveLoop_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManager_WmCancelMoveLoop_Params_Data>(index_);
    }
    WindowManager_WmCancelMoveLoop_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t padfinal_[4];

 private:
  WindowManager_WmCancelMoveLoop_Params_Data();
  ~WindowManager_WmCancelMoveLoop_Params_Data() = delete;
};
static_assert(sizeof(WindowManager_WmCancelMoveLoop_Params_Data) == 16,
              "Bad sizeof(WindowManager_WmCancelMoveLoop_Params_Data)");
class  WindowManager_WmDeactivateWindow_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManager_WmDeactivateWindow_Params_Data));
      new (data()) WindowManager_WmDeactivateWindow_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManager_WmDeactivateWindow_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManager_WmDeactivateWindow_Params_Data>(index_);
    }
    WindowManager_WmDeactivateWindow_Params_Data* operator->() { return data(); }

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
  WindowManager_WmDeactivateWindow_Params_Data();
  ~WindowManager_WmDeactivateWindow_Params_Data() = delete;
};
static_assert(sizeof(WindowManager_WmDeactivateWindow_Params_Data) == 16,
              "Bad sizeof(WindowManager_WmDeactivateWindow_Params_Data)");
class  WindowManager_WmStackAbove_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManager_WmStackAbove_Params_Data));
      new (data()) WindowManager_WmStackAbove_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManager_WmStackAbove_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManager_WmStackAbove_Params_Data>(index_);
    }
    WindowManager_WmStackAbove_Params_Data* operator->() { return data(); }

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
  WindowManager_WmStackAbove_Params_Data();
  ~WindowManager_WmStackAbove_Params_Data() = delete;
};
static_assert(sizeof(WindowManager_WmStackAbove_Params_Data) == 32,
              "Bad sizeof(WindowManager_WmStackAbove_Params_Data)");
class  WindowManager_WmStackAtTop_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManager_WmStackAtTop_Params_Data));
      new (data()) WindowManager_WmStackAtTop_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManager_WmStackAtTop_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManager_WmStackAtTop_Params_Data>(index_);
    }
    WindowManager_WmStackAtTop_Params_Data* operator->() { return data(); }

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
  WindowManager_WmStackAtTop_Params_Data();
  ~WindowManager_WmStackAtTop_Params_Data() = delete;
};
static_assert(sizeof(WindowManager_WmStackAtTop_Params_Data) == 24,
              "Bad sizeof(WindowManager_WmStackAtTop_Params_Data)");
class  WindowManager_WmPerformWmAction_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManager_WmPerformWmAction_Params_Data));
      new (data()) WindowManager_WmPerformWmAction_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManager_WmPerformWmAction_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManager_WmPerformWmAction_Params_Data>(index_);
    }
    WindowManager_WmPerformWmAction_Params_Data* operator->() { return data(); }

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
  WindowManager_WmPerformWmAction_Params_Data();
  ~WindowManager_WmPerformWmAction_Params_Data() = delete;
};
static_assert(sizeof(WindowManager_WmPerformWmAction_Params_Data) == 24,
              "Bad sizeof(WindowManager_WmPerformWmAction_Params_Data)");
class  WindowManager_OnAccelerator_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManager_OnAccelerator_Params_Data));
      new (data()) WindowManager_OnAccelerator_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManager_OnAccelerator_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManager_OnAccelerator_Params_Data>(index_);
    }
    WindowManager_OnAccelerator_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t ack_id;
  uint32_t accelerator_id;
  mojo::internal::Pointer<::ui::mojom::internal::Event_Data> event;

 private:
  WindowManager_OnAccelerator_Params_Data();
  ~WindowManager_OnAccelerator_Params_Data() = delete;
};
static_assert(sizeof(WindowManager_OnAccelerator_Params_Data) == 24,
              "Bad sizeof(WindowManager_OnAccelerator_Params_Data)");
class  WindowManager_OnCursorTouchVisibleChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManager_OnCursorTouchVisibleChanged_Params_Data));
      new (data()) WindowManager_OnCursorTouchVisibleChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManager_OnCursorTouchVisibleChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManager_OnCursorTouchVisibleChanged_Params_Data>(index_);
    }
    WindowManager_OnCursorTouchVisibleChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t enabled : 1;
  uint8_t padfinal_[7];

 private:
  WindowManager_OnCursorTouchVisibleChanged_Params_Data();
  ~WindowManager_OnCursorTouchVisibleChanged_Params_Data() = delete;
};
static_assert(sizeof(WindowManager_OnCursorTouchVisibleChanged_Params_Data) == 16,
              "Bad sizeof(WindowManager_OnCursorTouchVisibleChanged_Params_Data)");
class  WindowManager_OnEventBlockedByModalWindow_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManager_OnEventBlockedByModalWindow_Params_Data));
      new (data()) WindowManager_OnEventBlockedByModalWindow_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManager_OnEventBlockedByModalWindow_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManager_OnEventBlockedByModalWindow_Params_Data>(index_);
    }
    WindowManager_OnEventBlockedByModalWindow_Params_Data* operator->() { return data(); }

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
  WindowManager_OnEventBlockedByModalWindow_Params_Data();
  ~WindowManager_OnEventBlockedByModalWindow_Params_Data() = delete;
};
static_assert(sizeof(WindowManager_OnEventBlockedByModalWindow_Params_Data) == 16,
              "Bad sizeof(WindowManager_OnEventBlockedByModalWindow_Params_Data)");
class  WindowManagerClient_AddActivationParent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManagerClient_AddActivationParent_Params_Data));
      new (data()) WindowManagerClient_AddActivationParent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManagerClient_AddActivationParent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManagerClient_AddActivationParent_Params_Data>(index_);
    }
    WindowManagerClient_AddActivationParent_Params_Data* operator->() { return data(); }

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
  WindowManagerClient_AddActivationParent_Params_Data();
  ~WindowManagerClient_AddActivationParent_Params_Data() = delete;
};
static_assert(sizeof(WindowManagerClient_AddActivationParent_Params_Data) == 16,
              "Bad sizeof(WindowManagerClient_AddActivationParent_Params_Data)");
class  WindowManagerClient_RemoveActivationParent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManagerClient_RemoveActivationParent_Params_Data));
      new (data()) WindowManagerClient_RemoveActivationParent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManagerClient_RemoveActivationParent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManagerClient_RemoveActivationParent_Params_Data>(index_);
    }
    WindowManagerClient_RemoveActivationParent_Params_Data* operator->() { return data(); }

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
  WindowManagerClient_RemoveActivationParent_Params_Data();
  ~WindowManagerClient_RemoveActivationParent_Params_Data() = delete;
};
static_assert(sizeof(WindowManagerClient_RemoveActivationParent_Params_Data) == 16,
              "Bad sizeof(WindowManagerClient_RemoveActivationParent_Params_Data)");
class  WindowManagerClient_SetExtendedHitRegionForChildren_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManagerClient_SetExtendedHitRegionForChildren_Params_Data));
      new (data()) WindowManagerClient_SetExtendedHitRegionForChildren_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManagerClient_SetExtendedHitRegionForChildren_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManagerClient_SetExtendedHitRegionForChildren_Params_Data>(index_);
    }
    WindowManagerClient_SetExtendedHitRegionForChildren_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t window_id;
  mojo::internal::Pointer<::gfx::mojom::internal::Insets_Data> mouse_insets;
  mojo::internal::Pointer<::gfx::mojom::internal::Insets_Data> touch_insets;

 private:
  WindowManagerClient_SetExtendedHitRegionForChildren_Params_Data();
  ~WindowManagerClient_SetExtendedHitRegionForChildren_Params_Data() = delete;
};
static_assert(sizeof(WindowManagerClient_SetExtendedHitRegionForChildren_Params_Data) == 32,
              "Bad sizeof(WindowManagerClient_SetExtendedHitRegionForChildren_Params_Data)");
class  WindowManagerClient_AddAccelerators_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManagerClient_AddAccelerators_Params_Data));
      new (data()) WindowManagerClient_AddAccelerators_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManagerClient_AddAccelerators_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManagerClient_AddAccelerators_Params_Data>(index_);
    }
    WindowManagerClient_AddAccelerators_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::WmAccelerator_Data>>> accelerators;

 private:
  WindowManagerClient_AddAccelerators_Params_Data();
  ~WindowManagerClient_AddAccelerators_Params_Data() = delete;
};
static_assert(sizeof(WindowManagerClient_AddAccelerators_Params_Data) == 16,
              "Bad sizeof(WindowManagerClient_AddAccelerators_Params_Data)");
class  WindowManagerClient_AddAccelerators_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManagerClient_AddAccelerators_ResponseParams_Data));
      new (data()) WindowManagerClient_AddAccelerators_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManagerClient_AddAccelerators_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManagerClient_AddAccelerators_ResponseParams_Data>(index_);
    }
    WindowManagerClient_AddAccelerators_ResponseParams_Data* operator->() { return data(); }

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
  WindowManagerClient_AddAccelerators_ResponseParams_Data();
  ~WindowManagerClient_AddAccelerators_ResponseParams_Data() = delete;
};
static_assert(sizeof(WindowManagerClient_AddAccelerators_ResponseParams_Data) == 16,
              "Bad sizeof(WindowManagerClient_AddAccelerators_ResponseParams_Data)");
class  WindowManagerClient_RemoveAccelerator_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManagerClient_RemoveAccelerator_Params_Data));
      new (data()) WindowManagerClient_RemoveAccelerator_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManagerClient_RemoveAccelerator_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManagerClient_RemoveAccelerator_Params_Data>(index_);
    }
    WindowManagerClient_RemoveAccelerator_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t id;
  uint8_t padfinal_[4];

 private:
  WindowManagerClient_RemoveAccelerator_Params_Data();
  ~WindowManagerClient_RemoveAccelerator_Params_Data() = delete;
};
static_assert(sizeof(WindowManagerClient_RemoveAccelerator_Params_Data) == 16,
              "Bad sizeof(WindowManagerClient_RemoveAccelerator_Params_Data)");
class  WindowManagerClient_SetKeyEventsThatDontHideCursor_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManagerClient_SetKeyEventsThatDontHideCursor_Params_Data));
      new (data()) WindowManagerClient_SetKeyEventsThatDontHideCursor_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManagerClient_SetKeyEventsThatDontHideCursor_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManagerClient_SetKeyEventsThatDontHideCursor_Params_Data>(index_);
    }
    WindowManagerClient_SetKeyEventsThatDontHideCursor_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::ui::mojom::internal::EventMatcher_Data>>> dont_hide_cursor_list;

 private:
  WindowManagerClient_SetKeyEventsThatDontHideCursor_Params_Data();
  ~WindowManagerClient_SetKeyEventsThatDontHideCursor_Params_Data() = delete;
};
static_assert(sizeof(WindowManagerClient_SetKeyEventsThatDontHideCursor_Params_Data) == 16,
              "Bad sizeof(WindowManagerClient_SetKeyEventsThatDontHideCursor_Params_Data)");
class  WindowManagerClient_SetDisplayRoot_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManagerClient_SetDisplayRoot_Params_Data));
      new (data()) WindowManagerClient_SetDisplayRoot_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManagerClient_SetDisplayRoot_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManagerClient_SetDisplayRoot_Params_Data>(index_);
    }
    WindowManagerClient_SetDisplayRoot_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::display::mojom::internal::Display_Data> display;
  mojo::internal::Pointer<::ui::mojom::internal::WmViewportMetrics_Data> viewport_metrics;
  uint8_t is_primary_display : 1;
  uint8_t pad2_[7];
  uint64_t window_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::display::mojom::internal::Display_Data>>> mirrors;

 private:
  WindowManagerClient_SetDisplayRoot_Params_Data();
  ~WindowManagerClient_SetDisplayRoot_Params_Data() = delete;
};
static_assert(sizeof(WindowManagerClient_SetDisplayRoot_Params_Data) == 48,
              "Bad sizeof(WindowManagerClient_SetDisplayRoot_Params_Data)");
class  WindowManagerClient_SetDisplayRoot_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManagerClient_SetDisplayRoot_ResponseParams_Data));
      new (data()) WindowManagerClient_SetDisplayRoot_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManagerClient_SetDisplayRoot_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManagerClient_SetDisplayRoot_ResponseParams_Data>(index_);
    }
    WindowManagerClient_SetDisplayRoot_ResponseParams_Data* operator->() { return data(); }

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
  WindowManagerClient_SetDisplayRoot_ResponseParams_Data();
  ~WindowManagerClient_SetDisplayRoot_ResponseParams_Data() = delete;
};
static_assert(sizeof(WindowManagerClient_SetDisplayRoot_ResponseParams_Data) == 16,
              "Bad sizeof(WindowManagerClient_SetDisplayRoot_ResponseParams_Data)");
class  WindowManagerClient_SetDisplayConfiguration_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManagerClient_SetDisplayConfiguration_Params_Data));
      new (data()) WindowManagerClient_SetDisplayConfiguration_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManagerClient_SetDisplayConfiguration_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManagerClient_SetDisplayConfiguration_Params_Data>(index_);
    }
    WindowManagerClient_SetDisplayConfiguration_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::display::mojom::internal::Display_Data>>> displays;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::ui::mojom::internal::WmViewportMetrics_Data>>> viewport_metrics;
  int64_t primary_display_id;
  int64_t internal_display_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::display::mojom::internal::Display_Data>>> mirrors;

 private:
  WindowManagerClient_SetDisplayConfiguration_Params_Data();
  ~WindowManagerClient_SetDisplayConfiguration_Params_Data() = delete;
};
static_assert(sizeof(WindowManagerClient_SetDisplayConfiguration_Params_Data) == 48,
              "Bad sizeof(WindowManagerClient_SetDisplayConfiguration_Params_Data)");
class  WindowManagerClient_SetDisplayConfiguration_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManagerClient_SetDisplayConfiguration_ResponseParams_Data));
      new (data()) WindowManagerClient_SetDisplayConfiguration_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManagerClient_SetDisplayConfiguration_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManagerClient_SetDisplayConfiguration_ResponseParams_Data>(index_);
    }
    WindowManagerClient_SetDisplayConfiguration_ResponseParams_Data* operator->() { return data(); }

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
  WindowManagerClient_SetDisplayConfiguration_ResponseParams_Data();
  ~WindowManagerClient_SetDisplayConfiguration_ResponseParams_Data() = delete;
};
static_assert(sizeof(WindowManagerClient_SetDisplayConfiguration_ResponseParams_Data) == 16,
              "Bad sizeof(WindowManagerClient_SetDisplayConfiguration_ResponseParams_Data)");
class  WindowManagerClient_SwapDisplayRoots_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManagerClient_SwapDisplayRoots_Params_Data));
      new (data()) WindowManagerClient_SwapDisplayRoots_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManagerClient_SwapDisplayRoots_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManagerClient_SwapDisplayRoots_Params_Data>(index_);
    }
    WindowManagerClient_SwapDisplayRoots_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t display_id1;
  int64_t display_id2;

 private:
  WindowManagerClient_SwapDisplayRoots_Params_Data();
  ~WindowManagerClient_SwapDisplayRoots_Params_Data() = delete;
};
static_assert(sizeof(WindowManagerClient_SwapDisplayRoots_Params_Data) == 24,
              "Bad sizeof(WindowManagerClient_SwapDisplayRoots_Params_Data)");
class  WindowManagerClient_SwapDisplayRoots_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManagerClient_SwapDisplayRoots_ResponseParams_Data));
      new (data()) WindowManagerClient_SwapDisplayRoots_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManagerClient_SwapDisplayRoots_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManagerClient_SwapDisplayRoots_ResponseParams_Data>(index_);
    }
    WindowManagerClient_SwapDisplayRoots_ResponseParams_Data* operator->() { return data(); }

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
  WindowManagerClient_SwapDisplayRoots_ResponseParams_Data();
  ~WindowManagerClient_SwapDisplayRoots_ResponseParams_Data() = delete;
};
static_assert(sizeof(WindowManagerClient_SwapDisplayRoots_ResponseParams_Data) == 16,
              "Bad sizeof(WindowManagerClient_SwapDisplayRoots_ResponseParams_Data)");
class  WindowManagerClient_SetBlockingContainers_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManagerClient_SetBlockingContainers_Params_Data));
      new (data()) WindowManagerClient_SetBlockingContainers_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManagerClient_SetBlockingContainers_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManagerClient_SetBlockingContainers_Params_Data>(index_);
    }
    WindowManagerClient_SetBlockingContainers_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::ui::mojom::internal::BlockingContainers_Data>>> blocking_containers;

 private:
  WindowManagerClient_SetBlockingContainers_Params_Data();
  ~WindowManagerClient_SetBlockingContainers_Params_Data() = delete;
};
static_assert(sizeof(WindowManagerClient_SetBlockingContainers_Params_Data) == 16,
              "Bad sizeof(WindowManagerClient_SetBlockingContainers_Params_Data)");
class  WindowManagerClient_SetBlockingContainers_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManagerClient_SetBlockingContainers_ResponseParams_Data));
      new (data()) WindowManagerClient_SetBlockingContainers_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManagerClient_SetBlockingContainers_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManagerClient_SetBlockingContainers_ResponseParams_Data>(index_);
    }
    WindowManagerClient_SetBlockingContainers_ResponseParams_Data* operator->() { return data(); }

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
  WindowManagerClient_SetBlockingContainers_ResponseParams_Data();
  ~WindowManagerClient_SetBlockingContainers_ResponseParams_Data() = delete;
};
static_assert(sizeof(WindowManagerClient_SetBlockingContainers_ResponseParams_Data) == 16,
              "Bad sizeof(WindowManagerClient_SetBlockingContainers_ResponseParams_Data)");
class  WindowManagerClient_WmResponse_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManagerClient_WmResponse_Params_Data));
      new (data()) WindowManagerClient_WmResponse_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManagerClient_WmResponse_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManagerClient_WmResponse_Params_Data>(index_);
    }
    WindowManagerClient_WmResponse_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t response : 1;
  uint8_t padfinal_[3];

 private:
  WindowManagerClient_WmResponse_Params_Data();
  ~WindowManagerClient_WmResponse_Params_Data() = delete;
};
static_assert(sizeof(WindowManagerClient_WmResponse_Params_Data) == 16,
              "Bad sizeof(WindowManagerClient_WmResponse_Params_Data)");
class  WindowManagerClient_WmSetBoundsResponse_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManagerClient_WmSetBoundsResponse_Params_Data));
      new (data()) WindowManagerClient_WmSetBoundsResponse_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManagerClient_WmSetBoundsResponse_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManagerClient_WmSetBoundsResponse_Params_Data>(index_);
    }
    WindowManagerClient_WmSetBoundsResponse_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t change_id;
  uint8_t padfinal_[4];

 private:
  WindowManagerClient_WmSetBoundsResponse_Params_Data();
  ~WindowManagerClient_WmSetBoundsResponse_Params_Data() = delete;
};
static_assert(sizeof(WindowManagerClient_WmSetBoundsResponse_Params_Data) == 16,
              "Bad sizeof(WindowManagerClient_WmSetBoundsResponse_Params_Data)");
class  WindowManagerClient_WmRequestClose_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManagerClient_WmRequestClose_Params_Data));
      new (data()) WindowManagerClient_WmRequestClose_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManagerClient_WmRequestClose_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManagerClient_WmRequestClose_Params_Data>(index_);
    }
    WindowManagerClient_WmRequestClose_Params_Data* operator->() { return data(); }

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
  WindowManagerClient_WmRequestClose_Params_Data();
  ~WindowManagerClient_WmRequestClose_Params_Data() = delete;
};
static_assert(sizeof(WindowManagerClient_WmRequestClose_Params_Data) == 16,
              "Bad sizeof(WindowManagerClient_WmRequestClose_Params_Data)");
class  WindowManagerClient_WmSetFrameDecorationValues_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManagerClient_WmSetFrameDecorationValues_Params_Data));
      new (data()) WindowManagerClient_WmSetFrameDecorationValues_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManagerClient_WmSetFrameDecorationValues_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManagerClient_WmSetFrameDecorationValues_Params_Data>(index_);
    }
    WindowManagerClient_WmSetFrameDecorationValues_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::ui::mojom::internal::FrameDecorationValues_Data> values;

 private:
  WindowManagerClient_WmSetFrameDecorationValues_Params_Data();
  ~WindowManagerClient_WmSetFrameDecorationValues_Params_Data() = delete;
};
static_assert(sizeof(WindowManagerClient_WmSetFrameDecorationValues_Params_Data) == 16,
              "Bad sizeof(WindowManagerClient_WmSetFrameDecorationValues_Params_Data)");
class  WindowManagerClient_WmSetNonClientCursor_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManagerClient_WmSetNonClientCursor_Params_Data));
      new (data()) WindowManagerClient_WmSetNonClientCursor_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManagerClient_WmSetNonClientCursor_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManagerClient_WmSetNonClientCursor_Params_Data>(index_);
    }
    WindowManagerClient_WmSetNonClientCursor_Params_Data* operator->() { return data(); }

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
  WindowManagerClient_WmSetNonClientCursor_Params_Data();
  ~WindowManagerClient_WmSetNonClientCursor_Params_Data() = delete;
};
static_assert(sizeof(WindowManagerClient_WmSetNonClientCursor_Params_Data) == 24,
              "Bad sizeof(WindowManagerClient_WmSetNonClientCursor_Params_Data)");
class  WindowManagerClient_WmLockCursor_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManagerClient_WmLockCursor_Params_Data));
      new (data()) WindowManagerClient_WmLockCursor_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManagerClient_WmLockCursor_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManagerClient_WmLockCursor_Params_Data>(index_);
    }
    WindowManagerClient_WmLockCursor_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  WindowManagerClient_WmLockCursor_Params_Data();
  ~WindowManagerClient_WmLockCursor_Params_Data() = delete;
};
static_assert(sizeof(WindowManagerClient_WmLockCursor_Params_Data) == 8,
              "Bad sizeof(WindowManagerClient_WmLockCursor_Params_Data)");
class  WindowManagerClient_WmUnlockCursor_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManagerClient_WmUnlockCursor_Params_Data));
      new (data()) WindowManagerClient_WmUnlockCursor_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManagerClient_WmUnlockCursor_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManagerClient_WmUnlockCursor_Params_Data>(index_);
    }
    WindowManagerClient_WmUnlockCursor_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  WindowManagerClient_WmUnlockCursor_Params_Data();
  ~WindowManagerClient_WmUnlockCursor_Params_Data() = delete;
};
static_assert(sizeof(WindowManagerClient_WmUnlockCursor_Params_Data) == 8,
              "Bad sizeof(WindowManagerClient_WmUnlockCursor_Params_Data)");
class  WindowManagerClient_WmSetCursorVisible_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManagerClient_WmSetCursorVisible_Params_Data));
      new (data()) WindowManagerClient_WmSetCursorVisible_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManagerClient_WmSetCursorVisible_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManagerClient_WmSetCursorVisible_Params_Data>(index_);
    }
    WindowManagerClient_WmSetCursorVisible_Params_Data* operator->() { return data(); }

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
  WindowManagerClient_WmSetCursorVisible_Params_Data();
  ~WindowManagerClient_WmSetCursorVisible_Params_Data() = delete;
};
static_assert(sizeof(WindowManagerClient_WmSetCursorVisible_Params_Data) == 16,
              "Bad sizeof(WindowManagerClient_WmSetCursorVisible_Params_Data)");
class  WindowManagerClient_WmSetCursorSize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManagerClient_WmSetCursorSize_Params_Data));
      new (data()) WindowManagerClient_WmSetCursorSize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManagerClient_WmSetCursorSize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManagerClient_WmSetCursorSize_Params_Data>(index_);
    }
    WindowManagerClient_WmSetCursorSize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t cursor_size;
  uint8_t padfinal_[4];

 private:
  WindowManagerClient_WmSetCursorSize_Params_Data();
  ~WindowManagerClient_WmSetCursorSize_Params_Data() = delete;
};
static_assert(sizeof(WindowManagerClient_WmSetCursorSize_Params_Data) == 16,
              "Bad sizeof(WindowManagerClient_WmSetCursorSize_Params_Data)");
class  WindowManagerClient_WmSetGlobalOverrideCursor_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManagerClient_WmSetGlobalOverrideCursor_Params_Data));
      new (data()) WindowManagerClient_WmSetGlobalOverrideCursor_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManagerClient_WmSetGlobalOverrideCursor_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManagerClient_WmSetGlobalOverrideCursor_Params_Data>(index_);
    }
    WindowManagerClient_WmSetGlobalOverrideCursor_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::ui::mojom::internal::CursorData_Data> cursor;

 private:
  WindowManagerClient_WmSetGlobalOverrideCursor_Params_Data();
  ~WindowManagerClient_WmSetGlobalOverrideCursor_Params_Data() = delete;
};
static_assert(sizeof(WindowManagerClient_WmSetGlobalOverrideCursor_Params_Data) == 16,
              "Bad sizeof(WindowManagerClient_WmSetGlobalOverrideCursor_Params_Data)");
class  WindowManagerClient_WmMoveCursorToDisplayLocation_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManagerClient_WmMoveCursorToDisplayLocation_Params_Data));
      new (data()) WindowManagerClient_WmMoveCursorToDisplayLocation_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManagerClient_WmMoveCursorToDisplayLocation_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManagerClient_WmMoveCursorToDisplayLocation_Params_Data>(index_);
    }
    WindowManagerClient_WmMoveCursorToDisplayLocation_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Point_Data> display_pixels;
  int64_t display_id;

 private:
  WindowManagerClient_WmMoveCursorToDisplayLocation_Params_Data();
  ~WindowManagerClient_WmMoveCursorToDisplayLocation_Params_Data() = delete;
};
static_assert(sizeof(WindowManagerClient_WmMoveCursorToDisplayLocation_Params_Data) == 24,
              "Bad sizeof(WindowManagerClient_WmMoveCursorToDisplayLocation_Params_Data)");
class  WindowManagerClient_WmConfineCursorToBounds_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManagerClient_WmConfineCursorToBounds_Params_Data));
      new (data()) WindowManagerClient_WmConfineCursorToBounds_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManagerClient_WmConfineCursorToBounds_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManagerClient_WmConfineCursorToBounds_Params_Data>(index_);
    }
    WindowManagerClient_WmConfineCursorToBounds_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> bounds_in_pixels;
  int64_t display_id;

 private:
  WindowManagerClient_WmConfineCursorToBounds_Params_Data();
  ~WindowManagerClient_WmConfineCursorToBounds_Params_Data() = delete;
};
static_assert(sizeof(WindowManagerClient_WmConfineCursorToBounds_Params_Data) == 24,
              "Bad sizeof(WindowManagerClient_WmConfineCursorToBounds_Params_Data)");
class  WindowManagerClient_WmSetCursorTouchVisible_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManagerClient_WmSetCursorTouchVisible_Params_Data));
      new (data()) WindowManagerClient_WmSetCursorTouchVisible_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManagerClient_WmSetCursorTouchVisible_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManagerClient_WmSetCursorTouchVisible_Params_Data>(index_);
    }
    WindowManagerClient_WmSetCursorTouchVisible_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t enabled : 1;
  uint8_t padfinal_[7];

 private:
  WindowManagerClient_WmSetCursorTouchVisible_Params_Data();
  ~WindowManagerClient_WmSetCursorTouchVisible_Params_Data() = delete;
};
static_assert(sizeof(WindowManagerClient_WmSetCursorTouchVisible_Params_Data) == 16,
              "Bad sizeof(WindowManagerClient_WmSetCursorTouchVisible_Params_Data)");
class  WindowManagerClient_OnWmCreatedTopLevelWindow_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManagerClient_OnWmCreatedTopLevelWindow_Params_Data));
      new (data()) WindowManagerClient_OnWmCreatedTopLevelWindow_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManagerClient_OnWmCreatedTopLevelWindow_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManagerClient_OnWmCreatedTopLevelWindow_Params_Data>(index_);
    }
    WindowManagerClient_OnWmCreatedTopLevelWindow_Params_Data* operator->() { return data(); }

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
  WindowManagerClient_OnWmCreatedTopLevelWindow_Params_Data();
  ~WindowManagerClient_OnWmCreatedTopLevelWindow_Params_Data() = delete;
};
static_assert(sizeof(WindowManagerClient_OnWmCreatedTopLevelWindow_Params_Data) == 24,
              "Bad sizeof(WindowManagerClient_OnWmCreatedTopLevelWindow_Params_Data)");
class  WindowManagerClient_OnAcceleratorAck_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManagerClient_OnAcceleratorAck_Params_Data));
      new (data()) WindowManagerClient_OnAcceleratorAck_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManagerClient_OnAcceleratorAck_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManagerClient_OnAcceleratorAck_Params_Data>(index_);
    }
    WindowManagerClient_OnAcceleratorAck_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t ack_id;
  int32_t event_result;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>>>> properties;

 private:
  WindowManagerClient_OnAcceleratorAck_Params_Data();
  ~WindowManagerClient_OnAcceleratorAck_Params_Data() = delete;
};
static_assert(sizeof(WindowManagerClient_OnAcceleratorAck_Params_Data) == 24,
              "Bad sizeof(WindowManagerClient_OnAcceleratorAck_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_WINDOW_MANAGER_MOJOM_SHARED_INTERNAL_H_