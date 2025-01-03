// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PRESENTATION_PRESENTATION_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PRESENTATION_PRESENTATION_MOJOM_BLINK_H_

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
#include "third_party/blink/public/platform/modules/presentation/presentation.mojom-shared.h"
#include "url/mojom/url.mojom-blink.h"

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
#include "third_party/blink/public/platform/web_common.h"


namespace WTF {
struct blink_mojom_internal_ScreenAvailability_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::ScreenAvailability& value) {
    using utype = std::underlying_type<::blink::mojom::ScreenAvailability>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::ScreenAvailability& left, const ::blink::mojom::ScreenAvailability& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::blink::mojom::ScreenAvailability> {
  using Hash = blink_mojom_internal_ScreenAvailability_DataHashFn;
};

template <>
struct HashTraits<::blink::mojom::ScreenAvailability>
    : public GenericHashTraits<::blink::mojom::ScreenAvailability> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::ScreenAvailability& value) {
    return value == static_cast<::blink::mojom::ScreenAvailability>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::ScreenAvailability& slot, bool) {
    slot = static_cast<::blink::mojom::ScreenAvailability>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::ScreenAvailability& value) {
    return value == static_cast<::blink::mojom::ScreenAvailability>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_PresentationConnectionState_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::PresentationConnectionState& value) {
    using utype = std::underlying_type<::blink::mojom::PresentationConnectionState>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::PresentationConnectionState& left, const ::blink::mojom::PresentationConnectionState& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::blink::mojom::PresentationConnectionState> {
  using Hash = blink_mojom_internal_PresentationConnectionState_DataHashFn;
};

template <>
struct HashTraits<::blink::mojom::PresentationConnectionState>
    : public GenericHashTraits<::blink::mojom::PresentationConnectionState> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::PresentationConnectionState& value) {
    return value == static_cast<::blink::mojom::PresentationConnectionState>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::PresentationConnectionState& slot, bool) {
    slot = static_cast<::blink::mojom::PresentationConnectionState>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::PresentationConnectionState& value) {
    return value == static_cast<::blink::mojom::PresentationConnectionState>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_PresentationConnectionCloseReason_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::PresentationConnectionCloseReason& value) {
    using utype = std::underlying_type<::blink::mojom::PresentationConnectionCloseReason>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::PresentationConnectionCloseReason& left, const ::blink::mojom::PresentationConnectionCloseReason& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::blink::mojom::PresentationConnectionCloseReason> {
  using Hash = blink_mojom_internal_PresentationConnectionCloseReason_DataHashFn;
};

template <>
struct HashTraits<::blink::mojom::PresentationConnectionCloseReason>
    : public GenericHashTraits<::blink::mojom::PresentationConnectionCloseReason> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::PresentationConnectionCloseReason& value) {
    return value == static_cast<::blink::mojom::PresentationConnectionCloseReason>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::PresentationConnectionCloseReason& slot, bool) {
    slot = static_cast<::blink::mojom::PresentationConnectionCloseReason>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::PresentationConnectionCloseReason& value) {
    return value == static_cast<::blink::mojom::PresentationConnectionCloseReason>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_PresentationErrorType_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::PresentationErrorType& value) {
    using utype = std::underlying_type<::blink::mojom::PresentationErrorType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::PresentationErrorType& left, const ::blink::mojom::PresentationErrorType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::blink::mojom::PresentationErrorType> {
  using Hash = blink_mojom_internal_PresentationErrorType_DataHashFn;
};

template <>
struct HashTraits<::blink::mojom::PresentationErrorType>
    : public GenericHashTraits<::blink::mojom::PresentationErrorType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::PresentationErrorType& value) {
    return value == static_cast<::blink::mojom::PresentationErrorType>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::PresentationErrorType& slot, bool) {
    slot = static_cast<::blink::mojom::PresentationErrorType>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::PresentationErrorType& value) {
    return value == static_cast<::blink::mojom::PresentationErrorType>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using ScreenAvailability = ScreenAvailability;  // Alias for definition in the parent namespace.
using PresentationConnectionState = PresentationConnectionState;  // Alias for definition in the parent namespace.
using PresentationConnectionCloseReason = PresentationConnectionCloseReason;  // Alias for definition in the parent namespace.
using PresentationErrorType = PresentationErrorType;  // Alias for definition in the parent namespace.
class PresentationConnection;
using PresentationConnectionPtr = mojo::InterfacePtr<PresentationConnection>;
using RevocablePresentationConnectionPtr = ::blink::RevocableInterfacePtr<PresentationConnection>;
using PresentationConnectionPtrInfo = mojo::InterfacePtrInfo<PresentationConnection>;
using ThreadSafePresentationConnectionPtr =
    mojo::ThreadSafeInterfacePtr<PresentationConnection>;
using PresentationConnectionRequest = mojo::InterfaceRequest<PresentationConnection>;
using PresentationConnectionAssociatedPtr =
    mojo::AssociatedInterfacePtr<PresentationConnection>;
using ThreadSafePresentationConnectionAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PresentationConnection>;
using PresentationConnectionAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PresentationConnection>;
using PresentationConnectionAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PresentationConnection>;

class PresentationService;
using PresentationServicePtr = mojo::InterfacePtr<PresentationService>;
using RevocablePresentationServicePtr = ::blink::RevocableInterfacePtr<PresentationService>;
using PresentationServicePtrInfo = mojo::InterfacePtrInfo<PresentationService>;
using ThreadSafePresentationServicePtr =
    mojo::ThreadSafeInterfacePtr<PresentationService>;
using PresentationServiceRequest = mojo::InterfaceRequest<PresentationService>;
using PresentationServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<PresentationService>;
using ThreadSafePresentationServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PresentationService>;
using PresentationServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PresentationService>;
using PresentationServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PresentationService>;

class PresentationController;
using PresentationControllerPtr = mojo::InterfacePtr<PresentationController>;
using RevocablePresentationControllerPtr = ::blink::RevocableInterfacePtr<PresentationController>;
using PresentationControllerPtrInfo = mojo::InterfacePtrInfo<PresentationController>;
using ThreadSafePresentationControllerPtr =
    mojo::ThreadSafeInterfacePtr<PresentationController>;
using PresentationControllerRequest = mojo::InterfaceRequest<PresentationController>;
using PresentationControllerAssociatedPtr =
    mojo::AssociatedInterfacePtr<PresentationController>;
using ThreadSafePresentationControllerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PresentationController>;
using PresentationControllerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PresentationController>;
using PresentationControllerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PresentationController>;

class PresentationReceiver;
using PresentationReceiverPtr = mojo::InterfacePtr<PresentationReceiver>;
using RevocablePresentationReceiverPtr = ::blink::RevocableInterfacePtr<PresentationReceiver>;
using PresentationReceiverPtrInfo = mojo::InterfacePtrInfo<PresentationReceiver>;
using ThreadSafePresentationReceiverPtr =
    mojo::ThreadSafeInterfacePtr<PresentationReceiver>;
using PresentationReceiverRequest = mojo::InterfaceRequest<PresentationReceiver>;
using PresentationReceiverAssociatedPtr =
    mojo::AssociatedInterfacePtr<PresentationReceiver>;
using ThreadSafePresentationReceiverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PresentationReceiver>;
using PresentationReceiverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PresentationReceiver>;
using PresentationReceiverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PresentationReceiver>;

class PresentationInfo;
using PresentationInfoPtr = mojo::StructPtr<PresentationInfo>;

class PresentationError;
using PresentationErrorPtr = mojo::InlinedStructPtr<PresentationError>;

class PresentationConnectionMessage;

typedef mojo::StructPtr<PresentationConnectionMessage> PresentationConnectionMessagePtr;


class PresentationConnectionProxy;

template <typename ImplRefTraits>
class PresentationConnectionStub;

class PresentationConnectionRequestValidator;
class PresentationConnectionResponseValidator;

class BLINK_PLATFORM_EXPORT PresentationConnection
    : public PresentationConnectionInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = PresentationConnectionProxy;

  template <typename ImplRefTraits>
  using Stub_ = PresentationConnectionStub<ImplRefTraits>;

  using RequestValidator_ = PresentationConnectionRequestValidator;
  using ResponseValidator_ = PresentationConnectionResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOnMessageMinVersion = 0,
    kDidChangeStateMinVersion = 0,
    kRequestCloseMinVersion = 0,
  };
  virtual ~PresentationConnection() {}


  using OnMessageCallback = base::OnceCallback<void(bool)>;
  virtual void OnMessage(PresentationConnectionMessagePtr message, OnMessageCallback callback) = 0;

  virtual void DidChangeState(PresentationConnectionState state) = 0;

  virtual void RequestClose() = 0;
};
class BLINK_PLATFORM_EXPORT PresentationConnectionInterceptorForTesting : public PresentationConnection {
  virtual PresentationConnection* GetForwardingInterface() = 0;
  void OnMessage(PresentationConnectionMessagePtr message, OnMessageCallback callback) override;
  void DidChangeState(PresentationConnectionState state) override;
  void RequestClose() override;
};
class BLINK_PLATFORM_EXPORT PresentationConnectionAsyncWaiter {
 public:
  explicit PresentationConnectionAsyncWaiter(PresentationConnection* proxy);
  ~PresentationConnectionAsyncWaiter();
  void OnMessage(
      PresentationConnectionMessagePtr message, bool* out_success);

