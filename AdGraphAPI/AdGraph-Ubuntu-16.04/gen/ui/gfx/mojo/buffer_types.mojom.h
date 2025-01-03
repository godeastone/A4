// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJO_BUFFER_TYPES_MOJOM_H_
#define UI_GFX_MOJO_BUFFER_TYPES_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "ui/gfx/mojo/buffer_types.mojom-shared.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "ui/gfx/buffer_types.h"
#include "ui/gfx/gpu_memory_buffer.h"
#include "ui/gfx/native_pixmap_handle.h"


namespace gfx {
namespace mojom {
class BufferUsageAndFormat;
using BufferUsageAndFormatPtr = mojo::InlinedStructPtr<BufferUsageAndFormat>;

class GpuMemoryBufferId;
using GpuMemoryBufferIdPtr = mojo::InlinedStructPtr<GpuMemoryBufferId>;

class NativePixmapPlane;
using NativePixmapPlanePtr = mojo::InlinedStructPtr<NativePixmapPlane>;

class NativePixmapHandle;
using NativePixmapHandlePtr = mojo::StructPtr<NativePixmapHandle>;

class GpuMemoryBufferHandle;
using GpuMemoryBufferHandlePtr = mojo::StructPtr<GpuMemoryBufferHandle>;



class  BufferUsageAndFormat {
 public:
  using DataView = BufferUsageAndFormatDataView;
  using Data_ = internal::BufferUsageAndFormat_Data;

