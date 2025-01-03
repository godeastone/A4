// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let device = {};
/** @const */
device.mojom = {};
/** @implements {mojo.InterfacePtr} */
device.mojom.VRServicePtr = class {

  /**
   * @param { !device.mojom.VRServiceClientPtr } client
   * @return {Promise}
   */
   setClient(client) {}
  /**
   * @param { !boolean } listening
   */
   setListeningForActivate(listening) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.VRService;
/** @implements {mojo.InterfacePtr} */
device.mojom.VRServiceClientPtr = class {

  /**
   * @param { !device.mojom.VRMagicWindowProviderPtr } magicWindowProvider
   * @param { !device.mojom.VRDisplayHostPtr } display
   * @param { !mojo.InterfaceRequest } request
   * @param { !device.mojom.VRDisplayInfo } displayInfo
   */
   onDisplayConnected(magicWindowProvider, display, request, displayInfo) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.VRServiceClient;
/** @implements {mojo.InterfacePtr} */
device.mojom.VRSubmitFrameClientPtr = class {

  /**
   * @param { !boolean } success
   */
   onSubmitFrameTransferred(success) {}
  /**
   */
   onSubmitFrameRendered() {}
  /**
   * @param { !gfx.mojom.GpuFenceHandle } gpuFenceHandle
   */
   onSubmitFrameGpuFence(gpuFenceHandle) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.VRSubmitFrameClient;
/** @implements {mojo.InterfacePtr} */
device.mojom.VRDisplayHostPtr = class {

  /**
   * @param { !device.mojom.VRSubmitFrameClientPtr } client
   * @param { !mojo.InterfaceRequest } request
   * @param { !device.mojom.VRRequestPresentOptions } options
   * @param { !boolean } triggeredByDisplayactive
   * @return {Promise}
   */
   requestPresent(client, request, options, triggeredByDisplayactive) {}
  /**
   */
   exitPresent() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.VRDisplayHost;
/** @implements {mojo.InterfacePtr} */
device.mojom.VRMagicWindowProviderPtr = class {

  /**
   * @return {Promise}
   */
   getPose() {}
  /**
   * @param { !gfx.mojom.Size } frameSize
   * @param { !display.mojom.Rotation } displayRotation
   * @return {Promise}
   */
   getFrameData(frameSize, displayRotation) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.VRMagicWindowProvider;
/** @implements {mojo.InterfacePtr} */
device.mojom.VRPresentationProviderPtr = class {

  /**
   * @return {Promise}
   */
   getVSync() {}
  /**
   * @param { !number } frameId
   * @param { !gfx.mojom.RectF } leftBounds
   * @param { !gfx.mojom.RectF } rightBounds
   * @param { !gfx.mojom.Size } sourceSize
   */
   updateLayerBounds(frameId, leftBounds, rightBounds, sourceSize) {}
  /**
   * @param { !number } frameId
   * @param { !gpu.mojom.SyncToken } syncToken
   */
   submitFrameMissing(frameId, syncToken) {}
  /**
   * @param { !number } frameId
   * @param { !gpu.mojom.MailboxHolder } mailboxHolder
   * @param { !mojoBase.mojom.TimeDelta } timeWaited
   */
   submitFrame(frameId, mailboxHolder, timeWaited) {}
  /**
   * @param { !number } frameId
   * @param { !mojo.MojoHandle } texture
   */
   submitFrameWithTextureHandle(frameId, texture) {}
  /**
   * @param { !number } frameId
   * @param { !gpu.mojom.SyncToken } syncToken
   * @param { !mojoBase.mojom.TimeDelta } timeWaited
   */
   submitFrameDrawnIntoTexture(frameId, syncToken, timeWaited) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.VRPresentationProvider;
/** @implements {mojo.InterfacePtr} */
device.mojom.VRDisplayClientPtr = class {

  /**
   * @param { !device.mojom.VRDisplayInfo } display
   */
   onChanged(display) {}
  /**
   */
   onExitPresent() {}
  /**
   */
   onBlur() {}
  /**
   */
   onFocus() {}
  /**
   * @param { !device.mojom.VRDisplayEventReason } reason
   * @return {Promise}
   */
   onActivate(reason) {}
  /**
   * @param { !device.mojom.VRDisplayEventReason } reason
   */
   onDeactivate(reason) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.VRDisplayClient;
device.mojom.XRInputSourceDescription = class {
  constructor() {
    /** @type { !device.mojom.XRPointerOrigin } */
    this.pointerOrigin;
    /** @type { !device.mojom.XRHandedness } */
    this.handedness;
    /** @type { !boolean } */
    this.emulatedPosition;
    /** @type { gfx.mojom.Transform } */
    this.pointerOffset;
  }
};
device.mojom.XRInputSourceState = class {
  constructor() {
    /** @type { !number } */
    this.sourceId;
    /** @type { !boolean } */
    this.primaryInputPressed;
    /** @type { !boolean } */
    this.primaryInputClicked;
    /** @type { device.mojom.XRInputSourceDescription } */
    this.description;
    /** @type { gfx.mojom.Transform } */
    this.grip;
  }
};
device.mojom.VRFieldOfView = class {
  constructor() {
    /** @type { !number } */
    this.upDegrees;
    /** @type { !number } */
    this.downDegrees;
    /** @type { !number } */
    this.leftDegrees;
    /** @type { !number } */
    this.rightDegrees;
  }
};
device.mojom.VRPose = class {
  constructor() {
    /** @type { Array<number> } */
    this.orientation;
    /** @type { Array<number> } */
    this.position;
    /** @type { Array<number> } */
    this.angularVelocity;
    /** @type { Array<number> } */
    this.linearVelocity;
    /** @type { Array<number> } */
    this.angularAcceleration;
    /** @type { Array<number> } */
    this.linearAcceleration;
    /** @type { Array<device.mojom.XRInputSourceState> } */
    this.inputState;
    /** @type { !boolean } */
    this.poseReset;
  }
};
device.mojom.VRDisplayCapabilities = class {
  constructor() {
    /** @type { !boolean } */
    this.hasPosition;
    /** @type { !boolean } */
    this.hasExternalDisplay;
    /** @type { !boolean } */
    this.canPresent;
    /** @type { !boolean } */
    this.canProvidePassThroughImages;
  }
};
device.mojom.VREyeParameters = class {
  constructor() {
    /** @type { !device.mojom.VRFieldOfView } */
    this.fieldOfView;
    /** @type { !Array<number> } */
    this.offset;
    /** @type { !number } */
    this.renderWidth;
    /** @type { !number } */
    this.renderHeight;
  }
};
device.mojom.VRStageParameters = class {
  constructor() {
    /** @type { !Array<number> } */
    this.standingTransform;
    /** @type { !number } */
    this.sizeX;
    /** @type { !number } */
    this.sizeZ;
  }
};
device.mojom.VRDisplayInfo = class {
  constructor() {
    /** @type { !number } */
    this.index;
    /** @type { !number } */
    this.webvrDefaultFramebufferScale;
    /** @type { !string } */
    this.displayName;
    /** @type { !device.mojom.VRDisplayCapabilities } */
    this.capabilities;
    /** @type { device.mojom.VRStageParameters } */
    this.stageParameters;
    /** @type { device.mojom.VREyeParameters } */
    this.leftEye;
    /** @type { device.mojom.VREyeParameters } */
    this.rightEye;
    /** @type { !number } */
    this.webxrDefaultFramebufferScale;
  }
};
device.mojom.VRRequestPresentOptions = class {
  constructor() {
    /** @type { !boolean } */
    this.preserveDrawingBuffer;
    /** @type { !boolean } */
    this.webxrInput;
    /** @type { !boolean } */
    this.sharedBufferDrawSupported;
  }
};
device.mojom.VRDisplayFrameTransportOptions = class {
  constructor() {
    /** @type { !device.mojom.VRDisplayFrameTransportMethod } */
    this.transportMethod;
    /** @type { !boolean } */
    this.waitForTransferNotification;
    /** @type { !boolean } */
    this.waitForRenderNotification;
    /** @type { !boolean } */
    this.waitForGpuFence;
  }
};
device.mojom.VRMagicWindowFrameData = class {
  constructor() {
    /** @type { !device.mojom.VRPose } */
    this.pose;
    /** @type { !gpu.mojom.MailboxHolder } */
    this.bufferHolder;
    /** @type { !gfx.mojom.Size } */
    this.bufferSize;
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.timeDelta;
    /** @type { !Array<number> } */
    this.projectionMatrix;
  }
};
device.mojom.VRService_SetClient_Params = class {
  constructor() {
    /** @type { !device.mojom.VRServiceClientPtr } */
    this.client;
  }
};
device.mojom.VRService_SetClient_ResponseParams = class {
  constructor() {
  }
};
device.mojom.VRService_SetListeningForActivate_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.listening;
  }
};
device.mojom.VRServiceClient_OnDisplayConnected_Params = class {
  constructor() {
    /** @type { !device.mojom.VRMagicWindowProviderPtr } */
    this.magicWindowProvider;
    /** @type { !device.mojom.VRDisplayHostPtr } */
    this.display;
    /** @type { !mojo.InterfaceRequest } */
    this.request;
    /** @type { !device.mojom.VRDisplayInfo } */
    this.displayInfo;
  }
};
device.mojom.VRSubmitFrameClient_OnSubmitFrameTransferred_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
device.mojom.VRSubmitFrameClient_OnSubmitFrameRendered_Params = class {
  constructor() {
  }
};
device.mojom.VRSubmitFrameClient_OnSubmitFrameGpuFence_Params = class {
  constructor() {
    /** @type { !gfx.mojom.GpuFenceHandle } */
    this.gpuFenceHandle;
  }
};
device.mojom.VRDisplayHost_RequestPresent_Params = class {
  constructor() {
    /** @type { !device.mojom.VRSubmitFrameClientPtr } */
    this.client;
    /** @type { !mojo.InterfaceRequest } */
    this.request;
    /** @type { !boolean } */
    this.triggeredByDisplayactive;
    /** @type { !device.mojom.VRRequestPresentOptions } */
    this.options;
  }
};
device.mojom.VRDisplayHost_RequestPresent_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
    /** @type { device.mojom.VRDisplayFrameTransportOptions } */
    this.transportOptions;
  }
};
device.mojom.VRDisplayHost_ExitPresent_Params = class {
  constructor() {
  }
};
device.mojom.VRMagicWindowProvider_GetPose_Params = class {
  constructor() {
  }
};
device.mojom.VRMagicWindowProvider_GetPose_ResponseParams = class {
  constructor() {
    /** @type { device.mojom.VRPose } */
    this.pose;
  }
};
device.mojom.VRMagicWindowProvider_GetFrameData_Params = class {
  constructor() {
    /** @type { !gfx.mojom.Size } */
    this.frameSize;
    /** @type { !display.mojom.Rotation } */
    this.displayRotation;
  }
};
device.mojom.VRMagicWindowProvider_GetFrameData_ResponseParams = class {
  constructor() {
    /** @type { device.mojom.VRMagicWindowFrameData } */
    this.frameData;
  }
};
device.mojom.VRPresentationProvider_GetVSync_Params = class {
  constructor() {
  }
};
device.mojom.VRPresentationProvider_GetVSync_ResponseParams = class {
  constructor() {
    /** @type { device.mojom.VRPose } */
    this.pose;
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.time;
    /** @type { !number } */
    this.frameId;
    /** @type { !device.mojom.VSyncStatus } */
    this.status;
    /** @type { gpu.mojom.MailboxHolder } */
    this.bufferHolder;
  }
};
device.mojom.VRPresentationProvider_UpdateLayerBounds_Params = class {
  constructor() {
    /** @type { !number } */
    this.frameId;
    /** @type { !gfx.mojom.RectF } */
    this.leftBounds;
    /** @type { !gfx.mojom.RectF } */
    this.rightBounds;
    /** @type { !gfx.mojom.Size } */
    this.sourceSize;
  }
};
device.mojom.VRPresentationProvider_SubmitFrameMissing_Params = class {
  constructor() {
    /** @type { !number } */
    this.frameId;
    /** @type { !gpu.mojom.SyncToken } */
    this.syncToken;
  }
};
device.mojom.VRPresentationProvider_SubmitFrame_Params = class {
  constructor() {
    /** @type { !number } */
    this.frameId;
    /** @type { !gpu.mojom.MailboxHolder } */
    this.mailboxHolder;
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.timeWaited;
  }
};
device.mojom.VRPresentationProvider_SubmitFrameWithTextureHandle_Params = class {
  constructor() {
    /** @type { !number } */
    this.frameId;
    /** @type { !mojo.MojoHandle } */
    this.texture;
  }
};
device.mojom.VRPresentationProvider_SubmitFrameDrawnIntoTexture_Params = class {
  constructor() {
    /** @type { !number } */
    this.frameId;
    /** @type { !gpu.mojom.SyncToken } */
    this.syncToken;
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.timeWaited;
  }
};
device.mojom.VRDisplayClient_OnChanged_Params = class {
  constructor() {
    /** @type { !device.mojom.VRDisplayInfo } */
    this.display;
  }
};
device.mojom.VRDisplayClient_OnExitPresent_Params = class {
  constructor() {
  }
};
device.mojom.VRDisplayClient_OnBlur_Params = class {
  constructor() {
  }
};
device.mojom.VRDisplayClient_OnFocus_Params = class {
  constructor() {
  }
};
device.mojom.VRDisplayClient_OnActivate_Params = class {
  constructor() {
    /** @type { !device.mojom.VRDisplayEventReason } */
    this.reason;
  }
};
device.mojom.VRDisplayClient_OnActivate_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.willNotPresent;
  }
};
device.mojom.VRDisplayClient_OnDeactivate_Params = class {
  constructor() {
    /** @type { !device.mojom.VRDisplayEventReason } */
    this.reason;
  }
};
