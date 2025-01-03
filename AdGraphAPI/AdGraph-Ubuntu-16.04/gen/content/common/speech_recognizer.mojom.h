// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SPEECH_RECOGNIZER_MOJOM_H_
#define CONTENT_COMMON_SPEECH_RECOGNIZER_MOJOM_H_

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
#include "content/common/speech_recognizer.mojom-shared.h"
#include "content/public/common/speech_recognition_grammar.mojom.h"
#include "content/public/common/speech_recognition_result.mojom.h"
#include "content/public/common/speech_recognition_error.mojom.h"
#include "url/mojom/origin.mojom.h"
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
class SpeechRecognizer;
using SpeechRecognizerPtr = mojo::InterfacePtr<SpeechRecognizer>;
using SpeechRecognizerPtrInfo = mojo::InterfacePtrInfo<SpeechRecognizer>;
using ThreadSafeSpeechRecognizerPtr =
    mojo::ThreadSafeInterfacePtr<SpeechRecognizer>;
using SpeechRecognizerRequest = mojo::InterfaceRequest<SpeechRecognizer>;
using SpeechRecognizerAssociatedPtr =
    mojo::AssociatedInterfacePtr<SpeechRecognizer>;
using ThreadSafeSpeechRecognizerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SpeechRecognizer>;
using SpeechRecognizerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SpeechRecognizer>;
using SpeechRecognizerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SpeechRecognizer>;

class SpeechRecognitionSession;
using SpeechRecognitionSessionPtr = mojo::InterfacePtr<SpeechRecognitionSession>;
using SpeechRecognitionSessionPtrInfo = mojo::InterfacePtrInfo<SpeechRecognitionSession>;
using ThreadSafeSpeechRecognitionSessionPtr =
    mojo::ThreadSafeInterfacePtr<SpeechRecognitionSession>;
using SpeechRecognitionSessionRequest = mojo::InterfaceRequest<SpeechRecognitionSession>;
using SpeechRecognitionSessionAssociatedPtr =
    mojo::AssociatedInterfacePtr<SpeechRecognitionSession>;
using ThreadSafeSpeechRecognitionSessionAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SpeechRecognitionSession>;
using SpeechRecognitionSessionAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SpeechRecognitionSession>;
using SpeechRecognitionSessionAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SpeechRecognitionSession>;

class SpeechRecognitionSessionClient;
using SpeechRecognitionSessionClientPtr = mojo::InterfacePtr<SpeechRecognitionSessionClient>;
using SpeechRecognitionSessionClientPtrInfo = mojo::InterfacePtrInfo<SpeechRecognitionSessionClient>;
using ThreadSafeSpeechRecognitionSessionClientPtr =
    mojo::ThreadSafeInterfacePtr<SpeechRecognitionSessionClient>;
using SpeechRecognitionSessionClientRequest = mojo::InterfaceRequest<SpeechRecognitionSessionClient>;
using SpeechRecognitionSessionClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<SpeechRecognitionSessionClient>;
using ThreadSafeSpeechRecognitionSessionClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SpeechRecognitionSessionClient>;
using SpeechRecognitionSessionClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SpeechRecognitionSessionClient>;
using SpeechRecognitionSessionClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SpeechRecognitionSessionClient>;

class StartSpeechRecognitionRequestParams;
using StartSpeechRecognitionRequestParamsPtr = mojo::StructPtr<StartSpeechRecognitionRequestParams>;


class SpeechRecognizerProxy;

template <typename ImplRefTraits>
class SpeechRecognizerStub;

class SpeechRecognizerRequestValidator;

class CONTENT_EXPORT SpeechRecognizer
    : public SpeechRecognizerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = SpeechRecognizerProxy;

  template <typename ImplRefTraits>
  using Stub_ = SpeechRecognizerStub<ImplRefTraits>;

  using RequestValidator_ = SpeechRecognizerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kStartMinVersion = 0,
  };
  virtual ~SpeechRecognizer() {}

  virtual void Start(StartSpeechRecognitionRequestParamsPtr params) = 0;
};
class CONTENT_EXPORT SpeechRecognizerInterceptorForTesting : public SpeechRecognizer {
  virtual SpeechRecognizer* GetForwardingInterface() = 0;
  void Start(StartSpeechRecognitionRequestParamsPtr params) override;
};
class CONTENT_EXPORT SpeechRecognizerAsyncWaiter {
 public:
  explicit SpeechRecognizerAsyncWaiter(SpeechRecognizer* proxy);
  ~SpeechRecognizerAsyncWaiter();

