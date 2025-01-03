// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_SERVICES_PRINTING_PUBLIC_MOJOM_PDF_RENDER_SETTINGS_MOJOM_H_
#define CHROME_SERVICES_PRINTING_PUBLIC_MOJOM_PDF_RENDER_SETTINGS_MOJOM_H_

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
#include "chrome/services/printing/public/mojom/pdf_render_settings.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
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
#include "printing/pdf_render_settings.h"
#include "ui/gfx/geometry/rect.h"


namespace printing {
namespace mojom {
class PdfRenderSettings;
using PdfRenderSettingsPtr = mojo::StructPtr<PdfRenderSettings>;






class  PdfRenderSettings {
 public:
  using DataView = PdfRenderSettingsDataView;
  using Data_ = internal::PdfRenderSettings_Data;using Mode = PdfRenderSettings_Mode;

  template <typename... Args>
  static PdfRenderSettingsPtr New(Args&&... args) {
    return PdfRenderSettingsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PdfRenderSettingsPtr From(const U& u) {
    return mojo::TypeConverter<PdfRenderSettingsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PdfRenderSettings>::Convert(*this);
  }


  PdfRenderSettings();

  PdfRenderSettings(
      const gfx::Rect& area,
      const gfx::Point& offsets,
      const gfx::Size& dpi,
      bool autorotate,
      bool use_color,
      PdfRenderSettings::Mode mode);

  ~PdfRenderSettings();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PdfRenderSettingsPtr>
  PdfRenderSettingsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PdfRenderSettings>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PdfRenderSettings::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PdfRenderSettings::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PdfRenderSettings_UnserializedMessageContext<
            UserType, PdfRenderSettings::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PdfRenderSettings::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PdfRenderSettings::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PdfRenderSettings_UnserializedMessageContext<
            UserType, PdfRenderSettings::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PdfRenderSettings::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  gfx::Rect area;
  gfx::Point offsets;
  gfx::Size dpi;
  bool autorotate;
  bool use_color;
  PdfRenderSettings::Mode mode;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
PdfRenderSettingsPtr PdfRenderSettings::Clone() const {
  return New(
      mojo::Clone(area),
      mojo::Clone(offsets),
      mojo::Clone(dpi),
      mojo::Clone(autorotate),
      mojo::Clone(use_color),
      mojo::Clone(mode)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PdfRenderSettings>::value>::type*>
bool PdfRenderSettings::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->area, other_struct.area))
    return false;
  if (!mojo::Equals(this->offsets, other_struct.offsets))
    return false;
  if (!mojo::Equals(this->dpi, other_struct.dpi))
    return false;
  if (!mojo::Equals(this->autorotate, other_struct.autorotate))
    return false;
  if (!mojo::Equals(this->use_color, other_struct.use_color))
    return false;
  if (!mojo::Equals(this->mode, other_struct.mode))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace printing

namespace mojo {


template <>
struct  StructTraits<::printing::mojom::PdfRenderSettings::DataView,
                                         ::printing::mojom::PdfRenderSettingsPtr> {
  static bool IsNull(const ::printing::mojom::PdfRenderSettingsPtr& input) { return !input; }
  static void SetToNull(::printing::mojom::PdfRenderSettingsPtr* output) { output->reset(); }

  static const decltype(::printing::mojom::PdfRenderSettings::area)& area(
      const ::printing::mojom::PdfRenderSettingsPtr& input) {
    return input->area;
  }

  static const decltype(::printing::mojom::PdfRenderSettings::offsets)& offsets(
      const ::printing::mojom::PdfRenderSettingsPtr& input) {
    return input->offsets;
  }

  static const decltype(::printing::mojom::PdfRenderSettings::dpi)& dpi(
      const ::printing::mojom::PdfRenderSettingsPtr& input) {
    return input->dpi;
  }

  static decltype(::printing::mojom::PdfRenderSettings::autorotate) autorotate(
      const ::printing::mojom::PdfRenderSettingsPtr& input) {
    return input->autorotate;
  }

  static decltype(::printing::mojom::PdfRenderSettings::use_color) use_color(
      const ::printing::mojom::PdfRenderSettingsPtr& input) {
    return input->use_color;
  }

  static decltype(::printing::mojom::PdfRenderSettings::mode) mode(
      const ::printing::mojom::PdfRenderSettingsPtr& input) {
    return input->mode;
  }

  static bool Read(::printing::mojom::PdfRenderSettings::DataView input, ::printing::mojom::PdfRenderSettingsPtr* output);
};

}  // namespace mojo

#endif  // CHROME_SERVICES_PRINTING_PUBLIC_MOJOM_PDF_RENDER_SETTINGS_MOJOM_H_