 private:
  PresentationConnection* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PresentationConnectionAsyncWaiter);
};

class PresentationServiceProxy;

template <typename ImplRefTraits>
class PresentationServiceStub;

class PresentationServiceRequestValidator;
class PresentationServiceResponseValidator;

class BLINK_PLATFORM_EXPORT PresentationService
    : public PresentationServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = PresentationServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = PresentationServiceStub<ImplRefTraits>;

  using RequestValidator_ = PresentationServiceRequestValidator;
  using ResponseValidator_ = PresentationServiceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kSetControllerMinVersion = 0,
    kSetReceiverMinVersion = 0,
    kSetDefaultPresentationUrlsMinVersion = 0,
    kListenForScreenAvailabilityMinVersion = 0,
    kStopListeningForScreenAvailabilityMinVersion = 0,
    kStartPresentationMinVersion = 0,
    kReconnectPresentationMinVersion = 0,
    kSetPresentationConnectionMinVersion = 0,
    kCloseConnectionMinVersion = 0,
    kTerminateMinVersion = 0,
  };
  virtual ~PresentationService() {}

  virtual void SetController(PresentationControllerPtr controller) = 0;

  virtual void SetReceiver(PresentationReceiverPtr receiver) = 0;

  virtual void SetDefaultPresentationUrls(const WTF::Vector<::blink::KURL>& presentation_urls) = 0;

  virtual void ListenForScreenAvailability(const ::blink::KURL& availability_url) = 0;

  virtual void StopListeningForScreenAvailability(const ::blink::KURL& availability_url) = 0;


  using StartPresentationCallback = base::OnceCallback<void(PresentationInfoPtr, PresentationErrorPtr)>;
  virtual void StartPresentation(const WTF::Vector<::blink::KURL>& presentation_urls, StartPresentationCallback callback) = 0;


  using ReconnectPresentationCallback = base::OnceCallback<void(PresentationInfoPtr, PresentationErrorPtr)>;
  virtual void ReconnectPresentation(const WTF::Vector<::blink::KURL>& presentation_urls, const WTF::String& presentation_id, ReconnectPresentationCallback callback) = 0;

  virtual void SetPresentationConnection(PresentationInfoPtr presentation_info, PresentationConnectionPtr controller_connection_ptr, PresentationConnectionRequest receiver_connection_request) = 0;

  virtual void CloseConnection(const ::blink::KURL& presentation_url, const WTF::String& presentation_id) = 0;

  virtual void Terminate(const ::blink::KURL& presentation_url, const WTF::String& presentation_id) = 0;
};
class BLINK_PLATFORM_EXPORT PresentationServiceInterceptorForTesting : public PresentationService {
  virtual PresentationService* GetForwardingInterface() = 0;
  void SetController(PresentationControllerPtr controller) override;
  void SetReceiver(PresentationReceiverPtr receiver) override;
  void SetDefaultPresentationUrls(const WTF::Vector<::blink::KURL>& presentation_urls) override;
  void ListenForScreenAvailability(const ::blink::KURL& availability_url) override;
  void StopListeningForScreenAvailability(const ::blink::KURL& availability_url) override;
  void StartPresentation(const WTF::Vector<::blink::KURL>& presentation_urls, StartPresentationCallback callback) override;
  void ReconnectPresentation(const WTF::Vector<::blink::KURL>& presentation_urls, const WTF::String& presentation_id, ReconnectPresentationCallback callback) override;
  void SetPresentationConnection(PresentationInfoPtr presentation_info, PresentationConnectionPtr controller_connection_ptr, PresentationConnectionRequest receiver_connection_request) override;
  void CloseConnection(const ::blink::KURL& presentation_url, const WTF::String& presentation_id) override;
  void Terminate(const ::blink::KURL& presentation_url, const WTF::String& presentation_id) override;
};
class BLINK_PLATFORM_EXPORT PresentationServiceAsyncWaiter {
 public:
  explicit PresentationServiceAsyncWaiter(PresentationService* proxy);
  ~PresentationServiceAsyncWaiter();
  void StartPresentation(
      const WTF::Vector<::blink::KURL>& presentation_urls, PresentationInfoPtr* out_presentation_info, PresentationErrorPtr* out_error);
  void ReconnectPresentation(
      const WTF::Vector<::blink::KURL>& presentation_urls, const WTF::String& presentation_id, PresentationInfoPtr* out_presentation_info, PresentationErrorPtr* out_error);

