// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.LevelDBObserverPtr = class {

  /**
   * @param { !Array<number> } key
   * @param { !Array<number> } value
   * @param { !string } source
   */
   keyAdded(key, value, source) {}
  /**
   * @param { !Array<number> } key
   * @param { !Array<number> } newValue
   * @param { !Array<number> } oldValue
   * @param { !string } source
   */
   keyChanged(key, newValue, oldValue, source) {}
  /**
   * @param { !Array<number> } key
   * @param { !Array<number> } oldValue
   * @param { !string } source
   */
   keyDeleted(key, oldValue, source) {}
  /**
   * @param { !string } source
   */
   allDeleted(source) {}
  /**
   * @param { !boolean } value
   */
   shouldSendOldValueOnMutations(value) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.LevelDBObserver;
/** @implements {mojo.InterfacePtr} */
content.mojom.LevelDBWrapperGetAllCallbackPtr = class {

  /**
   * @param { !boolean } success
   */
   complete(success) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.LevelDBWrapperGetAllCallback;
/** @implements {mojo.InterfacePtr} */
content.mojom.LevelDBWrapperPtr = class {

  /**
   * @param { !mojo.AssociatedInterfacePtrInfo } observer
   */
   addObserver(observer) {}
  /**
   * @param { !Array<number> } key
   * @param { !Array<number> } value
   * @param { Array<number> } clientOldValue
   * @param { !string } source
   * @return {Promise}
   */
   put(key, value, clientOldValue, source) {}
  /**
   * @param { !Array<number> } key
   * @param { Array<number> } clientOldValue
   * @param { !string } source
   * @return {Promise}
   */
   delete(key, clientOldValue, source) {}
  /**
   * @param { !string } source
   * @return {Promise}
   */
   deleteAll(source) {}
  /**
   * @param { !Array<number> } key
   * @return {Promise}
   */
   get(key) {}
  /**
   * @param { !mojo.AssociatedInterfacePtrInfo } completeCallback
   * @return {Promise}
   */
   getAll(completeCallback) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.LevelDBWrapper;
content.mojom.KeyValue = class {
  constructor() {
    /** @type { !Array<number> } */
    this.key;
    /** @type { !Array<number> } */
    this.value;
  }
};
content.mojom.LevelDBObserver_KeyAdded_Params = class {
  constructor() {
    /** @type { !Array<number> } */
    this.key;
    /** @type { !Array<number> } */
    this.value;
    /** @type { !string } */
    this.source;
  }
};
content.mojom.LevelDBObserver_KeyChanged_Params = class {
  constructor() {
    /** @type { !Array<number> } */
    this.key;
    /** @type { !Array<number> } */
    this.newValue;
    /** @type { !Array<number> } */
    this.oldValue;
    /** @type { !string } */
    this.source;
  }
};
content.mojom.LevelDBObserver_KeyDeleted_Params = class {
  constructor() {
    /** @type { !Array<number> } */
    this.key;
    /** @type { !Array<number> } */
    this.oldValue;
    /** @type { !string } */
    this.source;
  }
};
content.mojom.LevelDBObserver_AllDeleted_Params = class {
  constructor() {
    /** @type { !string } */
    this.source;
  }
};
content.mojom.LevelDBObserver_ShouldSendOldValueOnMutations_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.value;
  }
};
content.mojom.LevelDBWrapperGetAllCallback_Complete_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
content.mojom.LevelDBWrapper_AddObserver_Params = class {
  constructor() {
    /** @type { !mojo.AssociatedInterfacePtrInfo } */
    this.observer;
  }
};
content.mojom.LevelDBWrapper_Put_Params = class {
  constructor() {
    /** @type { !Array<number> } */
    this.key;
    /** @type { !Array<number> } */
    this.value;
    /** @type { Array<number> } */
    this.clientOldValue;
    /** @type { !string } */
    this.source;
  }
};
content.mojom.LevelDBWrapper_Put_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
content.mojom.LevelDBWrapper_Delete_Params = class {
  constructor() {
    /** @type { !Array<number> } */
    this.key;
    /** @type { Array<number> } */
    this.clientOldValue;
    /** @type { !string } */
    this.source;
  }
};
content.mojom.LevelDBWrapper_Delete_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
content.mojom.LevelDBWrapper_DeleteAll_Params = class {
  constructor() {
    /** @type { !string } */
    this.source;
  }
};
content.mojom.LevelDBWrapper_DeleteAll_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
content.mojom.LevelDBWrapper_Get_Params = class {
  constructor() {
    /** @type { !Array<number> } */
    this.key;
  }
};
content.mojom.LevelDBWrapper_Get_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
    /** @type { !Array<number> } */
    this.value;
  }
};
content.mojom.LevelDBWrapper_GetAll_Params = class {
  constructor() {
    /** @type { !mojo.AssociatedInterfacePtrInfo } */
    this.completeCallback;
  }
};
content.mojom.LevelDBWrapper_GetAll_ResponseParams = class {
  constructor() {
    /** @type { !leveldb.mojom.DatabaseError } */
    this.status;
    /** @type { !Array<content.mojom.KeyValue> } */
    this.data;
  }
};
