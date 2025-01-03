// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_OMNIBOX_OMNIBOX_MOJOM_H_
#define CHROME_BROWSER_UI_WEBUI_OMNIBOX_OMNIBOX_MOJOM_H_

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
#include "chrome/browser/ui/webui/omnibox/omnibox.mojom-shared.h"
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
class OmniboxPageHandler;
using OmniboxPageHandlerPtr = mojo::InterfacePtr<OmniboxPageHandler>;
using OmniboxPageHandlerPtrInfo = mojo::InterfacePtrInfo<OmniboxPageHandler>;
using ThreadSafeOmniboxPageHandlerPtr =
    mojo::ThreadSafeInterfacePtr<OmniboxPageHandler>;
using OmniboxPageHandlerRequest = mojo::InterfaceRequest<OmniboxPageHandler>;
using OmniboxPageHandlerAssociatedPtr =
    mojo::AssociatedInterfacePtr<OmniboxPageHandler>;
using ThreadSafeOmniboxPageHandlerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<OmniboxPageHandler>;
using OmniboxPageHandlerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<OmniboxPageHandler>;
using OmniboxPageHandlerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<OmniboxPageHandler>;

class OmniboxPage;
using OmniboxPagePtr = mojo::InterfacePtr<OmniboxPage>;
using OmniboxPagePtrInfo = mojo::InterfacePtrInfo<OmniboxPage>;
using ThreadSafeOmniboxPagePtr =
    mojo::ThreadSafeInterfacePtr<OmniboxPage>;
using OmniboxPageRequest = mojo::InterfaceRequest<OmniboxPage>;
using OmniboxPageAssociatedPtr =
    mojo::AssociatedInterfacePtr<OmniboxPage>;
using ThreadSafeOmniboxPageAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<OmniboxPage>;
using OmniboxPageAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<OmniboxPage>;
using OmniboxPageAssociatedRequest =
    mojo::AssociatedInterfaceRequest<OmniboxPage>;

class AutocompleteAdditionalInfo;
using AutocompleteAdditionalInfoPtr = mojo::InlinedStructPtr<AutocompleteAdditionalInfo>;

class AutocompleteMatch;
using AutocompleteMatchPtr = mojo::StructPtr<AutocompleteMatch>;

class AutocompleteResultsForProvider;
using AutocompleteResultsForProviderPtr = mojo::StructPtr<AutocompleteResultsForProvider>;

class OmniboxResult;
using OmniboxResultPtr = mojo::StructPtr<OmniboxResult>;


class OmniboxPageHandlerProxy;

template <typename ImplRefTraits>
class OmniboxPageHandlerStub;

class OmniboxPageHandlerRequestValidator;

class  OmniboxPageHandler
    : public OmniboxPageHandlerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = OmniboxPageHandlerProxy;

  template <typename ImplRefTraits>
  using Stub_ = OmniboxPageHandlerStub<ImplRefTraits>;

  using RequestValidator_ = OmniboxPageHandlerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetClientPageMinVersion = 0,
    kStartOmniboxQueryMinVersion = 0,
  };
  virtual ~OmniboxPageHandler() {}

  virtual void SetClientPage(OmniboxPagePtr page) = 0;

  virtual void StartOmniboxQuery(const std::string& input_string, int32_t cursor_position, bool prevent_inline_autocomplete, bool prefer_keyword, int32_t page_classification) = 0;
};
class  OmniboxPageHandlerInterceptorForTesting : public OmniboxPageHandler {
  virtual OmniboxPageHandler* GetForwardingInterface() = 0;
  void SetClientPage(OmniboxPagePtr page) override;
  void StartOmniboxQuery(const std::string& input_string, int32_t cursor_position, bool prevent_inline_autocomplete, bool prefer_keyword, int32_t page_classification) override;
};
class  OmniboxPageHandlerAsyncWaiter {
 public:
  explicit OmniboxPageHandlerAsyncWaiter(OmniboxPageHandler* proxy);
  ~OmniboxPageHandlerAsyncWaiter();

 private:
  OmniboxPageHandler* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(OmniboxPageHandlerAsyncWaiter);
};

