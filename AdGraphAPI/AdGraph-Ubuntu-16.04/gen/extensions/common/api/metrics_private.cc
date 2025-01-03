// Copyright (c) 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/metrics_private.json
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "base/values.h"
#include "extensions/common/api/metrics_private.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace metrics_private {
//
// Types
//

const char* ToString(MetricTypeType enum_param) {
  switch (enum_param) {
    case METRIC_TYPE_TYPE_HISTOGRAM_LOG:
      return "histogram-log";
    case METRIC_TYPE_TYPE_HISTOGRAM_LINEAR:
      return "histogram-linear";
    case METRIC_TYPE_TYPE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

MetricTypeType ParseMetricTypeType(const std::string& enum_string) {
  if (enum_string == "histogram-log")
    return METRIC_TYPE_TYPE_HISTOGRAM_LOG;
  if (enum_string == "histogram-linear")
    return METRIC_TYPE_TYPE_HISTOGRAM_LINEAR;
  return METRIC_TYPE_TYPE_NONE;
}


MetricType::MetricType()
: type(METRIC_TYPE_TYPE_NONE),
min(0),
max(0),
buckets(0) {}

MetricType::~MetricType() {}
MetricType::MetricType(MetricType&& rhs)
: metric_name(std::move(rhs.metric_name)),
type(rhs.type),
min(rhs.min),
max(rhs.max),
buckets(rhs.buckets){
}

MetricType& MetricType::operator=(MetricType&& rhs)
{
metric_name = std::move(rhs.metric_name);
type = rhs.type;
min = rhs.min;
max = rhs.max;
buckets = rhs.buckets;
return *this;
}

// static
bool MetricType::Populate(
    const base::Value& value, MetricType* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* metric_name_value = NULL;
  if (!dict->GetWithoutPathExpansion("metricName", &metric_name_value)) {
    return false;
  }
  {
    if (!metric_name_value->GetAsString(&out->metric_name)) {
      return false;
    }
  }

  const base::Value* type_value = NULL;
  if (!dict->GetWithoutPathExpansion("type", &type_value)) {
    return false;
  }
  {
    std::string metric_type_type_as_string;
    if (!type_value->GetAsString(&metric_type_type_as_string)) {
      return false;
    }
    out->type = ParseMetricTypeType(metric_type_type_as_string);
    if (out->type == METRIC_TYPE_TYPE_NONE) {
      return false;
    }
  }

  const base::Value* min_value = NULL;
  if (!dict->GetWithoutPathExpansion("min", &min_value)) {
    return false;
  }
  {
    if (!min_value->GetAsInteger(&out->min)) {
      return false;
    }
  }

  const base::Value* max_value = NULL;
  if (!dict->GetWithoutPathExpansion("max", &max_value)) {
    return false;
  }
  {
    if (!max_value->GetAsInteger(&out->max)) {
      return false;
    }
  }

  const base::Value* buckets_value = NULL;
  if (!dict->GetWithoutPathExpansion("buckets", &buckets_value)) {
    return false;
  }
  {
    if (!buckets_value->GetAsInteger(&out->buckets)) {
      return false;
    }
  }

  return true;
}

// static
std::unique_ptr<MetricType> MetricType::FromValue(const base::Value& value) {
  std::unique_ptr<MetricType> out(new MetricType());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> MetricType::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("metricName", std::make_unique<base::Value>(this->metric_name));

  value->SetWithoutPathExpansion("type", std::make_unique<base::Value>(metrics_private::ToString(this->type)));

  value->SetWithoutPathExpansion("min", std::make_unique<base::Value>(this->min));

  value->SetWithoutPathExpansion("max", std::make_unique<base::Value>(this->max));

  value->SetWithoutPathExpansion("buckets", std::make_unique<base::Value>(this->buckets));


  return value;
}



//
// Functions
//

namespace GetIsCrashReportingEnabled {

std::unique_ptr<base::ListValue> Results::Create(bool is_enabled) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(std::make_unique<base::Value>(is_enabled));

  return create_results;
}
}  // namespace GetIsCrashReportingEnabled

namespace GetFieldTrial {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* name_value = NULL;
  if (args.Get(0, &name_value) &&
      !name_value->is_none()) {
    {
      if (!name_value->GetAsString(&params->name)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


std::unique_ptr<base::ListValue> Results::Create(const std::string& group) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(std::make_unique<base::Value>(group));

  return create_results;
}
}  // namespace GetFieldTrial

namespace GetVariationParams {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* name_value = NULL;
  if (args.Get(0, &name_value) &&
      !name_value->is_none()) {
    {
      if (!name_value->GetAsString(&params->name)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


Results::Params::Params()
 {}

Results::Params::~Params() {}
Results::Params::Params(Params&& rhs)
: additional_properties(std::move(rhs.additional_properties)){
}

Results::Params& Results::Params::operator=(Params&& rhs)
{
additional_properties = std::move(rhs.additional_properties);
return *this;
}

std::unique_ptr<base::DictionaryValue> Results::Params::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  for (const auto& it : additional_properties) {
    value->SetWithoutPathExpansion(it.first, std::make_unique<base::Value>(it.second));

  }

  return value;
}


std::unique_ptr<base::ListValue> Results::Create(const Params& params) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((params).ToValue());

  return create_results;
}
}  // namespace GetVariationParams

namespace RecordUserAction {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* name_value = NULL;
  if (args.Get(0, &name_value) &&
      !name_value->is_none()) {
    {
      if (!name_value->GetAsString(&params->name)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


}  // namespace RecordUserAction

namespace RecordPercentage {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* metric_name_value = NULL;
  if (args.Get(0, &metric_name_value) &&
      !metric_name_value->is_none()) {
    {
      if (!metric_name_value->GetAsString(&params->metric_name)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* value_value = NULL;
  if (args.Get(1, &value_value) &&
      !value_value->is_none()) {
    {
      if (!value_value->GetAsInteger(&params->value)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


}  // namespace RecordPercentage

namespace RecordCount {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* metric_name_value = NULL;
  if (args.Get(0, &metric_name_value) &&
      !metric_name_value->is_none()) {
    {
      if (!metric_name_value->GetAsString(&params->metric_name)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* value_value = NULL;
  if (args.Get(1, &value_value) &&
      !value_value->is_none()) {
    {
      if (!value_value->GetAsInteger(&params->value)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


}  // namespace RecordCount

namespace RecordSmallCount {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* metric_name_value = NULL;
  if (args.Get(0, &metric_name_value) &&
      !metric_name_value->is_none()) {
    {
      if (!metric_name_value->GetAsString(&params->metric_name)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* value_value = NULL;
  if (args.Get(1, &value_value) &&
      !value_value->is_none()) {
    {
      if (!value_value->GetAsInteger(&params->value)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


}  // namespace RecordSmallCount

namespace RecordMediumCount {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* metric_name_value = NULL;
  if (args.Get(0, &metric_name_value) &&
      !metric_name_value->is_none()) {
    {
      if (!metric_name_value->GetAsString(&params->metric_name)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* value_value = NULL;
  if (args.Get(1, &value_value) &&
      !value_value->is_none()) {
    {
      if (!value_value->GetAsInteger(&params->value)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


}  // namespace RecordMediumCount

namespace RecordTime {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* metric_name_value = NULL;
  if (args.Get(0, &metric_name_value) &&
      !metric_name_value->is_none()) {
    {
      if (!metric_name_value->GetAsString(&params->metric_name)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* value_value = NULL;
  if (args.Get(1, &value_value) &&
      !value_value->is_none()) {
    {
      if (!value_value->GetAsInteger(&params->value)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


}  // namespace RecordTime

namespace RecordMediumTime {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* metric_name_value = NULL;
  if (args.Get(0, &metric_name_value) &&
      !metric_name_value->is_none()) {
    {
      if (!metric_name_value->GetAsString(&params->metric_name)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* value_value = NULL;
  if (args.Get(1, &value_value) &&
      !value_value->is_none()) {
    {
      if (!value_value->GetAsInteger(&params->value)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


}  // namespace RecordMediumTime

namespace RecordLongTime {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* metric_name_value = NULL;
  if (args.Get(0, &metric_name_value) &&
      !metric_name_value->is_none()) {
    {
      if (!metric_name_value->GetAsString(&params->metric_name)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* value_value = NULL;
  if (args.Get(1, &value_value) &&
      !value_value->is_none()) {
    {
      if (!value_value->GetAsInteger(&params->value)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


}  // namespace RecordLongTime

namespace RecordSparseHashable {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* metric_name_value = NULL;
  if (args.Get(0, &metric_name_value) &&
      !metric_name_value->is_none()) {
    {
      if (!metric_name_value->GetAsString(&params->metric_name)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* value_value = NULL;
  if (args.Get(1, &value_value) &&
      !value_value->is_none()) {
    {
      if (!value_value->GetAsString(&params->value)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


}  // namespace RecordSparseHashable

namespace RecordSparseValue {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* metric_name_value = NULL;
  if (args.Get(0, &metric_name_value) &&
      !metric_name_value->is_none()) {
    {
      if (!metric_name_value->GetAsString(&params->metric_name)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* value_value = NULL;
  if (args.Get(1, &value_value) &&
      !value_value->is_none()) {
    {
      if (!value_value->GetAsInteger(&params->value)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


}  // namespace RecordSparseValue

namespace RecordValue {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* metric_value = NULL;
  if (args.Get(0, &metric_value) &&
      !metric_value->is_none()) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!metric_value->GetAsDictionary(&dictionary)) {
        return std::unique_ptr<Params>();
      }
      if (!MetricType::Populate(*dictionary, &params->metric)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* value_value = NULL;
  if (args.Get(1, &value_value) &&
      !value_value->is_none()) {
    {
      if (!value_value->GetAsInteger(&params->value)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


}  // namespace RecordValue

namespace RecordBoolean {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* metric_name_value = NULL;
  if (args.Get(0, &metric_name_value) &&
      !metric_name_value->is_none()) {
    {
      if (!metric_name_value->GetAsString(&params->metric_name)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* value_value = NULL;
  if (args.Get(1, &value_value) &&
      !value_value->is_none()) {
    {
      if (!value_value->GetAsBoolean(&params->value)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


}  // namespace RecordBoolean

namespace RecordEnumerationValue {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 3) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* metric_name_value = NULL;
  if (args.Get(0, &metric_name_value) &&
      !metric_name_value->is_none()) {
    {
      if (!metric_name_value->GetAsString(&params->metric_name)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* value_value = NULL;
  if (args.Get(1, &value_value) &&
      !value_value->is_none()) {
    {
      if (!value_value->GetAsInteger(&params->value)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* enum_size_value = NULL;
  if (args.Get(2, &enum_size_value) &&
      !enum_size_value->is_none()) {
    {
      if (!enum_size_value->GetAsInteger(&params->enum_size)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


}  // namespace RecordEnumerationValue

}  // namespace metrics_private
}  // namespace api
}  // namespace extensions

