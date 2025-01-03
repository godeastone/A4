// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_H_

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
#include "services/device/public/mojom/hid.mojom-shared.h"
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


namespace device {
namespace mojom {
constexpr uint16_t kPageUndefined = 0x00U;
constexpr uint16_t kPageGenericDesktop = 0x01U;
constexpr uint16_t kPageSimulation = 0x02U;
constexpr uint16_t kPageVirtualReality = 0x03U;
constexpr uint16_t kPageSport = 0x04U;
constexpr uint16_t kPageGame = 0x05U;
constexpr uint16_t kPageKeyboard = 0x07U;
constexpr uint16_t kPageLed = 0x08U;
constexpr uint16_t kPageButton = 0x09U;
constexpr uint16_t kPageOrdinal = 0x0AU;
constexpr uint16_t kPageTelephony = 0x0BU;
constexpr uint16_t kPageConsumer = 0x0CU;
constexpr uint16_t kPageDigitizer = 0x0DU;
constexpr uint16_t kPagePidPage = 0x0FU;
constexpr uint16_t kPageUnicode = 0x10U;
constexpr uint16_t kPageAlphanumericDisplay = 0x14U;
constexpr uint16_t kPageMedicalInstruments = 0x40U;
constexpr uint16_t kPageMonitor0 = 0x80U;
constexpr uint16_t kPageMonitor1 = 0x81U;
constexpr uint16_t kPageMonitor2 = 0x82U;
constexpr uint16_t kPageMonitor3 = 0x83U;
constexpr uint16_t kPagePower0 = 0x84U;
constexpr uint16_t kPagePower1 = 0x85U;
constexpr uint16_t kPagePower2 = 0x86U;
constexpr uint16_t kPagePower3 = 0x87U;
constexpr uint16_t kPageBarCodeScanner = 0x8CU;
constexpr uint16_t kPageScale = 0x8DU;
constexpr uint16_t kPageMagneticStripeReader = 0x8EU;
constexpr uint16_t kPageReservedPointOfSale = 0x8FU;
constexpr uint16_t kPageCameraControl = 0x90U;
constexpr uint16_t kPageArcade = 0x91U;
constexpr uint16_t kPageVendor = 0xFF00U;
constexpr uint16_t kPageMediaCenter = 0xFFBCU;
constexpr uint16_t kGenericDesktopUndefined = 0x00U;
constexpr uint16_t kGenericDesktopPointer = 0x01U;
constexpr uint16_t kGenericDesktopMouse = 0x02U;
constexpr uint16_t kGenericDesktopJoystick = 0x04U;
constexpr uint16_t kGenericDesktopGamePad = 0x05U;
constexpr uint16_t kGenericDesktopKeyboard = 0x06U;
constexpr uint16_t kGenericDesktopKeypad = 0x07U;
constexpr uint16_t kGenericDesktopMultiAxisController = 0x08U;
constexpr uint16_t kGenericDesktopX = 0x30U;
constexpr uint16_t kGenericDesktopY = 0x31U;
constexpr uint16_t kGenericDesktopZ = 0x32U;
constexpr uint16_t kGenericDesktopRx = 0x33U;
constexpr uint16_t kGenericDesktopRy = 0x34U;
constexpr uint16_t kGenericDesktopRz = 0x35U;
constexpr uint16_t kGenericDesktopSlider = 0x36U;
constexpr uint16_t kGenericDesktopDial = 0x37U;
constexpr uint16_t kGenericDesktopWheel = 0x38U;
constexpr uint16_t kGenericDesktopHatSwitch = 0x39U;
constexpr uint16_t kGenericDesktopCountedBuffer = 0x3aU;
constexpr uint16_t kGenericDesktopByteCount = 0x3bU;
constexpr uint16_t kGenericDesktopMotionWakeup = 0x3cU;
constexpr uint16_t kGenericDesktopStart = 0x3dU;
constexpr uint16_t kGenericDesktopSelect = 0x3eU;
constexpr uint16_t kGenericDesktopVx = 0x40U;
constexpr uint16_t kGenericDesktopVy = 0x41U;
constexpr uint16_t kGenericDesktopVz = 0x42U;
constexpr uint16_t kGenericDesktopVbrx = 0x43U;
constexpr uint16_t kGenericDesktopVbry = 0x44U;
constexpr uint16_t kGenericDesktopVbrz = 0x45U;
constexpr uint16_t kGenericDesktopVno = 0x46U;
constexpr uint16_t kGenericDesktopSystemControl = 0x80U;
constexpr uint16_t kGenericDesktopSystemPowerDown = 0x81U;
constexpr uint16_t kGenericDesktopSystemSleep = 0x82U;
constexpr uint16_t kGenericDesktopSystemWakeUp = 0x83U;
constexpr uint16_t kGenericDesktopSystemContextMenu = 0x84U;
constexpr uint16_t kGenericDesktopSystemMainMenu = 0x85U;
constexpr uint16_t kGenericDesktopSystemAppMenu = 0x86U;
constexpr uint16_t kGenericDesktopSystemMenuHelp = 0x87U;
constexpr uint16_t kGenericDesktopSystemMenuExit = 0x88U;
constexpr uint16_t kGenericDesktopSystemMenuSelect = 0x89U;
constexpr uint16_t kGenericDesktopSystemMenuRight = 0x8aU;
constexpr uint16_t kGenericDesktopSystemMenuLeft = 0x8bU;
constexpr uint16_t kGenericDesktopSystemMenuUp = 0x8cU;
constexpr uint16_t kGenericDesktopSystemMenuDown = 0x8dU;
constexpr uint16_t kGenericDesktopSystemColdRestart = 0x8eU;
constexpr uint16_t kGenericDesktopSystemWarmRestart = 0x8fU;
constexpr uint16_t kGenericDesktopDPadUp = 0x90U;
constexpr uint16_t kGenericDesktopDPadDown = 0x91U;
constexpr uint16_t kGenericDesktopDPadLeft = 0x92U;
constexpr uint16_t kGenericDesktopDPadRight = 0x93U;
constexpr uint16_t kGenericDesktopSystemDock = 0xa0U;
constexpr uint16_t kGenericDesktopSystemUndock = 0xa1U;
constexpr uint16_t kGenericDesktopSystemSetup = 0xa2U;
constexpr uint16_t kGenericDesktopSystemBreak = 0xa3U;
constexpr uint16_t kGenericDesktopSystemDebuggerBreak = 0xa4U;
constexpr uint16_t kGenericDesktopApplicationBreak = 0xa5U;
constexpr uint16_t kGenericDesktopApplicationDebuggerBreak = 0xa6U;
constexpr uint16_t kGenericDesktopSystemSpeakerMute = 0xa7U;
constexpr uint16_t kGenericDesktopSystemHibernate = 0xa8U;
constexpr uint16_t kGenericDesktopSystemDisplayInvert = 0xb0U;
constexpr uint16_t kGenericDesktopSystemDisplayInternal = 0xb1U;
constexpr uint16_t kGenericDesktopSystemDisplayExternal = 0xb2U;
constexpr uint16_t kGenericDesktopSystemDisplayBoth = 0xb3U;
constexpr uint16_t kGenericDesktopSystemDisplayDual = 0xb4U;
constexpr uint16_t kGenericDesktopSystemDisplayToggle = 0xb5U;
constexpr uint16_t kGenericDesktopSystemDisplaySwap = 0xb6U;
class HidManagerClient;
using HidManagerClientPtr = mojo::InterfacePtr<HidManagerClient>;
using HidManagerClientPtrInfo = mojo::InterfacePtrInfo<HidManagerClient>;
using ThreadSafeHidManagerClientPtr =
    mojo::ThreadSafeInterfacePtr<HidManagerClient>;
using HidManagerClientRequest = mojo::InterfaceRequest<HidManagerClient>;
using HidManagerClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<HidManagerClient>;
using ThreadSafeHidManagerClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<HidManagerClient>;
using HidManagerClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<HidManagerClient>;
using HidManagerClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<HidManagerClient>;

class HidManager;
using HidManagerPtr = mojo::InterfacePtr<HidManager>;
using HidManagerPtrInfo = mojo::InterfacePtrInfo<HidManager>;
using ThreadSafeHidManagerPtr =
    mojo::ThreadSafeInterfacePtr<HidManager>;
using HidManagerRequest = mojo::InterfaceRequest<HidManager>;
using HidManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<HidManager>;
using ThreadSafeHidManagerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<HidManager>;
using HidManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<HidManager>;
using HidManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<HidManager>;

class HidConnection;
using HidConnectionPtr = mojo::InterfacePtr<HidConnection>;
using HidConnectionPtrInfo = mojo::InterfacePtrInfo<HidConnection>;
using ThreadSafeHidConnectionPtr =
    mojo::ThreadSafeInterfacePtr<HidConnection>;
using HidConnectionRequest = mojo::InterfaceRequest<HidConnection>;
using HidConnectionAssociatedPtr =
    mojo::AssociatedInterfacePtr<HidConnection>;
using ThreadSafeHidConnectionAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<HidConnection>;
using HidConnectionAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<HidConnection>;
using HidConnectionAssociatedRequest =
    mojo::AssociatedInterfaceRequest<HidConnection>;

class HidUsageAndPage;
using HidUsageAndPagePtr = mojo::InlinedStructPtr<HidUsageAndPage>;

class HidCollectionInfo;
using HidCollectionInfoPtr = mojo::StructPtr<HidCollectionInfo>;

class HidDeviceInfo;
using HidDeviceInfoPtr = mojo::StructPtr<HidDeviceInfo>;


class HidManagerClientProxy;

template <typename ImplRefTraits>
class HidManagerClientStub;

class HidManagerClientRequestValidator;

class  HidManagerClient
    : public HidManagerClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = HidManagerClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = HidManagerClientStub<ImplRefTraits>;

