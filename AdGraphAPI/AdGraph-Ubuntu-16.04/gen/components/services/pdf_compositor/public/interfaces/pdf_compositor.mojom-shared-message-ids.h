// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_PDF_COMPOSITOR_PUBLIC_INTERFACES_PDF_COMPOSITOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_SERVICES_PDF_COMPOSITOR_PUBLIC_INTERFACES_PDF_COMPOSITOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace printing {
namespace mojom {

namespace internal {


// The 379986231 value is based on sha256(salt + "PdfCompositor1").
constexpr uint32_t kPdfCompositor_NotifyUnavailableSubframe_Name = 379986231;
// The 1242695176 value is based on sha256(salt + "PdfCompositor2").
constexpr uint32_t kPdfCompositor_AddSubframeContent_Name = 1242695176;
// The 113984751 value is based on sha256(salt + "PdfCompositor3").
constexpr uint32_t kPdfCompositor_CompositePageToPdf_Name = 113984751;
// The 694032441 value is based on sha256(salt + "PdfCompositor4").
constexpr uint32_t kPdfCompositor_CompositeDocumentToPdf_Name = 694032441;
// The 893106422 value is based on sha256(salt + "PdfCompositor5").
constexpr uint32_t kPdfCompositor_SetWebContentsURL_Name = 893106422;

}  // namespace internal
}  // namespace mojom
}  // namespace printing

#endif  // COMPONENTS_SERVICES_PDF_COMPOSITOR_PUBLIC_INTERFACES_PDF_COMPOSITOR_MOJOM_SHARED_MESSAGE_IDS_H_