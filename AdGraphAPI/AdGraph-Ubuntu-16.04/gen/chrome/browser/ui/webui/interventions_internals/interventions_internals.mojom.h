// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_INTERVENTIONS_INTERNALS_INTERVENTIONS_INTERNALS_MOJOM_H_
#define CHROME_BROWSER_UI_WEBUI_INTERVENTIONS_INTERNALS_INTERVENTIONS_INTERNALS_MOJOM_H_

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
#include "chrome/browser/ui/webui/interventions_internals/interventions_internals.mojom-shared.h"
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


namespace mojom {
class InterventionsInternalsPageHandler;
using InterventionsInternalsPageHandlerPtr = mojo::InterfacePtr<InterventionsInternalsPageHandler>;
using InterventionsInternalsPageHandlerPtrInfo = mojo::InterfacePtrInfo<InterventionsInternalsPageHandler>;
using ThreadSafeInterventionsInternalsPageHandlerPtr =
    mojo::ThreadSafeInterfacePtr<InterventionsInternalsPageHandler>;
using InterventionsInternalsPageHandlerRequest = mojo::InterfaceRequest<InterventionsInternalsPageHandler>;
using InterventionsInternalsPageHandlerAssociatedPtr =
    mojo::AssociatedInterfacePtr<InterventionsInternalsPageHandler>;
using ThreadSafeInterventionsInternalsPageHandlerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<InterventionsInternalsPageHandler>;
using InterventionsInternalsPageHandlerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<InterventionsInternalsPageHandler>;
using InterventionsInternalsPageHandlerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<InterventionsInternalsPageHandler>;

class InterventionsInternalsPage;
using InterventionsInternalsPagePtr = mojo::InterfacePtr<InterventionsInternalsPage>;
using InterventionsInternalsPagePtrInfo = mojo::InterfacePtrInfo<InterventionsInternalsPage>;
using ThreadSafeInterventionsInternalsPagePtr =
    mojo::ThreadSafeInterfacePtr<InterventionsInternalsPage>;
using InterventionsInternalsPageRequest = mojo::InterfaceRequest<InterventionsInternalsPage>;
using InterventionsInternalsPageAssociatedPtr =
    mojo::AssociatedInterfacePtr<InterventionsInternalsPage>;
using ThreadSafeInterventionsInternalsPageAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<InterventionsInternalsPage>;
using InterventionsInternalsPageAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<InterventionsInternalsPage>;
using InterventionsInternalsPageAssociatedRequest =
    mojo::AssociatedInterfaceRequest<InterventionsInternalsPage>;

class PreviewsStatus;
using PreviewsStatusPtr = mojo::InlinedStructPtr<PreviewsStatus>;

class PreviewsFlag;
using PreviewsFlagPtr = mojo::InlinedStructPtr<PreviewsFlag>;

class MessageLog;
using MessageLogPtr = mojo::StructPtr<MessageLog>;


class InterventionsInternalsPageHandlerProxy;

template <typename ImplRefTraits>
class InterventionsInternalsPageHandlerStub;

class InterventionsInternalsPageHandlerRequestValidator;
class InterventionsInternalsPageHandlerResponseValidator;

class  InterventionsInternalsPageHandler
    : public InterventionsInternalsPageHandlerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = InterventionsInternalsPageHandlerProxy;

  template <typename ImplRefTraits>
  using Stub_ = InterventionsInternalsPageHandlerStub<ImplRefTraits>;

  using RequestValidator_ = InterventionsInternalsPageHandlerRequestValidator;
  using ResponseValidator_ = InterventionsInternalsPageHandlerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetPreviewsEnabledMinVersion = 0,
    kGetPreviewsFlagsDetailsMinVersion = 0,
    kSetClientPageMinVersion = 0,
    kSetIgnorePreviewsBlacklistDecisionMinVersion = 0,
  };
  virtual ~InterventionsInternalsPageHandler() {}


  using GetPreviewsEnabledCallback = base::OnceCallback<void(std::vector<PreviewsStatusPtr>)>;
  virtual void GetPreviewsEnabled(GetPreviewsEnabledCallback callback) = 0;


  using GetPreviewsFlagsDetailsCallback = base::OnceCallback<void(std::vector<PreviewsFlagPtr>)>;
  virtual void GetPreviewsFlagsDetails(GetPreviewsFlagsDetailsCallback callback) = 0;

  virtual void SetClientPage(InterventionsInternalsPagePtr page) = 0;

  virtual void SetIgnorePreviewsBlacklistDecision(bool ignored) = 0;
};
class  InterventionsInternalsPageHandlerInterceptorForTesting : public InterventionsInternalsPageHandler {
  virtual InterventionsInternalsPageHandler* GetForwardingInterface() = 0;
  void GetPreviewsEnabled(GetPreviewsEnabledCallback callback) override;
  void GetPreviewsFlagsDetails(GetPreviewsFlagsDetailsCallback callback) override;
  void SetClientPage(InterventionsInternalsPagePtr page) override;
  void SetIgnorePreviewsBlacklistDecision(bool ignored) override;
};
class  InterventionsInternalsPageHandlerAsyncWaiter {
 public:
  explicit InterventionsInternalsPageHandlerAsyncWaiter(InterventionsInternalsPageHandler* proxy);
  ~InterventionsInternalsPageHandlerAsyncWaiter();
  void GetPreviewsEnabled(
      std::vector<PreviewsStatusPtr>* out_statuses);
  void GetPreviewsFlagsDetails(
      std::vector<PreviewsFlagPtr>* out_flags);