  template <typename... Args>
  static BufferUsageAndFormatPtr New(Args&&... args) {
    return BufferUsageAndFormatPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BufferUsageAndFormatPtr From(const U& u) {
    return mojo::TypeConverter<BufferUsageAndFormatPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BufferUsageAndFormat>::Convert(*this);
  }


  BufferUsageAndFormat();

  BufferUsageAndFormat(
      gfx::BufferUsage usage,
      gfx::BufferFormat format);

  ~BufferUsageAndFormat();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BufferUsageAndFormatPtr>
  BufferUsageAndFormatPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, BufferUsageAndFormat>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BufferUsageAndFormat::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        BufferUsageAndFormat::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::BufferUsageAndFormat_UnserializedMessageContext<
            UserType, BufferUsageAndFormat::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<BufferUsageAndFormat::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return BufferUsageAndFormat::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::BufferUsageAndFormat_UnserializedMessageContext<
            UserType, BufferUsageAndFormat::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<BufferUsageAndFormat::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  gfx::BufferUsage usage;
  gfx::BufferFormat format;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  GpuMemoryBufferId {
 public:
  using DataView = GpuMemoryBufferIdDataView;
  using Data_ = internal::GpuMemoryBufferId_Data;

  template <typename... Args>
  static GpuMemoryBufferIdPtr New(Args&&... args) {
    return GpuMemoryBufferIdPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static GpuMemoryBufferIdPtr From(const U& u) {
    return mojo::TypeConverter<GpuMemoryBufferIdPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, GpuMemoryBufferId>::Convert(*this);
  }


  GpuMemoryBufferId();

  explicit GpuMemoryBufferId(
      int32_t id);

  ~GpuMemoryBufferId();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = GpuMemoryBufferIdPtr>
  GpuMemoryBufferIdPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, GpuMemoryBufferId>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        GpuMemoryBufferId::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        GpuMemoryBufferId::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::GpuMemoryBufferId_UnserializedMessageContext<
            UserType, GpuMemoryBufferId::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<GpuMemoryBufferId::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return GpuMemoryBufferId::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::GpuMemoryBufferId_UnserializedMessageContext<
            UserType, GpuMemoryBufferId::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<GpuMemoryBufferId::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  int32_t id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  NativePixmapPlane {
 public:
  using DataView = NativePixmapPlaneDataView;
  using Data_ = internal::NativePixmapPlane_Data;

  template <typename... Args>
  static NativePixmapPlanePtr New(Args&&... args) {
    return NativePixmapPlanePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static NativePixmapPlanePtr From(const U& u) {
    return mojo::TypeConverter<NativePixmapPlanePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NativePixmapPlane>::Convert(*this);
  }


  NativePixmapPlane();

  NativePixmapPlane(
      uint32_t stride,
      int32_t offset,
      uint64_t size,
      uint64_t modifier);

  ~NativePixmapPlane();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = NativePixmapPlanePtr>
  NativePixmapPlanePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, NativePixmapPlane>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        NativePixmapPlane::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        NativePixmapPlane::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::NativePixmapPlane_UnserializedMessageContext<
            UserType, NativePixmapPlane::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<NativePixmapPlane::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return NativePixmapPlane::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::NativePixmapPlane_UnserializedMessageContext<
            UserType, NativePixmapPlane::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<NativePixmapPlane::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  uint32_t stride;
  int32_t offset;
  uint64_t size;
  uint64_t modifier;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};









class  NativePixmapHandle {
 public:
  using DataView = NativePixmapHandleDataView;
  using Data_ = internal::NativePixmapHandle_Data;

  template <typename... Args>
  static NativePixmapHandlePtr New(Args&&... args) {
    return NativePixmapHandlePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static NativePixmapHandlePtr From(const U& u) {
    return mojo::TypeConverter<NativePixmapHandlePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NativePixmapHandle>::Convert(*this);
  }


  NativePixmapHandle();

  NativePixmapHandle(
      std::vector<mojo::ScopedHandle> fds,
      const std::vector<gfx::NativePixmapPlane>& planes);

  ~NativePixmapHandle();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = NativePixmapHandlePtr>
  NativePixmapHandlePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, NativePixmapHandle>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        NativePixmapHandle::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        NativePixmapHandle::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::NativePixmapHandle_UnserializedMessageContext<
            UserType, NativePixmapHandle::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<NativePixmapHandle::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return NativePixmapHandle::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::NativePixmapHandle_UnserializedMessageContext<
            UserType, NativePixmapHandle::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<NativePixmapHandle::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::vector<mojo::ScopedHandle> fds;
  std::vector<gfx::NativePixmapPlane> planes;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(NativePixmapHandle);
};


class  GpuMemoryBufferHandle {
 public:
  using DataView = GpuMemoryBufferHandleDataView;
  using Data_ = internal::GpuMemoryBufferHandle_Data;

  template <typename... Args>
  static GpuMemoryBufferHandlePtr New(Args&&... args) {
    return GpuMemoryBufferHandlePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static GpuMemoryBufferHandlePtr From(const U& u) {
    return mojo::TypeConverter<GpuMemoryBufferHandlePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, GpuMemoryBufferHandle>::Convert(*this);
  }


  GpuMemoryBufferHandle();

  GpuMemoryBufferHandle(
      gfx::GpuMemoryBufferType type,
      gfx::GpuMemoryBufferId id,
      mojo::ScopedSharedBufferHandle shared_memory_handle,
      uint32_t offset,
      uint32_t stride,
      const base::Optional<gfx::NativePixmapHandle>& native_pixmap_handle,
      mojo::ScopedHandle mach_port);

  ~GpuMemoryBufferHandle();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = GpuMemoryBufferHandlePtr>
  GpuMemoryBufferHandlePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, GpuMemoryBufferHandle>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        GpuMemoryBufferHandle::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        GpuMemoryBufferHandle::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::GpuMemoryBufferHandle_UnserializedMessageContext<
            UserType, GpuMemoryBufferHandle::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<GpuMemoryBufferHandle::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return GpuMemoryBufferHandle::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::GpuMemoryBufferHandle_UnserializedMessageContext<
            UserType, GpuMemoryBufferHandle::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<GpuMemoryBufferHandle::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  gfx::GpuMemoryBufferType type;
  gfx::GpuMemoryBufferId id;
  mojo::ScopedSharedBufferHandle shared_memory_handle;
  uint32_t offset;
  uint32_t stride;
  base::Optional<gfx::NativePixmapHandle> native_pixmap_handle;
  mojo::ScopedHandle mach_port;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(GpuMemoryBufferHandle);
};

template <typename StructPtrType>
BufferUsageAndFormatPtr BufferUsageAndFormat::Clone() const {
  return New(
      mojo::Clone(usage),
      mojo::Clone(format)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, BufferUsageAndFormat>::value>::type*>
bool BufferUsageAndFormat::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->usage, other_struct.usage))
    return false;
  if (!mojo::Equals(this->format, other_struct.format))
    return false;
  return true;
}
template <typename StructPtrType>
GpuMemoryBufferIdPtr GpuMemoryBufferId::Clone() const {
  return New(
      mojo::Clone(id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, GpuMemoryBufferId>::value>::type*>
bool GpuMemoryBufferId::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  return true;
}
template <typename StructPtrType>
NativePixmapPlanePtr NativePixmapPlane::Clone() const {
  return New(
      mojo::Clone(stride),
      mojo::Clone(offset),
      mojo::Clone(size),
      mojo::Clone(modifier)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, NativePixmapPlane>::value>::type*>
bool NativePixmapPlane::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->stride, other_struct.stride))
    return false;
  if (!mojo::Equals(this->offset, other_struct.offset))
    return false;
  if (!mojo::Equals(this->size, other_struct.size))
    return false;
  if (!mojo::Equals(this->modifier, other_struct.modifier))
    return false;
  return true;
}
template <typename StructPtrType>
NativePixmapHandlePtr NativePixmapHandle::Clone() const {
  return New(
      mojo::Clone(fds),
      mojo::Clone(planes)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, NativePixmapHandle>::value>::type*>
bool NativePixmapHandle::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->fds, other_struct.fds))
    return false;
  if (!mojo::Equals(this->planes, other_struct.planes))
    return false;
  return true;
}
template <typename StructPtrType>
GpuMemoryBufferHandlePtr GpuMemoryBufferHandle::Clone() const {
  return New(
      mojo::Clone(type),
      mojo::Clone(id),
      mojo::Clone(shared_memory_handle),
      mojo::Clone(offset),
      mojo::Clone(stride),
      mojo::Clone(native_pixmap_handle),
      mojo::Clone(mach_port)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, GpuMemoryBufferHandle>::value>::type*>
bool GpuMemoryBufferHandle::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->shared_memory_handle, other_struct.shared_memory_handle))
    return false;
  if (!mojo::Equals(this->offset, other_struct.offset))
    return false;
  if (!mojo::Equals(this->stride, other_struct.stride))
    return false;
  if (!mojo::Equals(this->native_pixmap_handle, other_struct.native_pixmap_handle))
    return false;
  if (!mojo::Equals(this->mach_port, other_struct.mach_port))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace gfx

namespace mojo {


template <>
struct  StructTraits<::gfx::mojom::BufferUsageAndFormat::DataView,
                                         ::gfx::mojom::BufferUsageAndFormatPtr> {
  static bool IsNull(const ::gfx::mojom::BufferUsageAndFormatPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::BufferUsageAndFormatPtr* output) { output->reset(); }

  static decltype(::gfx::mojom::BufferUsageAndFormat::usage) usage(
      const ::gfx::mojom::BufferUsageAndFormatPtr& input) {
    return input->usage;
  }

  static decltype(::gfx::mojom::BufferUsageAndFormat::format) format(
      const ::gfx::mojom::BufferUsageAndFormatPtr& input) {
    return input->format;
  }

  static bool Read(::gfx::mojom::BufferUsageAndFormat::DataView input, ::gfx::mojom::BufferUsageAndFormatPtr* output);
};


template <>
struct  StructTraits<::gfx::mojom::GpuMemoryBufferId::DataView,
                                         ::gfx::mojom::GpuMemoryBufferIdPtr> {
  static bool IsNull(const ::gfx::mojom::GpuMemoryBufferIdPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::GpuMemoryBufferIdPtr* output) { output->reset(); }

  static decltype(::gfx::mojom::GpuMemoryBufferId::id) id(
      const ::gfx::mojom::GpuMemoryBufferIdPtr& input) {
    return input->id;
  }

  static bool Read(::gfx::mojom::GpuMemoryBufferId::DataView input, ::gfx::mojom::GpuMemoryBufferIdPtr* output);
};


template <>
struct  StructTraits<::gfx::mojom::NativePixmapPlane::DataView,
                                         ::gfx::mojom::NativePixmapPlanePtr> {
  static bool IsNull(const ::gfx::mojom::NativePixmapPlanePtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::NativePixmapPlanePtr* output) { output->reset(); }

  static decltype(::gfx::mojom::NativePixmapPlane::stride) stride(
      const ::gfx::mojom::NativePixmapPlanePtr& input) {
    return input->stride;
  }

  static decltype(::gfx::mojom::NativePixmapPlane::offset) offset(
      const ::gfx::mojom::NativePixmapPlanePtr& input) {
    return input->offset;
  }

  static decltype(::gfx::mojom::NativePixmapPlane::size) size(
      const ::gfx::mojom::NativePixmapPlanePtr& input) {
    return input->size;
  }

  static decltype(::gfx::mojom::NativePixmapPlane::modifier) modifier(
      const ::gfx::mojom::NativePixmapPlanePtr& input) {
    return input->modifier;
  }

  static bool Read(::gfx::mojom::NativePixmapPlane::DataView input, ::gfx::mojom::NativePixmapPlanePtr* output);
};


template <>
struct  StructTraits<::gfx::mojom::NativePixmapHandle::DataView,
                                         ::gfx::mojom::NativePixmapHandlePtr> {
  static bool IsNull(const ::gfx::mojom::NativePixmapHandlePtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::NativePixmapHandlePtr* output) { output->reset(); }

  static  decltype(::gfx::mojom::NativePixmapHandle::fds)& fds(
       ::gfx::mojom::NativePixmapHandlePtr& input) {
    return input->fds;
  }

  static const decltype(::gfx::mojom::NativePixmapHandle::planes)& planes(
      const ::gfx::mojom::NativePixmapHandlePtr& input) {
    return input->planes;
  }

  static bool Read(::gfx::mojom::NativePixmapHandle::DataView input, ::gfx::mojom::NativePixmapHandlePtr* output);
};


template <>
struct  StructTraits<::gfx::mojom::GpuMemoryBufferHandle::DataView,
                                         ::gfx::mojom::GpuMemoryBufferHandlePtr> {
  static bool IsNull(const ::gfx::mojom::GpuMemoryBufferHandlePtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::GpuMemoryBufferHandlePtr* output) { output->reset(); }

  static decltype(::gfx::mojom::GpuMemoryBufferHandle::type) type(
      const ::gfx::mojom::GpuMemoryBufferHandlePtr& input) {
    return input->type;
  }

  static const decltype(::gfx::mojom::GpuMemoryBufferHandle::id)& id(
      const ::gfx::mojom::GpuMemoryBufferHandlePtr& input) {
    return input->id;
  }

  static  decltype(::gfx::mojom::GpuMemoryBufferHandle::shared_memory_handle)& shared_memory_handle(
       ::gfx::mojom::GpuMemoryBufferHandlePtr& input) {
    return input->shared_memory_handle;
  }

  static decltype(::gfx::mojom::GpuMemoryBufferHandle::offset) offset(
      const ::gfx::mojom::GpuMemoryBufferHandlePtr& input) {
    return input->offset;
  }

  static decltype(::gfx::mojom::GpuMemoryBufferHandle::stride) stride(
      const ::gfx::mojom::GpuMemoryBufferHandlePtr& input) {
    return input->stride;
  }

  static  decltype(::gfx::mojom::GpuMemoryBufferHandle::native_pixmap_handle)& native_pixmap_handle(
       ::gfx::mojom::GpuMemoryBufferHandlePtr& input) {
    return input->native_pixmap_handle;
  }

  static  decltype(::gfx::mojom::GpuMemoryBufferHandle::mach_port)& mach_port(
       ::gfx::mojom::GpuMemoryBufferHandlePtr& input) {
    return input->mach_port;
  }

  static bool Read(::gfx::mojom::GpuMemoryBufferHandle::DataView input, ::gfx::mojom::GpuMemoryBufferHandlePtr* output);
};

}  // namespace mojo

#endif  // UI_GFX_MOJO_BUFFER_TYPES_MOJOM_H_