class OmniboxPageProxy;

template <typename ImplRefTraits>
class OmniboxPageStub;

class OmniboxPageRequestValidator;

class  OmniboxPage
    : public OmniboxPageInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = OmniboxPageProxy;

  template <typename ImplRefTraits>
  using Stub_ = OmniboxPageStub<ImplRefTraits>;

  using RequestValidator_ = OmniboxPageRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kHandleNewAutocompleteResultMinVersion = 0,
  };
  virtual ~OmniboxPage() {}

  virtual void HandleNewAutocompleteResult(OmniboxResultPtr result) = 0;
};
class  OmniboxPageInterceptorForTesting : public OmniboxPage {
  virtual OmniboxPage* GetForwardingInterface() = 0;
  void HandleNewAutocompleteResult(OmniboxResultPtr result) override;
};
class  OmniboxPageAsyncWaiter {
 public:
  explicit OmniboxPageAsyncWaiter(OmniboxPage* proxy);
  ~OmniboxPageAsyncWaiter();

 private:
  OmniboxPage* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(OmniboxPageAsyncWaiter);
};

class  OmniboxPageHandlerProxy
    : public OmniboxPageHandler {
 public:
  explicit OmniboxPageHandlerProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetClientPage(OmniboxPagePtr page) final;
  void StartOmniboxQuery(const std::string& input_string, int32_t cursor_position, bool prevent_inline_autocomplete, bool prefer_keyword, int32_t page_classification) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  OmniboxPageProxy
    : public OmniboxPage {
 public:
  explicit OmniboxPageProxy(mojo::MessageReceiverWithResponder* receiver);
  void HandleNewAutocompleteResult(OmniboxResultPtr result) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  OmniboxPageHandlerStubDispatch {
 public:
  static bool Accept(OmniboxPageHandler* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      OmniboxPageHandler* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<OmniboxPageHandler>>
class OmniboxPageHandlerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  OmniboxPageHandlerStub() {}
  ~OmniboxPageHandlerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return OmniboxPageHandlerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return OmniboxPageHandlerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  OmniboxPageStubDispatch {
 public:
  static bool Accept(OmniboxPage* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      OmniboxPage* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<OmniboxPage>>
class OmniboxPageStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  OmniboxPageStub() {}
  ~OmniboxPageStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return OmniboxPageStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return OmniboxPageStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  OmniboxPageHandlerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  OmniboxPageRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};


class  AutocompleteAdditionalInfo {
 public:
  using DataView = AutocompleteAdditionalInfoDataView;
  using Data_ = internal::AutocompleteAdditionalInfo_Data;

  template <typename... Args>
  static AutocompleteAdditionalInfoPtr New(Args&&... args) {
    return AutocompleteAdditionalInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static AutocompleteAdditionalInfoPtr From(const U& u) {
    return mojo::TypeConverter<AutocompleteAdditionalInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AutocompleteAdditionalInfo>::Convert(*this);
  }


  AutocompleteAdditionalInfo();

  AutocompleteAdditionalInfo(
      const std::string& key,
      const std::string& value);

  ~AutocompleteAdditionalInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AutocompleteAdditionalInfoPtr>
  AutocompleteAdditionalInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AutocompleteAdditionalInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        AutocompleteAdditionalInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        AutocompleteAdditionalInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::AutocompleteAdditionalInfo_UnserializedMessageContext<
            UserType, AutocompleteAdditionalInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<AutocompleteAdditionalInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return AutocompleteAdditionalInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::AutocompleteAdditionalInfo_UnserializedMessageContext<
            UserType, AutocompleteAdditionalInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<AutocompleteAdditionalInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string key;
  std::string value;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};








class  AutocompleteMatch {
 public:
  using DataView = AutocompleteMatchDataView;
  using Data_ = internal::AutocompleteMatch_Data;

  template <typename... Args>
  static AutocompleteMatchPtr New(Args&&... args) {
    return AutocompleteMatchPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static AutocompleteMatchPtr From(const U& u) {
    return mojo::TypeConverter<AutocompleteMatchPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AutocompleteMatch>::Convert(*this);
  }


  AutocompleteMatch();

  AutocompleteMatch(
      const base::Optional<std::string>& provider_name,
      bool provider_done,
      int32_t relevance,
      bool deletable,
      const std::string& fill_into_edit,
      const std::string& inline_autocompletion,
      const std::string& destination_url,
      const std::string& contents,
      const std::string& description,
      int32_t transition,
      bool allowed_to_be_default_match,
      const std::string& type,
      bool has_tab_match,
      const base::Optional<std::string>& associated_keyword,
      const std::string& keyword,
      bool starred,
      int32_t duplicates,
      bool from_previous,
      std::vector<AutocompleteAdditionalInfoPtr> additional_info);

  ~AutocompleteMatch();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AutocompleteMatchPtr>
  AutocompleteMatchPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AutocompleteMatch>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        AutocompleteMatch::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        AutocompleteMatch::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::AutocompleteMatch_UnserializedMessageContext<
            UserType, AutocompleteMatch::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<AutocompleteMatch::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return AutocompleteMatch::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::AutocompleteMatch_UnserializedMessageContext<
            UserType, AutocompleteMatch::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<AutocompleteMatch::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  base::Optional<std::string> provider_name;
  bool provider_done;
  int32_t relevance;
  bool deletable;
  std::string fill_into_edit;
  std::string inline_autocompletion;
  std::string destination_url;
  std::string contents;
  std::string description;
  int32_t transition;
  bool allowed_to_be_default_match;
  std::string type;
  bool has_tab_match;
  base::Optional<std::string> associated_keyword;
  std::string keyword;
  bool starred;
  int32_t duplicates;
  bool from_previous;
  std::vector<AutocompleteAdditionalInfoPtr> additional_info;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(AutocompleteMatch);
};


class  AutocompleteResultsForProvider {
 public:
  using DataView = AutocompleteResultsForProviderDataView;
  using Data_ = internal::AutocompleteResultsForProvider_Data;

  template <typename... Args>
  static AutocompleteResultsForProviderPtr New(Args&&... args) {
    return AutocompleteResultsForProviderPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static AutocompleteResultsForProviderPtr From(const U& u) {
    return mojo::TypeConverter<AutocompleteResultsForProviderPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AutocompleteResultsForProvider>::Convert(*this);
  }


  AutocompleteResultsForProvider();

  AutocompleteResultsForProvider(
      const std::string& provider_name,
      std::vector<AutocompleteMatchPtr> results);

  ~AutocompleteResultsForProvider();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AutocompleteResultsForProviderPtr>
  AutocompleteResultsForProviderPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AutocompleteResultsForProvider>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        AutocompleteResultsForProvider::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        AutocompleteResultsForProvider::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::AutocompleteResultsForProvider_UnserializedMessageContext<
            UserType, AutocompleteResultsForProvider::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<AutocompleteResultsForProvider::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return AutocompleteResultsForProvider::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::AutocompleteResultsForProvider_UnserializedMessageContext<
            UserType, AutocompleteResultsForProvider::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<AutocompleteResultsForProvider::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string provider_name;
  std::vector<AutocompleteMatchPtr> results;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(AutocompleteResultsForProvider);
};


class  OmniboxResult {
 public:
  using DataView = OmniboxResultDataView;
  using Data_ = internal::OmniboxResult_Data;

  template <typename... Args>
  static OmniboxResultPtr New(Args&&... args) {
    return OmniboxResultPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static OmniboxResultPtr From(const U& u) {
    return mojo::TypeConverter<OmniboxResultPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, OmniboxResult>::Convert(*this);
  }


  OmniboxResult();

  OmniboxResult(
      bool done,
      int32_t time_since_omnibox_started_ms,
      const std::string& host,
      bool is_typed_host,
      std::vector<AutocompleteMatchPtr> combined_results,
      std::vector<AutocompleteResultsForProviderPtr> results_by_provider);

  ~OmniboxResult();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = OmniboxResultPtr>
  OmniboxResultPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, OmniboxResult>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        OmniboxResult::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        OmniboxResult::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::OmniboxResult_UnserializedMessageContext<
            UserType, OmniboxResult::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<OmniboxResult::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return OmniboxResult::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::OmniboxResult_UnserializedMessageContext<
            UserType, OmniboxResult::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<OmniboxResult::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  bool done;
  int32_t time_since_omnibox_started_ms;
  std::string host;
  bool is_typed_host;
  std::vector<AutocompleteMatchPtr> combined_results;
  std::vector<AutocompleteResultsForProviderPtr> results_by_provider;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(OmniboxResult);
};

template <typename StructPtrType>
AutocompleteAdditionalInfoPtr AutocompleteAdditionalInfo::Clone() const {
  return New(
      mojo::Clone(key),
      mojo::Clone(value)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AutocompleteAdditionalInfo>::value>::type*>
bool AutocompleteAdditionalInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->key, other_struct.key))
    return false;
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  return true;
}
template <typename StructPtrType>
AutocompleteMatchPtr AutocompleteMatch::Clone() const {
  return New(
      mojo::Clone(provider_name),
      mojo::Clone(provider_done),
      mojo::Clone(relevance),
      mojo::Clone(deletable),
      mojo::Clone(fill_into_edit),
      mojo::Clone(inline_autocompletion),
      mojo::Clone(destination_url),
      mojo::Clone(contents),
      mojo::Clone(description),
      mojo::Clone(transition),
      mojo::Clone(allowed_to_be_default_match),
      mojo::Clone(type),
      mojo::Clone(has_tab_match),
      mojo::Clone(associated_keyword),
      mojo::Clone(keyword),
      mojo::Clone(starred),
      mojo::Clone(duplicates),
      mojo::Clone(from_previous),
      mojo::Clone(additional_info)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AutocompleteMatch>::value>::type*>
bool AutocompleteMatch::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->provider_name, other_struct.provider_name))
    return false;
  if (!mojo::Equals(this->provider_done, other_struct.provider_done))
    return false;
  if (!mojo::Equals(this->relevance, other_struct.relevance))
    return false;
  if (!mojo::Equals(this->deletable, other_struct.deletable))
    return false;
  if (!mojo::Equals(this->fill_into_edit, other_struct.fill_into_edit))
    return false;
  if (!mojo::Equals(this->inline_autocompletion, other_struct.inline_autocompletion))
    return false;
  if (!mojo::Equals(this->destination_url, other_struct.destination_url))
    return false;
  if (!mojo::Equals(this->contents, other_struct.contents))
    return false;
  if (!mojo::Equals(this->description, other_struct.description))
    return false;
  if (!mojo::Equals(this->transition, other_struct.transition))
    return false;
  if (!mojo::Equals(this->allowed_to_be_default_match, other_struct.allowed_to_be_default_match))
    return false;
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->has_tab_match, other_struct.has_tab_match))
    return false;
  if (!mojo::Equals(this->associated_keyword, other_struct.associated_keyword))
    return false;
  if (!mojo::Equals(this->keyword, other_struct.keyword))
    return false;
  if (!mojo::Equals(this->starred, other_struct.starred))
    return false;
  if (!mojo::Equals(this->duplicates, other_struct.duplicates))
    return false;
  if (!mojo::Equals(this->from_previous, other_struct.from_previous))
    return false;
  if (!mojo::Equals(this->additional_info, other_struct.additional_info))
    return false;
  return true;
}
template <typename StructPtrType>
AutocompleteResultsForProviderPtr AutocompleteResultsForProvider::Clone() const {
  return New(
      mojo::Clone(provider_name),
      mojo::Clone(results)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AutocompleteResultsForProvider>::value>::type*>
bool AutocompleteResultsForProvider::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->provider_name, other_struct.provider_name))
    return false;
  if (!mojo::Equals(this->results, other_struct.results))
    return false;
  return true;
}
template <typename StructPtrType>
OmniboxResultPtr OmniboxResult::Clone() const {
  return New(
      mojo::Clone(done),
      mojo::Clone(time_since_omnibox_started_ms),
      mojo::Clone(host),
      mojo::Clone(is_typed_host),
      mojo::Clone(combined_results),
      mojo::Clone(results_by_provider)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, OmniboxResult>::value>::type*>
bool OmniboxResult::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->done, other_struct.done))
    return false;
  if (!mojo::Equals(this->time_since_omnibox_started_ms, other_struct.time_since_omnibox_started_ms))
    return false;
  if (!mojo::Equals(this->host, other_struct.host))
    return false;
  if (!mojo::Equals(this->is_typed_host, other_struct.is_typed_host))
    return false;
  if (!mojo::Equals(this->combined_results, other_struct.combined_results))
    return false;
  if (!mojo::Equals(this->results_by_provider, other_struct.results_by_provider))
    return false;
  return true;
}


}  // namespace mojom

namespace mojo {


template <>
struct  StructTraits<::mojom::AutocompleteAdditionalInfo::DataView,
                                         ::mojom::AutocompleteAdditionalInfoPtr> {
  static bool IsNull(const ::mojom::AutocompleteAdditionalInfoPtr& input) { return !input; }
  static void SetToNull(::mojom::AutocompleteAdditionalInfoPtr* output) { output->reset(); }

  static const decltype(::mojom::AutocompleteAdditionalInfo::key)& key(
      const ::mojom::AutocompleteAdditionalInfoPtr& input) {
    return input->key;
  }

  static const decltype(::mojom::AutocompleteAdditionalInfo::value)& value(
      const ::mojom::AutocompleteAdditionalInfoPtr& input) {
    return input->value;
  }

  static bool Read(::mojom::AutocompleteAdditionalInfo::DataView input, ::mojom::AutocompleteAdditionalInfoPtr* output);
};


template <>
struct  StructTraits<::mojom::AutocompleteMatch::DataView,
                                         ::mojom::AutocompleteMatchPtr> {
  static bool IsNull(const ::mojom::AutocompleteMatchPtr& input) { return !input; }
  static void SetToNull(::mojom::AutocompleteMatchPtr* output) { output->reset(); }

  static const decltype(::mojom::AutocompleteMatch::provider_name)& provider_name(
      const ::mojom::AutocompleteMatchPtr& input) {
    return input->provider_name;
  }

  static decltype(::mojom::AutocompleteMatch::provider_done) provider_done(
      const ::mojom::AutocompleteMatchPtr& input) {
    return input->provider_done;
  }

  static decltype(::mojom::AutocompleteMatch::relevance) relevance(
      const ::mojom::AutocompleteMatchPtr& input) {
    return input->relevance;
  }

  static decltype(::mojom::AutocompleteMatch::deletable) deletable(
      const ::mojom::AutocompleteMatchPtr& input) {
    return input->deletable;
  }

  static const decltype(::mojom::AutocompleteMatch::fill_into_edit)& fill_into_edit(
      const ::mojom::AutocompleteMatchPtr& input) {
    return input->fill_into_edit;
  }

  static const decltype(::mojom::AutocompleteMatch::inline_autocompletion)& inline_autocompletion(
      const ::mojom::AutocompleteMatchPtr& input) {
    return input->inline_autocompletion;
  }

  static const decltype(::mojom::AutocompleteMatch::destination_url)& destination_url(
      const ::mojom::AutocompleteMatchPtr& input) {
    return input->destination_url;
  }

  static const decltype(::mojom::AutocompleteMatch::contents)& contents(
      const ::mojom::AutocompleteMatchPtr& input) {
    return input->contents;
  }

  static const decltype(::mojom::AutocompleteMatch::description)& description(
      const ::mojom::AutocompleteMatchPtr& input) {
    return input->description;
  }

  static decltype(::mojom::AutocompleteMatch::transition) transition(
      const ::mojom::AutocompleteMatchPtr& input) {
    return input->transition;
  }

  static decltype(::mojom::AutocompleteMatch::allowed_to_be_default_match) allowed_to_be_default_match(
      const ::mojom::AutocompleteMatchPtr& input) {
    return input->allowed_to_be_default_match;
  }

  static const decltype(::mojom::AutocompleteMatch::type)& type(
      const ::mojom::AutocompleteMatchPtr& input) {
    return input->type;
  }

  static decltype(::mojom::AutocompleteMatch::has_tab_match) has_tab_match(
      const ::mojom::AutocompleteMatchPtr& input) {
    return input->has_tab_match;
  }

  static const decltype(::mojom::AutocompleteMatch::associated_keyword)& associated_keyword(
      const ::mojom::AutocompleteMatchPtr& input) {
    return input->associated_keyword;
  }

  static const decltype(::mojom::AutocompleteMatch::keyword)& keyword(
      const ::mojom::AutocompleteMatchPtr& input) {
    return input->keyword;
  }

  static decltype(::mojom::AutocompleteMatch::starred) starred(
      const ::mojom::AutocompleteMatchPtr& input) {
    return input->starred;
  }

  static decltype(::mojom::AutocompleteMatch::duplicates) duplicates(
      const ::mojom::AutocompleteMatchPtr& input) {
    return input->duplicates;
  }

  static decltype(::mojom::AutocompleteMatch::from_previous) from_previous(
      const ::mojom::AutocompleteMatchPtr& input) {
    return input->from_previous;
  }

  static const decltype(::mojom::AutocompleteMatch::additional_info)& additional_info(
      const ::mojom::AutocompleteMatchPtr& input) {
    return input->additional_info;
  }

  static bool Read(::mojom::AutocompleteMatch::DataView input, ::mojom::AutocompleteMatchPtr* output);
};


template <>
struct  StructTraits<::mojom::AutocompleteResultsForProvider::DataView,
                                         ::mojom::AutocompleteResultsForProviderPtr> {
  static bool IsNull(const ::mojom::AutocompleteResultsForProviderPtr& input) { return !input; }
  static void SetToNull(::mojom::AutocompleteResultsForProviderPtr* output) { output->reset(); }

  static const decltype(::mojom::AutocompleteResultsForProvider::provider_name)& provider_name(
      const ::mojom::AutocompleteResultsForProviderPtr& input) {
    return input->provider_name;
  }

  static const decltype(::mojom::AutocompleteResultsForProvider::results)& results(
      const ::mojom::AutocompleteResultsForProviderPtr& input) {
    return input->results;
  }

  static bool Read(::mojom::AutocompleteResultsForProvider::DataView input, ::mojom::AutocompleteResultsForProviderPtr* output);
};


template <>
struct  StructTraits<::mojom::OmniboxResult::DataView,
                                         ::mojom::OmniboxResultPtr> {
  static bool IsNull(const ::mojom::OmniboxResultPtr& input) { return !input; }
  static void SetToNull(::mojom::OmniboxResultPtr* output) { output->reset(); }

  static decltype(::mojom::OmniboxResult::done) done(
      const ::mojom::OmniboxResultPtr& input) {
    return input->done;
  }

  static decltype(::mojom::OmniboxResult::time_since_omnibox_started_ms) time_since_omnibox_started_ms(
      const ::mojom::OmniboxResultPtr& input) {
    return input->time_since_omnibox_started_ms;
  }

  static const decltype(::mojom::OmniboxResult::host)& host(
      const ::mojom::OmniboxResultPtr& input) {
    return input->host;
  }

  static decltype(::mojom::OmniboxResult::is_typed_host) is_typed_host(
      const ::mojom::OmniboxResultPtr& input) {
    return input->is_typed_host;
  }

  static const decltype(::mojom::OmniboxResult::combined_results)& combined_results(
      const ::mojom::OmniboxResultPtr& input) {
    return input->combined_results;
  }

  static const decltype(::mojom::OmniboxResult::results_by_provider)& results_by_provider(
      const ::mojom::OmniboxResultPtr& input) {
    return input->results_by_provider;
  }

  static bool Read(::mojom::OmniboxResult::DataView input, ::mojom::OmniboxResultPtr* output);
};

}  // namespace mojo

#endif  // CHROME_BROWSER_UI_WEBUI_OMNIBOX_OMNIBOX_MOJOM_H_