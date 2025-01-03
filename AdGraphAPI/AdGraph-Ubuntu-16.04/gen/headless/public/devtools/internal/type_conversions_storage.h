// This file is generated

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_STORAGE_H_
#define HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_STORAGE_H_

#include "headless/public/devtools/domains/types_storage.h"
#include "headless/public/internal/value_conversions.h"

namespace headless {
namespace internal {

template <>
struct FromValue<storage::StorageType> {
  static storage::StorageType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return storage::StorageType::APPCACHE;
    }
    if (value.GetString() == "appcache")
      return storage::StorageType::APPCACHE;
    if (value.GetString() == "cookies")
      return storage::StorageType::COOKIES;
    if (value.GetString() == "file_systems")
      return storage::StorageType::FILE_SYSTEMS;
    if (value.GetString() == "indexeddb")
      return storage::StorageType::INDEXEDDB;
    if (value.GetString() == "local_storage")
      return storage::StorageType::LOCAL_STORAGE;
    if (value.GetString() == "shader_cache")
      return storage::StorageType::SHADER_CACHE;
    if (value.GetString() == "websql")
      return storage::StorageType::WEBSQL;
    if (value.GetString() == "service_workers")
      return storage::StorageType::SERVICE_WORKERS;
    if (value.GetString() == "cache_storage")
      return storage::StorageType::CACHE_STORAGE;
    if (value.GetString() == "all")
      return storage::StorageType::ALL;
    if (value.GetString() == "other")
      return storage::StorageType::OTHER;
    errors->AddError("invalid enum value");
    return storage::StorageType::APPCACHE;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::StorageType& value, T*) {
  switch (value) {
    case storage::StorageType::APPCACHE:
      return std::make_unique<base::Value>("appcache");
    case storage::StorageType::COOKIES:
      return std::make_unique<base::Value>("cookies");
    case storage::StorageType::FILE_SYSTEMS:
      return std::make_unique<base::Value>("file_systems");
    case storage::StorageType::INDEXEDDB:
      return std::make_unique<base::Value>("indexeddb");
    case storage::StorageType::LOCAL_STORAGE:
      return std::make_unique<base::Value>("local_storage");
    case storage::StorageType::SHADER_CACHE:
      return std::make_unique<base::Value>("shader_cache");
    case storage::StorageType::WEBSQL:
      return std::make_unique<base::Value>("websql");
    case storage::StorageType::SERVICE_WORKERS:
      return std::make_unique<base::Value>("service_workers");
    case storage::StorageType::CACHE_STORAGE:
      return std::make_unique<base::Value>("cache_storage");
    case storage::StorageType::ALL:
      return std::make_unique<base::Value>("all");
    case storage::StorageType::OTHER:
      return std::make_unique<base::Value>("other");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<storage::UsageForType> {
  static std::unique_ptr<storage::UsageForType> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::UsageForType::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::UsageForType& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::ClearDataForOriginParams> {
  static std::unique_ptr<storage::ClearDataForOriginParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::ClearDataForOriginParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::ClearDataForOriginParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::ClearDataForOriginResult> {
  static std::unique_ptr<storage::ClearDataForOriginResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::ClearDataForOriginResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::ClearDataForOriginResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::GetUsageAndQuotaParams> {
  static std::unique_ptr<storage::GetUsageAndQuotaParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::GetUsageAndQuotaParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::GetUsageAndQuotaParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::GetUsageAndQuotaResult> {
  static std::unique_ptr<storage::GetUsageAndQuotaResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::GetUsageAndQuotaResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::GetUsageAndQuotaResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::TrackCacheStorageForOriginParams> {
  static std::unique_ptr<storage::TrackCacheStorageForOriginParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::TrackCacheStorageForOriginParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::TrackCacheStorageForOriginParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::TrackCacheStorageForOriginResult> {
  static std::unique_ptr<storage::TrackCacheStorageForOriginResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::TrackCacheStorageForOriginResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::TrackCacheStorageForOriginResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::TrackIndexedDBForOriginParams> {
  static std::unique_ptr<storage::TrackIndexedDBForOriginParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::TrackIndexedDBForOriginParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::TrackIndexedDBForOriginParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::TrackIndexedDBForOriginResult> {
  static std::unique_ptr<storage::TrackIndexedDBForOriginResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::TrackIndexedDBForOriginResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::TrackIndexedDBForOriginResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::UntrackCacheStorageForOriginParams> {
  static std::unique_ptr<storage::UntrackCacheStorageForOriginParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::UntrackCacheStorageForOriginParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::UntrackCacheStorageForOriginParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::UntrackCacheStorageForOriginResult> {
  static std::unique_ptr<storage::UntrackCacheStorageForOriginResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::UntrackCacheStorageForOriginResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::UntrackCacheStorageForOriginResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::UntrackIndexedDBForOriginParams> {
  static std::unique_ptr<storage::UntrackIndexedDBForOriginParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::UntrackIndexedDBForOriginParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::UntrackIndexedDBForOriginParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::UntrackIndexedDBForOriginResult> {
  static std::unique_ptr<storage::UntrackIndexedDBForOriginResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::UntrackIndexedDBForOriginResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::UntrackIndexedDBForOriginResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::CacheStorageContentUpdatedParams> {
  static std::unique_ptr<storage::CacheStorageContentUpdatedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::CacheStorageContentUpdatedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::CacheStorageContentUpdatedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::CacheStorageListUpdatedParams> {
  static std::unique_ptr<storage::CacheStorageListUpdatedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::CacheStorageListUpdatedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::CacheStorageListUpdatedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::IndexedDBContentUpdatedParams> {
  static std::unique_ptr<storage::IndexedDBContentUpdatedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::IndexedDBContentUpdatedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::IndexedDBContentUpdatedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<storage::IndexedDBListUpdatedParams> {
  static std::unique_ptr<storage::IndexedDBListUpdatedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return storage::IndexedDBListUpdatedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const storage::IndexedDBListUpdatedParams& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace headless

#endif  // HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_STORAGE_H_
