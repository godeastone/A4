// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SPELLCHECK_COMMON_SPELLCHECK_MOJOM_H_
#define COMPONENTS_SPELLCHECK_COMMON_SPELLCHECK_MOJOM_H_

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
#include "components/spellcheck/common/spellcheck.mojom-shared.h"
#include "mojo/public/mojom/base/file.mojom.h"
#include "mojo/public/mojom/base/string16.mojom.h"
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
#include "components/spellcheck/common/spellcheck_result.h"


namespace spellcheck {
namespace mojom {
class SpellChecker;
using SpellCheckerPtr = mojo::InterfacePtr<SpellChecker>;
using SpellCheckerPtrInfo = mojo::InterfacePtrInfo<SpellChecker>;
using ThreadSafeSpellCheckerPtr =
    mojo::ThreadSafeInterfacePtr<SpellChecker>;
using SpellCheckerRequest = mojo::InterfaceRequest<SpellChecker>;
using SpellCheckerAssociatedPtr =
    mojo::AssociatedInterfacePtr<SpellChecker>;
using ThreadSafeSpellCheckerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SpellChecker>;
using SpellCheckerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SpellChecker>;
using SpellCheckerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SpellChecker>;

class SpellCheckHost;
using SpellCheckHostPtr = mojo::InterfacePtr<SpellCheckHost>;
using SpellCheckHostPtrInfo = mojo::InterfacePtrInfo<SpellCheckHost>;
using ThreadSafeSpellCheckHostPtr =
    mojo::ThreadSafeInterfacePtr<SpellCheckHost>;
using SpellCheckHostRequest = mojo::InterfaceRequest<SpellCheckHost>;
using SpellCheckHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<SpellCheckHost>;
using ThreadSafeSpellCheckHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SpellCheckHost>;
using SpellCheckHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SpellCheckHost>;
using SpellCheckHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SpellCheckHost>;

class SpellCheckBDictLanguage;
using SpellCheckBDictLanguagePtr = mojo::StructPtr<SpellCheckBDictLanguage>;

class SpellCheckResult;
using SpellCheckResultPtr = mojo::StructPtr<SpellCheckResult>;


class SpellCheckerProxy;

template <typename ImplRefTraits>
class SpellCheckerStub;

class SpellCheckerRequestValidator;

class  SpellChecker
    : public SpellCheckerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = SpellCheckerProxy;

  template <typename ImplRefTraits>
  using Stub_ = SpellCheckerStub<ImplRefTraits>;

  using RequestValidator_ = SpellCheckerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kInitializeMinVersion = 0,
    kCustomDictionaryChangedMinVersion = 0,
  };
  virtual ~SpellChecker() {}

  virtual void Initialize(std::vector<SpellCheckBDictLanguagePtr> dictionaries, const std::vector<std::string>& custom_words, bool enable) = 0;

  virtual void CustomDictionaryChanged(const std::vector<std::string>& words_added, const std::vector<std::string>& words_removed) = 0;
};
class  SpellCheckerInterceptorForTesting : public SpellChecker {
  virtual SpellChecker* GetForwardingInterface() = 0;
  void Initialize(std::vector<SpellCheckBDictLanguagePtr> dictionaries, const std::vector<std::string>& custom_words, bool enable) override;
  void CustomDictionaryChanged(const std::vector<std::string>& words_added, const std::vector<std::string>& words_removed) override;
};
class  SpellCheckerAsyncWaiter {
 public:
  explicit SpellCheckerAsyncWaiter(SpellChecker* proxy);
  ~SpellCheckerAsyncWaiter();

 private:
  SpellChecker* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SpellCheckerAsyncWaiter);
};

class SpellCheckHostProxy;

template <typename ImplRefTraits>
class SpellCheckHostStub;

class SpellCheckHostRequestValidator;
class SpellCheckHostResponseValidator;

