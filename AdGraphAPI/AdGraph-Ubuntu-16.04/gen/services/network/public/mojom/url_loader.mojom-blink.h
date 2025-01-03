// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_BLINK_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_BLINK_H_

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
#include "services/network/public/mojom/url_loader.mojom-shared.h"
#include "services/network/public/mojom/http_request_headers.mojom-blink.h"
#include "services/network/public/mojom/network_param.mojom-blink.h"

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
struct network_mojom_internal_RequestPriority_DataHashFn {
  static unsigned GetHash(const ::network::mojom::RequestPriority& value) {
    using utype = std::underlying_type<::network::mojom::RequestPriority>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::network::mojom::RequestPriority& left, const ::network::mojom::RequestPriority& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::network::mojom::RequestPriority> {
  using Hash = network_mojom_internal_RequestPriority_DataHashFn;
};

template <>
struct HashTraits<::network::mojom::RequestPriority>
    : public GenericHashTraits<::network::mojom::RequestPriority> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::network::mojom::RequestPriority& value) {
    return value == static_cast<::network::mojom::RequestPriority>(-1000000);
  }
  static void ConstructDeletedValue(::network::mojom::RequestPriority& slot, bool) {
    slot = static_cast<::network::mojom::RequestPriority>(-1000001);
  }
  static bool IsDeletedValue(const ::network::mojom::RequestPriority& value) {
    return value == static_cast<::network::mojom::RequestPriority>(-1000001);
  }
};
}  // namespace WTF


namespace network {
namespace mojom {
namespace blink {
using RequestPriority = RequestPriority;  // Alias for definition in the parent namespace.
class URLLoader;
using URLLoaderPtr = mojo::InterfacePtr<URLLoader>;
using RevocableURLLoaderPtr = ::blink::RevocableInterfacePtr<URLLoader>;
using URLLoaderPtrInfo = mojo::InterfacePtrInfo<URLLoader>;
using ThreadSafeURLLoaderPtr =
    mojo::ThreadSafeInterfacePtr<URLLoader>;
using URLLoaderRequest = mojo::InterfaceRequest<URLLoader>;
using URLLoaderAssociatedPtr =
    mojo::AssociatedInterfacePtr<URLLoader>;
using ThreadSafeURLLoaderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<URLLoader>;
using URLLoaderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<URLLoader>;
using URLLoaderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<URLLoader>;

class DownloadedTempFile;
using DownloadedTempFilePtr = mojo::InterfacePtr<DownloadedTempFile>;
using RevocableDownloadedTempFilePtr = ::blink::RevocableInterfacePtr<DownloadedTempFile>;
using DownloadedTempFilePtrInfo = mojo::InterfacePtrInfo<DownloadedTempFile>;
using ThreadSafeDownloadedTempFilePtr =
    mojo::ThreadSafeInterfacePtr<DownloadedTempFile>;
using DownloadedTempFileRequest = mojo::InterfaceRequest<DownloadedTempFile>;
using DownloadedTempFileAssociatedPtr =
    mojo::AssociatedInterfacePtr<DownloadedTempFile>;
using ThreadSafeDownloadedTempFileAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<DownloadedTempFile>;
using DownloadedTempFileAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DownloadedTempFile>;
using DownloadedTempFileAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DownloadedTempFile>;

class URLLoaderClient;
using URLLoaderClientPtr = mojo::InterfacePtr<URLLoaderClient>;
using RevocableURLLoaderClientPtr = ::blink::RevocableInterfacePtr<URLLoaderClient>;
using URLLoaderClientPtrInfo = mojo::InterfacePtrInfo<URLLoaderClient>;
using ThreadSafeURLLoaderClientPtr =
    mojo::ThreadSafeInterfacePtr<URLLoaderClient>;
using URLLoaderClientRequest = mojo::InterfaceRequest<URLLoaderClient>;
using URLLoaderClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<URLLoaderClient>;
using ThreadSafeURLLoaderClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<URLLoaderClient>;
using URLLoaderClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<URLLoaderClient>;
using URLLoaderClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<URLLoaderClient>;

using URLRequest = mojo::native::NativeStruct;
using URLRequestPtr = mojo::native::NativeStructPtr;

using URLResponseHead = mojo::native::NativeStruct;
using URLResponseHeadPtr = mojo::native::NativeStructPtr;

using URLRequestRedirectInfo = mojo::native::NativeStruct;
using URLRequestRedirectInfoPtr = mojo::native::NativeStructPtr;

using CORSErrorStatus = mojo::native::NativeStruct;
using CORSErrorStatusPtr = mojo::native::NativeStructPtr;

using URLLoaderCompletionStatus = mojo::native::NativeStruct;
using URLLoaderCompletionStatusPtr = mojo::native::NativeStructPtr;

class URLLoaderClientEndpoints;
using URLLoaderClientEndpointsPtr = mojo::StructPtr<URLLoaderClientEndpoints>;


class URLLoaderProxy;

template <typename ImplRefTraits>
class URLLoaderStub;

class URLLoaderRequestValidator;

class BLINK_PLATFORM_EXPORT URLLoader
    : public URLLoaderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = URLLoaderProxy;

