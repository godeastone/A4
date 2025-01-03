// Copyright (c) 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   chrome/common/extensions/api/webstore_widget_private.idl
// DO NOT EDIT.

#ifndef CHROME_COMMON_EXTENSIONS_API_WEBSTORE_WIDGET_PRIVATE_H__
#define CHROME_COMMON_EXTENSIONS_API_WEBSTORE_WIDGET_PRIVATE_H__

#include <stdint.h>

#include <map>
#include <memory>
#include <string>
#include <vector>

#include "base/logging.h"
#include "base/values.h"

namespace extensions {
namespace api {
namespace webstore_widget_private {

//
// Types
//

// The type of apps that should be shown in the Webstore widget.
enum Type {
  TYPE_NONE,
  TYPE_PRINTER_PROVIDER,
  TYPE_LAST = TYPE_PRINTER_PROVIDER,
};


const char* ToString(Type as_enum);
Type ParseType(const std::string& as_string);

struct UsbId {
  UsbId();
  ~UsbId();
  UsbId(UsbId&& rhs);
  UsbId& operator=(UsbId&& rhs);

  // Populates a UsbId object from a base::Value. Returns whether |out| was
  // successfully populated.
  static bool Populate(const base::Value& value, UsbId* out);

  // Creates a UsbId object from a base::Value, or NULL on failure.
  static std::unique_ptr<UsbId> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this UsbId object.
  std::unique_ptr<base::DictionaryValue> ToValue() const;

  // The USB device's vendor ID property.
  int vendor_id;

  // The USB device's product ID property.
  int product_id;


 private:
  DISALLOW_COPY_AND_ASSIGN(UsbId);
};

struct Options {
  Options();
  ~Options();
  Options(Options&& rhs);
  Options& operator=(Options&& rhs);

  // Populates a Options object from a base::Value. Returns whether |out| was
  // successfully populated.
  static bool Populate(const base::Value& value, Options* out);

  // Creates a Options object from a base::Value, or NULL on failure.
  static std::unique_ptr<Options> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this Options object.
  std::unique_ptr<base::DictionaryValue> ToValue() const;

  // The type of apps that should be shown.
  Type type;

  // If set, only apps that have printerProvider permission and usbDevices
  // permission for USB device with the provided (vendor ID, product ID) pair.
  // Required if |type| is set to |PRINTER_PROVIDER|.
  std::unique_ptr<UsbId> usb_id;


 private:
  DISALLOW_COPY_AND_ASSIGN(Options);
};


//
// Functions
//

namespace GetStrings {

namespace Results {

struct Result {
  Result();
  ~Result();
  Result(Result&& rhs);
  Result& operator=(Result&& rhs);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this Result object.
  std::unique_ptr<base::DictionaryValue> ToValue() const;

  base::DictionaryValue additional_properties;

 private:
  DISALLOW_COPY_AND_ASSIGN(Result);
};


std::unique_ptr<base::ListValue> Create(const Result& result);
}  // namespace Results

}  // namespace GetStrings

namespace InstallWebstoreItem {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  std::string item_id;

  bool silent_installation;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

std::unique_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace InstallWebstoreItem

//
// Events
//

namespace OnShowWidget {

extern const char kEventName[];  // "webstoreWidgetPrivate.onShowWidget"

// Options describing the set of apps that should be shown in the     widget.
std::unique_ptr<base::ListValue> Create(const Options& options);
}  // namespace OnShowWidget

}  // namespace webstore_widget_private
}  // namespace api
}  // namespace extensions
#endif  // CHROME_COMMON_EXTENSIONS_API_WEBSTORE_WIDGET_PRIVATE_H__
