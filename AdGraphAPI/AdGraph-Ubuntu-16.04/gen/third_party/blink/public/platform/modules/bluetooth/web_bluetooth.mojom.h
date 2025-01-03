// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BLUETOOTH_WEB_BLUETOOTH_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BLUETOOTH_WEB_BLUETOOTH_MOJOM_H_

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
#include "third_party/blink/public/platform/modules/bluetooth/web_bluetooth.mojom-shared.h"
#include "device/bluetooth/public/mojom/uuid.mojom.h"
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
#include "content/common/bluetooth/web_bluetooth_device_id.h"
#include "content/common/content_export.h"


namespace blink {
namespace mojom {
class WebBluetoothService;
using WebBluetoothServicePtr = mojo::InterfacePtr<WebBluetoothService>;
using WebBluetoothServicePtrInfo = mojo::InterfacePtrInfo<WebBluetoothService>;
using ThreadSafeWebBluetoothServicePtr =
    mojo::ThreadSafeInterfacePtr<WebBluetoothService>;
using WebBluetoothServiceRequest = mojo::InterfaceRequest<WebBluetoothService>;
using WebBluetoothServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<WebBluetoothService>;
using ThreadSafeWebBluetoothServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<WebBluetoothService>;
using WebBluetoothServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WebBluetoothService>;
using WebBluetoothServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WebBluetoothService>;

class WebBluetoothServerClient;
using WebBluetoothServerClientPtr = mojo::InterfacePtr<WebBluetoothServerClient>;
using WebBluetoothServerClientPtrInfo = mojo::InterfacePtrInfo<WebBluetoothServerClient>;
using ThreadSafeWebBluetoothServerClientPtr =
    mojo::ThreadSafeInterfacePtr<WebBluetoothServerClient>;
using WebBluetoothServerClientRequest = mojo::InterfaceRequest<WebBluetoothServerClient>;
using WebBluetoothServerClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<WebBluetoothServerClient>;
using ThreadSafeWebBluetoothServerClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<WebBluetoothServerClient>;
using WebBluetoothServerClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WebBluetoothServerClient>;
using WebBluetoothServerClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WebBluetoothServerClient>;

class WebBluetoothCharacteristicClient;
using WebBluetoothCharacteristicClientPtr = mojo::InterfacePtr<WebBluetoothCharacteristicClient>;
using WebBluetoothCharacteristicClientPtrInfo = mojo::InterfacePtrInfo<WebBluetoothCharacteristicClient>;
using ThreadSafeWebBluetoothCharacteristicClientPtr =
    mojo::ThreadSafeInterfacePtr<WebBluetoothCharacteristicClient>;
using WebBluetoothCharacteristicClientRequest = mojo::InterfaceRequest<WebBluetoothCharacteristicClient>;
using WebBluetoothCharacteristicClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<WebBluetoothCharacteristicClient>;
using ThreadSafeWebBluetoothCharacteristicClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<WebBluetoothCharacteristicClient>;
using WebBluetoothCharacteristicClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WebBluetoothCharacteristicClient>;
using WebBluetoothCharacteristicClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WebBluetoothCharacteristicClient>;

class WebBluetoothLeScanFilter;
using WebBluetoothLeScanFilterPtr = mojo::StructPtr<WebBluetoothLeScanFilter>;

class WebBluetoothRequestDeviceOptions;
using WebBluetoothRequestDeviceOptionsPtr = mojo::StructPtr<WebBluetoothRequestDeviceOptions>;

class WebBluetoothDeviceId;
using WebBluetoothDeviceIdPtr = mojo::InlinedStructPtr<WebBluetoothDeviceId>;

class WebBluetoothDevice;
using WebBluetoothDevicePtr = mojo::StructPtr<WebBluetoothDevice>;

class WebBluetoothRemoteGATTService;
using WebBluetoothRemoteGATTServicePtr = mojo::StructPtr<WebBluetoothRemoteGATTService>;

class WebBluetoothRemoteGATTCharacteristic;
using WebBluetoothRemoteGATTCharacteristicPtr = mojo::StructPtr<WebBluetoothRemoteGATTCharacteristic>;

class WebBluetoothRemoteGATTDescriptor;
using WebBluetoothRemoteGATTDescriptorPtr = mojo::StructPtr<WebBluetoothRemoteGATTDescriptor>;


class WebBluetoothServiceProxy;

template <typename ImplRefTraits>
class WebBluetoothServiceStub;

class WebBluetoothServiceRequestValidator;
class WebBluetoothServiceResponseValidator;

class CONTENT_EXPORT WebBluetoothService
    : public WebBluetoothServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = WebBluetoothServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = WebBluetoothServiceStub<ImplRefTraits>;

  using RequestValidator_ = WebBluetoothServiceRequestValidator;
  using ResponseValidator_ = WebBluetoothServiceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kRequestDeviceMinVersion = 0,
    kRemoteServerConnectMinVersion = 0,
    kRemoteServerDisconnectMinVersion = 0,
    kRemoteServerGetPrimaryServicesMinVersion = 0,
    kRemoteServiceGetCharacteristicsMinVersion = 0,
    kRemoteCharacteristicReadValueMinVersion = 0,
    kRemoteCharacteristicWriteValueMinVersion = 0,
    kRemoteCharacteristicStartNotificationsMinVersion = 0,
    kRemoteCharacteristicStopNotificationsMinVersion = 0,
    kRemoteCharacteristicGetDescriptorsMinVersion = 0,
    kRemoteDescriptorReadValueMinVersion = 0,
    kRemoteDescriptorWriteValueMinVersion = 0,
  };
  virtual ~WebBluetoothService() {}


