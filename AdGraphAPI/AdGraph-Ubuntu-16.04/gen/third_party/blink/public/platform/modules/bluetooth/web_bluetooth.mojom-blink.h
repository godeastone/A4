// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BLUETOOTH_WEB_BLUETOOTH_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BLUETOOTH_WEB_BLUETOOTH_MOJOM_BLINK_H_

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
#include "device/bluetooth/public/mojom/uuid.mojom-blink.h"

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
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/public/platform/web_common.h"


namespace WTF {
struct blink_mojom_internal_WebBluetoothResult_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::WebBluetoothResult& value) {
    using utype = std::underlying_type<::blink::mojom::WebBluetoothResult>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::WebBluetoothResult& left, const ::blink::mojom::WebBluetoothResult& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::blink::mojom::WebBluetoothResult> {
  using Hash = blink_mojom_internal_WebBluetoothResult_DataHashFn;
};

template <>
struct HashTraits<::blink::mojom::WebBluetoothResult>
    : public GenericHashTraits<::blink::mojom::WebBluetoothResult> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::WebBluetoothResult& value) {
    return value == static_cast<::blink::mojom::WebBluetoothResult>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::WebBluetoothResult& slot, bool) {
    slot = static_cast<::blink::mojom::WebBluetoothResult>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::WebBluetoothResult& value) {
    return value == static_cast<::blink::mojom::WebBluetoothResult>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_WebBluetoothGATTQueryQuantity_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::WebBluetoothGATTQueryQuantity& value) {
    using utype = std::underlying_type<::blink::mojom::WebBluetoothGATTQueryQuantity>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::WebBluetoothGATTQueryQuantity& left, const ::blink::mojom::WebBluetoothGATTQueryQuantity& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::blink::mojom::WebBluetoothGATTQueryQuantity> {
  using Hash = blink_mojom_internal_WebBluetoothGATTQueryQuantity_DataHashFn;
};

template <>
struct HashTraits<::blink::mojom::WebBluetoothGATTQueryQuantity>
    : public GenericHashTraits<::blink::mojom::WebBluetoothGATTQueryQuantity> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::WebBluetoothGATTQueryQuantity& value) {
    return value == static_cast<::blink::mojom::WebBluetoothGATTQueryQuantity>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::WebBluetoothGATTQueryQuantity& slot, bool) {
    slot = static_cast<::blink::mojom::WebBluetoothGATTQueryQuantity>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::WebBluetoothGATTQueryQuantity& value) {
    return value == static_cast<::blink::mojom::WebBluetoothGATTQueryQuantity>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using WebBluetoothResult = WebBluetoothResult;  // Alias for definition in the parent namespace.
using WebBluetoothGATTQueryQuantity = WebBluetoothGATTQueryQuantity;  // Alias for definition in the parent namespace.
class WebBluetoothService;
using WebBluetoothServicePtr = mojo::InterfacePtr<WebBluetoothService>;
using RevocableWebBluetoothServicePtr = ::blink::RevocableInterfacePtr<WebBluetoothService>;
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
using RevocableWebBluetoothServerClientPtr = ::blink::RevocableInterfacePtr<WebBluetoothServerClient>;
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
using RevocableWebBluetoothCharacteristicClientPtr = ::blink::RevocableInterfacePtr<WebBluetoothCharacteristicClient>;
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

class BLINK_PLATFORM_EXPORT WebBluetoothService
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
  virtual void RemoteServerConnect(const WTF::String& device_id, WebBluetoothServerClientAssociatedPtrInfo client, RemoteServerConnectCallback callback) = 0;

  virtual void RemoteServerDisconnect(const WTF::String& device_id) = 0;


  using RemoteServerGetPrimaryServicesCallback = base::OnceCallback<void(WebBluetoothResult, base::Optional<WTF::Vector<WebBluetoothRemoteGATTServicePtr>>)>;
  virtual void RemoteServerGetPrimaryServices(const WTF::String& device_id, WebBluetoothGATTQueryQuantity quantity, const WTF::String& services_uuid, RemoteServerGetPrimaryServicesCallback callback) = 0;


  using RemoteServiceGetCharacteristicsCallback = base::OnceCallback<void(WebBluetoothResult, base::Optional<WTF::Vector<WebBluetoothRemoteGATTCharacteristicPtr>>)>;
  virtual void RemoteServiceGetCharacteristics(const WTF::String& service_instance_id, WebBluetoothGATTQueryQuantity quantity, const WTF::String& characteristics_uuid, RemoteServiceGetCharacteristicsCallback callback) = 0;


  using RemoteCharacteristicReadValueCallback = base::OnceCallback<void(WebBluetoothResult, const base::Optional<WTF::Vector<uint8_t>>&)>;
  virtual void RemoteCharacteristicReadValue(const WTF::String& characteristic_instance_id, RemoteCharacteristicReadValueCallback callback) = 0;


  using RemoteCharacteristicWriteValueCallback = base::OnceCallback<void(WebBluetoothResult)>;
  virtual void RemoteCharacteristicWriteValue(const WTF::String& characteristic_instance_id, const WTF::Vector<uint8_t>& value, RemoteCharacteristicWriteValueCallback callback) = 0;


  using RemoteCharacteristicStartNotificationsCallback = base::OnceCallback<void(WebBluetoothResult)>;
  virtual void RemoteCharacteristicStartNotifications(const WTF::String& characteristic_instance_id, WebBluetoothCharacteristicClientAssociatedPtrInfo client, RemoteCharacteristicStartNotificationsCallback callback) = 0;


  using RemoteCharacteristicStopNotificationsCallback = base::OnceCallback<void()>;
  virtual void RemoteCharacteristicStopNotifications(const WTF::String& characteristic_instance_id, RemoteCharacteristicStopNotificationsCallback callback) = 0;


  using RemoteCharacteristicGetDescriptorsCallback = base::OnceCallback<void(WebBluetoothResult, base::Optional<WTF::Vector<WebBluetoothRemoteGATTDescriptorPtr>>)>;
  virtual void RemoteCharacteristicGetDescriptors(const WTF::String& characteristics_instance_id, WebBluetoothGATTQueryQuantity quantity, const WTF::String& descriptor_uuid, RemoteCharacteristicGetDescriptorsCallback callback) = 0;


  using RemoteDescriptorReadValueCallback = base::OnceCallback<void(WebBluetoothResult, const base::Optional<WTF::Vector<uint8_t>>&)>;
  virtual void RemoteDescriptorReadValue(const WTF::String& descriptor_instance_id, RemoteDescriptorReadValueCallback callback) = 0;


  using RemoteDescriptorWriteValueCallback = base::OnceCallback<void(WebBluetoothResult)>;
  virtual void RemoteDescriptorWriteValue(const WTF::String& descriptor_instance_id, const WTF::Vector<uint8_t>& value, RemoteDescriptorWriteValueCallback callback) = 0;
};
class BLINK_PLATFORM_EXPORT WebBluetoothServiceInterceptorForTesting : public WebBluetoothService {
  virtual WebBluetoothService* GetForwardingInterface() = 0;
  void RequestDevice(WebBluetoothRequestDeviceOptionsPtr options, RequestDeviceCallback callback) override;
  void RemoteServerConnect(const WTF::String& device_id, WebBluetoothServerClientAssociatedPtrInfo client, RemoteServerConnectCallback callback) override;
  void RemoteServerDisconnect(const WTF::String& device_id) override;
  void RemoteServerGetPrimaryServices(const WTF::String& device_id, WebBluetoothGATTQueryQuantity quantity, const WTF::String& services_uuid, RemoteServerGetPrimaryServicesCallback callback) override;
  void RemoteServiceGetCharacteristics(const WTF::String& service_instance_id, WebBluetoothGATTQueryQuantity quantity, const WTF::String& characteristics_uuid, RemoteServiceGetCharacteristicsCallback callback) override;
  void RemoteCharacteristicReadValue(const WTF::String& characteristic_instance_id, RemoteCharacteristicReadValueCallback callback) override;
  void RemoteCharacteristicWriteValue(const WTF::String& characteristic_instance_id, const WTF::Vector<uint8_t>& value, RemoteCharacteristicWriteValueCallback callback) override;
  void RemoteCharacteristicStartNotifications(const WTF::String& characteristic_instance_id, WebBluetoothCharacteristicClientAssociatedPtrInfo client, RemoteCharacteristicStartNotificationsCallback callback) override;
  void RemoteCharacteristicStopNotifications(const WTF::String& characteristic_instance_id, RemoteCharacteristicStopNotificationsCallback callback) override;
  void RemoteCharacteristicGetDescriptors(const WTF::String& characteristics_instance_id, WebBluetoothGATTQueryQuantity quantity, const WTF::String& descriptor_uuid, RemoteCharacteristicGetDescriptorsCallback callback) override;
  void RemoteDescriptorReadValue(const WTF::String& descriptor_instance_id, RemoteDescriptorReadValueCallback callback) override;
  void RemoteDescriptorWriteValue(const WTF::String& descriptor_instance_id, const WTF::Vector<uint8_t>& value, RemoteDescriptorWriteValueCallback callback) override;
};
class BLINK_PLATFORM_EXPORT WebBluetoothServiceAsyncWaiter {
 public:
  explicit WebBluetoothServiceAsyncWaiter(WebBluetoothService* proxy);
  ~WebBluetoothServiceAsyncWaiter();
  void RequestDevice(
      WebBluetoothRequestDeviceOptionsPtr options, WebBluetoothResult* out_result, WebBluetoothDevicePtr* out_device);
  void RemoteServerConnect(
      const WTF::String& device_id, WebBluetoothServerClientAssociatedPtrInfo client, WebBluetoothResult* out_result);
  void RemoteServerGetPrimaryServices(
      const WTF::String& device_id, WebBluetoothGATTQueryQuantity quantity, const WTF::String& services_uuid, WebBluetoothResult* out_result, base::Optional<WTF::Vector<WebBluetoothRemoteGATTServicePtr>>* out_services);
  void RemoteServiceGetCharacteristics(
      const WTF::String& service_instance_id, WebBluetoothGATTQueryQuantity quantity, const WTF::String& characteristics_uuid, WebBluetoothResult* out_result, base::Optional<WTF::Vector<WebBluetoothRemoteGATTCharacteristicPtr>>* out_characteristics);
  void RemoteCharacteristicReadValue(
      const WTF::String& characteristic_instance_id, WebBluetoothResult* out_result, base::Optional<WTF::Vector<uint8_t>>* out_value);
  void RemoteCharacteristicWriteValue(
      const WTF::String& characteristic_instance_id, const WTF::Vector<uint8_t>& value, WebBluetoothResult* out_result);
  void RemoteCharacteristicStartNotifications(
      const WTF::String& characteristic_instance_id, WebBluetoothCharacteristicClientAssociatedPtrInfo client, WebBluetoothResult* out_result);
  void RemoteCharacteristicStopNotifications(
      const WTF::String& characteristic_instance_id);
  void RemoteCharacteristicGetDescriptors(
      const WTF::String& characteristics_instance_id, WebBluetoothGATTQueryQuantity quantity, const WTF::String& descriptor_uuid, WebBluetoothResult* out_result, base::Optional<WTF::Vector<WebBluetoothRemoteGATTDescriptorPtr>>* out_descriptors);
  void RemoteDescriptorReadValue(
      const WTF::String& descriptor_instance_id, WebBluetoothResult* out_result, base::Optional<WTF::Vector<uint8_t>>* out_value);
  void RemoteDescriptorWriteValue(
      const WTF::String& descriptor_instance_id, const WTF::Vector<uint8_t>& value, WebBluetoothResult* out_result);

 private:
  WebBluetoothService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WebBluetoothServiceAsyncWaiter);
};

class WebBluetoothServerClientProxy;

template <typename ImplRefTraits>
class WebBluetoothServerClientStub;

class WebBluetoothServerClientRequestValidator;

class BLINK_PLATFORM_EXPORT WebBluetoothServerClient
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
class BLINK_PLATFORM_EXPORT WebBluetoothServerClientInterceptorForTesting : public WebBluetoothServerClient {
  virtual WebBluetoothServerClient* GetForwardingInterface() = 0;
  void GATTServerDisconnected() override;
};
class BLINK_PLATFORM_EXPORT WebBluetoothServerClientAsyncWaiter {
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

class BLINK_PLATFORM_EXPORT WebBluetoothCharacteristicClient
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

  virtual void RemoteCharacteristicValueChanged(const WTF::Vector<uint8_t>& value) = 0;
};
class BLINK_PLATFORM_EXPORT WebBluetoothCharacteristicClientInterceptorForTesting : public WebBluetoothCharacteristicClient {
  virtual WebBluetoothCharacteristicClient* GetForwardingInterface() = 0;
  void RemoteCharacteristicValueChanged(const WTF::Vector<uint8_t>& value) override;
};
class BLINK_PLATFORM_EXPORT WebBluetoothCharacteristicClientAsyncWaiter {
 public:
  explicit WebBluetoothCharacteristicClientAsyncWaiter(WebBluetoothCharacteristicClient* proxy);
  ~WebBluetoothCharacteristicClientAsyncWaiter();

