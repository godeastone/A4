// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_FONT_PUBLIC_INTERFACES_FONT_SERVICE_MOJOM_H_
#define COMPONENTS_SERVICES_FONT_PUBLIC_INTERFACES_FONT_SERVICE_MOJOM_H_

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
#include "components/services/font/public/interfaces/font_service.mojom-shared.h"
#include "mojo/public/mojom/base/file.mojom.h"
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


namespace font_service {
namespace mojom {
class FontService;
using FontServicePtr = mojo::InterfacePtr<FontService>;
using FontServicePtrInfo = mojo::InterfacePtrInfo<FontService>;
using ThreadSafeFontServicePtr =
    mojo::ThreadSafeInterfacePtr<FontService>;
using FontServiceRequest = mojo::InterfaceRequest<FontService>;
using FontServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<FontService>;
using ThreadSafeFontServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<FontService>;
using FontServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<FontService>;
using FontServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<FontService>;

class TypefaceStyle;
using TypefaceStylePtr = mojo::InlinedStructPtr<TypefaceStyle>;

class FontIdentity;
using FontIdentityPtr = mojo::InlinedStructPtr<FontIdentity>;


class FontServiceProxy;

template <typename ImplRefTraits>
class FontServiceStub;

class FontServiceRequestValidator;
class FontServiceResponseValidator;

class  FontService
    : public FontServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = FontServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = FontServiceStub<ImplRefTraits>;

  using RequestValidator_ = FontServiceRequestValidator;
  using ResponseValidator_ = FontServiceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kMatchFamilyNameMinVersion = 0,
    kOpenStreamMinVersion = 0,
  };
  virtual ~FontService() {}


  using MatchFamilyNameCallback = base::OnceCallback<void(FontIdentityPtr, const std::string&, TypefaceStylePtr)>;
  virtual void MatchFamilyName(const std::string& family_name, TypefaceStylePtr style, MatchFamilyNameCallback callback) = 0;


  using OpenStreamCallback = base::OnceCallback<void(base::File)>;
  virtual void OpenStream(uint32_t id_number, OpenStreamCallback callback) = 0;
};
class  FontServiceInterceptorForTesting : public FontService {
  virtual FontService* GetForwardingInterface() = 0;
  void MatchFamilyName(const std::string& family_name, TypefaceStylePtr style, MatchFamilyNameCallback callback) override;
  void OpenStream(uint32_t id_number, OpenStreamCallback callback) override;
};
class  FontServiceAsyncWaiter {
 public:
  explicit FontServiceAsyncWaiter(FontService* proxy);
  ~FontServiceAsyncWaiter();
  void MatchFamilyName(
      const std::string& family_name, TypefaceStylePtr style, FontIdentityPtr* out_identity, std::string* out_family_name, TypefaceStylePtr* out_style);
  void OpenStream(
      uint32_t id_number, base::File* out_font_handle);

 private:
  FontService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FontServiceAsyncWaiter);
};