  using RequestDeviceCallback = base::OnceCallback<void(WebBluetoothResult, WebBluetoothDevicePtr)>;
  virtual void RequestDevice(WebBluetoothRequestDeviceOptionsPtr options, RequestDeviceCallback callback) = 0;


  using RemoteServerConnectCallback = base::OnceCallback<void(WebBluetoothResult)>;
  virtual void RemoteServerConnect(const content::WebBluetoothDeviceId& device_id, WebBluetoothServerClientAssociatedPtrInfo client, RemoteServerConnectCallback callback) = 0;

  virtual void RemoteServerDisconnect(const content::WebBluetoothDeviceId& device_id) = 0;


  using RemoteServerGetPrimaryServicesCallback = base::OnceCallback<void(WebBluetoothResult, base::Optional<std::vector<WebBluetoothRemoteGATTServicePtr>>)>;
  virtual void RemoteServerGetPrimaryServices(const content::WebBluetoothDeviceId& device_id, WebBluetoothGATTQueryQuantity quantity, const base::Optional<device::BluetoothUUID>& services_uuid, RemoteServerGetPrimaryServicesCallback callback) = 0;


  using RemoteServiceGetCharacteristicsCallback = base::OnceCallback<void(WebBluetoothResult, base::Optional<std::vector<WebBluetoothRemoteGATTCharacteristicPtr>>)>;
  virtual void RemoteServiceGetCharacteristics(const std::string& service_instance_id, WebBluetoothGATTQueryQuantity quantity, const base::Optional<device::BluetoothUUID>& characteristics_uuid, RemoteServiceGetCharacteristicsCallback callback) = 0;


  using RemoteCharacteristicReadValueCallback = base::OnceCallback<void(WebBluetoothResult, const base::Optional<std::vector<uint8_t>>&)>;
  virtual void RemoteCharacteristicReadValue(const std::string& characteristic_instance_id, RemoteCharacteristicReadValueCallback callback) = 0;


  using RemoteCharacteristicWriteValueCallback = base::OnceCallback<void(WebBluetoothResult)>;
  virtual void RemoteCharacteristicWriteValue(const std::string& characteristic_instance_id, const std::vector<uint8_t>& value, RemoteCharacteristicWriteValueCallback callback) = 0;


  using RemoteCharacteristicStartNotificationsCallback = base::OnceCallback<void(WebBluetoothResult)>;
  virtual void RemoteCharacteristicStartNotifications(const std::string& characteristic_instance_id, WebBluetoothCharacteristicClientAssociatedPtrInfo client, RemoteCharacteristicStartNotificationsCallback callback) = 0;


  using RemoteCharacteristicStopNotificationsCallback = base::OnceCallback<void()>;
  virtual void RemoteCharacteristicStopNotifications(const std::string& characteristic_instance_id, RemoteCharacteristicStopNotificationsCallback callback) = 0;


  using RemoteCharacteristicGetDescriptorsCallback = base::OnceCallback<void(WebBluetoothResult, base::Optional<std::vector<WebBluetoothRemoteGATTDescriptorPtr>>)>;
  virtual void RemoteCharacteristicGetDescriptors(const std::string& characteristics_instance_id, WebBluetoothGATTQueryQuantity quantity, const base::Optional<device::BluetoothUUID>& descriptor_uuid, RemoteCharacteristicGetDescriptorsCallback callback) = 0;


  using RemoteDescriptorReadValueCallback = base::OnceCallback<void(WebBluetoothResult, const base::Optional<std::vector<uint8_t>>&)>;
  virtual void RemoteDescriptorReadValue(const std::string& descriptor_instance_id, RemoteDescriptorReadValueCallback callback) = 0;


