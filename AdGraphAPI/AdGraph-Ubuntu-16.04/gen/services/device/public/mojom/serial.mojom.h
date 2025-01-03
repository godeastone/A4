// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_H_

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
#include "services/device/public/mojom/serial.mojom-shared.h"
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
class SerialDeviceEnumerator;
using SerialDeviceEnumeratorPtr = mojo::InterfacePtr<SerialDeviceEnumerator>;
using SerialDeviceEnumeratorPtrInfo = mojo::InterfacePtrInfo<SerialDeviceEnumerator>;
using ThreadSafeSerialDeviceEnumeratorPtr =
    mojo::ThreadSafeInterfacePtr<SerialDeviceEnumerator>;
using SerialDeviceEnumeratorRequest = mojo::InterfaceRequest<SerialDeviceEnumerator>;
using SerialDeviceEnumeratorAssociatedPtr =
    mojo::AssociatedInterfacePtr<SerialDeviceEnumerator>;
using ThreadSafeSerialDeviceEnumeratorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SerialDeviceEnumerator>;
using SerialDeviceEnumeratorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SerialDeviceEnumerator>;
using SerialDeviceEnumeratorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SerialDeviceEnumerator>;

class SerialIoHandler;
using SerialIoHandlerPtr = mojo::InterfacePtr<SerialIoHandler>;
using SerialIoHandlerPtrInfo = mojo::InterfacePtrInfo<SerialIoHandler>;
using ThreadSafeSerialIoHandlerPtr =
    mojo::ThreadSafeInterfacePtr<SerialIoHandler>;
using SerialIoHandlerRequest = mojo::InterfaceRequest<SerialIoHandler>;
using SerialIoHandlerAssociatedPtr =
    mojo::AssociatedInterfacePtr<SerialIoHandler>;
using ThreadSafeSerialIoHandlerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SerialIoHandler>;
using SerialIoHandlerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SerialIoHandler>;
using SerialIoHandlerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SerialIoHandler>;

class SerialDeviceInfo;
using SerialDeviceInfoPtr = mojo::StructPtr<SerialDeviceInfo>;

class SerialConnectionOptions;
using SerialConnectionOptionsPtr = mojo::StructPtr<SerialConnectionOptions>;

class SerialConnectionInfo;
using SerialConnectionInfoPtr = mojo::StructPtr<SerialConnectionInfo>;

class SerialHostControlSignals;
using SerialHostControlSignalsPtr = mojo::InlinedStructPtr<SerialHostControlSignals>;

class SerialDeviceControlSignals;
using SerialDeviceControlSignalsPtr = mojo::InlinedStructPtr<SerialDeviceControlSignals>;


class SerialDeviceEnumeratorProxy;

template <typename ImplRefTraits>
class SerialDeviceEnumeratorStub;

class SerialDeviceEnumeratorRequestValidator;
class SerialDeviceEnumeratorResponseValidator;

class  SerialDeviceEnumerator
    : public SerialDeviceEnumeratorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = SerialDeviceEnumeratorProxy;

  template <typename ImplRefTraits>
  using Stub_ = SerialDeviceEnumeratorStub<ImplRefTraits>;

  using RequestValidator_ = SerialDeviceEnumeratorRequestValidator;
  using ResponseValidator_ = SerialDeviceEnumeratorResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetDevicesMinVersion = 0,
  };
  virtual ~SerialDeviceEnumerator() {}


  using GetDevicesCallback = base::OnceCallback<void(std::vector<SerialDeviceInfoPtr>)>;
  virtual void GetDevices(GetDevicesCallback callback) = 0;
};
class  SerialDeviceEnumeratorInterceptorForTesting : public SerialDeviceEnumerator {
  virtual SerialDeviceEnumerator* GetForwardingInterface() = 0;
  void GetDevices(GetDevicesCallback callback) override;
};
class  SerialDeviceEnumeratorAsyncWaiter {
 public:
  explicit SerialDeviceEnumeratorAsyncWaiter(SerialDeviceEnumerator* proxy);
  ~SerialDeviceEnumeratorAsyncWaiter();
  void GetDevices(
      std::vector<SerialDeviceInfoPtr>* out_devices);

 private:
  SerialDeviceEnumerator* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SerialDeviceEnumeratorAsyncWaiter);
};

