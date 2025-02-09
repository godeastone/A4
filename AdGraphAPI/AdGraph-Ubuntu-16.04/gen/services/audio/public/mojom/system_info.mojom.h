// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_AUDIO_PUBLIC_MOJOM_SYSTEM_INFO_MOJOM_H_
#define SERVICES_AUDIO_PUBLIC_MOJOM_SYSTEM_INFO_MOJOM_H_

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
#include "services/audio/public/mojom/system_info.mojom-shared.h"
#include "media/mojo/interfaces/audio_parameters.mojom.h"
#include "services/audio/public/mojom/audio_device_description.mojom.h"
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


namespace audio {
namespace mojom {
class SystemInfo;
using SystemInfoPtr = mojo::InterfacePtr<SystemInfo>;
using SystemInfoPtrInfo = mojo::InterfacePtrInfo<SystemInfo>;
using ThreadSafeSystemInfoPtr =
    mojo::ThreadSafeInterfacePtr<SystemInfo>;
using SystemInfoRequest = mojo::InterfaceRequest<SystemInfo>;
using SystemInfoAssociatedPtr =
    mojo::AssociatedInterfacePtr<SystemInfo>;
using ThreadSafeSystemInfoAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SystemInfo>;
using SystemInfoAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SystemInfo>;
using SystemInfoAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SystemInfo>;


class SystemInfoProxy;

template <typename ImplRefTraits>
class SystemInfoStub;

class SystemInfoRequestValidator;
class SystemInfoResponseValidator;

class  SystemInfo
    : public SystemInfoInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = SystemInfoProxy;

  template <typename ImplRefTraits>
  using Stub_ = SystemInfoStub<ImplRefTraits>;

  using RequestValidator_ = SystemInfoRequestValidator;
  using ResponseValidator_ = SystemInfoResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetInputStreamParametersMinVersion = 0,
    kGetOutputStreamParametersMinVersion = 0,
    kHasInputDevicesMinVersion = 0,
    kHasOutputDevicesMinVersion = 0,
    kGetInputDeviceDescriptionsMinVersion = 0,
    kGetOutputDeviceDescriptionsMinVersion = 0,
    kGetAssociatedOutputDeviceIDMinVersion = 0,
    kGetInputDeviceInfoMinVersion = 0,
  };
  virtual ~SystemInfo() {}


  using GetInputStreamParametersCallback = base::OnceCallback<void(const base::Optional<media::AudioParameters>&)>;
  virtual void GetInputStreamParameters(const std::string& device_id, GetInputStreamParametersCallback callback) = 0;


  using GetOutputStreamParametersCallback = base::OnceCallback<void(const base::Optional<media::AudioParameters>&)>;
  virtual void GetOutputStreamParameters(const std::string& device_id, GetOutputStreamParametersCallback callback) = 0;


  using HasInputDevicesCallback = base::OnceCallback<void(bool)>;
  virtual void HasInputDevices(HasInputDevicesCallback callback) = 0;


  using HasOutputDevicesCallback = base::OnceCallback<void(bool)>;
  virtual void HasOutputDevices(HasOutputDevicesCallback callback) = 0;


  using GetInputDeviceDescriptionsCallback = base::OnceCallback<void(std::vector<media::AudioDeviceDescription>)>;
  virtual void GetInputDeviceDescriptions(GetInputDeviceDescriptionsCallback callback) = 0;


  using GetOutputDeviceDescriptionsCallback = base::OnceCallback<void(std::vector<media::AudioDeviceDescription>)>;
  virtual void GetOutputDeviceDescriptions(GetOutputDeviceDescriptionsCallback callback) = 0;


  using GetAssociatedOutputDeviceIDCallback = base::OnceCallback<void(const base::Optional<std::string>&)>;
  virtual void GetAssociatedOutputDeviceID(const std::string& input_device_id, GetAssociatedOutputDeviceIDCallback callback) = 0;


  using GetInputDeviceInfoCallback = base::OnceCallback<void(const base::Optional<media::AudioParameters>&, const base::Optional<std::string>&)>;
  virtual void GetInputDeviceInfo(const std::string& input_device_id, GetInputDeviceInfoCallback callback) = 0;
};
class  SystemInfoInterceptorForTesting : public SystemInfo {
  virtual SystemInfo* GetForwardingInterface() = 0;
  void GetInputStreamParameters(const std::string& device_id, GetInputStreamParametersCallback callback) override;
  void GetOutputStreamParameters(const std::string& device_id, GetOutputStreamParametersCallback callback) override;
  void HasInputDevices(HasInputDevicesCallback callback) override;
  void HasOutputDevices(HasOutputDevicesCallback callback) override;
  void GetInputDeviceDescriptions(GetInputDeviceDescriptionsCallback callback) override;
  void GetOutputDeviceDescriptions(GetOutputDeviceDescriptionsCallback callback) override;
  void GetAssociatedOutputDeviceID(const std::string& input_device_id, GetAssociatedOutputDeviceIDCallback callback) override;
  void GetInputDeviceInfo(const std::string& input_device_id, GetInputDeviceInfoCallback callback) override;
};
class  SystemInfoAsyncWaiter {
 public:
  explicit SystemInfoAsyncWaiter(SystemInfo* proxy);
  ~SystemInfoAsyncWaiter();
  void GetInputStreamParameters(
      const std::string& device_id, base::Optional<media::AudioParameters>* out_params);
  void GetOutputStreamParameters(
      const std::string& device_id, base::Optional<media::AudioParameters>* out_params);
  void HasInputDevices(
      bool* out_has_input_devices);
  void HasOutputDevices(
      bool* out_has_output_devices);
  void GetInputDeviceDescriptions(
      std::vector<media::AudioDeviceDescription>* out_device_descriptions);
  void GetOutputDeviceDescriptions(
      std::vector<media::AudioDeviceDescription>* out_device_descriptions);
  void GetAssociatedOutputDeviceID(
      const std::string& input_device_id, base::Optional<std::string>* out_associated_output_device_id);
  void GetInputDeviceInfo(
      const std::string& input_device_id, base::Optional<media::AudioParameters>* out_input_params, base::Optional<std::string>* out_associated_output_device_id);

 private:
  SystemInfo* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SystemInfoAsyncWaiter);
};

class  SystemInfoProxy
    : public SystemInfo {
 public:
  explicit SystemInfoProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetInputStreamParameters(const std::string& device_id, GetInputStreamParametersCallback callback) final;
  void GetOutputStreamParameters(const std::string& device_id, GetOutputStreamParametersCallback callback) final;
  void HasInputDevices(HasInputDevicesCallback callback) final;
  void HasOutputDevices(HasOutputDevicesCallback callback) final;
  void GetInputDeviceDescriptions(GetInputDeviceDescriptionsCallback callback) final;
  void GetOutputDeviceDescriptions(GetOutputDeviceDescriptionsCallback callback) final;
  void GetAssociatedOutputDeviceID(const std::string& input_device_id, GetAssociatedOutputDeviceIDCallback callback) final;
  void GetInputDeviceInfo(const std::string& input_device_id, GetInputDeviceInfoCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  SystemInfoStubDispatch {
 public:
  static bool Accept(SystemInfo* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SystemInfo* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SystemInfo>>
class SystemInfoStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SystemInfoStub() {}
  ~SystemInfoStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SystemInfoStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SystemInfoStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  SystemInfoRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  SystemInfoResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace audio

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_AUDIO_PUBLIC_MOJOM_SYSTEM_INFO_MOJOM_H_