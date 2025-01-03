// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_TRANSLATE_CONTENT_COMMON_TRANSLATE_MOJOM_H_
#define COMPONENTS_TRANSLATE_CONTENT_COMMON_TRANSLATE_MOJOM_H_

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
#include "components/translate/content/common/translate.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "mojo/public/mojom/base/string16.mojom.h"
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
#include "components/translate/core/common/language_detection_details.h"
#include "components/translate/core/common/translate_errors.h"


namespace translate {
namespace mojom {
class Page;
using PagePtr = mojo::InterfacePtr<Page>;
using PagePtrInfo = mojo::InterfacePtrInfo<Page>;
using ThreadSafePagePtr =
    mojo::ThreadSafeInterfacePtr<Page>;
using PageRequest = mojo::InterfaceRequest<Page>;
using PageAssociatedPtr =
    mojo::AssociatedInterfacePtr<Page>;
using ThreadSafePageAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Page>;
using PageAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Page>;
using PageAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Page>;

class ContentTranslateDriver;
using ContentTranslateDriverPtr = mojo::InterfacePtr<ContentTranslateDriver>;
using ContentTranslateDriverPtrInfo = mojo::InterfacePtrInfo<ContentTranslateDriver>;
using ThreadSafeContentTranslateDriverPtr =
    mojo::ThreadSafeInterfacePtr<ContentTranslateDriver>;
using ContentTranslateDriverRequest = mojo::InterfaceRequest<ContentTranslateDriver>;
using ContentTranslateDriverAssociatedPtr =
    mojo::AssociatedInterfacePtr<ContentTranslateDriver>;
using ThreadSafeContentTranslateDriverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ContentTranslateDriver>;
using ContentTranslateDriverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ContentTranslateDriver>;
using ContentTranslateDriverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ContentTranslateDriver>;

class LanguageDetectionDetails;
using LanguageDetectionDetailsPtr = mojo::StructPtr<LanguageDetectionDetails>;


class PageProxy;

template <typename ImplRefTraits>
class PageStub;

class PageRequestValidator;
class PageResponseValidator;

class  Page
    : public PageInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = PageProxy;

  template <typename ImplRefTraits>
  using Stub_ = PageStub<ImplRefTraits>;

  using RequestValidator_ = PageRequestValidator;
  using ResponseValidator_ = PageResponseValidator;
  enum MethodMinVersions : uint32_t {
    kTranslateMinVersion = 0,
    kRevertTranslationMinVersion = 0,
  };
  virtual ~Page() {}


  using TranslateCallback = base::OnceCallback<void(bool, const std::string&, const std::string&, translate::TranslateErrors::Type)>;
  virtual void Translate(const std::string& translate_script, const std::string& source_lang, const std::string& target_lang, TranslateCallback callback) = 0;

  virtual void RevertTranslation() = 0;
};
class  PageInterceptorForTesting : public Page {
  virtual Page* GetForwardingInterface() = 0;
  void Translate(const std::string& translate_script, const std::string& source_lang, const std::string& target_lang, TranslateCallback callback) override;
  void RevertTranslation() override;
};
class  PageAsyncWaiter {
 public:
  explicit PageAsyncWaiter(Page* proxy);
  ~PageAsyncWaiter();
  void Translate(
      const std::string& translate_script, const std::string& source_lang, const std::string& target_lang, bool* out_cancelled, std::string* out_original_lang, std::string* out_translated_lang, translate::TranslateErrors::Type* out_error);

 private:
  Page* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PageAsyncWaiter);
};

class ContentTranslateDriverProxy;

template <typename ImplRefTraits>
class ContentTranslateDriverStub;

class ContentTranslateDriverRequestValidator;

class  ContentTranslateDriver
    : public ContentTranslateDriverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ContentTranslateDriverProxy;

  template <typename ImplRefTraits>
  using Stub_ = ContentTranslateDriverStub<ImplRefTraits>;

  using RequestValidator_ = ContentTranslateDriverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kRegisterPageMinVersion = 0,
  };
  virtual ~ContentTranslateDriver() {}

  virtual void RegisterPage(PagePtr page, const translate::LanguageDetectionDetails& details, bool page_needs_translation) = 0;
};
class  ContentTranslateDriverInterceptorForTesting : public ContentTranslateDriver {
  virtual ContentTranslateDriver* GetForwardingInterface() = 0;
  void RegisterPage(PagePtr page, const translate::LanguageDetectionDetails& details, bool page_needs_translation) override;
};
class  ContentTranslateDriverAsyncWaiter {
 public:
  explicit ContentTranslateDriverAsyncWaiter(ContentTranslateDriver* proxy);
  ~ContentTranslateDriverAsyncWaiter();

 private:
  ContentTranslateDriver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ContentTranslateDriverAsyncWaiter);
};