class  SpellCheckHost
    : public SpellCheckHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = SpellCheckHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = SpellCheckHostStub<ImplRefTraits>;

  using RequestValidator_ = SpellCheckHostRequestValidator;
  using ResponseValidator_ = SpellCheckHostResponseValidator;
  enum MethodMinVersions : uint32_t {
    kRequestDictionaryMinVersion = 0,
    kNotifyCheckedMinVersion = 0,
    kCallSpellingServiceMinVersion = 0,
  };
  virtual ~SpellCheckHost() {}

  virtual void RequestDictionary() = 0;

  virtual void NotifyChecked(const base::string16& word, bool misspelled) = 0;


  using CallSpellingServiceCallback = base::OnceCallback<void(bool, const std::vector<::SpellCheckResult>&)>;
  virtual void CallSpellingService(const base::string16& text, CallSpellingServiceCallback callback) = 0;
};
class  SpellCheckHostInterceptorForTesting : public SpellCheckHost {
  virtual SpellCheckHost* GetForwardingInterface() = 0;
  void RequestDictionary() override;
  void NotifyChecked(const base::string16& word, bool misspelled) override;
  void CallSpellingService(const base::string16& text, CallSpellingServiceCallback callback) override;
};
class  SpellCheckHostAsyncWaiter {
 public:
  explicit SpellCheckHostAsyncWaiter(SpellCheckHost* proxy);
  ~SpellCheckHostAsyncWaiter();
  void CallSpellingService(
      const base::string16& text, bool* out_success, std::vector<::SpellCheckResult>* out_results);

 private:
  SpellCheckHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SpellCheckHostAsyncWaiter);
};

