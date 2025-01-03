// This file is generated

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_CACHE_STORAGE_H_
#define HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_CACHE_STORAGE_H_

#include "headless/public/devtools/domains/types_cache_storage.h"
#include "headless/public/internal/value_conversions.h"

namespace headless {
namespace internal {



template <>
struct FromValue<cache_storage::DataEntry> {
  static std::unique_ptr<cache_storage::DataEntry> Parse(const base::Value& value, ErrorReporter* errors) {
    return cache_storage::DataEntry::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const cache_storage::DataEntry& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<cache_storage::Cache> {
  static std::unique_ptr<cache_storage::Cache> Parse(const base::Value& value, ErrorReporter* errors) {
    return cache_storage::Cache::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const cache_storage::Cache& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<cache_storage::Header> {
  static std::unique_ptr<cache_storage::Header> Parse(const base::Value& value, ErrorReporter* errors) {
    return cache_storage::Header::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const cache_storage::Header& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<cache_storage::CachedResponse> {
  static std::unique_ptr<cache_storage::CachedResponse> Parse(const base::Value& value, ErrorReporter* errors) {
    return cache_storage::CachedResponse::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const cache_storage::CachedResponse& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<cache_storage::DeleteCacheParams> {
  static std::unique_ptr<cache_storage::DeleteCacheParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return cache_storage::DeleteCacheParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const cache_storage::DeleteCacheParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<cache_storage::DeleteCacheResult> {
  static std::unique_ptr<cache_storage::DeleteCacheResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return cache_storage::DeleteCacheResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const cache_storage::DeleteCacheResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<cache_storage::DeleteEntryParams> {
  static std::unique_ptr<cache_storage::DeleteEntryParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return cache_storage::DeleteEntryParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const cache_storage::DeleteEntryParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<cache_storage::DeleteEntryResult> {
  static std::unique_ptr<cache_storage::DeleteEntryResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return cache_storage::DeleteEntryResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const cache_storage::DeleteEntryResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<cache_storage::RequestCacheNamesParams> {
  static std::unique_ptr<cache_storage::RequestCacheNamesParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return cache_storage::RequestCacheNamesParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const cache_storage::RequestCacheNamesParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<cache_storage::RequestCacheNamesResult> {
  static std::unique_ptr<cache_storage::RequestCacheNamesResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return cache_storage::RequestCacheNamesResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const cache_storage::RequestCacheNamesResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<cache_storage::RequestCachedResponseParams> {
  static std::unique_ptr<cache_storage::RequestCachedResponseParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return cache_storage::RequestCachedResponseParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const cache_storage::RequestCachedResponseParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<cache_storage::RequestCachedResponseResult> {
  static std::unique_ptr<cache_storage::RequestCachedResponseResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return cache_storage::RequestCachedResponseResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const cache_storage::RequestCachedResponseResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<cache_storage::RequestEntriesParams> {
  static std::unique_ptr<cache_storage::RequestEntriesParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return cache_storage::RequestEntriesParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const cache_storage::RequestEntriesParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<cache_storage::RequestEntriesResult> {
  static std::unique_ptr<cache_storage::RequestEntriesResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return cache_storage::RequestEntriesResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const cache_storage::RequestEntriesResult& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace headless

#endif  // HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_CACHE_STORAGE_H_
