// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE FEATURES FILE:
//   ['../../extensions/common/api/_manifest_features.json', '../../chrome/common/extensions/api/_manifest_features.json']
// DO NOT EDIT.

#ifndef MANIFEST_FEATURES_H
#define MANIFEST_FEATURES_H

#include "extensions/common/features/feature_provider.h"

namespace extensions {

class ManifestFeatureProvider : public FeatureProvider {
 public:
  ManifestFeatureProvider();
  ~ManifestFeatureProvider() override;

 private:
  DISALLOW_COPY_AND_ASSIGN(ManifestFeatureProvider);
};

}  // namespace extensions

#endif  // MANIFEST_FEATURES_H