class  FontServiceProxy
    : public FontService {
 public:
  explicit FontServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void MatchFamilyName(const std::string& family_name, TypefaceStylePtr style, MatchFamilyNameCallback callback) final;
  void OpenStream(uint32_t id_number, OpenStreamCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  FontServiceStubDispatch {
 public:
  static bool Accept(FontService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FontService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FontService>>
class FontServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FontServiceStub() {}
  ~FontServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FontServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FontServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  FontServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  FontServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};


class  TypefaceStyle {
 public:
  using DataView = TypefaceStyleDataView;
  using Data_ = internal::TypefaceStyle_Data;

  template <typename... Args>
  static TypefaceStylePtr New(Args&&... args) {
    return TypefaceStylePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TypefaceStylePtr From(const U& u) {
    return mojo::TypeConverter<TypefaceStylePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TypefaceStyle>::Convert(*this);
  }


  TypefaceStyle();

  TypefaceStyle(
      uint16_t weight,
      uint8_t width,
      TypefaceSlant slant);

  ~TypefaceStyle();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TypefaceStylePtr>
  TypefaceStylePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TypefaceStyle>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TypefaceStyle::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TypefaceStyle::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TypefaceStyle_UnserializedMessageContext<
            UserType, TypefaceStyle::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<TypefaceStyle::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return TypefaceStyle::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TypefaceStyle_UnserializedMessageContext<
            UserType, TypefaceStyle::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TypefaceStyle::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  uint16_t weight;
  uint8_t width;
  TypefaceSlant slant;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  FontIdentity {
 public:
  using DataView = FontIdentityDataView;
  using Data_ = internal::FontIdentity_Data;

  template <typename... Args>
  static FontIdentityPtr New(Args&&... args) {
    return FontIdentityPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FontIdentityPtr From(const U& u) {
    return mojo::TypeConverter<FontIdentityPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FontIdentity>::Convert(*this);
  }


  FontIdentity();

  FontIdentity(
      uint32_t id,
      int32_t ttc_index,
      const std::string& str_representation);

  ~FontIdentity();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FontIdentityPtr>
  FontIdentityPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FontIdentity>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FontIdentity::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FontIdentity::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FontIdentity_UnserializedMessageContext<
            UserType, FontIdentity::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<FontIdentity::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return FontIdentity::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FontIdentity_UnserializedMessageContext<
            UserType, FontIdentity::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FontIdentity::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  uint32_t id;
  int32_t ttc_index;
  std::string str_representation;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





template <typename StructPtrType>
TypefaceStylePtr TypefaceStyle::Clone() const {
  return New(
      mojo::Clone(weight),
      mojo::Clone(width),
      mojo::Clone(slant)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TypefaceStyle>::value>::type*>
bool TypefaceStyle::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->weight, other_struct.weight))
    return false;
  if (!mojo::Equals(this->width, other_struct.width))
    return false;
  if (!mojo::Equals(this->slant, other_struct.slant))
    return false;
  return true;
}
template <typename StructPtrType>
FontIdentityPtr FontIdentity::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(ttc_index),
      mojo::Clone(str_representation)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FontIdentity>::value>::type*>
bool FontIdentity::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->ttc_index, other_struct.ttc_index))
    return false;
  if (!mojo::Equals(this->str_representation, other_struct.str_representation))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace font_service

namespace mojo {


template <>
struct  StructTraits<::font_service::mojom::TypefaceStyle::DataView,
                                         ::font_service::mojom::TypefaceStylePtr> {
  static bool IsNull(const ::font_service::mojom::TypefaceStylePtr& input) { return !input; }
  static void SetToNull(::font_service::mojom::TypefaceStylePtr* output) { output->reset(); }

  static decltype(::font_service::mojom::TypefaceStyle::weight) weight(
      const ::font_service::mojom::TypefaceStylePtr& input) {
    return input->weight;
  }

  static decltype(::font_service::mojom::TypefaceStyle::width) width(
      const ::font_service::mojom::TypefaceStylePtr& input) {
    return input->width;
  }

  static decltype(::font_service::mojom::TypefaceStyle::slant) slant(
      const ::font_service::mojom::TypefaceStylePtr& input) {
    return input->slant;
  }

  static bool Read(::font_service::mojom::TypefaceStyle::DataView input, ::font_service::mojom::TypefaceStylePtr* output);
};


template <>
struct  StructTraits<::font_service::mojom::FontIdentity::DataView,
                                         ::font_service::mojom::FontIdentityPtr> {
  static bool IsNull(const ::font_service::mojom::FontIdentityPtr& input) { return !input; }
  static void SetToNull(::font_service::mojom::FontIdentityPtr* output) { output->reset(); }

  static decltype(::font_service::mojom::FontIdentity::id) id(
      const ::font_service::mojom::FontIdentityPtr& input) {
    return input->id;
  }

  static decltype(::font_service::mojom::FontIdentity::ttc_index) ttc_index(
      const ::font_service::mojom::FontIdentityPtr& input) {
    return input->ttc_index;
  }

  static const decltype(::font_service::mojom::FontIdentity::str_representation)& str_representation(
      const ::font_service::mojom::FontIdentityPtr& input) {
    return input->str_representation;
  }

  static bool Read(::font_service::mojom::FontIdentity::DataView input, ::font_service::mojom::FontIdentityPtr* output);
};

}  // namespace mojo

#endif  // COMPONENTS_SERVICES_FONT_PUBLIC_INTERFACES_FONT_SERVICE_MOJOM_H_