 private:
  PresentationService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PresentationServiceAsyncWaiter);
};

class PresentationControllerProxy;

template <typename ImplRefTraits>
class PresentationControllerStub;

class PresentationControllerRequestValidator;

class BLINK_PLATFORM_EXPORT PresentationController
    : public PresentationControllerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = PresentationControllerProxy;

  template <typename ImplRefTraits>
  using Stub_ = PresentationControllerStub<ImplRefTraits>;

  using RequestValidator_ = PresentationControllerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnScreenAvailabilityUpdatedMinVersion = 0,
    kOnDefaultPresentationStartedMinVersion = 0,
    kOnConnectionStateChangedMinVersion = 0,
    kOnConnectionClosedMinVersion = 0,
  };
  virtual ~PresentationController() {}

  virtual void OnScreenAvailabilityUpdated(const ::blink::KURL& url, ScreenAvailability availability) = 0;

  virtual void OnDefaultPresentationStarted(PresentationInfoPtr presentation_info) = 0;

  virtual void OnConnectionStateChanged(PresentationInfoPtr presentation_info, PresentationConnectionState newState) = 0;

  virtual void OnConnectionClosed(PresentationInfoPtr presentation_info, PresentationConnectionCloseReason reason, const WTF::String& message) = 0;
};
class BLINK_PLATFORM_EXPORT PresentationControllerInterceptorForTesting : public PresentationController {
  virtual PresentationController* GetForwardingInterface() = 0;
  void OnScreenAvailabilityUpdated(const ::blink::KURL& url, ScreenAvailability availability) override;
  void OnDefaultPresentationStarted(PresentationInfoPtr presentation_info) override;
  void OnConnectionStateChanged(PresentationInfoPtr presentation_info, PresentationConnectionState newState) override;
  void OnConnectionClosed(PresentationInfoPtr presentation_info, PresentationConnectionCloseReason reason, const WTF::String& message) override;
};
class BLINK_PLATFORM_EXPORT PresentationControllerAsyncWaiter {
 public:
  explicit PresentationControllerAsyncWaiter(PresentationController* proxy);
  ~PresentationControllerAsyncWaiter();