  using RemoteDescriptorWriteValueCallback = base::OnceCallback<void(WebBluetoothResult)>;
  virtual void RemoteDescriptorWriteValue(const std::string& descriptor_instance_id, const std::vector<uint8_t>& value, RemoteDescriptorWriteValueCallback callback) = 0;
};
class CONTENT_EXPORT WebBluetoothServiceInterceptorForTesting : public WebBluetoothService {
  virtual WebBluetoothService* GetForwardingInterface() = 0;
  void RequestDevice(WebBluetoothRequestDeviceOptionsPtr options, RequestDeviceCallback callback) override;
  void RemoteServerConnect(const content::WebBluetoothDeviceId& device_id, WebBluetoothServerClientAssociatedPtrInfo client, RemoteServerConnectCallback callback) override;
  void RemoteServerDisconnect(const content::WebBluetoothDeviceId& device_id) override;
  void RemoteServerGetPrimaryServices(const content::WebBluetoothDeviceId& device_id, WebBluetoothGATTQueryQuantity quantity, const base::Optional<device::BluetoothUUID>& services_uuid, RemoteServerGetPrimaryServicesCallback callback) override;
  void RemoteServiceGetCharacteristics(const std::string& service_instance_id, WebBluetoothGATTQueryQuantity quantity, const base::Optional<device::BluetoothUUID>& characteristics_uuid, RemoteServiceGetCharacteristicsCallback callback) override;
  void RemoteCharacteristicReadValue(const std::string& characteristic_instance_id, RemoteCharacteristicReadValueCallback callback) override;
  void RemoteCharacteristicWriteValue(const std::string& characteristic_instance_id, const std::vector<uint8_t>& value, RemoteCharacteristicWriteValueCallback callback) override;
  void RemoteCharacteristicStartNotifications(const std::string& characteristic_instance_id, WebBluetoothCharacteristicClientAssociatedPtrInfo client, RemoteCharacteristicStartNotificationsCallback callback) override;
  void RemoteCharacteristicStopNotifications(const std::string& characteristic_instance_id, RemoteCharacteristicStopNotificationsCallback callback) override;
  void RemoteCharacteristicGetDescriptors(const std::string& characteristics_instance_id, WebBluetoothGATTQueryQuantity quantity, const base::Optional<device::BluetoothUUID>& descriptor_uuid, RemoteCharacteristicGetDescriptorsCallback callback) override;
  void RemoteDescriptorReadValue(const std::string& descriptor_instance_id, RemoteDescriptorReadValueCallback callback) override;
  void RemoteDescriptorWriteValue(const std::string& descriptor_instance_id, const std::vector<uint8_t>& value, RemoteDescriptorWriteValueCallback callback) override;
};
class CONTENT_EXPORT WebBluetoothServiceAsyncWaiter {
 public:
  explicit WebBluetoothServiceAsyncWaiter(WebBluetoothService* proxy);
  ~WebBluetoothServiceAsyncWaiter();
  void RequestDevice(
      WebBluetoothRequestDeviceOptionsPtr options, WebBluetoothResult* out_result, WebBluetoothDevicePtr* out_device);
  void RemoteServerConnect(
      const content::WebBluetoothDeviceId& device_id, WebBluetoothServerClientAssociatedPtrInfo client, WebBluetoothResult* out_result);
  void RemoteServerGetPrimaryServices(
      const content::WebBluetoothDeviceId& device_id, WebBluetoothGATTQueryQuantity quantity, const base::Optional<device::BluetoothUUID>& services_uuid, WebBluetoothResult* out_result, base::Optional<std::vector<WebBluetoothRemoteGATTServicePtr>>* out_services);
  void RemoteServiceGetCharacteristics(
      const std::string& service_instance_id, WebBluetoothGATTQueryQuantity quantity, const base::Optional<device::BluetoothUUID>& characteristics_uuid, WebBluetoothResult* out_result, base::Optional<std::vector<WebBluetoothRemoteGATTCharacteristicPtr>>* out_characteristics);
  void RemoteCharacteristicReadValue(
      const std::string& characteristic_instance_id, WebBluetoothResult* out_result, base::Optional<std::vector<uint8_t>>* out_value);
  void RemoteCharacteristicWriteValue(
      const std::string& characteristic_instance_id, const std::vector<uint8_t>& value, WebBluetoothResult* out_result);
  void RemoteCharacteristicStartNotifications(
      const std::string& characteristic_instance_id, WebBluetoothCharacteristicClientAssociatedPtrInfo client, WebBluetoothResult* out_result);
  void RemoteCharacteristicStopNotifications(
      const std::string& characteristic_instance_id);
  void RemoteCharacteristicGetDescriptors(
      const std::string& characteristics_instance_id, WebBluetoothGATTQueryQuantity quantity, const base::Optional<device::BluetoothUUID>& descriptor_uuid, WebBluetoothResult* out_result, base::Optional<std::vector<WebBluetoothRemoteGATTDescriptorPtr>>* out_descriptors);
  void RemoteDescriptorReadValue(
      const std::string& descriptor_instance_id, WebBluetoothResult* out_result, base::Optional<std::vector<uint8_t>>* out_value);
  void RemoteDescriptorWriteValue(
      const std::string& descriptor_instance_id, const std::vector<uint8_t>& value, WebBluetoothResult* out_result);

 private:
  WebBluetoothService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WebBluetoothServiceAsyncWaiter);
};

class WebBluetoothServerClientProxy;

template <typename ImplRefTraits>
class WebBluetoothServerClientStub;

class WebBluetoothServerClientRequestValidator;

class CONTENT_EXPORT WebBluetoothServerClient
    : public WebBluetoothServerClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = WebBluetoothServerClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = WebBluetoothServerClientStub<ImplRefTraits>;

  using RequestValidator_ = WebBluetoothServerClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kGATTServerDisconnectedMinVersion = 0,
  };
  virtual ~WebBluetoothServerClient() {}

  virtual void GATTServerDisconnected() = 0;
};
class CONTENT_EXPORT WebBluetoothServerClientInterceptorForTesting : public WebBluetoothServerClient {
  virtual WebBluetoothServerClient* GetForwardingInterface() = 0;
  void GATTServerDisconnected() override;
};
class CONTENT_EXPORT WebBluetoothServerClientAsyncWaiter {
 public:
  explicit WebBluetoothServerClientAsyncWaiter(WebBluetoothServerClient* proxy);
  ~WebBluetoothServerClientAsyncWaiter();

