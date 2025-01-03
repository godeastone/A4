// Copyright (c) 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   chrome/common/extensions/api/cast_streaming_rtp_stream.idl
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "base/values.h"
#include "chrome/common/extensions/api/cast_streaming_rtp_stream.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace cast_streaming_rtp_stream {
//
// Types
//

CodecSpecificParams::CodecSpecificParams()
 {}

CodecSpecificParams::~CodecSpecificParams() {}
CodecSpecificParams::CodecSpecificParams(CodecSpecificParams&& rhs)
: key(std::move(rhs.key)),
value(std::move(rhs.value)){
}

CodecSpecificParams& CodecSpecificParams::operator=(CodecSpecificParams&& rhs)
{
key = std::move(rhs.key);
value = std::move(rhs.value);
return *this;
}

// static
bool CodecSpecificParams::Populate(
    const base::Value& value, CodecSpecificParams* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* key_value = NULL;
  if (!dict->GetWithoutPathExpansion("key", &key_value)) {
    return false;
  }
  {
    if (!key_value->GetAsString(&out->key)) {
      return false;
    }
  }

  const base::Value* value_value = NULL;
  if (!dict->GetWithoutPathExpansion("value", &value_value)) {
    return false;
  }
  {
    if (!value_value->GetAsString(&out->value)) {
      return false;
    }
  }

  return true;
}

// static
std::unique_ptr<CodecSpecificParams> CodecSpecificParams::FromValue(const base::Value& value) {
  std::unique_ptr<CodecSpecificParams> out(new CodecSpecificParams());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> CodecSpecificParams::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("key", std::make_unique<base::Value>(this->key));

  value->SetWithoutPathExpansion("value", std::make_unique<base::Value>(this->value));


  return value;
}


RtpPayloadParams::RtpPayloadParams()
: payload_type(0),
max_latency(0),
ssrc(0),
feedback_ssrc(0) {}

RtpPayloadParams::~RtpPayloadParams() {}
RtpPayloadParams::RtpPayloadParams(RtpPayloadParams&& rhs)
: payload_type(rhs.payload_type),
max_latency(rhs.max_latency),
min_latency(std::move(rhs.min_latency)),
animated_latency(std::move(rhs.animated_latency)),
codec_name(std::move(rhs.codec_name)),
ssrc(rhs.ssrc),
feedback_ssrc(rhs.feedback_ssrc),
clock_rate(std::move(rhs.clock_rate)),
min_bitrate(std::move(rhs.min_bitrate)),
max_bitrate(std::move(rhs.max_bitrate)),
channels(std::move(rhs.channels)),
max_frame_rate(std::move(rhs.max_frame_rate)),
aes_key(std::move(rhs.aes_key)),
aes_iv_mask(std::move(rhs.aes_iv_mask)),
codec_specific_params(std::move(rhs.codec_specific_params)){
}

RtpPayloadParams& RtpPayloadParams::operator=(RtpPayloadParams&& rhs)
{
payload_type = rhs.payload_type;
max_latency = rhs.max_latency;
min_latency = std::move(rhs.min_latency);
animated_latency = std::move(rhs.animated_latency);
codec_name = std::move(rhs.codec_name);
ssrc = rhs.ssrc;
feedback_ssrc = rhs.feedback_ssrc;
clock_rate = std::move(rhs.clock_rate);
min_bitrate = std::move(rhs.min_bitrate);
max_bitrate = std::move(rhs.max_bitrate);
channels = std::move(rhs.channels);
max_frame_rate = std::move(rhs.max_frame_rate);
aes_key = std::move(rhs.aes_key);
aes_iv_mask = std::move(rhs.aes_iv_mask);
codec_specific_params = std::move(rhs.codec_specific_params);
return *this;
}

