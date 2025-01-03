// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_SERVICES_PRINTING_PUBLIC_MOJOM_PDF_TO_PWG_RASTER_CONVERTER_MOJOM_H_
#define CHROME_SERVICES_PRINTING_PUBLIC_MOJOM_PDF_TO_PWG_RASTER_CONVERTER_MOJOM_H_

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
#include "chrome/services/printing/public/mojom/pdf_to_pwg_raster_converter.mojom-shared.h"
#include "chrome/services/printing/public/mojom/pdf_render_settings.mojom.h"
#include "mojo/public/mojom/base/shared_memory.mojom.h"
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
#include "printing/pwg_raster_settings.h"


namespace printing {
namespace mojom {
class PdfToPwgRasterConverter;
using PdfToPwgRasterConverterPtr = mojo::InterfacePtr<PdfToPwgRasterConverter>;
using PdfToPwgRasterConverterPtrInfo = mojo::InterfacePtrInfo<PdfToPwgRasterConverter>;
using ThreadSafePdfToPwgRasterConverterPtr =
    mojo::ThreadSafeInterfacePtr<PdfToPwgRasterConverter>;
using PdfToPwgRasterConverterRequest = mojo::InterfaceRequest<PdfToPwgRasterConverter>;
using PdfToPwgRasterConverterAssociatedPtr =
    mojo::AssociatedInterfacePtr<PdfToPwgRasterConverter>;
using ThreadSafePdfToPwgRasterConverterAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PdfToPwgRasterConverter>;
using PdfToPwgRasterConverterAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PdfToPwgRasterConverter>;
using PdfToPwgRasterConverterAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PdfToPwgRasterConverter>;

class PwgRasterSettings;
using PwgRasterSettingsPtr = mojo::InlinedStructPtr<PwgRasterSettings>;


class PdfToPwgRasterConverterProxy;

template <typename ImplRefTraits>
class PdfToPwgRasterConverterStub;

class PdfToPwgRasterConverterRequestValidator;
class PdfToPwgRasterConverterResponseValidator;

class  PdfToPwgRasterConverter
    : public PdfToPwgRasterConverterInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = PdfToPwgRasterConverterProxy;

  template <typename ImplRefTraits>
  using Stub_ = PdfToPwgRasterConverterStub<ImplRefTraits>;

  using RequestValidator_ = PdfToPwgRasterConverterRequestValidator;
  using ResponseValidator_ = PdfToPwgRasterConverterResponseValidator;
  enum MethodMinVersions : uint32_t {
    kConvertMinVersion = 0,
  };
  virtual ~PdfToPwgRasterConverter() {}


  using ConvertCallback = base::OnceCallback<void(base::ReadOnlySharedMemoryRegion, uint32_t)>;
  virtual void Convert(base::ReadOnlySharedMemoryRegion pdf_region, const printing::PdfRenderSettings& pdf_settings, const printing::PwgRasterSettings& pwg_raster_settings, ConvertCallback callback) = 0;
};
class  PdfToPwgRasterConverterInterceptorForTesting : public PdfToPwgRasterConverter {
  virtual PdfToPwgRasterConverter* GetForwardingInterface() = 0;
  void Convert(base::ReadOnlySharedMemoryRegion pdf_region, const printing::PdfRenderSettings& pdf_settings, const printing::PwgRasterSettings& pwg_raster_settings, ConvertCallback callback) override;
};
class  PdfToPwgRasterConverterAsyncWaiter {
 public:
  explicit PdfToPwgRasterConverterAsyncWaiter(PdfToPwgRasterConverter* proxy);
  ~PdfToPwgRasterConverterAsyncWaiter();
  void Convert(
      base::ReadOnlySharedMemoryRegion pdf_region, const printing::PdfRenderSettings& pdf_settings, const printing::PwgRasterSettings& pwg_raster_settings, base::ReadOnlySharedMemoryRegion* out_pwg_raster_region, uint32_t* out_page_count);

 private:
  PdfToPwgRasterConverter* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PdfToPwgRasterConverterAsyncWaiter);
};

class  PdfToPwgRasterConverterProxy
    : public PdfToPwgRasterConverter {
 public:
  explicit PdfToPwgRasterConverterProxy(mojo::MessageReceiverWithResponder* receiver);
  void Convert(base::ReadOnlySharedMemoryRegion pdf_region, const printing::PdfRenderSettings& pdf_settings, const printing::PwgRasterSettings& pwg_raster_settings, ConvertCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  PdfToPwgRasterConverterStubDispatch {
 public:
  static bool Accept(PdfToPwgRasterConverter* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PdfToPwgRasterConverter* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PdfToPwgRasterConverter>>
class PdfToPwgRasterConverterStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PdfToPwgRasterConverterStub() {}
  ~PdfToPwgRasterConverterStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PdfToPwgRasterConverterStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PdfToPwgRasterConverterStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  PdfToPwgRasterConverterRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  PdfToPwgRasterConverterResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};


class  PwgRasterSettings {
 public:
  using DataView = PwgRasterSettingsDataView;
  using Data_ = internal::PwgRasterSettings_Data;using TransformType = PwgRasterSettings_TransformType;

  template <typename... Args>
  static PwgRasterSettingsPtr New(Args&&... args) {
    return PwgRasterSettingsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PwgRasterSettingsPtr From(const U& u) {
    return mojo::TypeConverter<PwgRasterSettingsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PwgRasterSettings>::Convert(*this);
  }


  PwgRasterSettings();

  PwgRasterSettings(
      PwgRasterSettings::TransformType odd_page_transform,
      bool rotate_all_pages,
      bool reverse_page_order,
      bool use_color);

  ~PwgRasterSettings();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PwgRasterSettingsPtr>
  PwgRasterSettingsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PwgRasterSettings>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PwgRasterSettings::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PwgRasterSettings::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PwgRasterSettings_UnserializedMessageContext<
            UserType, PwgRasterSettings::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PwgRasterSettings::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PwgRasterSettings::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PwgRasterSettings_UnserializedMessageContext<
            UserType, PwgRasterSettings::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PwgRasterSettings::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  PwgRasterSettings::TransformType odd_page_transform;
  bool rotate_all_pages;
  bool reverse_page_order;
  bool use_color;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
PwgRasterSettingsPtr PwgRasterSettings::Clone() const {
  return New(
      mojo::Clone(odd_page_transform),
      mojo::Clone(rotate_all_pages),
      mojo::Clone(reverse_page_order),
      mojo::Clone(use_color)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PwgRasterSettings>::value>::type*>
bool PwgRasterSettings::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->odd_page_transform, other_struct.odd_page_transform))
    return false;
  if (!mojo::Equals(this->rotate_all_pages, other_struct.rotate_all_pages))
    return false;
  if (!mojo::Equals(this->reverse_page_order, other_struct.reverse_page_order))
    return false;
  if (!mojo::Equals(this->use_color, other_struct.use_color))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace printing

namespace mojo {


template <>
struct  StructTraits<::printing::mojom::PwgRasterSettings::DataView,
                                         ::printing::mojom::PwgRasterSettingsPtr> {
  static bool IsNull(const ::printing::mojom::PwgRasterSettingsPtr& input) { return !input; }
  static void SetToNull(::printing::mojom::PwgRasterSettingsPtr* output) { output->reset(); }

  static decltype(::printing::mojom::PwgRasterSettings::odd_page_transform) odd_page_transform(
      const ::printing::mojom::PwgRasterSettingsPtr& input) {
    return input->odd_page_transform;
  }

  static decltype(::printing::mojom::PwgRasterSettings::rotate_all_pages) rotate_all_pages(
      const ::printing::mojom::PwgRasterSettingsPtr& input) {
    return input->rotate_all_pages;
  }

  static decltype(::printing::mojom::PwgRasterSettings::reverse_page_order) reverse_page_order(
      const ::printing::mojom::PwgRasterSettingsPtr& input) {
    return input->reverse_page_order;
  }

  static decltype(::printing::mojom::PwgRasterSettings::use_color) use_color(
      const ::printing::mojom::PwgRasterSettingsPtr& input) {
    return input->use_color;
  }

  static bool Read(::printing::mojom::PwgRasterSettings::DataView input, ::printing::mojom::PwgRasterSettingsPtr* output);
};

}  // namespace mojo

#endif  // CHROME_SERVICES_PRINTING_PUBLIC_MOJOM_PDF_TO_PWG_RASTER_CONVERTER_MOJOM_H_