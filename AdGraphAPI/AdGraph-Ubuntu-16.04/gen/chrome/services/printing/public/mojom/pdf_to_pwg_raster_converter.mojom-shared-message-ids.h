// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_SERVICES_PRINTING_PUBLIC_MOJOM_PDF_TO_PWG_RASTER_CONVERTER_MOJOM_SHARED_MESSAGE_IDS_H_
#define CHROME_SERVICES_PRINTING_PUBLIC_MOJOM_PDF_TO_PWG_RASTER_CONVERTER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace printing {
namespace mojom {

namespace internal {


// The 1616665990 value is based on sha256(salt + "PdfToPwgRasterConverter1").
constexpr uint32_t kPdfToPwgRasterConverter_Convert_Name = 1616665990;

}  // namespace internal
}  // namespace mojom
}  // namespace printing

#endif  // CHROME_SERVICES_PRINTING_PUBLIC_MOJOM_PDF_TO_PWG_RASTER_CONVERTER_MOJOM_SHARED_MESSAGE_IDS_H_