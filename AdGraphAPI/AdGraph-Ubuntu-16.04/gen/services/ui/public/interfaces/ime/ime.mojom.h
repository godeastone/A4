// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_IME_IME_MOJOM_H_
#define SERVICES_UI_PUBLIC_INTERFACES_IME_IME_MOJOM_H_

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
#include "services/ui/public/interfaces/ime/ime.mojom-shared.h"
#include "mojo/public/mojom/base/text_direction.mojom.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "ui/events/mojo/event.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "ui/gfx/range/mojo/range.mojom.h"
#include "ui/platform_window/mojo/text_input_state.mojom.h"
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
#include "ui/base/ime/candidate_window.h"
#include "ui/base/ime/composition_text.h"
#include "ui/base/ime/ime_text_span.h"
#include "ui/base/ime/text_input_mode.h"
#include "ui/base/ime/text_input_type.h"


namespace ui {
namespace mojom {
class IMEDriver;
using IMEDriverPtr = mojo::InterfacePtr<IMEDriver>;
using IMEDriverPtrInfo = mojo::InterfacePtrInfo<IMEDriver>;
using ThreadSafeIMEDriverPtr =
    mojo::ThreadSafeInterfacePtr<IMEDriver>;
using IMEDriverRequest = mojo::InterfaceRequest<IMEDriver>;
using IMEDriverAssociatedPtr =
    mojo::AssociatedInterfacePtr<IMEDriver>;
using ThreadSafeIMEDriverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<IMEDriver>;
using IMEDriverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<IMEDriver>;
using IMEDriverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<IMEDriver>;

class IMERegistrar;
using IMERegistrarPtr = mojo::InterfacePtr<IMERegistrar>;
using IMERegistrarPtrInfo = mojo::InterfacePtrInfo<IMERegistrar>;
using ThreadSafeIMERegistrarPtr =
    mojo::ThreadSafeInterfacePtr<IMERegistrar>;
using IMERegistrarRequest = mojo::InterfaceRequest<IMERegistrar>;
using IMERegistrarAssociatedPtr =
    mojo::AssociatedInterfacePtr<IMERegistrar>;
using ThreadSafeIMERegistrarAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<IMERegistrar>;
using IMERegistrarAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<IMERegistrar>;
using IMERegistrarAssociatedRequest =
    mojo::AssociatedInterfaceRequest<IMERegistrar>;

class InputMethod;
using InputMethodPtr = mojo::InterfacePtr<InputMethod>;
using InputMethodPtrInfo = mojo::InterfacePtrInfo<InputMethod>;
using ThreadSafeInputMethodPtr =
    mojo::ThreadSafeInterfacePtr<InputMethod>;
using InputMethodRequest = mojo::InterfaceRequest<InputMethod>;
using InputMethodAssociatedPtr =
    mojo::AssociatedInterfacePtr<InputMethod>;
using ThreadSafeInputMethodAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<InputMethod>;
using InputMethodAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<InputMethod>;
using InputMethodAssociatedRequest =
    mojo::AssociatedInterfaceRequest<InputMethod>;

class TextInputClient;
using TextInputClientPtr = mojo::InterfacePtr<TextInputClient>;
using TextInputClientPtrInfo = mojo::InterfacePtrInfo<TextInputClient>;
using ThreadSafeTextInputClientPtr =
    mojo::ThreadSafeInterfacePtr<TextInputClient>;
using TextInputClientRequest = mojo::InterfaceRequest<TextInputClient>;
using TextInputClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<TextInputClient>;
using ThreadSafeTextInputClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<TextInputClient>;
using TextInputClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<TextInputClient>;
using TextInputClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<TextInputClient>;

class CandidateWindowProperties;
using CandidateWindowPropertiesPtr = mojo::StructPtr<CandidateWindowProperties>;

class CandidateWindowEntry;
using CandidateWindowEntryPtr = mojo::StructPtr<CandidateWindowEntry>;

class ImeTextSpan;
using ImeTextSpanPtr = mojo::StructPtr<ImeTextSpan>;

class CompositionText;
using CompositionTextPtr = mojo::StructPtr<CompositionText>;

class StartSessionDetails;
using StartSessionDetailsPtr = mojo::StructPtr<StartSessionDetails>;


class IMEDriverProxy;

template <typename ImplRefTraits>
class IMEDriverStub;

class IMEDriverRequestValidator;

class  IMEDriver
    : public IMEDriverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = IMEDriverProxy;

  template <typename ImplRefTraits>
  using Stub_ = IMEDriverStub<ImplRefTraits>;

  using RequestValidator_ = IMEDriverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kStartSessionMinVersion = 0,
  };
  virtual ~IMEDriver() {}

  virtual void StartSession(StartSessionDetailsPtr details) = 0;
};
class  IMEDriverInterceptorForTesting : public IMEDriver {
  virtual IMEDriver* GetForwardingInterface() = 0;
  void StartSession(StartSessionDetailsPtr details) override;
};
class  IMEDriverAsyncWaiter {
 public:
  explicit IMEDriverAsyncWaiter(IMEDriver* proxy);
  ~IMEDriverAsyncWaiter();

 private:
  IMEDriver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(IMEDriverAsyncWaiter);
};

class IMERegistrarProxy;

template <typename ImplRefTraits>
class IMERegistrarStub;

class IMERegistrarRequestValidator;

class  IMERegistrar
    : public IMERegistrarInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = IMERegistrarProxy;

  template <typename ImplRefTraits>
  using Stub_ = IMERegistrarStub<ImplRefTraits>;

  using RequestValidator_ = IMERegistrarRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kRegisterDriverMinVersion = 0,
  };
  virtual ~IMERegistrar() {}

  virtual void RegisterDriver(IMEDriverPtr driver) = 0;
};
class  IMERegistrarInterceptorForTesting : public IMERegistrar {
  virtual IMERegistrar* GetForwardingInterface() = 0;
  void RegisterDriver(IMEDriverPtr driver) override;
};
class  IMERegistrarAsyncWaiter {
 public:
  explicit IMERegistrarAsyncWaiter(IMERegistrar* proxy);
  ~IMERegistrarAsyncWaiter();

 private:
  IMERegistrar* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(IMERegistrarAsyncWaiter);
};

class InputMethodProxy;

template <typename ImplRefTraits>
class InputMethodStub;

class InputMethodRequestValidator;
class InputMethodResponseValidator;

class  InputMethod
    : public InputMethodInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = InputMethodProxy;

  template <typename ImplRefTraits>
  using Stub_ = InputMethodStub<ImplRefTraits>;

  using RequestValidator_ = InputMethodRequestValidator;
  using ResponseValidator_ = InputMethodResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOnTextInputTypeChangedMinVersion = 0,
    kOnCaretBoundsChangedMinVersion = 0,
    kProcessKeyEventMinVersion = 0,
    kCancelCompositionMinVersion = 0,
  };
  virtual ~InputMethod() {}

  virtual void OnTextInputTypeChanged(ui::TextInputType text_input_type) = 0;

  virtual void OnCaretBoundsChanged(const gfx::Rect& caret_bounds) = 0;


  using ProcessKeyEventCallback = base::OnceCallback<void(bool)>;
  virtual void ProcessKeyEvent(std::unique_ptr<ui::Event> key_event, ProcessKeyEventCallback callback) = 0;

  virtual void CancelComposition() = 0;
};
class  InputMethodInterceptorForTesting : public InputMethod {
  virtual InputMethod* GetForwardingInterface() = 0;
  void OnTextInputTypeChanged(ui::TextInputType text_input_type) override;
  void OnCaretBoundsChanged(const gfx::Rect& caret_bounds) override;
  void ProcessKeyEvent(std::unique_ptr<ui::Event> key_event, ProcessKeyEventCallback callback) override;
  void CancelComposition() override;
};
class  InputMethodAsyncWaiter {
 public:
  explicit InputMethodAsyncWaiter(InputMethod* proxy);
  ~InputMethodAsyncWaiter();
  void ProcessKeyEvent(
      std::unique_ptr<ui::Event> key_event, bool* out_handled);

