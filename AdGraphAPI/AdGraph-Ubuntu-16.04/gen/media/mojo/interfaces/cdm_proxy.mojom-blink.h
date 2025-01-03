// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CDM_PROXY_MOJOM_BLINK_H_
#define MEDIA_MOJO_INTERFACES_CDM_PROXY_MOJOM_BLINK_H_

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
#include "media/mojo/interfaces/cdm_proxy.mojom-shared.h"

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


namespace media {
namespace mojom {
namespace blink {
class CdmProxy;
using CdmProxyPtr = mojo::InterfacePtr<CdmProxy>;
using RevocableCdmProxyPtr = ::blink::RevocableInterfacePtr<CdmProxy>;
using CdmProxyPtrInfo = mojo::InterfacePtrInfo<CdmProxy>;
using ThreadSafeCdmProxyPtr =
    mojo::ThreadSafeInterfacePtr<CdmProxy>;
using CdmProxyRequest = mojo::InterfaceRequest<CdmProxy>;
using CdmProxyAssociatedPtr =
    mojo::AssociatedInterfacePtr<CdmProxy>;
using ThreadSafeCdmProxyAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<CdmProxy>;
using CdmProxyAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<CdmProxy>;
using CdmProxyAssociatedRequest =
    mojo::AssociatedInterfaceRequest<CdmProxy>;

class CdmProxyClient;
using CdmProxyClientPtr = mojo::InterfacePtr<CdmProxyClient>;
using RevocableCdmProxyClientPtr = ::blink::RevocableInterfacePtr<CdmProxyClient>;
using CdmProxyClientPtrInfo = mojo::InterfacePtrInfo<CdmProxyClient>;
using ThreadSafeCdmProxyClientPtr =
    mojo::ThreadSafeInterfacePtr<CdmProxyClient>;
using CdmProxyClientRequest = mojo::InterfaceRequest<CdmProxyClient>;
using CdmProxyClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<CdmProxyClient>;
using ThreadSafeCdmProxyClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<CdmProxyClient>;
using CdmProxyClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<CdmProxyClient>;
using CdmProxyClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<CdmProxyClient>;


class CdmProxyProxy;

template <typename ImplRefTraits>
class CdmProxyStub;

class CdmProxyRequestValidator;
class CdmProxyResponseValidator;

class  CdmProxy
    : public CdmProxyInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = CdmProxyProxy;

  template <typename ImplRefTraits>
  using Stub_ = CdmProxyStub<ImplRefTraits>;

  using RequestValidator_ = CdmProxyRequestValidator;
  using ResponseValidator_ = CdmProxyResponseValidator;
  enum MethodMinVersions : uint32_t {
    kInitializeMinVersion = 0,
    kProcessMinVersion = 0,
    kCreateMediaCryptoSessionMinVersion = 0,
    kSetKeyMinVersion = 0,
    kRemoveKeyMinVersion = 0,
  };
  using Status = CdmProxy_Status;
  using Protocol = CdmProxy_Protocol;
  using Function = CdmProxy_Function;
  virtual ~CdmProxy() {}


  using InitializeCallback = base::OnceCallback<void(CdmProxy::Status, CdmProxy::Protocol, uint32_t, int32_t)>;
  virtual void Initialize(CdmProxyClientAssociatedPtrInfo client, InitializeCallback callback) = 0;


  using ProcessCallback = base::OnceCallback<void(CdmProxy::Status, const WTF::Vector<uint8_t>&)>;
  virtual void Process(CdmProxy::Function function, uint32_t crypto_session_id, const WTF::Vector<uint8_t>& input_data, uint32_t output_data_size, ProcessCallback callback) = 0;


  using CreateMediaCryptoSessionCallback = base::OnceCallback<void(CdmProxy::Status, uint32_t, uint64_t)>;
  virtual void CreateMediaCryptoSession(const WTF::Vector<uint8_t>& input_data, CreateMediaCryptoSessionCallback callback) = 0;

  virtual void SetKey(uint32_t crypto_session_id, const WTF::Vector<uint8_t>& key_id, const WTF::Vector<uint8_t>& key_blob) = 0;

  virtual void RemoveKey(uint32_t crypto_session_id, const WTF::Vector<uint8_t>& key_id) = 0;
};
class  CdmProxyInterceptorForTesting : public CdmProxy {
  virtual CdmProxy* GetForwardingInterface() = 0;
  void Initialize(CdmProxyClientAssociatedPtrInfo client, InitializeCallback callback) override;
  void Process(CdmProxy::Function function, uint32_t crypto_session_id, const WTF::Vector<uint8_t>& input_data, uint32_t output_data_size, ProcessCallback callback) override;
  void CreateMediaCryptoSession(const WTF::Vector<uint8_t>& input_data, CreateMediaCryptoSessionCallback callback) override;
  void SetKey(uint32_t crypto_session_id, const WTF::Vector<uint8_t>& key_id, const WTF::Vector<uint8_t>& key_blob) override;
  void RemoveKey(uint32_t crypto_session_id, const WTF::Vector<uint8_t>& key_id) override;
};
class  CdmProxyAsyncWaiter {
 public:
  explicit CdmProxyAsyncWaiter(CdmProxy* proxy);
  ~CdmProxyAsyncWaiter();
  void Initialize(
      CdmProxyClientAssociatedPtrInfo client, CdmProxy::Status* out_status, CdmProxy::Protocol* out_protocol, uint32_t* out_crypto_session_id, int32_t* out_cdm_id);
  void Process(
      CdmProxy::Function function, uint32_t crypto_session_id, const WTF::Vector<uint8_t>& input_data, uint32_t output_data_size, CdmProxy::Status* out_status, WTF::Vector<uint8_t>* out_output_data);
  void CreateMediaCryptoSession(
      const WTF::Vector<uint8_t>& input_data, CdmProxy::Status* out_status, uint32_t* out_crypto_session_id, uint64_t* out_output_data);

 private:
  CdmProxy* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CdmProxyAsyncWaiter);
};

class CdmProxyClientProxy;

template <typename ImplRefTraits>
class CdmProxyClientStub;

class CdmProxyClientRequestValidator;

class  CdmProxyClient
    : public CdmProxyClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = CdmProxyClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = CdmProxyClientStub<ImplRefTraits>;

  using RequestValidator_ = CdmProxyClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kNotifyHardwareResetMinVersion = 0,
  };
  virtual ~CdmProxyClient() {}

  virtual void NotifyHardwareReset() = 0;
};
class  CdmProxyClientInterceptorForTesting : public CdmProxyClient {
  virtual CdmProxyClient* GetForwardingInterface() = 0;
  void NotifyHardwareReset() override;
};
class  CdmProxyClientAsyncWaiter {
 public:
  explicit CdmProxyClientAsyncWaiter(CdmProxyClient* proxy);
  ~CdmProxyClientAsyncWaiter();

 private:
  CdmProxyClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CdmProxyClientAsyncWaiter);
};

class  CdmProxyProxy
    : public CdmProxy {
 public:
  explicit CdmProxyProxy(mojo::MessageReceiverWithResponder* receiver);
  void Initialize(CdmProxyClientAssociatedPtrInfo client, InitializeCallback callback) final;
  void Process(CdmProxy::Function function, uint32_t crypto_session_id, const WTF::Vector<uint8_t>& input_data, uint32_t output_data_size, ProcessCallback callback) final;
  void CreateMediaCryptoSession(const WTF::Vector<uint8_t>& input_data, CreateMediaCryptoSessionCallback callback) final;
  void SetKey(uint32_t crypto_session_id, const WTF::Vector<uint8_t>& key_id, const WTF::Vector<uint8_t>& key_blob) final;
  void RemoveKey(uint32_t crypto_session_id, const WTF::Vector<uint8_t>& key_id) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  CdmProxyClientProxy
    : public CdmProxyClient {
 public:
  explicit CdmProxyClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void NotifyHardwareReset() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  CdmProxyStubDispatch {
 public:
  static bool Accept(CdmProxy* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      CdmProxy* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<CdmProxy>>
class CdmProxyStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CdmProxyStub() {}
  ~CdmProxyStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CdmProxyStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CdmProxyStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  CdmProxyClientStubDispatch {
 public:
  static bool Accept(CdmProxyClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      CdmProxyClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<CdmProxyClient>>
class CdmProxyClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CdmProxyClientStub() {}
  ~CdmProxyClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CdmProxyClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CdmProxyClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  CdmProxyRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  CdmProxyClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  CdmProxyResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_CDM_PROXY_MOJOM_BLINK_H_