 private:
  InterventionsInternalsPageHandler* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(InterventionsInternalsPageHandlerAsyncWaiter);
};

class InterventionsInternalsPageProxy;

template <typename ImplRefTraits>
class InterventionsInternalsPageStub;

class InterventionsInternalsPageRequestValidator;

class  InterventionsInternalsPage
    : public InterventionsInternalsPageInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = InterventionsInternalsPageProxy;

  template <typename ImplRefTraits>
  using Stub_ = InterventionsInternalsPageStub<ImplRefTraits>;

  using RequestValidator_ = InterventionsInternalsPageRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kLogNewMessageMinVersion = 0,
    kOnBlacklistedHostMinVersion = 0,
    kOnUserBlacklistedStatusChangeMinVersion = 0,
    kOnBlacklistClearedMinVersion = 0,
    kOnEffectiveConnectionTypeChangedMinVersion = 0,
    kOnIgnoreBlacklistDecisionStatusChangedMinVersion = 0,
  };
  virtual ~InterventionsInternalsPage() {}

  virtual void LogNewMessage(MessageLogPtr log) = 0;

  virtual void OnBlacklistedHost(const std::string& host, int64_t time) = 0;

  virtual void OnUserBlacklistedStatusChange(bool blacklisted) = 0;

  virtual void OnBlacklistCleared(int64_t time) = 0;

  virtual void OnEffectiveConnectionTypeChanged(const std::string& type) = 0;

  virtual void OnIgnoreBlacklistDecisionStatusChanged(bool ignored) = 0;
};
class  InterventionsInternalsPageInterceptorForTesting : public InterventionsInternalsPage {
  virtual InterventionsInternalsPage* GetForwardingInterface() = 0;
  void LogNewMessage(MessageLogPtr log) override;
  void OnBlacklistedHost(const std::string& host, int64_t time) override;
  void OnUserBlacklistedStatusChange(bool blacklisted) override;
  void OnBlacklistCleared(int64_t time) override;
  void OnEffectiveConnectionTypeChanged(const std::string& type) override;
  void OnIgnoreBlacklistDecisionStatusChanged(bool ignored) override;
};
class  InterventionsInternalsPageAsyncWaiter {
 public:
  explicit InterventionsInternalsPageAsyncWaiter(InterventionsInternalsPage* proxy);
  ~InterventionsInternalsPageAsyncWaiter();

 private:
  InterventionsInternalsPage* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(InterventionsInternalsPageAsyncWaiter);
};