 private:
  WebBluetoothServerClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WebBluetoothServerClientAsyncWaiter);
};

class WebBluetoothCharacteristicClientProxy;

template <typename ImplRefTraits>
class WebBluetoothCharacteristicClientStub;

class WebBluetoothCharacteristicClientRequestValidator;

class CONTENT_EXPORT WebBluetoothCharacteristicClient
    : public WebBluetoothCharacteristicClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = WebBluetoothCharacteristicClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = WebBluetoothCharacteristicClientStub<ImplRefTraits>;

  using RequestValidator_ = WebBluetoothCharacteristicClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kRemoteCharacteristicValueChangedMinVersion = 0,
  };
  virtual ~WebBluetoothCharacteristicClient() {}

  virtual void RemoteCharacteristicValueChanged(const std::vector<uint8_t>& value) = 0;
};
class CONTENT_EXPORT WebBluetoothCharacteristicClientInterceptorForTesting : public WebBluetoothCharacteristicClient {
  virtual WebBluetoothCharacteristicClient* GetForwardingInterface() = 0;
  void RemoteCharacteristicValueChanged(const std::vector<uint8_t>& value) override;
};
class CONTENT_EXPORT WebBluetoothCharacteristicClientAsyncWaiter {
 public:
  explicit WebBluetoothCharacteristicClientAsyncWaiter(WebBluetoothCharacteristicClient* proxy);
  ~WebBluetoothCharacteristicClientAsyncWaiter();

 private:
  WebBluetoothCharacteristicClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WebBluetoothCharacteristicClientAsyncWaiter);
};

