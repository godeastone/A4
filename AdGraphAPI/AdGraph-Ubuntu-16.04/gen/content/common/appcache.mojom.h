// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_APPCACHE_MOJOM_H_
#define CONTENT_COMMON_APPCACHE_MOJOM_H_

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
#include "content/common/appcache.mojom-shared.h"
#include "content/public/common/appcache_info.mojom.h"
#include "url/mojom/url.mojom.h"
#include "services/network/public/mojom/url_loader_factory.mojom.h"
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


namespace content {
namespace mojom {
class AppCacheBackend;
using AppCacheBackendPtr = mojo::InterfacePtr<AppCacheBackend>;
using AppCacheBackendPtrInfo = mojo::InterfacePtrInfo<AppCacheBackend>;
using ThreadSafeAppCacheBackendPtr =
    mojo::ThreadSafeInterfacePtr<AppCacheBackend>;
using AppCacheBackendRequest = mojo::InterfaceRequest<AppCacheBackend>;
using AppCacheBackendAssociatedPtr =
    mojo::AssociatedInterfacePtr<AppCacheBackend>;
using ThreadSafeAppCacheBackendAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AppCacheBackend>;
using AppCacheBackendAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AppCacheBackend>;
using AppCacheBackendAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AppCacheBackend>;

class AppCacheFrontend;
using AppCacheFrontendPtr = mojo::InterfacePtr<AppCacheFrontend>;
using AppCacheFrontendPtrInfo = mojo::InterfacePtrInfo<AppCacheFrontend>;
using ThreadSafeAppCacheFrontendPtr =
    mojo::ThreadSafeInterfacePtr<AppCacheFrontend>;
using AppCacheFrontendRequest = mojo::InterfaceRequest<AppCacheFrontend>;
using AppCacheFrontendAssociatedPtr =
    mojo::AssociatedInterfacePtr<AppCacheFrontend>;
using ThreadSafeAppCacheFrontendAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AppCacheFrontend>;
using AppCacheFrontendAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AppCacheFrontend>;
using AppCacheFrontendAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AppCacheFrontend>;

class AppCacheResourceInfo;
using AppCacheResourceInfoPtr = mojo::StructPtr<AppCacheResourceInfo>;

class AppCacheErrorDetails;
using AppCacheErrorDetailsPtr = mojo::StructPtr<AppCacheErrorDetails>;


class AppCacheBackendProxy;

template <typename ImplRefTraits>
class AppCacheBackendStub;

class AppCacheBackendRequestValidator;
class AppCacheBackendResponseValidator;

class CONTENT_EXPORT AppCacheBackend
    : public AppCacheBackendInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Proxy_ = AppCacheBackendProxy;

  template <typename ImplRefTraits>
  using Stub_ = AppCacheBackendStub<ImplRefTraits>;

  using RequestValidator_ = AppCacheBackendRequestValidator;
  using ResponseValidator_ = AppCacheBackendResponseValidator;
  enum MethodMinVersions : uint32_t {
    kRegisterHostMinVersion = 0,
    kUnregisterHostMinVersion = 0,
    kSetSpawningHostIdMinVersion = 0,
    kSelectCacheMinVersion = 0,
    kSelectCacheForSharedWorkerMinVersion = 0,
    kMarkAsForeignEntryMinVersion = 0,
    kGetStatusMinVersion = 0,
    kStartUpdateMinVersion = 0,
    kSwapCacheMinVersion = 0,
    kGetResourceListMinVersion = 0,
  };
  virtual ~AppCacheBackend() {}

  virtual void RegisterHost(int32_t host_id) = 0;

  virtual void UnregisterHost(int32_t host_id) = 0;

  virtual void SetSpawningHostId(int32_t host_id, int32_t spawning_host_id) = 0;

  virtual void SelectCache(int32_t host_id, const GURL& document_url, int64_t appcache_document_was_loaded_from, const GURL& opt_manifest_url) = 0;

  virtual void SelectCacheForSharedWorker(int32_t host_id, int64_t appcache_id) = 0;

  virtual void MarkAsForeignEntry(int32_t host_id, const GURL& document_url, int64_t appcache_document_was_loaded_from) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool GetStatus(int32_t host_id, ::content::mojom::AppCacheStatus* out_status);

