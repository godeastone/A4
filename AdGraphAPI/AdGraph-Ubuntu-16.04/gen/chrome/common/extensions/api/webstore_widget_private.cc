// Copyright (c) 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   chrome/common/extensions/api/webstore_widget_private.idl
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "base/values.h"
#include "chrome/common/extensions/api/webstore_widget_private.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace webstore_widget_private {
//
// Types
//

const char* ToString(Type enum_param) {
  switch (enum_param) {
    case TYPE_PRINTER_PROVIDER:
      return "PRINTER_PROVIDER";
    case TYPE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

Type ParseType(const std::string& enum_string) {
  if (enum_string == "PRINTER_PROVIDER")
    return TYPE_PRINTER_PROVIDER;
  return TYPE_NONE;
}


UsbId::UsbId()
: vendor_id(0),
product_id(0) {}

UsbId::~UsbId() {}
UsbId::UsbId(UsbId&& rhs)
: vendor_id(rhs.vendor_id),
product_id(rhs.product_id){
}

UsbId& UsbId::operator=(UsbId&& rhs)
{
vendor_id = rhs.vendor_id;
product_id = rhs.product_id;
return *this;
}

// static
bool UsbId::Populate(
    const base::Value& value, UsbId* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* vendor_id_value = NULL;
  if (!dict->GetWithoutPathExpansion("vendorId", &vendor_id_value)) {
    return false;
  }
  {
    if (!vendor_id_value->GetAsInteger(&out->vendor_id)) {
      return false;
    }
  }

  const base::Value* product_id_value = NULL;
  if (!dict->GetWithoutPathExpansion("productId", &product_id_value)) {
    return false;
  }
  {
    if (!product_id_value->GetAsInteger(&out->product_id)) {
      return false;
    }
  }

  return true;
}

// static
std::unique_ptr<UsbId> UsbId::FromValue(const base::Value& value) {
  std::unique_ptr<UsbId> out(new UsbId());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> UsbId::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("vendorId", std::make_unique<base::Value>(this->vendor_id));

  value->SetWithoutPathExpansion("productId", std::make_unique<base::Value>(this->product_id));


  return value;
}


Options::Options()
: type(TYPE_NONE) {}

Options::~Options() {}
Options::Options(Options&& rhs)
: type(rhs.type),
usb_id(std::move(rhs.usb_id)){
}

Options& Options::operator=(Options&& rhs)
{
type = rhs.type;
usb_id = std::move(rhs.usb_id);
return *this;
}

// static
bool Options::Populate(
    const base::Value& value, Options* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* type_value = NULL;
  if (!dict->GetWithoutPathExpansion("type", &type_value)) {
    return false;
  }
  {
    std::string type_as_string;
    if (!type_value->GetAsString(&type_as_string)) {
      return false;
    }
    out->type = ParseType(type_as_string);
    if (out->type == TYPE_NONE) {
      return false;
    }
  }

  const base::Value* usb_id_value = NULL;
  if (dict->GetWithoutPathExpansion("usbId", &usb_id_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!usb_id_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        std::unique_ptr<UsbId> temp(new UsbId());
        if (!UsbId::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->usb_id = std::move(temp);
      }
    }
  }

  return true;
}

// static
std::unique_ptr<Options> Options::FromValue(const base::Value& value) {
  std::unique_ptr<Options> out(new Options());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> Options::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("type", std::make_unique<base::Value>(webstore_widget_private::ToString(this->type)));

  if (this->usb_id.get()) {
    value->SetWithoutPathExpansion("usbId", (this->usb_id)->ToValue());

  }

  return value;
}



//
// Functions
//

namespace GetStrings {

Results::Result::Result()
 {}

Results::Result::~Result() {}
Results::Result::Result(Result&& rhs)
{
additional_properties.Swap(&rhs.additional_properties);
}

Results::Result& Results::Result::operator=(Result&& rhs)
{
additional_properties.Swap(&rhs.additional_properties);
return *this;
}

std::unique_ptr<base::DictionaryValue> Results::Result::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->MergeDictionary(&additional_properties);

  return value;
}


std::unique_ptr<base::ListValue> Results::Create(const Result& result) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((result).ToValue());

  return create_results;
}
}  // namespace GetStrings

namespace InstallWebstoreItem {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* item_id_value = NULL;
  if (args.Get(0, &item_id_value) &&
      !item_id_value->is_none()) {
    {
      if (!item_id_value->GetAsString(&params->item_id)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* silent_installation_value = NULL;
  if (args.Get(1, &silent_installation_value) &&
      !silent_installation_value->is_none()) {
    {
      if (!silent_installation_value->GetAsBoolean(&params->silent_installation)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


std::unique_ptr<base::ListValue> Results::Create() {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace InstallWebstoreItem

//
// Events
//

namespace OnShowWidget {

const char kEventName[] = "webstoreWidgetPrivate.onShowWidget";

std::unique_ptr<base::ListValue> Create(const Options& options) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((options).ToValue());

  return create_results;
}

}  // namespace OnShowWidget

}  // namespace webstore_widget_private
}  // namespace api
}  // namespace extensions

