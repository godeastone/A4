// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_USB_INTERNALS_USB_INTERNALS_MOJOM_SHARED_H_
#define CHROME_BROWSER_UI_WEBUI_USB_INTERNALS_USB_INTERNALS_MOJOM_SHARED_H_

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
#include "chrome/browser/ui/webui/usb_internals/usb_internals.mojom-shared-internal.h"
#include "url/mojom/origin.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace mojom {
class TestDeviceInfoDataView;



}  // namespace mojom

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::mojom::TestDeviceInfoDataView> {
  using Data = ::mojom::internal::TestDeviceInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace mojom {
// Interface base classes. They are used for type safety check.
class UsbInternalsPageHandlerInterfaceBase {};

using UsbInternalsPageHandlerPtrDataView =
    mojo::InterfacePtrDataView<UsbInternalsPageHandlerInterfaceBase>;
using UsbInternalsPageHandlerRequestDataView =
    mojo::InterfaceRequestDataView<UsbInternalsPageHandlerInterfaceBase>;
using UsbInternalsPageHandlerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<UsbInternalsPageHandlerInterfaceBase>;
using UsbInternalsPageHandlerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<UsbInternalsPageHandlerInterfaceBase>;
class TestDeviceInfoDataView {
 public:
  TestDeviceInfoDataView() {}

  TestDeviceInfoDataView(
      internal::TestDeviceInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetGuidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGuid(UserType* output) {
    auto* pointer = data_->guid.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSerialNumberDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSerialNumber(UserType* output) {
    auto* pointer = data_->serial_number.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetLandingPageDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLandingPage(UserType* output) {
    auto* pointer = data_->landing_page.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::TestDeviceInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbInternalsPageHandler_AddDeviceForTesting_ParamsDataView {
 public:
  UsbInternalsPageHandler_AddDeviceForTesting_ParamsDataView() {}

  UsbInternalsPageHandler_AddDeviceForTesting_ParamsDataView(
      internal::UsbInternalsPageHandler_AddDeviceForTesting_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSerialNumberDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSerialNumber(UserType* output) {
    auto* pointer = data_->serial_number.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetLandingPageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLandingPage(UserType* output) {
    auto* pointer = data_->landing_page.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::UsbInternalsPageHandler_AddDeviceForTesting_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbInternalsPageHandler_AddDeviceForTesting_ResponseParamsDataView {
 public:
  UsbInternalsPageHandler_AddDeviceForTesting_ResponseParamsDataView() {}

  UsbInternalsPageHandler_AddDeviceForTesting_ResponseParamsDataView(
      internal::UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbInternalsPageHandler_RemoveDeviceForTesting_ParamsDataView {
 public:
  UsbInternalsPageHandler_RemoveDeviceForTesting_ParamsDataView() {}

  UsbInternalsPageHandler_RemoveDeviceForTesting_ParamsDataView(
      internal::UsbInternalsPageHandler_RemoveDeviceForTesting_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetGuidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGuid(UserType* output) {
    auto* pointer = data_->guid.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::UsbInternalsPageHandler_RemoveDeviceForTesting_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParamsDataView {
 public:
  UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParamsDataView() {}

  UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParamsDataView(
      internal::UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams_Data* data_ = nullptr;
};

class UsbInternalsPageHandler_GetTestDevices_ParamsDataView {
 public:
  UsbInternalsPageHandler_GetTestDevices_ParamsDataView() {}

  UsbInternalsPageHandler_GetTestDevices_ParamsDataView(
      internal::UsbInternalsPageHandler_GetTestDevices_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::UsbInternalsPageHandler_GetTestDevices_Params_Data* data_ = nullptr;
};

class UsbInternalsPageHandler_GetTestDevices_ResponseParamsDataView {
 public:
  UsbInternalsPageHandler_GetTestDevices_ResponseParamsDataView() {}

  UsbInternalsPageHandler_GetTestDevices_ResponseParamsDataView(
      internal::UsbInternalsPageHandler_GetTestDevices_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDevicesDataView(
      mojo::ArrayDataView<TestDeviceInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDevices(UserType* output) {
    auto* pointer = data_->devices.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojom::TestDeviceInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::UsbInternalsPageHandler_GetTestDevices_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojom::TestDeviceInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojom::TestDeviceInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojom::internal::TestDeviceInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::guid, input, custom_context)) in_guid = CallWithContext(Traits::guid, input, custom_context);
    typename decltype((*output)->guid)::BaseType::BufferWriter
        guid_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_guid, buffer, &guid_writer, context);
    (*output)->guid.Set(
        guid_writer.is_null() ? nullptr : guid_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->guid.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null guid in TestDeviceInfo struct");
    decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in TestDeviceInfo struct");
    decltype(CallWithContext(Traits::serial_number, input, custom_context)) in_serial_number = CallWithContext(Traits::serial_number, input, custom_context);
    typename decltype((*output)->serial_number)::BaseType::BufferWriter
        serial_number_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_serial_number, buffer, &serial_number_writer, context);
    (*output)->serial_number.Set(
        serial_number_writer.is_null() ? nullptr : serial_number_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->serial_number.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null serial_number in TestDeviceInfo struct");
    decltype(CallWithContext(Traits::landing_page, input, custom_context)) in_landing_page = CallWithContext(Traits::landing_page, input, custom_context);
    typename decltype((*output)->landing_page)::BaseType::BufferWriter
        landing_page_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_landing_page, buffer, &landing_page_writer, context);
    (*output)->landing_page.Set(
        landing_page_writer.is_null() ? nullptr : landing_page_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->landing_page.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null landing_page in TestDeviceInfo struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::mojom::internal::TestDeviceInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojom::TestDeviceInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace mojom {

inline void TestDeviceInfoDataView::GetGuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->guid.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void TestDeviceInfoDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void TestDeviceInfoDataView::GetSerialNumberDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->serial_number.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void TestDeviceInfoDataView::GetLandingPageDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->landing_page.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void UsbInternalsPageHandler_AddDeviceForTesting_ParamsDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void UsbInternalsPageHandler_AddDeviceForTesting_ParamsDataView::GetSerialNumberDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->serial_number.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void UsbInternalsPageHandler_AddDeviceForTesting_ParamsDataView::GetLandingPageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->landing_page.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void UsbInternalsPageHandler_AddDeviceForTesting_ResponseParamsDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void UsbInternalsPageHandler_RemoveDeviceForTesting_ParamsDataView::GetGuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->guid.Get();
  *output = mojo::StringDataView(pointer, context_);
}






inline void UsbInternalsPageHandler_GetTestDevices_ResponseParamsDataView::GetDevicesDataView(
    mojo::ArrayDataView<TestDeviceInfoDataView>* output) {
  auto pointer = data_->devices.Get();
  *output = mojo::ArrayDataView<TestDeviceInfoDataView>(pointer, context_);
}



}  // namespace mojom

#endif  // CHROME_BROWSER_UI_WEBUI_USB_INTERNALS_USB_INTERNALS_MOJOM_SHARED_H_