 private:
  InputMethod* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(InputMethodAsyncWaiter);
};

class TextInputClientProxy;

template <typename ImplRefTraits>
class TextInputClientStub;

class TextInputClientRequestValidator;
class TextInputClientResponseValidator;

class  TextInputClient
    : public TextInputClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = TextInputClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = TextInputClientStub<ImplRefTraits>;

  using RequestValidator_ = TextInputClientRequestValidator;
  using ResponseValidator_ = TextInputClientResponseValidator;
  enum MethodMinVersions : uint32_t {
    kSetCompositionTextMinVersion = 0,
    kConfirmCompositionTextMinVersion = 0,
    kClearCompositionTextMinVersion = 0,
    kInsertTextMinVersion = 0,
    kInsertCharMinVersion = 0,
    kDispatchKeyEventPostIMEMinVersion = 0,
  };
  virtual ~TextInputClient() {}

  virtual void SetCompositionText(const ui::CompositionText& composition) = 0;

  virtual void ConfirmCompositionText() = 0;

  virtual void ClearCompositionText() = 0;

  virtual void InsertText(const base::string16& text) = 0;

  virtual void InsertChar(std::unique_ptr<ui::Event> event) = 0;


  using DispatchKeyEventPostIMECallback = base::OnceCallback<void(bool)>;
  virtual void DispatchKeyEventPostIME(std::unique_ptr<ui::Event> event, DispatchKeyEventPostIMECallback callback) = 0;
};
class  TextInputClientInterceptorForTesting : public TextInputClient {
  virtual TextInputClient* GetForwardingInterface() = 0;
  void SetCompositionText(const ui::CompositionText& composition) override;
  void ConfirmCompositionText() override;
  void ClearCompositionText() override;
  void InsertText(const base::string16& text) override;
  void InsertChar(std::unique_ptr<ui::Event> event) override;
  void DispatchKeyEventPostIME(std::unique_ptr<ui::Event> event, DispatchKeyEventPostIMECallback callback) override;
};
class  TextInputClientAsyncWaiter {
 public:
  explicit TextInputClientAsyncWaiter(TextInputClient* proxy);
  ~TextInputClientAsyncWaiter();
  void DispatchKeyEventPostIME(
      std::unique_ptr<ui::Event> event, bool* out_stopped_propagation);

 private:
  TextInputClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(TextInputClientAsyncWaiter);
};

