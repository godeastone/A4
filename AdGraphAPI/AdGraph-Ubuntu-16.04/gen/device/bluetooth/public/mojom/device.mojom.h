// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_BLUETOOTH_PUBLIC_MOJOM_DEVICE_MOJOM_H_
#define DEVICE_BLUETOOTH_PUBLIC_MOJOM_DEVICE_MOJOM_H_

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
#include "device/bluetooth/public/mojom/device.mojom-shared.h"
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


namespace bluetooth {
namespace mojom {
class Device;
using DevicePtr = mojo::InterfacePtr<Device>;
using DevicePtrInfo = mojo::InterfacePtrInfo<Device>;
using ThreadSafeDevicePtr =
    mojo::ThreadSafeInterfacePtr<Device>;
using DeviceRequest = mojo::InterfaceRequest<Device>;
using DeviceAssociatedPtr =
    mojo::AssociatedInterfacePtr<Device>;
using ThreadSafeDeviceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Device>;
using DeviceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Device>;
using DeviceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Device>;

class RSSIWrapper;
using RSSIWrapperPtr = mojo::InlinedStructPtr<RSSIWrapper>;

class DeviceInfo;
using DeviceInfoPtr = mojo::StructPtr<DeviceInfo>;

class ServiceInfo;
using ServiceInfoPtr = mojo::StructPtr<ServiceInfo>;

class CharacteristicInfo;
using CharacteristicInfoPtr = mojo::StructPtr<CharacteristicInfo>;

class DescriptorInfo;
using DescriptorInfoPtr = mojo::StructPtr<DescriptorInfo>;


class DeviceProxy;

template <typename ImplRefTraits>
class DeviceStub;

class DeviceRequestValidator;
class DeviceResponseValidator;

class  Device
    : public DeviceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = DeviceProxy;

  template <typename ImplRefTraits>
  using Stub_ = DeviceStub<ImplRefTraits>;

  using RequestValidator_ = DeviceRequestValidator;
  using ResponseValidator_ = DeviceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kDisconnectMinVersion = 0,
    kGetInfoMinVersion = 0,
    kGetServicesMinVersion = 0,
    kGetCharacteristicsMinVersion = 0,
    kReadValueForCharacteristicMinVersion = 0,
    kWriteValueForCharacteristicMinVersion = 0,
    kGetDescriptorsMinVersion = 0,
    kReadValueForDescriptorMinVersion = 0,
    kWriteValueForDescriptorMinVersion = 0,
  };
  virtual ~Device() {}

  virtual void Disconnect() = 0;


  using GetInfoCallback = base::OnceCallback<void(DeviceInfoPtr)>;
  virtual void GetInfo(GetInfoCallback callback) = 0;


  using GetServicesCallback = base::OnceCallback<void(std::vector<ServiceInfoPtr>)>;
  virtual void GetServices(GetServicesCallback callback) = 0;


  using GetCharacteristicsCallback = base::OnceCallback<void(base::Optional<std::vector<CharacteristicInfoPtr>>)>;
  virtual void GetCharacteristics(const std::string& service_id, GetCharacteristicsCallback callback) = 0;


  using ReadValueForCharacteristicCallback = base::OnceCallback<void(GattResult, const base::Optional<std::vector<uint8_t>>&)>;
  virtual void ReadValueForCharacteristic(const std::string& service_id, const std::string& characteristic_id, ReadValueForCharacteristicCallback callback) = 0;


  using WriteValueForCharacteristicCallback = base::OnceCallback<void(GattResult)>;
  virtual void WriteValueForCharacteristic(const std::string& service_id, const std::string& characteristic_id, const std::vector<uint8_t>& value, WriteValueForCharacteristicCallback callback) = 0;


  using GetDescriptorsCallback = base::OnceCallback<void(base::Optional<std::vector<DescriptorInfoPtr>>)>;
  virtual void GetDescriptors(const std::string& service_id, const std::string& characteristic_id, GetDescriptorsCallback callback) = 0;


  using ReadValueForDescriptorCallback = base::OnceCallback<void(GattResult, const base::Optional<std::vector<uint8_t>>&)>;
  virtual void ReadValueForDescriptor(const std::string& service_id, const std::string& characteristic_id, const std::string& descriptor_id, ReadValueForDescriptorCallback callback) = 0;


