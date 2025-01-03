// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_NATIVE_STRUCT_MOJOM_SHARED_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_NATIVE_STRUCT_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"




#include "base/component_export.h"


namespace mojo {
namespace native {
class SerializedHandleDataView;

class NativeStructDataView;



}  // namespace native
}  // namespace mojo

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::mojo::native::SerializedHandleDataView> {
  using Data = ::mojo::native::internal::SerializedHandle_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::native::NativeStructDataView> {
  using Data = ::mojo::native::internal::NativeStruct_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace mojo {
namespace native {

enum class SerializedHandle_Type : int32_t {
  MOJO_HANDLE,
  PLATFORM_FILE,
  WIN_HANDLE,
  MACH_PORT,
  FUCHSIA_HANDLE,
  kMinValue = 0,
  kMaxValue = 4,
};

inline std::ostream& operator<<(std::ostream& os, SerializedHandle_Type value) {
  switch(value) {
    case SerializedHandle_Type::MOJO_HANDLE:
      return os << "SerializedHandle_Type::MOJO_HANDLE";
    case SerializedHandle_Type::PLATFORM_FILE:
      return os << "SerializedHandle_Type::PLATFORM_FILE";
    case SerializedHandle_Type::WIN_HANDLE:
      return os << "SerializedHandle_Type::WIN_HANDLE";
    case SerializedHandle_Type::MACH_PORT:
      return os << "SerializedHandle_Type::MACH_PORT";
    case SerializedHandle_Type::FUCHSIA_HANDLE:
      return os << "SerializedHandle_Type::FUCHSIA_HANDLE";
    default:
      return os << "Unknown SerializedHandle_Type value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(SerializedHandle_Type value) {
  return internal::SerializedHandle_Type_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class SerializedHandleDataView {
 public:
  SerializedHandleDataView() {}

  SerializedHandleDataView(
      internal::SerializedHandle_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedHandle TakeTheHandle() {
    mojo::ScopedHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedHandle>(
            &data_->the_handle, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::mojo::native::SerializedHandle_Type>(
        data_value, output);
  }

  SerializedHandle_Type type() const {
    return static_cast<SerializedHandle_Type>(data_->type);
  }
 private:
  internal::SerializedHandle_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NativeStructDataView {
 public:
  NativeStructDataView() {}

  NativeStructDataView(
      internal::NativeStruct_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetHandlesDataView(
      mojo::ArrayDataView<SerializedHandleDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHandles(UserType* output) {
    auto* pointer = data_->handles.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo::native::SerializedHandleDataView>>(
        pointer, output, context_);
  }
 private:
  internal::NativeStruct_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace native
}  // namespace mojo

namespace std {

template <>
struct hash<::mojo::native::SerializedHandle_Type>
    : public mojo::internal::EnumHashImpl<::mojo::native::SerializedHandle_Type> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::mojo::native::SerializedHandle_Type, ::mojo::native::SerializedHandle_Type> {
  static ::mojo::native::SerializedHandle_Type ToMojom(::mojo::native::SerializedHandle_Type input) { return input; }
  static bool FromMojom(::mojo::native::SerializedHandle_Type input, ::mojo::native::SerializedHandle_Type* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::native::SerializedHandle_Type, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::mojo::native::SerializedHandle_Type, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::mojo::native::SerializedHandle_Type>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::native::SerializedHandleDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::native::SerializedHandleDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::native::internal::SerializedHandle_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::the_handle, input, custom_context)) in_the_handle = CallWithContext(Traits::the_handle, input, custom_context);
    mojo::internal::Serialize<mojo::ScopedHandle>(
        in_the_handle, &(*output)->the_handle, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->the_handle),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid the_handle in SerializedHandle struct");
    mojo::internal::Serialize<::mojo::native::SerializedHandle_Type>(
        CallWithContext(Traits::type, input, custom_context), &(*output)->type);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::mojo::native::internal::SerializedHandle_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::native::SerializedHandleDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


}  // namespace mojo


namespace mojo {
namespace native {



inline void NativeStructDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void NativeStructDataView::GetHandlesDataView(
    mojo::ArrayDataView<SerializedHandleDataView>* output) {
  auto pointer = data_->handles.Get();
  *output = mojo::ArrayDataView<SerializedHandleDataView>(pointer, context_);
}



}  // namespace native
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_NATIVE_STRUCT_MOJOM_SHARED_H_
