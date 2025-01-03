// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let contentSettings = {};
/** @const */
contentSettings.mojom = {};
contentSettings.mojom.PatternParts = class {
  constructor() {
    /** @type { !string } */
    this.scheme;
    /** @type { !boolean } */
    this.isSchemeWildcard;
    /** @type { !boolean } */
    this.hasDomainWildcard;
    /** @type { !boolean } */
    this.isPortWildcard;
    /** @type { !boolean } */
    this.isPathWildcard;
    /** @type { !string } */
    this.host;
    /** @type { !string } */
    this.port;
    /** @type { !string } */
    this.path;
  }
};
contentSettings.mojom.ContentSettingsPattern = class {
  constructor() {
    /** @type { !contentSettings.mojom.PatternParts } */
    this.parts;
    /** @type { !boolean } */
    this.isValid;
  }
};
contentSettings.mojom.ContentSettingPatternSource = class {
  constructor() {
    /** @type { !contentSettings.mojom.ContentSettingsPattern } */
    this.primaryPattern;
    /** @type { !contentSettings.mojom.ContentSettingsPattern } */
    this.secondaryPattern;
    /** @type { !Object } */
    this.settingValue;
    /** @type { !string } */
    this.source;
    /** @type { !boolean } */
    this.incognito;
  }
};
contentSettings.mojom.RendererContentSettingRules = class {
  constructor() {
    /** @type { !Array<contentSettings.mojom.ContentSettingPatternSource> } */
    this.imageRules;
    /** @type { !Array<contentSettings.mojom.ContentSettingPatternSource> } */
    this.scriptRules;
    /** @type { !Array<contentSettings.mojom.ContentSettingPatternSource> } */
    this.autoplayRules;
    /** @type { !Array<contentSettings.mojom.ContentSettingPatternSource> } */
    this.clientHintsRules;
    /** @type { !Array<contentSettings.mojom.ContentSettingPatternSource> } */
    this.popupRedirectRules;
  }
};
