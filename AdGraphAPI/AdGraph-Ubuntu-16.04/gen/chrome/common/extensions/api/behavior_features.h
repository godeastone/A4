// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE FEATURES FILE:
//   ['../../extensions/common/api/_behavior_features.json']
// DO NOT EDIT.

#ifndef BEHAVIOR_FEATURES_H
#define BEHAVIOR_FEATURES_H

#include "extensions/common/features/feature_provider.h"

namespace extensions {

class BehaviorFeatureProvider : public FeatureProvider {
 public:
  BehaviorFeatureProvider();
  ~BehaviorFeatureProvider() override;

 private:
  DISALLOW_COPY_AND_ASSIGN(BehaviorFeatureProvider);
};

}  // namespace extensions

#endif  // BEHAVIOR_FEATURES_H