  template <typename ImplRefTraits>
  using Stub_ = URLLoaderStub<ImplRefTraits>;

  using RequestValidator_ = URLLoaderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kFollowRedirectMinVersion = 0,
    kProceedWithResponseMinVersion = 0,
    kSetPriorityMinVersion = 0,
    kPauseReadingBodyFromNetMinVersion = 0,
    kResumeReadingBodyFromNetMinVersion = 0,
  };
  static constexpr uint32_t kClientDisconnectReason = 1U;
  virtual ~URLLoader() {}

  virtual void FollowRedirect(::network::mojom::blink::HttpRequestHeadersPtr modified_request_headers) = 0;

  virtual void ProceedWithResponse() = 0;

  virtual void SetPriority(RequestPriority priority, int32_t intra_priority_value) = 0;

  virtual void PauseReadingBodyFromNet() = 0;

  virtual void ResumeReadingBodyFromNet() = 0;
};
class BLINK_PLATFORM_EXPORT URLLoaderInterceptorForTesting : public URLLoader {
  virtual URLLoader* GetForwardingInterface() = 0;
  void FollowRedirect(::network::mojom::blink::HttpRequestHeadersPtr modified_request_headers) override;
  void ProceedWithResponse() override;
  void SetPriority(RequestPriority priority, int32_t intra_priority_value) override;
  void PauseReadingBodyFromNet() override;
  void ResumeReadingBodyFromNet() override;
};
class BLINK_PLATFORM_EXPORT URLLoaderAsyncWaiter {
 public:
  explicit URLLoaderAsyncWaiter(URLLoader* proxy);
  ~URLLoaderAsyncWaiter();

 private:
  URLLoader* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(URLLoaderAsyncWaiter);
};

class DownloadedTempFileProxy;

template <typename ImplRefTraits>
class DownloadedTempFileStub;

class DownloadedTempFileRequestValidator;

class BLINK_PLATFORM_EXPORT DownloadedTempFile
    : public DownloadedTempFileInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = DownloadedTempFileProxy;

  template <typename ImplRefTraits>
  using Stub_ = DownloadedTempFileStub<ImplRefTraits>;

  using RequestValidator_ = DownloadedTempFileRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
  };
  virtual ~DownloadedTempFile() {}
};
class BLINK_PLATFORM_EXPORT DownloadedTempFileInterceptorForTesting : public DownloadedTempFile {
  virtual DownloadedTempFile* GetForwardingInterface() = 0;
};
class BLINK_PLATFORM_EXPORT DownloadedTempFileAsyncWaiter {
 public:
  explicit DownloadedTempFileAsyncWaiter(DownloadedTempFile* proxy);
  ~DownloadedTempFileAsyncWaiter();

 private:
  DownloadedTempFile* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DownloadedTempFileAsyncWaiter);
};

class URLLoaderClientProxy;

template <typename ImplRefTraits>
class URLLoaderClientStub;

class URLLoaderClientRequestValidator;
class URLLoaderClientResponseValidator;

