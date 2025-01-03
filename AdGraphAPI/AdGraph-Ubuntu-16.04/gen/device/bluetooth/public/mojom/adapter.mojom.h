// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_BLUETOOTH_PUBLIC_MOJOM_ADAPTER_MOJOM_H_
#define DEVICE_BLUETOOTH_PUBLIC_MOJOM_ADAPTER_MOJOM_H_

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
#include "device/bluetooth/public/mojom/adapter.mojom-shared.h"
#include "device/bluetooth/public/mojom/device.mojom.h"
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
class DiscoverySession;
using DiscoverySessionPtr = mojo::InterfacePtr<DiscoverySession>;
using DiscoverySessionPtrInfo = mojo::InterfacePtrInfo<DiscoverySession>;
using ThreadSafeDiscoverySessionPtr =
    mojo::ThreadSafeInterfacePtr<DiscoverySession>;
using DiscoverySessionRequest = mojo::InterfaceRequest<DiscoverySession>;
using DiscoverySessionAssociatedPtr =
    mojo::AssociatedInterfacePtr<DiscoverySession>;
using ThreadSafeDiscoverySessionAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<DiscoverySession>;
using DiscoverySessionAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DiscoverySession>;
using DiscoverySessionAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DiscoverySession>;

class Adapter;
using AdapterPtr = mojo::InterfacePtr<Adapter>;
using AdapterPtrInfo = mojo::InterfacePtrInfo<Adapter>;
using ThreadSafeAdapterPtr =
    mojo::ThreadSafeInterfacePtr<Adapter>;
using AdapterRequest = mojo::InterfaceRequest<Adapter>;
using AdapterAssociatedPtr =
    mojo::AssociatedInterfacePtr<Adapter>;
using ThreadSafeAdapterAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Adapter>;
using AdapterAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Adapter>;
using AdapterAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Adapter>;

class AdapterClient;
using AdapterClientPtr = mojo::InterfacePtr<AdapterClient>;
using AdapterClientPtrInfo = mojo::InterfacePtrInfo<AdapterClient>;
using ThreadSafeAdapterClientPtr =
    mojo::ThreadSafeInterfacePtr<AdapterClient>;
using AdapterClientRequest = mojo::InterfaceRequest<AdapterClient>;
using AdapterClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<AdapterClient>;
using ThreadSafeAdapterClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AdapterClient>;
using AdapterClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AdapterClient>;
using AdapterClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AdapterClient>;

class AdapterInfo;
using AdapterInfoPtr = mojo::StructPtr<AdapterInfo>;


class DiscoverySessionProxy;

template <typename ImplRefTraits>
class DiscoverySessionStub;

class DiscoverySessionRequestValidator;
class DiscoverySessionResponseValidator;

class  DiscoverySession
    : public DiscoverySessionInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = DiscoverySessionProxy;

  template <typename ImplRefTraits>
  using Stub_ = DiscoverySessionStub<ImplRefTraits>;

  using RequestValidator_ = DiscoverySessionRequestValidator;
  using ResponseValidator_ = DiscoverySessionResponseValidator;
  enum MethodMinVersions : uint32_t {
    kIsActiveMinVersion = 0,
    kStopMinVersion = 0,
  };
  virtual ~DiscoverySession() {}


  using IsActiveCallback = base::OnceCallback<void(bool)>;
  virtual void IsActive(IsActiveCallback callback) = 0;


  using StopCallback = base::OnceCallback<void(bool)>;
  virtual void Stop(StopCallback callback) = 0;
};
class  DiscoverySessionInterceptorForTesting : public DiscoverySession {
  virtual DiscoverySession* GetForwardingInterface() = 0;
  void IsActive(IsActiveCallback callback) override;
  void Stop(StopCallback callback) override;
};
class  DiscoverySessionAsyncWaiter {
 public:
  explicit DiscoverySessionAsyncWaiter(DiscoverySession* proxy);
  ~DiscoverySessionAsyncWaiter();
  void IsActive(
      bool* out_active);
  void Stop(
      bool* out_success);

 private:
  DiscoverySession* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DiscoverySessionAsyncWaiter);
};

class AdapterProxy;

template <typename ImplRefTraits>
class AdapterStub;

class AdapterRequestValidator;
class AdapterResponseValidator;

