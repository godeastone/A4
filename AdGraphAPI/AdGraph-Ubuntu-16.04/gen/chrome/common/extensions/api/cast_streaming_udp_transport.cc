// Copyright (c) 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   chrome/common/extensions/api/cast_streaming_udp_transport.idl
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "base/values.h"
#include "chrome/common/extensions/api/cast_streaming_udp_transport.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace cast_streaming_udp_transport {
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



}  // namespace cast_streaming_udp_transport
}  // namespace api
}  // namespace extensions