// static
bool RtpPayloadParams::Populate(
    const base::Value& value, RtpPayloadParams* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* payload_type_value = NULL;
  if (!dict->GetWithoutPathExpansion("payloadType", &payload_type_value)) {
    return false;
  }
  {
    if (!payload_type_value->GetAsInteger(&out->payload_type)) {
      return false;
    }
  }

  const base::Value* max_latency_value = NULL;
  if (!dict->GetWithoutPathExpansion("maxLatency", &max_latency_value)) {
    return false;
  }
  {
    if (!max_latency_value->GetAsInteger(&out->max_latency)) {
      return false;
    }
  }

  const base::Value* min_latency_value = NULL;
  if (dict->GetWithoutPathExpansion("minLatency", &min_latency_value)) {
    {
      int temp;
      if (!min_latency_value->GetAsInteger(&temp)) {
        out->min_latency.reset();
        return false;
      }
      else
        out->min_latency.reset(new int(temp));
    }
  }

  const base::Value* animated_latency_value = NULL;
  if (dict->GetWithoutPathExpansion("animatedLatency", &animated_latency_value)) {
    {
      int temp;
      if (!animated_latency_value->GetAsInteger(&temp)) {
        out->animated_latency.reset();
        return false;
      }
      else
        out->animated_latency.reset(new int(temp));
    }
  }

  const base::Value* codec_name_value = NULL;
  if (!dict->GetWithoutPathExpansion("codecName", &codec_name_value)) {
    return false;
  }
  {
    if (!codec_name_value->GetAsString(&out->codec_name)) {
      return false;
    }
  }

  const base::Value* ssrc_value = NULL;
  if (!dict->GetWithoutPathExpansion("ssrc", &ssrc_value)) {
    return false;
  }
  {
    if (!ssrc_value->GetAsInteger(&out->ssrc)) {
      return false;
    }
  }

  const base::Value* feedback_ssrc_value = NULL;
  if (!dict->GetWithoutPathExpansion("feedbackSsrc", &feedback_ssrc_value)) {
    return false;
  }
  {
    if (!feedback_ssrc_value->GetAsInteger(&out->feedback_ssrc)) {
      return false;
    }
  }

  const base::Value* clock_rate_value = NULL;
  if (dict->GetWithoutPathExpansion("clockRate", &clock_rate_value)) {
    {
      int temp;
      if (!clock_rate_value->GetAsInteger(&temp)) {
        out->clock_rate.reset();
        return false;
      }
      else
        out->clock_rate.reset(new int(temp));
    }
  }

  const base::Value* min_bitrate_value = NULL;
  if (dict->GetWithoutPathExpansion("minBitrate", &min_bitrate_value)) {
    {
      int temp;
      if (!min_bitrate_value->GetAsInteger(&temp)) {
        out->min_bitrate.reset();
        return false;
      }
      else
        out->min_bitrate.reset(new int(temp));
    }
  }

  const base::Value* max_bitrate_value = NULL;
  if (dict->GetWithoutPathExpansion("maxBitrate", &max_bitrate_value)) {
    {
      int temp;
      if (!max_bitrate_value->GetAsInteger(&temp)) {
        out->max_bitrate.reset();
        return false;
      }
      else
        out->max_bitrate.reset(new int(temp));
    }
  }

  const base::Value* channels_value = NULL;
  if (dict->GetWithoutPathExpansion("channels", &channels_value)) {
    {
      int temp;
      if (!channels_value->GetAsInteger(&temp)) {
        out->channels.reset();
        return false;
      }
      else
        out->channels.reset(new int(temp));
    }
  }

  const base::Value* max_frame_rate_value = NULL;
  if (dict->GetWithoutPathExpansion("maxFrameRate", &max_frame_rate_value)) {
    {
      double temp;
      if (!max_frame_rate_value->GetAsDouble(&temp)) {
        out->max_frame_rate.reset();
        return false;
      }
      else
        out->max_frame_rate.reset(new double(temp));
    }
  }

  const base::Value* aes_key_value = NULL;
  if (dict->GetWithoutPathExpansion("aesKey", &aes_key_value)) {
    {
      std::string temp;
      if (!aes_key_value->GetAsString(&temp)) {
        out->aes_key.reset();
        return false;
      }
      else
        out->aes_key.reset(new std::string(temp));
    }
  }

  const base::Value* aes_iv_mask_value = NULL;
  if (dict->GetWithoutPathExpansion("aesIvMask", &aes_iv_mask_value)) {
    {
      std::string temp;
      if (!aes_iv_mask_value->GetAsString(&temp)) {
        out->aes_iv_mask.reset();
        return false;
      }
      else
        out->aes_iv_mask.reset(new std::string(temp));
    }
  }

  const base::Value* codec_specific_params_value = NULL;
  if (!dict->GetWithoutPathExpansion("codecSpecificParams", &codec_specific_params_value)) {
    return false;
  }
  {
    const base::ListValue* list = NULL;
    if (!codec_specific_params_value->GetAsList(&list)) {
      return false;
    }
    else {
      if (!json_schema_compiler::util::PopulateArrayFromList(*list, &out->codec_specific_params)) {
        return false;
      }
    }
  }

  return true;
}

