// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_MEDIA_METRICS_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_MEDIA_METRICS_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 761006356 value is based on sha256(salt + "MediaMetricsProvider1").
constexpr uint32_t kMediaMetricsProvider_Initialize_Name = 761006356;
// The 1736668419 value is based on sha256(salt + "MediaMetricsProvider2").
constexpr uint32_t kMediaMetricsProvider_OnError_Name = 1736668419;
// The 547466812 value is based on sha256(salt + "MediaMetricsProvider3").
constexpr uint32_t kMediaMetricsProvider_SetIsEME_Name = 547466812;
// The 1400423518 value is based on sha256(salt + "MediaMetricsProvider4").
constexpr uint32_t kMediaMetricsProvider_SetTimeToMetadata_Name = 1400423518;
// The 2035000106 value is based on sha256(salt + "MediaMetricsProvider5").
constexpr uint32_t kMediaMetricsProvider_SetTimeToFirstFrame_Name = 2035000106;
// The 2137574108 value is based on sha256(salt + "MediaMetricsProvider6").
constexpr uint32_t kMediaMetricsProvider_SetTimeToPlayReady_Name = 2137574108;
// The 682263891 value is based on sha256(salt + "MediaMetricsProvider7").
constexpr uint32_t kMediaMetricsProvider_AcquireWatchTimeRecorder_Name = 682263891;
// The 1495064224 value is based on sha256(salt + "MediaMetricsProvider8").
constexpr uint32_t kMediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Name = 1495064224;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_MEDIA_METRICS_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_