class SerialIoHandlerProxy;

template <typename ImplRefTraits>
class SerialIoHandlerStub;

class SerialIoHandlerRequestValidator;
class SerialIoHandlerResponseValidator;

class  SerialIoHandler
    : public SerialIoHandlerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = SerialIoHandlerProxy;

  template <typename ImplRefTraits>
  using Stub_ = SerialIoHandlerStub<ImplRefTraits>;

  using RequestValidator_ = SerialIoHandlerRequestValidator;
  using ResponseValidator_ = SerialIoHandlerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOpenMinVersion = 0,
    kReadMinVersion = 0,
    kWriteMinVersion = 0,
    kCancelReadMinVersion = 0,
    kCancelWriteMinVersion = 0,
    kFlushMinVersion = 0,
    kGetControlSignalsMinVersion = 0,
    kSetControlSignalsMinVersion = 0,
    kConfigurePortMinVersion = 0,
    kGetPortInfoMinVersion = 0,
    kSetBreakMinVersion = 0,
    kClearBreakMinVersion = 0,
  };
  virtual ~SerialIoHandler() {}


  using OpenCallback = base::OnceCallback<void(bool)>;
  virtual void Open(const std::string& port, SerialConnectionOptionsPtr options, OpenCallback callback) = 0;


  using ReadCallback = base::OnceCallback<void(const std::vector<uint8_t>&, SerialReceiveError)>;
  virtual void Read(uint32_t bytes, ReadCallback callback) = 0;


  using WriteCallback = base::OnceCallback<void(uint32_t, SerialSendError)>;
  virtual void Write(const std::vector<uint8_t>& data, WriteCallback callback) = 0;

  virtual void CancelRead(SerialReceiveError reason) = 0;

  virtual void CancelWrite(SerialSendError reason) = 0;


  using FlushCallback = base::OnceCallback<void(bool)>;
  virtual void Flush(FlushCallback callback) = 0;


  using GetControlSignalsCallback = base::OnceCallback<void(SerialDeviceControlSignalsPtr)>;
  virtual void GetControlSignals(GetControlSignalsCallback callback) = 0;


  using SetControlSignalsCallback = base::OnceCallback<void(bool)>;
  virtual void SetControlSignals(SerialHostControlSignalsPtr signals, SetControlSignalsCallback callback) = 0;


  using ConfigurePortCallback = base::OnceCallback<void(bool)>;
  virtual void ConfigurePort(SerialConnectionOptionsPtr options, ConfigurePortCallback callback) = 0;


  using GetPortInfoCallback = base::OnceCallback<void(SerialConnectionInfoPtr)>;
  virtual void GetPortInfo(GetPortInfoCallback callback) = 0;


  using SetBreakCallback = base::OnceCallback<void(bool)>;
  virtual void SetBreak(SetBreakCallback callback) = 0;


  using ClearBreakCallback = base::OnceCallback<void(bool)>;
  virtual void ClearBreak(ClearBreakCallback callback) = 0;
};
class  SerialIoHandlerInterceptorForTesting : public SerialIoHandler {
  virtual SerialIoHandler* GetForwardingInterface() = 0;
  void Open(const std::string& port, SerialConnectionOptionsPtr options, OpenCallback callback) override;
  void Read(uint32_t bytes, ReadCallback callback) override;
  void Write(const std::vector<uint8_t>& data, WriteCallback callback) override;
  void CancelRead(SerialReceiveError reason) override;
  void CancelWrite(SerialSendError reason) override;
  void Flush(FlushCallback callback) override;
  void GetControlSignals(GetControlSignalsCallback callback) override;
  void SetControlSignals(SerialHostControlSignalsPtr signals, SetControlSignalsCallback callback) override;
  void ConfigurePort(SerialConnectionOptionsPtr options, ConfigurePortCallback callback) override;
  void GetPortInfo(GetPortInfoCallback callback) override;
  void SetBreak(SetBreakCallback callback) override;
  void ClearBreak(ClearBreakCallback callback) override;
};
class  SerialIoHandlerAsyncWaiter {
 public:
  explicit SerialIoHandlerAsyncWaiter(SerialIoHandler* proxy);
  ~SerialIoHandlerAsyncWaiter();
  void Open(
      const std::string& port, SerialConnectionOptionsPtr options, bool* out_success);
  void Read(
      uint32_t bytes, std::vector<uint8_t>* out_data, SerialReceiveError* out_error);
  void Write(
      const std::vector<uint8_t>& data, uint32_t* out_bytes_written, SerialSendError* out_error);
  void Flush(
      bool* out_success);
  void GetControlSignals(
      SerialDeviceControlSignalsPtr* out_signals);
  void SetControlSignals(
      SerialHostControlSignalsPtr signals, bool* out_success);
  void ConfigurePort(
      SerialConnectionOptionsPtr options, bool* out_success);
  void GetPortInfo(
      SerialConnectionInfoPtr* out_info);
  void SetBreak(
      bool* out_success);
  void ClearBreak(
      bool* out_success);

