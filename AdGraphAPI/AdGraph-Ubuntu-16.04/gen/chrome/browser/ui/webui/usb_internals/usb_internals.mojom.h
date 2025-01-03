// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_USB_INTERNALS_USB_INTERNALS_MOJOM_H_
#define CHROME_BROWSER_UI_WEBUI_USB_INTERNALS_USB_INTERNALS_MOJOM_H_

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
#include "chrome/browser/ui/webui/usb_internals/usb_internals.mojom-shared.h"
#include "url/mojom/origin.mojom.h"
#include "url/mojom/url.mojom.h"
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


namespace mojom {
class UsbInternalsPageHandler;
using UsbInternalsPageHandlerPtr = mojo::InterfacePtr<UsbInternalsPageHandler>;
using UsbInternalsPageHandlerPtrInfo = mojo::InterfacePtrInfo<UsbInternalsPageHandler>;
using ThreadSafeUsbInternalsPageHandlerPtr =
    mojo::ThreadSafeInterfacePtr<UsbInternalsPageHandler>;
using UsbInternalsPageHandlerRequest = mojo::InterfaceRequest<UsbInternalsPageHandler>;
using UsbInternalsPageHandlerAssociatedPtr =
    mojo::AssociatedInterfacePtr<UsbInternalsPageHandler>;
using ThreadSafeUsbInternalsPageHandlerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<UsbInternalsPageHandler>;
using UsbInternalsPageHandlerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<UsbInternalsPageHandler>;
using UsbInternalsPageHandlerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<UsbInternalsPageHandler>;

class TestDeviceInfo;
using TestDeviceInfoPtr = mojo::StructPtr<TestDeviceInfo>;


class UsbInternalsPageHandlerProxy;

template <typename ImplRefTraits>
class UsbInternalsPageHandlerStub;

class UsbInternalsPageHandlerRequestValidator;
class UsbInternalsPageHandlerResponseValidator;

class  UsbInternalsPageHandler
    : public UsbInternalsPageHandlerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = UsbInternalsPageHandlerProxy;

  template <typename ImplRefTraits>
  using Stub_ = UsbInternalsPageHandlerStub<ImplRefTraits>;

  using RequestValidator_ = UsbInternalsPageHandlerRequestValidator;
  using ResponseValidator_ = UsbInternalsPageHandlerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kAddDeviceForTestingMinVersion = 0,
    kRemoveDeviceForTestingMinVersion = 0,
    kGetTestDevicesMinVersion = 0,
  };
  virtual ~UsbInternalsPageHandler() {}


  using AddDeviceForTestingCallback = base::OnceCallback<void(bool, const std::string&)>;
  virtual void AddDeviceForTesting(const std::string& name, const std::string& serial_number, const std::string& landing_page, AddDeviceForTestingCallback callback) = 0;


  using RemoveDeviceForTestingCallback = base::OnceCallback<void()>;
  virtual void RemoveDeviceForTesting(const std::string& guid, RemoveDeviceForTestingCallback callback) = 0;


  using GetTestDevicesCallback = base::OnceCallback<void(std::vector<TestDeviceInfoPtr>)>;
  virtual void GetTestDevices(GetTestDevicesCallback callback) = 0;
};
class  UsbInternalsPageHandlerInterceptorForTesting : public UsbInternalsPageHandler {
  virtual UsbInternalsPageHandler* GetForwardingInterface() = 0;
  void AddDeviceForTesting(const std::string& name, const std::string& serial_number, const std::string& landing_page, AddDeviceForTestingCallback callback) override;
  void RemoveDeviceForTesting(const std::string& guid, RemoveDeviceForTestingCallback callback) override;
  void GetTestDevices(GetTestDevicesCallback callback) override;
};
class  UsbInternalsPageHandlerAsyncWaiter {
 public:
  explicit UsbInternalsPageHandlerAsyncWaiter(UsbInternalsPageHandler* proxy);
  ~UsbInternalsPageHandlerAsyncWaiter();
  void AddDeviceForTesting(
      const std::string& name, const std::string& serial_number, const std::string& landing_page, bool* out_success, std::string* out_message);
  void RemoveDeviceForTesting(
      const std::string& guid);
  void GetTestDevices(
      std::vector<TestDeviceInfoPtr>* out_devices);