 private:
  PresentationController* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PresentationControllerAsyncWaiter);
};

class PresentationReceiverProxy;

template <typename ImplRefTraits>
class PresentationReceiverStub;

class PresentationReceiverRequestValidator;

class BLINK_PLATFORM_EXPORT PresentationReceiver
    : public PresentationReceiverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = PresentationReceiverProxy;

  template <typename ImplRefTraits>
  using Stub_ = PresentationReceiverStub<ImplRefTraits>;

  using RequestValidator_ = PresentationReceiverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnReceiverConnectionAvailableMinVersion = 0,
  };
  virtual ~PresentationReceiver() {}

  virtual void OnReceiverConnectionAvailable(PresentationInfoPtr info, PresentationConnectionPtr controller_connection, PresentationConnectionRequest receiver_connection_request) = 0;
};
class BLINK_PLATFORM_EXPORT PresentationReceiverInterceptorForTesting : public PresentationReceiver {
  virtual PresentationReceiver* GetForwardingInterface() = 0;
  void OnReceiverConnectionAvailable(PresentationInfoPtr info, PresentationConnectionPtr controller_connection, PresentationConnectionRequest receiver_connection_request) override;
};
class BLINK_PLATFORM_EXPORT PresentationReceiverAsyncWaiter {
 public:
  explicit PresentationReceiverAsyncWaiter(PresentationReceiver* proxy);
  ~PresentationReceiverAsyncWaiter();

