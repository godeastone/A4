// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "ui/gfx/mojo/buffer_types.mojom-blink.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/logging.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "ui/gfx/mojo/buffer_types.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
namespace gfx {
namespace mojom {
namespace blink {
BufferUsageAndFormat::BufferUsageAndFormat()
    : usage(),
      format() {}

BufferUsageAndFormat::BufferUsageAndFormat(
    BufferUsage usage_in,
    BufferFormat format_in)
    : usage(std::move(usage_in)),
      format(std::move(format_in)) {}

BufferUsageAndFormat::~BufferUsageAndFormat() = default;
size_t BufferUsageAndFormat::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->usage);
  seed = mojo::internal::WTFHash(seed, this->format);
  return seed;
}

bool BufferUsageAndFormat::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
GpuMemoryBufferId::GpuMemoryBufferId()
    : id() {}

GpuMemoryBufferId::GpuMemoryBufferId(
    int32_t id_in)
    : id(std::move(id_in)) {}

GpuMemoryBufferId::~GpuMemoryBufferId() = default;
size_t GpuMemoryBufferId::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->id);
  return seed;
}

bool GpuMemoryBufferId::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
NativePixmapPlane::NativePixmapPlane()
    : stride(),
      offset(),
      size(),
      modifier() {}

NativePixmapPlane::NativePixmapPlane(
    uint32_t stride_in,
    int32_t offset_in,
    uint64_t size_in,
    uint64_t modifier_in)
    : stride(std::move(stride_in)),
      offset(std::move(offset_in)),
      size(std::move(size_in)),
      modifier(std::move(modifier_in)) {}

NativePixmapPlane::~NativePixmapPlane() = default;
size_t NativePixmapPlane::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->stride);
  seed = mojo::internal::WTFHash(seed, this->offset);
  seed = mojo::internal::WTFHash(seed, this->size);
  seed = mojo::internal::WTFHash(seed, this->modifier);
  return seed;
}

bool NativePixmapPlane::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
NativePixmapHandle::NativePixmapHandle()
    : fds(),
      planes() {}

NativePixmapHandle::NativePixmapHandle(
    WTF::Vector<mojo::ScopedHandle> fds_in,
    WTF::Vector<NativePixmapPlanePtr> planes_in)
    : fds(std::move(fds_in)),
      planes(std::move(planes_in)) {}

NativePixmapHandle::~NativePixmapHandle() = default;

bool NativePixmapHandle::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
GpuMemoryBufferHandle::GpuMemoryBufferHandle()
    : type(),
      id(),
      shared_memory_handle(),
      offset(),
      stride(),
      native_pixmap_handle(),
      mach_port() {}

GpuMemoryBufferHandle::GpuMemoryBufferHandle(
    GpuMemoryBufferType type_in,
    GpuMemoryBufferIdPtr id_in,
    mojo::ScopedSharedBufferHandle shared_memory_handle_in,
    uint32_t offset_in,
    uint32_t stride_in,
    NativePixmapHandlePtr native_pixmap_handle_in,
    mojo::ScopedHandle mach_port_in)
    : type(std::move(type_in)),
      id(std::move(id_in)),
      shared_memory_handle(std::move(shared_memory_handle_in)),
      offset(std::move(offset_in)),
      stride(std::move(stride_in)),
      native_pixmap_handle(std::move(native_pixmap_handle_in)),
      mach_port(std::move(mach_port_in)) {}

GpuMemoryBufferHandle::~GpuMemoryBufferHandle() = default;

bool GpuMemoryBufferHandle::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace gfx

namespace mojo {


// static
bool StructTraits<::gfx::mojom::blink::BufferUsageAndFormat::DataView, ::gfx::mojom::blink::BufferUsageAndFormatPtr>::Read(
    ::gfx::mojom::blink::BufferUsageAndFormat::DataView input,
    ::gfx::mojom::blink::BufferUsageAndFormatPtr* output) {
  bool success = true;
  ::gfx::mojom::blink::BufferUsageAndFormatPtr result(::gfx::mojom::blink::BufferUsageAndFormat::New());
  
      if (!input.ReadUsage(&result->usage))
        success = false;
      if (!input.ReadFormat(&result->format))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::gfx::mojom::blink::GpuMemoryBufferId::DataView, ::gfx::mojom::blink::GpuMemoryBufferIdPtr>::Read(
    ::gfx::mojom::blink::GpuMemoryBufferId::DataView input,
    ::gfx::mojom::blink::GpuMemoryBufferIdPtr* output) {
  bool success = true;
  ::gfx::mojom::blink::GpuMemoryBufferIdPtr result(::gfx::mojom::blink::GpuMemoryBufferId::New());
  
      result->id = input.id();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::gfx::mojom::blink::NativePixmapPlane::DataView, ::gfx::mojom::blink::NativePixmapPlanePtr>::Read(
    ::gfx::mojom::blink::NativePixmapPlane::DataView input,
    ::gfx::mojom::blink::NativePixmapPlanePtr* output) {
  bool success = true;
  ::gfx::mojom::blink::NativePixmapPlanePtr result(::gfx::mojom::blink::NativePixmapPlane::New());
  
      result->stride = input.stride();
      result->offset = input.offset();
      result->size = input.size();
      result->modifier = input.modifier();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::gfx::mojom::blink::NativePixmapHandle::DataView, ::gfx::mojom::blink::NativePixmapHandlePtr>::Read(
    ::gfx::mojom::blink::NativePixmapHandle::DataView input,
    ::gfx::mojom::blink::NativePixmapHandlePtr* output) {
  bool success = true;
  ::gfx::mojom::blink::NativePixmapHandlePtr result(::gfx::mojom::blink::NativePixmapHandle::New());
  
      if (!input.ReadFds(&result->fds))
        success = false;
      if (!input.ReadPlanes(&result->planes))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::gfx::mojom::blink::GpuMemoryBufferHandle::DataView, ::gfx::mojom::blink::GpuMemoryBufferHandlePtr>::Read(
    ::gfx::mojom::blink::GpuMemoryBufferHandle::DataView input,
    ::gfx::mojom::blink::GpuMemoryBufferHandlePtr* output) {
  bool success = true;
  ::gfx::mojom::blink::GpuMemoryBufferHandlePtr result(::gfx::mojom::blink::GpuMemoryBufferHandle::New());
  
      if (!input.ReadType(&result->type))
        success = false;
      if (!input.ReadId(&result->id))
        success = false;
      result->shared_memory_handle = input.TakeSharedMemoryHandle();
      result->offset = input.offset();
      result->stride = input.stride();
      if (!input.ReadNativePixmapHandle(&result->native_pixmap_handle))
        success = false;
      result->mach_port = input.TakeMachPort();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif