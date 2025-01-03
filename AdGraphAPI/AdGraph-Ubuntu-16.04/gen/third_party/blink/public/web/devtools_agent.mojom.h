// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_WEB_DEVTOOLS_AGENT_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_WEB_DEVTOOLS_AGENT_MOJOM_H_

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
#include "third_party/blink/public/web/devtools_agent.mojom-shared.h"
#include "mojo/public/mojom/base/big_string.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
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
#include "content/common/content_export.h"


namespace blink {
namespace mojom {
class DevToolsAgent;
using DevToolsAgentPtr = mojo::InterfacePtr<DevToolsAgent>;
using DevToolsAgentPtrInfo = mojo::InterfacePtrInfo<DevToolsAgent>;
using ThreadSafeDevToolsAgentPtr =
    mojo::ThreadSafeInterfacePtr<DevToolsAgent>;
using DevToolsAgentRequest = mojo::InterfaceRequest<DevToolsAgent>;
using DevToolsAgentAssociatedPtr =
    mojo::AssociatedInterfacePtr<DevToolsAgent>;
using ThreadSafeDevToolsAgentAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<DevToolsAgent>;
using DevToolsAgentAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DevToolsAgent>;
using DevToolsAgentAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DevToolsAgent>;

class DevToolsSession;
using DevToolsSessionPtr = mojo::InterfacePtr<DevToolsSession>;
using DevToolsSessionPtrInfo = mojo::InterfacePtrInfo<DevToolsSession>;
using ThreadSafeDevToolsSessionPtr =
    mojo::ThreadSafeInterfacePtr<DevToolsSession>;
using DevToolsSessionRequest = mojo::InterfaceRequest<DevToolsSession>;
using DevToolsSessionAssociatedPtr =
    mojo::AssociatedInterfacePtr<DevToolsSession>;
using ThreadSafeDevToolsSessionAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<DevToolsSession>;
using DevToolsSessionAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DevToolsSession>;
using DevToolsSessionAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DevToolsSession>;

class DevToolsSessionHost;
using DevToolsSessionHostPtr = mojo::InterfacePtr<DevToolsSessionHost>;
using DevToolsSessionHostPtrInfo = mojo::InterfacePtrInfo<DevToolsSessionHost>;
using ThreadSafeDevToolsSessionHostPtr =
    mojo::ThreadSafeInterfacePtr<DevToolsSessionHost>;
using DevToolsSessionHostRequest = mojo::InterfaceRequest<DevToolsSessionHost>;
using DevToolsSessionHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<DevToolsSessionHost>;
using ThreadSafeDevToolsSessionHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<DevToolsSessionHost>;
using DevToolsSessionHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DevToolsSessionHost>;
using DevToolsSessionHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DevToolsSessionHost>;


class DevToolsAgentProxy;

template <typename ImplRefTraits>
class DevToolsAgentStub;

class DevToolsAgentRequestValidator;

class CONTENT_EXPORT DevToolsAgent
    : public DevToolsAgentInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = DevToolsAgentProxy;

  template <typename ImplRefTraits>
  using Stub_ = DevToolsAgentStub<ImplRefTraits>;

  using RequestValidator_ = DevToolsAgentRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kAttachDevToolsSessionMinVersion = 0,
    kInspectElementMinVersion = 0,
  };
  virtual ~DevToolsAgent() {}

  virtual void AttachDevToolsSession(DevToolsSessionHostAssociatedPtrInfo host, DevToolsSessionAssociatedRequest session, DevToolsSessionRequest io_session, const base::Optional<std::string>& reattach_state) = 0;

  virtual void InspectElement(const gfx::Point& point) = 0;
};
class CONTENT_EXPORT DevToolsAgentInterceptorForTesting : public DevToolsAgent {
  virtual DevToolsAgent* GetForwardingInterface() = 0;
  void AttachDevToolsSession(DevToolsSessionHostAssociatedPtrInfo host, DevToolsSessionAssociatedRequest session, DevToolsSessionRequest io_session, const base::Optional<std::string>& reattach_state) override;
  void InspectElement(const gfx::Point& point) override;
};
class CONTENT_EXPORT DevToolsAgentAsyncWaiter {
 public:
  explicit DevToolsAgentAsyncWaiter(DevToolsAgent* proxy);
  ~DevToolsAgentAsyncWaiter();

 private:
  DevToolsAgent* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DevToolsAgentAsyncWaiter);
};

class DevToolsSessionProxy;

template <typename ImplRefTraits>
class DevToolsSessionStub;

class DevToolsSessionRequestValidator;

