// Copyright (c) 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/declarative_net_request.idl
// DO NOT EDIT.

#ifndef EXTENSIONS_COMMON_API_DECLARATIVE_NET_REQUEST_H__
#define EXTENSIONS_COMMON_API_DECLARATIVE_NET_REQUEST_H__

#include <stdint.h>

#include <map>
#include <memory>
#include <string>
#include <vector>

#include "base/logging.h"
#include "base/values.h"

namespace extensions {
namespace api {
namespace declarative_net_request {

//
// Properties
//

// The maximum number of whitelisted pages that an extension can add.
extern const int MAX_NUMBER_OF_WHITELISTED_PAGES;

//
// Types
//

// This describes the resource type of the network request.
enum ResourceType {
  RESOURCE_TYPE_NONE,
  RESOURCE_TYPE_MAIN_FRAME,
  RESOURCE_TYPE_SUB_FRAME,
  RESOURCE_TYPE_STYLESHEET,
  RESOURCE_TYPE_SCRIPT,
  RESOURCE_TYPE_IMAGE,
  RESOURCE_TYPE_FONT,
  RESOURCE_TYPE_OBJECT,
  RESOURCE_TYPE_XMLHTTPREQUEST,
  RESOURCE_TYPE_PING,
  RESOURCE_TYPE_CSP_REPORT,
  RESOURCE_TYPE_MEDIA,
  RESOURCE_TYPE_WEBSOCKET,
  RESOURCE_TYPE_OTHER,
  RESOURCE_TYPE_LAST = RESOURCE_TYPE_OTHER,
};


const char* ToString(ResourceType as_enum);
ResourceType ParseResourceType(const std::string& as_string);

// This describes whether the request is first or third party to the frame in
// which it originated. A request is said to be first party if it has the same
// domain (eTLD+1) as the frame in which the request originated.
enum DomainType {
  DOMAIN_TYPE_NONE,
  DOMAIN_TYPE_FIRSTPARTY,
  DOMAIN_TYPE_THIRDPARTY,
  DOMAIN_TYPE_LAST = DOMAIN_TYPE_THIRDPARTY,
};


const char* ToString(DomainType as_enum);
DomainType ParseDomainType(const std::string& as_string);

// Describes the kind of action to take if a given RuleCondition matches.
enum RuleActionType {
  RULE_ACTION_TYPE_NONE,
  RULE_ACTION_TYPE_BLACKLIST,
  RULE_ACTION_TYPE_REDIRECT,
  RULE_ACTION_TYPE_WHITELIST,
  RULE_ACTION_TYPE_LAST = RULE_ACTION_TYPE_WHITELIST,
};


const char* ToString(RuleActionType as_enum);
RuleActionType ParseRuleActionType(const std::string& as_string);

struct RuleCondition {
  RuleCondition();
  ~RuleCondition();
  RuleCondition(RuleCondition&& rhs);
  RuleCondition& operator=(RuleCondition&& rhs);

  // Populates a RuleCondition object from a base::Value. Returns whether |out|
  // was successfully populated.
  static bool Populate(const base::Value& value, RuleCondition* out);

  // Creates a RuleCondition object from a base::Value, or NULL on failure.
  static std::unique_ptr<RuleCondition> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this RuleCondition object.
  std::unique_ptr<base::DictionaryValue> ToValue() const;

  // The pattern which is matched against the network request url. Supported
  // constructs: '*'  : Wildcard: Matches any number of characters. '|'  :
  // Left/right anchor: If used at either end of the pattern, specifies        the
  // beginning/end of the url respectively. '||' : Domain name anchor: If used at
  // the beginning of the pattern,        specifies the start of a (sub-)domain of
  // the URL. '^'  : Separator character: This matches anything except a letter, a
  // digit or one of the following: _ - . %. The end of the address is        also
  // accepted as a separator. Therefore urlFilter is composed of the following
  // parts: (optional Left/Domain name anchor) + pattern + (optional Right anchor)
  // If omitted, all urls are matched. An empty string is not allowed.
  std::unique_ptr<std::string> url_filter;

