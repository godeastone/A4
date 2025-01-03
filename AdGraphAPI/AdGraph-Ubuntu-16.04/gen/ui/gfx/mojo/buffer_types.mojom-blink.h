// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJO_BUFFER_TYPES_MOJOM_BLINK_H_
#define UI_GFX_MOJO_BUFFER_TYPES_MOJOM_BLINK_H_

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

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/mojo/revocable_interface_ptr.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"
#include "third_party/blink/renderer/platform/mojo/revocable_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace WTF {
struct gfx_mojom_internal_BufferFormat_DataHashFn {
  static unsigned GetHash(const ::gfx::mojom::BufferFormat& value) {
    using utype = std::underlying_type<::gfx::mojom::BufferFormat>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::gfx::mojom::BufferFormat& left, const ::gfx::mojom::BufferFormat& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::gfx::mojom::BufferFormat> {
  using Hash = gfx_mojom_internal_BufferFormat_DataHashFn;
};

template <>
struct HashTraits<::gfx::mojom::BufferFormat>
    : public GenericHashTraits<::gfx::mojom::BufferFormat> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::gfx::mojom::BufferFormat& value) {
    return value == static_cast<::gfx::mojom::BufferFormat>(-1000000);
  }
  static void ConstructDeletedValue(::gfx::mojom::BufferFormat& slot, bool) {
    slot = static_cast<::gfx::mojom::BufferFormat>(-1000001);
  }
  static bool IsDeletedValue(const ::gfx::mojom::BufferFormat& value) {
    return value == static_cast<::gfx::mojom::BufferFormat>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct gfx_mojom_internal_BufferUsage_DataHashFn {
  static unsigned GetHash(const ::gfx::mojom::BufferUsage& value) {
    using utype = std::underlying_type<::gfx::mojom::BufferUsage>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::gfx::mojom::BufferUsage& left, const ::gfx::mojom::BufferUsage& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::gfx::mojom::BufferUsage> {
  using Hash = gfx_mojom_internal_BufferUsage_DataHashFn;
};

template <>
struct HashTraits<::gfx::mojom::BufferUsage>
    : public GenericHashTraits<::gfx::mojom::BufferUsage> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::gfx::mojom::BufferUsage& value) {
    return value == static_cast<::gfx::mojom::BufferUsage>(-1000000);
  }
  static void ConstructDeletedValue(::gfx::mojom::BufferUsage& slot, bool) {
    slot = static_cast<::gfx::mojom::BufferUsage>(-1000001);
  }
  static bool IsDeletedValue(const ::gfx::mojom::BufferUsage& value) {
    return value == static_cast<::gfx::mojom::BufferUsage>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct gfx_mojom_internal_GpuMemoryBufferType_DataHashFn {
  static unsigned GetHash(const ::gfx::mojom::GpuMemoryBufferType& value) {
    using utype = std::underlying_type<::gfx::mojom::GpuMemoryBufferType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::gfx::mojom::GpuMemoryBufferType& left, const ::gfx::mojom::GpuMemoryBufferType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::gfx::mojom::GpuMemoryBufferType> {
  using Hash = gfx_mojom_internal_GpuMemoryBufferType_DataHashFn;
};

template <>
struct HashTraits<::gfx::mojom::GpuMemoryBufferType>
    : public GenericHashTraits<::gfx::mojom::GpuMemoryBufferType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::gfx::mojom::GpuMemoryBufferType& value) {
    return value == static_cast<::gfx::mojom::GpuMemoryBufferType>(-1000000);
  }
  static void ConstructDeletedValue(::gfx::mojom::GpuMemoryBufferType& slot, bool) {
    slot = static_cast<::gfx::mojom::GpuMemoryBufferType>(-1000001);
  }
  static bool IsDeletedValue(const ::gfx::mojom::GpuMemoryBufferType& value) {
    return value == static_cast<::gfx::mojom::GpuMemoryBufferType>(-1000001);
  }
};
}  // namespace WTF


namespace gfx {
namespace mojom {
namespace blink {
using BufferFormat = BufferFormat;  // Alias for definition in the parent namespace.
using BufferUsage = BufferUsage;  // Alias for definition in the parent namespace.
using GpuMemoryBufferType = GpuMemoryBufferType;  // Alias for definition in the parent namespace.
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
      BufferUsage usage,
      BufferFormat format);

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
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BufferUsageAndFormat::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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

  BufferUsage usage;
  BufferFormat format;

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
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        GpuMemoryBufferId::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        NativePixmapPlane::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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
      WTF::Vector<mojo::ScopedHandle> fds,
      WTF::Vector<NativePixmapPlanePtr> planes);

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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        NativePixmapHandle::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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

  WTF::Vector<mojo::ScopedHandle> fds;
  WTF::Vector<NativePixmapPlanePtr> planes;

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
      GpuMemoryBufferType type,
      GpuMemoryBufferIdPtr id,
      mojo::ScopedSharedBufferHandle shared_memory_handle,
      uint32_t offset,
      uint32_t stride,
      NativePixmapHandlePtr native_pixmap_handle,
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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        GpuMemoryBufferHandle::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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

  GpuMemoryBufferType type;
  GpuMemoryBufferIdPtr id;
  mojo::ScopedSharedBufferHandle shared_memory_handle;
  uint32_t offset;
  uint32_t stride;
  NativePixmapHandlePtr native_pixmap_handle;
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


}  // namespace blink
}  // namespace mojom
}  // namespace gfx

namespace mojo {


template <>
struct  StructTraits<::gfx::mojom::blink::BufferUsageAndFormat::DataView,
                                         ::gfx::mojom::blink::BufferUsageAndFormatPtr> {
  static bool IsNull(const ::gfx::mojom::blink::BufferUsageAndFormatPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::blink::BufferUsageAndFormatPtr* output) { output->reset(); }

  static decltype(::gfx::mojom::blink::BufferUsageAndFormat::usage) usage(
      const ::gfx::mojom::blink::BufferUsageAndFormatPtr& input) {
    return input->usage;
  }

  static decltype(::gfx::mojom::blink::BufferUsageAndFormat::format) format(
      const ::gfx::mojom::blink::BufferUsageAndFormatPtr& input) {
    return input->format;
  }

  static bool Read(::gfx::mojom::blink::BufferUsageAndFormat::DataView input, ::gfx::mojom::blink::BufferUsageAndFormatPtr* output);
};


template <>
struct  StructTraits<::gfx::mojom::blink::GpuMemoryBufferId::DataView,
                                         ::gfx::mojom::blink::GpuMemoryBufferIdPtr> {
  static bool IsNull(const ::gfx::mojom::blink::GpuMemoryBufferIdPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::blink::GpuMemoryBufferIdPtr* output) { output->reset(); }

  static decltype(::gfx::mojom::blink::GpuMemoryBufferId::id) id(
      const ::gfx::mojom::blink::GpuMemoryBufferIdPtr& input) {
    return input->id;
  }

  static bool Read(::gfx::mojom::blink::GpuMemoryBufferId::DataView input, ::gfx::mojom::blink::GpuMemoryBufferIdPtr* output);
};


template <>
struct  StructTraits<::gfx::mojom::blink::NativePixmapPlane::DataView,
                                         ::gfx::mojom::blink::NativePixmapPlanePtr> {
  static bool IsNull(const ::gfx::mojom::blink::NativePixmapPlanePtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::blink::NativePixmapPlanePtr* output) { output->reset(); }

  static decltype(::gfx::mojom::blink::NativePixmapPlane::stride) stride(
      const ::gfx::mojom::blink::NativePixmapPlanePtr& input) {
    return input->stride;
  }

  static decltype(::gfx::mojom::blink::NativePixmapPlane::offset) offset(
      const ::gfx::mojom::blink::NativePixmapPlanePtr& input) {
    return input->offset;
  }

  static decltype(::gfx::mojom::blink::NativePixmapPlane::size) size(
      const ::gfx::mojom::blink::NativePixmapPlanePtr& input) {
    return input->size;
  }

  static decltype(::gfx::mojom::blink::NativePixmapPlane::modifier) modifier(
      const ::gfx::mojom::blink::NativePixmapPlanePtr& input) {
    return input->modifier;
  }

  static bool Read(::gfx::mojom::blink::NativePixmapPlane::DataView input, ::gfx::mojom::blink::NativePixmapPlanePtr* output);
};


template <>
struct  StructTraits<::gfx::mojom::blink::NativePixmapHandle::DataView,
                                         ::gfx::mojom::blink::NativePixmapHandlePtr> {
  static bool IsNull(const ::gfx::mojom::blink::NativePixmapHandlePtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::blink::NativePixmapHandlePtr* output) { output->reset(); }

  static  decltype(::gfx::mojom::blink::NativePixmapHandle::fds)& fds(
       ::gfx::mojom::blink::NativePixmapHandlePtr& input) {
    return input->fds;
  }

  static const decltype(::gfx::mojom::blink::NativePixmapHandle::planes)& planes(
      const ::gfx::mojom::blink::NativePixmapHandlePtr& input) {
    return input->planes;
  }

  static bool Read(::gfx::mojom::blink::NativePixmapHandle::DataView input, ::gfx::mojom::blink::NativePixmapHandlePtr* output);
};


template <>
struct  StructTraits<::gfx::mojom::blink::GpuMemoryBufferHandle::DataView,
                                         ::gfx::mojom::blink::GpuMemoryBufferHandlePtr> {
  static bool IsNull(const ::gfx::mojom::blink::GpuMemoryBufferHandlePtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::blink::GpuMemoryBufferHandlePtr* output) { output->reset(); }

  static decltype(::gfx::mojom::blink::GpuMemoryBufferHandle::type) type(
      const ::gfx::mojom::blink::GpuMemoryBufferHandlePtr& input) {
    return input->type;
  }

  static const decltype(::gfx::mojom::blink::GpuMemoryBufferHandle::id)& id(
      const ::gfx::mojom::blink::GpuMemoryBufferHandlePtr& input) {
    return input->id;
  }

  static  decltype(::gfx::mojom::blink::GpuMemoryBufferHandle::shared_memory_handle)& shared_memory_handle(
       ::gfx::mojom::blink::GpuMemoryBufferHandlePtr& input) {
    return input->shared_memory_handle;
  }

  static decltype(::gfx::mojom::blink::GpuMemoryBufferHandle::offset) offset(
      const ::gfx::mojom::blink::GpuMemoryBufferHandlePtr& input) {
    return input->offset;
  }

  static decltype(::gfx::mojom::blink::GpuMemoryBufferHandle::stride) stride(
      const ::gfx::mojom::blink::GpuMemoryBufferHandlePtr& input) {
    return input->stride;
  }

  static  decltype(::gfx::mojom::blink::GpuMemoryBufferHandle::native_pixmap_handle)& native_pixmap_handle(
       ::gfx::mojom::blink::GpuMemoryBufferHandlePtr& input) {
    return input->native_pixmap_handle;
  }

  static  decltype(::gfx::mojom::blink::GpuMemoryBufferHandle::mach_port)& mach_port(
       ::gfx::mojom::blink::GpuMemoryBufferHandlePtr& input) {
    return input->mach_port;
  }

  static bool Read(::gfx::mojom::blink::GpuMemoryBufferHandle::DataView input, ::gfx::mojom::blink::GpuMemoryBufferHandlePtr* output);
};

}  // namespace mojo

#endif  // UI_GFX_MOJO_BUFFER_TYPES_MOJOM_BLINK_H_