  using GetStatusCallback = base::OnceCallback<void(::content::mojom::AppCacheStatus)>;
  virtual void GetStatus(int32_t host_id, GetStatusCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool StartUpdate(int32_t host_id, bool* out_success);

  using StartUpdateCallback = base::OnceCallback<void(bool)>;
  virtual void StartUpdate(int32_t host_id, StartUpdateCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool SwapCache(int32_t host_id, bool* out_success);

  using SwapCacheCallback = base::OnceCallback<void(bool)>;
  virtual void SwapCache(int32_t host_id, SwapCacheCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool GetResourceList(int32_t host_id, std::vector<AppCacheResourceInfoPtr>* out_resources);

  using GetResourceListCallback = base::OnceCallback<void(std::vector<AppCacheResourceInfoPtr>)>;
  virtual void GetResourceList(int32_t host_id, GetResourceListCallback callback) = 0;
};
class CONTENT_EXPORT AppCacheBackendInterceptorForTesting : public AppCacheBackend {
  virtual AppCacheBackend* GetForwardingInterface() = 0;
  void RegisterHost(int32_t host_id) override;
  void UnregisterHost(int32_t host_id) override;
  void SetSpawningHostId(int32_t host_id, int32_t spawning_host_id) override;
  void SelectCache(int32_t host_id, const GURL& document_url, int64_t appcache_document_was_loaded_from, const GURL& opt_manifest_url) override;
  void SelectCacheForSharedWorker(int32_t host_id, int64_t appcache_id) override;
  void MarkAsForeignEntry(int32_t host_id, const GURL& document_url, int64_t appcache_document_was_loaded_from) override;
  void GetStatus(int32_t host_id, GetStatusCallback callback) override;
  void StartUpdate(int32_t host_id, StartUpdateCallback callback) override;
  void SwapCache(int32_t host_id, SwapCacheCallback callback) override;
  void GetResourceList(int32_t host_id, GetResourceListCallback callback) override;
};
class CONTENT_EXPORT AppCacheBackendAsyncWaiter {
 public:
  explicit AppCacheBackendAsyncWaiter(AppCacheBackend* proxy);
  ~AppCacheBackendAsyncWaiter();
  void GetStatus(
      int32_t host_id, ::content::mojom::AppCacheStatus* out_status);
  void StartUpdate(
      int32_t host_id, bool* out_success);
  void SwapCache(
      int32_t host_id, bool* out_success);
  void GetResourceList(
      int32_t host_id, std::vector<AppCacheResourceInfoPtr>* out_resources);

 private:
  AppCacheBackend* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AppCacheBackendAsyncWaiter);
};

class AppCacheFrontendProxy;

template <typename ImplRefTraits>
class AppCacheFrontendStub;

class AppCacheFrontendRequestValidator;

class CONTENT_EXPORT AppCacheFrontend
    : public AppCacheFrontendInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = AppCacheFrontendProxy;

  template <typename ImplRefTraits>
  using Stub_ = AppCacheFrontendStub<ImplRefTraits>;

  using RequestValidator_ = AppCacheFrontendRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCacheSelectedMinVersion = 0,
    kStatusChangedMinVersion = 0,
    kEventRaisedMinVersion = 0,
    kProgressEventRaisedMinVersion = 0,
    kErrorEventRaisedMinVersion = 0,
    kLogMessageMinVersion = 0,
    kContentBlockedMinVersion = 0,
    kSetSubresourceFactoryMinVersion = 0,
  };
  virtual ~AppCacheFrontend() {}

  virtual void CacheSelected(int32_t host_id, ::content::mojom::AppCacheInfoPtr info) = 0;

  virtual void StatusChanged(const std::vector<int32_t>& host_ids, ::content::mojom::AppCacheStatus status) = 0;

  virtual void EventRaised(const std::vector<int32_t>& host_ids, AppCacheEventID event_id) = 0;

  virtual void ProgressEventRaised(const std::vector<int32_t>& host_ids, const GURL& url, int32_t total, int32_t complete) = 0;

  virtual void ErrorEventRaised(const std::vector<int32_t>& host_ids, AppCacheErrorDetailsPtr error_details) = 0;

  virtual void LogMessage(int32_t host_id, int32_t log_level, const std::string& message) = 0;

  virtual void ContentBlocked(int32_t host_id, const GURL& manifest_url) = 0;