  // Whether the |urlFilter| is case sensitive. Default is false.
  std::unique_ptr<bool> is_url_filter_case_sensitive;

  // The rule will only match network requests originating from the list of
  // |domains|. If the list is omitted, the rule is applied to requests from all
  // domains. An empty list is not allowed. Note: sub-domains like "a.example.com"
  // are also allowed.
  std::unique_ptr<std::vector<std::string>> domains;

  // The rule will not match network requests originating from the list of
  // |excludedDomains|. If the list is empty or omitted, no domains are excluded.
  // This takes precedence over |domains|. Note: sub-domains like "a.example.com"
  // are also allowed.
  std::unique_ptr<std::vector<std::string>> excluded_domains;

  // List of resource types which the rule can match. An empty list is not
  // allowed.
  std::unique_ptr<std::vector<ResourceType>> resource_types;

  // List of resource types which the rule won't match. Only one of
  // |resourceTypes| and |excludedResourceTypes| should be specified. If neither
  // of them are specified, all resource types except "main_frame" are blocked.
  std::unique_ptr<std::vector<ResourceType>> excluded_resource_types;

  // Specifies whether the network request is firstParty or thirdParty to the
  // domain from which it originated. If omitted, all requests are accepted.
  DomainType domain_type;


 private:
  DISALLOW_COPY_AND_ASSIGN(RuleCondition);
};

struct RuleAction {
  RuleAction();
  ~RuleAction();
  RuleAction(RuleAction&& rhs);
  RuleAction& operator=(RuleAction&& rhs);

  // Populates a RuleAction object from a base::Value. Returns whether |out| was
  // successfully populated.
  static bool Populate(const base::Value& value, RuleAction* out);

  // Creates a RuleAction object from a base::Value, or NULL on failure.
  static std::unique_ptr<RuleAction> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this RuleAction object.
  std::unique_ptr<base::DictionaryValue> ToValue() const;

  // The type of action to perform.
  RuleActionType type;

  // The redirect url. Only valid if |type| == 'redirect'.
  std::unique_ptr<std::string> redirect_url;


 private:
  DISALLOW_COPY_AND_ASSIGN(RuleAction);
};

struct Rule {
  Rule();
  ~Rule();
  Rule(Rule&& rhs);
  Rule& operator=(Rule&& rhs);

  // Populates a Rule object from a base::Value. Returns whether |out| was
  // successfully populated.
  static bool Populate(const base::Value& value, Rule* out);

  // Creates a Rule object from a base::Value, or NULL on failure.
  static std::unique_ptr<Rule> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this Rule object.
  std::unique_ptr<base::DictionaryValue> ToValue() const;

  // An id which uniquely identifies a rule. Mandatory and should be >= 1.
  int id;

  // Rule priority. Mandatory for redirect rules and should be >= 1.
  std::unique_ptr<int> priority;

  // The condition which if satisfied causes the |action| to trigger.
  RuleCondition condition;

  // The action to take if this rule is matched.
  RuleAction action;


 private:
  DISALLOW_COPY_AND_ASSIGN(Rule);
};


//
// Functions
//

namespace AddWhitelistedPages {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // Array of match patterns which are to be added to the whitelist.
  std::vector<std::string> page_patterns;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

std::unique_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace AddWhitelistedPages

namespace RemoveWhitelistedPages {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // Array of match patterns which are to be removed from the whitelist.
  std::vector<std::string> page_patterns;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

std::unique_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace RemoveWhitelistedPages

namespace GetWhitelistedPages {

namespace Results {

std::unique_ptr<base::ListValue> Create(const std::vector<std::string>& result);
}  // namespace Results

}  // namespace GetWhitelistedPages

}  // namespace declarative_net_request
}  // namespace api
}  // namespace extensions
#endif  // EXTENSIONS_COMMON_API_DECLARATIVE_NET_REQUEST_H__