 private:
  SerialIoHandler* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SerialIoHandlerAsyncWaiter);
};

class  SerialDeviceEnumeratorProxy
    : public SerialDeviceEnumerator {
 public:
  explicit SerialDeviceEnumeratorProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetDevices(GetDevicesCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  SerialIoHandlerProxy
    : public SerialIoHandler {
 public:
  explicit SerialIoHandlerProxy(mojo::MessageReceiverWithResponder* receiver);
  void Open(const std::string& port, SerialConnectionOptionsPtr options, OpenCallback callback) final;
  void Read(uint32_t bytes, ReadCallback callback) final;
  void Write(const std::vector<uint8_t>& data, WriteCallback callback) final;
  void CancelRead(SerialReceiveError reason) final;
  void CancelWrite(SerialSendError reason) final;
  void Flush(FlushCallback callback) final;
  void GetControlSignals(GetControlSignalsCallback callback) final;
  void SetControlSignals(SerialHostControlSignalsPtr signals, SetControlSignalsCallback callback) final;
  void ConfigurePort(SerialConnectionOptionsPtr options, ConfigurePortCallback callback) final;
  void GetPortInfo(GetPortInfoCallback callback) final;
  void SetBreak(SetBreakCallback callback) final;
  void ClearBreak(ClearBreakCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  SerialDeviceEnumeratorStubDispatch {
 public:
  static bool Accept(SerialDeviceEnumerator* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SerialDeviceEnumerator* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SerialDeviceEnumerator>>
class SerialDeviceEnumeratorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SerialDeviceEnumeratorStub() {}
  ~SerialDeviceEnumeratorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SerialDeviceEnumeratorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SerialDeviceEnumeratorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  SerialIoHandlerStubDispatch {
 public:
  static bool Accept(SerialIoHandler* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SerialIoHandler* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SerialIoHandler>>
class SerialIoHandlerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SerialIoHandlerStub() {}
  ~SerialIoHandlerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SerialIoHandlerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SerialIoHandlerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  SerialDeviceEnumeratorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  SerialIoHandlerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  SerialDeviceEnumeratorResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  SerialIoHandlerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class  SerialHostControlSignals {
 public:
  using DataView = SerialHostControlSignalsDataView;
  using Data_ = internal::SerialHostControlSignals_Data;

  template <typename... Args>
  static SerialHostControlSignalsPtr New(Args&&... args) {
    return SerialHostControlSignalsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SerialHostControlSignalsPtr From(const U& u) {
    return mojo::TypeConverter<SerialHostControlSignalsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SerialHostControlSignals>::Convert(*this);
  }


  SerialHostControlSignals();

  SerialHostControlSignals(
      bool dtr,
      bool has_dtr,
      bool rts,
      bool has_rts);

  ~SerialHostControlSignals();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SerialHostControlSignalsPtr>
  SerialHostControlSignalsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SerialHostControlSignals>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SerialHostControlSignals::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SerialHostControlSignals::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SerialHostControlSignals_UnserializedMessageContext<
            UserType, SerialHostControlSignals::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SerialHostControlSignals::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SerialHostControlSignals::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SerialHostControlSignals_UnserializedMessageContext<
            UserType, SerialHostControlSignals::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SerialHostControlSignals::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  bool dtr;
  bool has_dtr;
  bool rts;
  bool has_rts;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  SerialDeviceControlSignals {
 public:
  using DataView = SerialDeviceControlSignalsDataView;
  using Data_ = internal::SerialDeviceControlSignals_Data;

  template <typename... Args>
  static SerialDeviceControlSignalsPtr New(Args&&... args) {
    return SerialDeviceControlSignalsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SerialDeviceControlSignalsPtr From(const U& u) {
    return mojo::TypeConverter<SerialDeviceControlSignalsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SerialDeviceControlSignals>::Convert(*this);
  }


  SerialDeviceControlSignals();

  SerialDeviceControlSignals(
      bool dcd,
      bool cts,
      bool ri,
      bool dsr);

  ~SerialDeviceControlSignals();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SerialDeviceControlSignalsPtr>
  SerialDeviceControlSignalsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SerialDeviceControlSignals>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SerialDeviceControlSignals::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SerialDeviceControlSignals::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SerialDeviceControlSignals_UnserializedMessageContext<
            UserType, SerialDeviceControlSignals::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SerialDeviceControlSignals::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SerialDeviceControlSignals::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SerialDeviceControlSignals_UnserializedMessageContext<
            UserType, SerialDeviceControlSignals::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SerialDeviceControlSignals::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  bool dcd;
  bool cts;
  bool ri;
  bool dsr;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




class  SerialDeviceInfo {
 public:
  using DataView = SerialDeviceInfoDataView;
  using Data_ = internal::SerialDeviceInfo_Data;

  template <typename... Args>
  static SerialDeviceInfoPtr New(Args&&... args) {
    return SerialDeviceInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SerialDeviceInfoPtr From(const U& u) {
    return mojo::TypeConverter<SerialDeviceInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SerialDeviceInfo>::Convert(*this);
  }


  SerialDeviceInfo();

  SerialDeviceInfo(
      const std::string& path,
      uint16_t vendor_id,
      bool has_vendor_id,
      uint16_t product_id,
      bool has_product_id,
      const base::Optional<std::string>& display_name);

  ~SerialDeviceInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SerialDeviceInfoPtr>
  SerialDeviceInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SerialDeviceInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SerialDeviceInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SerialDeviceInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SerialDeviceInfo_UnserializedMessageContext<
            UserType, SerialDeviceInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SerialDeviceInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SerialDeviceInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SerialDeviceInfo_UnserializedMessageContext<
            UserType, SerialDeviceInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SerialDeviceInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string path;
  uint16_t vendor_id;
  bool has_vendor_id;
  uint16_t product_id;
  bool has_product_id;
  base::Optional<std::string> display_name;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  SerialConnectionOptions {
 public:
  using DataView = SerialConnectionOptionsDataView;
  using Data_ = internal::SerialConnectionOptions_Data;

  template <typename... Args>
  static SerialConnectionOptionsPtr New(Args&&... args) {
    return SerialConnectionOptionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SerialConnectionOptionsPtr From(const U& u) {
    return mojo::TypeConverter<SerialConnectionOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SerialConnectionOptions>::Convert(*this);
  }


  SerialConnectionOptions();

  SerialConnectionOptions(
      uint32_t bitrate,
      SerialDataBits data_bits,
      SerialParityBit parity_bit,
      SerialStopBits stop_bits,
      bool cts_flow_control,
      bool has_cts_flow_control);

  ~SerialConnectionOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SerialConnectionOptionsPtr>
  SerialConnectionOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SerialConnectionOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SerialConnectionOptions::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SerialConnectionOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SerialConnectionOptions_UnserializedMessageContext<
            UserType, SerialConnectionOptions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SerialConnectionOptions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SerialConnectionOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SerialConnectionOptions_UnserializedMessageContext<
            UserType, SerialConnectionOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SerialConnectionOptions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  uint32_t bitrate;
  SerialDataBits data_bits;
  SerialParityBit parity_bit;
  SerialStopBits stop_bits;
  bool cts_flow_control;
  bool has_cts_flow_control;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  SerialConnectionInfo {
 public:
  using DataView = SerialConnectionInfoDataView;
  using Data_ = internal::SerialConnectionInfo_Data;

  template <typename... Args>
  static SerialConnectionInfoPtr New(Args&&... args) {
    return SerialConnectionInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SerialConnectionInfoPtr From(const U& u) {
    return mojo::TypeConverter<SerialConnectionInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SerialConnectionInfo>::Convert(*this);
  }


  SerialConnectionInfo();

  SerialConnectionInfo(
      uint32_t bitrate,
      SerialDataBits data_bits,
      SerialParityBit parity_bit,
      SerialStopBits stop_bits,
      bool cts_flow_control);

  ~SerialConnectionInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SerialConnectionInfoPtr>
  SerialConnectionInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SerialConnectionInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SerialConnectionInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SerialConnectionInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SerialConnectionInfo_UnserializedMessageContext<
            UserType, SerialConnectionInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SerialConnectionInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SerialConnectionInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SerialConnectionInfo_UnserializedMessageContext<
            UserType, SerialConnectionInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SerialConnectionInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  uint32_t bitrate;
  SerialDataBits data_bits;
  SerialParityBit parity_bit;
  SerialStopBits stop_bits;
  bool cts_flow_control;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};



template <typename StructPtrType>
SerialDeviceInfoPtr SerialDeviceInfo::Clone() const {
  return New(
      mojo::Clone(path),
      mojo::Clone(vendor_id),
      mojo::Clone(has_vendor_id),
      mojo::Clone(product_id),
      mojo::Clone(has_product_id),
      mojo::Clone(display_name)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SerialDeviceInfo>::value>::type*>
bool SerialDeviceInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->path, other_struct.path))
    return false;
  if (!mojo::Equals(this->vendor_id, other_struct.vendor_id))
    return false;
  if (!mojo::Equals(this->has_vendor_id, other_struct.has_vendor_id))
    return false;
  if (!mojo::Equals(this->product_id, other_struct.product_id))
    return false;
  if (!mojo::Equals(this->has_product_id, other_struct.has_product_id))
    return false;
  if (!mojo::Equals(this->display_name, other_struct.display_name))
    return false;
  return true;
}
template <typename StructPtrType>
SerialConnectionOptionsPtr SerialConnectionOptions::Clone() const {
  return New(
      mojo::Clone(bitrate),
      mojo::Clone(data_bits),
      mojo::Clone(parity_bit),
      mojo::Clone(stop_bits),
      mojo::Clone(cts_flow_control),
      mojo::Clone(has_cts_flow_control)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SerialConnectionOptions>::value>::type*>
bool SerialConnectionOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->bitrate, other_struct.bitrate))
    return false;
  if (!mojo::Equals(this->data_bits, other_struct.data_bits))
    return false;
  if (!mojo::Equals(this->parity_bit, other_struct.parity_bit))
    return false;
  if (!mojo::Equals(this->stop_bits, other_struct.stop_bits))
    return false;
  if (!mojo::Equals(this->cts_flow_control, other_struct.cts_flow_control))
    return false;
  if (!mojo::Equals(this->has_cts_flow_control, other_struct.has_cts_flow_control))
    return false;
  return true;
}
template <typename StructPtrType>
SerialConnectionInfoPtr SerialConnectionInfo::Clone() const {
  return New(
      mojo::Clone(bitrate),
      mojo::Clone(data_bits),
      mojo::Clone(parity_bit),
      mojo::Clone(stop_bits),
      mojo::Clone(cts_flow_control)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SerialConnectionInfo>::value>::type*>
bool SerialConnectionInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->bitrate, other_struct.bitrate))
    return false;
  if (!mojo::Equals(this->data_bits, other_struct.data_bits))
    return false;
  if (!mojo::Equals(this->parity_bit, other_struct.parity_bit))
    return false;
  if (!mojo::Equals(this->stop_bits, other_struct.stop_bits))
    return false;
  if (!mojo::Equals(this->cts_flow_control, other_struct.cts_flow_control))
    return false;
  return true;
}
template <typename StructPtrType>
SerialHostControlSignalsPtr SerialHostControlSignals::Clone() const {
  return New(
      mojo::Clone(dtr),
      mojo::Clone(has_dtr),
      mojo::Clone(rts),
      mojo::Clone(has_rts)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SerialHostControlSignals>::value>::type*>
bool SerialHostControlSignals::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->dtr, other_struct.dtr))
    return false;
  if (!mojo::Equals(this->has_dtr, other_struct.has_dtr))
    return false;
  if (!mojo::Equals(this->rts, other_struct.rts))
    return false;
  if (!mojo::Equals(this->has_rts, other_struct.has_rts))
    return false;
  return true;
}
template <typename StructPtrType>
SerialDeviceControlSignalsPtr SerialDeviceControlSignals::Clone() const {
  return New(
      mojo::Clone(dcd),
      mojo::Clone(cts),
      mojo::Clone(ri),
      mojo::Clone(dsr)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SerialDeviceControlSignals>::value>::type*>
bool SerialDeviceControlSignals::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->dcd, other_struct.dcd))
    return false;
  if (!mojo::Equals(this->cts, other_struct.cts))
    return false;
  if (!mojo::Equals(this->ri, other_struct.ri))
    return false;
  if (!mojo::Equals(this->dsr, other_struct.dsr))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace device

namespace mojo {


template <>
struct  StructTraits<::device::mojom::SerialDeviceInfo::DataView,
                                         ::device::mojom::SerialDeviceInfoPtr> {
  static bool IsNull(const ::device::mojom::SerialDeviceInfoPtr& input) { return !input; }
  static void SetToNull(::device::mojom::SerialDeviceInfoPtr* output) { output->reset(); }

  static const decltype(::device::mojom::SerialDeviceInfo::path)& path(
      const ::device::mojom::SerialDeviceInfoPtr& input) {
    return input->path;
  }

  static decltype(::device::mojom::SerialDeviceInfo::vendor_id) vendor_id(
      const ::device::mojom::SerialDeviceInfoPtr& input) {
    return input->vendor_id;
  }

  static decltype(::device::mojom::SerialDeviceInfo::has_vendor_id) has_vendor_id(
      const ::device::mojom::SerialDeviceInfoPtr& input) {
    return input->has_vendor_id;
  }

  static decltype(::device::mojom::SerialDeviceInfo::product_id) product_id(
      const ::device::mojom::SerialDeviceInfoPtr& input) {
    return input->product_id;
  }

  static decltype(::device::mojom::SerialDeviceInfo::has_product_id) has_product_id(
      const ::device::mojom::SerialDeviceInfoPtr& input) {
    return input->has_product_id;
  }

  static const decltype(::device::mojom::SerialDeviceInfo::display_name)& display_name(
      const ::device::mojom::SerialDeviceInfoPtr& input) {
    return input->display_name;
  }

  static bool Read(::device::mojom::SerialDeviceInfo::DataView input, ::device::mojom::SerialDeviceInfoPtr* output);
};


template <>
struct  StructTraits<::device::mojom::SerialConnectionOptions::DataView,
                                         ::device::mojom::SerialConnectionOptionsPtr> {
  static bool IsNull(const ::device::mojom::SerialConnectionOptionsPtr& input) { return !input; }
  static void SetToNull(::device::mojom::SerialConnectionOptionsPtr* output) { output->reset(); }

  static decltype(::device::mojom::SerialConnectionOptions::bitrate) bitrate(
      const ::device::mojom::SerialConnectionOptionsPtr& input) {
    return input->bitrate;
  }

  static decltype(::device::mojom::SerialConnectionOptions::data_bits) data_bits(
      const ::device::mojom::SerialConnectionOptionsPtr& input) {
    return input->data_bits;
  }

  static decltype(::device::mojom::SerialConnectionOptions::parity_bit) parity_bit(
      const ::device::mojom::SerialConnectionOptionsPtr& input) {
    return input->parity_bit;
  }

  static decltype(::device::mojom::SerialConnectionOptions::stop_bits) stop_bits(
      const ::device::mojom::SerialConnectionOptionsPtr& input) {
    return input->stop_bits;
  }

  static decltype(::device::mojom::SerialConnectionOptions::cts_flow_control) cts_flow_control(
      const ::device::mojom::SerialConnectionOptionsPtr& input) {
    return input->cts_flow_control;
  }

  static decltype(::device::mojom::SerialConnectionOptions::has_cts_flow_control) has_cts_flow_control(
      const ::device::mojom::SerialConnectionOptionsPtr& input) {
    return input->has_cts_flow_control;
  }

  static bool Read(::device::mojom::SerialConnectionOptions::DataView input, ::device::mojom::SerialConnectionOptionsPtr* output);
};


template <>
struct  StructTraits<::device::mojom::SerialConnectionInfo::DataView,
                                         ::device::mojom::SerialConnectionInfoPtr> {
  static bool IsNull(const ::device::mojom::SerialConnectionInfoPtr& input) { return !input; }
  static void SetToNull(::device::mojom::SerialConnectionInfoPtr* output) { output->reset(); }

  static decltype(::device::mojom::SerialConnectionInfo::bitrate) bitrate(
      const ::device::mojom::SerialConnectionInfoPtr& input) {
    return input->bitrate;
  }

  static decltype(::device::mojom::SerialConnectionInfo::data_bits) data_bits(
      const ::device::mojom::SerialConnectionInfoPtr& input) {
    return input->data_bits;
  }

  static decltype(::device::mojom::SerialConnectionInfo::parity_bit) parity_bit(
      const ::device::mojom::SerialConnectionInfoPtr& input) {
    return input->parity_bit;
  }

  static decltype(::device::mojom::SerialConnectionInfo::stop_bits) stop_bits(
      const ::device::mojom::SerialConnectionInfoPtr& input) {
    return input->stop_bits;
  }

  static decltype(::device::mojom::SerialConnectionInfo::cts_flow_control) cts_flow_control(
      const ::device::mojom::SerialConnectionInfoPtr& input) {
    return input->cts_flow_control;
  }

  static bool Read(::device::mojom::SerialConnectionInfo::DataView input, ::device::mojom::SerialConnectionInfoPtr* output);
};


template <>
struct  StructTraits<::device::mojom::SerialHostControlSignals::DataView,
                                         ::device::mojom::SerialHostControlSignalsPtr> {
  static bool IsNull(const ::device::mojom::SerialHostControlSignalsPtr& input) { return !input; }
  static void SetToNull(::device::mojom::SerialHostControlSignalsPtr* output) { output->reset(); }

  static decltype(::device::mojom::SerialHostControlSignals::dtr) dtr(
      const ::device::mojom::SerialHostControlSignalsPtr& input) {
    return input->dtr;
  }

  static decltype(::device::mojom::SerialHostControlSignals::has_dtr) has_dtr(
      const ::device::mojom::SerialHostControlSignalsPtr& input) {
    return input->has_dtr;
  }

  static decltype(::device::mojom::SerialHostControlSignals::rts) rts(
      const ::device::mojom::SerialHostControlSignalsPtr& input) {
    return input->rts;
  }

  static decltype(::device::mojom::SerialHostControlSignals::has_rts) has_rts(
      const ::device::mojom::SerialHostControlSignalsPtr& input) {
    return input->has_rts;
  }

  static bool Read(::device::mojom::SerialHostControlSignals::DataView input, ::device::mojom::SerialHostControlSignalsPtr* output);
};


template <>
struct  StructTraits<::device::mojom::SerialDeviceControlSignals::DataView,
                                         ::device::mojom::SerialDeviceControlSignalsPtr> {
  static bool IsNull(const ::device::mojom::SerialDeviceControlSignalsPtr& input) { return !input; }
  static void SetToNull(::device::mojom::SerialDeviceControlSignalsPtr* output) { output->reset(); }

  static decltype(::device::mojom::SerialDeviceControlSignals::dcd) dcd(
      const ::device::mojom::SerialDeviceControlSignalsPtr& input) {
    return input->dcd;
  }

  static decltype(::device::mojom::SerialDeviceControlSignals::cts) cts(
      const ::device::mojom::SerialDeviceControlSignalsPtr& input) {
    return input->cts;
  }

  static decltype(::device::mojom::SerialDeviceControlSignals::ri) ri(
      const ::device::mojom::SerialDeviceControlSignalsPtr& input) {
    return input->ri;
  }

  static decltype(::device::mojom::SerialDeviceControlSignals::dsr) dsr(
      const ::device::mojom::SerialDeviceControlSignalsPtr& input) {
    return input->dsr;
  }

  static bool Read(::device::mojom::SerialDeviceControlSignals::DataView input, ::device::mojom::SerialDeviceControlSignalsPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_H_