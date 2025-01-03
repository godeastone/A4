// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_BLINK_H_
#define DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_BLINK_H_

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
#include "device/gamepad/public/mojom/gamepad.mojom-shared.h"

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


namespace WTF {
struct device_mojom_internal_GamepadHand_DataHashFn {
  static unsigned GetHash(const ::device::mojom::GamepadHand& value) {
    using utype = std::underlying_type<::device::mojom::GamepadHand>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::device::mojom::GamepadHand& left, const ::device::mojom::GamepadHand& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::device::mojom::GamepadHand> {
  using Hash = device_mojom_internal_GamepadHand_DataHashFn;
};

template <>
struct HashTraits<::device::mojom::GamepadHand>
    : public GenericHashTraits<::device::mojom::GamepadHand> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::device::mojom::GamepadHand& value) {
    return value == static_cast<::device::mojom::GamepadHand>(-1000000);
  }
  static void ConstructDeletedValue(::device::mojom::GamepadHand& slot, bool) {
    slot = static_cast<::device::mojom::GamepadHand>(-1000001);
  }
  static bool IsDeletedValue(const ::device::mojom::GamepadHand& value) {
    return value == static_cast<::device::mojom::GamepadHand>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct device_mojom_internal_GamepadHapticActuatorType_DataHashFn {
  static unsigned GetHash(const ::device::mojom::GamepadHapticActuatorType& value) {
    using utype = std::underlying_type<::device::mojom::GamepadHapticActuatorType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::device::mojom::GamepadHapticActuatorType& left, const ::device::mojom::GamepadHapticActuatorType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::device::mojom::GamepadHapticActuatorType> {
  using Hash = device_mojom_internal_GamepadHapticActuatorType_DataHashFn;
};

template <>
struct HashTraits<::device::mojom::GamepadHapticActuatorType>
    : public GenericHashTraits<::device::mojom::GamepadHapticActuatorType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::device::mojom::GamepadHapticActuatorType& value) {
    return value == static_cast<::device::mojom::GamepadHapticActuatorType>(-1000000);
  }
  static void ConstructDeletedValue(::device::mojom::GamepadHapticActuatorType& slot, bool) {
    slot = static_cast<::device::mojom::GamepadHapticActuatorType>(-1000001);
  }
  static bool IsDeletedValue(const ::device::mojom::GamepadHapticActuatorType& value) {
    return value == static_cast<::device::mojom::GamepadHapticActuatorType>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct device_mojom_internal_GamepadHapticEffectType_DataHashFn {
  static unsigned GetHash(const ::device::mojom::GamepadHapticEffectType& value) {
    using utype = std::underlying_type<::device::mojom::GamepadHapticEffectType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::device::mojom::GamepadHapticEffectType& left, const ::device::mojom::GamepadHapticEffectType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::device::mojom::GamepadHapticEffectType> {
  using Hash = device_mojom_internal_GamepadHapticEffectType_DataHashFn;
};

template <>
struct HashTraits<::device::mojom::GamepadHapticEffectType>
    : public GenericHashTraits<::device::mojom::GamepadHapticEffectType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::device::mojom::GamepadHapticEffectType& value) {
    return value == static_cast<::device::mojom::GamepadHapticEffectType>(-1000000);
  }
  static void ConstructDeletedValue(::device::mojom::GamepadHapticEffectType& slot, bool) {
    slot = static_cast<::device::mojom::GamepadHapticEffectType>(-1000001);
  }
  static bool IsDeletedValue(const ::device::mojom::GamepadHapticEffectType& value) {
    return value == static_cast<::device::mojom::GamepadHapticEffectType>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct device_mojom_internal_GamepadHapticsResult_DataHashFn {
  static unsigned GetHash(const ::device::mojom::GamepadHapticsResult& value) {
    using utype = std::underlying_type<::device::mojom::GamepadHapticsResult>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::device::mojom::GamepadHapticsResult& left, const ::device::mojom::GamepadHapticsResult& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::device::mojom::GamepadHapticsResult> {
  using Hash = device_mojom_internal_GamepadHapticsResult_DataHashFn;
};

template <>
struct HashTraits<::device::mojom::GamepadHapticsResult>
    : public GenericHashTraits<::device::mojom::GamepadHapticsResult> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::device::mojom::GamepadHapticsResult& value) {
    return value == static_cast<::device::mojom::GamepadHapticsResult>(-1000000);
  }
  static void ConstructDeletedValue(::device::mojom::GamepadHapticsResult& slot, bool) {
    slot = static_cast<::device::mojom::GamepadHapticsResult>(-1000001);
  }
  static bool IsDeletedValue(const ::device::mojom::GamepadHapticsResult& value) {
    return value == static_cast<::device::mojom::GamepadHapticsResult>(-1000001);
  }
};
}  // namespace WTF


namespace device {
namespace mojom {
namespace blink {
using GamepadHand = GamepadHand;  // Alias for definition in the parent namespace.
using GamepadHapticActuatorType = GamepadHapticActuatorType;  // Alias for definition in the parent namespace.
using GamepadHapticEffectType = GamepadHapticEffectType;  // Alias for definition in the parent namespace.
using GamepadHapticsResult = GamepadHapticsResult;  // Alias for definition in the parent namespace.
class GamepadObserver;
using GamepadObserverPtr = mojo::InterfacePtr<GamepadObserver>;
using RevocableGamepadObserverPtr = ::blink::RevocableInterfacePtr<GamepadObserver>;
using GamepadObserverPtrInfo = mojo::InterfacePtrInfo<GamepadObserver>;
using ThreadSafeGamepadObserverPtr =
    mojo::ThreadSafeInterfacePtr<GamepadObserver>;
using GamepadObserverRequest = mojo::InterfaceRequest<GamepadObserver>;
using GamepadObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<GamepadObserver>;
using ThreadSafeGamepadObserverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<GamepadObserver>;
using GamepadObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<GamepadObserver>;
using GamepadObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<GamepadObserver>;

class GamepadMonitor;
using GamepadMonitorPtr = mojo::InterfacePtr<GamepadMonitor>;
using RevocableGamepadMonitorPtr = ::blink::RevocableInterfacePtr<GamepadMonitor>;
using GamepadMonitorPtrInfo = mojo::InterfacePtrInfo<GamepadMonitor>;
using ThreadSafeGamepadMonitorPtr =
    mojo::ThreadSafeInterfacePtr<GamepadMonitor>;
using GamepadMonitorRequest = mojo::InterfaceRequest<GamepadMonitor>;
using GamepadMonitorAssociatedPtr =
    mojo::AssociatedInterfacePtr<GamepadMonitor>;
using ThreadSafeGamepadMonitorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<GamepadMonitor>;
using GamepadMonitorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<GamepadMonitor>;
using GamepadMonitorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<GamepadMonitor>;

class GamepadHapticsManager;
using GamepadHapticsManagerPtr = mojo::InterfacePtr<GamepadHapticsManager>;
using RevocableGamepadHapticsManagerPtr = ::blink::RevocableInterfacePtr<GamepadHapticsManager>;
using GamepadHapticsManagerPtrInfo = mojo::InterfacePtrInfo<GamepadHapticsManager>;
using ThreadSafeGamepadHapticsManagerPtr =
    mojo::ThreadSafeInterfacePtr<GamepadHapticsManager>;
using GamepadHapticsManagerRequest = mojo::InterfaceRequest<GamepadHapticsManager>;
using GamepadHapticsManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<GamepadHapticsManager>;
using ThreadSafeGamepadHapticsManagerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<GamepadHapticsManager>;
using GamepadHapticsManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<GamepadHapticsManager>;
using GamepadHapticsManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<GamepadHapticsManager>;

class GamepadQuaternion;
using GamepadQuaternionPtr = mojo::InlinedStructPtr<GamepadQuaternion>;

class GamepadVector;
using GamepadVectorPtr = mojo::InlinedStructPtr<GamepadVector>;

class GamepadButton;
using GamepadButtonPtr = mojo::InlinedStructPtr<GamepadButton>;

class GamepadPose;
using GamepadPosePtr = mojo::StructPtr<GamepadPose>;

class GamepadHapticActuator;
using GamepadHapticActuatorPtr = mojo::InlinedStructPtr<GamepadHapticActuator>;

class Gamepad;
using GamepadPtr = mojo::StructPtr<Gamepad>;

class GamepadEffectParameters;
using GamepadEffectParametersPtr = mojo::InlinedStructPtr<GamepadEffectParameters>;


class GamepadObserverProxy;

template <typename ImplRefTraits>
class GamepadObserverStub;

class GamepadObserverRequestValidator;

class  GamepadObserver
    : public GamepadObserverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = GamepadObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = GamepadObserverStub<ImplRefTraits>;

  using RequestValidator_ = GamepadObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kGamepadConnectedMinVersion = 0,
    kGamepadDisconnectedMinVersion = 0,
  };
  virtual ~GamepadObserver() {}

  virtual void GamepadConnected(int32_t index, GamepadPtr gamepad) = 0;

  virtual void GamepadDisconnected(int32_t index, GamepadPtr gamepad) = 0;
};
class  GamepadObserverInterceptorForTesting : public GamepadObserver {
  virtual GamepadObserver* GetForwardingInterface() = 0;
  void GamepadConnected(int32_t index, GamepadPtr gamepad) override;
  void GamepadDisconnected(int32_t index, GamepadPtr gamepad) override;
};
class  GamepadObserverAsyncWaiter {
 public:
  explicit GamepadObserverAsyncWaiter(GamepadObserver* proxy);
  ~GamepadObserverAsyncWaiter();

 private:
  GamepadObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(GamepadObserverAsyncWaiter);
};

class GamepadMonitorProxy;

template <typename ImplRefTraits>
class GamepadMonitorStub;

class GamepadMonitorRequestValidator;
class GamepadMonitorResponseValidator;

class  GamepadMonitor
    : public GamepadMonitorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Proxy_ = GamepadMonitorProxy;

  template <typename ImplRefTraits>
  using Stub_ = GamepadMonitorStub<ImplRefTraits>;

  using RequestValidator_ = GamepadMonitorRequestValidator;
  using ResponseValidator_ = GamepadMonitorResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGamepadStartPollingMinVersion = 0,
    kGamepadStopPollingMinVersion = 0,
    kSetObserverMinVersion = 0,
  };
  virtual ~GamepadMonitor() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool GamepadStartPolling(mojo::ScopedSharedBufferHandle* out_memory_handle);

  using GamepadStartPollingCallback = base::OnceCallback<void(mojo::ScopedSharedBufferHandle)>;
  virtual void GamepadStartPolling(GamepadStartPollingCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool GamepadStopPolling();

  using GamepadStopPollingCallback = base::OnceCallback<void()>;
  virtual void GamepadStopPolling(GamepadStopPollingCallback callback) = 0;

  virtual void SetObserver(GamepadObserverPtr gamepad_observer) = 0;
};
class  GamepadMonitorInterceptorForTesting : public GamepadMonitor {
  virtual GamepadMonitor* GetForwardingInterface() = 0;
  void GamepadStartPolling(GamepadStartPollingCallback callback) override;
  void GamepadStopPolling(GamepadStopPollingCallback callback) override;
  void SetObserver(GamepadObserverPtr gamepad_observer) override;
};
class  GamepadMonitorAsyncWaiter {
 public:
  explicit GamepadMonitorAsyncWaiter(GamepadMonitor* proxy);
  ~GamepadMonitorAsyncWaiter();
  void GamepadStartPolling(
      mojo::ScopedSharedBufferHandle* out_memory_handle);
  void GamepadStopPolling(
      );

 private:
  GamepadMonitor* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(GamepadMonitorAsyncWaiter);
};

class GamepadHapticsManagerProxy;

template <typename ImplRefTraits>
class GamepadHapticsManagerStub;

class GamepadHapticsManagerRequestValidator;
class GamepadHapticsManagerResponseValidator;

class  GamepadHapticsManager
    : public GamepadHapticsManagerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = GamepadHapticsManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = GamepadHapticsManagerStub<ImplRefTraits>;

  using RequestValidator_ = GamepadHapticsManagerRequestValidator;
  using ResponseValidator_ = GamepadHapticsManagerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kPlayVibrationEffectOnceMinVersion = 0,
    kResetVibrationActuatorMinVersion = 0,
  };
  virtual ~GamepadHapticsManager() {}


  using PlayVibrationEffectOnceCallback = base::OnceCallback<void(GamepadHapticsResult)>;
  virtual void PlayVibrationEffectOnce(int32_t pad_index, GamepadHapticEffectType type, GamepadEffectParametersPtr params, PlayVibrationEffectOnceCallback callback) = 0;


  using ResetVibrationActuatorCallback = base::OnceCallback<void(GamepadHapticsResult)>;
  virtual void ResetVibrationActuator(int32_t pad_index, ResetVibrationActuatorCallback callback) = 0;
};
class  GamepadHapticsManagerInterceptorForTesting : public GamepadHapticsManager {
  virtual GamepadHapticsManager* GetForwardingInterface() = 0;
  void PlayVibrationEffectOnce(int32_t pad_index, GamepadHapticEffectType type, GamepadEffectParametersPtr params, PlayVibrationEffectOnceCallback callback) override;
  void ResetVibrationActuator(int32_t pad_index, ResetVibrationActuatorCallback callback) override;
};
class  GamepadHapticsManagerAsyncWaiter {
 public:
  explicit GamepadHapticsManagerAsyncWaiter(GamepadHapticsManager* proxy);
  ~GamepadHapticsManagerAsyncWaiter();
  void PlayVibrationEffectOnce(
      int32_t pad_index, GamepadHapticEffectType type, GamepadEffectParametersPtr params, GamepadHapticsResult* out_result);
  void ResetVibrationActuator(
      int32_t pad_index, GamepadHapticsResult* out_result);

 private:
  GamepadHapticsManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(GamepadHapticsManagerAsyncWaiter);
};

class  GamepadObserverProxy
    : public GamepadObserver {
 public:
  explicit GamepadObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void GamepadConnected(int32_t index, GamepadPtr gamepad) final;
  void GamepadDisconnected(int32_t index, GamepadPtr gamepad) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  GamepadMonitorProxy
    : public GamepadMonitor {
 public:
  explicit GamepadMonitorProxy(mojo::MessageReceiverWithResponder* receiver);
  bool GamepadStartPolling(mojo::ScopedSharedBufferHandle* out_memory_handle) final;
  void GamepadStartPolling(GamepadStartPollingCallback callback) final;
  bool GamepadStopPolling() final;
  void GamepadStopPolling(GamepadStopPollingCallback callback) final;
  void SetObserver(GamepadObserverPtr gamepad_observer) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  GamepadHapticsManagerProxy
    : public GamepadHapticsManager {
 public:
  explicit GamepadHapticsManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void PlayVibrationEffectOnce(int32_t pad_index, GamepadHapticEffectType type, GamepadEffectParametersPtr params, PlayVibrationEffectOnceCallback callback) final;
  void ResetVibrationActuator(int32_t pad_index, ResetVibrationActuatorCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  GamepadObserverStubDispatch {
 public:
  static bool Accept(GamepadObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      GamepadObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<GamepadObserver>>
class GamepadObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  GamepadObserverStub() {}
  ~GamepadObserverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GamepadObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GamepadObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  GamepadMonitorStubDispatch {
 public:
  static bool Accept(GamepadMonitor* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      GamepadMonitor* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<GamepadMonitor>>
class GamepadMonitorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  GamepadMonitorStub() {}
  ~GamepadMonitorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GamepadMonitorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GamepadMonitorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  GamepadHapticsManagerStubDispatch {
 public:
  static bool Accept(GamepadHapticsManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      GamepadHapticsManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<GamepadHapticsManager>>
class GamepadHapticsManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  GamepadHapticsManagerStub() {}
  ~GamepadHapticsManagerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GamepadHapticsManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GamepadHapticsManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  GamepadObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  GamepadMonitorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  GamepadHapticsManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  GamepadMonitorResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  GamepadHapticsManagerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};


class  GamepadQuaternion {
 public:
  using DataView = GamepadQuaternionDataView;
  using Data_ = internal::GamepadQuaternion_Data;

  template <typename... Args>
  static GamepadQuaternionPtr New(Args&&... args) {
    return GamepadQuaternionPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static GamepadQuaternionPtr From(const U& u) {
    return mojo::TypeConverter<GamepadQuaternionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, GamepadQuaternion>::Convert(*this);
  }


  GamepadQuaternion();

  GamepadQuaternion(
      float x,
      float y,
      float z,
      float w);

  ~GamepadQuaternion();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = GamepadQuaternionPtr>
  GamepadQuaternionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, GamepadQuaternion>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        GamepadQuaternion::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        GamepadQuaternion::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::GamepadQuaternion_UnserializedMessageContext<
            UserType, GamepadQuaternion::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<GamepadQuaternion::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return GamepadQuaternion::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::GamepadQuaternion_UnserializedMessageContext<
            UserType, GamepadQuaternion::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<GamepadQuaternion::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  float x;
  float y;
  float z;
  float w;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  GamepadVector {
 public:
  using DataView = GamepadVectorDataView;
  using Data_ = internal::GamepadVector_Data;

  template <typename... Args>
  static GamepadVectorPtr New(Args&&... args) {
    return GamepadVectorPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static GamepadVectorPtr From(const U& u) {
    return mojo::TypeConverter<GamepadVectorPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, GamepadVector>::Convert(*this);
  }


  GamepadVector();

  GamepadVector(
      float x,
      float y,
      float z);

  ~GamepadVector();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = GamepadVectorPtr>
  GamepadVectorPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, GamepadVector>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        GamepadVector::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        GamepadVector::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::GamepadVector_UnserializedMessageContext<
            UserType, GamepadVector::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<GamepadVector::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return GamepadVector::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::GamepadVector_UnserializedMessageContext<
            UserType, GamepadVector::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<GamepadVector::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  float x;
  float y;
  float z;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  GamepadButton {
 public:
  using DataView = GamepadButtonDataView;
  using Data_ = internal::GamepadButton_Data;

  template <typename... Args>
  static GamepadButtonPtr New(Args&&... args) {
    return GamepadButtonPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static GamepadButtonPtr From(const U& u) {
    return mojo::TypeConverter<GamepadButtonPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, GamepadButton>::Convert(*this);
  }


  GamepadButton();

  GamepadButton(
      bool pressed,
      bool touched,
      double value);

  ~GamepadButton();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = GamepadButtonPtr>
  GamepadButtonPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, GamepadButton>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        GamepadButton::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        GamepadButton::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::GamepadButton_UnserializedMessageContext<
            UserType, GamepadButton::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<GamepadButton::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return GamepadButton::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::GamepadButton_UnserializedMessageContext<
            UserType, GamepadButton::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<GamepadButton::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  bool pressed;
  bool touched;
  double value;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};



class  GamepadHapticActuator {
 public:
  using DataView = GamepadHapticActuatorDataView;
  using Data_ = internal::GamepadHapticActuator_Data;

  template <typename... Args>
  static GamepadHapticActuatorPtr New(Args&&... args) {
    return GamepadHapticActuatorPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static GamepadHapticActuatorPtr From(const U& u) {
    return mojo::TypeConverter<GamepadHapticActuatorPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, GamepadHapticActuator>::Convert(*this);
  }


  GamepadHapticActuator();

  explicit GamepadHapticActuator(
      GamepadHapticActuatorType type);

  ~GamepadHapticActuator();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = GamepadHapticActuatorPtr>
  GamepadHapticActuatorPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, GamepadHapticActuator>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        GamepadHapticActuator::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        GamepadHapticActuator::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::GamepadHapticActuator_UnserializedMessageContext<
            UserType, GamepadHapticActuator::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<GamepadHapticActuator::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return GamepadHapticActuator::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::GamepadHapticActuator_UnserializedMessageContext<
            UserType, GamepadHapticActuator::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<GamepadHapticActuator::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  GamepadHapticActuatorType type;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};



class  GamepadEffectParameters {
 public:
  using DataView = GamepadEffectParametersDataView;
  using Data_ = internal::GamepadEffectParameters_Data;

  template <typename... Args>
  static GamepadEffectParametersPtr New(Args&&... args) {
    return GamepadEffectParametersPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static GamepadEffectParametersPtr From(const U& u) {
    return mojo::TypeConverter<GamepadEffectParametersPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, GamepadEffectParameters>::Convert(*this);
  }


  GamepadEffectParameters();

  GamepadEffectParameters(
      double duration,
      double start_delay,
      double strong_magnitude,
      double weak_magnitude);

  ~GamepadEffectParameters();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = GamepadEffectParametersPtr>
  GamepadEffectParametersPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, GamepadEffectParameters>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        GamepadEffectParameters::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        GamepadEffectParameters::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::GamepadEffectParameters_UnserializedMessageContext<
            UserType, GamepadEffectParameters::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<GamepadEffectParameters::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return GamepadEffectParameters::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::GamepadEffectParameters_UnserializedMessageContext<
            UserType, GamepadEffectParameters::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<GamepadEffectParameters::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  double duration;
  double start_delay;
  double strong_magnitude;
  double weak_magnitude;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};







class  GamepadPose {
 public:
  using DataView = GamepadPoseDataView;
  using Data_ = internal::GamepadPose_Data;

  template <typename... Args>
  static GamepadPosePtr New(Args&&... args) {
    return GamepadPosePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static GamepadPosePtr From(const U& u) {
    return mojo::TypeConverter<GamepadPosePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, GamepadPose>::Convert(*this);
  }


  GamepadPose();

  GamepadPose(
      GamepadQuaternionPtr orientation,
      GamepadVectorPtr position,
      GamepadVectorPtr angular_velocity,
      GamepadVectorPtr linear_velocity,
      GamepadVectorPtr angular_acceleration,
      GamepadVectorPtr linear_acceleration);

  ~GamepadPose();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = GamepadPosePtr>
  GamepadPosePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, GamepadPose>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        GamepadPose::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        GamepadPose::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::GamepadPose_UnserializedMessageContext<
            UserType, GamepadPose::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<GamepadPose::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return GamepadPose::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::GamepadPose_UnserializedMessageContext<
            UserType, GamepadPose::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<GamepadPose::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  GamepadQuaternionPtr orientation;
  GamepadVectorPtr position;
  GamepadVectorPtr angular_velocity;
  GamepadVectorPtr linear_velocity;
  GamepadVectorPtr angular_acceleration;
  GamepadVectorPtr linear_acceleration;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(GamepadPose);
};



class  Gamepad {
 public:
  using DataView = GamepadDataView;
  using Data_ = internal::Gamepad_Data;

  template <typename... Args>
  static GamepadPtr New(Args&&... args) {
    return GamepadPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static GamepadPtr From(const U& u) {
    return mojo::TypeConverter<GamepadPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Gamepad>::Convert(*this);
  }


  Gamepad();

  Gamepad(
      bool connected,
      const WTF::Vector<uint16_t>& id,
      uint64_t timestamp,
      const WTF::Vector<double>& axes,
      WTF::Vector<GamepadButtonPtr> buttons,
      GamepadHapticActuatorPtr vibration_actuator,
      const WTF::Vector<uint16_t>& mapping,
      GamepadPosePtr pose,
      GamepadHand hand,
      uint32_t display_id);

  ~Gamepad();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = GamepadPtr>
  GamepadPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Gamepad>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Gamepad::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Gamepad::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Gamepad_UnserializedMessageContext<
            UserType, Gamepad::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Gamepad::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return Gamepad::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Gamepad_UnserializedMessageContext<
            UserType, Gamepad::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Gamepad::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  bool connected;
  WTF::Vector<uint16_t> id;
  uint64_t timestamp;
  WTF::Vector<double> axes;
  WTF::Vector<GamepadButtonPtr> buttons;
  GamepadHapticActuatorPtr vibration_actuator;
  WTF::Vector<uint16_t> mapping;
  GamepadPosePtr pose;
  GamepadHand hand;
  uint32_t display_id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(Gamepad);
};


template <typename StructPtrType>
GamepadQuaternionPtr GamepadQuaternion::Clone() const {
  return New(
      mojo::Clone(x),
      mojo::Clone(y),
      mojo::Clone(z),
      mojo::Clone(w)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, GamepadQuaternion>::value>::type*>
bool GamepadQuaternion::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->x, other_struct.x))
    return false;
  if (!mojo::Equals(this->y, other_struct.y))
    return false;
  if (!mojo::Equals(this->z, other_struct.z))
    return false;
  if (!mojo::Equals(this->w, other_struct.w))
    return false;
  return true;
}
template <typename StructPtrType>
GamepadVectorPtr GamepadVector::Clone() const {
  return New(
      mojo::Clone(x),
      mojo::Clone(y),
      mojo::Clone(z)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, GamepadVector>::value>::type*>
bool GamepadVector::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->x, other_struct.x))
    return false;
  if (!mojo::Equals(this->y, other_struct.y))
    return false;
  if (!mojo::Equals(this->z, other_struct.z))
    return false;
  return true;
}
template <typename StructPtrType>
GamepadButtonPtr GamepadButton::Clone() const {
  return New(
      mojo::Clone(pressed),
      mojo::Clone(touched),
      mojo::Clone(value)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, GamepadButton>::value>::type*>
bool GamepadButton::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->pressed, other_struct.pressed))
    return false;
  if (!mojo::Equals(this->touched, other_struct.touched))
    return false;
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  return true;
}
template <typename StructPtrType>
GamepadPosePtr GamepadPose::Clone() const {
  return New(
      mojo::Clone(orientation),
      mojo::Clone(position),
      mojo::Clone(angular_velocity),
      mojo::Clone(linear_velocity),
      mojo::Clone(angular_acceleration),
      mojo::Clone(linear_acceleration)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, GamepadPose>::value>::type*>
bool GamepadPose::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->orientation, other_struct.orientation))
    return false;
  if (!mojo::Equals(this->position, other_struct.position))
    return false;
  if (!mojo::Equals(this->angular_velocity, other_struct.angular_velocity))
    return false;
  if (!mojo::Equals(this->linear_velocity, other_struct.linear_velocity))
    return false;
  if (!mojo::Equals(this->angular_acceleration, other_struct.angular_acceleration))
    return false;
  if (!mojo::Equals(this->linear_acceleration, other_struct.linear_acceleration))
    return false;
  return true;
}
template <typename StructPtrType>
GamepadHapticActuatorPtr GamepadHapticActuator::Clone() const {
  return New(
      mojo::Clone(type)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, GamepadHapticActuator>::value>::type*>
bool GamepadHapticActuator::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  return true;
}
template <typename StructPtrType>
GamepadPtr Gamepad::Clone() const {
  return New(
      mojo::Clone(connected),
      mojo::Clone(id),
      mojo::Clone(timestamp),
      mojo::Clone(axes),
      mojo::Clone(buttons),
      mojo::Clone(vibration_actuator),
      mojo::Clone(mapping),
      mojo::Clone(pose),
      mojo::Clone(hand),
      mojo::Clone(display_id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Gamepad>::value>::type*>
bool Gamepad::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->connected, other_struct.connected))
    return false;
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->timestamp, other_struct.timestamp))
    return false;
  if (!mojo::Equals(this->axes, other_struct.axes))
    return false;
  if (!mojo::Equals(this->buttons, other_struct.buttons))
    return false;
  if (!mojo::Equals(this->vibration_actuator, other_struct.vibration_actuator))
    return false;
  if (!mojo::Equals(this->mapping, other_struct.mapping))
    return false;
  if (!mojo::Equals(this->pose, other_struct.pose))
    return false;
  if (!mojo::Equals(this->hand, other_struct.hand))
    return false;
  if (!mojo::Equals(this->display_id, other_struct.display_id))
    return false;
  return true;
}
template <typename StructPtrType>
GamepadEffectParametersPtr GamepadEffectParameters::Clone() const {
  return New(
      mojo::Clone(duration),
      mojo::Clone(start_delay),
      mojo::Clone(strong_magnitude),
      mojo::Clone(weak_magnitude)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, GamepadEffectParameters>::value>::type*>
bool GamepadEffectParameters::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->duration, other_struct.duration))
    return false;
  if (!mojo::Equals(this->start_delay, other_struct.start_delay))
    return false;
  if (!mojo::Equals(this->strong_magnitude, other_struct.strong_magnitude))
    return false;
  if (!mojo::Equals(this->weak_magnitude, other_struct.weak_magnitude))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace device

namespace mojo {


template <>
struct  StructTraits<::device::mojom::blink::GamepadQuaternion::DataView,
                                         ::device::mojom::blink::GamepadQuaternionPtr> {
  static bool IsNull(const ::device::mojom::blink::GamepadQuaternionPtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::GamepadQuaternionPtr* output) { output->reset(); }

  static decltype(::device::mojom::blink::GamepadQuaternion::x) x(
      const ::device::mojom::blink::GamepadQuaternionPtr& input) {
    return input->x;
  }

  static decltype(::device::mojom::blink::GamepadQuaternion::y) y(
      const ::device::mojom::blink::GamepadQuaternionPtr& input) {
    return input->y;
  }

  static decltype(::device::mojom::blink::GamepadQuaternion::z) z(
      const ::device::mojom::blink::GamepadQuaternionPtr& input) {
    return input->z;
  }

  static decltype(::device::mojom::blink::GamepadQuaternion::w) w(
      const ::device::mojom::blink::GamepadQuaternionPtr& input) {
    return input->w;
  }

  static bool Read(::device::mojom::blink::GamepadQuaternion::DataView input, ::device::mojom::blink::GamepadQuaternionPtr* output);
};


template <>
struct  StructTraits<::device::mojom::blink::GamepadVector::DataView,
                                         ::device::mojom::blink::GamepadVectorPtr> {
  static bool IsNull(const ::device::mojom::blink::GamepadVectorPtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::GamepadVectorPtr* output) { output->reset(); }

  static decltype(::device::mojom::blink::GamepadVector::x) x(
      const ::device::mojom::blink::GamepadVectorPtr& input) {
    return input->x;
  }

  static decltype(::device::mojom::blink::GamepadVector::y) y(
      const ::device::mojom::blink::GamepadVectorPtr& input) {
    return input->y;
  }

  static decltype(::device::mojom::blink::GamepadVector::z) z(
      const ::device::mojom::blink::GamepadVectorPtr& input) {
    return input->z;
  }

  static bool Read(::device::mojom::blink::GamepadVector::DataView input, ::device::mojom::blink::GamepadVectorPtr* output);
};


template <>
struct  StructTraits<::device::mojom::blink::GamepadButton::DataView,
                                         ::device::mojom::blink::GamepadButtonPtr> {
  static bool IsNull(const ::device::mojom::blink::GamepadButtonPtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::GamepadButtonPtr* output) { output->reset(); }

  static decltype(::device::mojom::blink::GamepadButton::pressed) pressed(
      const ::device::mojom::blink::GamepadButtonPtr& input) {
    return input->pressed;
  }

  static decltype(::device::mojom::blink::GamepadButton::touched) touched(
      const ::device::mojom::blink::GamepadButtonPtr& input) {
    return input->touched;
  }

  static decltype(::device::mojom::blink::GamepadButton::value) value(
      const ::device::mojom::blink::GamepadButtonPtr& input) {
    return input->value;
  }

  static bool Read(::device::mojom::blink::GamepadButton::DataView input, ::device::mojom::blink::GamepadButtonPtr* output);
};


template <>
struct  StructTraits<::device::mojom::blink::GamepadPose::DataView,
                                         ::device::mojom::blink::GamepadPosePtr> {
  static bool IsNull(const ::device::mojom::blink::GamepadPosePtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::GamepadPosePtr* output) { output->reset(); }

  static const decltype(::device::mojom::blink::GamepadPose::orientation)& orientation(
      const ::device::mojom::blink::GamepadPosePtr& input) {
    return input->orientation;
  }

  static const decltype(::device::mojom::blink::GamepadPose::position)& position(
      const ::device::mojom::blink::GamepadPosePtr& input) {
    return input->position;
  }

  static const decltype(::device::mojom::blink::GamepadPose::angular_velocity)& angular_velocity(
      const ::device::mojom::blink::GamepadPosePtr& input) {
    return input->angular_velocity;
  }

  static const decltype(::device::mojom::blink::GamepadPose::linear_velocity)& linear_velocity(
      const ::device::mojom::blink::GamepadPosePtr& input) {
    return input->linear_velocity;
  }

  static const decltype(::device::mojom::blink::GamepadPose::angular_acceleration)& angular_acceleration(
      const ::device::mojom::blink::GamepadPosePtr& input) {
    return input->angular_acceleration;
  }

  static const decltype(::device::mojom::blink::GamepadPose::linear_acceleration)& linear_acceleration(
      const ::device::mojom::blink::GamepadPosePtr& input) {
    return input->linear_acceleration;
  }

  static bool Read(::device::mojom::blink::GamepadPose::DataView input, ::device::mojom::blink::GamepadPosePtr* output);
};


template <>
struct  StructTraits<::device::mojom::blink::GamepadHapticActuator::DataView,
                                         ::device::mojom::blink::GamepadHapticActuatorPtr> {
  static bool IsNull(const ::device::mojom::blink::GamepadHapticActuatorPtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::GamepadHapticActuatorPtr* output) { output->reset(); }

  static decltype(::device::mojom::blink::GamepadHapticActuator::type) type(
      const ::device::mojom::blink::GamepadHapticActuatorPtr& input) {
    return input->type;
  }

  static bool Read(::device::mojom::blink::GamepadHapticActuator::DataView input, ::device::mojom::blink::GamepadHapticActuatorPtr* output);
};


template <>
struct  StructTraits<::device::mojom::blink::Gamepad::DataView,
                                         ::device::mojom::blink::GamepadPtr> {
  static bool IsNull(const ::device::mojom::blink::GamepadPtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::GamepadPtr* output) { output->reset(); }

  static decltype(::device::mojom::blink::Gamepad::connected) connected(
      const ::device::mojom::blink::GamepadPtr& input) {
    return input->connected;
  }

  static const decltype(::device::mojom::blink::Gamepad::id)& id(
      const ::device::mojom::blink::GamepadPtr& input) {
    return input->id;
  }

  static decltype(::device::mojom::blink::Gamepad::timestamp) timestamp(
      const ::device::mojom::blink::GamepadPtr& input) {
    return input->timestamp;
  }

  static const decltype(::device::mojom::blink::Gamepad::axes)& axes(
      const ::device::mojom::blink::GamepadPtr& input) {
    return input->axes;
  }

  static const decltype(::device::mojom::blink::Gamepad::buttons)& buttons(
      const ::device::mojom::blink::GamepadPtr& input) {
    return input->buttons;
  }

  static const decltype(::device::mojom::blink::Gamepad::vibration_actuator)& vibration_actuator(
      const ::device::mojom::blink::GamepadPtr& input) {
    return input->vibration_actuator;
  }

  static const decltype(::device::mojom::blink::Gamepad::mapping)& mapping(
      const ::device::mojom::blink::GamepadPtr& input) {
    return input->mapping;
  }

  static const decltype(::device::mojom::blink::Gamepad::pose)& pose(
      const ::device::mojom::blink::GamepadPtr& input) {
    return input->pose;
  }

  static decltype(::device::mojom::blink::Gamepad::hand) hand(
      const ::device::mojom::blink::GamepadPtr& input) {
    return input->hand;
  }

  static decltype(::device::mojom::blink::Gamepad::display_id) display_id(
      const ::device::mojom::blink::GamepadPtr& input) {
    return input->display_id;
  }

  static bool Read(::device::mojom::blink::Gamepad::DataView input, ::device::mojom::blink::GamepadPtr* output);
};


template <>
struct  StructTraits<::device::mojom::blink::GamepadEffectParameters::DataView,
                                         ::device::mojom::blink::GamepadEffectParametersPtr> {
  static bool IsNull(const ::device::mojom::blink::GamepadEffectParametersPtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::GamepadEffectParametersPtr* output) { output->reset(); }

  static decltype(::device::mojom::blink::GamepadEffectParameters::duration) duration(
      const ::device::mojom::blink::GamepadEffectParametersPtr& input) {
    return input->duration;
  }

  static decltype(::device::mojom::blink::GamepadEffectParameters::start_delay) start_delay(
      const ::device::mojom::blink::GamepadEffectParametersPtr& input) {
    return input->start_delay;
  }

  static decltype(::device::mojom::blink::GamepadEffectParameters::strong_magnitude) strong_magnitude(
      const ::device::mojom::blink::GamepadEffectParametersPtr& input) {
    return input->strong_magnitude;
  }

  static decltype(::device::mojom::blink::GamepadEffectParameters::weak_magnitude) weak_magnitude(
      const ::device::mojom::blink::GamepadEffectParametersPtr& input) {
    return input->weak_magnitude;
  }

  static bool Read(::device::mojom::blink::GamepadEffectParameters::DataView input, ::device::mojom::blink::GamepadEffectParametersPtr* output);
};

}  // namespace mojo

#endif  // DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_BLINK_H_