class  IMEDriverProxy
    : public IMEDriver {
 public:
  explicit IMEDriverProxy(mojo::MessageReceiverWithResponder* receiver);
  void StartSession(StartSessionDetailsPtr details) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  IMERegistrarProxy
    : public IMERegistrar {
 public:
  explicit IMERegistrarProxy(mojo::MessageReceiverWithResponder* receiver);
  void RegisterDriver(IMEDriverPtr driver) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  InputMethodProxy
    : public InputMethod {
 public:
  explicit InputMethodProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnTextInputTypeChanged(ui::TextInputType text_input_type) final;
  void OnCaretBoundsChanged(const gfx::Rect& caret_bounds) final;
  void ProcessKeyEvent(std::unique_ptr<ui::Event> key_event, ProcessKeyEventCallback callback) final;
  void CancelComposition() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  TextInputClientProxy
    : public TextInputClient {
 public:
  explicit TextInputClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetCompositionText(const ui::CompositionText& composition) final;
  void ConfirmCompositionText() final;
  void ClearCompositionText() final;
  void InsertText(const base::string16& text) final;
  void InsertChar(std::unique_ptr<ui::Event> event) final;
  void DispatchKeyEventPostIME(std::unique_ptr<ui::Event> event, DispatchKeyEventPostIMECallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  IMEDriverStubDispatch {
 public:
  static bool Accept(IMEDriver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      IMEDriver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<IMEDriver>>
class IMEDriverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  IMEDriverStub() {}
  ~IMEDriverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IMEDriverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IMEDriverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  IMERegistrarStubDispatch {
 public:
  static bool Accept(IMERegistrar* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      IMERegistrar* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<IMERegistrar>>
class IMERegistrarStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  IMERegistrarStub() {}
  ~IMERegistrarStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IMERegistrarStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IMERegistrarStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  InputMethodStubDispatch {
 public:
  static bool Accept(InputMethod* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      InputMethod* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<InputMethod>>
class InputMethodStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  InputMethodStub() {}
  ~InputMethodStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InputMethodStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InputMethodStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  TextInputClientStubDispatch {
 public:
  static bool Accept(TextInputClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      TextInputClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<TextInputClient>>
class TextInputClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  TextInputClientStub() {}
  ~TextInputClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TextInputClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TextInputClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  IMEDriverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  IMERegistrarRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  InputMethodRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  TextInputClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  InputMethodResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  TextInputClientResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};









class  CandidateWindowProperties {
 public:
  using DataView = CandidateWindowPropertiesDataView;
  using Data_ = internal::CandidateWindowProperties_Data;

  template <typename... Args>
  static CandidateWindowPropertiesPtr New(Args&&... args) {
    return CandidateWindowPropertiesPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CandidateWindowPropertiesPtr From(const U& u) {
    return mojo::TypeConverter<CandidateWindowPropertiesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CandidateWindowProperties>::Convert(*this);
  }


  CandidateWindowProperties();

  CandidateWindowProperties(
      int32_t page_size,
      bool vertical,
      const std::string& auxiliary_text,
      bool auxiliary_text_visible,
      int32_t cursor_position,
      bool cursor_visible,
      CandidateWindowPosition window_position);

  ~CandidateWindowProperties();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CandidateWindowPropertiesPtr>
  CandidateWindowPropertiesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CandidateWindowProperties>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CandidateWindowProperties::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CandidateWindowProperties::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CandidateWindowProperties_UnserializedMessageContext<
            UserType, CandidateWindowProperties::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CandidateWindowProperties::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CandidateWindowProperties::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CandidateWindowProperties_UnserializedMessageContext<
            UserType, CandidateWindowProperties::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CandidateWindowProperties::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  int32_t page_size;
  bool vertical;
  std::string auxiliary_text;
  bool auxiliary_text_visible;
  int32_t cursor_position;
  bool cursor_visible;
  CandidateWindowPosition window_position;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  CandidateWindowEntry {
 public:
  using DataView = CandidateWindowEntryDataView;
  using Data_ = internal::CandidateWindowEntry_Data;

  template <typename... Args>
  static CandidateWindowEntryPtr New(Args&&... args) {
    return CandidateWindowEntryPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CandidateWindowEntryPtr From(const U& u) {
    return mojo::TypeConverter<CandidateWindowEntryPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CandidateWindowEntry>::Convert(*this);
  }


  CandidateWindowEntry();

  CandidateWindowEntry(
      const base::string16& value,
      const base::string16& label,
      const base::string16& annotation,
      const base::string16& description_title,
      const base::string16& description_body);

  ~CandidateWindowEntry();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CandidateWindowEntryPtr>
  CandidateWindowEntryPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CandidateWindowEntry>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CandidateWindowEntry::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CandidateWindowEntry::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CandidateWindowEntry_UnserializedMessageContext<
            UserType, CandidateWindowEntry::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CandidateWindowEntry::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CandidateWindowEntry::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CandidateWindowEntry_UnserializedMessageContext<
            UserType, CandidateWindowEntry::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CandidateWindowEntry::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  base::string16 value;
  base::string16 label;
  base::string16 annotation;
  base::string16 description_title;
  base::string16 description_body;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  ImeTextSpan {
 public:
  using DataView = ImeTextSpanDataView;
  using Data_ = internal::ImeTextSpan_Data;

  template <typename... Args>
  static ImeTextSpanPtr New(Args&&... args) {
    return ImeTextSpanPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ImeTextSpanPtr From(const U& u) {
    return mojo::TypeConverter<ImeTextSpanPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ImeTextSpan>::Convert(*this);
  }


  ImeTextSpan();

  ImeTextSpan(
      ImeTextSpanType type,
      uint32_t start_offset,
      uint32_t end_offset,
      uint32_t underline_color,
      ui::ImeTextSpan::Thickness thickness,
      uint32_t background_color,
      uint32_t suggestion_highlight_color,
      const std::vector<std::string>& suggestions);

  ~ImeTextSpan();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ImeTextSpanPtr>
  ImeTextSpanPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ImeTextSpan>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ImeTextSpan::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ImeTextSpan::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ImeTextSpan_UnserializedMessageContext<
            UserType, ImeTextSpan::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ImeTextSpan::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ImeTextSpan::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ImeTextSpan_UnserializedMessageContext<
            UserType, ImeTextSpan::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ImeTextSpan::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  ImeTextSpanType type;
  uint32_t start_offset;
  uint32_t end_offset;
  uint32_t underline_color;
  ui::ImeTextSpan::Thickness thickness;
  uint32_t background_color;
  uint32_t suggestion_highlight_color;
  std::vector<std::string> suggestions;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  CompositionText {
 public:
  using DataView = CompositionTextDataView;
  using Data_ = internal::CompositionText_Data;

  template <typename... Args>
  static CompositionTextPtr New(Args&&... args) {
    return CompositionTextPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CompositionTextPtr From(const U& u) {
    return mojo::TypeConverter<CompositionTextPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CompositionText>::Convert(*this);
  }


  CompositionText();

  CompositionText(
      const base::string16& text,
      const std::vector<ui::ImeTextSpan>& ime_text_spans,
      const gfx::Range& selection);

  ~CompositionText();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CompositionTextPtr>
  CompositionTextPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CompositionText>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CompositionText::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CompositionText::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CompositionText_UnserializedMessageContext<
            UserType, CompositionText::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CompositionText::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CompositionText::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CompositionText_UnserializedMessageContext<
            UserType, CompositionText::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CompositionText::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  base::string16 text;
  std::vector<ui::ImeTextSpan> ime_text_spans;
  gfx::Range selection;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  StartSessionDetails {
 public:
  using DataView = StartSessionDetailsDataView;
  using Data_ = internal::StartSessionDetails_Data;

  template <typename... Args>
  static StartSessionDetailsPtr New(Args&&... args) {
    return StartSessionDetailsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static StartSessionDetailsPtr From(const U& u) {
    return mojo::TypeConverter<StartSessionDetailsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, StartSessionDetails>::Convert(*this);
  }


  StartSessionDetails();

  StartSessionDetails(
      TextInputClientPtrInfo client,
      InputMethodRequest input_method_request,
      ui::TextInputType text_input_type,
      ui::TextInputMode text_input_mode,
      base::i18n::TextDirection text_direction,
      int32_t text_input_flags,
      const gfx::Rect& caret_bounds);

  ~StartSessionDetails();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = StartSessionDetailsPtr>
  StartSessionDetailsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, StartSessionDetails>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        StartSessionDetails::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        StartSessionDetails::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::StartSessionDetails_UnserializedMessageContext<
            UserType, StartSessionDetails::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<StartSessionDetails::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return StartSessionDetails::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::StartSessionDetails_UnserializedMessageContext<
            UserType, StartSessionDetails::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<StartSessionDetails::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  TextInputClientPtrInfo client;
  InputMethodRequest input_method_request;
  ui::TextInputType text_input_type;
  ui::TextInputMode text_input_mode;
  base::i18n::TextDirection text_direction;
  int32_t text_input_flags;
  gfx::Rect caret_bounds;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(StartSessionDetails);
};

template <typename StructPtrType>
CandidateWindowPropertiesPtr CandidateWindowProperties::Clone() const {
  return New(
      mojo::Clone(page_size),
      mojo::Clone(vertical),
      mojo::Clone(auxiliary_text),
      mojo::Clone(auxiliary_text_visible),
      mojo::Clone(cursor_position),
      mojo::Clone(cursor_visible),
      mojo::Clone(window_position)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CandidateWindowProperties>::value>::type*>
bool CandidateWindowProperties::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->page_size, other_struct.page_size))
    return false;
  if (!mojo::Equals(this->vertical, other_struct.vertical))
    return false;
  if (!mojo::Equals(this->auxiliary_text, other_struct.auxiliary_text))
    return false;
  if (!mojo::Equals(this->auxiliary_text_visible, other_struct.auxiliary_text_visible))
    return false;
  if (!mojo::Equals(this->cursor_position, other_struct.cursor_position))
    return false;
  if (!mojo::Equals(this->cursor_visible, other_struct.cursor_visible))
    return false;
  if (!mojo::Equals(this->window_position, other_struct.window_position))
    return false;
  return true;
}
template <typename StructPtrType>
CandidateWindowEntryPtr CandidateWindowEntry::Clone() const {
  return New(
      mojo::Clone(value),
      mojo::Clone(label),
      mojo::Clone(annotation),
      mojo::Clone(description_title),
      mojo::Clone(description_body)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CandidateWindowEntry>::value>::type*>
bool CandidateWindowEntry::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  if (!mojo::Equals(this->label, other_struct.label))
    return false;
  if (!mojo::Equals(this->annotation, other_struct.annotation))
    return false;
  if (!mojo::Equals(this->description_title, other_struct.description_title))
    return false;
  if (!mojo::Equals(this->description_body, other_struct.description_body))
    return false;
  return true;
}
template <typename StructPtrType>
ImeTextSpanPtr ImeTextSpan::Clone() const {
  return New(
      mojo::Clone(type),
      mojo::Clone(start_offset),
      mojo::Clone(end_offset),
      mojo::Clone(underline_color),
      mojo::Clone(thickness),
      mojo::Clone(background_color),
      mojo::Clone(suggestion_highlight_color),
      mojo::Clone(suggestions)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ImeTextSpan>::value>::type*>
bool ImeTextSpan::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->start_offset, other_struct.start_offset))
    return false;
  if (!mojo::Equals(this->end_offset, other_struct.end_offset))
    return false;
  if (!mojo::Equals(this->underline_color, other_struct.underline_color))
    return false;
  if (!mojo::Equals(this->thickness, other_struct.thickness))
    return false;
  if (!mojo::Equals(this->background_color, other_struct.background_color))
    return false;
  if (!mojo::Equals(this->suggestion_highlight_color, other_struct.suggestion_highlight_color))
    return false;
  if (!mojo::Equals(this->suggestions, other_struct.suggestions))
    return false;
  return true;
}
template <typename StructPtrType>
CompositionTextPtr CompositionText::Clone() const {
  return New(
      mojo::Clone(text),
      mojo::Clone(ime_text_spans),
      mojo::Clone(selection)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CompositionText>::value>::type*>
bool CompositionText::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->text, other_struct.text))
    return false;
  if (!mojo::Equals(this->ime_text_spans, other_struct.ime_text_spans))
    return false;
  if (!mojo::Equals(this->selection, other_struct.selection))
    return false;
  return true;
}
template <typename StructPtrType>
StartSessionDetailsPtr StartSessionDetails::Clone() const {
  return New(
      mojo::Clone(client),
      mojo::Clone(input_method_request),
      mojo::Clone(text_input_type),
      mojo::Clone(text_input_mode),
      mojo::Clone(text_direction),
      mojo::Clone(text_input_flags),
      mojo::Clone(caret_bounds)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, StartSessionDetails>::value>::type*>
bool StartSessionDetails::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->client, other_struct.client))
    return false;
  if (!mojo::Equals(this->input_method_request, other_struct.input_method_request))
    return false;
  if (!mojo::Equals(this->text_input_type, other_struct.text_input_type))
    return false;
  if (!mojo::Equals(this->text_input_mode, other_struct.text_input_mode))
    return false;
  if (!mojo::Equals(this->text_direction, other_struct.text_direction))
    return false;
  if (!mojo::Equals(this->text_input_flags, other_struct.text_input_flags))
    return false;
  if (!mojo::Equals(this->caret_bounds, other_struct.caret_bounds))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace ui

namespace mojo {


template <>
struct  StructTraits<::ui::mojom::CandidateWindowProperties::DataView,
                                         ::ui::mojom::CandidateWindowPropertiesPtr> {
  static bool IsNull(const ::ui::mojom::CandidateWindowPropertiesPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::CandidateWindowPropertiesPtr* output) { output->reset(); }

  static decltype(::ui::mojom::CandidateWindowProperties::page_size) page_size(
      const ::ui::mojom::CandidateWindowPropertiesPtr& input) {
    return input->page_size;
  }

  static decltype(::ui::mojom::CandidateWindowProperties::vertical) vertical(
      const ::ui::mojom::CandidateWindowPropertiesPtr& input) {
    return input->vertical;
  }

  static const decltype(::ui::mojom::CandidateWindowProperties::auxiliary_text)& auxiliary_text(
      const ::ui::mojom::CandidateWindowPropertiesPtr& input) {
    return input->auxiliary_text;
  }

  static decltype(::ui::mojom::CandidateWindowProperties::auxiliary_text_visible) auxiliary_text_visible(
      const ::ui::mojom::CandidateWindowPropertiesPtr& input) {
    return input->auxiliary_text_visible;
  }

  static decltype(::ui::mojom::CandidateWindowProperties::cursor_position) cursor_position(
      const ::ui::mojom::CandidateWindowPropertiesPtr& input) {
    return input->cursor_position;
  }

  static decltype(::ui::mojom::CandidateWindowProperties::cursor_visible) cursor_visible(
      const ::ui::mojom::CandidateWindowPropertiesPtr& input) {
    return input->cursor_visible;
  }

  static decltype(::ui::mojom::CandidateWindowProperties::window_position) window_position(
      const ::ui::mojom::CandidateWindowPropertiesPtr& input) {
    return input->window_position;
  }

  static bool Read(::ui::mojom::CandidateWindowProperties::DataView input, ::ui::mojom::CandidateWindowPropertiesPtr* output);
};


template <>
struct  StructTraits<::ui::mojom::CandidateWindowEntry::DataView,
                                         ::ui::mojom::CandidateWindowEntryPtr> {
  static bool IsNull(const ::ui::mojom::CandidateWindowEntryPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::CandidateWindowEntryPtr* output) { output->reset(); }

  static const decltype(::ui::mojom::CandidateWindowEntry::value)& value(
      const ::ui::mojom::CandidateWindowEntryPtr& input) {
    return input->value;
  }

  static const decltype(::ui::mojom::CandidateWindowEntry::label)& label(
      const ::ui::mojom::CandidateWindowEntryPtr& input) {
    return input->label;
  }

  static const decltype(::ui::mojom::CandidateWindowEntry::annotation)& annotation(
      const ::ui::mojom::CandidateWindowEntryPtr& input) {
    return input->annotation;
  }

  static const decltype(::ui::mojom::CandidateWindowEntry::description_title)& description_title(
      const ::ui::mojom::CandidateWindowEntryPtr& input) {
    return input->description_title;
  }

  static const decltype(::ui::mojom::CandidateWindowEntry::description_body)& description_body(
      const ::ui::mojom::CandidateWindowEntryPtr& input) {
    return input->description_body;
  }

  static bool Read(::ui::mojom::CandidateWindowEntry::DataView input, ::ui::mojom::CandidateWindowEntryPtr* output);
};


template <>
struct  StructTraits<::ui::mojom::ImeTextSpan::DataView,
                                         ::ui::mojom::ImeTextSpanPtr> {
  static bool IsNull(const ::ui::mojom::ImeTextSpanPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::ImeTextSpanPtr* output) { output->reset(); }

  static decltype(::ui::mojom::ImeTextSpan::type) type(
      const ::ui::mojom::ImeTextSpanPtr& input) {
    return input->type;
  }

  static decltype(::ui::mojom::ImeTextSpan::start_offset) start_offset(
      const ::ui::mojom::ImeTextSpanPtr& input) {
    return input->start_offset;
  }

  static decltype(::ui::mojom::ImeTextSpan::end_offset) end_offset(
      const ::ui::mojom::ImeTextSpanPtr& input) {
    return input->end_offset;
  }

  static decltype(::ui::mojom::ImeTextSpan::underline_color) underline_color(
      const ::ui::mojom::ImeTextSpanPtr& input) {
    return input->underline_color;
  }

  static decltype(::ui::mojom::ImeTextSpan::thickness) thickness(
      const ::ui::mojom::ImeTextSpanPtr& input) {
    return input->thickness;
  }

  static decltype(::ui::mojom::ImeTextSpan::background_color) background_color(
      const ::ui::mojom::ImeTextSpanPtr& input) {
    return input->background_color;
  }

  static decltype(::ui::mojom::ImeTextSpan::suggestion_highlight_color) suggestion_highlight_color(
      const ::ui::mojom::ImeTextSpanPtr& input) {
    return input->suggestion_highlight_color;
  }

  static const decltype(::ui::mojom::ImeTextSpan::suggestions)& suggestions(
      const ::ui::mojom::ImeTextSpanPtr& input) {
    return input->suggestions;
  }

  static bool Read(::ui::mojom::ImeTextSpan::DataView input, ::ui::mojom::ImeTextSpanPtr* output);
};


template <>
struct  StructTraits<::ui::mojom::CompositionText::DataView,
                                         ::ui::mojom::CompositionTextPtr> {
  static bool IsNull(const ::ui::mojom::CompositionTextPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::CompositionTextPtr* output) { output->reset(); }

  static const decltype(::ui::mojom::CompositionText::text)& text(
      const ::ui::mojom::CompositionTextPtr& input) {
    return input->text;
  }

  static const decltype(::ui::mojom::CompositionText::ime_text_spans)& ime_text_spans(
      const ::ui::mojom::CompositionTextPtr& input) {
    return input->ime_text_spans;
  }

  static const decltype(::ui::mojom::CompositionText::selection)& selection(
      const ::ui::mojom::CompositionTextPtr& input) {
    return input->selection;
  }

  static bool Read(::ui::mojom::CompositionText::DataView input, ::ui::mojom::CompositionTextPtr* output);
};


template <>
struct  StructTraits<::ui::mojom::StartSessionDetails::DataView,
                                         ::ui::mojom::StartSessionDetailsPtr> {
  static bool IsNull(const ::ui::mojom::StartSessionDetailsPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::StartSessionDetailsPtr* output) { output->reset(); }

  static  decltype(::ui::mojom::StartSessionDetails::client)& client(
       ::ui::mojom::StartSessionDetailsPtr& input) {
    return input->client;
  }

  static  decltype(::ui::mojom::StartSessionDetails::input_method_request)& input_method_request(
       ::ui::mojom::StartSessionDetailsPtr& input) {
    return input->input_method_request;
  }

  static decltype(::ui::mojom::StartSessionDetails::text_input_type) text_input_type(
      const ::ui::mojom::StartSessionDetailsPtr& input) {
    return input->text_input_type;
  }

  static decltype(::ui::mojom::StartSessionDetails::text_input_mode) text_input_mode(
      const ::ui::mojom::StartSessionDetailsPtr& input) {
    return input->text_input_mode;
  }

  static decltype(::ui::mojom::StartSessionDetails::text_direction) text_direction(
      const ::ui::mojom::StartSessionDetailsPtr& input) {
    return input->text_direction;
  }

  static decltype(::ui::mojom::StartSessionDetails::text_input_flags) text_input_flags(
      const ::ui::mojom::StartSessionDetailsPtr& input) {
    return input->text_input_flags;
  }

  static const decltype(::ui::mojom::StartSessionDetails::caret_bounds)& caret_bounds(
      const ::ui::mojom::StartSessionDetailsPtr& input) {
    return input->caret_bounds;
  }

  static bool Read(::ui::mojom::StartSessionDetails::DataView input, ::ui::mojom::StartSessionDetailsPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_IME_IME_MOJOM_H_