// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_USER_ACTIVITY_MONITOR_MOJOM_H_
#define SERVICES_UI_PUBLIC_INTERFACES_USER_ACTIVITY_MONITOR_MOJOM_H_

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
#include "services/ui/public/interfaces/user_activity_monitor.mojom-shared.h"
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


namespace ui {
namespace mojom {
class UserActivityObserver;
using UserActivityObserverPtr = mojo::InterfacePtr<UserActivityObserver>;
using UserActivityObserverPtrInfo = mojo::InterfacePtrInfo<UserActivityObserver>;
using ThreadSafeUserActivityObserverPtr =
    mojo::ThreadSafeInterfacePtr<UserActivityObserver>;
using UserActivityObserverRequest = mojo::InterfaceRequest<UserActivityObserver>;
using UserActivityObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<UserActivityObserver>;
using ThreadSafeUserActivityObserverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<UserActivityObserver>;
using UserActivityObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<UserActivityObserver>;
using UserActivityObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<UserActivityObserver>;

class UserIdleObserver;
using UserIdleObserverPtr = mojo::InterfacePtr<UserIdleObserver>;
using UserIdleObserverPtrInfo = mojo::InterfacePtrInfo<UserIdleObserver>;
using ThreadSafeUserIdleObserverPtr =
    mojo::ThreadSafeInterfacePtr<UserIdleObserver>;
using UserIdleObserverRequest = mojo::InterfaceRequest<UserIdleObserver>;
using UserIdleObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<UserIdleObserver>;
using ThreadSafeUserIdleObserverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<UserIdleObserver>;
using UserIdleObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<UserIdleObserver>;
using UserIdleObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<UserIdleObserver>;

class UserActivityMonitor;
using UserActivityMonitorPtr = mojo::InterfacePtr<UserActivityMonitor>;
using UserActivityMonitorPtrInfo = mojo::InterfacePtrInfo<UserActivityMonitor>;
using ThreadSafeUserActivityMonitorPtr =
    mojo::ThreadSafeInterfacePtr<UserActivityMonitor>;
using UserActivityMonitorRequest = mojo::InterfaceRequest<UserActivityMonitor>;
using UserActivityMonitorAssociatedPtr =
    mojo::AssociatedInterfacePtr<UserActivityMonitor>;
using ThreadSafeUserActivityMonitorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<UserActivityMonitor>;
using UserActivityMonitorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<UserActivityMonitor>;
using UserActivityMonitorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<UserActivityMonitor>;


class UserActivityObserverProxy;

template <typename ImplRefTraits>
class UserActivityObserverStub;

class UserActivityObserverRequestValidator;

class  UserActivityObserver
    : public UserActivityObserverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = UserActivityObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = UserActivityObserverStub<ImplRefTraits>;

  using RequestValidator_ = UserActivityObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnUserActivityMinVersion = 0,
  };
  virtual ~UserActivityObserver() {}

  virtual void OnUserActivity() = 0;
};
class  UserActivityObserverInterceptorForTesting : public UserActivityObserver {
  virtual UserActivityObserver* GetForwardingInterface() = 0;
  void OnUserActivity() override;
};
class  UserActivityObserverAsyncWaiter {
 public:
  explicit UserActivityObserverAsyncWaiter(UserActivityObserver* proxy);
  ~UserActivityObserverAsyncWaiter();

 private:
  UserActivityObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(UserActivityObserverAsyncWaiter);
};

class UserIdleObserverProxy;

template <typename ImplRefTraits>
class UserIdleObserverStub;

class UserIdleObserverRequestValidator;

