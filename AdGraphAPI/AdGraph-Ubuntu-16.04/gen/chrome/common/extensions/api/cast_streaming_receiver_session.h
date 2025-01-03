// Copyright (c) 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   chrome/common/extensions/api/cast_streaming_receiver_session.idl
// DO NOT EDIT.

#ifndef CHROME_COMMON_EXTENSIONS_API_CAST_STREAMING_RECEIVER_SESSION_H__
#define CHROME_COMMON_EXTENSIONS_API_CAST_STREAMING_RECEIVER_SESSION_H__

#include <stdint.h>

#include <map>
#include <memory>
#include <string>
#include <vector>

#include "base/logging.h"
#include "base/values.h"

namespace extensions {
namespace api {
namespace cast_streaming_receiver_session {

//
// Types
//

struct IPEndPoint {
  IPEndPoint();
  ~IPEndPoint();
  IPEndPoint(IPEndPoint&& rhs);
  IPEndPoint& operator=(IPEndPoint&& rhs);

  // Populates a IPEndPoint object from a base::Value. Returns whether |out| was
  // successfully populated.
  static bool Populate(const base::Value& value, IPEndPoint* out);

  // Creates a IPEndPoint object from a base::Value, or NULL on failure.
  static std::unique_ptr<IPEndPoint> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this IPEndPoint object.
  std::unique_ptr<base::DictionaryValue> ToValue() const;

  std::string address;

  int port;


 private:
  DISALLOW_COPY_AND_ASSIGN(IPEndPoint);
};

struct RtpReceiverParams {
  RtpReceiverParams();
  ~RtpReceiverParams();
  RtpReceiverParams(RtpReceiverParams&& rhs);
  RtpReceiverParams& operator=(RtpReceiverParams&& rhs);

  // Populates a RtpReceiverParams object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, RtpReceiverParams* out);

  // Creates a RtpReceiverParams object from a base::Value, or NULL on failure.
  static std::unique_ptr<RtpReceiverParams> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this RtpReceiverParams object.
  std::unique_ptr<base::DictionaryValue> ToValue() const;

  // Maximum latency in milliseconds. This parameter controls the logic of flow
  // control. Implementation can adjust latency adaptively and tries to keep it
  // under this threshold. A larger value allows smoother playback at the cost of
  // higher latency.
  int max_latency;

  std::string codec_name;

  // Synchronization source identifier for incoming data.
  int sender_ssrc;

  // The SSRC used to send RTCP reports back to the sender.
  int receiver_ssrc;

  // RTP time units per second, defaults to 48000 for audio and 90000 for video.
  std::unique_ptr<int> rtp_timebase;

  // 32 bytes hex-encoded AES key.
  std::unique_ptr<std::string> aes_key;

  // 32 bytes hex-encoded AES IV (Initialization vector) mask.
  std::unique_ptr<std::string> aes_iv_mask;


 private:
  DISALLOW_COPY_AND_ASSIGN(RtpReceiverParams);
};


}  // namespace cast_streaming_receiver_session
}  // namespace api
}  // namespace extensions
#endif  // CHROME_COMMON_EXTENSIONS_API_CAST_STREAMING_RECEIVER_SESSION_H__