class BLINK_PLATFORM_EXPORT URLLoaderClient
    : public URLLoaderClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = URLLoaderClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = URLLoaderClientStub<ImplRefTraits>;

  using RequestValidator_ = URLLoaderClientRequestValidator;
  using ResponseValidator_ = URLLoaderClientResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOnReceiveResponseMinVersion = 0,
    kOnReceiveRedirectMinVersion = 0,
    kOnDataDownloadedMinVersion = 0,
    kOnUploadProgressMinVersion = 0,
    kOnReceiveCachedMetadataMinVersion = 0,
    kOnTransferSizeUpdatedMinVersion = 0,
    kOnStartLoadingResponseBodyMinVersion = 0,
    kOnCompleteMinVersion = 0,
  };
  virtual ~URLLoaderClient() {}

  virtual void OnReceiveResponse(URLResponseHeadPtr head, DownloadedTempFilePtr downloaded_file) = 0;

  virtual void OnReceiveRedirect(URLRequestRedirectInfoPtr redirect_info, URLResponseHeadPtr head) = 0;

  virtual void OnDataDownloaded(int64_t data_length, int64_t encoded_length) = 0;


  using OnUploadProgressCallback = base::OnceCallback<void()>;
  virtual void OnUploadProgress(int64_t current_position, int64_t total_size, OnUploadProgressCallback callback) = 0;

  virtual void OnReceiveCachedMetadata(const WTF::Vector<uint8_t>& data) = 0;

  virtual void OnTransferSizeUpdated(int32_t transfer_size_diff) = 0;

  virtual void OnStartLoadingResponseBody(mojo::ScopedDataPipeConsumerHandle body) = 0;

  virtual void OnComplete(URLLoaderCompletionStatusPtr status) = 0;
};
class BLINK_PLATFORM_EXPORT URLLoaderClientInterceptorForTesting : public URLLoaderClient {
  virtual URLLoaderClient* GetForwardingInterface() = 0;
  void OnReceiveResponse(URLResponseHeadPtr head, DownloadedTempFilePtr downloaded_file) override;
  void OnReceiveRedirect(URLRequestRedirectInfoPtr redirect_info, URLResponseHeadPtr head) override;
  void OnDataDownloaded(int64_t data_length, int64_t encoded_length) override;
  void OnUploadProgress(int64_t current_position, int64_t total_size, OnUploadProgressCallback callback) override;
  void OnReceiveCachedMetadata(const WTF::Vector<uint8_t>& data) override;
  void OnTransferSizeUpdated(int32_t transfer_size_diff) override;
  void OnStartLoadingResponseBody(mojo::ScopedDataPipeConsumerHandle body) override;
  void OnComplete(URLLoaderCompletionStatusPtr status) override;
};
class BLINK_PLATFORM_EXPORT URLLoaderClientAsyncWaiter {
 public:
  explicit URLLoaderClientAsyncWaiter(URLLoaderClient* proxy);
  ~URLLoaderClientAsyncWaiter();
  void OnUploadProgress(
      int64_t current_position, int64_t total_size);

 private:
  URLLoaderClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(URLLoaderClientAsyncWaiter);
};