  using RequestValidator_ = HidManagerClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kDeviceAddedMinVersion = 0,
    kDeviceRemovedMinVersion = 0,
  };
  virtual ~HidManagerClient() {}

  virtual void DeviceAdded(HidDeviceInfoPtr device_info) = 0;

  virtual void DeviceRemoved(HidDeviceInfoPtr device_info) = 0;
};
class  HidManagerClientInterceptorForTesting : public HidManagerClient {
  virtual HidManagerClient* GetForwardingInterface() = 0;
  void DeviceAdded(HidDeviceInfoPtr device_info) override;
  void DeviceRemoved(HidDeviceInfoPtr device_info) override;
};
class  HidManagerClientAsyncWaiter {
 public:
  explicit HidManagerClientAsyncWaiter(HidManagerClient* proxy);
  ~HidManagerClientAsyncWaiter();

 private:
  HidManagerClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(HidManagerClientAsyncWaiter);
};

class HidManagerProxy;

template <typename ImplRefTraits>
class HidManagerStub;

class HidManagerRequestValidator;
class HidManagerResponseValidator;

class  HidManager
    : public HidManagerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = HidManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = HidManagerStub<ImplRefTraits>;

  using RequestValidator_ = HidManagerRequestValidator;
  using ResponseValidator_ = HidManagerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetDevicesAndSetClientMinVersion = 0,
    kGetDevicesMinVersion = 0,
    kConnectMinVersion = 0,
  };
  virtual ~HidManager() {}


  using GetDevicesAndSetClientCallback = base::OnceCallback<void(std::vector<HidDeviceInfoPtr>)>;
  virtual void GetDevicesAndSetClient(HidManagerClientAssociatedPtrInfo client, GetDevicesAndSetClientCallback callback) = 0;


  using GetDevicesCallback = base::OnceCallback<void(std::vector<HidDeviceInfoPtr>)>;
  virtual void GetDevices(GetDevicesCallback callback) = 0;


  using ConnectCallback = base::OnceCallback<void(HidConnectionPtr)>;
  virtual void Connect(const std::string& device_guid, ConnectCallback callback) = 0;
};
class  HidManagerInterceptorForTesting : public HidManager {
  virtual HidManager* GetForwardingInterface() = 0;
  void GetDevicesAndSetClient(HidManagerClientAssociatedPtrInfo client, GetDevicesAndSetClientCallback callback) override;
  void GetDevices(GetDevicesCallback callback) override;
  void Connect(const std::string& device_guid, ConnectCallback callback) override;
};
class  HidManagerAsyncWaiter {
 public:
  explicit HidManagerAsyncWaiter(HidManager* proxy);
  ~HidManagerAsyncWaiter();
  void GetDevicesAndSetClient(
      HidManagerClientAssociatedPtrInfo client, std::vector<HidDeviceInfoPtr>* out_devices);
  void GetDevices(
      std::vector<HidDeviceInfoPtr>* out_devices);
  void Connect(
      const std::string& device_guid, HidConnectionPtr* out_connection);

