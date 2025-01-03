// Copyright (c) 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   chrome/common/extensions/api/cast_streaming_udp_transport.idl
// DO NOT EDIT.

#ifndef CHROME_COMMON_EXTENSIONS_API_CAST_STREAMING_UDP_TRANSPORT_H__
#define CHROME_COMMON_EXTENSIONS_API_CAST_STREAMING_UDP_TRANSPORT_H__

#include <stdint.h>

#include <map>
#include <memory>
#include <string>
#include <vector>

#include "base/logging.h"
#include "base/values.h"

namespace extensions {
namespace api {
namespace cast_streaming_udp_transport {

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


}  // namespace cast_streaming_udp_transport
}  // namespace api
}  // namespace extensions
#endif  // CHROME_COMMON_EXTENSIONS_API_CAST_STREAMING_UDP_TRANSPORT_H__