 private:
  UsbInternalsPageHandler* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(UsbInternalsPageHandlerAsyncWaiter);
};

class  UsbInternalsPageHandlerProxy
    : public UsbInternalsPageHandler {
 public:
  explicit UsbInternalsPageHandlerProxy(mojo::MessageReceiverWithResponder* receiver);
  void AddDeviceForTesting(const std::string& name, const std::string& serial_number, const std::string& landing_page, AddDeviceForTestingCallback callback) final;
  void RemoveDeviceForTesting(const std::string& guid, RemoveDeviceForTestingCallback callback) final;
  void GetTestDevices(GetTestDevicesCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  UsbInternalsPageHandlerStubDispatch {
 public:
  static bool Accept(UsbInternalsPageHandler* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      UsbInternalsPageHandler* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<UsbInternalsPageHandler>>
class UsbInternalsPageHandlerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  UsbInternalsPageHandlerStub() {}
  ~UsbInternalsPageHandlerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UsbInternalsPageHandlerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UsbInternalsPageHandlerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  UsbInternalsPageHandlerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  UsbInternalsPageHandlerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class  TestDeviceInfo {
 public:
  using DataView = TestDeviceInfoDataView;
  using Data_ = internal::TestDeviceInfo_Data;

  template <typename... Args>
  static TestDeviceInfoPtr New(Args&&... args) {
    return TestDeviceInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TestDeviceInfoPtr From(const U& u) {
    return mojo::TypeConverter<TestDeviceInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TestDeviceInfo>::Convert(*this);
  }


  TestDeviceInfo();

  TestDeviceInfo(
      const std::string& guid,
      const std::string& name,
      const std::string& serial_number,
      const GURL& landing_page);

  ~TestDeviceInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TestDeviceInfoPtr>
  TestDeviceInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TestDeviceInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TestDeviceInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TestDeviceInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TestDeviceInfo_UnserializedMessageContext<
            UserType, TestDeviceInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<TestDeviceInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return TestDeviceInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TestDeviceInfo_UnserializedMessageContext<
            UserType, TestDeviceInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TestDeviceInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string guid;
  std::string name;
  std::string serial_number;
  GURL landing_page;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
TestDeviceInfoPtr TestDeviceInfo::Clone() const {
  return New(
      mojo::Clone(guid),
      mojo::Clone(name),
      mojo::Clone(serial_number),
      mojo::Clone(landing_page)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TestDeviceInfo>::value>::type*>
bool TestDeviceInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->guid, other_struct.guid))
    return false;
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->serial_number, other_struct.serial_number))
    return false;
  if (!mojo::Equals(this->landing_page, other_struct.landing_page))
    return false;
  return true;
}


}  // namespace mojom

namespace mojo {


template <>
struct  StructTraits<::mojom::TestDeviceInfo::DataView,
                                         ::mojom::TestDeviceInfoPtr> {
  static bool IsNull(const ::mojom::TestDeviceInfoPtr& input) { return !input; }
  static void SetToNull(::mojom::TestDeviceInfoPtr* output) { output->reset(); }

  static const decltype(::mojom::TestDeviceInfo::guid)& guid(
      const ::mojom::TestDeviceInfoPtr& input) {
    return input->guid;
  }

  static const decltype(::mojom::TestDeviceInfo::name)& name(
      const ::mojom::TestDeviceInfoPtr& input) {
    return input->name;
  }

  static const decltype(::mojom::TestDeviceInfo::serial_number)& serial_number(
      const ::mojom::TestDeviceInfoPtr& input) {
    return input->serial_number;
  }

  static const decltype(::mojom::TestDeviceInfo::landing_page)& landing_page(
      const ::mojom::TestDeviceInfoPtr& input) {
    return input->landing_page;
  }

  static bool Read(::mojom::TestDeviceInfo::DataView input, ::mojom::TestDeviceInfoPtr* output);
};

}  // namespace mojo

#endif  // CHROME_BROWSER_UI_WEBUI_USB_INTERNALS_USB_INTERNALS_MOJOM_H_