  virtual void SetSubresourceFactory(int32_t host_id, ::network::mojom::URLLoaderFactoryPtr url_loader_factory) = 0;
};
class CONTENT_EXPORT AppCacheFrontendInterceptorForTesting : public AppCacheFrontend {
  virtual AppCacheFrontend* GetForwardingInterface() = 0;
  void CacheSelected(int32_t host_id, ::content::mojom::AppCacheInfoPtr info) override;
  void StatusChanged(const std::vector<int32_t>& host_ids, ::content::mojom::AppCacheStatus status) override;
  void EventRaised(const std::vector<int32_t>& host_ids, AppCacheEventID event_id) override;
  void ProgressEventRaised(const std::vector<int32_t>& host_ids, const GURL& url, int32_t total, int32_t complete) override;
  void ErrorEventRaised(const std::vector<int32_t>& host_ids, AppCacheErrorDetailsPtr error_details) override;
  void LogMessage(int32_t host_id, int32_t log_level, const std::string& message) override;
  void ContentBlocked(int32_t host_id, const GURL& manifest_url) override;
  void SetSubresourceFactory(int32_t host_id, ::network::mojom::URLLoaderFactoryPtr url_loader_factory) override;
};
class CONTENT_EXPORT AppCacheFrontendAsyncWaiter {
 public:
  explicit AppCacheFrontendAsyncWaiter(AppCacheFrontend* proxy);
  ~AppCacheFrontendAsyncWaiter();

 private:
  AppCacheFrontend* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AppCacheFrontendAsyncWaiter);
};

