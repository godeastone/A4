// Copyright (c) 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   chrome/common/extensions/api/permissions.json
// DO NOT EDIT.

#ifndef CHROME_COMMON_EXTENSIONS_API_PERMISSIONS_H__
#define CHROME_COMMON_EXTENSIONS_API_PERMISSIONS_H__

#include <stdint.h>

#include <map>
#include <memory>
#include <string>
#include <vector>

#include "base/logging.h"
#include "base/values.h"

namespace extensions {
namespace api {
namespace permissions {

//
// Types
//

struct Permissions {
  Permissions();
  ~Permissions();
  Permissions(Permissions&& rhs);
  Permissions& operator=(Permissions&& rhs);

  // Populates a Permissions object from a base::Value. Returns whether |out|
  // was successfully populated.
  static bool Populate(const base::Value& value, Permissions* out);

  // Creates a Permissions object from a base::Value, or NULL on failure.
  static std::unique_ptr<Permissions> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this Permissions object.
  std::unique_ptr<base::DictionaryValue> ToValue() const;

  // List of named permissions (does not include hosts or origins).  Anything
  // listed here must appear in the <code>optional_permissions</code> list in the
  // manifest.
  std::unique_ptr<std::vector<std::string>> permissions;

  // List of origin permissions. Anything listed here must be a subset of a host
  // that appears in the <code>optional_permissions</code> list in the manifest.
  // For example, if <code>http://*.example.com/</code> or <code>http://*/</code>
  // appears in <code>optional_permissions</code>, you can request an origin of
  // <code>http://help.example.com/</code>. Any path is ignored.
  std::unique_ptr<std::vector<std::string>> origins;


 private:
  DISALLOW_COPY_AND_ASSIGN(Permissions);
};


//
// Functions
//

namespace GetAll {

namespace Results {

// The extension's active permissions.
std::unique_ptr<base::ListValue> Create(const Permissions& permissions);
}  // namespace Results

}  // namespace GetAll

namespace Contains {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  Permissions permissions;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

// True if the extension has the specified permissions.
std::unique_ptr<base::ListValue> Create(bool result);
}  // namespace Results

}  // namespace Contains

namespace Request {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  Permissions permissions;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

// True if the user granted the specified permissions.
std::unique_ptr<base::ListValue> Create(bool granted);
}  // namespace Results

}  // namespace Request

namespace Remove {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  Permissions permissions;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

// True if the permissions were removed.
std::unique_ptr<base::ListValue> Create(bool removed);
}  // namespace Results

}  // namespace Remove

//
// Events
//

namespace OnAdded {

extern const char kEventName[];  // "permissions.onAdded"

// The newly acquired permissions.
std::unique_ptr<base::ListValue> Create(const Permissions& permissions);
}  // namespace OnAdded

namespace OnRemoved {

extern const char kEventName[];  // "permissions.onRemoved"

// The permissions that have been removed.
std::unique_ptr<base::ListValue> Create(const Permissions& permissions);
}  // namespace OnRemoved

}  // namespace permissions
}  // namespace api
}  // namespace extensions
#endif  // CHROME_COMMON_EXTENSIONS_API_PERMISSIONS_H__
