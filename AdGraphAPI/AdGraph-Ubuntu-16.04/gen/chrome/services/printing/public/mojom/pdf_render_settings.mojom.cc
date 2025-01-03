// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "chrome/services/printing/public/mojom/pdf_render_settings.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/logging.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "chrome/services/printing/public/mojom/pdf_render_settings.mojom-shared-message-ids.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
namespace printing {
namespace mojom {
PdfRenderSettings::PdfRenderSettings()
    : area(),
      offsets(),
      dpi(),
      autorotate(),
      use_color(),
      mode() {}

PdfRenderSettings::PdfRenderSettings(
    const gfx::Rect& area_in,
    const gfx::Point& offsets_in,
    const gfx::Size& dpi_in,
    bool autorotate_in,
    bool use_color_in,
    PdfRenderSettings::Mode mode_in)
    : area(std::move(area_in)),
      offsets(std::move(offsets_in)),
      dpi(std::move(dpi_in)),
      autorotate(std::move(autorotate_in)),
      use_color(std::move(use_color_in)),
      mode(std::move(mode_in)) {}

PdfRenderSettings::~PdfRenderSettings() = default;

bool PdfRenderSettings::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace printing

namespace mojo {


// static
bool StructTraits<::printing::mojom::PdfRenderSettings::DataView, ::printing::mojom::PdfRenderSettingsPtr>::Read(
    ::printing::mojom::PdfRenderSettings::DataView input,
    ::printing::mojom::PdfRenderSettingsPtr* output) {
  bool success = true;
  ::printing::mojom::PdfRenderSettingsPtr result(::printing::mojom::PdfRenderSettings::New());
  
      if (!input.ReadArea(&result->area))
        success = false;
      if (!input.ReadOffsets(&result->offsets))
        success = false;
      if (!input.ReadDpi(&result->dpi))
        success = false;
      result->autorotate = input.autorotate();
      result->use_color = input.use_color();
      if (!input.ReadMode(&result->mode))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif