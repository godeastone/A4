// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SAFE_BROWSING_COMMON_SAFE_BROWSING_MOJOM_H_
#define COMPONENTS_SAFE_BROWSING_COMMON_SAFE_BROWSING_MOJOM_H_

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
#include "components/safe_browsing/common/safe_browsing.mojom-shared.h"
#include "content/public/common/resource_type.mojom.h"
#include "services/network/public/mojom/http_request_headers.mojom.h"
#include "url/mojom/url.mojom.h"
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


namespace safe_browsing {
namespace mojom {
class SafeBrowsing;
using SafeBrowsingPtr = mojo::InterfacePtr<SafeBrowsing>;
using SafeBrowsingPtrInfo = mojo::InterfacePtrInfo<SafeBrowsing>;
using ThreadSafeSafeBrowsingPtr =
    mojo::ThreadSafeInterfacePtr<SafeBrowsing>;
using SafeBrowsingRequest = mojo::InterfaceRequest<SafeBrowsing>;
using SafeBrowsingAssociatedPtr =
    mojo::AssociatedInterfacePtr<SafeBrowsing>;
using ThreadSafeSafeBrowsingAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SafeBrowsing>;
using SafeBrowsingAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SafeBrowsing>;
using SafeBrowsingAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SafeBrowsing>;

class SafeBrowsingUrlChecker;
using SafeBrowsingUrlCheckerPtr = mojo::InterfacePtr<SafeBrowsingUrlChecker>;
using SafeBrowsingUrlCheckerPtrInfo = mojo::InterfacePtrInfo<SafeBrowsingUrlChecker>;
using ThreadSafeSafeBrowsingUrlCheckerPtr =
    mojo::ThreadSafeInterfacePtr<SafeBrowsingUrlChecker>;
using SafeBrowsingUrlCheckerRequest = mojo::InterfaceRequest<SafeBrowsingUrlChecker>;
using SafeBrowsingUrlCheckerAssociatedPtr =
    mojo::AssociatedInterfacePtr<SafeBrowsingUrlChecker>;
using ThreadSafeSafeBrowsingUrlCheckerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SafeBrowsingUrlChecker>;
using SafeBrowsingUrlCheckerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SafeBrowsingUrlChecker>;
using SafeBrowsingUrlCheckerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SafeBrowsingUrlChecker>;

class UrlCheckNotifier;
using UrlCheckNotifierPtr = mojo::InterfacePtr<UrlCheckNotifier>;
using UrlCheckNotifierPtrInfo = mojo::InterfacePtrInfo<UrlCheckNotifier>;
using ThreadSafeUrlCheckNotifierPtr =
    mojo::ThreadSafeInterfacePtr<UrlCheckNotifier>;
using UrlCheckNotifierRequest = mojo::InterfaceRequest<UrlCheckNotifier>;
using UrlCheckNotifierAssociatedPtr =
    mojo::AssociatedInterfacePtr<UrlCheckNotifier>;
using ThreadSafeUrlCheckNotifierAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<UrlCheckNotifier>;
using UrlCheckNotifierAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<UrlCheckNotifier>;
using UrlCheckNotifierAssociatedRequest =
    mojo::AssociatedInterfaceRequest<UrlCheckNotifier>;

class ThreatReporter;
using ThreatReporterPtr = mojo::InterfacePtr<ThreatReporter>;
using ThreatReporterPtrInfo = mojo::InterfacePtrInfo<ThreatReporter>;
using ThreadSafeThreatReporterPtr =
    mojo::ThreadSafeInterfacePtr<ThreatReporter>;
using ThreatReporterRequest = mojo::InterfaceRequest<ThreatReporter>;
using ThreatReporterAssociatedPtr =
    mojo::AssociatedInterfacePtr<ThreatReporter>;
using ThreadSafeThreatReporterAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ThreatReporter>;
using ThreatReporterAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ThreatReporter>;
using ThreatReporterAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ThreatReporter>;

class PhishingDetector;
using PhishingDetectorPtr = mojo::InterfacePtr<PhishingDetector>;
using PhishingDetectorPtrInfo = mojo::InterfacePtrInfo<PhishingDetector>;
using ThreadSafePhishingDetectorPtr =
    mojo::ThreadSafeInterfacePtr<PhishingDetector>;
using PhishingDetectorRequest = mojo::InterfaceRequest<PhishingDetector>;
using PhishingDetectorAssociatedPtr =
    mojo::AssociatedInterfacePtr<PhishingDetector>;
using ThreadSafePhishingDetectorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PhishingDetector>;
using PhishingDetectorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PhishingDetector>;
using PhishingDetectorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PhishingDetector>;

class PhishingDetectorClient;
using PhishingDetectorClientPtr = mojo::InterfacePtr<PhishingDetectorClient>;
using PhishingDetectorClientPtrInfo = mojo::InterfacePtrInfo<PhishingDetectorClient>;
using ThreadSafePhishingDetectorClientPtr =
    mojo::ThreadSafeInterfacePtr<PhishingDetectorClient>;
using PhishingDetectorClientRequest = mojo::InterfaceRequest<PhishingDetectorClient>;
using PhishingDetectorClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<PhishingDetectorClient>;
using ThreadSafePhishingDetectorClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PhishingDetectorClient>;
using PhishingDetectorClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PhishingDetectorClient>;
using PhishingDetectorClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PhishingDetectorClient>;

class PhishingModelSetter;
using PhishingModelSetterPtr = mojo::InterfacePtr<PhishingModelSetter>;
using PhishingModelSetterPtrInfo = mojo::InterfacePtrInfo<PhishingModelSetter>;
using ThreadSafePhishingModelSetterPtr =
    mojo::ThreadSafeInterfacePtr<PhishingModelSetter>;
using PhishingModelSetterRequest = mojo::InterfaceRequest<PhishingModelSetter>;
using PhishingModelSetterAssociatedPtr =
    mojo::AssociatedInterfacePtr<PhishingModelSetter>;
using ThreadSafePhishingModelSetterAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PhishingModelSetter>;
using PhishingModelSetterAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PhishingModelSetter>;
using PhishingModelSetterAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PhishingModelSetter>;

class AttributeNameValue;
using AttributeNameValuePtr = mojo::InlinedStructPtr<AttributeNameValue>;

class ThreatDOMDetailsNode;
using ThreatDOMDetailsNodePtr = mojo::StructPtr<ThreatDOMDetailsNode>;


class SafeBrowsingProxy;

template <typename ImplRefTraits>
class SafeBrowsingStub;

class SafeBrowsingRequestValidator;
class SafeBrowsingResponseValidator;

class  SafeBrowsing
    : public SafeBrowsingInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = SafeBrowsingProxy;

  template <typename ImplRefTraits>
  using Stub_ = SafeBrowsingStub<ImplRefTraits>;

  using RequestValidator_ = SafeBrowsingRequestValidator;
  using ResponseValidator_ = SafeBrowsingResponseValidator;
  enum MethodMinVersions : uint32_t {
    kCreateCheckerAndCheckMinVersion = 0,
    kCloneMinVersion = 0,
  };
  virtual ~SafeBrowsing() {}


  using CreateCheckerAndCheckCallback = base::OnceCallback<void(UrlCheckNotifierRequest, bool, bool)>;
  virtual void CreateCheckerAndCheck(int32_t render_frame_id, SafeBrowsingUrlCheckerRequest request, const GURL& url, const std::string& method, const net::HttpRequestHeaders& headers, int32_t load_flags, content::ResourceType resource_type, bool has_user_gesture, bool originated_from_service_worker, CreateCheckerAndCheckCallback callback) = 0;

  virtual void Clone(SafeBrowsingRequest request) = 0;
};
class  SafeBrowsingInterceptorForTesting : public SafeBrowsing {
  virtual SafeBrowsing* GetForwardingInterface() = 0;
  void CreateCheckerAndCheck(int32_t render_frame_id, SafeBrowsingUrlCheckerRequest request, const GURL& url, const std::string& method, const net::HttpRequestHeaders& headers, int32_t load_flags, content::ResourceType resource_type, bool has_user_gesture, bool originated_from_service_worker, CreateCheckerAndCheckCallback callback) override;
  void Clone(SafeBrowsingRequest request) override;
};
class  SafeBrowsingAsyncWaiter {
 public:
  explicit SafeBrowsingAsyncWaiter(SafeBrowsing* proxy);
  ~SafeBrowsingAsyncWaiter();
  void CreateCheckerAndCheck(
      int32_t render_frame_id, SafeBrowsingUrlCheckerRequest request, const GURL& url, const std::string& method, const net::HttpRequestHeaders& headers, int32_t load_flags, content::ResourceType resource_type, bool has_user_gesture, bool originated_from_service_worker, UrlCheckNotifierRequest* out_slow_check_notifier, bool* out_proceed, bool* out_showed_interstitial);

 private:
  SafeBrowsing* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SafeBrowsingAsyncWaiter);
};

class SafeBrowsingUrlCheckerProxy;

template <typename ImplRefTraits>
class SafeBrowsingUrlCheckerStub;

class SafeBrowsingUrlCheckerRequestValidator;
class SafeBrowsingUrlCheckerResponseValidator;

class  SafeBrowsingUrlChecker
    : public SafeBrowsingUrlCheckerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = SafeBrowsingUrlCheckerProxy;

  template <typename ImplRefTraits>
  using Stub_ = SafeBrowsingUrlCheckerStub<ImplRefTraits>;

  using RequestValidator_ = SafeBrowsingUrlCheckerRequestValidator;
  using ResponseValidator_ = SafeBrowsingUrlCheckerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kCheckUrlMinVersion = 0,
  };
  virtual ~SafeBrowsingUrlChecker() {}


  using CheckUrlCallback = base::OnceCallback<void(UrlCheckNotifierRequest, bool, bool)>;
  virtual void CheckUrl(const GURL& url, const std::string& method, CheckUrlCallback callback) = 0;
};
class  SafeBrowsingUrlCheckerInterceptorForTesting : public SafeBrowsingUrlChecker {
  virtual SafeBrowsingUrlChecker* GetForwardingInterface() = 0;
  void CheckUrl(const GURL& url, const std::string& method, CheckUrlCallback callback) override;
};
class  SafeBrowsingUrlCheckerAsyncWaiter {
 public:
  explicit SafeBrowsingUrlCheckerAsyncWaiter(SafeBrowsingUrlChecker* proxy);
  ~SafeBrowsingUrlCheckerAsyncWaiter();
  void CheckUrl(
      const GURL& url, const std::string& method, UrlCheckNotifierRequest* out_slow_check_notifier, bool* out_proceed, bool* out_showed_interstitial);

 private:
  SafeBrowsingUrlChecker* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SafeBrowsingUrlCheckerAsyncWaiter);
};

class UrlCheckNotifierProxy;

template <typename ImplRefTraits>
class UrlCheckNotifierStub;

class UrlCheckNotifierRequestValidator;

class  UrlCheckNotifier
    : public UrlCheckNotifierInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = UrlCheckNotifierProxy;

  template <typename ImplRefTraits>
  using Stub_ = UrlCheckNotifierStub<ImplRefTraits>;

  using RequestValidator_ = UrlCheckNotifierRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnCompleteCheckMinVersion = 0,
  };
  virtual ~UrlCheckNotifier() {}

  virtual void OnCompleteCheck(bool proceed, bool showed_interstitial) = 0;
};
class  UrlCheckNotifierInterceptorForTesting : public UrlCheckNotifier {
  virtual UrlCheckNotifier* GetForwardingInterface() = 0;
  void OnCompleteCheck(bool proceed, bool showed_interstitial) override;
};
class  UrlCheckNotifierAsyncWaiter {
 public:
  explicit UrlCheckNotifierAsyncWaiter(UrlCheckNotifier* proxy);
  ~UrlCheckNotifierAsyncWaiter();

 private:
  UrlCheckNotifier* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(UrlCheckNotifierAsyncWaiter);
};

class ThreatReporterProxy;

template <typename ImplRefTraits>
class ThreatReporterStub;

class ThreatReporterRequestValidator;
class ThreatReporterResponseValidator;

class  ThreatReporter
    : public ThreatReporterInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ThreatReporterProxy;

  template <typename ImplRefTraits>
  using Stub_ = ThreatReporterStub<ImplRefTraits>;

  using RequestValidator_ = ThreatReporterRequestValidator;
  using ResponseValidator_ = ThreatReporterResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetThreatDOMDetailsMinVersion = 0,
  };
  virtual ~ThreatReporter() {}


  using GetThreatDOMDetailsCallback = base::OnceCallback<void(std::vector<ThreatDOMDetailsNodePtr>)>;
  virtual void GetThreatDOMDetails(GetThreatDOMDetailsCallback callback) = 0;
};
class  ThreatReporterInterceptorForTesting : public ThreatReporter {
  virtual ThreatReporter* GetForwardingInterface() = 0;
  void GetThreatDOMDetails(GetThreatDOMDetailsCallback callback) override;
};
class  ThreatReporterAsyncWaiter {
 public:
  explicit ThreatReporterAsyncWaiter(ThreatReporter* proxy);
  ~ThreatReporterAsyncWaiter();
  void GetThreatDOMDetails(
      std::vector<ThreatDOMDetailsNodePtr>* out_nodes);

 private:
  ThreatReporter* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ThreatReporterAsyncWaiter);
};

class PhishingDetectorProxy;

template <typename ImplRefTraits>
class PhishingDetectorStub;

class PhishingDetectorRequestValidator;

class  PhishingDetector
    : public PhishingDetectorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = PhishingDetectorProxy;

  template <typename ImplRefTraits>
  using Stub_ = PhishingDetectorStub<ImplRefTraits>;

  using RequestValidator_ = PhishingDetectorRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kStartPhishingDetectionMinVersion = 0,
  };
  virtual ~PhishingDetector() {}

  virtual void StartPhishingDetection(const GURL& url) = 0;
};
class  PhishingDetectorInterceptorForTesting : public PhishingDetector {
  virtual PhishingDetector* GetForwardingInterface() = 0;
  void StartPhishingDetection(const GURL& url) override;
};
class  PhishingDetectorAsyncWaiter {
 public:
  explicit PhishingDetectorAsyncWaiter(PhishingDetector* proxy);
  ~PhishingDetectorAsyncWaiter();

 private:
  PhishingDetector* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PhishingDetectorAsyncWaiter);
};

class PhishingDetectorClientProxy;

template <typename ImplRefTraits>
class PhishingDetectorClientStub;

class PhishingDetectorClientRequestValidator;

class  PhishingDetectorClient
    : public PhishingDetectorClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = PhishingDetectorClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = PhishingDetectorClientStub<ImplRefTraits>;

  using RequestValidator_ = PhishingDetectorClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kPhishingDetectionDoneMinVersion = 0,
  };
  virtual ~PhishingDetectorClient() {}

  virtual void PhishingDetectionDone(const std::string& request_proto) = 0;
};
class  PhishingDetectorClientInterceptorForTesting : public PhishingDetectorClient {
  virtual PhishingDetectorClient* GetForwardingInterface() = 0;
  void PhishingDetectionDone(const std::string& request_proto) override;
};
class  PhishingDetectorClientAsyncWaiter {
 public:
  explicit PhishingDetectorClientAsyncWaiter(PhishingDetectorClient* proxy);
  ~PhishingDetectorClientAsyncWaiter();

 private:
  PhishingDetectorClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PhishingDetectorClientAsyncWaiter);
};

class PhishingModelSetterProxy;

template <typename ImplRefTraits>
class PhishingModelSetterStub;

class PhishingModelSetterRequestValidator;

class  PhishingModelSetter
    : public PhishingModelSetterInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = PhishingModelSetterProxy;

  template <typename ImplRefTraits>
  using Stub_ = PhishingModelSetterStub<ImplRefTraits>;

  using RequestValidator_ = PhishingModelSetterRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetPhishingModelMinVersion = 0,
  };
  virtual ~PhishingModelSetter() {}

  virtual void SetPhishingModel(const std::string& model) = 0;
};
class  PhishingModelSetterInterceptorForTesting : public PhishingModelSetter {
  virtual PhishingModelSetter* GetForwardingInterface() = 0;
  void SetPhishingModel(const std::string& model) override;
};
class  PhishingModelSetterAsyncWaiter {
 public:
  explicit PhishingModelSetterAsyncWaiter(PhishingModelSetter* proxy);
  ~PhishingModelSetterAsyncWaiter();