class  PageProxy
    : public Page {
 public:
  explicit PageProxy(mojo::MessageReceiverWithResponder* receiver);
  void Translate(const std::string& translate_script, const std::string& source_lang, const std::string& target_lang, TranslateCallback callback) final;
  void RevertTranslation() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  ContentTranslateDriverProxy
    : public ContentTranslateDriver {
 public:
  explicit ContentTranslateDriverProxy(mojo::MessageReceiverWithResponder* receiver);
  void RegisterPage(PagePtr page, const translate::LanguageDetectionDetails& details, bool page_needs_translation) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  PageStubDispatch {
 public:
  static bool Accept(Page* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Page* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Page>>
class PageStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PageStub() {}
  ~PageStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PageStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PageStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ContentTranslateDriverStubDispatch {
 public:
  static bool Accept(ContentTranslateDriver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ContentTranslateDriver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ContentTranslateDriver>>
class ContentTranslateDriverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ContentTranslateDriverStub() {}
  ~ContentTranslateDriverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ContentTranslateDriverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ContentTranslateDriverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  PageRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ContentTranslateDriverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  PageResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class  LanguageDetectionDetails {
 public:
  using DataView = LanguageDetectionDetailsDataView;
  using Data_ = internal::LanguageDetectionDetails_Data;

  template <typename... Args>
  static LanguageDetectionDetailsPtr New(Args&&... args) {
    return LanguageDetectionDetailsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static LanguageDetectionDetailsPtr From(const U& u) {
    return mojo::TypeConverter<LanguageDetectionDetailsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, LanguageDetectionDetails>::Convert(*this);
  }


  LanguageDetectionDetails();

  LanguageDetectionDetails(
      base::Time time,
      const GURL& url,
      const std::string& content_language,
      const std::string& cld_language,
      bool is_cld_reliable,
      bool has_notranslate,
      const std::string& html_root_language,
      const std::string& adopted_language,
      const base::string16& contents);

  ~LanguageDetectionDetails();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = LanguageDetectionDetailsPtr>
  LanguageDetectionDetailsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, LanguageDetectionDetails>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        LanguageDetectionDetails::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        LanguageDetectionDetails::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::LanguageDetectionDetails_UnserializedMessageContext<
            UserType, LanguageDetectionDetails::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<LanguageDetectionDetails::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return LanguageDetectionDetails::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::LanguageDetectionDetails_UnserializedMessageContext<
            UserType, LanguageDetectionDetails::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<LanguageDetectionDetails::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  base::Time time;
  GURL url;
  std::string content_language;
  std::string cld_language;
  bool is_cld_reliable;
  bool has_notranslate;
  std::string html_root_language;
  std::string adopted_language;
  base::string16 contents;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
LanguageDetectionDetailsPtr LanguageDetectionDetails::Clone() const {
  return New(
      mojo::Clone(time),
      mojo::Clone(url),
      mojo::Clone(content_language),
      mojo::Clone(cld_language),
      mojo::Clone(is_cld_reliable),
      mojo::Clone(has_notranslate),
      mojo::Clone(html_root_language),
      mojo::Clone(adopted_language),
      mojo::Clone(contents)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, LanguageDetectionDetails>::value>::type*>
bool LanguageDetectionDetails::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->time, other_struct.time))
    return false;
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->content_language, other_struct.content_language))
    return false;
  if (!mojo::Equals(this->cld_language, other_struct.cld_language))
    return false;
  if (!mojo::Equals(this->is_cld_reliable, other_struct.is_cld_reliable))
    return false;
  if (!mojo::Equals(this->has_notranslate, other_struct.has_notranslate))
    return false;
  if (!mojo::Equals(this->html_root_language, other_struct.html_root_language))
    return false;
  if (!mojo::Equals(this->adopted_language, other_struct.adopted_language))
    return false;
  if (!mojo::Equals(this->contents, other_struct.contents))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace translate

namespace mojo {


template <>
struct  StructTraits<::translate::mojom::LanguageDetectionDetails::DataView,
                                         ::translate::mojom::LanguageDetectionDetailsPtr> {
  static bool IsNull(const ::translate::mojom::LanguageDetectionDetailsPtr& input) { return !input; }
  static void SetToNull(::translate::mojom::LanguageDetectionDetailsPtr* output) { output->reset(); }

  static const decltype(::translate::mojom::LanguageDetectionDetails::time)& time(
      const ::translate::mojom::LanguageDetectionDetailsPtr& input) {
    return input->time;
  }

  static const decltype(::translate::mojom::LanguageDetectionDetails::url)& url(
      const ::translate::mojom::LanguageDetectionDetailsPtr& input) {
    return input->url;
  }

  static const decltype(::translate::mojom::LanguageDetectionDetails::content_language)& content_language(
      const ::translate::mojom::LanguageDetectionDetailsPtr& input) {
    return input->content_language;
  }

  static const decltype(::translate::mojom::LanguageDetectionDetails::cld_language)& cld_language(
      const ::translate::mojom::LanguageDetectionDetailsPtr& input) {
    return input->cld_language;
  }

  static decltype(::translate::mojom::LanguageDetectionDetails::is_cld_reliable) is_cld_reliable(
      const ::translate::mojom::LanguageDetectionDetailsPtr& input) {
    return input->is_cld_reliable;
  }

  static decltype(::translate::mojom::LanguageDetectionDetails::has_notranslate) has_notranslate(
      const ::translate::mojom::LanguageDetectionDetailsPtr& input) {
    return input->has_notranslate;
  }

  static const decltype(::translate::mojom::LanguageDetectionDetails::html_root_language)& html_root_language(
      const ::translate::mojom::LanguageDetectionDetailsPtr& input) {
    return input->html_root_language;
  }

  static const decltype(::translate::mojom::LanguageDetectionDetails::adopted_language)& adopted_language(
      const ::translate::mojom::LanguageDetectionDetailsPtr& input) {
    return input->adopted_language;
  }

  static const decltype(::translate::mojom::LanguageDetectionDetails::contents)& contents(
      const ::translate::mojom::LanguageDetectionDetailsPtr& input) {
    return input->contents;
  }

  static bool Read(::translate::mojom::LanguageDetectionDetails::DataView input, ::translate::mojom::LanguageDetectionDetailsPtr* output);
};

}  // namespace mojo

#endif  // COMPONENTS_TRANSLATE_CONTENT_COMMON_TRANSLATE_MOJOM_H_