class  UserIdleObserver
    : public UserIdleObserverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = UserIdleObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = UserIdleObserverStub<ImplRefTraits>;

  using RequestValidator_ = UserIdleObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnUserIdleStateChangedMinVersion = 0,
  };
  using IdleState = UserIdleObserver_IdleState;
  virtual ~UserIdleObserver() {}

  virtual void OnUserIdleStateChanged(UserIdleObserver::IdleState new_state) = 0;
};
class  UserIdleObserverInterceptorForTesting : public UserIdleObserver {
  virtual UserIdleObserver* GetForwardingInterface() = 0;
  void OnUserIdleStateChanged(UserIdleObserver::IdleState new_state) override;
};
class  UserIdleObserverAsyncWaiter {
 public:
  explicit UserIdleObserverAsyncWaiter(UserIdleObserver* proxy);
  ~UserIdleObserverAsyncWaiter();

 private:
  UserIdleObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(UserIdleObserverAsyncWaiter);
};

class UserActivityMonitorProxy;

template <typename ImplRefTraits>
class UserActivityMonitorStub;

class UserActivityMonitorRequestValidator;

class  UserActivityMonitor
    : public UserActivityMonitorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = UserActivityMonitorProxy;

  template <typename ImplRefTraits>
  using Stub_ = UserActivityMonitorStub<ImplRefTraits>;

  using RequestValidator_ = UserActivityMonitorRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kAddUserActivityObserverMinVersion = 0,
    kAddUserIdleObserverMinVersion = 0,
  };
  virtual ~UserActivityMonitor() {}

  virtual void AddUserActivityObserver(uint32_t delay_between_notify_secs, UserActivityObserverPtr observer) = 0;

  virtual void AddUserIdleObserver(uint32_t idle_time_in_minutes, UserIdleObserverPtr observer) = 0;
};
class  UserActivityMonitorInterceptorForTesting : public UserActivityMonitor {
  virtual UserActivityMonitor* GetForwardingInterface() = 0;
  void AddUserActivityObserver(uint32_t delay_between_notify_secs, UserActivityObserverPtr observer) override;
  void AddUserIdleObserver(uint32_t idle_time_in_minutes, UserIdleObserverPtr observer) override;
};
class  UserActivityMonitorAsyncWaiter {
 public:
  explicit UserActivityMonitorAsyncWaiter(UserActivityMonitor* proxy);
  ~UserActivityMonitorAsyncWaiter();

 private:
  UserActivityMonitor* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(UserActivityMonitorAsyncWaiter);
};

class  UserActivityObserverProxy
    : public UserActivityObserver {
 public:
  explicit UserActivityObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnUserActivity() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  UserIdleObserverProxy
    : public UserIdleObserver {
 public:
  explicit UserIdleObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnUserIdleStateChanged(UserIdleObserver::IdleState new_state) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  UserActivityMonitorProxy
    : public UserActivityMonitor {
 public:
  explicit UserActivityMonitorProxy(mojo::MessageReceiverWithResponder* receiver);
  void AddUserActivityObserver(uint32_t delay_between_notify_secs, UserActivityObserverPtr observer) final;
  void AddUserIdleObserver(uint32_t idle_time_in_minutes, UserIdleObserverPtr observer) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  UserActivityObserverStubDispatch {
 public:
  static bool Accept(UserActivityObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      UserActivityObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<UserActivityObserver>>
class UserActivityObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  UserActivityObserverStub() {}
  ~UserActivityObserverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UserActivityObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UserActivityObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  UserIdleObserverStubDispatch {
 public:
  static bool Accept(UserIdleObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      UserIdleObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<UserIdleObserver>>
class UserIdleObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  UserIdleObserverStub() {}
  ~UserIdleObserverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UserIdleObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UserIdleObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  UserActivityMonitorStubDispatch {
 public:
  static bool Accept(UserActivityMonitor* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      UserActivityMonitor* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<UserActivityMonitor>>
class UserActivityMonitorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  UserActivityMonitorStub() {}
  ~UserActivityMonitorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UserActivityMonitorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UserActivityMonitorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  UserActivityObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  UserIdleObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  UserActivityMonitorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace ui

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_USER_ACTIVITY_MONITOR_MOJOM_H_