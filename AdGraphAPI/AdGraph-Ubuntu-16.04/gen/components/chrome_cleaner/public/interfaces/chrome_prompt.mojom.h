// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_CHROME_CLEANER_PUBLIC_INTERFACES_CHROME_PROMPT_MOJOM_H_
#define COMPONENTS_CHROME_CLEANER_PUBLIC_INTERFACES_CHROME_PROMPT_MOJOM_H_

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
#include "components/chrome_cleaner/public/interfaces/chrome_prompt.mojom-shared.h"
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
#include "base/files/file_path.h"
#include "base/strings/string16.h"


namespace chrome_cleaner {
namespace mojom {
class ChromePrompt;
using ChromePromptPtr = mojo::InterfacePtr<ChromePrompt>;
using ChromePromptPtrInfo = mojo::InterfacePtrInfo<ChromePrompt>;
using ThreadSafeChromePromptPtr =
    mojo::ThreadSafeInterfacePtr<ChromePrompt>;
using ChromePromptRequest = mojo::InterfaceRequest<ChromePrompt>;
using ChromePromptAssociatedPtr =
    mojo::AssociatedInterfacePtr<ChromePrompt>;
using ThreadSafeChromePromptAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ChromePrompt>;
using ChromePromptAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ChromePrompt>;
using ChromePromptAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ChromePrompt>;

class FilePath;
using FilePathPtr = mojo::StructPtr<FilePath>;

class RegistryKey;
using RegistryKeyPtr = mojo::StructPtr<RegistryKey>;


class ChromePromptProxy;

template <typename ImplRefTraits>
class ChromePromptStub;

class ChromePromptRequestValidator;
class ChromePromptResponseValidator;

class  ChromePrompt
    : public ChromePromptInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 1;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ChromePromptProxy;

  template <typename ImplRefTraits>
  using Stub_ = ChromePromptStub<ImplRefTraits>;

  using RequestValidator_ = ChromePromptRequestValidator;
  using ResponseValidator_ = ChromePromptResponseValidator;
  enum MethodMinVersions : uint32_t {
    kPromptUserMinVersion = 0,
  };
  virtual ~ChromePrompt() {}


  using PromptUserCallback = base::OnceCallback<void(PromptAcceptance)>;
  virtual void PromptUser(const std::vector<base::FilePath>& files_to_delete, const base::Optional<std::vector<base::string16>>& registry_keys, PromptUserCallback callback) = 0;
};
class  ChromePromptInterceptorForTesting : public ChromePrompt {
  virtual ChromePrompt* GetForwardingInterface() = 0;
  void PromptUser(const std::vector<base::FilePath>& files_to_delete, const base::Optional<std::vector<base::string16>>& registry_keys, PromptUserCallback callback) override;
};
class  ChromePromptAsyncWaiter {
 public:
  explicit ChromePromptAsyncWaiter(ChromePrompt* proxy);
  ~ChromePromptAsyncWaiter();
  void PromptUser(
      const std::vector<base::FilePath>& files_to_delete, const base::Optional<std::vector<base::string16>>& registry_keys, PromptAcceptance* out_prompt_acceptance);

 private:
  ChromePrompt* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ChromePromptAsyncWaiter);
};

class  ChromePromptProxy
    : public ChromePrompt {
 public:
  explicit ChromePromptProxy(mojo::MessageReceiverWithResponder* receiver);
  void PromptUser(const std::vector<base::FilePath>& files_to_delete, const base::Optional<std::vector<base::string16>>& registry_keys, PromptUserCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  ChromePromptStubDispatch {
 public:
  static bool Accept(ChromePrompt* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ChromePrompt* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ChromePrompt>>
class ChromePromptStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ChromePromptStub() {}
  ~ChromePromptStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ChromePromptStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ChromePromptStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ChromePromptRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ChromePromptResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};






class  FilePath {
 public:
  using DataView = FilePathDataView;
  using Data_ = internal::FilePath_Data;

  template <typename... Args>
  static FilePathPtr New(Args&&... args) {
    return FilePathPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FilePathPtr From(const U& u) {
    return mojo::TypeConverter<FilePathPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FilePath>::Convert(*this);
  }


  FilePath();

  explicit FilePath(
      const std::vector<uint16_t>& value);

  ~FilePath();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FilePathPtr>
  FilePathPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FilePath>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FilePath::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FilePath::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FilePath_UnserializedMessageContext<
            UserType, FilePath::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<FilePath::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return FilePath::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FilePath_UnserializedMessageContext<
            UserType, FilePath::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FilePath::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::vector<uint16_t> value;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  RegistryKey {
 public:
  using DataView = RegistryKeyDataView;
  using Data_ = internal::RegistryKey_Data;

  template <typename... Args>
  static RegistryKeyPtr New(Args&&... args) {
    return RegistryKeyPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RegistryKeyPtr From(const U& u) {
    return mojo::TypeConverter<RegistryKeyPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RegistryKey>::Convert(*this);
  }


  RegistryKey();

  explicit RegistryKey(
      const std::vector<uint16_t>& value);

  ~RegistryKey();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RegistryKeyPtr>
  RegistryKeyPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RegistryKey>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RegistryKey::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RegistryKey::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RegistryKey_UnserializedMessageContext<
            UserType, RegistryKey::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<RegistryKey::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return RegistryKey::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RegistryKey_UnserializedMessageContext<
            UserType, RegistryKey::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RegistryKey::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::vector<uint16_t> value;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
FilePathPtr FilePath::Clone() const {
  return New(
      mojo::Clone(value)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FilePath>::value>::type*>
bool FilePath::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  return true;
}
template <typename StructPtrType>
RegistryKeyPtr RegistryKey::Clone() const {
  return New(
      mojo::Clone(value)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RegistryKey>::value>::type*>
bool RegistryKey::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace chrome_cleaner

namespace mojo {


template <>
struct  StructTraits<::chrome_cleaner::mojom::FilePath::DataView,
                                         ::chrome_cleaner::mojom::FilePathPtr> {
  static bool IsNull(const ::chrome_cleaner::mojom::FilePathPtr& input) { return !input; }
  static void SetToNull(::chrome_cleaner::mojom::FilePathPtr* output) { output->reset(); }

  static const decltype(::chrome_cleaner::mojom::FilePath::value)& value(
      const ::chrome_cleaner::mojom::FilePathPtr& input) {
    return input->value;
  }

  static bool Read(::chrome_cleaner::mojom::FilePath::DataView input, ::chrome_cleaner::mojom::FilePathPtr* output);
};


template <>
struct  StructTraits<::chrome_cleaner::mojom::RegistryKey::DataView,
                                         ::chrome_cleaner::mojom::RegistryKeyPtr> {
  static bool IsNull(const ::chrome_cleaner::mojom::RegistryKeyPtr& input) { return !input; }
  static void SetToNull(::chrome_cleaner::mojom::RegistryKeyPtr* output) { output->reset(); }

  static const decltype(::chrome_cleaner::mojom::RegistryKey::value)& value(
      const ::chrome_cleaner::mojom::RegistryKeyPtr& input) {
    return input->value;
  }

  static bool Read(::chrome_cleaner::mojom::RegistryKey::DataView input, ::chrome_cleaner::mojom::RegistryKeyPtr* output);
};

}  // namespace mojo

#endif  // COMPONENTS_CHROME_CLEANER_PUBLIC_INTERFACES_CHROME_PROMPT_MOJOM_H_