class BLINK_PLATFORM_EXPORT URLLoaderProxy
    : public URLLoader {
 public:
  explicit URLLoaderProxy(mojo::MessageReceiverWithResponder* receiver);
  void FollowRedirect(::network::mojom::blink::HttpRequestHeadersPtr modified_request_headers) final;
  void ProceedWithResponse() final;
  void SetPriority(RequestPriority priority, int32_t intra_priority_value) final;
  void PauseReadingBodyFromNet() final;
  void ResumeReadingBodyFromNet() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT DownloadedTempFileProxy
    : public DownloadedTempFile {
 public:
  explicit DownloadedTempFileProxy(mojo::MessageReceiverWithResponder* receiver);

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT URLLoaderClientProxy
    : public URLLoaderClient {
 public:
  explicit URLLoaderClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnReceiveResponse(URLResponseHeadPtr head, DownloadedTempFilePtr downloaded_file) final;
  void OnReceiveRedirect(URLRequestRedirectInfoPtr redirect_info, URLResponseHeadPtr head) final;
  void OnDataDownloaded(int64_t data_length, int64_t encoded_length) final;
  void OnUploadProgress(int64_t current_position, int64_t total_size, OnUploadProgressCallback callback) final;
  void OnReceiveCachedMetadata(const WTF::Vector<uint8_t>& data) final;
  void OnTransferSizeUpdated(int32_t transfer_size_diff) final;
  void OnStartLoadingResponseBody(mojo::ScopedDataPipeConsumerHandle body) final;
  void OnComplete(URLLoaderCompletionStatusPtr status) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT URLLoaderStubDispatch {
 public:
  static bool Accept(URLLoader* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      URLLoader* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<URLLoader>>
class URLLoaderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  URLLoaderStub() {}
  ~URLLoaderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return URLLoaderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return URLLoaderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT DownloadedTempFileStubDispatch {
 public:
  static bool Accept(DownloadedTempFile* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DownloadedTempFile* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DownloadedTempFile>>
class DownloadedTempFileStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DownloadedTempFileStub() {}
  ~DownloadedTempFileStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DownloadedTempFileStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DownloadedTempFileStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT URLLoaderClientStubDispatch {
 public:
  static bool Accept(URLLoaderClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      URLLoaderClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<URLLoaderClient>>
class URLLoaderClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  URLLoaderClientStub() {}
  ~URLLoaderClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return URLLoaderClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return URLLoaderClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT URLLoaderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT DownloadedTempFileRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT URLLoaderClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT URLLoaderClientResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};















class BLINK_PLATFORM_EXPORT URLLoaderClientEndpoints {
 public:
  using DataView = URLLoaderClientEndpointsDataView;
  using Data_ = internal::URLLoaderClientEndpoints_Data;

  template <typename... Args>
  static URLLoaderClientEndpointsPtr New(Args&&... args) {
    return URLLoaderClientEndpointsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static URLLoaderClientEndpointsPtr From(const U& u) {
    return mojo::TypeConverter<URLLoaderClientEndpointsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, URLLoaderClientEndpoints>::Convert(*this);
  }


  URLLoaderClientEndpoints();

  URLLoaderClientEndpoints(
      URLLoaderPtrInfo url_loader,
      URLLoaderClientRequest url_loader_client);

  ~URLLoaderClientEndpoints();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = URLLoaderClientEndpointsPtr>
  URLLoaderClientEndpointsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, URLLoaderClientEndpoints>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        URLLoaderClientEndpoints::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        URLLoaderClientEndpoints::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::URLLoaderClientEndpoints_UnserializedMessageContext<
            UserType, URLLoaderClientEndpoints::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<URLLoaderClientEndpoints::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return URLLoaderClientEndpoints::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::URLLoaderClientEndpoints_UnserializedMessageContext<
            UserType, URLLoaderClientEndpoints::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<URLLoaderClientEndpoints::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  URLLoaderPtrInfo url_loader;
  URLLoaderClientRequest url_loader_client;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(URLLoaderClientEndpoints);
};

template <typename StructPtrType>
URLLoaderClientEndpointsPtr URLLoaderClientEndpoints::Clone() const {
  return New(
      mojo::Clone(url_loader),
      mojo::Clone(url_loader_client)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, URLLoaderClientEndpoints>::value>::type*>
bool URLLoaderClientEndpoints::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->url_loader, other_struct.url_loader))
    return false;
  if (!mojo::Equals(this->url_loader_client, other_struct.url_loader_client))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::network::mojom::blink::URLLoaderClientEndpoints::DataView,
                                         ::network::mojom::blink::URLLoaderClientEndpointsPtr> {
  static bool IsNull(const ::network::mojom::blink::URLLoaderClientEndpointsPtr& input) { return !input; }
  static void SetToNull(::network::mojom::blink::URLLoaderClientEndpointsPtr* output) { output->reset(); }

  static  decltype(::network::mojom::blink::URLLoaderClientEndpoints::url_loader)& url_loader(
       ::network::mojom::blink::URLLoaderClientEndpointsPtr& input) {
    return input->url_loader;
  }

  static  decltype(::network::mojom::blink::URLLoaderClientEndpoints::url_loader_client)& url_loader_client(
       ::network::mojom::blink::URLLoaderClientEndpointsPtr& input) {
    return input->url_loader_client;
  }

  static bool Read(::network::mojom::blink::URLLoaderClientEndpoints::DataView input, ::network::mojom::blink::URLLoaderClientEndpointsPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_BLINK_H_