class CONTENT_EXPORT AppCacheBackendProxy
    : public AppCacheBackend {
 public:
  explicit AppCacheBackendProxy(mojo::MessageReceiverWithResponder* receiver);
  void RegisterHost(int32_t host_id) final;
  void UnregisterHost(int32_t host_id) final;
  void SetSpawningHostId(int32_t host_id, int32_t spawning_host_id) final;
  void SelectCache(int32_t host_id, const GURL& document_url, int64_t appcache_document_was_loaded_from, const GURL& opt_manifest_url) final;
  void SelectCacheForSharedWorker(int32_t host_id, int64_t appcache_id) final;
  void MarkAsForeignEntry(int32_t host_id, const GURL& document_url, int64_t appcache_document_was_loaded_from) final;
  bool GetStatus(int32_t host_id, ::content::mojom::AppCacheStatus* out_status) final;
  void GetStatus(int32_t host_id, GetStatusCallback callback) final;
  bool StartUpdate(int32_t host_id, bool* out_success) final;
  void StartUpdate(int32_t host_id, StartUpdateCallback callback) final;
  bool SwapCache(int32_t host_id, bool* out_success) final;
  void SwapCache(int32_t host_id, SwapCacheCallback callback) final;
  bool GetResourceList(int32_t host_id, std::vector<AppCacheResourceInfoPtr>* out_resources) final;
  void GetResourceList(int32_t host_id, GetResourceListCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT AppCacheFrontendProxy
    : public AppCacheFrontend {
 public:
  explicit AppCacheFrontendProxy(mojo::MessageReceiverWithResponder* receiver);
  void CacheSelected(int32_t host_id, ::content::mojom::AppCacheInfoPtr info) final;
  void StatusChanged(const std::vector<int32_t>& host_ids, ::content::mojom::AppCacheStatus status) final;
  void EventRaised(const std::vector<int32_t>& host_ids, AppCacheEventID event_id) final;
  void ProgressEventRaised(const std::vector<int32_t>& host_ids, const GURL& url, int32_t total, int32_t complete) final;
  void ErrorEventRaised(const std::vector<int32_t>& host_ids, AppCacheErrorDetailsPtr error_details) final;
  void LogMessage(int32_t host_id, int32_t log_level, const std::string& message) final;
  void ContentBlocked(int32_t host_id, const GURL& manifest_url) final;
  void SetSubresourceFactory(int32_t host_id, ::network::mojom::URLLoaderFactoryPtr url_loader_factory) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT AppCacheBackendStubDispatch {
 public:
  static bool Accept(AppCacheBackend* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AppCacheBackend* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AppCacheBackend>>
class AppCacheBackendStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AppCacheBackendStub() {}
  ~AppCacheBackendStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AppCacheBackendStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AppCacheBackendStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT AppCacheFrontendStubDispatch {
 public:
  static bool Accept(AppCacheFrontend* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AppCacheFrontend* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AppCacheFrontend>>
class AppCacheFrontendStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AppCacheFrontendStub() {}
  ~AppCacheFrontendStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AppCacheFrontendStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AppCacheFrontendStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT AppCacheBackendRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT AppCacheFrontendRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT AppCacheBackendResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};






class CONTENT_EXPORT AppCacheResourceInfo {
 public:
  using DataView = AppCacheResourceInfoDataView;
  using Data_ = internal::AppCacheResourceInfo_Data;

  template <typename... Args>
  static AppCacheResourceInfoPtr New(Args&&... args) {
    return AppCacheResourceInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static AppCacheResourceInfoPtr From(const U& u) {
    return mojo::TypeConverter<AppCacheResourceInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AppCacheResourceInfo>::Convert(*this);
  }


  AppCacheResourceInfo();

  AppCacheResourceInfo(
      const GURL& url,
      int64_t size,
      bool is_master,
      bool is_manifest,
      bool is_intercept,
      bool is_fallback,
      bool is_foreign,
      bool is_explicit,
      int64_t response_id);

  ~AppCacheResourceInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AppCacheResourceInfoPtr>
  AppCacheResourceInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AppCacheResourceInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        AppCacheResourceInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        AppCacheResourceInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::AppCacheResourceInfo_UnserializedMessageContext<
            UserType, AppCacheResourceInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<AppCacheResourceInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return AppCacheResourceInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::AppCacheResourceInfo_UnserializedMessageContext<
            UserType, AppCacheResourceInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<AppCacheResourceInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  GURL url;
  int64_t size;
  bool is_master;
  bool is_manifest;
  bool is_intercept;
  bool is_fallback;
  bool is_foreign;
  bool is_explicit;
  int64_t response_id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class CONTENT_EXPORT AppCacheErrorDetails {
 public:
  using DataView = AppCacheErrorDetailsDataView;
  using Data_ = internal::AppCacheErrorDetails_Data;

  template <typename... Args>
  static AppCacheErrorDetailsPtr New(Args&&... args) {
    return AppCacheErrorDetailsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static AppCacheErrorDetailsPtr From(const U& u) {
    return mojo::TypeConverter<AppCacheErrorDetailsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AppCacheErrorDetails>::Convert(*this);
  }


  AppCacheErrorDetails();

  AppCacheErrorDetails(
      const std::string& message,
      AppCacheErrorReason reason,
      const GURL& url,
      int32_t status,
      bool is_cross_origin);

  ~AppCacheErrorDetails();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AppCacheErrorDetailsPtr>
  AppCacheErrorDetailsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AppCacheErrorDetails>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        AppCacheErrorDetails::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        AppCacheErrorDetails::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::AppCacheErrorDetails_UnserializedMessageContext<
            UserType, AppCacheErrorDetails::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<AppCacheErrorDetails::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return AppCacheErrorDetails::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::AppCacheErrorDetails_UnserializedMessageContext<
            UserType, AppCacheErrorDetails::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<AppCacheErrorDetails::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string message;
  AppCacheErrorReason reason;
  GURL url;
  int32_t status;
  bool is_cross_origin;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
AppCacheResourceInfoPtr AppCacheResourceInfo::Clone() const {
  return New(
      mojo::Clone(url),
      mojo::Clone(size),
      mojo::Clone(is_master),
      mojo::Clone(is_manifest),
      mojo::Clone(is_intercept),
      mojo::Clone(is_fallback),
      mojo::Clone(is_foreign),
      mojo::Clone(is_explicit),
      mojo::Clone(response_id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AppCacheResourceInfo>::value>::type*>
bool AppCacheResourceInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->size, other_struct.size))
    return false;
  if (!mojo::Equals(this->is_master, other_struct.is_master))
    return false;
  if (!mojo::Equals(this->is_manifest, other_struct.is_manifest))
    return false;
  if (!mojo::Equals(this->is_intercept, other_struct.is_intercept))
    return false;
  if (!mojo::Equals(this->is_fallback, other_struct.is_fallback))
    return false;
  if (!mojo::Equals(this->is_foreign, other_struct.is_foreign))
    return false;
  if (!mojo::Equals(this->is_explicit, other_struct.is_explicit))
    return false;
  if (!mojo::Equals(this->response_id, other_struct.response_id))
    return false;
  return true;
}
template <typename StructPtrType>
AppCacheErrorDetailsPtr AppCacheErrorDetails::Clone() const {
  return New(
      mojo::Clone(message),
      mojo::Clone(reason),
      mojo::Clone(url),
      mojo::Clone(status),
      mojo::Clone(is_cross_origin)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AppCacheErrorDetails>::value>::type*>
bool AppCacheErrorDetails::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->message, other_struct.message))
    return false;
  if (!mojo::Equals(this->reason, other_struct.reason))
    return false;
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->status, other_struct.status))
    return false;
  if (!mojo::Equals(this->is_cross_origin, other_struct.is_cross_origin))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace content

namespace mojo {


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::AppCacheResourceInfo::DataView,
                                         ::content::mojom::AppCacheResourceInfoPtr> {
  static bool IsNull(const ::content::mojom::AppCacheResourceInfoPtr& input) { return !input; }
  static void SetToNull(::content::mojom::AppCacheResourceInfoPtr* output) { output->reset(); }

  static const decltype(::content::mojom::AppCacheResourceInfo::url)& url(
      const ::content::mojom::AppCacheResourceInfoPtr& input) {
    return input->url;
  }

  static decltype(::content::mojom::AppCacheResourceInfo::size) size(
      const ::content::mojom::AppCacheResourceInfoPtr& input) {
    return input->size;
  }

  static decltype(::content::mojom::AppCacheResourceInfo::is_master) is_master(
      const ::content::mojom::AppCacheResourceInfoPtr& input) {
    return input->is_master;
  }

  static decltype(::content::mojom::AppCacheResourceInfo::is_manifest) is_manifest(
      const ::content::mojom::AppCacheResourceInfoPtr& input) {
    return input->is_manifest;
  }

  static decltype(::content::mojom::AppCacheResourceInfo::is_intercept) is_intercept(
      const ::content::mojom::AppCacheResourceInfoPtr& input) {
    return input->is_intercept;
  }

  static decltype(::content::mojom::AppCacheResourceInfo::is_fallback) is_fallback(
      const ::content::mojom::AppCacheResourceInfoPtr& input) {
    return input->is_fallback;
  }

  static decltype(::content::mojom::AppCacheResourceInfo::is_foreign) is_foreign(
      const ::content::mojom::AppCacheResourceInfoPtr& input) {
    return input->is_foreign;
  }

  static decltype(::content::mojom::AppCacheResourceInfo::is_explicit) is_explicit(
      const ::content::mojom::AppCacheResourceInfoPtr& input) {
    return input->is_explicit;
  }

  static decltype(::content::mojom::AppCacheResourceInfo::response_id) response_id(
      const ::content::mojom::AppCacheResourceInfoPtr& input) {
    return input->response_id;
  }

  static bool Read(::content::mojom::AppCacheResourceInfo::DataView input, ::content::mojom::AppCacheResourceInfoPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::AppCacheErrorDetails::DataView,
                                         ::content::mojom::AppCacheErrorDetailsPtr> {
  static bool IsNull(const ::content::mojom::AppCacheErrorDetailsPtr& input) { return !input; }
  static void SetToNull(::content::mojom::AppCacheErrorDetailsPtr* output) { output->reset(); }

  static const decltype(::content::mojom::AppCacheErrorDetails::message)& message(
      const ::content::mojom::AppCacheErrorDetailsPtr& input) {
    return input->message;
  }

  static decltype(::content::mojom::AppCacheErrorDetails::reason) reason(
      const ::content::mojom::AppCacheErrorDetailsPtr& input) {
    return input->reason;
  }

  static const decltype(::content::mojom::AppCacheErrorDetails::url)& url(
      const ::content::mojom::AppCacheErrorDetailsPtr& input) {
    return input->url;
  }

  static decltype(::content::mojom::AppCacheErrorDetails::status) status(
      const ::content::mojom::AppCacheErrorDetailsPtr& input) {
    return input->status;
  }

  static decltype(::content::mojom::AppCacheErrorDetails::is_cross_origin) is_cross_origin(
      const ::content::mojom::AppCacheErrorDetailsPtr& input) {
    return input->is_cross_origin;
  }

  static bool Read(::content::mojom::AppCacheErrorDetails::DataView input, ::content::mojom::AppCacheErrorDetailsPtr* output);
};

}  // namespace mojo

#endif  // CONTENT_COMMON_APPCACHE_MOJOM_H_