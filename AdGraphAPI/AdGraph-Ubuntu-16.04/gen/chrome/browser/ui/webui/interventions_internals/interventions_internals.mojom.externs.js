// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let mojom = {};
/** @implements {mojo.InterfacePtr} */
mojom.InterventionsInternalsPageHandlerPtr = class {

  /**
   * @return {Promise}
   */
   getPreviewsEnabled() {}
  /**
   * @return {Promise}
   */
   getPreviewsFlagsDetails() {}
  /**
   * @param { !mojom.InterventionsInternalsPagePtr } page
   */
   setClientPage(page) {}
  /**
   * @param { !boolean } ignored
   */
   setIgnorePreviewsBlacklistDecision(ignored) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
mojom.InterventionsInternalsPageHandler;
/** @implements {mojo.InterfacePtr} */
mojom.InterventionsInternalsPagePtr = class {

  /**
   * @param { !mojom.MessageLog } log
   */
   logNewMessage(log) {}
  /**
   * @param { !string } host
   * @param { !number } time
   */
   onBlacklistedHost(host, time) {}
  /**
   * @param { !boolean } blacklisted
   */
   onUserBlacklistedStatusChange(blacklisted) {}
  /**
   * @param { !number } time
   */
   onBlacklistCleared(time) {}
  /**
   * @param { !string } type
   */
   onEffectiveConnectionTypeChanged(type) {}
  /**
   * @param { !boolean } ignored
   */
   onIgnoreBlacklistDecisionStatusChanged(ignored) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
mojom.InterventionsInternalsPage;
mojom.PreviewsStatus = class {
  constructor() {
    /** @type { !string } */
    this.description;
    /** @type { !boolean } */
    this.enabled;
    /** @type { !string } */
    this.htmlId;
  }
};
mojom.PreviewsFlag = class {
  constructor() {
    /** @type { !string } */
    this.description;
    /** @type { !string } */
    this.link;
    /** @type { !string } */
    this.value;
    /** @type { !string } */
    this.htmlId;
  }
};
mojom.MessageLog = class {
  constructor() {
    /** @type { !string } */
    this.type;
    /** @type { !string } */
    this.description;
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !number } */
    this.time;
    /** @type { !number } */
    this.pageId;
  }
};
mojom.InterventionsInternalsPageHandler_GetPreviewsEnabled_Params = class {
  constructor() {
  }
};
mojom.InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParams = class {
  constructor() {
    /** @type { !Array<mojom.PreviewsStatus> } */
    this.statuses;
  }
};
mojom.InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Params = class {
  constructor() {
  }
};
mojom.InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParams = class {
  constructor() {
    /** @type { !Array<mojom.PreviewsFlag> } */
    this.flags;
  }
};
mojom.InterventionsInternalsPageHandler_SetClientPage_Params = class {
  constructor() {
    /** @type { !mojom.InterventionsInternalsPagePtr } */
    this.page;
  }
};
mojom.InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.ignored;
  }
};
mojom.InterventionsInternalsPage_LogNewMessage_Params = class {
  constructor() {
    /** @type { !mojom.MessageLog } */
    this.log;
  }
};
mojom.InterventionsInternalsPage_OnBlacklistedHost_Params = class {
  constructor() {
    /** @type { !string } */
    this.host;
    /** @type { !number } */
    this.time;
  }
};
mojom.InterventionsInternalsPage_OnUserBlacklistedStatusChange_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.blacklisted;
  }
};
mojom.InterventionsInternalsPage_OnBlacklistCleared_Params = class {
  constructor() {
    /** @type { !number } */
    this.time;
  }
};
mojom.InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Params = class {
  constructor() {
    /** @type { !string } */
    this.type;
  }
};
mojom.InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.ignored;
  }
};
