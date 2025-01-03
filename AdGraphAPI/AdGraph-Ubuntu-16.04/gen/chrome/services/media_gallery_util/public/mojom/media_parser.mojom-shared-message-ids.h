// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_SERVICES_MEDIA_GALLERY_UTIL_PUBLIC_MOJOM_MEDIA_PARSER_MOJOM_SHARED_MESSAGE_IDS_H_
#define CHROME_SERVICES_MEDIA_GALLERY_UTIL_PUBLIC_MOJOM_MEDIA_PARSER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace chrome {
namespace mojom {

namespace internal {


// The 1892145261 value is based on sha256(salt + "MediaParser1").
constexpr uint32_t kMediaParser_ParseMediaMetadata_Name = 1892145261;
// The 1214868700 value is based on sha256(salt + "MediaParser2").
constexpr uint32_t kMediaParser_CheckMediaFile_Name = 1214868700;
// The 1686191116 value is based on sha256(salt + "MediaParser3").
constexpr uint32_t kMediaParser_GetCpuInfo_Name = 1686191116;
// The 1957734989 value is based on sha256(salt + "MediaParserFactory1").
constexpr uint32_t kMediaParserFactory_CreateMediaParser_Name = 1957734989;
// The 165591657 value is based on sha256(salt + "MediaDataSource1").
constexpr uint32_t kMediaDataSource_Read_Name = 165591657;

}  // namespace internal
}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_SERVICES_MEDIA_GALLERY_UTIL_PUBLIC_MOJOM_MEDIA_PARSER_MOJOM_SHARED_MESSAGE_IDS_H_