  using WriteValueForDescriptorCallback = base::OnceCallback<void(GattResult)>;
  virtual void WriteValueForDescriptor(const std::string& service_id, const std::string& characteristic_id, const std::string& descriptor_id, const std::vector<uint8_t>& value, WriteValueForDescriptorCallback callback) = 0;
};
class  DeviceInterceptorForTesting : public Device {
  virtual Device* GetForwardingInterface() = 0;
  void Disconnect() override;
  void GetInfo(GetInfoCallback callback) override;
  void GetServices(GetServicesCallback callback) override;
  void GetCharacteristics(const std::string& service_id, GetCharacteristicsCallback callback) override;
  void ReadValueForCharacteristic(const std::string& service_id, const std::string& characteristic_id, ReadValueForCharacteristicCallback callback) override;
  void WriteValueForCharacteristic(const std::string& service_id, const std::string& characteristic_id, const std::vector<uint8_t>& value, WriteValueForCharacteristicCallback callback) override;
  void GetDescriptors(const std::string& service_id, const std::string& characteristic_id, GetDescriptorsCallback callback) override;
  void ReadValueForDescriptor(const std::string& service_id, const std::string& characteristic_id, const std::string& descriptor_id, ReadValueForDescriptorCallback callback) override;
  void WriteValueForDescriptor(const std::string& service_id, const std::string& characteristic_id, const std::string& descriptor_id, const std::vector<uint8_t>& value, WriteValueForDescriptorCallback callback) override;
};
class  DeviceAsyncWaiter {
 public:
  explicit DeviceAsyncWaiter(Device* proxy);
  ~DeviceAsyncWaiter();
  void GetInfo(
      DeviceInfoPtr* out_info);
  void GetServices(
      std::vector<ServiceInfoPtr>* out_services);
  void GetCharacteristics(
      const std::string& service_id, base::Optional<std::vector<CharacteristicInfoPtr>>* out_characteristics);
  void ReadValueForCharacteristic(
      const std::string& service_id, const std::string& characteristic_id, GattResult* out_result, base::Optional<std::vector<uint8_t>>* out_value);
  void WriteValueForCharacteristic(
      const std::string& service_id, const std::string& characteristic_id, const std::vector<uint8_t>& value, GattResult* out_result);
  void GetDescriptors(
      const std::string& service_id, const std::string& characteristic_id, base::Optional<std::vector<DescriptorInfoPtr>>* out_descriptors);
  void ReadValueForDescriptor(
      const std::string& service_id, const std::string& characteristic_id, const std::string& descriptor_id, GattResult* out_result, base::Optional<std::vector<uint8_t>>* out_value);
  void WriteValueForDescriptor(
      const std::string& service_id, const std::string& characteristic_id, const std::string& descriptor_id, const std::vector<uint8_t>& value, GattResult* out_result);

 private:
  Device* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DeviceAsyncWaiter);
};

