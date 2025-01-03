// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let chrome = {};
/** @const */
chrome.mojom = {};
/** @implements {mojo.InterfacePtr} */
chrome.mojom.RendererConfigurationPtr = class {

  /**
   * @param { !boolean } isIncognitoProcess
   */
   setInitialConfiguration(isIncognitoProcess) {}
  /**
   * @param { !contentSettings.mojom.RendererContentSettingRules } rules
   */
   setContentSettingRules(rules) {}
  /**
   * @param { !string } trialName
   * @param { !string } groupName
   */
   setFieldTrialGroup(trialName, groupName) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
chrome.mojom.RendererConfiguration;
chrome.mojom.RendererConfiguration_SetInitialConfiguration_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.isIncognitoProcess;
  }
};
chrome.mojom.RendererConfiguration_SetContentSettingRules_Params = class {
  constructor() {
    /** @type { !contentSettings.mojom.RendererContentSettingRules } */
    this.rules;
  }
};
chrome.mojom.RendererConfiguration_SetFieldTrialGroup_Params = class {
  constructor() {
    /** @type { !string } */
    this.trialName;
    /** @type { !string } */
    this.groupName;
  }
};