class CONTENT_EXPORT DevToolsSession
    : public DevToolsSessionInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = DevToolsSessionProxy;

  template <typename ImplRefTraits>
  using Stub_ = DevToolsSessionStub<ImplRefTraits>;

  using RequestValidator_ = DevToolsSessionRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kDispatchProtocolCommandMinVersion = 0,
  };
  virtual ~DevToolsSession() {}

  virtual void DispatchProtocolCommand(int32_t call_id, const std::string& method, const std::string& message) = 0;
};
class CONTENT_EXPORT DevToolsSessionInterceptorForTesting : public DevToolsSession {
  virtual DevToolsSession* GetForwardingInterface() = 0;
  void DispatchProtocolCommand(int32_t call_id, const std::string& method, const std::string& message) override;
};
class CONTENT_EXPORT DevToolsSessionAsyncWaiter {
 public:
  explicit DevToolsSessionAsyncWaiter(DevToolsSession* proxy);
  ~DevToolsSessionAsyncWaiter();

 private:
  DevToolsSession* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DevToolsSessionAsyncWaiter);
};

class DevToolsSessionHostProxy;

template <typename ImplRefTraits>
class DevToolsSessionHostStub;

class DevToolsSessionHostRequestValidator;

class CONTENT_EXPORT DevToolsSessionHost
    : public DevToolsSessionHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = DevToolsSessionHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = DevToolsSessionHostStub<ImplRefTraits>;

  using RequestValidator_ = DevToolsSessionHostRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kDispatchProtocolResponseMinVersion = 0,
    kDispatchProtocolNotificationMinVersion = 0,
  };
  virtual ~DevToolsSessionHost() {}

  virtual void DispatchProtocolResponse(const std::string& message, int32_t call_id, const base::Optional<std::string>& state) = 0;

  virtual void DispatchProtocolNotification(const std::string& message, const base::Optional<std::string>& state) = 0;
};
class CONTENT_EXPORT DevToolsSessionHostInterceptorForTesting : public DevToolsSessionHost {
  virtual DevToolsSessionHost* GetForwardingInterface() = 0;
  void DispatchProtocolResponse(const std::string& message, int32_t call_id, const base::Optional<std::string>& state) override;
  void DispatchProtocolNotification(const std::string& message, const base::Optional<std::string>& state) override;
};
class CONTENT_EXPORT DevToolsSessionHostAsyncWaiter {
 public:
  explicit DevToolsSessionHostAsyncWaiter(DevToolsSessionHost* proxy);
  ~DevToolsSessionHostAsyncWaiter();

 private:
  DevToolsSessionHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DevToolsSessionHostAsyncWaiter);
};

class CONTENT_EXPORT DevToolsAgentProxy
    : public DevToolsAgent {
 public:
  explicit DevToolsAgentProxy(mojo::MessageReceiverWithResponder* receiver);
  void AttachDevToolsSession(DevToolsSessionHostAssociatedPtrInfo host, DevToolsSessionAssociatedRequest session, DevToolsSessionRequest io_session, const base::Optional<std::string>& reattach_state) final;
  void InspectElement(const gfx::Point& point) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT DevToolsSessionProxy
    : public DevToolsSession {
 public:
  explicit DevToolsSessionProxy(mojo::MessageReceiverWithResponder* receiver);
  void DispatchProtocolCommand(int32_t call_id, const std::string& method, const std::string& message) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT DevToolsSessionHostProxy
    : public DevToolsSessionHost {
 public:
  explicit DevToolsSessionHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void DispatchProtocolResponse(const std::string& message, int32_t call_id, const base::Optional<std::string>& state) final;
  void DispatchProtocolNotification(const std::string& message, const base::Optional<std::string>& state) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT DevToolsAgentStubDispatch {
 public:
  static bool Accept(DevToolsAgent* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DevToolsAgent* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DevToolsAgent>>
class DevToolsAgentStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DevToolsAgentStub() {}
  ~DevToolsAgentStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DevToolsAgentStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DevToolsAgentStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT DevToolsSessionStubDispatch {
 public:
  static bool Accept(DevToolsSession* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DevToolsSession* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DevToolsSession>>
class DevToolsSessionStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DevToolsSessionStub() {}
  ~DevToolsSessionStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DevToolsSessionStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DevToolsSessionStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT DevToolsSessionHostStubDispatch {
 public:
  static bool Accept(DevToolsSessionHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DevToolsSessionHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DevToolsSessionHost>>
class DevToolsSessionHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DevToolsSessionHostStub() {}
  ~DevToolsSessionHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DevToolsSessionHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DevToolsSessionHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT DevToolsAgentRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT DevToolsSessionRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT DevToolsSessionHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_WEB_DEVTOOLS_AGENT_MOJOM_H_