 private:
  PhishingModelSetter* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PhishingModelSetterAsyncWaiter);
};

class  SafeBrowsingProxy
    : public SafeBrowsing {
 public:
  explicit SafeBrowsingProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateCheckerAndCheck(int32_t render_frame_id, SafeBrowsingUrlCheckerRequest request, const GURL& url, const std::string& method, const net::HttpRequestHeaders& headers, int32_t load_flags, content::ResourceType resource_type, bool has_user_gesture, bool originated_from_service_worker, CreateCheckerAndCheckCallback callback) final;
  void Clone(SafeBrowsingRequest request) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  SafeBrowsingUrlCheckerProxy
    : public SafeBrowsingUrlChecker {
 public:
  explicit SafeBrowsingUrlCheckerProxy(mojo::MessageReceiverWithResponder* receiver);
  void CheckUrl(const GURL& url, const std::string& method, CheckUrlCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  UrlCheckNotifierProxy
    : public UrlCheckNotifier {
 public:
  explicit UrlCheckNotifierProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnCompleteCheck(bool proceed, bool showed_interstitial) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  ThreatReporterProxy
    : public ThreatReporter {
 public:
  explicit ThreatReporterProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetThreatDOMDetails(GetThreatDOMDetailsCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  PhishingDetectorProxy
    : public PhishingDetector {
 public:
  explicit PhishingDetectorProxy(mojo::MessageReceiverWithResponder* receiver);
  void StartPhishingDetection(const GURL& url) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  PhishingDetectorClientProxy
    : public PhishingDetectorClient {
 public:
  explicit PhishingDetectorClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void PhishingDetectionDone(const std::string& request_proto) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  PhishingModelSetterProxy
    : public PhishingModelSetter {
 public:
  explicit PhishingModelSetterProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetPhishingModel(const std::string& model) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  SafeBrowsingStubDispatch {
 public:
  static bool Accept(SafeBrowsing* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SafeBrowsing* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SafeBrowsing>>
class SafeBrowsingStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SafeBrowsingStub() {}
  ~SafeBrowsingStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SafeBrowsingStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SafeBrowsingStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  SafeBrowsingUrlCheckerStubDispatch {
 public:
  static bool Accept(SafeBrowsingUrlChecker* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SafeBrowsingUrlChecker* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SafeBrowsingUrlChecker>>
class SafeBrowsingUrlCheckerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SafeBrowsingUrlCheckerStub() {}
  ~SafeBrowsingUrlCheckerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SafeBrowsingUrlCheckerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SafeBrowsingUrlCheckerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  UrlCheckNotifierStubDispatch {
 public:
  static bool Accept(UrlCheckNotifier* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      UrlCheckNotifier* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<UrlCheckNotifier>>
class UrlCheckNotifierStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  UrlCheckNotifierStub() {}
  ~UrlCheckNotifierStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UrlCheckNotifierStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UrlCheckNotifierStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ThreatReporterStubDispatch {
 public:
  static bool Accept(ThreatReporter* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ThreatReporter* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ThreatReporter>>
class ThreatReporterStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ThreatReporterStub() {}
  ~ThreatReporterStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ThreatReporterStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ThreatReporterStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  PhishingDetectorStubDispatch {
 public:
  static bool Accept(PhishingDetector* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PhishingDetector* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PhishingDetector>>
class PhishingDetectorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PhishingDetectorStub() {}
  ~PhishingDetectorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PhishingDetectorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PhishingDetectorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  PhishingDetectorClientStubDispatch {
 public:
  static bool Accept(PhishingDetectorClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PhishingDetectorClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PhishingDetectorClient>>
class PhishingDetectorClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PhishingDetectorClientStub() {}
  ~PhishingDetectorClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PhishingDetectorClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PhishingDetectorClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  PhishingModelSetterStubDispatch {
 public:
  static bool Accept(PhishingModelSetter* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PhishingModelSetter* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PhishingModelSetter>>
class PhishingModelSetterStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PhishingModelSetterStub() {}
  ~PhishingModelSetterStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PhishingModelSetterStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PhishingModelSetterStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  SafeBrowsingRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  SafeBrowsingUrlCheckerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  UrlCheckNotifierRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ThreatReporterRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  PhishingDetectorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  PhishingDetectorClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  PhishingModelSetterRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  SafeBrowsingResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  SafeBrowsingUrlCheckerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ThreatReporterResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};


class  AttributeNameValue {
 public:
  using DataView = AttributeNameValueDataView;
  using Data_ = internal::AttributeNameValue_Data;

  template <typename... Args>
  static AttributeNameValuePtr New(Args&&... args) {
    return AttributeNameValuePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static AttributeNameValuePtr From(const U& u) {
    return mojo::TypeConverter<AttributeNameValuePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AttributeNameValue>::Convert(*this);
  }


  AttributeNameValue();

  AttributeNameValue(
      const std::string& name,
      const std::string& value);

  ~AttributeNameValue();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AttributeNameValuePtr>
  AttributeNameValuePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AttributeNameValue>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        AttributeNameValue::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        AttributeNameValue::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::AttributeNameValue_UnserializedMessageContext<
            UserType, AttributeNameValue::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<AttributeNameValue::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return AttributeNameValue::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::AttributeNameValue_UnserializedMessageContext<
            UserType, AttributeNameValue::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<AttributeNameValue::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string name;
  std::string value;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};






class  ThreatDOMDetailsNode {
 public:
  using DataView = ThreatDOMDetailsNodeDataView;
  using Data_ = internal::ThreatDOMDetailsNode_Data;

  template <typename... Args>
  static ThreatDOMDetailsNodePtr New(Args&&... args) {
    return ThreatDOMDetailsNodePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ThreatDOMDetailsNodePtr From(const U& u) {
    return mojo::TypeConverter<ThreatDOMDetailsNodePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ThreatDOMDetailsNode>::Convert(*this);
  }


  ThreatDOMDetailsNode();

  ThreatDOMDetailsNode(
      int32_t node_id,
      const GURL& url,
      const std::string& tag_name,
      const GURL& parent,
      int32_t parent_node_id,
      const std::vector<GURL>& children,
      const std::vector<int32_t>& child_node_ids,
      std::vector<AttributeNameValuePtr> attributes,
      int32_t child_frame_routing_id);

  ~ThreatDOMDetailsNode();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ThreatDOMDetailsNodePtr>
  ThreatDOMDetailsNodePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ThreatDOMDetailsNode>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ThreatDOMDetailsNode::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ThreatDOMDetailsNode::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ThreatDOMDetailsNode_UnserializedMessageContext<
            UserType, ThreatDOMDetailsNode::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ThreatDOMDetailsNode::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ThreatDOMDetailsNode::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ThreatDOMDetailsNode_UnserializedMessageContext<
            UserType, ThreatDOMDetailsNode::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ThreatDOMDetailsNode::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  int32_t node_id;
  GURL url;
  std::string tag_name;
  GURL parent;
  int32_t parent_node_id;
  std::vector<GURL> children;
  std::vector<int32_t> child_node_ids;
  std::vector<AttributeNameValuePtr> attributes;
  int32_t child_frame_routing_id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ThreatDOMDetailsNode);
};

template <typename StructPtrType>
AttributeNameValuePtr AttributeNameValue::Clone() const {
  return New(
      mojo::Clone(name),
      mojo::Clone(value)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AttributeNameValue>::value>::type*>
bool AttributeNameValue::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  return true;
}
template <typename StructPtrType>
ThreatDOMDetailsNodePtr ThreatDOMDetailsNode::Clone() const {
  return New(
      mojo::Clone(node_id),
      mojo::Clone(url),
      mojo::Clone(tag_name),
      mojo::Clone(parent),
      mojo::Clone(parent_node_id),
      mojo::Clone(children),
      mojo::Clone(child_node_ids),
      mojo::Clone(attributes),
      mojo::Clone(child_frame_routing_id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ThreatDOMDetailsNode>::value>::type*>
bool ThreatDOMDetailsNode::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->node_id, other_struct.node_id))
    return false;
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->tag_name, other_struct.tag_name))
    return false;
  if (!mojo::Equals(this->parent, other_struct.parent))
    return false;
  if (!mojo::Equals(this->parent_node_id, other_struct.parent_node_id))
    return false;
  if (!mojo::Equals(this->children, other_struct.children))
    return false;
  if (!mojo::Equals(this->child_node_ids, other_struct.child_node_ids))
    return false;
  if (!mojo::Equals(this->attributes, other_struct.attributes))
    return false;
  if (!mojo::Equals(this->child_frame_routing_id, other_struct.child_frame_routing_id))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace safe_browsing

namespace mojo {


template <>
struct  StructTraits<::safe_browsing::mojom::AttributeNameValue::DataView,
                                         ::safe_browsing::mojom::AttributeNameValuePtr> {
  static bool IsNull(const ::safe_browsing::mojom::AttributeNameValuePtr& input) { return !input; }
  static void SetToNull(::safe_browsing::mojom::AttributeNameValuePtr* output) { output->reset(); }

  static const decltype(::safe_browsing::mojom::AttributeNameValue::name)& name(
      const ::safe_browsing::mojom::AttributeNameValuePtr& input) {
    return input->name;
  }

  static const decltype(::safe_browsing::mojom::AttributeNameValue::value)& value(
      const ::safe_browsing::mojom::AttributeNameValuePtr& input) {
    return input->value;
  }

  static bool Read(::safe_browsing::mojom::AttributeNameValue::DataView input, ::safe_browsing::mojom::AttributeNameValuePtr* output);
};


template <>
struct  StructTraits<::safe_browsing::mojom::ThreatDOMDetailsNode::DataView,
                                         ::safe_browsing::mojom::ThreatDOMDetailsNodePtr> {
  static bool IsNull(const ::safe_browsing::mojom::ThreatDOMDetailsNodePtr& input) { return !input; }
  static void SetToNull(::safe_browsing::mojom::ThreatDOMDetailsNodePtr* output) { output->reset(); }

  static decltype(::safe_browsing::mojom::ThreatDOMDetailsNode::node_id) node_id(
      const ::safe_browsing::mojom::ThreatDOMDetailsNodePtr& input) {
    return input->node_id;
  }

  static const decltype(::safe_browsing::mojom::ThreatDOMDetailsNode::url)& url(
      const ::safe_browsing::mojom::ThreatDOMDetailsNodePtr& input) {
    return input->url;
  }

  static const decltype(::safe_browsing::mojom::ThreatDOMDetailsNode::tag_name)& tag_name(
      const ::safe_browsing::mojom::ThreatDOMDetailsNodePtr& input) {
    return input->tag_name;
  }

  static const decltype(::safe_browsing::mojom::ThreatDOMDetailsNode::parent)& parent(
      const ::safe_browsing::mojom::ThreatDOMDetailsNodePtr& input) {
    return input->parent;
  }

  static decltype(::safe_browsing::mojom::ThreatDOMDetailsNode::parent_node_id) parent_node_id(
      const ::safe_browsing::mojom::ThreatDOMDetailsNodePtr& input) {
    return input->parent_node_id;
  }

  static const decltype(::safe_browsing::mojom::ThreatDOMDetailsNode::children)& children(
      const ::safe_browsing::mojom::ThreatDOMDetailsNodePtr& input) {
    return input->children;
  }

  static const decltype(::safe_browsing::mojom::ThreatDOMDetailsNode::child_node_ids)& child_node_ids(
      const ::safe_browsing::mojom::ThreatDOMDetailsNodePtr& input) {
    return input->child_node_ids;
  }

  static const decltype(::safe_browsing::mojom::ThreatDOMDetailsNode::attributes)& attributes(
      const ::safe_browsing::mojom::ThreatDOMDetailsNodePtr& input) {
    return input->attributes;
  }

  static decltype(::safe_browsing::mojom::ThreatDOMDetailsNode::child_frame_routing_id) child_frame_routing_id(
      const ::safe_browsing::mojom::ThreatDOMDetailsNodePtr& input) {
    return input->child_frame_routing_id;
  }

  static bool Read(::safe_browsing::mojom::ThreatDOMDetailsNode::DataView input, ::safe_browsing::mojom::ThreatDOMDetailsNodePtr* output);
};

}  // namespace mojo

#endif  // COMPONENTS_SAFE_BROWSING_COMMON_SAFE_BROWSING_MOJOM_H_