// Copyright (c) 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/declarative_net_request.idl
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "base/values.h"
#include "extensions/common/api/declarative_net_request.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace declarative_net_request {
//
// Properties
//

const int MAX_NUMBER_OF_WHITELISTED_PAGES = 100;

//
// Types
//

const char* ToString(ResourceType enum_param) {
  switch (enum_param) {
    case RESOURCE_TYPE_MAIN_FRAME:
      return "main_frame";
    case RESOURCE_TYPE_SUB_FRAME:
      return "sub_frame";
    case RESOURCE_TYPE_STYLESHEET:
      return "stylesheet";
    case RESOURCE_TYPE_SCRIPT:
      return "script";
    case RESOURCE_TYPE_IMAGE:
      return "image";
    case RESOURCE_TYPE_FONT:
      return "font";
    case RESOURCE_TYPE_OBJECT:
      return "object";
    case RESOURCE_TYPE_XMLHTTPREQUEST:
      return "xmlhttprequest";
    case RESOURCE_TYPE_PING:
      return "ping";
    case RESOURCE_TYPE_CSP_REPORT:
      return "csp_report";
    case RESOURCE_TYPE_MEDIA:
      return "media";
    case RESOURCE_TYPE_WEBSOCKET:
      return "websocket";
    case RESOURCE_TYPE_OTHER:
      return "other";
    case RESOURCE_TYPE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

ResourceType ParseResourceType(const std::string& enum_string) {
  if (enum_string == "main_frame")
    return RESOURCE_TYPE_MAIN_FRAME;
  if (enum_string == "sub_frame")
    return RESOURCE_TYPE_SUB_FRAME;
  if (enum_string == "stylesheet")
    return RESOURCE_TYPE_STYLESHEET;
  if (enum_string == "script")
    return RESOURCE_TYPE_SCRIPT;
  if (enum_string == "image")
    return RESOURCE_TYPE_IMAGE;
  if (enum_string == "font")
    return RESOURCE_TYPE_FONT;
  if (enum_string == "object")
    return RESOURCE_TYPE_OBJECT;
  if (enum_string == "xmlhttprequest")
    return RESOURCE_TYPE_XMLHTTPREQUEST;
  if (enum_string == "ping")
    return RESOURCE_TYPE_PING;
  if (enum_string == "csp_report")
    return RESOURCE_TYPE_CSP_REPORT;
  if (enum_string == "media")
    return RESOURCE_TYPE_MEDIA;
  if (enum_string == "websocket")
    return RESOURCE_TYPE_WEBSOCKET;
  if (enum_string == "other")
    return RESOURCE_TYPE_OTHER;
  return RESOURCE_TYPE_NONE;
}


const char* ToString(DomainType enum_param) {
  switch (enum_param) {
    case DOMAIN_TYPE_FIRSTPARTY:
      return "firstParty";
    case DOMAIN_TYPE_THIRDPARTY:
      return "thirdParty";
    case DOMAIN_TYPE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

DomainType ParseDomainType(const std::string& enum_string) {
  if (enum_string == "firstParty")
    return DOMAIN_TYPE_FIRSTPARTY;
  if (enum_string == "thirdParty")
    return DOMAIN_TYPE_THIRDPARTY;
  return DOMAIN_TYPE_NONE;
}


const char* ToString(RuleActionType enum_param) {
  switch (enum_param) {
    case RULE_ACTION_TYPE_BLACKLIST:
      return "blacklist";
    case RULE_ACTION_TYPE_REDIRECT:
      return "redirect";
    case RULE_ACTION_TYPE_WHITELIST:
      return "whitelist";
    case RULE_ACTION_TYPE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

RuleActionType ParseRuleActionType(const std::string& enum_string) {
  if (enum_string == "blacklist")
    return RULE_ACTION_TYPE_BLACKLIST;
  if (enum_string == "redirect")
    return RULE_ACTION_TYPE_REDIRECT;
  if (enum_string == "whitelist")
    return RULE_ACTION_TYPE_WHITELIST;
  return RULE_ACTION_TYPE_NONE;
}


RuleCondition::RuleCondition()
: domain_type(DOMAIN_TYPE_NONE) {}

RuleCondition::~RuleCondition() {}
RuleCondition::RuleCondition(RuleCondition&& rhs)
: url_filter(std::move(rhs.url_filter)),
is_url_filter_case_sensitive(std::move(rhs.is_url_filter_case_sensitive)),
domains(std::move(rhs.domains)),
excluded_domains(std::move(rhs.excluded_domains)),
resource_types(std::move(rhs.resource_types)),
excluded_resource_types(std::move(rhs.excluded_resource_types)),
domain_type(rhs.domain_type){
}

RuleCondition& RuleCondition::operator=(RuleCondition&& rhs)
{
url_filter = std::move(rhs.url_filter);
is_url_filter_case_sensitive = std::move(rhs.is_url_filter_case_sensitive);
domains = std::move(rhs.domains);
excluded_domains = std::move(rhs.excluded_domains);
resource_types = std::move(rhs.resource_types);
excluded_resource_types = std::move(rhs.excluded_resource_types);
domain_type = rhs.domain_type;
return *this;
}

// static
bool RuleCondition::Populate(
    const base::Value& value, RuleCondition* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  out->domain_type = DOMAIN_TYPE_NONE;
  const base::Value* url_filter_value = NULL;
  if (dict->GetWithoutPathExpansion("urlFilter", &url_filter_value)) {
    {
      std::string temp;
      if (!url_filter_value->GetAsString(&temp)) {
        out->url_filter.reset();
        return false;
      }
      else
        out->url_filter.reset(new std::string(temp));
    }
  }

  const base::Value* is_url_filter_case_sensitive_value = NULL;
  if (dict->GetWithoutPathExpansion("isUrlFilterCaseSensitive", &is_url_filter_case_sensitive_value)) {
    {
      bool temp;
      if (!is_url_filter_case_sensitive_value->GetAsBoolean(&temp)) {
        out->is_url_filter_case_sensitive.reset();
        return false;
      }
      else
        out->is_url_filter_case_sensitive.reset(new bool(temp));
    }
  }

  const base::Value* domains_value = NULL;
  if (dict->GetWithoutPathExpansion("domains", &domains_value)) {
    {
      const base::ListValue* list = NULL;
      if (!domains_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->domains)) {
          return false;
        }
      }
    }
  }

  const base::Value* excluded_domains_value = NULL;
  if (dict->GetWithoutPathExpansion("excludedDomains", &excluded_domains_value)) {
    {
      const base::ListValue* list = NULL;
      if (!excluded_domains_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->excluded_domains)) {
          return false;
        }
      }
    }
  }

  const base::Value* resource_types_value = NULL;
  if (dict->GetWithoutPathExpansion("resourceTypes", &resource_types_value)) {
    {
      const base::ListValue* list = NULL;
      if (!resource_types_value->GetAsList(&list)) {
        return false;
      }
      else {
        out->resource_types.reset(new std::vector<ResourceType>);
        for (const auto& it : *(list)) {
          ResourceType tmp;
          std::string resource_type_as_string;
          if (!(it).GetAsString(&resource_type_as_string)) {
            return false;
          }
          tmp = ParseResourceType(resource_type_as_string);
          if (tmp == RESOURCE_TYPE_NONE) {
            return false;
          }
          out->resource_types->push_back(tmp);
        }
      }
    }
  }

  const base::Value* excluded_resource_types_value = NULL;
  if (dict->GetWithoutPathExpansion("excludedResourceTypes", &excluded_resource_types_value)) {
    {
      const base::ListValue* list = NULL;
      if (!excluded_resource_types_value->GetAsList(&list)) {
        return false;
      }
      else {
        out->excluded_resource_types.reset(new std::vector<ResourceType>);
        for (const auto& it : *(list)) {
          ResourceType tmp;
          std::string resource_type_as_string;
          if (!(it).GetAsString(&resource_type_as_string)) {
            return false;
          }
          tmp = ParseResourceType(resource_type_as_string);
          if (tmp == RESOURCE_TYPE_NONE) {
            return false;
          }
          out->excluded_resource_types->push_back(tmp);
        }
      }
    }
  }

  const base::Value* domain_type_value = NULL;
  if (dict->GetWithoutPathExpansion("domainType", &domain_type_value)) {
    {
      std::string domain_type_as_string;
      if (!domain_type_value->GetAsString(&domain_type_as_string)) {
        return false;
      }
      out->domain_type = ParseDomainType(domain_type_as_string);
      if (out->domain_type == DOMAIN_TYPE_NONE) {
        return false;
      }
    }
    } else {
    out->domain_type = DOMAIN_TYPE_NONE;
  }

  return true;
}

// static
std::unique_ptr<RuleCondition> RuleCondition::FromValue(const base::Value& value) {
  std::unique_ptr<RuleCondition> out(new RuleCondition());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> RuleCondition::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->url_filter.get()) {
    value->SetWithoutPathExpansion("urlFilter", std::make_unique<base::Value>(*this->url_filter));

  }
  if (this->is_url_filter_case_sensitive.get()) {
    value->SetWithoutPathExpansion("isUrlFilterCaseSensitive", std::make_unique<base::Value>(*this->is_url_filter_case_sensitive));

  }
  if (this->domains.get()) {
    value->SetWithoutPathExpansion("domains", json_schema_compiler::util::CreateValueFromOptionalArray(this->domains));

  }
  if (this->excluded_domains.get()) {
    value->SetWithoutPathExpansion("excludedDomains", json_schema_compiler::util::CreateValueFromOptionalArray(this->excluded_domains));

  }
  if (this->resource_types.get()) {
    {
      std::vector<std::string> resourceTypes_list;
      for (const auto& it : *(this->resource_types)) {
      resourceTypes_list.push_back(declarative_net_request::ToString(it));
    }
    value->SetWithoutPathExpansion("resourceTypes", json_schema_compiler::util::CreateValueFromArray(resourceTypes_list));
    }

  }
  if (this->excluded_resource_types.get()) {
    {
      std::vector<std::string> excludedResourceTypes_list;
      for (const auto& it : *(this->excluded_resource_types)) {
      excludedResourceTypes_list.push_back(declarative_net_request::ToString(it));
    }
    value->SetWithoutPathExpansion("excludedResourceTypes", json_schema_compiler::util::CreateValueFromArray(excludedResourceTypes_list));
    }

  }
  if (this->domain_type != DOMAIN_TYPE_NONE) {
    value->SetWithoutPathExpansion("domainType", std::make_unique<base::Value>(declarative_net_request::ToString(this->domain_type)));

  }

  return value;
}


RuleAction::RuleAction()
: type(RULE_ACTION_TYPE_NONE) {}

RuleAction::~RuleAction() {}
RuleAction::RuleAction(RuleAction&& rhs)
: type(rhs.type),
redirect_url(std::move(rhs.redirect_url)){
}

RuleAction& RuleAction::operator=(RuleAction&& rhs)
{
type = rhs.type;
redirect_url = std::move(rhs.redirect_url);
return *this;
}

// static
bool RuleAction::Populate(
    const base::Value& value, RuleAction* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* type_value = NULL;
  if (!dict->GetWithoutPathExpansion("type", &type_value)) {
    return false;
  }
  {
    std::string rule_action_type_as_string;
    if (!type_value->GetAsString(&rule_action_type_as_string)) {
      return false;
    }
    out->type = ParseRuleActionType(rule_action_type_as_string);
    if (out->type == RULE_ACTION_TYPE_NONE) {
      return false;
    }
  }

  const base::Value* redirect_url_value = NULL;
  if (dict->GetWithoutPathExpansion("redirectUrl", &redirect_url_value)) {
    {
      std::string temp;
      if (!redirect_url_value->GetAsString(&temp)) {
        out->redirect_url.reset();
        return false;
      }
      else
        out->redirect_url.reset(new std::string(temp));
    }
  }

  return true;
}

// static
std::unique_ptr<RuleAction> RuleAction::FromValue(const base::Value& value) {
  std::unique_ptr<RuleAction> out(new RuleAction());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> RuleAction::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("type", std::make_unique<base::Value>(declarative_net_request::ToString(this->type)));

  if (this->redirect_url.get()) {
    value->SetWithoutPathExpansion("redirectUrl", std::make_unique<base::Value>(*this->redirect_url));

  }

  return value;
}


Rule::Rule()
: id(0) {}

Rule::~Rule() {}
Rule::Rule(Rule&& rhs)
: id(rhs.id),
priority(std::move(rhs.priority)),
condition(std::move(rhs.condition)),
action(std::move(rhs.action)){
}

Rule& Rule::operator=(Rule&& rhs)
{
id = rhs.id;
priority = std::move(rhs.priority);
condition = std::move(rhs.condition);
action = std::move(rhs.action);
return *this;
}

// static
bool Rule::Populate(
    const base::Value& value, Rule* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* id_value = NULL;
  if (!dict->GetWithoutPathExpansion("id", &id_value)) {
    return false;
  }
  {
    if (!id_value->GetAsInteger(&out->id)) {
      return false;
    }
  }

  const base::Value* priority_value = NULL;
  if (dict->GetWithoutPathExpansion("priority", &priority_value)) {
    {
      int temp;
      if (!priority_value->GetAsInteger(&temp)) {
        out->priority.reset();
        return false;
      }
      else
        out->priority.reset(new int(temp));
    }
  }

  const base::Value* condition_value = NULL;
  if (!dict->GetWithoutPathExpansion("condition", &condition_value)) {
    return false;
  }
  {
    const base::DictionaryValue* dictionary = NULL;
    if (!condition_value->GetAsDictionary(&dictionary)) {
      return false;
    }
    if (!RuleCondition::Populate(*dictionary, &out->condition)) {
      return false;
    }
  }

  const base::Value* action_value = NULL;
  if (!dict->GetWithoutPathExpansion("action", &action_value)) {
    return false;
  }
  {
    const base::DictionaryValue* dictionary = NULL;
    if (!action_value->GetAsDictionary(&dictionary)) {
      return false;
    }
    if (!RuleAction::Populate(*dictionary, &out->action)) {
      return false;
    }
  }

  return true;
}

// static
std::unique_ptr<Rule> Rule::FromValue(const base::Value& value) {
  std::unique_ptr<Rule> out(new Rule());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> Rule::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("id", std::make_unique<base::Value>(this->id));

  if (this->priority.get()) {
    value->SetWithoutPathExpansion("priority", std::make_unique<base::Value>(*this->priority));

  }
  value->SetWithoutPathExpansion("condition", (this->condition).ToValue());

  value->SetWithoutPathExpansion("action", (this->action).ToValue());


  return value;
}



//
// Functions
//

namespace AddWhitelistedPages {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* page_patterns_value = NULL;
  if (args.Get(0, &page_patterns_value) &&
      !page_patterns_value->is_none()) {
    {
      const base::ListValue* list = NULL;
      if (!page_patterns_value->GetAsList(&list)) {
        return std::unique_ptr<Params>();
      }
      else {
        if (!json_schema_compiler::util::PopulateArrayFromList(*list, &params->page_patterns)) {
          return std::unique_ptr<Params>();
        }
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
}  // namespace AddWhitelistedPages

namespace RemoveWhitelistedPages {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* page_patterns_value = NULL;
  if (args.Get(0, &page_patterns_value) &&
      !page_patterns_value->is_none()) {
    {
      const base::ListValue* list = NULL;
      if (!page_patterns_value->GetAsList(&list)) {
        return std::unique_ptr<Params>();
      }
      else {
        if (!json_schema_compiler::util::PopulateArrayFromList(*list, &params->page_patterns)) {
          return std::unique_ptr<Params>();
        }
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
}  // namespace RemoveWhitelistedPages

namespace GetWhitelistedPages {

std::unique_ptr<base::ListValue> Results::Create(const std::vector<std::string>& result) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(result));

  return create_results;
}
}  // namespace GetWhitelistedPages

}  // namespace declarative_net_request
}  // namespace api
}  // namespace extensions

