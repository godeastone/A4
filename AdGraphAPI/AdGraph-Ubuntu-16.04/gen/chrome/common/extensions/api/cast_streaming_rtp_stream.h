// Copyright (c) 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   chrome/common/extensions/api/cast_streaming_rtp_stream.idl
// DO NOT EDIT.

#ifndef CHROME_COMMON_EXTENSIONS_API_CAST_STREAMING_RTP_STREAM_H__
#define CHROME_COMMON_EXTENSIONS_API_CAST_STREAMING_RTP_STREAM_H__

#include <stdint.h>

#include <map>
#include <memory>
#include <string>
#include <vector>

#include "base/logging.h"
#include "base/values.h"

namespace extensions {
namespace api {
namespace cast_streaming_rtp_stream {

//
// Types
//

struct CodecSpecificParams {
  CodecSpecificParams();
  ~CodecSpecificParams();
  CodecSpecificParams(CodecSpecificParams&& rhs);
  CodecSpecificParams& operator=(CodecSpecificParams&& rhs);

  // Populates a CodecSpecificParams object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, CodecSpecificParams* out);

  // Creates a CodecSpecificParams object from a base::Value, or NULL on
  // failure.
  static std::unique_ptr<CodecSpecificParams> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this CodecSpecificParams object.
  std::unique_ptr<base::DictionaryValue> ToValue() const;

  std::string key;

  std::string value;


 private:
  DISALLOW_COPY_AND_ASSIGN(CodecSpecificParams);
};

struct RtpPayloadParams {
  RtpPayloadParams();
  ~RtpPayloadParams();
  RtpPayloadParams(RtpPayloadParams&& rhs);
  RtpPayloadParams& operator=(RtpPayloadParams&& rhs);

  // Populates a RtpPayloadParams object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, RtpPayloadParams* out);

  // Creates a RtpPayloadParams object from a base::Value, or NULL on failure.
  static std::unique_ptr<RtpPayloadParams> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this RtpPayloadParams object.
  std::unique_ptr<base::DictionaryValue> ToValue() const;

  int payload_type;

  // Maximum latency in milliseconds. This parameter controls the logic of flow
  // control. Implementation can adjust latency adaptively and tries to keep it
  // under this threshold. A larger value allows smoother playback at the cost of
  // higher latency.
  int max_latency;

  // Minimum latency in milliseconds. Defaults to |maxLatency|.
  std::unique_ptr<int> min_latency;

  // Starting latency for animated content in milliseconds. Defaults to
  // |maxLatency|.
  std::unique_ptr<int> animated_latency;

  std::string codec_name;

  // Synchronization source identifier.
  int ssrc;

  int feedback_ssrc;

  std::unique_ptr<int> clock_rate;

  // Minimum bitrate in kilobits per second.
  std::unique_ptr<int> min_bitrate;

  // Maximum bitrate in kilobits per second.
  std::unique_ptr<int> max_bitrate;

  // The number of channels.
  std::unique_ptr<int> channels;

  // The maximum frame rate.
  std::unique_ptr<double> max_frame_rate;

  // 32 bytes hex-encoded AES key.
  std::unique_ptr<std::string> aes_key;

  // 32 bytes hex-encoded AES IV (Initialization vector) mask.
  std::unique_ptr<std::string> aes_iv_mask;

  // A list of codec specific params.
  std::vector<CodecSpecificParams> codec_specific_params;


 private:
  DISALLOW_COPY_AND_ASSIGN(RtpPayloadParams);
};

struct RtpParams {
  RtpParams();
  ~RtpParams();
  RtpParams(RtpParams&& rhs);
  RtpParams& operator=(RtpParams&& rhs);

  // Populates a RtpParams object from a base::Value. Returns whether |out| was
  // successfully populated.
  static bool Populate(const base::Value& value, RtpParams* out);

  // Creates a RtpParams object from a base::Value, or NULL on failure.
  static std::unique_ptr<RtpParams> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this RtpParams object.
  std::unique_ptr<base::DictionaryValue> ToValue() const;

  // RTP payload params.
  RtpPayloadParams payload;

  std::vector<std::string> rtcp_features;


 private:
  DISALLOW_COPY_AND_ASSIGN(RtpParams);
};


//
// Events
//

namespace OnStarted {

extern const char kEventName[];  // "cast.streaming.rtpStream.onStarted"

// The ID of the RTP stream.
std::unique_ptr<base::ListValue> Create(int stream_id);
}  // namespace OnStarted

namespace OnStopped {

extern const char kEventName[];  // "cast.streaming.rtpStream.onStopped"

// The ID of the RTP stream.
std::unique_ptr<base::ListValue> Create(int stream_id);
}  // namespace OnStopped

namespace OnError {

extern const char kEventName[];  // "cast.streaming.rtpStream.onError"

// The ID of the RTP stream.
// The error info.
std::unique_ptr<base::ListValue> Create(int stream_id, const std::string& error_string);
}  // namespace OnError

}  // namespace cast_streaming_rtp_stream
}  // namespace api
}  // namespace extensions
#endif  // CHROME_COMMON_EXTENSIONS_API_CAST_STREAMING_RTP_STREAM_H__