 private:
  SpeechRecognizer* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SpeechRecognizerAsyncWaiter);
};

class SpeechRecognitionSessionProxy;

template <typename ImplRefTraits>
class SpeechRecognitionSessionStub;

class SpeechRecognitionSessionRequestValidator;

class CONTENT_EXPORT SpeechRecognitionSession
    : public SpeechRecognitionSessionInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = SpeechRecognitionSessionProxy;

  template <typename ImplRefTraits>
  using Stub_ = SpeechRecognitionSessionStub<ImplRefTraits>;

  using RequestValidator_ = SpeechRecognitionSessionRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kAbortMinVersion = 0,
    kStopCaptureMinVersion = 0,
  };
  virtual ~SpeechRecognitionSession() {}

  virtual void Abort() = 0;

  virtual void StopCapture() = 0;
};
class CONTENT_EXPORT SpeechRecognitionSessionInterceptorForTesting : public SpeechRecognitionSession {
  virtual SpeechRecognitionSession* GetForwardingInterface() = 0;
  void Abort() override;
  void StopCapture() override;
};
class CONTENT_EXPORT SpeechRecognitionSessionAsyncWaiter {
 public:
  explicit SpeechRecognitionSessionAsyncWaiter(SpeechRecognitionSession* proxy);
  ~SpeechRecognitionSessionAsyncWaiter();

 private:
  SpeechRecognitionSession* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SpeechRecognitionSessionAsyncWaiter);
};

class SpeechRecognitionSessionClientProxy;

template <typename ImplRefTraits>
class SpeechRecognitionSessionClientStub;

class SpeechRecognitionSessionClientRequestValidator;

class CONTENT_EXPORT SpeechRecognitionSessionClient
    : public SpeechRecognitionSessionClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = SpeechRecognitionSessionClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = SpeechRecognitionSessionClientStub<ImplRefTraits>;

  using RequestValidator_ = SpeechRecognitionSessionClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kResultRetrievedMinVersion = 0,
    kErrorOccurredMinVersion = 0,
    kStartedMinVersion = 0,
    kAudioStartedMinVersion = 0,
    kSoundStartedMinVersion = 0,
    kSoundEndedMinVersion = 0,
    kAudioEndedMinVersion = 0,
    kEndedMinVersion = 0,
  };
  virtual ~SpeechRecognitionSessionClient() {}

  virtual void ResultRetrieved(const std::vector<content::SpeechRecognitionResult>& results) = 0;

  virtual void ErrorOccurred(const content::SpeechRecognitionError& error) = 0;

  virtual void Started() = 0;

  virtual void AudioStarted() = 0;

  virtual void SoundStarted() = 0;

  virtual void SoundEnded() = 0;

  virtual void AudioEnded() = 0;

  virtual void Ended() = 0;
};
class CONTENT_EXPORT SpeechRecognitionSessionClientInterceptorForTesting : public SpeechRecognitionSessionClient {
  virtual SpeechRecognitionSessionClient* GetForwardingInterface() = 0;
  void ResultRetrieved(const std::vector<content::SpeechRecognitionResult>& results) override;
  void ErrorOccurred(const content::SpeechRecognitionError& error) override;
  void Started() override;
  void AudioStarted() override;
  void SoundStarted() override;
  void SoundEnded() override;
  void AudioEnded() override;
  void Ended() override;
};
class CONTENT_EXPORT SpeechRecognitionSessionClientAsyncWaiter {
 public:
  explicit SpeechRecognitionSessionClientAsyncWaiter(SpeechRecognitionSessionClient* proxy);
  ~SpeechRecognitionSessionClientAsyncWaiter();

