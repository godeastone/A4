// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let filesystem = {};
/** @const */
filesystem.mojom = {};
filesystem.mojom.TimespecOrNow = class {
  constructor() {
    /** @type { !boolean } */
    this.now;
    /** @type { !number } */
    this.seconds;
  }
};
filesystem.mojom.FileInformation = class {
  constructor() {
    /** @type { !filesystem.mojom.FsFileType } */
    this.type;
    /** @type { !number } */
    this.size;
    /** @type { !number } */
    this.atime;
    /** @type { !number } */
    this.mtime;
    /** @type { !number } */
    this.ctime;
  }
};
filesystem.mojom.DirectoryEntry = class {
  constructor() {
    /** @type { !mojoBase.mojom.FilePath } */
    this.name;
    /** @type { !filesystem.mojom.FsFileType } */
    this.type;
  }
};
