// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 494884711 value is based on sha256(salt + "VideoFrameHandleReleaser1").
constexpr uint32_t kVideoFrameHandleReleaser_ReleaseVideoFrame_Name = 494884711;
// The 514685884 value is based on sha256(salt + "VideoDecoder1").
constexpr uint32_t kVideoDecoder_Construct_Name = 514685884;
// The 1465544223 value is based on sha256(salt + "VideoDecoder2").
constexpr uint32_t kVideoDecoder_Initialize_Name = 1465544223;
// The 473400812 value is based on sha256(salt + "VideoDecoder3").
constexpr uint32_t kVideoDecoder_Decode_Name = 473400812;
// The 1135541172 value is based on sha256(salt + "VideoDecoder4").
constexpr uint32_t kVideoDecoder_Reset_Name = 1135541172;
// The 609577922 value is based on sha256(salt + "VideoDecoder5").
constexpr uint32_t kVideoDecoder_OnOverlayInfoChanged_Name = 609577922;
// The 108638112 value is based on sha256(salt + "VideoDecoderClient1").
constexpr uint32_t kVideoDecoderClient_OnVideoFrameDecoded_Name = 108638112;
// The 965331124 value is based on sha256(salt + "VideoDecoderClient2").
constexpr uint32_t kVideoDecoderClient_RequestOverlayInfo_Name = 965331124;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_SHARED_MESSAGE_IDS_H_