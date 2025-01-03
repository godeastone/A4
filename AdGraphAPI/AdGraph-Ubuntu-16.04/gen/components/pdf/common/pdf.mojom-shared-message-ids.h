// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_PDF_COMMON_PDF_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_PDF_COMMON_PDF_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace pdf {
namespace mojom {

namespace internal {


// The 432414411 value is based on sha256(salt + "PdfListener1").
constexpr uint32_t kPdfListener_SetCaretPosition_Name = 432414411;
// The 1824544741 value is based on sha256(salt + "PdfListener2").
constexpr uint32_t kPdfListener_MoveRangeSelectionExtent_Name = 1824544741;
// The 809400403 value is based on sha256(salt + "PdfListener3").
constexpr uint32_t kPdfListener_SetSelectionBounds_Name = 809400403;
// The 1018596724 value is based on sha256(salt + "PdfService1").
constexpr uint32_t kPdfService_SetListener_Name = 1018596724;
// The 1568257570 value is based on sha256(salt + "PdfService2").
constexpr uint32_t kPdfService_UpdateContentRestrictions_Name = 1568257570;
// The 1759345801 value is based on sha256(salt + "PdfService3").
constexpr uint32_t kPdfService_HasUnsupportedFeature_Name = 1759345801;
// The 713438600 value is based on sha256(salt + "PdfService4").
constexpr uint32_t kPdfService_SaveUrlAs_Name = 713438600;
// The 611475560 value is based on sha256(salt + "PdfService5").
constexpr uint32_t kPdfService_SelectionChanged_Name = 611475560;

}  // namespace internal
}  // namespace mojom
}  // namespace pdf

#endif  // COMPONENTS_PDF_COMMON_PDF_MOJOM_SHARED_MESSAGE_IDS_H_