 private:
  PresentationReceiver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PresentationReceiverAsyncWaiter);
};

class BLINK_PLATFORM_EXPORT PresentationConnectionProxy
    : public PresentationConnection {
 public:
  explicit PresentationConnectionProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnMessage(PresentationConnectionMessagePtr message, OnMessageCallback callback) final;
  void DidChangeState(PresentationConnectionState state) final;
  void RequestClose() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT PresentationServiceProxy
    : public PresentationService {
 public:
  explicit PresentationServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetController(PresentationControllerPtr controller) final;
  void SetReceiver(PresentationReceiverPtr receiver) final;
  void SetDefaultPresentationUrls(const WTF::Vector<::blink::KURL>& presentation_urls) final;
  void ListenForScreenAvailability(const ::blink::KURL& availability_url) final;
  void StopListeningForScreenAvailability(const ::blink::KURL& availability_url) final;
  void StartPresentation(const WTF::Vector<::blink::KURL>& presentation_urls, StartPresentationCallback callback) final;
  void ReconnectPresentation(const WTF::Vector<::blink::KURL>& presentation_urls, const WTF::String& presentation_id, ReconnectPresentationCallback callback) final;
  void SetPresentationConnection(PresentationInfoPtr presentation_info, PresentationConnectionPtr controller_connection_ptr, PresentationConnectionRequest receiver_connection_request) final;
  void CloseConnection(const ::blink::KURL& presentation_url, const WTF::String& presentation_id) final;
  void Terminate(const ::blink::KURL& presentation_url, const WTF::String& presentation_id) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT PresentationControllerProxy
    : public PresentationController {
 public:
  explicit PresentationControllerProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnScreenAvailabilityUpdated(const ::blink::KURL& url, ScreenAvailability availability) final;
  void OnDefaultPresentationStarted(PresentationInfoPtr presentation_info) final;
  void OnConnectionStateChanged(PresentationInfoPtr presentation_info, PresentationConnectionState newState) final;
  void OnConnectionClosed(PresentationInfoPtr presentation_info, PresentationConnectionCloseReason reason, const WTF::String& message) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT PresentationReceiverProxy
    : public PresentationReceiver {
 public:
  explicit PresentationReceiverProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnReceiverConnectionAvailable(PresentationInfoPtr info, PresentationConnectionPtr controller_connection, PresentationConnectionRequest receiver_connection_request) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT PresentationConnectionStubDispatch {
 public:
  static bool Accept(PresentationConnection* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PresentationConnection* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PresentationConnection>>
class PresentationConnectionStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PresentationConnectionStub() {}
  ~PresentationConnectionStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PresentationConnectionStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PresentationConnectionStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT PresentationServiceStubDispatch {
 public:
  static bool Accept(PresentationService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PresentationService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PresentationService>>
class PresentationServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PresentationServiceStub() {}
  ~PresentationServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PresentationServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PresentationServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT PresentationControllerStubDispatch {
 public:
  static bool Accept(PresentationController* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PresentationController* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PresentationController>>
class PresentationControllerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PresentationControllerStub() {}
  ~PresentationControllerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PresentationControllerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PresentationControllerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT PresentationReceiverStubDispatch {
 public:
  static bool Accept(PresentationReceiver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PresentationReceiver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PresentationReceiver>>
class PresentationReceiverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PresentationReceiverStub() {}
  ~PresentationReceiverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PresentationReceiverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PresentationReceiverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT PresentationConnectionRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT PresentationServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT PresentationControllerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT PresentationReceiverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT PresentationConnectionResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT PresentationServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};



class BLINK_PLATFORM_EXPORT PresentationError {
 public:
  using DataView = PresentationErrorDataView;
  using Data_ = internal::PresentationError_Data;

  template <typename... Args>
  static PresentationErrorPtr New(Args&&... args) {
    return PresentationErrorPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PresentationErrorPtr From(const U& u) {
    return mojo::TypeConverter<PresentationErrorPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PresentationError>::Convert(*this);
  }


  PresentationError();

  PresentationError(
      PresentationErrorType error_type,
      const WTF::String& message);

  ~PresentationError();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PresentationErrorPtr>
  PresentationErrorPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PresentationError>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PresentationError::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PresentationError::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PresentationError_UnserializedMessageContext<
            UserType, PresentationError::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PresentationError::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return PresentationError::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PresentationError_UnserializedMessageContext<
            UserType, PresentationError::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PresentationError::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  PresentationErrorType error_type;
  WTF::String message;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class BLINK_PLATFORM_EXPORT PresentationConnectionMessage {
 public:
  using DataView = PresentationConnectionMessageDataView;
  using Data_ = internal::PresentationConnectionMessage_Data;
  using Tag = Data_::PresentationConnectionMessage_Tag;

  static PresentationConnectionMessagePtr New() {
    return PresentationConnectionMessagePtr(base::in_place);
  }
  // Construct an instance holding |message|.
  static PresentationConnectionMessagePtr
  NewMessage(
      const WTF::String& message) {
    auto result = PresentationConnectionMessagePtr(base::in_place);
    result->set_message(std::move(message));
    return result;
  }
  // Construct an instance holding |data|.
  static PresentationConnectionMessagePtr
  NewData(
      const WTF::Vector<uint8_t>& data) {
    auto result = PresentationConnectionMessagePtr(base::in_place);
    result->set_data(std::move(data));
    return result;
  }

  template <typename U>
  static PresentationConnectionMessagePtr From(const U& u) {
    return mojo::TypeConverter<PresentationConnectionMessagePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PresentationConnectionMessage>::Convert(*this);
  }

  PresentationConnectionMessage();
  ~PresentationConnectionMessage();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = PresentationConnectionMessagePtr>
  PresentationConnectionMessagePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PresentationConnectionMessage>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  Tag which() const {
    return tag_;
  }


  bool is_message() const { return tag_ == Tag::MESSAGE; }

  WTF::String& get_message() const {
    DCHECK(tag_ == Tag::MESSAGE);
    return *(data_.message);
  }

  void set_message(
      const WTF::String& message);
  bool is_data() const { return tag_ == Tag::DATA; }

  WTF::Vector<uint8_t>& get_data() const {
    DCHECK(tag_ == Tag::DATA);
    return *(data_.data);
  }

  void set_data(
      const WTF::Vector<uint8_t>& data);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PresentationConnectionMessage::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<PresentationConnectionMessage::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    WTF::String* message;
    WTF::Vector<uint8_t>* data;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};


class BLINK_PLATFORM_EXPORT PresentationInfo {
 public:
  using DataView = PresentationInfoDataView;
  using Data_ = internal::PresentationInfo_Data;

  template <typename... Args>
  static PresentationInfoPtr New(Args&&... args) {
    return PresentationInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PresentationInfoPtr From(const U& u) {
    return mojo::TypeConverter<PresentationInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PresentationInfo>::Convert(*this);
  }


  PresentationInfo();

  PresentationInfo(
      const ::blink::KURL& url,
      const WTF::String& id);

  ~PresentationInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PresentationInfoPtr>
  PresentationInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PresentationInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PresentationInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PresentationInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PresentationInfo_UnserializedMessageContext<
            UserType, PresentationInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PresentationInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return PresentationInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PresentationInfo_UnserializedMessageContext<
            UserType, PresentationInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PresentationInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  ::blink::KURL url;
  WTF::String id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


template <typename UnionPtrType>
PresentationConnectionMessagePtr PresentationConnectionMessage::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::MESSAGE:
      rv->set_message(mojo::Clone(*data_.message));
      break;
    case Tag::DATA:
      rv->set_data(mojo::Clone(*data_.data));
      break;
  };
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PresentationConnectionMessage>::value>::type*>
bool PresentationConnectionMessage::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::MESSAGE:
      return mojo::Equals(*(data_.message), *(other.data_.message));
    case Tag::DATA:
      return mojo::Equals(*(data_.data), *(other.data_.data));
  };

  return false;
}
template <typename StructPtrType>
PresentationInfoPtr PresentationInfo::Clone() const {
  return New(
      mojo::Clone(url),
      mojo::Clone(id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PresentationInfo>::value>::type*>
bool PresentationInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  return true;
}
template <typename StructPtrType>
PresentationErrorPtr PresentationError::Clone() const {
  return New(
      mojo::Clone(error_type),
      mojo::Clone(message)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PresentationError>::value>::type*>
bool PresentationError::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->error_type, other_struct.error_type))
    return false;
  if (!mojo::Equals(this->message, other_struct.message))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::blink::mojom::blink::PresentationInfo::DataView,
                                         ::blink::mojom::blink::PresentationInfoPtr> {
  static bool IsNull(const ::blink::mojom::blink::PresentationInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::PresentationInfoPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::PresentationInfo::url)& url(
      const ::blink::mojom::blink::PresentationInfoPtr& input) {
    return input->url;
  }

  static const decltype(::blink::mojom::blink::PresentationInfo::id)& id(
      const ::blink::mojom::blink::PresentationInfoPtr& input) {
    return input->id;
  }

  static bool Read(::blink::mojom::blink::PresentationInfo::DataView input, ::blink::mojom::blink::PresentationInfoPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::blink::mojom::blink::PresentationError::DataView,
                                         ::blink::mojom::blink::PresentationErrorPtr> {
  static bool IsNull(const ::blink::mojom::blink::PresentationErrorPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::PresentationErrorPtr* output) { output->reset(); }

  static decltype(::blink::mojom::blink::PresentationError::error_type) error_type(
      const ::blink::mojom::blink::PresentationErrorPtr& input) {
    return input->error_type;
  }

  static const decltype(::blink::mojom::blink::PresentationError::message)& message(
      const ::blink::mojom::blink::PresentationErrorPtr& input) {
    return input->message;
  }

  static bool Read(::blink::mojom::blink::PresentationError::DataView input, ::blink::mojom::blink::PresentationErrorPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT UnionTraits<::blink::mojom::blink::PresentationConnectionMessage::DataView,
                                        ::blink::mojom::blink::PresentationConnectionMessagePtr> {
  static bool IsNull(const ::blink::mojom::blink::PresentationConnectionMessagePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::PresentationConnectionMessagePtr* output) { output->reset(); }

  static ::blink::mojom::blink::PresentationConnectionMessage::Tag GetTag(const ::blink::mojom::blink::PresentationConnectionMessagePtr& input) {
    return input->which();
  }

  static const WTF::String& message(const ::blink::mojom::blink::PresentationConnectionMessagePtr& input) {
    return input->get_message();
  }

  static const WTF::Vector<uint8_t>& data(const ::blink::mojom::blink::PresentationConnectionMessagePtr& input) {
    return input->get_data();
  }

  static bool Read(::blink::mojom::blink::PresentationConnectionMessage::DataView input, ::blink::mojom::blink::PresentationConnectionMessagePtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PRESENTATION_PRESENTATION_MOJOM_BLINK_H_