class CONTENT_EXPORT WebBluetoothServiceProxy
    : public WebBluetoothService {
 public:
  explicit WebBluetoothServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void RequestDevice(WebBluetoothRequestDeviceOptionsPtr options, RequestDeviceCallback callback) final;
  void RemoteServerConnect(const content::WebBluetoothDeviceId& device_id, WebBluetoothServerClientAssociatedPtrInfo client, RemoteServerConnectCallback callback) final;
  void RemoteServerDisconnect(const content::WebBluetoothDeviceId& device_id) final;
  void RemoteServerGetPrimaryServices(const content::WebBluetoothDeviceId& device_id, WebBluetoothGATTQueryQuantity quantity, const base::Optional<device::BluetoothUUID>& services_uuid, RemoteServerGetPrimaryServicesCallback callback) final;
  void RemoteServiceGetCharacteristics(const std::string& service_instance_id, WebBluetoothGATTQueryQuantity quantity, const base::Optional<device::BluetoothUUID>& characteristics_uuid, RemoteServiceGetCharacteristicsCallback callback) final;
  void RemoteCharacteristicReadValue(const std::string& characteristic_instance_id, RemoteCharacteristicReadValueCallback callback) final;
  void RemoteCharacteristicWriteValue(const std::string& characteristic_instance_id, const std::vector<uint8_t>& value, RemoteCharacteristicWriteValueCallback callback) final;
  void RemoteCharacteristicStartNotifications(const std::string& characteristic_instance_id, WebBluetoothCharacteristicClientAssociatedPtrInfo client, RemoteCharacteristicStartNotificationsCallback callback) final;
  void RemoteCharacteristicStopNotifications(const std::string& characteristic_instance_id, RemoteCharacteristicStopNotificationsCallback callback) final;
  void RemoteCharacteristicGetDescriptors(const std::string& characteristics_instance_id, WebBluetoothGATTQueryQuantity quantity, const base::Optional<device::BluetoothUUID>& descriptor_uuid, RemoteCharacteristicGetDescriptorsCallback callback) final;
  void RemoteDescriptorReadValue(const std::string& descriptor_instance_id, RemoteDescriptorReadValueCallback callback) final;
  void RemoteDescriptorWriteValue(const std::string& descriptor_instance_id, const std::vector<uint8_t>& value, RemoteDescriptorWriteValueCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT WebBluetoothServerClientProxy
    : public WebBluetoothServerClient {
 public:
  explicit WebBluetoothServerClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void GATTServerDisconnected() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT WebBluetoothCharacteristicClientProxy
    : public WebBluetoothCharacteristicClient {
 public:
  explicit WebBluetoothCharacteristicClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void RemoteCharacteristicValueChanged(const std::vector<uint8_t>& value) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT WebBluetoothServiceStubDispatch {
 public:
  static bool Accept(WebBluetoothService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      WebBluetoothService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<WebBluetoothService>>
class WebBluetoothServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  WebBluetoothServiceStub() {}
  ~WebBluetoothServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WebBluetoothServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WebBluetoothServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT WebBluetoothServerClientStubDispatch {
 public:
  static bool Accept(WebBluetoothServerClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      WebBluetoothServerClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<WebBluetoothServerClient>>
class WebBluetoothServerClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  WebBluetoothServerClientStub() {}
  ~WebBluetoothServerClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WebBluetoothServerClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WebBluetoothServerClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT WebBluetoothCharacteristicClientStubDispatch {
 public:
  static bool Accept(WebBluetoothCharacteristicClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      WebBluetoothCharacteristicClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<WebBluetoothCharacteristicClient>>
class WebBluetoothCharacteristicClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  WebBluetoothCharacteristicClientStub() {}
  ~WebBluetoothCharacteristicClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WebBluetoothCharacteristicClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WebBluetoothCharacteristicClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT WebBluetoothServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT WebBluetoothServerClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT WebBluetoothCharacteristicClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT WebBluetoothServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};




class CONTENT_EXPORT WebBluetoothDeviceId {
 public:
  using DataView = WebBluetoothDeviceIdDataView;
  using Data_ = internal::WebBluetoothDeviceId_Data;

  template <typename... Args>
  static WebBluetoothDeviceIdPtr New(Args&&... args) {
    return WebBluetoothDeviceIdPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static WebBluetoothDeviceIdPtr From(const U& u) {
    return mojo::TypeConverter<WebBluetoothDeviceIdPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WebBluetoothDeviceId>::Convert(*this);
  }


  WebBluetoothDeviceId();

  explicit WebBluetoothDeviceId(
      const std::string& device_id);

  ~WebBluetoothDeviceId();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WebBluetoothDeviceIdPtr>
  WebBluetoothDeviceIdPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WebBluetoothDeviceId>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        WebBluetoothDeviceId::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        WebBluetoothDeviceId::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::WebBluetoothDeviceId_UnserializedMessageContext<
            UserType, WebBluetoothDeviceId::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<WebBluetoothDeviceId::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return WebBluetoothDeviceId::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::WebBluetoothDeviceId_UnserializedMessageContext<
            UserType, WebBluetoothDeviceId::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<WebBluetoothDeviceId::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string device_id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};








class CONTENT_EXPORT WebBluetoothLeScanFilter {
 public:
  using DataView = WebBluetoothLeScanFilterDataView;
  using Data_ = internal::WebBluetoothLeScanFilter_Data;

  template <typename... Args>
  static WebBluetoothLeScanFilterPtr New(Args&&... args) {
    return WebBluetoothLeScanFilterPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static WebBluetoothLeScanFilterPtr From(const U& u) {
    return mojo::TypeConverter<WebBluetoothLeScanFilterPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WebBluetoothLeScanFilter>::Convert(*this);
  }


  WebBluetoothLeScanFilter();

  WebBluetoothLeScanFilter(
      const base::Optional<std::vector<device::BluetoothUUID>>& services,
      const base::Optional<std::string>& name,
      const base::Optional<std::string>& name_prefix);

  ~WebBluetoothLeScanFilter();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WebBluetoothLeScanFilterPtr>
  WebBluetoothLeScanFilterPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WebBluetoothLeScanFilter>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        WebBluetoothLeScanFilter::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        WebBluetoothLeScanFilter::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::WebBluetoothLeScanFilter_UnserializedMessageContext<
            UserType, WebBluetoothLeScanFilter::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<WebBluetoothLeScanFilter::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return WebBluetoothLeScanFilter::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::WebBluetoothLeScanFilter_UnserializedMessageContext<
            UserType, WebBluetoothLeScanFilter::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<WebBluetoothLeScanFilter::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  base::Optional<std::vector<device::BluetoothUUID>> services;
  base::Optional<std::string> name;
  base::Optional<std::string> name_prefix;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class CONTENT_EXPORT WebBluetoothRequestDeviceOptions {
 public:
  using DataView = WebBluetoothRequestDeviceOptionsDataView;
  using Data_ = internal::WebBluetoothRequestDeviceOptions_Data;

  template <typename... Args>
  static WebBluetoothRequestDeviceOptionsPtr New(Args&&... args) {
    return WebBluetoothRequestDeviceOptionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static WebBluetoothRequestDeviceOptionsPtr From(const U& u) {
    return mojo::TypeConverter<WebBluetoothRequestDeviceOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WebBluetoothRequestDeviceOptions>::Convert(*this);
  }


  WebBluetoothRequestDeviceOptions();

  WebBluetoothRequestDeviceOptions(
      base::Optional<std::vector<WebBluetoothLeScanFilterPtr>> filters,
      const std::vector<device::BluetoothUUID>& optional_services,
      bool accept_all_devices);

  ~WebBluetoothRequestDeviceOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WebBluetoothRequestDeviceOptionsPtr>
  WebBluetoothRequestDeviceOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WebBluetoothRequestDeviceOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        WebBluetoothRequestDeviceOptions::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        WebBluetoothRequestDeviceOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::WebBluetoothRequestDeviceOptions_UnserializedMessageContext<
            UserType, WebBluetoothRequestDeviceOptions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<WebBluetoothRequestDeviceOptions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return WebBluetoothRequestDeviceOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::WebBluetoothRequestDeviceOptions_UnserializedMessageContext<
            UserType, WebBluetoothRequestDeviceOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<WebBluetoothRequestDeviceOptions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  base::Optional<std::vector<WebBluetoothLeScanFilterPtr>> filters;
  std::vector<device::BluetoothUUID> optional_services;
  bool accept_all_devices;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(WebBluetoothRequestDeviceOptions);
};



class CONTENT_EXPORT WebBluetoothDevice {
 public:
  using DataView = WebBluetoothDeviceDataView;
  using Data_ = internal::WebBluetoothDevice_Data;

  template <typename... Args>
  static WebBluetoothDevicePtr New(Args&&... args) {
    return WebBluetoothDevicePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static WebBluetoothDevicePtr From(const U& u) {
    return mojo::TypeConverter<WebBluetoothDevicePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WebBluetoothDevice>::Convert(*this);
  }


  WebBluetoothDevice();

  WebBluetoothDevice(
      const content::WebBluetoothDeviceId& id,
      const base::Optional<std::string>& name);

  ~WebBluetoothDevice();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WebBluetoothDevicePtr>
  WebBluetoothDevicePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WebBluetoothDevice>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        WebBluetoothDevice::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        WebBluetoothDevice::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::WebBluetoothDevice_UnserializedMessageContext<
            UserType, WebBluetoothDevice::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<WebBluetoothDevice::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return WebBluetoothDevice::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::WebBluetoothDevice_UnserializedMessageContext<
            UserType, WebBluetoothDevice::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<WebBluetoothDevice::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  content::WebBluetoothDeviceId id;
  base::Optional<std::string> name;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class CONTENT_EXPORT WebBluetoothRemoteGATTService {
 public:
  using DataView = WebBluetoothRemoteGATTServiceDataView;
  using Data_ = internal::WebBluetoothRemoteGATTService_Data;

  template <typename... Args>
  static WebBluetoothRemoteGATTServicePtr New(Args&&... args) {
    return WebBluetoothRemoteGATTServicePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static WebBluetoothRemoteGATTServicePtr From(const U& u) {
    return mojo::TypeConverter<WebBluetoothRemoteGATTServicePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WebBluetoothRemoteGATTService>::Convert(*this);
  }


  WebBluetoothRemoteGATTService();

  WebBluetoothRemoteGATTService(
      const std::string& instance_id,
      const device::BluetoothUUID& uuid);

  ~WebBluetoothRemoteGATTService();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WebBluetoothRemoteGATTServicePtr>
  WebBluetoothRemoteGATTServicePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WebBluetoothRemoteGATTService>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        WebBluetoothRemoteGATTService::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        WebBluetoothRemoteGATTService::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::WebBluetoothRemoteGATTService_UnserializedMessageContext<
            UserType, WebBluetoothRemoteGATTService::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<WebBluetoothRemoteGATTService::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return WebBluetoothRemoteGATTService::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::WebBluetoothRemoteGATTService_UnserializedMessageContext<
            UserType, WebBluetoothRemoteGATTService::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<WebBluetoothRemoteGATTService::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string instance_id;
  device::BluetoothUUID uuid;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class CONTENT_EXPORT WebBluetoothRemoteGATTCharacteristic {
 public:
  using DataView = WebBluetoothRemoteGATTCharacteristicDataView;
  using Data_ = internal::WebBluetoothRemoteGATTCharacteristic_Data;

  template <typename... Args>
  static WebBluetoothRemoteGATTCharacteristicPtr New(Args&&... args) {
    return WebBluetoothRemoteGATTCharacteristicPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static WebBluetoothRemoteGATTCharacteristicPtr From(const U& u) {
    return mojo::TypeConverter<WebBluetoothRemoteGATTCharacteristicPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WebBluetoothRemoteGATTCharacteristic>::Convert(*this);
  }


  WebBluetoothRemoteGATTCharacteristic();

  WebBluetoothRemoteGATTCharacteristic(
      const std::string& instance_id,
      const device::BluetoothUUID& uuid,
      uint32_t properties);

  ~WebBluetoothRemoteGATTCharacteristic();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WebBluetoothRemoteGATTCharacteristicPtr>
  WebBluetoothRemoteGATTCharacteristicPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WebBluetoothRemoteGATTCharacteristic>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        WebBluetoothRemoteGATTCharacteristic::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        WebBluetoothRemoteGATTCharacteristic::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::WebBluetoothRemoteGATTCharacteristic_UnserializedMessageContext<
            UserType, WebBluetoothRemoteGATTCharacteristic::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<WebBluetoothRemoteGATTCharacteristic::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return WebBluetoothRemoteGATTCharacteristic::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::WebBluetoothRemoteGATTCharacteristic_UnserializedMessageContext<
            UserType, WebBluetoothRemoteGATTCharacteristic::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<WebBluetoothRemoteGATTCharacteristic::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string instance_id;
  device::BluetoothUUID uuid;
  uint32_t properties;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class CONTENT_EXPORT WebBluetoothRemoteGATTDescriptor {
 public:
  using DataView = WebBluetoothRemoteGATTDescriptorDataView;
  using Data_ = internal::WebBluetoothRemoteGATTDescriptor_Data;

  template <typename... Args>
  static WebBluetoothRemoteGATTDescriptorPtr New(Args&&... args) {
    return WebBluetoothRemoteGATTDescriptorPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static WebBluetoothRemoteGATTDescriptorPtr From(const U& u) {
    return mojo::TypeConverter<WebBluetoothRemoteGATTDescriptorPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WebBluetoothRemoteGATTDescriptor>::Convert(*this);
  }


  WebBluetoothRemoteGATTDescriptor();

  WebBluetoothRemoteGATTDescriptor(
      const std::string& instance_id,
      const device::BluetoothUUID& uuid);

  ~WebBluetoothRemoteGATTDescriptor();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WebBluetoothRemoteGATTDescriptorPtr>
  WebBluetoothRemoteGATTDescriptorPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WebBluetoothRemoteGATTDescriptor>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        WebBluetoothRemoteGATTDescriptor::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        WebBluetoothRemoteGATTDescriptor::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::WebBluetoothRemoteGATTDescriptor_UnserializedMessageContext<
            UserType, WebBluetoothRemoteGATTDescriptor::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<WebBluetoothRemoteGATTDescriptor::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return WebBluetoothRemoteGATTDescriptor::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::WebBluetoothRemoteGATTDescriptor_UnserializedMessageContext<
            UserType, WebBluetoothRemoteGATTDescriptor::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<WebBluetoothRemoteGATTDescriptor::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string instance_id;
  device::BluetoothUUID uuid;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
WebBluetoothLeScanFilterPtr WebBluetoothLeScanFilter::Clone() const {
  return New(
      mojo::Clone(services),
      mojo::Clone(name),
      mojo::Clone(name_prefix)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WebBluetoothLeScanFilter>::value>::type*>
bool WebBluetoothLeScanFilter::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->services, other_struct.services))
    return false;
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->name_prefix, other_struct.name_prefix))
    return false;
  return true;
}
template <typename StructPtrType>
WebBluetoothRequestDeviceOptionsPtr WebBluetoothRequestDeviceOptions::Clone() const {
  return New(
      mojo::Clone(filters),
      mojo::Clone(optional_services),
      mojo::Clone(accept_all_devices)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WebBluetoothRequestDeviceOptions>::value>::type*>
bool WebBluetoothRequestDeviceOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->filters, other_struct.filters))
    return false;
  if (!mojo::Equals(this->optional_services, other_struct.optional_services))
    return false;
  if (!mojo::Equals(this->accept_all_devices, other_struct.accept_all_devices))
    return false;
  return true;
}
template <typename StructPtrType>
WebBluetoothDeviceIdPtr WebBluetoothDeviceId::Clone() const {
  return New(
      mojo::Clone(device_id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WebBluetoothDeviceId>::value>::type*>
bool WebBluetoothDeviceId::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->device_id, other_struct.device_id))
    return false;
  return true;
}
template <typename StructPtrType>
WebBluetoothDevicePtr WebBluetoothDevice::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(name)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WebBluetoothDevice>::value>::type*>
bool WebBluetoothDevice::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  return true;
}
template <typename StructPtrType>
WebBluetoothRemoteGATTServicePtr WebBluetoothRemoteGATTService::Clone() const {
  return New(
      mojo::Clone(instance_id),
      mojo::Clone(uuid)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WebBluetoothRemoteGATTService>::value>::type*>
bool WebBluetoothRemoteGATTService::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->instance_id, other_struct.instance_id))
    return false;
  if (!mojo::Equals(this->uuid, other_struct.uuid))
    return false;
  return true;
}
template <typename StructPtrType>
WebBluetoothRemoteGATTCharacteristicPtr WebBluetoothRemoteGATTCharacteristic::Clone() const {
  return New(
      mojo::Clone(instance_id),
      mojo::Clone(uuid),
      mojo::Clone(properties)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WebBluetoothRemoteGATTCharacteristic>::value>::type*>
bool WebBluetoothRemoteGATTCharacteristic::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->instance_id, other_struct.instance_id))
    return false;
  if (!mojo::Equals(this->uuid, other_struct.uuid))
    return false;
  if (!mojo::Equals(this->properties, other_struct.properties))
    return false;
  return true;
}
template <typename StructPtrType>
WebBluetoothRemoteGATTDescriptorPtr WebBluetoothRemoteGATTDescriptor::Clone() const {
  return New(
      mojo::Clone(instance_id),
      mojo::Clone(uuid)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WebBluetoothRemoteGATTDescriptor>::value>::type*>
bool WebBluetoothRemoteGATTDescriptor::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->instance_id, other_struct.instance_id))
    return false;
  if (!mojo::Equals(this->uuid, other_struct.uuid))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct CONTENT_EXPORT StructTraits<::blink::mojom::WebBluetoothLeScanFilter::DataView,
                                         ::blink::mojom::WebBluetoothLeScanFilterPtr> {
  static bool IsNull(const ::blink::mojom::WebBluetoothLeScanFilterPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::WebBluetoothLeScanFilterPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::WebBluetoothLeScanFilter::services)& services(
      const ::blink::mojom::WebBluetoothLeScanFilterPtr& input) {
    return input->services;
  }

  static const decltype(::blink::mojom::WebBluetoothLeScanFilter::name)& name(
      const ::blink::mojom::WebBluetoothLeScanFilterPtr& input) {
    return input->name;
  }

  static const decltype(::blink::mojom::WebBluetoothLeScanFilter::name_prefix)& name_prefix(
      const ::blink::mojom::WebBluetoothLeScanFilterPtr& input) {
    return input->name_prefix;
  }

  static bool Read(::blink::mojom::WebBluetoothLeScanFilter::DataView input, ::blink::mojom::WebBluetoothLeScanFilterPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::blink::mojom::WebBluetoothRequestDeviceOptions::DataView,
                                         ::blink::mojom::WebBluetoothRequestDeviceOptionsPtr> {
  static bool IsNull(const ::blink::mojom::WebBluetoothRequestDeviceOptionsPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::WebBluetoothRequestDeviceOptionsPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::WebBluetoothRequestDeviceOptions::filters)& filters(
      const ::blink::mojom::WebBluetoothRequestDeviceOptionsPtr& input) {
    return input->filters;
  }

  static const decltype(::blink::mojom::WebBluetoothRequestDeviceOptions::optional_services)& optional_services(
      const ::blink::mojom::WebBluetoothRequestDeviceOptionsPtr& input) {
    return input->optional_services;
  }

  static decltype(::blink::mojom::WebBluetoothRequestDeviceOptions::accept_all_devices) accept_all_devices(
      const ::blink::mojom::WebBluetoothRequestDeviceOptionsPtr& input) {
    return input->accept_all_devices;
  }

  static bool Read(::blink::mojom::WebBluetoothRequestDeviceOptions::DataView input, ::blink::mojom::WebBluetoothRequestDeviceOptionsPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::blink::mojom::WebBluetoothDeviceId::DataView,
                                         ::blink::mojom::WebBluetoothDeviceIdPtr> {
  static bool IsNull(const ::blink::mojom::WebBluetoothDeviceIdPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::WebBluetoothDeviceIdPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::WebBluetoothDeviceId::device_id)& device_id(
      const ::blink::mojom::WebBluetoothDeviceIdPtr& input) {
    return input->device_id;
  }

  static bool Read(::blink::mojom::WebBluetoothDeviceId::DataView input, ::blink::mojom::WebBluetoothDeviceIdPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::blink::mojom::WebBluetoothDevice::DataView,
                                         ::blink::mojom::WebBluetoothDevicePtr> {
  static bool IsNull(const ::blink::mojom::WebBluetoothDevicePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::WebBluetoothDevicePtr* output) { output->reset(); }

  static const decltype(::blink::mojom::WebBluetoothDevice::id)& id(
      const ::blink::mojom::WebBluetoothDevicePtr& input) {
    return input->id;
  }

  static const decltype(::blink::mojom::WebBluetoothDevice::name)& name(
      const ::blink::mojom::WebBluetoothDevicePtr& input) {
    return input->name;
  }

  static bool Read(::blink::mojom::WebBluetoothDevice::DataView input, ::blink::mojom::WebBluetoothDevicePtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::blink::mojom::WebBluetoothRemoteGATTService::DataView,
                                         ::blink::mojom::WebBluetoothRemoteGATTServicePtr> {
  static bool IsNull(const ::blink::mojom::WebBluetoothRemoteGATTServicePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::WebBluetoothRemoteGATTServicePtr* output) { output->reset(); }

  static const decltype(::blink::mojom::WebBluetoothRemoteGATTService::instance_id)& instance_id(
      const ::blink::mojom::WebBluetoothRemoteGATTServicePtr& input) {
    return input->instance_id;
  }

  static const decltype(::blink::mojom::WebBluetoothRemoteGATTService::uuid)& uuid(
      const ::blink::mojom::WebBluetoothRemoteGATTServicePtr& input) {
    return input->uuid;
  }

  static bool Read(::blink::mojom::WebBluetoothRemoteGATTService::DataView input, ::blink::mojom::WebBluetoothRemoteGATTServicePtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::blink::mojom::WebBluetoothRemoteGATTCharacteristic::DataView,
                                         ::blink::mojom::WebBluetoothRemoteGATTCharacteristicPtr> {
  static bool IsNull(const ::blink::mojom::WebBluetoothRemoteGATTCharacteristicPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::WebBluetoothRemoteGATTCharacteristicPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::WebBluetoothRemoteGATTCharacteristic::instance_id)& instance_id(
      const ::blink::mojom::WebBluetoothRemoteGATTCharacteristicPtr& input) {
    return input->instance_id;
  }

  static const decltype(::blink::mojom::WebBluetoothRemoteGATTCharacteristic::uuid)& uuid(
      const ::blink::mojom::WebBluetoothRemoteGATTCharacteristicPtr& input) {
    return input->uuid;
  }

  static decltype(::blink::mojom::WebBluetoothRemoteGATTCharacteristic::properties) properties(
      const ::blink::mojom::WebBluetoothRemoteGATTCharacteristicPtr& input) {
    return input->properties;
  }

  static bool Read(::blink::mojom::WebBluetoothRemoteGATTCharacteristic::DataView input, ::blink::mojom::WebBluetoothRemoteGATTCharacteristicPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::blink::mojom::WebBluetoothRemoteGATTDescriptor::DataView,
                                         ::blink::mojom::WebBluetoothRemoteGATTDescriptorPtr> {
  static bool IsNull(const ::blink::mojom::WebBluetoothRemoteGATTDescriptorPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::WebBluetoothRemoteGATTDescriptorPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::WebBluetoothRemoteGATTDescriptor::instance_id)& instance_id(
      const ::blink::mojom::WebBluetoothRemoteGATTDescriptorPtr& input) {
    return input->instance_id;
  }

  static const decltype(::blink::mojom::WebBluetoothRemoteGATTDescriptor::uuid)& uuid(
      const ::blink::mojom::WebBluetoothRemoteGATTDescriptorPtr& input) {
    return input->uuid;
  }

  static bool Read(::blink::mojom::WebBluetoothRemoteGATTDescriptor::DataView input, ::blink::mojom::WebBluetoothRemoteGATTDescriptorPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BLUETOOTH_WEB_BLUETOOTH_MOJOM_H_