class  SpellCheckerProxy
    : public SpellChecker {
 public:
  explicit SpellCheckerProxy(mojo::MessageReceiverWithResponder* receiver);
  void Initialize(std::vector<SpellCheckBDictLanguagePtr> dictionaries, const std::vector<std::string>& custom_words, bool enable) final;
  void CustomDictionaryChanged(const std::vector<std::string>& words_added, const std::vector<std::string>& words_removed) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  SpellCheckHostProxy
    : public SpellCheckHost {
 public:
  explicit SpellCheckHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void RequestDictionary() final;
  void NotifyChecked(const base::string16& word, bool misspelled) final;
  void CallSpellingService(const base::string16& text, CallSpellingServiceCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  SpellCheckerStubDispatch {
 public:
  static bool Accept(SpellChecker* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SpellChecker* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SpellChecker>>
class SpellCheckerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SpellCheckerStub() {}
  ~SpellCheckerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SpellCheckerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SpellCheckerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  SpellCheckHostStubDispatch {
 public:
  static bool Accept(SpellCheckHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SpellCheckHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SpellCheckHost>>
class SpellCheckHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SpellCheckHostStub() {}
  ~SpellCheckHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SpellCheckHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SpellCheckHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  SpellCheckerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  SpellCheckHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  SpellCheckHostResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};






class  SpellCheckBDictLanguage {
 public:
  using DataView = SpellCheckBDictLanguageDataView;
  using Data_ = internal::SpellCheckBDictLanguage_Data;

  template <typename... Args>
  static SpellCheckBDictLanguagePtr New(Args&&... args) {
    return SpellCheckBDictLanguagePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SpellCheckBDictLanguagePtr From(const U& u) {
    return mojo::TypeConverter<SpellCheckBDictLanguagePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SpellCheckBDictLanguage>::Convert(*this);
  }


  SpellCheckBDictLanguage();

  SpellCheckBDictLanguage(
      base::File file,
      const std::string& language);

  ~SpellCheckBDictLanguage();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SpellCheckBDictLanguagePtr>
  SpellCheckBDictLanguagePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SpellCheckBDictLanguage>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SpellCheckBDictLanguage::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SpellCheckBDictLanguage::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SpellCheckBDictLanguage_UnserializedMessageContext<
            UserType, SpellCheckBDictLanguage::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SpellCheckBDictLanguage::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SpellCheckBDictLanguage::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SpellCheckBDictLanguage_UnserializedMessageContext<
            UserType, SpellCheckBDictLanguage::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SpellCheckBDictLanguage::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  base::File file;
  std::string language;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(SpellCheckBDictLanguage);
};


class  SpellCheckResult {
 public:
  using DataView = SpellCheckResultDataView;
  using Data_ = internal::SpellCheckResult_Data;

  template <typename... Args>
  static SpellCheckResultPtr New(Args&&... args) {
    return SpellCheckResultPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SpellCheckResultPtr From(const U& u) {
    return mojo::TypeConverter<SpellCheckResultPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SpellCheckResult>::Convert(*this);
  }


  SpellCheckResult();

  SpellCheckResult(
      ::SpellCheckResult::Decoration decoration,
      int32_t location,
      int32_t length,
      const std::vector<base::string16>& replacements);

  ~SpellCheckResult();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SpellCheckResultPtr>
  SpellCheckResultPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SpellCheckResult>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SpellCheckResult::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SpellCheckResult::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SpellCheckResult_UnserializedMessageContext<
            UserType, SpellCheckResult::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SpellCheckResult::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SpellCheckResult::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SpellCheckResult_UnserializedMessageContext<
            UserType, SpellCheckResult::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SpellCheckResult::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  ::SpellCheckResult::Decoration decoration;
  int32_t location;
  int32_t length;
  std::vector<base::string16> replacements;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
SpellCheckBDictLanguagePtr SpellCheckBDictLanguage::Clone() const {
  return New(
      mojo::Clone(file),
      mojo::Clone(language)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SpellCheckBDictLanguage>::value>::type*>
bool SpellCheckBDictLanguage::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->file, other_struct.file))
    return false;
  if (!mojo::Equals(this->language, other_struct.language))
    return false;
  return true;
}
template <typename StructPtrType>
SpellCheckResultPtr SpellCheckResult::Clone() const {
  return New(
      mojo::Clone(decoration),
      mojo::Clone(location),
      mojo::Clone(length),
      mojo::Clone(replacements)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SpellCheckResult>::value>::type*>
bool SpellCheckResult::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->decoration, other_struct.decoration))
    return false;
  if (!mojo::Equals(this->location, other_struct.location))
    return false;
  if (!mojo::Equals(this->length, other_struct.length))
    return false;
  if (!mojo::Equals(this->replacements, other_struct.replacements))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace spellcheck

namespace mojo {


template <>
struct  StructTraits<::spellcheck::mojom::SpellCheckBDictLanguage::DataView,
                                         ::spellcheck::mojom::SpellCheckBDictLanguagePtr> {
  static bool IsNull(const ::spellcheck::mojom::SpellCheckBDictLanguagePtr& input) { return !input; }
  static void SetToNull(::spellcheck::mojom::SpellCheckBDictLanguagePtr* output) { output->reset(); }

  static  decltype(::spellcheck::mojom::SpellCheckBDictLanguage::file)& file(
       ::spellcheck::mojom::SpellCheckBDictLanguagePtr& input) {
    return input->file;
  }

  static const decltype(::spellcheck::mojom::SpellCheckBDictLanguage::language)& language(
      const ::spellcheck::mojom::SpellCheckBDictLanguagePtr& input) {
    return input->language;
  }

  static bool Read(::spellcheck::mojom::SpellCheckBDictLanguage::DataView input, ::spellcheck::mojom::SpellCheckBDictLanguagePtr* output);
};


template <>
struct  StructTraits<::spellcheck::mojom::SpellCheckResult::DataView,
                                         ::spellcheck::mojom::SpellCheckResultPtr> {
  static bool IsNull(const ::spellcheck::mojom::SpellCheckResultPtr& input) { return !input; }
  static void SetToNull(::spellcheck::mojom::SpellCheckResultPtr* output) { output->reset(); }

  static decltype(::spellcheck::mojom::SpellCheckResult::decoration) decoration(
      const ::spellcheck::mojom::SpellCheckResultPtr& input) {
    return input->decoration;
  }

  static decltype(::spellcheck::mojom::SpellCheckResult::location) location(
      const ::spellcheck::mojom::SpellCheckResultPtr& input) {
    return input->location;
  }

  static decltype(::spellcheck::mojom::SpellCheckResult::length) length(
      const ::spellcheck::mojom::SpellCheckResultPtr& input) {
    return input->length;
  }

  static const decltype(::spellcheck::mojom::SpellCheckResult::replacements)& replacements(
      const ::spellcheck::mojom::SpellCheckResultPtr& input) {
    return input->replacements;
  }

  static bool Read(::spellcheck::mojom::SpellCheckResult::DataView input, ::spellcheck::mojom::SpellCheckResultPtr* output);
};

}  // namespace mojo

#endif  // COMPONENTS_SPELLCHECK_COMMON_SPELLCHECK_MOJOM_H_