class  InterventionsInternalsPageHandlerProxy
    : public InterventionsInternalsPageHandler {
 public:
  explicit InterventionsInternalsPageHandlerProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetPreviewsEnabled(GetPreviewsEnabledCallback callback) final;
  void GetPreviewsFlagsDetails(GetPreviewsFlagsDetailsCallback callback) final;
  void SetClientPage(InterventionsInternalsPagePtr page) final;
  void SetIgnorePreviewsBlacklistDecision(bool ignored) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  InterventionsInternalsPageProxy
    : public InterventionsInternalsPage {
 public:
  explicit InterventionsInternalsPageProxy(mojo::MessageReceiverWithResponder* receiver);
  void LogNewMessage(MessageLogPtr log) final;
  void OnBlacklistedHost(const std::string& host, int64_t time) final;
  void OnUserBlacklistedStatusChange(bool blacklisted) final;
  void OnBlacklistCleared(int64_t time) final;
  void OnEffectiveConnectionTypeChanged(const std::string& type) final;
  void OnIgnoreBlacklistDecisionStatusChanged(bool ignored) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  InterventionsInternalsPageHandlerStubDispatch {
 public:
  static bool Accept(InterventionsInternalsPageHandler* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      InterventionsInternalsPageHandler* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<InterventionsInternalsPageHandler>>
class InterventionsInternalsPageHandlerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  InterventionsInternalsPageHandlerStub() {}
  ~InterventionsInternalsPageHandlerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InterventionsInternalsPageHandlerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InterventionsInternalsPageHandlerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  InterventionsInternalsPageStubDispatch {
 public:
  static bool Accept(InterventionsInternalsPage* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      InterventionsInternalsPage* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<InterventionsInternalsPage>>
class InterventionsInternalsPageStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  InterventionsInternalsPageStub() {}
  ~InterventionsInternalsPageStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InterventionsInternalsPageStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InterventionsInternalsPageStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  InterventionsInternalsPageHandlerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  InterventionsInternalsPageRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  InterventionsInternalsPageHandlerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};


class  PreviewsStatus {
 public:
  using DataView = PreviewsStatusDataView;
  using Data_ = internal::PreviewsStatus_Data;

  template <typename... Args>
  static PreviewsStatusPtr New(Args&&... args) {
    return PreviewsStatusPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PreviewsStatusPtr From(const U& u) {
    return mojo::TypeConverter<PreviewsStatusPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PreviewsStatus>::Convert(*this);
  }


  PreviewsStatus();

  PreviewsStatus(
      const std::string& description,
      bool enabled,
      const std::string& htmlId);

  ~PreviewsStatus();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PreviewsStatusPtr>
  PreviewsStatusPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PreviewsStatus>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PreviewsStatus::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PreviewsStatus::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PreviewsStatus_UnserializedMessageContext<
            UserType, PreviewsStatus::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PreviewsStatus::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PreviewsStatus::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PreviewsStatus_UnserializedMessageContext<
            UserType, PreviewsStatus::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PreviewsStatus::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string description;
  bool enabled;
  std::string htmlId;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  PreviewsFlag {
 public:
  using DataView = PreviewsFlagDataView;
  using Data_ = internal::PreviewsFlag_Data;

  template <typename... Args>
  static PreviewsFlagPtr New(Args&&... args) {
    return PreviewsFlagPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PreviewsFlagPtr From(const U& u) {
    return mojo::TypeConverter<PreviewsFlagPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PreviewsFlag>::Convert(*this);
  }


  PreviewsFlag();

  PreviewsFlag(
      const std::string& description,
      const std::string& link,
      const std::string& value,
      const std::string& htmlId);

  ~PreviewsFlag();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PreviewsFlagPtr>
  PreviewsFlagPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PreviewsFlag>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PreviewsFlag::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PreviewsFlag::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PreviewsFlag_UnserializedMessageContext<
            UserType, PreviewsFlag::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PreviewsFlag::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PreviewsFlag::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PreviewsFlag_UnserializedMessageContext<
            UserType, PreviewsFlag::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PreviewsFlag::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string description;
  std::string link;
  std::string value;
  std::string htmlId;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};







class  MessageLog {
 public:
  using DataView = MessageLogDataView;
  using Data_ = internal::MessageLog_Data;

  template <typename... Args>
  static MessageLogPtr New(Args&&... args) {
    return MessageLogPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MessageLogPtr From(const U& u) {
    return mojo::TypeConverter<MessageLogPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MessageLog>::Convert(*this);
  }


  MessageLog();

  MessageLog(
      const std::string& type,
      const std::string& description,
      const GURL& url,
      int64_t time,
      uint64_t page_id);

  ~MessageLog();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MessageLogPtr>
  MessageLogPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MessageLog>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MessageLog::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MessageLog::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MessageLog_UnserializedMessageContext<
            UserType, MessageLog::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<MessageLog::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return MessageLog::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MessageLog_UnserializedMessageContext<
            UserType, MessageLog::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MessageLog::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string type;
  std::string description;
  GURL url;
  int64_t time;
  uint64_t page_id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
PreviewsStatusPtr PreviewsStatus::Clone() const {
  return New(
      mojo::Clone(description),
      mojo::Clone(enabled),
      mojo::Clone(htmlId)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PreviewsStatus>::value>::type*>
bool PreviewsStatus::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->description, other_struct.description))
    return false;
  if (!mojo::Equals(this->enabled, other_struct.enabled))
    return false;
  if (!mojo::Equals(this->htmlId, other_struct.htmlId))
    return false;
  return true;
}
template <typename StructPtrType>
PreviewsFlagPtr PreviewsFlag::Clone() const {
  return New(
      mojo::Clone(description),
      mojo::Clone(link),
      mojo::Clone(value),
      mojo::Clone(htmlId)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PreviewsFlag>::value>::type*>
bool PreviewsFlag::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->description, other_struct.description))
    return false;
  if (!mojo::Equals(this->link, other_struct.link))
    return false;
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  if (!mojo::Equals(this->htmlId, other_struct.htmlId))
    return false;
  return true;
}
template <typename StructPtrType>
MessageLogPtr MessageLog::Clone() const {
  return New(
      mojo::Clone(type),
      mojo::Clone(description),
      mojo::Clone(url),
      mojo::Clone(time),
      mojo::Clone(page_id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MessageLog>::value>::type*>
bool MessageLog::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->description, other_struct.description))
    return false;
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->time, other_struct.time))
    return false;
  if (!mojo::Equals(this->page_id, other_struct.page_id))
    return false;
  return true;
}


}  // namespace mojom

namespace mojo {


template <>
struct  StructTraits<::mojom::PreviewsStatus::DataView,
                                         ::mojom::PreviewsStatusPtr> {
  static bool IsNull(const ::mojom::PreviewsStatusPtr& input) { return !input; }
  static void SetToNull(::mojom::PreviewsStatusPtr* output) { output->reset(); }

  static const decltype(::mojom::PreviewsStatus::description)& description(
      const ::mojom::PreviewsStatusPtr& input) {
    return input->description;
  }

  static decltype(::mojom::PreviewsStatus::enabled) enabled(
      const ::mojom::PreviewsStatusPtr& input) {
    return input->enabled;
  }

  static const decltype(::mojom::PreviewsStatus::htmlId)& htmlId(
      const ::mojom::PreviewsStatusPtr& input) {
    return input->htmlId;
  }

  static bool Read(::mojom::PreviewsStatus::DataView input, ::mojom::PreviewsStatusPtr* output);
};


template <>
struct  StructTraits<::mojom::PreviewsFlag::DataView,
                                         ::mojom::PreviewsFlagPtr> {
  static bool IsNull(const ::mojom::PreviewsFlagPtr& input) { return !input; }
  static void SetToNull(::mojom::PreviewsFlagPtr* output) { output->reset(); }

  static const decltype(::mojom::PreviewsFlag::description)& description(
      const ::mojom::PreviewsFlagPtr& input) {
    return input->description;
  }

  static const decltype(::mojom::PreviewsFlag::link)& link(
      const ::mojom::PreviewsFlagPtr& input) {
    return input->link;
  }

  static const decltype(::mojom::PreviewsFlag::value)& value(
      const ::mojom::PreviewsFlagPtr& input) {
    return input->value;
  }

  static const decltype(::mojom::PreviewsFlag::htmlId)& htmlId(
      const ::mojom::PreviewsFlagPtr& input) {
    return input->htmlId;
  }

  static bool Read(::mojom::PreviewsFlag::DataView input, ::mojom::PreviewsFlagPtr* output);
};


template <>
struct  StructTraits<::mojom::MessageLog::DataView,
                                         ::mojom::MessageLogPtr> {
  static bool IsNull(const ::mojom::MessageLogPtr& input) { return !input; }
  static void SetToNull(::mojom::MessageLogPtr* output) { output->reset(); }

  static const decltype(::mojom::MessageLog::type)& type(
      const ::mojom::MessageLogPtr& input) {
    return input->type;
  }

  static const decltype(::mojom::MessageLog::description)& description(
      const ::mojom::MessageLogPtr& input) {
    return input->description;
  }

  static const decltype(::mojom::MessageLog::url)& url(
      const ::mojom::MessageLogPtr& input) {
    return input->url;
  }

  static decltype(::mojom::MessageLog::time) time(
      const ::mojom::MessageLogPtr& input) {
    return input->time;
  }

  static decltype(::mojom::MessageLog::page_id) page_id(
      const ::mojom::MessageLogPtr& input) {
    return input->page_id;
  }

  static bool Read(::mojom::MessageLog::DataView input, ::mojom::MessageLogPtr* output);
};

}  // namespace mojo

#endif  // CHROME_BROWSER_UI_WEBUI_INTERVENTIONS_INTERNALS_INTERVENTIONS_INTERNALS_MOJOM_H_