 private:
  HidManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(HidManagerAsyncWaiter);
};

class HidConnectionProxy;

template <typename ImplRefTraits>
class HidConnectionStub;

class HidConnectionRequestValidator;
class HidConnectionResponseValidator;

class  HidConnection
    : public HidConnectionInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = HidConnectionProxy;

  template <typename ImplRefTraits>
  using Stub_ = HidConnectionStub<ImplRefTraits>;

  using RequestValidator_ = HidConnectionRequestValidator;
  using ResponseValidator_ = HidConnectionResponseValidator;
  enum MethodMinVersions : uint32_t {
    kReadMinVersion = 0,
    kWriteMinVersion = 0,
    kGetFeatureReportMinVersion = 0,
    kSendFeatureReportMinVersion = 0,
  };
  virtual ~HidConnection() {}


  using ReadCallback = base::OnceCallback<void(bool, uint8_t, const base::Optional<std::vector<uint8_t>>&)>;
  virtual void Read(ReadCallback callback) = 0;


  using WriteCallback = base::OnceCallback<void(bool)>;
  virtual void Write(uint8_t report_id, const std::vector<uint8_t>& buffer, WriteCallback callback) = 0;


  using GetFeatureReportCallback = base::OnceCallback<void(bool, const base::Optional<std::vector<uint8_t>>&)>;
  virtual void GetFeatureReport(uint8_t report_id, GetFeatureReportCallback callback) = 0;


  using SendFeatureReportCallback = base::OnceCallback<void(bool)>;
  virtual void SendFeatureReport(uint8_t report_id, const std::vector<uint8_t>& buffer, SendFeatureReportCallback callback) = 0;
};
class  HidConnectionInterceptorForTesting : public HidConnection {
  virtual HidConnection* GetForwardingInterface() = 0;
  void Read(ReadCallback callback) override;
  void Write(uint8_t report_id, const std::vector<uint8_t>& buffer, WriteCallback callback) override;
  void GetFeatureReport(uint8_t report_id, GetFeatureReportCallback callback) override;
  void SendFeatureReport(uint8_t report_id, const std::vector<uint8_t>& buffer, SendFeatureReportCallback callback) override;
};
class  HidConnectionAsyncWaiter {
 public:
  explicit HidConnectionAsyncWaiter(HidConnection* proxy);
  ~HidConnectionAsyncWaiter();
  void Read(
      bool* out_success, uint8_t* out_report_id, base::Optional<std::vector<uint8_t>>* out_buffer);
  void Write(
      uint8_t report_id, const std::vector<uint8_t>& buffer, bool* out_success);
  void GetFeatureReport(
      uint8_t report_id, bool* out_success, base::Optional<std::vector<uint8_t>>* out_buffer);
  void SendFeatureReport(
      uint8_t report_id, const std::vector<uint8_t>& buffer, bool* out_success);