// static
std::unique_ptr<RtpPayloadParams> RtpPayloadParams::FromValue(const base::Value& value) {
  std::unique_ptr<RtpPayloadParams> out(new RtpPayloadParams());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> RtpPayloadParams::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("payloadType", std::make_unique<base::Value>(this->payload_type));

  value->SetWithoutPathExpansion("maxLatency", std::make_unique<base::Value>(this->max_latency));

  if (this->min_latency.get()) {
    value->SetWithoutPathExpansion("minLatency", std::make_unique<base::Value>(*this->min_latency));

  }
  if (this->animated_latency.get()) {
    value->SetWithoutPathExpansion("animatedLatency", std::make_unique<base::Value>(*this->animated_latency));

  }
  value->SetWithoutPathExpansion("codecName", std::make_unique<base::Value>(this->codec_name));

  value->SetWithoutPathExpansion("ssrc", std::make_unique<base::Value>(this->ssrc));

  value->SetWithoutPathExpansion("feedbackSsrc", std::make_unique<base::Value>(this->feedback_ssrc));

  if (this->clock_rate.get()) {
    value->SetWithoutPathExpansion("clockRate", std::make_unique<base::Value>(*this->clock_rate));

  }
  if (this->min_bitrate.get()) {
    value->SetWithoutPathExpansion("minBitrate", std::make_unique<base::Value>(*this->min_bitrate));

  }
  if (this->max_bitrate.get()) {
    value->SetWithoutPathExpansion("maxBitrate", std::make_unique<base::Value>(*this->max_bitrate));

  }
  if (this->channels.get()) {
    value->SetWithoutPathExpansion("channels", std::make_unique<base::Value>(*this->channels));

  }
  if (this->max_frame_rate.get()) {
    value->SetWithoutPathExpansion("maxFrameRate", std::make_unique<base::Value>(*this->max_frame_rate));

  }
  if (this->aes_key.get()) {
    value->SetWithoutPathExpansion("aesKey", std::make_unique<base::Value>(*this->aes_key));

  }
  if (this->aes_iv_mask.get()) {
    value->SetWithoutPathExpansion("aesIvMask", std::make_unique<base::Value>(*this->aes_iv_mask));

  }
  value->SetWithoutPathExpansion("codecSpecificParams", json_schema_compiler::util::CreateValueFromArray(this->codec_specific_params));


  return value;
}


RtpParams::RtpParams()
 {}

RtpParams::~RtpParams() {}
RtpParams::RtpParams(RtpParams&& rhs)
: payload(std::move(rhs.payload)),
rtcp_features(std::move(rhs.rtcp_features)){
}

RtpParams& RtpParams::operator=(RtpParams&& rhs)
{
payload = std::move(rhs.payload);
rtcp_features = std::move(rhs.rtcp_features);
return *this;
}

// static
bool RtpParams::Populate(
    const base::Value& value, RtpParams* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* payload_value = NULL;
  if (!dict->GetWithoutPathExpansion("payload", &payload_value)) {
    return false;
  }
  {
    const base::DictionaryValue* dictionary = NULL;
    if (!payload_value->GetAsDictionary(&dictionary)) {
      return false;
    }
    if (!RtpPayloadParams::Populate(*dictionary, &out->payload)) {
      return false;
    }
  }

  const base::Value* rtcp_features_value = NULL;
  if (!dict->GetWithoutPathExpansion("rtcpFeatures", &rtcp_features_value)) {
    return false;
  }
  {
    const base::ListValue* list = NULL;
    if (!rtcp_features_value->GetAsList(&list)) {
      return false;
    }
    else {
      if (!json_schema_compiler::util::PopulateArrayFromList(*list, &out->rtcp_features)) {
        return false;
      }
    }
  }

  return true;
}

// static
std::unique_ptr<RtpParams> RtpParams::FromValue(const base::Value& value) {
  std::unique_ptr<RtpParams> out(new RtpParams());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> RtpParams::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("payload", (this->payload).ToValue());

  value->SetWithoutPathExpansion("rtcpFeatures", json_schema_compiler::util::CreateValueFromArray(this->rtcp_features));


  return value;
}



//
// Events
//

namespace OnStarted {

const char kEventName[] = "cast.streaming.rtpStream.onStarted";

std::unique_ptr<base::ListValue> Create(int stream_id) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(std::make_unique<base::Value>(stream_id));

  return create_results;
}

}  // namespace OnStarted

namespace OnStopped {

const char kEventName[] = "cast.streaming.rtpStream.onStopped";

std::unique_ptr<base::ListValue> Create(int stream_id) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(std::make_unique<base::Value>(stream_id));

  return create_results;
}

}  // namespace OnStopped

namespace OnError {

const char kEventName[] = "cast.streaming.rtpStream.onError";

std::unique_ptr<base::ListValue> Create(int stream_id, const std::string& error_string) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(std::make_unique<base::Value>(stream_id));

  create_results->Append(std::make_unique<base::Value>(error_string));

  return create_results;
}

}  // namespace OnError

}  // namespace cast_streaming_rtp_stream
}  // namespace api
}  // namespace extensions

