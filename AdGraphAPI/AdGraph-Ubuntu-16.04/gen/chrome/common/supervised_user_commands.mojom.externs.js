// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let supervisedUser = {};
/** @const */
supervisedUser.mojom = {};
/** @implements {mojo.InterfacePtr} */
supervisedUser.mojom.SupervisedUserCommandsPtr = class {

  /**
   */
   goBack() {}
  /**
   * @return {Promise}
   */
   requestPermission() {}
  /**
   */
   feedback() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
supervisedUser.mojom.SupervisedUserCommands;
supervisedUser.mojom.SupervisedUserCommands_GoBack_Params = class {
  constructor() {
  }
};
supervisedUser.mojom.SupervisedUserCommands_RequestPermission_Params = class {
  constructor() {
  }
};
supervisedUser.mojom.SupervisedUserCommands_RequestPermission_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
supervisedUser.mojom.SupervisedUserCommands_Feedback_Params = class {
  constructor() {
  }
};
