// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let securityInterstitials = {};
/** @const */
securityInterstitials.mojom = {};
/** @implements {mojo.InterfacePtr} */
securityInterstitials.mojom.InterstitialCommandsPtr = class {

  /**
   */
   dontProceed() {}
  /**
   */
   proceed() {}
  /**
   */
   showMoreSection() {}
  /**
   */
   openHelpCenter() {}
  /**
   */
   openDiagnostic() {}
  /**
   */
   reload() {}
  /**
   */
   openDateSettings() {}
  /**
   */
   openLogin() {}
  /**
   */
   doReport() {}
  /**
   */
   dontReport() {}
  /**
   */
   openReportingPrivacy() {}
  /**
   */
   openWhitepaper() {}
  /**
   */
   reportPhishingError() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
securityInterstitials.mojom.InterstitialCommands;
securityInterstitials.mojom.InterstitialCommands_DontProceed_Params = class {
  constructor() {
  }
};
securityInterstitials.mojom.InterstitialCommands_Proceed_Params = class {
  constructor() {
  }
};
securityInterstitials.mojom.InterstitialCommands_ShowMoreSection_Params = class {
  constructor() {
  }
};
securityInterstitials.mojom.InterstitialCommands_OpenHelpCenter_Params = class {
  constructor() {
  }
};
securityInterstitials.mojom.InterstitialCommands_OpenDiagnostic_Params = class {
  constructor() {
  }
};
securityInterstitials.mojom.InterstitialCommands_Reload_Params = class {
  constructor() {
  }
};
securityInterstitials.mojom.InterstitialCommands_OpenDateSettings_Params = class {
  constructor() {
  }
};
securityInterstitials.mojom.InterstitialCommands_OpenLogin_Params = class {
  constructor() {
  }
};
securityInterstitials.mojom.InterstitialCommands_DoReport_Params = class {
  constructor() {
  }
};
securityInterstitials.mojom.InterstitialCommands_DontReport_Params = class {
  constructor() {
  }
};
securityInterstitials.mojom.InterstitialCommands_OpenReportingPrivacy_Params = class {
  constructor() {
  }
};
securityInterstitials.mojom.InterstitialCommands_OpenWhitepaper_Params = class {
  constructor() {
  }
};
securityInterstitials.mojom.InterstitialCommands_ReportPhishingError_Params = class {
  constructor() {
  }
};
