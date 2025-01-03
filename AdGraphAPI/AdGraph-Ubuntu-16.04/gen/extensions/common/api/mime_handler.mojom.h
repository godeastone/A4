// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef EXTENSIONS_COMMON_API_MIME_HANDLER_MOJOM_H_
#define EXTENSIONS_COMMON_API_MIME_HANDLER_MOJOM_H_

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
#include "extensions/common/api/mime_handler.mojom-shared.h"
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


namespace extensions {
namespace mime_handler {
class MimeHandlerService;
using MimeHandlerServicePtr = mojo::InterfacePtr<MimeHandlerService>;
using MimeHandlerServicePtrInfo = mojo::InterfacePtrInfo<MimeHandlerService>;
using ThreadSafeMimeHandlerServicePtr =
    mojo::ThreadSafeInterfacePtr<MimeHandlerService>;
using MimeHandlerServiceRequest = mojo::InterfaceRequest<MimeHandlerService>;
using MimeHandlerServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<MimeHandlerService>;
using ThreadSafeMimeHandlerServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MimeHandlerService>;
using MimeHandlerServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MimeHandlerService>;
using MimeHandlerServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MimeHandlerService>;

class StreamInfo;
using StreamInfoPtr = mojo::StructPtr<StreamInfo>;


class MimeHandlerServiceProxy;

template <typename ImplRefTraits>
class MimeHandlerServiceStub;

class MimeHandlerServiceRequestValidator;
class MimeHandlerServiceResponseValidator;

class  MimeHandlerService
    : public MimeHandlerServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = MimeHandlerServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = MimeHandlerServiceStub<ImplRefTraits>;

  using RequestValidator_ = MimeHandlerServiceRequestValidator;
  using ResponseValidator_ = MimeHandlerServiceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetStreamInfoMinVersion = 0,
    kAbortStreamMinVersion = 0,
  };
  virtual ~MimeHandlerService() {}


  using GetStreamInfoCallback = base::OnceCallback<void(StreamInfoPtr)>;
  virtual void GetStreamInfo(GetStreamInfoCallback callback) = 0;


  using AbortStreamCallback = base::OnceCallback<void()>;
  virtual void AbortStream(AbortStreamCallback callback) = 0;
};
class  MimeHandlerServiceInterceptorForTesting : public MimeHandlerService {
  virtual MimeHandlerService* GetForwardingInterface() = 0;
  void GetStreamInfo(GetStreamInfoCallback callback) override;
  void AbortStream(AbortStreamCallback callback) override;
};
class  MimeHandlerServiceAsyncWaiter {
 public:
  explicit MimeHandlerServiceAsyncWaiter(MimeHandlerService* proxy);
  ~MimeHandlerServiceAsyncWaiter();
  void GetStreamInfo(
      StreamInfoPtr* out_stream_info);
  void AbortStream(
      );

 private:
  MimeHandlerService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MimeHandlerServiceAsyncWaiter);
};

class  MimeHandlerServiceProxy
    : public MimeHandlerService {
 public:
  explicit MimeHandlerServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetStreamInfo(GetStreamInfoCallback callback) final;
  void AbortStream(AbortStreamCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  MimeHandlerServiceStubDispatch {
 public:
  static bool Accept(MimeHandlerService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MimeHandlerService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MimeHandlerService>>
class MimeHandlerServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MimeHandlerServiceStub() {}
  ~MimeHandlerServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MimeHandlerServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MimeHandlerServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  MimeHandlerServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  MimeHandlerServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class  StreamInfo {
 public:
  using DataView = StreamInfoDataView;
  using Data_ = internal::StreamInfo_Data;

  template <typename... Args>
  static StreamInfoPtr New(Args&&... args) {
    return StreamInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static StreamInfoPtr From(const U& u) {
    return mojo::TypeConverter<StreamInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, StreamInfo>::Convert(*this);
  }


  StreamInfo();

  StreamInfo(
      const std::string& mime_type,
      const std::string& original_url,
      const std::string& stream_url,
      int32_t tab_id,
      const base::flat_map<std::string, std::string>& response_headers,
      bool embedded);

  ~StreamInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = StreamInfoPtr>
  StreamInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, StreamInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        StreamInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        StreamInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::StreamInfo_UnserializedMessageContext<
            UserType, StreamInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<StreamInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return StreamInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::StreamInfo_UnserializedMessageContext<
            UserType, StreamInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<StreamInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string mime_type;
  std::string original_url;
  std::string stream_url;
  int32_t tab_id;
  base::flat_map<std::string, std::string> response_headers;
  bool embedded;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
StreamInfoPtr StreamInfo::Clone() const {
  return New(
      mojo::Clone(mime_type),
      mojo::Clone(original_url),
      mojo::Clone(stream_url),
      mojo::Clone(tab_id),
      mojo::Clone(response_headers),
      mojo::Clone(embedded)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, StreamInfo>::value>::type*>
bool StreamInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->mime_type, other_struct.mime_type))
    return false;
  if (!mojo::Equals(this->original_url, other_struct.original_url))
    return false;
  if (!mojo::Equals(this->stream_url, other_struct.stream_url))
    return false;
  if (!mojo::Equals(this->tab_id, other_struct.tab_id))
    return false;
  if (!mojo::Equals(this->response_headers, other_struct.response_headers))
    return false;
  if (!mojo::Equals(this->embedded, other_struct.embedded))
    return false;
  return true;
}


}  // namespace mime_handler
}  // namespace extensions

namespace mojo {


template <>
struct  StructTraits<::extensions::mime_handler::StreamInfo::DataView,
                                         ::extensions::mime_handler::StreamInfoPtr> {
  static bool IsNull(const ::extensions::mime_handler::StreamInfoPtr& input) { return !input; }
  static void SetToNull(::extensions::mime_handler::StreamInfoPtr* output) { output->reset(); }

  static const decltype(::extensions::mime_handler::StreamInfo::mime_type)& mime_type(
      const ::extensions::mime_handler::StreamInfoPtr& input) {
    return input->mime_type;
  }

  static const decltype(::extensions::mime_handler::StreamInfo::original_url)& original_url(
      const ::extensions::mime_handler::StreamInfoPtr& input) {
    return input->original_url;
  }

  static const decltype(::extensions::mime_handler::StreamInfo::stream_url)& stream_url(
      const ::extensions::mime_handler::StreamInfoPtr& input) {
    return input->stream_url;
  }

  static decltype(::extensions::mime_handler::StreamInfo::tab_id) tab_id(
      const ::extensions::mime_handler::StreamInfoPtr& input) {
    return input->tab_id;
  }

  static const decltype(::extensions::mime_handler::StreamInfo::response_headers)& response_headers(
      const ::extensions::mime_handler::StreamInfoPtr& input) {
    return input->response_headers;
  }

  static decltype(::extensions::mime_handler::StreamInfo::embedded) embedded(
      const ::extensions::mime_handler::StreamInfoPtr& input) {
    return input->embedded;
  }

  static bool Read(::extensions::mime_handler::StreamInfo::DataView input, ::extensions::mime_handler::StreamInfoPtr* output);
};

}  // namespace mojo

#endif  // EXTENSIONS_COMMON_API_MIME_HANDLER_MOJOM_H_