class  DeviceProxy
    : public Device {
 public:
  explicit DeviceProxy(mojo::MessageReceiverWithResponder* receiver);
  void Disconnect() final;
  void GetInfo(GetInfoCallback callback) final;
  void GetServices(GetServicesCallback callback) final;
  void GetCharacteristics(const std::string& service_id, GetCharacteristicsCallback callback) final;
  void ReadValueForCharacteristic(const std::string& service_id, const std::string& characteristic_id, ReadValueForCharacteristicCallback callback) final;
  void WriteValueForCharacteristic(const std::string& service_id, const std::string& characteristic_id, const std::vector<uint8_t>& value, WriteValueForCharacteristicCallback callback) final;
  void GetDescriptors(const std::string& service_id, const std::string& characteristic_id, GetDescriptorsCallback callback) final;
  void ReadValueForDescriptor(const std::string& service_id, const std::string& characteristic_id, const std::string& descriptor_id, ReadValueForDescriptorCallback callback) final;
  void WriteValueForDescriptor(const std::string& service_id, const std::string& characteristic_id, const std::string& descriptor_id, const std::vector<uint8_t>& value, WriteValueForDescriptorCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  DeviceStubDispatch {
 public:
  static bool Accept(Device* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Device* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Device>>
class DeviceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DeviceStub() {}
  ~DeviceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DeviceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DeviceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  DeviceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  DeviceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};


class  RSSIWrapper {
 public:
  using DataView = RSSIWrapperDataView;
  using Data_ = internal::RSSIWrapper_Data;

  template <typename... Args>
  static RSSIWrapperPtr New(Args&&... args) {
    return RSSIWrapperPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RSSIWrapperPtr From(const U& u) {
    return mojo::TypeConverter<RSSIWrapperPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RSSIWrapper>::Convert(*this);
  }


  RSSIWrapper();

  explicit RSSIWrapper(
      int8_t value);

  ~RSSIWrapper();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RSSIWrapperPtr>
  RSSIWrapperPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RSSIWrapper>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RSSIWrapper::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RSSIWrapper::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RSSIWrapper_UnserializedMessageContext<
            UserType, RSSIWrapper::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<RSSIWrapper::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return RSSIWrapper::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RSSIWrapper_UnserializedMessageContext<
            UserType, RSSIWrapper::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RSSIWrapper::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  int8_t value;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};









class  DeviceInfo {
 public:
  using DataView = DeviceInfoDataView;
  using Data_ = internal::DeviceInfo_Data;

  template <typename... Args>
  static DeviceInfoPtr New(Args&&... args) {
    return DeviceInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DeviceInfoPtr From(const U& u) {
    return mojo::TypeConverter<DeviceInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DeviceInfo>::Convert(*this);
  }


  DeviceInfo();

  DeviceInfo(
      const base::Optional<std::string>& name,
      const std::string& name_for_display,
      const std::string& address,
      bool is_gatt_connected,
      RSSIWrapperPtr rssi);

  ~DeviceInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DeviceInfoPtr>
  DeviceInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DeviceInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DeviceInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DeviceInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DeviceInfo_UnserializedMessageContext<
            UserType, DeviceInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DeviceInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return DeviceInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DeviceInfo_UnserializedMessageContext<
            UserType, DeviceInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DeviceInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  base::Optional<std::string> name;
  std::string name_for_display;
  std::string address;
  bool is_gatt_connected;
  RSSIWrapperPtr rssi;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(DeviceInfo);
};


class  ServiceInfo {
 public:
  using DataView = ServiceInfoDataView;
  using Data_ = internal::ServiceInfo_Data;

  template <typename... Args>
  static ServiceInfoPtr New(Args&&... args) {
    return ServiceInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ServiceInfoPtr From(const U& u) {
    return mojo::TypeConverter<ServiceInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ServiceInfo>::Convert(*this);
  }


  ServiceInfo();

  ServiceInfo(
      const std::string& id,
      const device::BluetoothUUID& uuid,
      bool is_primary);

  ~ServiceInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ServiceInfoPtr>
  ServiceInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ServiceInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ServiceInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ServiceInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ServiceInfo_UnserializedMessageContext<
            UserType, ServiceInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ServiceInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ServiceInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ServiceInfo_UnserializedMessageContext<
            UserType, ServiceInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ServiceInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string id;
  device::BluetoothUUID uuid;
  bool is_primary;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  CharacteristicInfo {
 public:
  using DataView = CharacteristicInfoDataView;
  using Data_ = internal::CharacteristicInfo_Data;

  template <typename... Args>
  static CharacteristicInfoPtr New(Args&&... args) {
    return CharacteristicInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CharacteristicInfoPtr From(const U& u) {
    return mojo::TypeConverter<CharacteristicInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CharacteristicInfo>::Convert(*this);
  }


  CharacteristicInfo();

  CharacteristicInfo(
      const std::string& id,
      const device::BluetoothUUID& uuid,
      uint32_t properties,
      const std::vector<uint8_t>& last_known_value);

  ~CharacteristicInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CharacteristicInfoPtr>
  CharacteristicInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CharacteristicInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CharacteristicInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CharacteristicInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CharacteristicInfo_UnserializedMessageContext<
            UserType, CharacteristicInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CharacteristicInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CharacteristicInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CharacteristicInfo_UnserializedMessageContext<
            UserType, CharacteristicInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CharacteristicInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string id;
  device::BluetoothUUID uuid;
  uint32_t properties;
  std::vector<uint8_t> last_known_value;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  DescriptorInfo {
 public:
  using DataView = DescriptorInfoDataView;
  using Data_ = internal::DescriptorInfo_Data;

  template <typename... Args>
  static DescriptorInfoPtr New(Args&&... args) {
    return DescriptorInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DescriptorInfoPtr From(const U& u) {
    return mojo::TypeConverter<DescriptorInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DescriptorInfo>::Convert(*this);
  }


  DescriptorInfo();

  DescriptorInfo(
      const std::string& id,
      const device::BluetoothUUID& uuid,
      const std::vector<uint8_t>& last_known_value);

  ~DescriptorInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DescriptorInfoPtr>
  DescriptorInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DescriptorInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DescriptorInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DescriptorInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DescriptorInfo_UnserializedMessageContext<
            UserType, DescriptorInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DescriptorInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return DescriptorInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DescriptorInfo_UnserializedMessageContext<
            UserType, DescriptorInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DescriptorInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string id;
  device::BluetoothUUID uuid;
  std::vector<uint8_t> last_known_value;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
RSSIWrapperPtr RSSIWrapper::Clone() const {
  return New(
      mojo::Clone(value)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RSSIWrapper>::value>::type*>
bool RSSIWrapper::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  return true;
}
template <typename StructPtrType>
DeviceInfoPtr DeviceInfo::Clone() const {
  return New(
      mojo::Clone(name),
      mojo::Clone(name_for_display),
      mojo::Clone(address),
      mojo::Clone(is_gatt_connected),
      mojo::Clone(rssi)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DeviceInfo>::value>::type*>
bool DeviceInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->name_for_display, other_struct.name_for_display))
    return false;
  if (!mojo::Equals(this->address, other_struct.address))
    return false;
  if (!mojo::Equals(this->is_gatt_connected, other_struct.is_gatt_connected))
    return false;
  if (!mojo::Equals(this->rssi, other_struct.rssi))
    return false;
  return true;
}
template <typename StructPtrType>
ServiceInfoPtr ServiceInfo::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(uuid),
      mojo::Clone(is_primary)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ServiceInfo>::value>::type*>
bool ServiceInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->uuid, other_struct.uuid))
    return false;
  if (!mojo::Equals(this->is_primary, other_struct.is_primary))
    return false;
  return true;
}
template <typename StructPtrType>
CharacteristicInfoPtr CharacteristicInfo::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(uuid),
      mojo::Clone(properties),
      mojo::Clone(last_known_value)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CharacteristicInfo>::value>::type*>
bool CharacteristicInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->uuid, other_struct.uuid))
    return false;
  if (!mojo::Equals(this->properties, other_struct.properties))
    return false;
  if (!mojo::Equals(this->last_known_value, other_struct.last_known_value))
    return false;
  return true;
}
template <typename StructPtrType>
DescriptorInfoPtr DescriptorInfo::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(uuid),
      mojo::Clone(last_known_value)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DescriptorInfo>::value>::type*>
bool DescriptorInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->uuid, other_struct.uuid))
    return false;
  if (!mojo::Equals(this->last_known_value, other_struct.last_known_value))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace bluetooth

namespace mojo {


template <>
struct  StructTraits<::bluetooth::mojom::RSSIWrapper::DataView,
                                         ::bluetooth::mojom::RSSIWrapperPtr> {
  static bool IsNull(const ::bluetooth::mojom::RSSIWrapperPtr& input) { return !input; }
  static void SetToNull(::bluetooth::mojom::RSSIWrapperPtr* output) { output->reset(); }

  static decltype(::bluetooth::mojom::RSSIWrapper::value) value(
      const ::bluetooth::mojom::RSSIWrapperPtr& input) {
    return input->value;
  }

  static bool Read(::bluetooth::mojom::RSSIWrapper::DataView input, ::bluetooth::mojom::RSSIWrapperPtr* output);
};


template <>
struct  StructTraits<::bluetooth::mojom::DeviceInfo::DataView,
                                         ::bluetooth::mojom::DeviceInfoPtr> {
  static bool IsNull(const ::bluetooth::mojom::DeviceInfoPtr& input) { return !input; }
  static void SetToNull(::bluetooth::mojom::DeviceInfoPtr* output) { output->reset(); }

  static const decltype(::bluetooth::mojom::DeviceInfo::name)& name(
      const ::bluetooth::mojom::DeviceInfoPtr& input) {
    return input->name;
  }

  static const decltype(::bluetooth::mojom::DeviceInfo::name_for_display)& name_for_display(
      const ::bluetooth::mojom::DeviceInfoPtr& input) {
    return input->name_for_display;
  }

  static const decltype(::bluetooth::mojom::DeviceInfo::address)& address(
      const ::bluetooth::mojom::DeviceInfoPtr& input) {
    return input->address;
  }

  static decltype(::bluetooth::mojom::DeviceInfo::is_gatt_connected) is_gatt_connected(
      const ::bluetooth::mojom::DeviceInfoPtr& input) {
    return input->is_gatt_connected;
  }

  static const decltype(::bluetooth::mojom::DeviceInfo::rssi)& rssi(
      const ::bluetooth::mojom::DeviceInfoPtr& input) {
    return input->rssi;
  }

  static bool Read(::bluetooth::mojom::DeviceInfo::DataView input, ::bluetooth::mojom::DeviceInfoPtr* output);
};


template <>
struct  StructTraits<::bluetooth::mojom::ServiceInfo::DataView,
                                         ::bluetooth::mojom::ServiceInfoPtr> {
  static bool IsNull(const ::bluetooth::mojom::ServiceInfoPtr& input) { return !input; }
  static void SetToNull(::bluetooth::mojom::ServiceInfoPtr* output) { output->reset(); }

  static const decltype(::bluetooth::mojom::ServiceInfo::id)& id(
      const ::bluetooth::mojom::ServiceInfoPtr& input) {
    return input->id;
  }

  static const decltype(::bluetooth::mojom::ServiceInfo::uuid)& uuid(
      const ::bluetooth::mojom::ServiceInfoPtr& input) {
    return input->uuid;
  }

  static decltype(::bluetooth::mojom::ServiceInfo::is_primary) is_primary(
      const ::bluetooth::mojom::ServiceInfoPtr& input) {
    return input->is_primary;
  }

  static bool Read(::bluetooth::mojom::ServiceInfo::DataView input, ::bluetooth::mojom::ServiceInfoPtr* output);
};


template <>
struct  StructTraits<::bluetooth::mojom::CharacteristicInfo::DataView,
                                         ::bluetooth::mojom::CharacteristicInfoPtr> {
  static bool IsNull(const ::bluetooth::mojom::CharacteristicInfoPtr& input) { return !input; }
  static void SetToNull(::bluetooth::mojom::CharacteristicInfoPtr* output) { output->reset(); }

  static const decltype(::bluetooth::mojom::CharacteristicInfo::id)& id(
      const ::bluetooth::mojom::CharacteristicInfoPtr& input) {
    return input->id;
  }

  static const decltype(::bluetooth::mojom::CharacteristicInfo::uuid)& uuid(
      const ::bluetooth::mojom::CharacteristicInfoPtr& input) {
    return input->uuid;
  }

  static decltype(::bluetooth::mojom::CharacteristicInfo::properties) properties(
      const ::bluetooth::mojom::CharacteristicInfoPtr& input) {
    return input->properties;
  }

  static const decltype(::bluetooth::mojom::CharacteristicInfo::last_known_value)& last_known_value(
      const ::bluetooth::mojom::CharacteristicInfoPtr& input) {
    return input->last_known_value;
  }

  static bool Read(::bluetooth::mojom::CharacteristicInfo::DataView input, ::bluetooth::mojom::CharacteristicInfoPtr* output);
};


template <>
struct  StructTraits<::bluetooth::mojom::DescriptorInfo::DataView,
                                         ::bluetooth::mojom::DescriptorInfoPtr> {
  static bool IsNull(const ::bluetooth::mojom::DescriptorInfoPtr& input) { return !input; }
  static void SetToNull(::bluetooth::mojom::DescriptorInfoPtr* output) { output->reset(); }

  static const decltype(::bluetooth::mojom::DescriptorInfo::id)& id(
      const ::bluetooth::mojom::DescriptorInfoPtr& input) {
    return input->id;
  }

  static const decltype(::bluetooth::mojom::DescriptorInfo::uuid)& uuid(
      const ::bluetooth::mojom::DescriptorInfoPtr& input) {
    return input->uuid;
  }

  static const decltype(::bluetooth::mojom::DescriptorInfo::last_known_value)& last_known_value(
      const ::bluetooth::mojom::DescriptorInfoPtr& input) {
    return input->last_known_value;
  }

  static bool Read(::bluetooth::mojom::DescriptorInfo::DataView input, ::bluetooth::mojom::DescriptorInfoPtr* output);
};

}  // namespace mojo

#endif  // DEVICE_BLUETOOTH_PUBLIC_MOJOM_DEVICE_MOJOM_H_