 private:
  SpeechRecognitionSessionClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SpeechRecognitionSessionClientAsyncWaiter);
};

class CONTENT_EXPORT SpeechRecognizerProxy
    : public SpeechRecognizer {
 public:
  explicit SpeechRecognizerProxy(mojo::MessageReceiverWithResponder* receiver);
  void Start(StartSpeechRecognitionRequestParamsPtr params) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT SpeechRecognitionSessionProxy
    : public SpeechRecognitionSession {
 public:
  explicit SpeechRecognitionSessionProxy(mojo::MessageReceiverWithResponder* receiver);
  void Abort() final;
  void StopCapture() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT SpeechRecognitionSessionClientProxy
    : public SpeechRecognitionSessionClient {
 public:
  explicit SpeechRecognitionSessionClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void ResultRetrieved(const std::vector<content::SpeechRecognitionResult>& results) final;
  void ErrorOccurred(const content::SpeechRecognitionError& error) final;
  void Started() final;
  void AudioStarted() final;
  void SoundStarted() final;
  void SoundEnded() final;
  void AudioEnded() final;
  void Ended() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT SpeechRecognizerStubDispatch {
 public:
  static bool Accept(SpeechRecognizer* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SpeechRecognizer* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SpeechRecognizer>>
class SpeechRecognizerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SpeechRecognizerStub() {}
  ~SpeechRecognizerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SpeechRecognizerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SpeechRecognizerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT SpeechRecognitionSessionStubDispatch {
 public:
  static bool Accept(SpeechRecognitionSession* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SpeechRecognitionSession* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SpeechRecognitionSession>>
class SpeechRecognitionSessionStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SpeechRecognitionSessionStub() {}
  ~SpeechRecognitionSessionStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SpeechRecognitionSessionStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SpeechRecognitionSessionStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT SpeechRecognitionSessionClientStubDispatch {
 public:
  static bool Accept(SpeechRecognitionSessionClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SpeechRecognitionSessionClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SpeechRecognitionSessionClient>>
class SpeechRecognitionSessionClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SpeechRecognitionSessionClientStub() {}
  ~SpeechRecognitionSessionClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SpeechRecognitionSessionClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SpeechRecognitionSessionClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT SpeechRecognizerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT SpeechRecognitionSessionRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT SpeechRecognitionSessionClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class CONTENT_EXPORT StartSpeechRecognitionRequestParams {
 public:
  using DataView = StartSpeechRecognitionRequestParamsDataView;
  using Data_ = internal::StartSpeechRecognitionRequestParams_Data;

  template <typename... Args>
  static StartSpeechRecognitionRequestParamsPtr New(Args&&... args) {
    return StartSpeechRecognitionRequestParamsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static StartSpeechRecognitionRequestParamsPtr From(const U& u) {
    return mojo::TypeConverter<StartSpeechRecognitionRequestParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, StartSpeechRecognitionRequestParams>::Convert(*this);
  }


  StartSpeechRecognitionRequestParams();

  StartSpeechRecognitionRequestParams(
      SpeechRecognitionSessionRequest session_request,
      SpeechRecognitionSessionClientPtrInfo client,
      const std::string& language,
      std::vector<::content::mojom::SpeechRecognitionGrammarPtr> grammars,
      const url::Origin& origin,
      uint32_t max_hypotheses,
      bool continuous,
      bool interim_results);

  ~StartSpeechRecognitionRequestParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = StartSpeechRecognitionRequestParamsPtr>
  StartSpeechRecognitionRequestParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, StartSpeechRecognitionRequestParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        StartSpeechRecognitionRequestParams::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        StartSpeechRecognitionRequestParams::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::StartSpeechRecognitionRequestParams_UnserializedMessageContext<
            UserType, StartSpeechRecognitionRequestParams::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<StartSpeechRecognitionRequestParams::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return StartSpeechRecognitionRequestParams::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::StartSpeechRecognitionRequestParams_UnserializedMessageContext<
            UserType, StartSpeechRecognitionRequestParams::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<StartSpeechRecognitionRequestParams::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  SpeechRecognitionSessionRequest session_request;
  SpeechRecognitionSessionClientPtrInfo client;
  std::string language;
  std::vector<::content::mojom::SpeechRecognitionGrammarPtr> grammars;
  url::Origin origin;
  uint32_t max_hypotheses;
  bool continuous;
  bool interim_results;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(StartSpeechRecognitionRequestParams);
};

template <typename StructPtrType>
StartSpeechRecognitionRequestParamsPtr StartSpeechRecognitionRequestParams::Clone() const {
  return New(
      mojo::Clone(session_request),
      mojo::Clone(client),
      mojo::Clone(language),
      mojo::Clone(grammars),
      mojo::Clone(origin),
      mojo::Clone(max_hypotheses),
      mojo::Clone(continuous),
      mojo::Clone(interim_results)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, StartSpeechRecognitionRequestParams>::value>::type*>
bool StartSpeechRecognitionRequestParams::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->session_request, other_struct.session_request))
    return false;
  if (!mojo::Equals(this->client, other_struct.client))
    return false;
  if (!mojo::Equals(this->language, other_struct.language))
    return false;
  if (!mojo::Equals(this->grammars, other_struct.grammars))
    return false;
  if (!mojo::Equals(this->origin, other_struct.origin))
    return false;
  if (!mojo::Equals(this->max_hypotheses, other_struct.max_hypotheses))
    return false;
  if (!mojo::Equals(this->continuous, other_struct.continuous))
    return false;
  if (!mojo::Equals(this->interim_results, other_struct.interim_results))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace content

namespace mojo {


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::StartSpeechRecognitionRequestParams::DataView,
                                         ::content::mojom::StartSpeechRecognitionRequestParamsPtr> {
  static bool IsNull(const ::content::mojom::StartSpeechRecognitionRequestParamsPtr& input) { return !input; }
  static void SetToNull(::content::mojom::StartSpeechRecognitionRequestParamsPtr* output) { output->reset(); }

  static  decltype(::content::mojom::StartSpeechRecognitionRequestParams::session_request)& session_request(
       ::content::mojom::StartSpeechRecognitionRequestParamsPtr& input) {
    return input->session_request;
  }

  static  decltype(::content::mojom::StartSpeechRecognitionRequestParams::client)& client(
       ::content::mojom::StartSpeechRecognitionRequestParamsPtr& input) {
    return input->client;
  }

  static const decltype(::content::mojom::StartSpeechRecognitionRequestParams::language)& language(
      const ::content::mojom::StartSpeechRecognitionRequestParamsPtr& input) {
    return input->language;
  }

  static const decltype(::content::mojom::StartSpeechRecognitionRequestParams::grammars)& grammars(
      const ::content::mojom::StartSpeechRecognitionRequestParamsPtr& input) {
    return input->grammars;
  }

  static const decltype(::content::mojom::StartSpeechRecognitionRequestParams::origin)& origin(
      const ::content::mojom::StartSpeechRecognitionRequestParamsPtr& input) {
    return input->origin;
  }

  static decltype(::content::mojom::StartSpeechRecognitionRequestParams::max_hypotheses) max_hypotheses(
      const ::content::mojom::StartSpeechRecognitionRequestParamsPtr& input) {
    return input->max_hypotheses;
  }

  static decltype(::content::mojom::StartSpeechRecognitionRequestParams::continuous) continuous(
      const ::content::mojom::StartSpeechRecognitionRequestParamsPtr& input) {
    return input->continuous;
  }

  static decltype(::content::mojom::StartSpeechRecognitionRequestParams::interim_results) interim_results(
      const ::content::mojom::StartSpeechRecognitionRequestParamsPtr& input) {
    return input->interim_results;
  }

  static bool Read(::content::mojom::StartSpeechRecognitionRequestParams::DataView input, ::content::mojom::StartSpeechRecognitionRequestParamsPtr* output);
};

}  // namespace mojo

#endif  // CONTENT_COMMON_SPEECH_RECOGNIZER_MOJOM_H_