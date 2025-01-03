// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE FEATURES FILE:
//   ['../../extensions/common/api/_permission_features.json', '../../chrome/common/extensions/api/_permission_features.json']
// DO NOT EDIT.

#ifndef PERMISSION_FEATURES_H
#define PERMISSION_FEATURES_H

#include "extensions/common/features/feature_provider.h"

namespace extensions {

class PermissionFeatureProvider : public FeatureProvider {
 public:
  PermissionFeatureProvider();
  ~PermissionFeatureProvider() override;

 private:
  DISALLOW_COPY_AND_ASSIGN(PermissionFeatureProvider);
};

}  // namespace extensions

#endif  // PERMISSION_FEATURES_H