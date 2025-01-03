// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE FEATURES FILE:
//   ['../../extensions/common/api/_api_features.json', '../../chrome/common/extensions/api/_api_features.json']
// DO NOT EDIT.

#ifndef API_FEATURES_H
#define API_FEATURES_H

#include "extensions/common/features/feature_provider.h"

namespace extensions {

class APIFeatureProvider : public FeatureProvider {
 public:
  APIFeatureProvider();
  ~APIFeatureProvider() override;

 private:
  DISALLOW_COPY_AND_ASSIGN(APIFeatureProvider);
};

}  // namespace extensions

#endif  // API_FEATURES_H