class  Adapter
    : public AdapterInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = AdapterProxy;

  template <typename ImplRefTraits>
  using Stub_ = AdapterStub<ImplRefTraits>;

  using RequestValidator_ = AdapterRequestValidator;
  using ResponseValidator_ = AdapterResponseValidator;
  enum MethodMinVersions : uint32_t {
    kConnectToDeviceMinVersion = 0,
    kGetDevicesMinVersion = 0,
    kGetInfoMinVersion = 0,
    kSetClientMinVersion = 0,
    kStartDiscoverySessionMinVersion = 0,
  };
  virtual ~Adapter() {}


  using ConnectToDeviceCallback = base::OnceCallback<void(ConnectResult, ::bluetooth::mojom::DevicePtr)>;
  virtual void ConnectToDevice(const std::string& address, ConnectToDeviceCallback callback) = 0;


  using GetDevicesCallback = base::OnceCallback<void(std::vector<::bluetooth::mojom::DeviceInfoPtr>)>;
  virtual void GetDevices(GetDevicesCallback callback) = 0;


  using GetInfoCallback = base::OnceCallback<void(AdapterInfoPtr)>;
  virtual void GetInfo(GetInfoCallback callback) = 0;

  virtual void SetClient(AdapterClientPtr client) = 0;


  using StartDiscoverySessionCallback = base::OnceCallback<void(DiscoverySessionPtr)>;
  virtual void StartDiscoverySession(StartDiscoverySessionCallback callback) = 0;
};
class  AdapterInterceptorForTesting : public Adapter {
  virtual Adapter* GetForwardingInterface() = 0;
  void ConnectToDevice(const std::string& address, ConnectToDeviceCallback callback) override;
  void GetDevices(GetDevicesCallback callback) override;
  void GetInfo(GetInfoCallback callback) override;
  void SetClient(AdapterClientPtr client) override;
  void StartDiscoverySession(StartDiscoverySessionCallback callback) override;
};
class  AdapterAsyncWaiter {
 public:
  explicit AdapterAsyncWaiter(Adapter* proxy);
  ~AdapterAsyncWaiter();
  void ConnectToDevice(
      const std::string& address, ConnectResult* out_result, ::bluetooth::mojom::DevicePtr* out_device);
  void GetDevices(
      std::vector<::bluetooth::mojom::DeviceInfoPtr>* out_devices);
  void GetInfo(
      AdapterInfoPtr* out_info);
  void StartDiscoverySession(
      DiscoverySessionPtr* out_session);

 private:
  Adapter* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AdapterAsyncWaiter);
};

class AdapterClientProxy;

template <typename ImplRefTraits>
class AdapterClientStub;

class AdapterClientRequestValidator;

class  AdapterClient
    : public AdapterClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = AdapterClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = AdapterClientStub<ImplRefTraits>;

  using RequestValidator_ = AdapterClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kPresentChangedMinVersion = 0,
    kPoweredChangedMinVersion = 0,
    kDiscoverableChangedMinVersion = 0,
    kDiscoveringChangedMinVersion = 0,
    kDeviceAddedMinVersion = 0,
    kDeviceChangedMinVersion = 0,
    kDeviceRemovedMinVersion = 0,
  };
  virtual ~AdapterClient() {}

  virtual void PresentChanged(bool present) = 0;

  virtual void PoweredChanged(bool powered) = 0;

  virtual void DiscoverableChanged(bool discoverable) = 0;

  virtual void DiscoveringChanged(bool discovering) = 0;

  virtual void DeviceAdded(::bluetooth::mojom::DeviceInfoPtr device) = 0;

  virtual void DeviceChanged(::bluetooth::mojom::DeviceInfoPtr device) = 0;

  virtual void DeviceRemoved(::bluetooth::mojom::DeviceInfoPtr device) = 0;
};
class  AdapterClientInterceptorForTesting : public AdapterClient {
  virtual AdapterClient* GetForwardingInterface() = 0;
  void PresentChanged(bool present) override;
  void PoweredChanged(bool powered) override;
  void DiscoverableChanged(bool discoverable) override;
  void DiscoveringChanged(bool discovering) override;
  void DeviceAdded(::bluetooth::mojom::DeviceInfoPtr device) override;
  void DeviceChanged(::bluetooth::mojom::DeviceInfoPtr device) override;
  void DeviceRemoved(::bluetooth::mojom::DeviceInfoPtr device) override;
};
class  AdapterClientAsyncWaiter {
 public:
  explicit AdapterClientAsyncWaiter(AdapterClient* proxy);
  ~AdapterClientAsyncWaiter();

 private:
  AdapterClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AdapterClientAsyncWaiter);
};