 private:
  WebBluetoothCharacteristicClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WebBluetoothCharacteristicClientAsyncWaiter);
};

class BLINK_PLATFORM_EXPORT WebBluetoothServiceProxy
    : public WebBluetoothService {
 public:
  explicit WebBluetoothServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void RequestDevice(WebBluetoothRequestDeviceOptionsPtr options, RequestDeviceCallback callback) final;
  void RemoteServerConnect(const WTF::String& device_id, WebBluetoothServerClientAssociatedPtrInfo client, RemoteServerConnectCallback callback) final;
  void RemoteServerDisconnect(const WTF::String& device_id) final;
  void RemoteServerGetPrimaryServices(const WTF::String& device_id, WebBluetoothGATTQueryQuantity quantity, const WTF::String& services_uuid, RemoteServerGetPrimaryServicesCallback callback) final;
  void RemoteServiceGetCharacteristics(const WTF::String& service_instance_id, WebBluetoothGATTQueryQuantity quantity, const WTF::String& characteristics_uuid, RemoteServiceGetCharacteristicsCallback callback) final;
  void RemoteCharacteristicReadValue(const WTF::String& characteristic_instance_id, RemoteCharacteristicReadValueCallback callback) final;
  void RemoteCharacteristicWriteValue(const WTF::String& characteristic_instance_id, const WTF::Vector<uint8_t>& value, RemoteCharacteristicWriteValueCallback callback) final;
  void RemoteCharacteristicStartNotifications(const WTF::String& characteristic_instance_id, WebBluetoothCharacteristicClientAssociatedPtrInfo client, RemoteCharacteristicStartNotificationsCallback callback) final;
  void RemoteCharacteristicStopNotifications(const WTF::String& characteristic_instance_id, RemoteCharacteristicStopNotificationsCallback callback) final;
  void RemoteCharacteristicGetDescriptors(const WTF::String& characteristics_instance_id, WebBluetoothGATTQueryQuantity quantity, const WTF::String& descriptor_uuid, RemoteCharacteristicGetDescriptorsCallback callback) final;
  void RemoteDescriptorReadValue(const WTF::String& descriptor_instance_id, RemoteDescriptorReadValueCallback callback) final;
  void RemoteDescriptorWriteValue(const WTF::String& descriptor_instance_id, const WTF::Vector<uint8_t>& value, RemoteDescriptorWriteValueCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT WebBluetoothServerClientProxy
    : public WebBluetoothServerClient {
 public:
  explicit WebBluetoothServerClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void GATTServerDisconnected() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT WebBluetoothCharacteristicClientProxy
    : public WebBluetoothCharacteristicClient {
 public:
  explicit WebBluetoothCharacteristicClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void RemoteCharacteristicValueChanged(const WTF::Vector<uint8_t>& value) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT WebBluetoothServiceStubDispatch {
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
class BLINK_PLATFORM_EXPORT WebBluetoothServerClientStubDispatch {
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
class BLINK_PLATFORM_EXPORT WebBluetoothCharacteristicClientStubDispatch {
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
class BLINK_PLATFORM_EXPORT WebBluetoothServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT WebBluetoothServerClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT WebBluetoothCharacteristicClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT WebBluetoothServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};




class BLINK_PLATFORM_EXPORT WebBluetoothDeviceId {
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
      const WTF::String& device_id);

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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        WebBluetoothDeviceId::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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

  WTF::String device_id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};








class BLINK_PLATFORM_EXPORT WebBluetoothLeScanFilter {
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
      const base::Optional<WTF::Vector<WTF::String>>& services,
      const WTF::String& name,
      const WTF::String& name_prefix);

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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        WebBluetoothLeScanFilter::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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

  base::Optional<WTF::Vector<WTF::String>> services;
  WTF::String name;
  WTF::String name_prefix;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class BLINK_PLATFORM_EXPORT WebBluetoothRequestDeviceOptions {
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
      base::Optional<WTF::Vector<WebBluetoothLeScanFilterPtr>> filters,
      const WTF::Vector<WTF::String>& optional_services,
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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        WebBluetoothRequestDeviceOptions::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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

  base::Optional<WTF::Vector<WebBluetoothLeScanFilterPtr>> filters;
  WTF::Vector<WTF::String> optional_services;
  bool accept_all_devices;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(WebBluetoothRequestDeviceOptions);
};



class BLINK_PLATFORM_EXPORT WebBluetoothDevice {
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
      const WTF::String& id,
      const WTF::String& name);

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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        WebBluetoothDevice::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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

  WTF::String id;
  WTF::String name;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class BLINK_PLATFORM_EXPORT WebBluetoothRemoteGATTService {
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
      const WTF::String& instance_id,
      const WTF::String& uuid);

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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        WebBluetoothRemoteGATTService::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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

  WTF::String instance_id;
  WTF::String uuid;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class BLINK_PLATFORM_EXPORT WebBluetoothRemoteGATTCharacteristic {
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
      const WTF::String& instance_id,
      const WTF::String& uuid,
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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        WebBluetoothRemoteGATTCharacteristic::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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

  WTF::String instance_id;
  WTF::String uuid;
  uint32_t properties;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class BLINK_PLATFORM_EXPORT WebBluetoothRemoteGATTDescriptor {
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
      const WTF::String& instance_id,
      const WTF::String& uuid);

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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        WebBluetoothRemoteGATTDescriptor::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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

  WTF::String instance_id;
  WTF::String uuid;

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


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::blink::mojom::blink::WebBluetoothLeScanFilter::DataView,
                                         ::blink::mojom::blink::WebBluetoothLeScanFilterPtr> {
  static bool IsNull(const ::blink::mojom::blink::WebBluetoothLeScanFilterPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::WebBluetoothLeScanFilterPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::WebBluetoothLeScanFilter::services)& services(
      const ::blink::mojom::blink::WebBluetoothLeScanFilterPtr& input) {
    return input->services;
  }

  static const decltype(::blink::mojom::blink::WebBluetoothLeScanFilter::name)& name(
      const ::blink::mojom::blink::WebBluetoothLeScanFilterPtr& input) {
    return input->name;
  }

  static const decltype(::blink::mojom::blink::WebBluetoothLeScanFilter::name_prefix)& name_prefix(
      const ::blink::mojom::blink::WebBluetoothLeScanFilterPtr& input) {
    return input->name_prefix;
  }

  static bool Read(::blink::mojom::blink::WebBluetoothLeScanFilter::DataView input, ::blink::mojom::blink::WebBluetoothLeScanFilterPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::blink::mojom::blink::WebBluetoothRequestDeviceOptions::DataView,
                                         ::blink::mojom::blink::WebBluetoothRequestDeviceOptionsPtr> {
  static bool IsNull(const ::blink::mojom::blink::WebBluetoothRequestDeviceOptionsPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::WebBluetoothRequestDeviceOptionsPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::WebBluetoothRequestDeviceOptions::filters)& filters(
      const ::blink::mojom::blink::WebBluetoothRequestDeviceOptionsPtr& input) {
    return input->filters;
  }

  static const decltype(::blink::mojom::blink::WebBluetoothRequestDeviceOptions::optional_services)& optional_services(
      const ::blink::mojom::blink::WebBluetoothRequestDeviceOptionsPtr& input) {
    return input->optional_services;
  }

  static decltype(::blink::mojom::blink::WebBluetoothRequestDeviceOptions::accept_all_devices) accept_all_devices(
      const ::blink::mojom::blink::WebBluetoothRequestDeviceOptionsPtr& input) {
    return input->accept_all_devices;
  }

  static bool Read(::blink::mojom::blink::WebBluetoothRequestDeviceOptions::DataView input, ::blink::mojom::blink::WebBluetoothRequestDeviceOptionsPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::blink::mojom::blink::WebBluetoothDeviceId::DataView,
                                         ::blink::mojom::blink::WebBluetoothDeviceIdPtr> {
  static bool IsNull(const ::blink::mojom::blink::WebBluetoothDeviceIdPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::WebBluetoothDeviceIdPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::WebBluetoothDeviceId::device_id)& device_id(
      const ::blink::mojom::blink::WebBluetoothDeviceIdPtr& input) {
    return input->device_id;
  }

  static bool Read(::blink::mojom::blink::WebBluetoothDeviceId::DataView input, ::blink::mojom::blink::WebBluetoothDeviceIdPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::blink::mojom::blink::WebBluetoothDevice::DataView,
                                         ::blink::mojom::blink::WebBluetoothDevicePtr> {
  static bool IsNull(const ::blink::mojom::blink::WebBluetoothDevicePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::WebBluetoothDevicePtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::WebBluetoothDevice::id)& id(
      const ::blink::mojom::blink::WebBluetoothDevicePtr& input) {
    return input->id;
  }

  static const decltype(::blink::mojom::blink::WebBluetoothDevice::name)& name(
      const ::blink::mojom::blink::WebBluetoothDevicePtr& input) {
    return input->name;
  }

  static bool Read(::blink::mojom::blink::WebBluetoothDevice::DataView input, ::blink::mojom::blink::WebBluetoothDevicePtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::blink::mojom::blink::WebBluetoothRemoteGATTService::DataView,
                                         ::blink::mojom::blink::WebBluetoothRemoteGATTServicePtr> {
  static bool IsNull(const ::blink::mojom::blink::WebBluetoothRemoteGATTServicePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::WebBluetoothRemoteGATTServicePtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::WebBluetoothRemoteGATTService::instance_id)& instance_id(
      const ::blink::mojom::blink::WebBluetoothRemoteGATTServicePtr& input) {
    return input->instance_id;
  }

  static const decltype(::blink::mojom::blink::WebBluetoothRemoteGATTService::uuid)& uuid(
      const ::blink::mojom::blink::WebBluetoothRemoteGATTServicePtr& input) {
    return input->uuid;
  }

  static bool Read(::blink::mojom::blink::WebBluetoothRemoteGATTService::DataView input, ::blink::mojom::blink::WebBluetoothRemoteGATTServicePtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::blink::mojom::blink::WebBluetoothRemoteGATTCharacteristic::DataView,
                                         ::blink::mojom::blink::WebBluetoothRemoteGATTCharacteristicPtr> {
  static bool IsNull(const ::blink::mojom::blink::WebBluetoothRemoteGATTCharacteristicPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::WebBluetoothRemoteGATTCharacteristicPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::WebBluetoothRemoteGATTCharacteristic::instance_id)& instance_id(
      const ::blink::mojom::blink::WebBluetoothRemoteGATTCharacteristicPtr& input) {
    return input->instance_id;
  }

  static const decltype(::blink::mojom::blink::WebBluetoothRemoteGATTCharacteristic::uuid)& uuid(
      const ::blink::mojom::blink::WebBluetoothRemoteGATTCharacteristicPtr& input) {
    return input->uuid;
  }

  static decltype(::blink::mojom::blink::WebBluetoothRemoteGATTCharacteristic::properties) properties(
      const ::blink::mojom::blink::WebBluetoothRemoteGATTCharacteristicPtr& input) {
    return input->properties;
  }

  static bool Read(::blink::mojom::blink::WebBluetoothRemoteGATTCharacteristic::DataView input, ::blink::mojom::blink::WebBluetoothRemoteGATTCharacteristicPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::blink::mojom::blink::WebBluetoothRemoteGATTDescriptor::DataView,
                                         ::blink::mojom::blink::WebBluetoothRemoteGATTDescriptorPtr> {
  static bool IsNull(const ::blink::mojom::blink::WebBluetoothRemoteGATTDescriptorPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::WebBluetoothRemoteGATTDescriptorPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::WebBluetoothRemoteGATTDescriptor::instance_id)& instance_id(
      const ::blink::mojom::blink::WebBluetoothRemoteGATTDescriptorPtr& input) {
    return input->instance_id;
  }

  static const decltype(::blink::mojom::blink::WebBluetoothRemoteGATTDescriptor::uuid)& uuid(
      const ::blink::mojom::blink::WebBluetoothRemoteGATTDescriptorPtr& input) {
    return input->uuid;
  }

  static bool Read(::blink::mojom::blink::WebBluetoothRemoteGATTDescriptor::DataView input, ::blink::mojom::blink::WebBluetoothRemoteGATTDescriptorPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BLUETOOTH_WEB_BLUETOOTH_MOJOM_BLINK_H_