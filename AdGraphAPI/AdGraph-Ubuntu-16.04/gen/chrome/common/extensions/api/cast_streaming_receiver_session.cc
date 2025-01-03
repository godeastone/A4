// Copyright (c) 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   chrome/common/extensions/api/cast_streaming_receiver_session.idl
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "base/values.h"
#include "chrome/common/extensions/api/cast_streaming_receiver_session.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace cast_streaming_receiver_session {
//
// Types
//

IPEndPoint::IPEndPoint()
: port(0) {}

IPEndPoint::~IPEndPoint() {}
IPEndPoint::IPEndPoint(IPEndPoint&& rhs)
: address(std::move(rhs.address)),
port(rhs.port){
}

IPEndPoint& IPEndPoint::operator=(IPEndPoint&& rhs)
{
address = std::move(rhs.address);
port = rhs.port;
return *this;
}

// static
bool IPEndPoint::Populate(
    const base::Value& value, IPEndPoint* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* address_value = NULL;
  if (!dict->GetWithoutPathExpansion("address", &address_value)) {
    return false;
  }
  {
    if (!address_value->GetAsString(&out->address)) {
      return false;
    }
  }

  const base::Value* port_value = NULL;
  if (!dict->GetWithoutPathExpansion("port", &port_value)) {
    return false;
  }
  {
    if (!port_value->GetAsInteger(&out->port)) {
      return false;
    }
  }

  return true;
}

// static
std::unique_ptr<IPEndPoint> IPEndPoint::FromValue(const base::Value& value) {
  std::unique_ptr<IPEndPoint> out(new IPEndPoint());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> IPEndPoint::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("address", std::make_unique<base::Value>(this->address));

  value->SetWithoutPathExpansion("port", std::make_unique<base::Value>(this->port));


  return value;
}


RtpReceiverParams::RtpReceiverParams()
: max_latency(0),
sender_ssrc(0),
receiver_ssrc(0) {}

RtpReceiverParams::~RtpReceiverParams() {}
RtpReceiverParams::RtpReceiverParams(RtpReceiverParams&& rhs)
: max_latency(rhs.max_latency),
codec_name(std::move(rhs.codec_name)),
sender_ssrc(rhs.sender_ssrc),
receiver_ssrc(rhs.receiver_ssrc),
rtp_timebase(std::move(rhs.rtp_timebase)),
aes_key(std::move(rhs.aes_key)),
aes_iv_mask(std::move(rhs.aes_iv_mask)){
}

RtpReceiverParams& RtpReceiverParams::operator=(RtpReceiverParams&& rhs)
{
max_latency = rhs.max_latency;
codec_name = std::move(rhs.codec_name);
sender_ssrc = rhs.sender_ssrc;
receiver_ssrc = rhs.receiver_ssrc;
rtp_timebase = std::move(rhs.rtp_timebase);
aes_key = std::move(rhs.aes_key);
aes_iv_mask = std::move(rhs.aes_iv_mask);
return *this;
}

// static
bool RtpReceiverParams::Populate(
    const base::Value& value, RtpReceiverParams* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* max_latency_value = NULL;
  if (!dict->GetWithoutPathExpansion("maxLatency", &max_latency_value)) {
    return false;
  }
  {
    if (!max_latency_value->GetAsInteger(&out->max_latency)) {
      return false;
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

  const base::Value* sender_ssrc_value = NULL;
  if (!dict->GetWithoutPathExpansion("senderSsrc", &sender_ssrc_value)) {
    return false;
  }
  {
    if (!sender_ssrc_value->GetAsInteger(&out->sender_ssrc)) {
      return false;
    }
  }

  const base::Value* receiver_ssrc_value = NULL;
  if (!dict->GetWithoutPathExpansion("receiverSsrc", &receiver_ssrc_value)) {
    return false;
  }
  {
    if (!receiver_ssrc_value->GetAsInteger(&out->receiver_ssrc)) {
      return false;
    }
  }

  const base::Value* rtp_timebase_value = NULL;
  if (dict->GetWithoutPathExpansion("rtpTimebase", &rtp_timebase_value)) {
    {
      int temp;
      if (!rtp_timebase_value->GetAsInteger(&temp)) {
        out->rtp_timebase.reset();
        return false;
      }
      else
        out->rtp_timebase.reset(new int(temp));
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

  return true;
}

// static
std::unique_ptr<RtpReceiverParams> RtpReceiverParams::FromValue(const base::Value& value) {
  std::unique_ptr<RtpReceiverParams> out(new RtpReceiverParams());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> RtpReceiverParams::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("maxLatency", std::make_unique<base::Value>(this->max_latency));

  value->SetWithoutPathExpansion("codecName", std::make_unique<base::Value>(this->codec_name));

  value->SetWithoutPathExpansion("senderSsrc", std::make_unique<base::Value>(this->sender_ssrc));

  value->SetWithoutPathExpansion("receiverSsrc", std::make_unique<base::Value>(this->receiver_ssrc));

  if (this->rtp_timebase.get()) {
    value->SetWithoutPathExpansion("rtpTimebase", std::make_unique<base::Value>(*this->rtp_timebase));

  }
  if (this->aes_key.get()) {
    value->SetWithoutPathExpansion("aesKey", std::make_unique<base::Value>(*this->aes_key));

  }
  if (this->aes_iv_mask.get()) {
    value->SetWithoutPathExpansion("aesIvMask", std::make_unique<base::Value>(*this->aes_iv_mask));

  }

  return value;
}



}  // namespace cast_streaming_receiver_session
}  // namespace api
}  // namespace extensions