class  DiscoverySessionProxy
    : public DiscoverySession {
 public:
  explicit DiscoverySessionProxy(mojo::MessageReceiverWithResponder* receiver);
  void IsActive(IsActiveCallback callback) final;
  void Stop(StopCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  AdapterProxy
    : public Adapter {
 public:
  explicit AdapterProxy(mojo::MessageReceiverWithResponder* receiver);
  void ConnectToDevice(const std::string& address, ConnectToDeviceCallback callback) final;
  void GetDevices(GetDevicesCallback callback) final;
  void GetInfo(GetInfoCallback callback) final;
  void SetClient(AdapterClientPtr client) final;
  void StartDiscoverySession(StartDiscoverySessionCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  AdapterClientProxy
    : public AdapterClient {
 public:
  explicit AdapterClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void PresentChanged(bool present) final;
  void PoweredChanged(bool powered) final;
  void DiscoverableChanged(bool discoverable) final;
  void DiscoveringChanged(bool discovering) final;
  void DeviceAdded(::bluetooth::mojom::DeviceInfoPtr device) final;
  void DeviceChanged(::bluetooth::mojom::DeviceInfoPtr device) final;
  void DeviceRemoved(::bluetooth::mojom::DeviceInfoPtr device) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  DiscoverySessionStubDispatch {
 public:
  static bool Accept(DiscoverySession* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DiscoverySession* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DiscoverySession>>
class DiscoverySessionStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DiscoverySessionStub() {}
  ~DiscoverySessionStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DiscoverySessionStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DiscoverySessionStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  AdapterStubDispatch {
 public:
  static bool Accept(Adapter* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Adapter* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Adapter>>
class AdapterStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AdapterStub() {}
  ~AdapterStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AdapterStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AdapterStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  AdapterClientStubDispatch {
 public:
  static bool Accept(AdapterClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AdapterClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AdapterClient>>
class AdapterClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AdapterClientStub() {}
  ~AdapterClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AdapterClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AdapterClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  DiscoverySessionRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  AdapterRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  AdapterClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  DiscoverySessionResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  AdapterResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class  AdapterInfo {
 public:
  using DataView = AdapterInfoDataView;
  using Data_ = internal::AdapterInfo_Data;

  template <typename... Args>
  static AdapterInfoPtr New(Args&&... args) {
    return AdapterInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static AdapterInfoPtr From(const U& u) {
    return mojo::TypeConverter<AdapterInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AdapterInfo>::Convert(*this);
  }


  AdapterInfo();

  AdapterInfo(
      const std::string& address,
      const std::string& name,
      bool initialized,
      bool present,
      bool powered,
      bool discoverable,
      bool discovering);

  ~AdapterInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AdapterInfoPtr>
  AdapterInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AdapterInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        AdapterInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        AdapterInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::AdapterInfo_UnserializedMessageContext<
            UserType, AdapterInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<AdapterInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return AdapterInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::AdapterInfo_UnserializedMessageContext<
            UserType, AdapterInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<AdapterInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string address;
  std::string name;
  bool initialized;
  bool present;
  bool powered;
  bool discoverable;
  bool discovering;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
AdapterInfoPtr AdapterInfo::Clone() const {
  return New(
      mojo::Clone(address),
      mojo::Clone(name),
      mojo::Clone(initialized),
      mojo::Clone(present),
      mojo::Clone(powered),
      mojo::Clone(discoverable),
      mojo::Clone(discovering)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AdapterInfo>::value>::type*>
bool AdapterInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->address, other_struct.address))
    return false;
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->initialized, other_struct.initialized))
    return false;
  if (!mojo::Equals(this->present, other_struct.present))
    return false;
  if (!mojo::Equals(this->powered, other_struct.powered))
    return false;
  if (!mojo::Equals(this->discoverable, other_struct.discoverable))
    return false;
  if (!mojo::Equals(this->discovering, other_struct.discovering))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace bluetooth

namespace mojo {


template <>
struct  StructTraits<::bluetooth::mojom::AdapterInfo::DataView,
                                         ::bluetooth::mojom::AdapterInfoPtr> {
  static bool IsNull(const ::bluetooth::mojom::AdapterInfoPtr& input) { return !input; }
  static void SetToNull(::bluetooth::mojom::AdapterInfoPtr* output) { output->reset(); }

  static const decltype(::bluetooth::mojom::AdapterInfo::address)& address(
      const ::bluetooth::mojom::AdapterInfoPtr& input) {
    return input->address;
  }

  static const decltype(::bluetooth::mojom::AdapterInfo::name)& name(
      const ::bluetooth::mojom::AdapterInfoPtr& input) {
    return input->name;
  }

  static decltype(::bluetooth::mojom::AdapterInfo::initialized) initialized(
      const ::bluetooth::mojom::AdapterInfoPtr& input) {
    return input->initialized;
  }

  static decltype(::bluetooth::mojom::AdapterInfo::present) present(
      const ::bluetooth::mojom::AdapterInfoPtr& input) {
    return input->present;
  }

  static decltype(::bluetooth::mojom::AdapterInfo::powered) powered(
      const ::bluetooth::mojom::AdapterInfoPtr& input) {
    return input->powered;
  }

  static decltype(::bluetooth::mojom::AdapterInfo::discoverable) discoverable(
      const ::bluetooth::mojom::AdapterInfoPtr& input) {
    return input->discoverable;
  }

  static decltype(::bluetooth::mojom::AdapterInfo::discovering) discovering(
      const ::bluetooth::mojom::AdapterInfoPtr& input) {
    return input->discovering;
  }

  static bool Read(::bluetooth::mojom::AdapterInfo::DataView input, ::bluetooth::mojom::AdapterInfoPtr* output);
};

}  // namespace mojo

#endif  // DEVICE_BLUETOOTH_PUBLIC_MOJOM_ADAPTER_MOJOM_H_