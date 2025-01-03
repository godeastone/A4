// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let media = {};
/** @const */
media.mojom = {};
media.mojom.MediaLogEvent = class {
  constructor() {
  }
};
media.mojom.EncryptionPattern = class {
  constructor() {
    /** @type { !number } */
    this.cryptByteBlock;
    /** @type { !number } */
    this.skipByteBlock;
  }
};
media.mojom.EncryptionScheme = class {
  constructor() {
    /** @type { !media.mojom.CipherMode } */
    this.mode;
    /** @type { !media.mojom.EncryptionPattern } */
    this.pattern;
  }
};
media.mojom.VideoColorSpace = class {
  constructor() {
    /** @type { !media.mojom.PrimaryID } */
    this.primaries;
    /** @type { !media.mojom.TransferID } */
    this.transfer;
    /** @type { !media.mojom.MatrixID } */
    this.matrix;
    /** @type { !media.mojom.RangeID } */
    this.range;
  }
};
media.mojom.MasteringMetadata = class {
  constructor() {
    /** @type { !gfx.mojom.PointF } */
    this.primaryR;
    /** @type { !gfx.mojom.PointF } */
    this.primaryG;
    /** @type { !gfx.mojom.PointF } */
    this.primaryB;
    /** @type { !gfx.mojom.PointF } */
    this.whitePoint;
    /** @type { !number } */
    this.luminanceMax;
    /** @type { !number } */
    this.luminanceMin;
  }
};
media.mojom.HDRMetadata = class {
  constructor() {
    /** @type { !media.mojom.MasteringMetadata } */
    this.masteringMetadata;
    /** @type { !number } */
    this.maxContentLightLevel;
    /** @type { !number } */
    this.maxFrameAverageLightLevel;
  }
};
media.mojom.AudioDecoderConfig = class {
  constructor() {
    /** @type { !media.mojom.AudioCodec } */
    this.codec;
    /** @type { !media.mojom.SampleFormat } */
    this.sampleFormat;
    /** @type { !media.mojom.ChannelLayout } */
    this.channelLayout;
    /** @type { !number } */
    this.samplesPerSecond;
    /** @type { !Array<number> } */
    this.extraData;
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.seekPreroll;
    /** @type { !number } */
    this.codecDelay;
    /** @type { !media.mojom.EncryptionScheme } */
    this.encryptionScheme;
  }
};
media.mojom.VideoDecoderConfig = class {
  constructor() {
    /** @type { !media.mojom.VideoCodec } */
    this.codec;
    /** @type { !media.mojom.VideoCodecProfile } */
    this.profile;
    /** @type { !media.mojom.VideoPixelFormat } */
    this.format;
    /** @type { !media.mojom.ColorSpace } */
    this.colorSpace;
    /** @type { !media.mojom.VideoRotation } */
    this.videoRotation;
    /** @type { !gfx.mojom.Size } */
    this.codedSize;
    /** @type { !gfx.mojom.Rect } */
    this.visibleRect;
    /** @type { !gfx.mojom.Size } */
    this.naturalSize;
    /** @type { !Array<number> } */
    this.extraData;
    /** @type { !media.mojom.EncryptionScheme } */
    this.encryptionScheme;
    /** @type { !media.mojom.VideoColorSpace } */
    this.colorSpaceInfo;
    /** @type { media.mojom.HDRMetadata } */
    this.hdrMetadata;
  }
};
media.mojom.SubsampleEntry = class {
  constructor() {
  }
};
media.mojom.DecryptConfig = class {
  constructor() {
    /** @type { !media.mojom.EncryptionMode } */
    this.encryptionMode;
    /** @type { !string } */
    this.keyId;
    /** @type { !string } */
    this.iv;
    /** @type { !Array<media.mojom.SubsampleEntry> } */
    this.subsamples;
    /** @type { media.mojom.EncryptionPattern } */
    this.encryptionPattern;
  }
};
media.mojom.DecoderBuffer = class {
  constructor() {
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.timestamp;
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.duration;
    /** @type { !boolean } */
    this.isEndOfStream;
    /** @type { !boolean } */
    this.isKeyFrame;
    /** @type { !number } */
    this.dataSize;
    /** @type { !Array<number> } */
    this.sideData;
    /** @type { media.mojom.DecryptConfig } */
    this.decryptConfig;
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.frontDiscard;
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.backDiscard;
  }
};
media.mojom.AudioBuffer = class {
  constructor() {
    /** @type { !media.mojom.SampleFormat } */
    this.sampleFormat;
    /** @type { !media.mojom.ChannelLayout } */
    this.channelLayout;
    /** @type { !number } */
    this.channelCount;
    /** @type { !number } */
    this.sampleRate;
    /** @type { !number } */
    this.frameCount;
    /** @type { !boolean } */
    this.endOfStream;
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.timestamp;
    /** @type { !Array<number> } */
    this.data;
  }
};
media.mojom.VideoFrame = class {
  constructor() {
    /** @type { !media.mojom.VideoPixelFormat } */
    this.format;
    /** @type { !gfx.mojom.Size } */
    this.codedSize;
    /** @type { !gfx.mojom.Rect } */
    this.visibleRect;
    /** @type { !gfx.mojom.Size } */
    this.naturalSize;
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.timestamp;
    /** @type { !Object } */
    this.data;
    /** @type { !mojoBase.mojom.DictionaryValue } */
    this.metadata;
  }
};
media.mojom.EosVideoFrameData = class {
  constructor() {
  }
};
media.mojom.SharedBufferVideoFrameData = class {
  constructor() {
    /** @type { !mojo.MojoHandle } */
    this.frameData;
    /** @type { !number } */
    this.yStride;
    /** @type { !number } */
    this.frameDataSize;
    /** @type { !number } */
    this.uStride;
    /** @type { !number } */
    this.vStride;
    /** @type { !number } */
    this.yOffset;
    /** @type { !number } */
    this.uOffset;
    /** @type { !number } */
    this.vOffset;
  }
};
media.mojom.MailboxVideoFrameData = class {
  constructor() {
    /** @type { !Array<gpu.mojom.MailboxHolder> } */
    this.mailboxHolder;
  }
};
media.mojom.PipelineStatistics = class {
  constructor() {
    /** @type { !number } */
    this.audioBytesDecoded;
    /** @type { !number } */
    this.videoBytesDecoded;
    /** @type { !number } */
    this.videoFramesDecoded;
    /** @type { !number } */
    this.videoFramesDropped;
    /** @type { !number } */
    this.audioMemoryUsage;
    /** @type { !number } */
    this.videoMemoryUsage;
  }
};
media.mojom.PredictionFeatures = class {
  constructor() {
    /** @type { !media.mojom.VideoCodecProfile } */
    this.profile;
    /** @type { !number } */
    this.framesPerSec;
    /** @type { !gfx.mojom.Size } */
    this.videoSize;
  }
};
media.mojom.PredictionTargets = class {
  constructor() {
    /** @type { !number } */
    this.framesDecoded;
    /** @type { !number } */
    this.framesDropped;
    /** @type { !number } */
    this.framesDecodedPowerEfficient;
  }
};