 private:
  HidConnection* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(HidConnectionAsyncWaiter);
};

class  HidManagerClientProxy
    : public HidManagerClient {
 public:
  explicit HidManagerClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void DeviceAdded(HidDeviceInfoPtr device_info) final;
  void DeviceRemoved(HidDeviceInfoPtr device_info) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  HidManagerProxy
    : public HidManager {
 public:
  explicit HidManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetDevicesAndSetClient(HidManagerClientAssociatedPtrInfo client, GetDevicesAndSetClientCallback callback) final;
  void GetDevices(GetDevicesCallback callback) final;
  void Connect(const std::string& device_guid, ConnectCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  HidConnectionProxy
    : public HidConnection {
 public:
  explicit HidConnectionProxy(mojo::MessageReceiverWithResponder* receiver);
  void Read(ReadCallback callback) final;
  void Write(uint8_t report_id, const std::vector<uint8_t>& buffer, WriteCallback callback) final;
  void GetFeatureReport(uint8_t report_id, GetFeatureReportCallback callback) final;
  void SendFeatureReport(uint8_t report_id, const std::vector<uint8_t>& buffer, SendFeatureReportCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  HidManagerClientStubDispatch {
 public:
  static bool Accept(HidManagerClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      HidManagerClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<HidManagerClient>>
class HidManagerClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  HidManagerClientStub() {}
  ~HidManagerClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return HidManagerClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return HidManagerClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  HidManagerStubDispatch {
 public:
  static bool Accept(HidManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      HidManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<HidManager>>
class HidManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  HidManagerStub() {}
  ~HidManagerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return HidManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return HidManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  HidConnectionStubDispatch {
 public:
  static bool Accept(HidConnection* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      HidConnection* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<HidConnection>>
class HidConnectionStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  HidConnectionStub() {}
  ~HidConnectionStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return HidConnectionStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return HidConnectionStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  HidManagerClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  HidManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  HidConnectionRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  HidManagerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  HidConnectionResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};


class  HidUsageAndPage {
 public:
  using DataView = HidUsageAndPageDataView;
  using Data_ = internal::HidUsageAndPage_Data;

  template <typename... Args>
  static HidUsageAndPagePtr New(Args&&... args) {
    return HidUsageAndPagePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static HidUsageAndPagePtr From(const U& u) {
    return mojo::TypeConverter<HidUsageAndPagePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, HidUsageAndPage>::Convert(*this);
  }


  HidUsageAndPage();

  HidUsageAndPage(
      uint16_t usage,
      uint16_t usage_page);

  ~HidUsageAndPage();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = HidUsageAndPagePtr>
  HidUsageAndPagePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, HidUsageAndPage>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        HidUsageAndPage::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        HidUsageAndPage::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::HidUsageAndPage_UnserializedMessageContext<
            UserType, HidUsageAndPage::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<HidUsageAndPage::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return HidUsageAndPage::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::HidUsageAndPage_UnserializedMessageContext<
            UserType, HidUsageAndPage::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<HidUsageAndPage::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  uint16_t usage;
  uint16_t usage_page;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};







class  HidCollectionInfo {
 public:
  using DataView = HidCollectionInfoDataView;
  using Data_ = internal::HidCollectionInfo_Data;

  template <typename... Args>
  static HidCollectionInfoPtr New(Args&&... args) {
    return HidCollectionInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static HidCollectionInfoPtr From(const U& u) {
    return mojo::TypeConverter<HidCollectionInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, HidCollectionInfo>::Convert(*this);
  }


  HidCollectionInfo();

  HidCollectionInfo(
      HidUsageAndPagePtr usage,
      const std::vector<int32_t>& report_ids);

  ~HidCollectionInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = HidCollectionInfoPtr>
  HidCollectionInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, HidCollectionInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        HidCollectionInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        HidCollectionInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::HidCollectionInfo_UnserializedMessageContext<
            UserType, HidCollectionInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<HidCollectionInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return HidCollectionInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::HidCollectionInfo_UnserializedMessageContext<
            UserType, HidCollectionInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<HidCollectionInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  HidUsageAndPagePtr usage;
  std::vector<int32_t> report_ids;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(HidCollectionInfo);
};


class  HidDeviceInfo {
 public:
  using DataView = HidDeviceInfoDataView;
  using Data_ = internal::HidDeviceInfo_Data;

  template <typename... Args>
  static HidDeviceInfoPtr New(Args&&... args) {
    return HidDeviceInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static HidDeviceInfoPtr From(const U& u) {
    return mojo::TypeConverter<HidDeviceInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, HidDeviceInfo>::Convert(*this);
  }


  HidDeviceInfo();

  HidDeviceInfo(
      const std::string& guid,
      uint16_t vendor_id,
      uint16_t product_id,
      const std::string& product_name,
      const std::string& serial_number,
      HidBusType bus_type,
      const std::vector<uint8_t>& report_descriptor,
      std::vector<HidCollectionInfoPtr> collections,
      bool has_report_id,
      uint64_t max_input_report_size,
      uint64_t max_output_report_size,
      uint64_t max_feature_report_size,
      const std::string& device_node);

  ~HidDeviceInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = HidDeviceInfoPtr>
  HidDeviceInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, HidDeviceInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        HidDeviceInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        HidDeviceInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::HidDeviceInfo_UnserializedMessageContext<
            UserType, HidDeviceInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<HidDeviceInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return HidDeviceInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::HidDeviceInfo_UnserializedMessageContext<
            UserType, HidDeviceInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<HidDeviceInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string guid;
  uint16_t vendor_id;
  uint16_t product_id;
  std::string product_name;
  std::string serial_number;
  HidBusType bus_type;
  std::vector<uint8_t> report_descriptor;
  std::vector<HidCollectionInfoPtr> collections;
  bool has_report_id;
  uint64_t max_input_report_size;
  uint64_t max_output_report_size;
  uint64_t max_feature_report_size;
  std::string device_node;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(HidDeviceInfo);
};

template <typename StructPtrType>
HidUsageAndPagePtr HidUsageAndPage::Clone() const {
  return New(
      mojo::Clone(usage),
      mojo::Clone(usage_page)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, HidUsageAndPage>::value>::type*>
bool HidUsageAndPage::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->usage, other_struct.usage))
    return false;
  if (!mojo::Equals(this->usage_page, other_struct.usage_page))
    return false;
  return true;
}
template <typename StructPtrType>
HidCollectionInfoPtr HidCollectionInfo::Clone() const {
  return New(
      mojo::Clone(usage),
      mojo::Clone(report_ids)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, HidCollectionInfo>::value>::type*>
bool HidCollectionInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->usage, other_struct.usage))
    return false;
  if (!mojo::Equals(this->report_ids, other_struct.report_ids))
    return false;
  return true;
}
template <typename StructPtrType>
HidDeviceInfoPtr HidDeviceInfo::Clone() const {
  return New(
      mojo::Clone(guid),
      mojo::Clone(vendor_id),
      mojo::Clone(product_id),
      mojo::Clone(product_name),
      mojo::Clone(serial_number),
      mojo::Clone(bus_type),
      mojo::Clone(report_descriptor),
      mojo::Clone(collections),
      mojo::Clone(has_report_id),
      mojo::Clone(max_input_report_size),
      mojo::Clone(max_output_report_size),
      mojo::Clone(max_feature_report_size),
      mojo::Clone(device_node)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, HidDeviceInfo>::value>::type*>
bool HidDeviceInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->guid, other_struct.guid))
    return false;
  if (!mojo::Equals(this->vendor_id, other_struct.vendor_id))
    return false;
  if (!mojo::Equals(this->product_id, other_struct.product_id))
    return false;
  if (!mojo::Equals(this->product_name, other_struct.product_name))
    return false;
  if (!mojo::Equals(this->serial_number, other_struct.serial_number))
    return false;
  if (!mojo::Equals(this->bus_type, other_struct.bus_type))
    return false;
  if (!mojo::Equals(this->report_descriptor, other_struct.report_descriptor))
    return false;
  if (!mojo::Equals(this->collections, other_struct.collections))
    return false;
  if (!mojo::Equals(this->has_report_id, other_struct.has_report_id))
    return false;
  if (!mojo::Equals(this->max_input_report_size, other_struct.max_input_report_size))
    return false;
  if (!mojo::Equals(this->max_output_report_size, other_struct.max_output_report_size))
    return false;
  if (!mojo::Equals(this->max_feature_report_size, other_struct.max_feature_report_size))
    return false;
  if (!mojo::Equals(this->device_node, other_struct.device_node))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace device

namespace mojo {


template <>
struct  StructTraits<::device::mojom::HidUsageAndPage::DataView,
                                         ::device::mojom::HidUsageAndPagePtr> {
  static bool IsNull(const ::device::mojom::HidUsageAndPagePtr& input) { return !input; }
  static void SetToNull(::device::mojom::HidUsageAndPagePtr* output) { output->reset(); }

  static decltype(::device::mojom::HidUsageAndPage::usage) usage(
      const ::device::mojom::HidUsageAndPagePtr& input) {
    return input->usage;
  }

  static decltype(::device::mojom::HidUsageAndPage::usage_page) usage_page(
      const ::device::mojom::HidUsageAndPagePtr& input) {
    return input->usage_page;
  }

  static bool Read(::device::mojom::HidUsageAndPage::DataView input, ::device::mojom::HidUsageAndPagePtr* output);
};


template <>
struct  StructTraits<::device::mojom::HidCollectionInfo::DataView,
                                         ::device::mojom::HidCollectionInfoPtr> {
  static bool IsNull(const ::device::mojom::HidCollectionInfoPtr& input) { return !input; }
  static void SetToNull(::device::mojom::HidCollectionInfoPtr* output) { output->reset(); }

  static const decltype(::device::mojom::HidCollectionInfo::usage)& usage(
      const ::device::mojom::HidCollectionInfoPtr& input) {
    return input->usage;
  }

  static const decltype(::device::mojom::HidCollectionInfo::report_ids)& report_ids(
      const ::device::mojom::HidCollectionInfoPtr& input) {
    return input->report_ids;
  }

  static bool Read(::device::mojom::HidCollectionInfo::DataView input, ::device::mojom::HidCollectionInfoPtr* output);
};


template <>
struct  StructTraits<::device::mojom::HidDeviceInfo::DataView,
                                         ::device::mojom::HidDeviceInfoPtr> {
  static bool IsNull(const ::device::mojom::HidDeviceInfoPtr& input) { return !input; }
  static void SetToNull(::device::mojom::HidDeviceInfoPtr* output) { output->reset(); }

  static const decltype(::device::mojom::HidDeviceInfo::guid)& guid(
      const ::device::mojom::HidDeviceInfoPtr& input) {
    return input->guid;
  }

  static decltype(::device::mojom::HidDeviceInfo::vendor_id) vendor_id(
      const ::device::mojom::HidDeviceInfoPtr& input) {
    return input->vendor_id;
  }

  static decltype(::device::mojom::HidDeviceInfo::product_id) product_id(
      const ::device::mojom::HidDeviceInfoPtr& input) {
    return input->product_id;
  }

  static const decltype(::device::mojom::HidDeviceInfo::product_name)& product_name(
      const ::device::mojom::HidDeviceInfoPtr& input) {
    return input->product_name;
  }

  static const decltype(::device::mojom::HidDeviceInfo::serial_number)& serial_number(
      const ::device::mojom::HidDeviceInfoPtr& input) {
    return input->serial_number;
  }

  static decltype(::device::mojom::HidDeviceInfo::bus_type) bus_type(
      const ::device::mojom::HidDeviceInfoPtr& input) {
    return input->bus_type;
  }

  static const decltype(::device::mojom::HidDeviceInfo::report_descriptor)& report_descriptor(
      const ::device::mojom::HidDeviceInfoPtr& input) {
    return input->report_descriptor;
  }

  static const decltype(::device::mojom::HidDeviceInfo::collections)& collections(
      const ::device::mojom::HidDeviceInfoPtr& input) {
    return input->collections;
  }

  static decltype(::device::mojom::HidDeviceInfo::has_report_id) has_report_id(
      const ::device::mojom::HidDeviceInfoPtr& input) {
    return input->has_report_id;
  }

  static decltype(::device::mojom::HidDeviceInfo::max_input_report_size) max_input_report_size(
      const ::device::mojom::HidDeviceInfoPtr& input) {
    return input->max_input_report_size;
  }

  static decltype(::device::mojom::HidDeviceInfo::max_output_report_size) max_output_report_size(
      const ::device::mojom::HidDeviceInfoPtr& input) {
    return input->max_output_report_size;
  }

  static decltype(::device::mojom::HidDeviceInfo::max_feature_report_size) max_feature_report_size(
      const ::device::mojom::HidDeviceInfoPtr& input) {
    return input->max_feature_report_size;
  }

  static const decltype(::device::mojom::HidDeviceInfo::device_node)& device_node(
      const ::device::mojom::HidDeviceInfoPtr& input) {
    return input->device_node;
  }

  static bool Read(::device::mojom::HidDeviceInfo::DataView input, ::device::mojom::HidDeviceInfoPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_H_