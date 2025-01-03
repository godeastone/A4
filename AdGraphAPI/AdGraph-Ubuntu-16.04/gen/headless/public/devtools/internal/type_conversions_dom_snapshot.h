// This file is generated

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_DOM_SNAPSHOT_H_
#define HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_DOM_SNAPSHOT_H_

#include "headless/public/devtools/domains/types_dom_snapshot.h"
#include "headless/public/internal/value_conversions.h"

namespace headless {
namespace internal {


template <>
struct FromValue<dom_snapshot::DOMNode> {
  static std::unique_ptr<dom_snapshot::DOMNode> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_snapshot::DOMNode::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_snapshot::DOMNode& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_snapshot::InlineTextBox> {
  static std::unique_ptr<dom_snapshot::InlineTextBox> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_snapshot::InlineTextBox::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_snapshot::InlineTextBox& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_snapshot::LayoutTreeNode> {
  static std::unique_ptr<dom_snapshot::LayoutTreeNode> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_snapshot::LayoutTreeNode::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_snapshot::LayoutTreeNode& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_snapshot::ComputedStyle> {
  static std::unique_ptr<dom_snapshot::ComputedStyle> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_snapshot::ComputedStyle::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_snapshot::ComputedStyle& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_snapshot::NameValue> {
  static std::unique_ptr<dom_snapshot::NameValue> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_snapshot::NameValue::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_snapshot::NameValue& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_snapshot::DisableParams> {
  static std::unique_ptr<dom_snapshot::DisableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_snapshot::DisableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_snapshot::DisableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_snapshot::DisableResult> {
  static std::unique_ptr<dom_snapshot::DisableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_snapshot::DisableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_snapshot::DisableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_snapshot::EnableParams> {
  static std::unique_ptr<dom_snapshot::EnableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_snapshot::EnableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_snapshot::EnableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_snapshot::EnableResult> {
  static std::unique_ptr<dom_snapshot::EnableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_snapshot::EnableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_snapshot::EnableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_snapshot::GetSnapshotParams> {
  static std::unique_ptr<dom_snapshot::GetSnapshotParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_snapshot::GetSnapshotParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_snapshot::GetSnapshotParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_snapshot::GetSnapshotResult> {
  static std::unique_ptr<dom_snapshot::GetSnapshotResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_snapshot::GetSnapshotResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_snapshot::GetSnapshotResult& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace headless

#endif  // HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_DOM_SNAPSHOT_H_
