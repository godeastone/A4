// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE FEATURES FILE:
//   ['../../extensions/common/api/_api_features.json', '../../chrome/common/extensions/api/_api_features.json']
// DO NOT EDIT.

#include "api_features.h"

#include "extensions/common/features/complex_feature.h"
#include "extensions/common/features/manifest_feature.h"
#include "extensions/common/features/permission_feature.h"

namespace extensions {
APIFeatureProvider::APIFeatureProvider() {
  {
    std::vector<Feature*> features;
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("accessibilityFeatures");
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
      feature->set_dependencies({"permission:accessibilityFeatures.modify"});
      features.push_back(feature);
    }
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("accessibilityFeatures");
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
      feature->set_dependencies({"permission:accessibilityFeatures.read"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("accessibilityFeatures");
    AddFeature("accessibilityFeatures", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("accessibilityPrivate");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:accessibilityPrivate"});
    AddFeature("accessibilityPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("accessibilityPrivate.onTwoFingerTouchStart");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    feature->set_session_types({FeatureSessionType::KIOSK});
    feature->set_allowlist({"E703483CEF33DEC18B4B6DD84B5C776FB9182BDB","A3BC37E2148AC4E99BE4B16AF9D42DD1E592BBBE","1C93BD3CF875F4A73C0B2A163BB8FBDA8B8B3D80","307E96539209F95A1A8740C713E6998A73657D96","4F25792AF1AA7483936DE29C07806F203C7170A0","BD8781D757D830FC2E85470A1B6E8A718B7EE0D9","4AC2B6C63C6480D150DFDA13E4A5956EB1D0DDBB","81986D4F846CEDDDB962643FA501D1780DD441BB","A9A9FC0228ADF541F0334F22BEFB8F9C245B21D7"});
    AddFeature("accessibilityPrivate.onTwoFingerTouchStart", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("accessibilityPrivate.onTwoFingerTouchStop");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    feature->set_session_types({FeatureSessionType::KIOSK});
    feature->set_allowlist({"E703483CEF33DEC18B4B6DD84B5C776FB9182BDB","A3BC37E2148AC4E99BE4B16AF9D42DD1E592BBBE","1C93BD3CF875F4A73C0B2A163BB8FBDA8B8B3D80","307E96539209F95A1A8740C713E6998A73657D96","4F25792AF1AA7483936DE29C07806F203C7170A0","BD8781D757D830FC2E85470A1B6E8A718B7EE0D9","4AC2B6C63C6480D150DFDA13E4A5956EB1D0DDBB","81986D4F846CEDDDB962643FA501D1780DD441BB","A9A9FC0228ADF541F0334F22BEFB8F9C245B21D7"});
    AddFeature("accessibilityPrivate.onTwoFingerTouchStop", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("action");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"manifest:action"});
    AddFeature("action", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("activityLogPrivate");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:activityLogPrivate"});
    AddFeature("activityLogPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("alarms");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:alarms"});
    AddFeature("alarms", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("app");
    feature->set_blocklist({"2FC374607C2DF285634B67C64A2E356C607091C3","3727DD3E564B6055387425027AD74C58784ACC15","12E618C3C6E97495AAECF2AC12DEB082353241C6","06BE211D5F014BAB34BC22D9DDA09C63A81D828E","F94EE6AB36D6C6588670B2B01EB65212D9C64E33","B9EF10DDFEA11EF77873CC5009809E5037FC4C7A"});
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT,Feature::UNBLESSED_EXTENSION_CONTEXT,Feature::CONTENT_SCRIPT_CONTEXT,Feature::WEB_PAGE_CONTEXT,Feature::BLESSED_WEB_PAGE_CONTEXT});
    feature->set_extension_types({Manifest::TYPE_HOSTED_APP,Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    feature->set_matches({"<all_urls>"});
    AddFeature("app", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("app.currentWindowInternal");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT,Feature::LOCK_SCREEN_EXTENSION_CONTEXT});
    feature->set_internal(true);
    feature->set_noparent(true);
    AddFeature("app.currentWindowInternal", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("app.currentWindowInternal.setShape");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:app.window.shape"});
    feature->set_internal(true);
    feature->set_noparent(true);
    AddFeature("app.currentWindowInternal.setShape", feature);
  }
  {
    std::vector<Feature*> features;
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("app.runtime");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT,Feature::LOCK_SCREEN_EXTENSION_CONTEXT});
      feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
      feature->set_noparent(true);
      features.push_back(feature);
    }
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("app.runtime");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_component_extensions_auto_granted(false);
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
      feature->set_extension_types({Manifest::TYPE_EXTENSION});
      feature->set_noparent(true);
      feature->set_allowlist({"2FC374607C2DF285634B67C64A2E356C607091C3","3727DD3E564B6055387425027AD74C58784ACC15","12E618C3C6E97495AAECF2AC12DEB082353241C6"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("app.runtime");
    AddFeature("app.runtime", feature);
  }
  {
    std::vector<Feature*> features;
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("app.window");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT,Feature::LOCK_SCREEN_EXTENSION_CONTEXT});
      feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
      feature->set_noparent(true);
      features.push_back(feature);
    }
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("app.window");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_component_extensions_auto_granted(false);
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
      feature->set_extension_types({Manifest::TYPE_EXTENSION});
      feature->set_noparent(true);
      feature->set_allowlist({"B9EF10DDFEA11EF77873CC5009809E5037FC4C7A","06BE211D5F014BAB34BC22D9DDA09C63A81D828E","F94EE6AB36D6C6588670B2B01EB65212D9C64E33"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("app.window");
    AddFeature("app.window", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("appViewEmbedderInternal");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:appview"});
    feature->set_internal(true);
    AddFeature("appViewEmbedderInternal", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("appViewGuestInternal");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_internal(true);
    AddFeature("appViewGuestInternal", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("appviewTag");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:appview"});
    feature->set_internal(true);
    AddFeature("appviewTag", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("audio");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:audio"});
    AddFeature("audio", feature);
  }
  {
    std::vector<Feature*> features;
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("autofillPrivate");
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
      feature->set_dependencies({"permission:autofillPrivate"});
      features.push_back(feature);
    }
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("autofillPrivate");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_contexts({Feature::WEBUI_CONTEXT});
      feature->set_matches({"chrome://settings/*"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("autofillPrivate");
    AddFeature("autofillPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("automation");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"manifest:automation"});
    AddFeature("automation", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("automationInternal");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"manifest:automation"});
    feature->set_internal(true);
    AddFeature("automationInternal", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("autotestPrivate");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:autotestPrivate"});
    AddFeature("autotestPrivate", feature);
  }
  {
    std::vector<Feature*> features;
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("bluetooth");
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
      feature->set_dependencies({"manifest:bluetooth"});
      features.push_back(feature);
    }
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("bluetooth");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_contexts({Feature::WEBUI_CONTEXT});
      feature->set_matches({"chrome://bluetooth-pairing/*","chrome://settings/*"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("bluetooth");
    AddFeature("bluetooth", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("bluetoothLowEnergy");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"manifest:bluetooth"});
    feature->set_platforms({Feature::CHROMEOS_PLATFORM,Feature::LINUX_PLATFORM});
    AddFeature("bluetoothLowEnergy", feature);
  }
  {
    std::vector<Feature*> features;
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("bluetoothPrivate");
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
      feature->set_dependencies({"permission:bluetoothPrivate"});
      features.push_back(feature);
    }
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("bluetoothPrivate");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_contexts({Feature::WEBUI_CONTEXT});
      feature->set_matches({"chrome://bluetooth-pairing/*","chrome://settings/*"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("bluetoothPrivate");
    AddFeature("bluetoothPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("bluetoothSocket");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"manifest:bluetooth"});
    AddFeature("bluetoothSocket", feature);
  }
  {
    std::vector<Feature*> features;
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("bookmarkManagerPrivate");
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
      feature->set_dependencies({"permission:bookmarkManagerPrivate"});
      features.push_back(feature);
    }
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("bookmarkManagerPrivate");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_contexts({Feature::WEBUI_CONTEXT});
      feature->set_matches({"chrome://bookmarks/*"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("bookmarkManagerPrivate");
    AddFeature("bookmarkManagerPrivate", feature);
  }
  {
    std::vector<Feature*> features;
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("bookmarks");
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
      feature->set_dependencies({"permission:bookmarks"});
      features.push_back(feature);
    }
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("bookmarks");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_contexts({Feature::WEBUI_CONTEXT});
      feature->set_matches({"chrome://bookmarks/*"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("bookmarks");
    AddFeature("bookmarks", feature);
  }
  {
    std::vector<Feature*> features;
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("bookmarks.export");
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
      feature->set_dependencies({"permission:bookmarks"});
      feature->set_allowlist({"D5736E4B5CF695CB93A2FB57E4FDC6E5AFAB6FE2","D57DE394F36DC1C3220E7604C575D29C51A6C495","3F65507A3B39259B38C8173C6FFA3D12DF64CCE9"});
      features.push_back(feature);
    }
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("bookmarks.export");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_contexts({Feature::WEBUI_CONTEXT});
      feature->set_matches({"chrome://bookmarks/*"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("bookmarks.export");
    AddFeature("bookmarks.export", feature);
  }
  {
    std::vector<Feature*> features;
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("bookmarks.import");
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
      feature->set_dependencies({"permission:bookmarks"});
      feature->set_allowlist({"D5736E4B5CF695CB93A2FB57E4FDC6E5AFAB6FE2","D57DE394F36DC1C3220E7604C575D29C51A6C495","3F65507A3B39259B38C8173C6FFA3D12DF64CCE9"});
      features.push_back(feature);
    }
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("bookmarks.import");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_contexts({Feature::WEBUI_CONTEXT});
      feature->set_matches({"chrome://bookmarks/*"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("bookmarks.import");
    AddFeature("bookmarks.import", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("brailleDisplayPrivate");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:brailleDisplayPrivate"});
    AddFeature("brailleDisplayPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("browser");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:browser"});
    AddFeature("browser", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("browserAction");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"manifest:browser_action"});
    AddFeature("browserAction", feature);
  }
  {
    std::vector<Feature*> features;
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("browserAction.openPopup");
      feature->set_channel(version_info::Channel::DEV);
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
      feature->set_dependencies({"manifest:browser_action"});
      features.push_back(feature);
    }
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("browserAction.openPopup");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
      feature->set_dependencies({"manifest:browser_action"});
      feature->set_allowlist({"63ED55E43214C211F82122ED56407FF1A807F2A3","A4577D8C2AF4CF26F40CBCA83FFA4251D6F6C8F8","A8208CCC87F8261AFAEB6B85D5E8D47372DDEA6B","EFCF5358672FEE04789FD2EC3638A67ADEDB6C8C"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("browserAction.openPopup");
    AddFeature("browserAction.openPopup", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("browsingData");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:browsingData"});
    AddFeature("browsingData", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("cast.channel");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:cast"});
    AddFeature("cast.channel", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("cast.streaming.receiverSession");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:cast.streaming"});
    AddFeature("cast.streaming.receiverSession", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("cast.streaming.rtpStream");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:cast.streaming"});
    AddFeature("cast.streaming.rtpStream", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("cast.streaming.session");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:cast.streaming"});
    AddFeature("cast.streaming.session", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("cast.streaming.udpTransport");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:cast.streaming"});
    AddFeature("cast.streaming.udpTransport", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("cecPrivate");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:cecPrivate"});
    AddFeature("cecPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("certificateProvider");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:certificateProvider"});
    AddFeature("certificateProvider", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("certificateProviderInternal");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:certificateProvider"});
    feature->set_internal(true);
    AddFeature("certificateProviderInternal", feature);
  }
  {
    std::vector<Feature*> features;
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("chromeWebViewInternal");
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
      feature->set_dependencies({"permission:webview"});
      feature->set_internal(true);
      features.push_back(feature);
    }
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("chromeWebViewInternal");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_contexts({Feature::WEBUI_CONTEXT});
      feature->set_internal(true);
      feature->set_matches({"chrome://chrome-signin/*","chrome://media-router/*","chrome://mobilesetup/*","chrome://oobe/*"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("chromeWebViewInternal");
    AddFeature("chromeWebViewInternal", feature);
  }
  {
    std::vector<Feature*> features;
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("chromeosInfoPrivate");
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
      feature->set_dependencies({"permission:chromeosInfoPrivate"});
      features.push_back(feature);
    }
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("chromeosInfoPrivate");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_contexts({Feature::WEBUI_CONTEXT});
      feature->set_matches({"chrome://version/*"});
      feature->set_platforms({Feature::CHROMEOS_PLATFORM});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("chromeosInfoPrivate");
    AddFeature("chromeosInfoPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("clipboard");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:clipboard"});
    AddFeature("clipboard", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("clipboard.onClipboardDataChanged");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:clipboardRead"});
    AddFeature("clipboard.onClipboardDataChanged", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("clipboard.setImageData");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:clipboardWrite"});
    AddFeature("clipboard.setImageData", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("cloudPrintPrivate");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:cloudPrintPrivate"});
    AddFeature("cloudPrintPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("commandLinePrivate");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:commandLinePrivate"});
    AddFeature("commandLinePrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("commands");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"manifest:commands"});
    AddFeature("commands", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("contentSettings");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:contentSettings"});
    AddFeature("contentSettings", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("contextMenus");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:contextMenus"});
    AddFeature("contextMenus", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("contextMenusInternal");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_internal(true);
    AddFeature("contextMenusInternal", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("cookies");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:cookies"});
    AddFeature("cookies", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("cryptotokenPrivate");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:cryptotokenPrivate"});
    AddFeature("cryptotokenPrivate", feature);
  }
  {
    std::vector<Feature*> features;
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("dashboardPrivate");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_contexts({Feature::BLESSED_WEB_PAGE_CONTEXT,Feature::WEB_PAGE_CONTEXT});
      feature->set_matches({"https://chrome.google.com/*"});
      features.push_back(feature);
    }
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("dashboardPrivate");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
      feature->set_allowlist({"B44D08FD98F1523ED5837D78D0A606EA9D6206E5"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("dashboardPrivate");
    AddFeature("dashboardPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("dataReductionProxy");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:dataReductionProxy"});
    AddFeature("dataReductionProxy", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("debugger");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:debugger"});
    AddFeature("debugger", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("declarativeContent");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:declarativeContent"});
    AddFeature("declarativeContent", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("declarativeNetRequest");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:declarativeNetRequest"});
    AddFeature("declarativeNetRequest", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("declarativeWebRequest");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:declarativeWebRequest"});
    AddFeature("declarativeWebRequest", feature);
  }
  {
    std::vector<Feature*> features;
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("desktopCapture");
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
      feature->set_dependencies({"permission:desktopCapture"});
      features.push_back(feature);
    }
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("desktopCapture");
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
      feature->set_dependencies({"permission:desktopCapturePrivate"});
      feature->set_allowlist({"63ED55E43214C211F82122ED56407FF1A807F2A3","226CF815E39A363090A1E547D53063472B8279FA"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("desktopCapture");
    AddFeature("desktopCapture", feature);
  }
  {
    std::vector<Feature*> features;
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("developerPrivate");
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
      feature->set_dependencies({"permission:developerPrivate","permission:management"});
      features.push_back(feature);
    }
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("developerPrivate");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_contexts({Feature::WEBUI_CONTEXT});
      feature->set_matches({"chrome://extensions/*","chrome://extensions-frame/*","chrome://chrome/extensions/*"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("developerPrivate");
    AddFeature("developerPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("diagnostics");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:diagnostics"});
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    AddFeature("diagnostics", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("displaySource");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:displaySource"});
    AddFeature("displaySource", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("dns");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:dns"});
    AddFeature("dns", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("documentScan");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:documentScan"});
    AddFeature("documentScan", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("downloads");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:downloads"});
    AddFeature("downloads", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("downloadsInternal");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_internal(true);
    AddFeature("downloadsInternal", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("easyUnlockPrivate");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:easyUnlockPrivate"});
    AddFeature("easyUnlockPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("echoPrivate");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:echoPrivate"});
    AddFeature("echoPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("enterprise.deviceAttributes");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:enterprise.deviceAttributes"});
    AddFeature("enterprise.deviceAttributes", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("enterprise.platformKeys");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:enterprise.platformKeys"});
    AddFeature("enterprise.platformKeys", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("enterprise.platformKeysInternal");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:enterprise.platformKeys"});
    feature->set_internal(true);
    AddFeature("enterprise.platformKeysInternal", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("enterprise.platformKeysPrivate");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:enterprise.platformKeysPrivate"});
    AddFeature("enterprise.platformKeysPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("enterprise.reportingPrivate");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:enterprise.reportingPrivate"});
    AddFeature("enterprise.reportingPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("events");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::SERVICE_WORKER_CONTEXT,Feature::CONTENT_SCRIPT_CONTEXT,Feature::UNBLESSED_EXTENSION_CONTEXT,Feature::WEBUI_CONTEXT,Feature::LOCK_SCREEN_EXTENSION_CONTEXT,Feature::WEB_PAGE_CONTEXT,Feature::BLESSED_EXTENSION_CONTEXT,Feature::BLESSED_WEB_PAGE_CONTEXT});
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP,Manifest::TYPE_EXTENSION});
    feature->set_internal(true);
    feature->set_matches({"<all_urls>"});
    AddFeature("events", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("extension");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    AddFeature("extension", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("extension.getURL");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT,Feature::UNBLESSED_EXTENSION_CONTEXT,Feature::CONTENT_SCRIPT_CONTEXT,Feature::SERVICE_WORKER_CONTEXT});
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    AddFeature("extension.getURL", feature);
  }
  {
    std::vector<Feature*> features;
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("extension.getViews");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
      feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
      features.push_back(feature);
    }
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("extension.getViews");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
      feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
      feature->set_allowlist({"A948368FC53BE437A55FEB414106E207925482F5"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("extension.getViews");
    AddFeature("extension.getViews", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("extension.inIncognitoContext");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT,Feature::UNBLESSED_EXTENSION_CONTEXT,Feature::CONTENT_SCRIPT_CONTEXT});
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    AddFeature("extension.inIncognitoContext", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("extension.lastError");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT,Feature::UNBLESSED_EXTENSION_CONTEXT,Feature::CONTENT_SCRIPT_CONTEXT});
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    AddFeature("extension.lastError", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("extension.onRequest");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT,Feature::UNBLESSED_EXTENSION_CONTEXT,Feature::CONTENT_SCRIPT_CONTEXT});
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    AddFeature("extension.onRequest", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("extension.sendRequest");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT,Feature::UNBLESSED_EXTENSION_CONTEXT,Feature::CONTENT_SCRIPT_CONTEXT});
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    AddFeature("extension.sendRequest", feature);
  }
  {
    std::vector<Feature*> features;
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("extensionOptionsInternal");
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
      feature->set_dependencies({"permission:embeddedExtensionOptions"});
      feature->set_internal(true);
      features.push_back(feature);
    }
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("extensionOptionsInternal");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_contexts({Feature::WEBUI_CONTEXT});
      feature->set_internal(true);
      feature->set_matches({"chrome://extensions-frame/*","chrome://extensions/*"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("extensionOptionsInternal");
    AddFeature("extensionOptionsInternal", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("extensionTypes");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    feature->set_internal(true);
    AddFeature("extensionTypes", feature);
  }
  {
    std::vector<Feature*> features;
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("extensionViewInternal");
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
      feature->set_dependencies({"permission:extensionview"});
      feature->set_internal(true);
      features.push_back(feature);
    }
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("extensionViewInternal");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_contexts({Feature::WEBUI_CONTEXT});
      feature->set_internal(true);
      feature->set_matches({"chrome://cast/*","chrome://media-router/*"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("extensionViewInternal");
    AddFeature("extensionViewInternal", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("extensionsManifestTypes");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_internal(true);
    AddFeature("extensionsManifestTypes", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("feedbackPrivate");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:feedbackPrivate"});
    AddFeature("feedbackPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("feedbackPrivate.readLogSource");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:feedbackPrivate"});
    feature->set_platforms({Feature::CHROMEOS_PLATFORM});
    feature->set_session_types({FeatureSessionType::KIOSK});
    AddFeature("feedbackPrivate.readLogSource", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("fileBrowserHandler");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:fileBrowserHandler"});
    AddFeature("fileBrowserHandler", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("fileBrowserHandlerInternal");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:fileBrowserHandler"});
    feature->set_internal(true);
    AddFeature("fileBrowserHandlerInternal", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("fileManagerPrivate");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:fileManagerPrivate"});
    AddFeature("fileManagerPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("fileManagerPrivateInternal");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:fileManagerPrivate"});
    feature->set_internal(true);
    AddFeature("fileManagerPrivateInternal", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("fileSystem");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:fileSystem"});
    AddFeature("fileSystem", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("fileSystemProvider");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:fileSystemProvider"});
    AddFeature("fileSystemProvider", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("fileSystemProviderInternal");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:fileSystemProvider"});
    feature->set_internal(true);
    AddFeature("fileSystemProviderInternal", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("firstRunPrivate");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:firstRunPrivate"});
    AddFeature("firstRunPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("fontSettings");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:fontSettings"});
    AddFeature("fontSettings", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("gcm");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:gcm"});
    AddFeature("gcm", feature);
  }
  {
    std::vector<Feature*> features;
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("guestViewInternal");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
      feature->set_internal(true);
      features.push_back(feature);
    }
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("guestViewInternal");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_contexts({Feature::WEBUI_CONTEXT});
      feature->set_internal(true);
      feature->set_matches({"chrome://cast/*","chrome://extensions-frame/*","chrome://extensions/*","chrome://home/*","chrome://chrome-signin/*","chrome://media-router/*","chrome://mobilesetup/*","chrome://oobe/*","chrome://assistant-optin/*"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("guestViewInternal");
    AddFeature("guestViewInternal", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("hid");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:hid"});
    AddFeature("hid", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("hid.getUserSelectedDevices");
    feature->set_channel(version_info::Channel::DEV);
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:hid"});
    AddFeature("hid.getUserSelectedDevices", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("history");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:history"});
    AddFeature("history", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("i18n");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT,Feature::UNBLESSED_EXTENSION_CONTEXT,Feature::CONTENT_SCRIPT_CONTEXT,Feature::LOCK_SCREEN_EXTENSION_CONTEXT});
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    AddFeature("i18n", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("identity");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:identity"});
    AddFeature("identity", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("identity.getAccounts");
    feature->set_channel(version_info::Channel::DEV);
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:identity"});
    AddFeature("identity.getAccounts", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("identityPrivate");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:identityPrivate"});
    AddFeature("identityPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("idle");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:idle"});
    AddFeature("idle", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("idltest");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:idltest"});
    AddFeature("idltest", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("imageWriterPrivate");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:imageWriterPrivate"});
    AddFeature("imageWriterPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("inlineInstallPrivate");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:inlineInstallPrivate"});
    AddFeature("inlineInstallPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("input.ime");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:input"});
    AddFeature("input.ime", feature);
  }
  {
    std::vector<Feature*> features;
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("inputMethodPrivate");
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
      feature->set_dependencies({"permission:inputMethodPrivate"});
      features.push_back(feature);
    }
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("inputMethodPrivate");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_contexts({Feature::WEBUI_CONTEXT});
      feature->set_matches({"chrome://settings/*"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("inputMethodPrivate");
    AddFeature("inputMethodPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("instanceID");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:gcm"});
    AddFeature("instanceID", feature);
  }
  {
    std::vector<Feature*> features;
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("languageSettingsPrivate");
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
      feature->set_dependencies({"permission:languageSettingsPrivate"});
      features.push_back(feature);
    }
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("languageSettingsPrivate");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_contexts({Feature::WEBUI_CONTEXT});
      feature->set_matches({"chrome://settings/*"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("languageSettingsPrivate");
    AddFeature("languageSettingsPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("launcherSearchProvider");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:launcherSearchProvider"});
    AddFeature("launcherSearchProvider", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("lockScreen.data");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT,Feature::LOCK_SCREEN_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:lockScreen"});
    AddFeature("lockScreen.data", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("lockScreen.data.create");
    feature->set_contexts({Feature::LOCK_SCREEN_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:lockScreen"});
    AddFeature("lockScreen.data.create", feature);
  }
  {
    std::vector<Feature*> features;
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("management");
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
      feature->set_dependencies({"permission:management"});
      features.push_back(feature);
    }
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("management");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_contexts({Feature::WEBUI_CONTEXT});
      feature->set_matches({"chrome://extensions/*","chrome://extensions-frame/*","chrome://chrome/extensions/*","chrome://settings/*"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("management");
    AddFeature("management", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("management.getPermissionWarningsByManifest");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    AddFeature("management.getPermissionWarningsByManifest", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("management.getSelf");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    AddFeature("management.getSelf", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("management.uninstallSelf");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    AddFeature("management.uninstallSelf", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("manifestTypes");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_internal(true);
    AddFeature("manifestTypes", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("mdns");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:mdns"});
    AddFeature("mdns", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("mediaGalleries");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:mediaGalleries"});
    AddFeature("mediaGalleries", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("mediaPerceptionPrivate");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:mediaPerceptionPrivate"});
    AddFeature("mediaPerceptionPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("mediaPlayerPrivate");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:mediaPlayerPrivate"});
    AddFeature("mediaPlayerPrivate", feature);
  }
  {
    std::vector<Feature*> features;
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("metricsPrivate");
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
      feature->set_dependencies({"permission:metricsPrivate"});
      features.push_back(feature);
    }
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("metricsPrivate");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_contexts({Feature::WEBUI_CONTEXT});
      feature->set_matches({"chrome://bookmarks/*","chrome://extensions/*","chrome://settings/*"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("metricsPrivate");
    AddFeature("metricsPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("metricsPrivate.getIsCrashReportingEnabled");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:metricsPrivate"});
    feature->set_allowlist({"2FC374607C2DF285634B67C64A2E356C607091C3","3727DD3E564B6055387425027AD74C58784ACC15","12E618C3C6E97495AAECF2AC12DEB082353241C6","3727DD3E564B6055387425027AD74C58784ACC15","C41AD9DCD670210295614257EF8C9945AD68D86E","D5736E4B5CF695CB93A2FB57E4FDC6E5AFAB6FE2","D57DE394F36DC1C3220E7604C575D29C51A6C495","3F65507A3B39259B38C8173C6FFA3D12DF64CCE9","D7986543275120831B39EF28D1327552FC343960","A291B26E088FA6BA53FFD72F0916F06EBA7C585A","07BD6A765FFC289FF755D7CAB2893A40EC337FEC","896B85CC7E913E11C34892C1425A093C0701D386","11A01C82EF355E674E4F9728A801F5C3CB40D83F","F410C88469990EE7947450311D24B8AF2ADB2595","63ED55E43214C211F82122ED56407FF1A807F2A3","226CF815E39A363090A1E547D53063472B8279FA","B620CF4203315F9F2E046EDED22C7571A935958D","B206D8716769728278D2D300349C6CB7D7DE2EF9","2B6C6A4A5940017146F3E58B7F90116206E84685","B6C2EFAB3EC3BF6EF03701408B6B09A67B2D0069","96FF2FFA5C9173C76D47184B3E86D267B37781DE","0136FCB13DB29FD5CD442F56E59E53B61F1DF96F"});
    AddFeature("metricsPrivate.getIsCrashReportingEnabled", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("mimeHandlerPrivate");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"manifest:mime_types_handler"});
    AddFeature("mimeHandlerPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("mimeHandlerViewGuestInternal");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::SERVICE_WORKER_CONTEXT,Feature::CONTENT_SCRIPT_CONTEXT,Feature::UNBLESSED_EXTENSION_CONTEXT,Feature::WEBUI_CONTEXT,Feature::LOCK_SCREEN_EXTENSION_CONTEXT,Feature::WEB_PAGE_CONTEXT,Feature::BLESSED_EXTENSION_CONTEXT,Feature::BLESSED_WEB_PAGE_CONTEXT});
    feature->set_internal(true);
    feature->set_matches({"<all_urls>"});
    AddFeature("mimeHandlerViewGuestInternal", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("mojoPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP,Manifest::TYPE_EXTENSION});
    feature->set_allowlist({"63ED55E43214C211F82122ED56407FF1A807F2A3","226CF815E39A363090A1E547D53063472B8279FA"});
    AddFeature("mojoPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("musicManagerPrivate");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:musicManagerPrivate"});
    AddFeature("musicManagerPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("networking.castPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:networking.castPrivate"});
    AddFeature("networking.castPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("networking.config");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:networking.config"});
    AddFeature("networking.config", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("networking.onc");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:networking.onc"});
    feature->set_source("networkingPrivate");
    AddFeature("networking.onc", feature);
  }
  {
    std::vector<Feature*> features;
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("networkingPrivate");
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
      feature->set_dependencies({"permission:networkingPrivate"});
      features.push_back(feature);
    }
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("networkingPrivate");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_contexts({Feature::WEBUI_CONTEXT});
      feature->set_matches({"chrome://network/*","chrome://oobe/*","chrome://internet-config-dialog/*","chrome://internet-detail-dialog/*","chrome://settings/*"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("networkingPrivate");
    feature->set_alias("networking.onc");
    AddFeature("networkingPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("notifications");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:notifications"});
    AddFeature("notifications", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("omnibox");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"manifest:omnibox"});
    AddFeature("omnibox", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("pageAction");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"manifest:page_action"});
    AddFeature("pageAction", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("pageCapture");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:pageCapture"});
    AddFeature("pageCapture", feature);
  }
  {
    std::vector<Feature*> features;
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("passwordsPrivate");
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
      feature->set_dependencies({"permission:passwordsPrivate"});
      features.push_back(feature);
    }
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("passwordsPrivate");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_contexts({Feature::WEBUI_CONTEXT});
      feature->set_matches({"chrome://settings/*"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("passwordsPrivate");
    AddFeature("passwordsPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("permissions");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    AddFeature("permissions", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("platformKeys");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:platformKeys"});
    AddFeature("platformKeys", feature);
  }
  {
    std::vector<Feature*> features;
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("platformKeysInternal");
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
      feature->set_dependencies({"permission:platformKeys"});
      feature->set_internal(true);
      features.push_back(feature);
    }
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("platformKeysInternal");
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
      feature->set_dependencies({"permission:enterprise.platformKeys"});
      feature->set_internal(true);
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("platformKeysInternal");
    AddFeature("platformKeysInternal", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("power");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:power"});
    AddFeature("power", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("preferencesPrivate");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:preferencesPrivate"});
    AddFeature("preferencesPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("printerProvider");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:printerProvider"});
    AddFeature("printerProvider", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("printerProviderInternal");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:printerProvider"});
    feature->set_internal(true);
    AddFeature("printerProviderInternal", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("privacy");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:privacy"});
    AddFeature("privacy", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("processes");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:processes"});
    AddFeature("processes", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("proxy");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:proxy"});
    AddFeature("proxy", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("quickUnlockPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::WEBUI_CONTEXT});
    feature->set_matches({"chrome://settings/*"});
    feature->set_platforms({Feature::CHROMEOS_PLATFORM});
    AddFeature("quickUnlockPrivate", feature);
  }
  {
    std::vector<Feature*> features;
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("resourcesPrivate");
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
      feature->set_dependencies({"permission:resourcesPrivate"});
      features.push_back(feature);
    }
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("resourcesPrivate");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_contexts({Feature::WEBUI_CONTEXT});
      feature->set_matches({"chrome://print/*"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("resourcesPrivate");
    AddFeature("resourcesPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("rtcPrivate");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:rtcPrivate"});
    AddFeature("rtcPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("runtime");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT,Feature::LOCK_SCREEN_EXTENSION_CONTEXT});
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    AddFeature("runtime", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("runtime.connect");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::BLESSED_WEB_PAGE_CONTEXT,Feature::CONTENT_SCRIPT_CONTEXT,Feature::BLESSED_EXTENSION_CONTEXT,Feature::LOCK_SCREEN_EXTENSION_CONTEXT,Feature::UNBLESSED_EXTENSION_CONTEXT,Feature::WEB_PAGE_CONTEXT});
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    feature->set_matches({"<all_urls>"});
    AddFeature("runtime.connect", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("runtime.connectNative");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:nativeMessaging"});
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    AddFeature("runtime.connectNative", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("runtime.getManifest");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT,Feature::LOCK_SCREEN_EXTENSION_CONTEXT,Feature::UNBLESSED_EXTENSION_CONTEXT,Feature::CONTENT_SCRIPT_CONTEXT});
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    AddFeature("runtime.getManifest", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("runtime.getURL");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT,Feature::LOCK_SCREEN_EXTENSION_CONTEXT,Feature::UNBLESSED_EXTENSION_CONTEXT,Feature::CONTENT_SCRIPT_CONTEXT});
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    AddFeature("runtime.getURL", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("runtime.id");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT,Feature::LOCK_SCREEN_EXTENSION_CONTEXT,Feature::UNBLESSED_EXTENSION_CONTEXT,Feature::CONTENT_SCRIPT_CONTEXT});
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    AddFeature("runtime.id", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("runtime.lastError");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::SERVICE_WORKER_CONTEXT,Feature::CONTENT_SCRIPT_CONTEXT,Feature::UNBLESSED_EXTENSION_CONTEXT,Feature::WEBUI_CONTEXT,Feature::LOCK_SCREEN_EXTENSION_CONTEXT,Feature::WEB_PAGE_CONTEXT,Feature::BLESSED_EXTENSION_CONTEXT,Feature::BLESSED_WEB_PAGE_CONTEXT});
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_HOSTED_APP,Manifest::TYPE_PLATFORM_APP,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_THEME,Manifest::TYPE_SHARED_MODULE});
    feature->set_matches({"<all_urls>"});
    AddFeature("runtime.lastError", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("runtime.onConnect");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT,Feature::LOCK_SCREEN_EXTENSION_CONTEXT,Feature::UNBLESSED_EXTENSION_CONTEXT,Feature::CONTENT_SCRIPT_CONTEXT});
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    AddFeature("runtime.onConnect", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("runtime.onMessage");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT,Feature::LOCK_SCREEN_EXTENSION_CONTEXT,Feature::UNBLESSED_EXTENSION_CONTEXT,Feature::CONTENT_SCRIPT_CONTEXT});
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    AddFeature("runtime.onMessage", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("runtime.sendMessage");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::BLESSED_WEB_PAGE_CONTEXT,Feature::CONTENT_SCRIPT_CONTEXT,Feature::BLESSED_EXTENSION_CONTEXT,Feature::LOCK_SCREEN_EXTENSION_CONTEXT,Feature::UNBLESSED_EXTENSION_CONTEXT,Feature::WEB_PAGE_CONTEXT});
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    feature->set_matches({"<all_urls>"});
    AddFeature("runtime.sendMessage", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("runtime.sendNativeMessage");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:nativeMessaging"});
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    AddFeature("runtime.sendNativeMessage", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("safeBrowsingPrivate");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:safeBrowsingPrivate"});
    AddFeature("safeBrowsingPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("screenlockPrivate");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:screenlockPrivate"});
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    AddFeature("screenlockPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("serial");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:serial"});
    AddFeature("serial", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("sessions");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:sessions"});
    AddFeature("sessions", feature);
  }
  {
    std::vector<Feature*> features;
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("settingsPrivate");
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
      feature->set_dependencies({"permission:settingsPrivate"});
      features.push_back(feature);
    }
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("settingsPrivate");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_contexts({Feature::WEBUI_CONTEXT});
      feature->set_matches({"chrome://settings/*"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("settingsPrivate");
    AddFeature("settingsPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("signedInDevices");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:signedInDevices"});
    AddFeature("signedInDevices", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("socket");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:socket"});
    AddFeature("socket", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("sockets.tcp");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"manifest:sockets"});
    AddFeature("sockets.tcp", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("sockets.tcpServer");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"manifest:sockets"});
    AddFeature("sockets.tcpServer", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("sockets.udp");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"manifest:sockets"});
    AddFeature("sockets.udp", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("storage");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT,Feature::UNBLESSED_EXTENSION_CONTEXT,Feature::CONTENT_SCRIPT_CONTEXT});
    feature->set_dependencies({"permission:storage"});
    AddFeature("storage", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("streamsPrivate");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:streamsPrivate"});
    AddFeature("streamsPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("syncFileSystem");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:syncFileSystem"});
    AddFeature("syncFileSystem", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("system.cpu");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:system.cpu"});
    AddFeature("system.cpu", feature);
  }
  {
    std::vector<Feature*> features;
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("system.display");
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
      feature->set_dependencies({"permission:system.display"});
      features.push_back(feature);
    }
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("system.display");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_contexts({Feature::WEBUI_CONTEXT});
      feature->set_matches({"chrome://settings/*"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("system.display");
    AddFeature("system.display", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("system.memory");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:system.memory"});
    AddFeature("system.memory", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("system.network");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:system.network"});
    AddFeature("system.network", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("system.storage");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:system.storage"});
    AddFeature("system.storage", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("system.storage.getAvailableCapacity");
    feature->set_channel(version_info::Channel::DEV);
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:system.storage"});
    AddFeature("system.storage.getAvailableCapacity", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("systemIndicator");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"manifest:system_indicator"});
    AddFeature("systemIndicator", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("systemPrivate");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:systemPrivate"});
    AddFeature("systemPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("tabCapture");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:tabCapture"});
    AddFeature("tabCapture", feature);
  }
  {
    std::vector<Feature*> features;
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("tabs");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT,Feature::SERVICE_WORKER_CONTEXT});
      feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
      features.push_back(feature);
    }
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("tabs");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_contexts({Feature::WEBUI_CONTEXT});
      feature->set_matches({"chrome://bookmarks/*"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("tabs");
    AddFeature("tabs", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("terminalPrivate");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:terminalPrivate"});
    AddFeature("terminalPrivate", feature);
  }
  {
    std::vector<Feature*> features;
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("test");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT,Feature::BLESSED_WEB_PAGE_CONTEXT,Feature::CONTENT_SCRIPT_CONTEXT,Feature::SERVICE_WORKER_CONTEXT,Feature::LOCK_SCREEN_EXTENSION_CONTEXT,Feature::UNBLESSED_EXTENSION_CONTEXT});
      feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_HOSTED_APP,Manifest::TYPE_PLATFORM_APP,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_THEME,Manifest::TYPE_SHARED_MODULE});
      features.push_back(feature);
    }
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("test");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_contexts({Feature::WEBUI_CONTEXT});
      feature->set_matches({"chrome://extensions/*","chrome://extensions-frame/*","chrome://chrome/extensions/*"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("test");
    AddFeature("test", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("topSites");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:topSites"});
    AddFeature("topSites", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("tts");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:tts"});
    AddFeature("tts", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("ttsEngine");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:ttsEngine"});
    AddFeature("ttsEngine", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("types");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    feature->set_internal(true);
    AddFeature("types", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("types.private");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:preferencesPrivate"});
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    feature->set_internal(true);
    AddFeature("types.private", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("usb");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:usb"});
    AddFeature("usb", feature);
  }
  {
    std::vector<Feature*> features;
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("usersPrivate");
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
      feature->set_dependencies({"permission:usersPrivate"});
      features.push_back(feature);
    }
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("usersPrivate");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_contexts({Feature::WEBUI_CONTEXT});
      feature->set_matches({"chrome://settings/*"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("usersPrivate");
    AddFeature("usersPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("virtualKeyboard");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:virtualKeyboard"});
    AddFeature("virtualKeyboard", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("virtualKeyboardPrivate");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:virtualKeyboardPrivate"});
    AddFeature("virtualKeyboardPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("vpnProvider");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:vpnProvider"});
    AddFeature("vpnProvider", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("wallpaper");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:wallpaper"});
    AddFeature("wallpaper", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("wallpaperPrivate");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:wallpaperPrivate"});
    AddFeature("wallpaperPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("webNavigation");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT,Feature::SERVICE_WORKER_CONTEXT});
    feature->set_dependencies({"permission:webNavigation"});
    AddFeature("webNavigation", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("webRequest");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:webRequest"});
    AddFeature("webRequest", feature);
  }
  {
    std::vector<Feature*> features;
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("webRequestInternal");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
      feature->set_internal(true);
      features.push_back(feature);
    }
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("webRequestInternal");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_contexts({Feature::WEBUI_CONTEXT});
      feature->set_internal(true);
      feature->set_matches({"chrome://chrome-signin/*","chrome://home/*","chrome://media-router/*","chrome://mobilesetup/*","chrome://oobe/*","chrome://assistant-optin/*"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("webRequestInternal");
    AddFeature("webRequestInternal", feature);
  }
  {
    std::vector<Feature*> features;
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("webViewInternal");
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
      feature->set_dependencies({"permission:webview"});
      feature->set_internal(true);
      features.push_back(feature);
    }
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("webViewInternal");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_contexts({Feature::WEBUI_CONTEXT});
      feature->set_internal(true);
      feature->set_matches({"chrome://chrome-signin/*","chrome://home/*","chrome://media-router/*","chrome://mobilesetup/*","chrome://oobe/*","chrome://assistant-optin/*"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("webViewInternal");
    AddFeature("webViewInternal", feature);
  }
  {
    std::vector<Feature*> features;
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("webViewRequest");
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
      feature->set_dependencies({"permission:webview"});
      features.push_back(feature);
    }
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("webViewRequest");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_contexts({Feature::WEBUI_CONTEXT});
      feature->set_matches({"chrome://chrome-signin/*","chrome://home/*","chrome://media-router/*","chrome://mobilesetup/*","chrome://oobe/*","chrome://assistant-optin/*"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("webViewRequest");
    AddFeature("webViewRequest", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("webcamPrivate");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:webcamPrivate"});
    AddFeature("webcamPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("webrtcAudioPrivate");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:webrtcAudioPrivate"});
    AddFeature("webrtcAudioPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("webrtcDesktopCapturePrivate");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:webrtcDesktopCapturePrivate"});
    AddFeature("webrtcDesktopCapturePrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("webrtcLoggingPrivate");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:webrtcLoggingPrivate"});
    AddFeature("webrtcLoggingPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("webrtcLoggingPrivate.getLogsDirectory");
    feature->set_component_extensions_auto_granted(false);
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:webrtcLoggingPrivate"});
    feature->set_allowlist({"ADFA45434ABA2F1A4647E673F53FF37F8F6047A3","4F25792AF1AA7483936DE29C07806F203C7170A0","BD8781D757D830FC2E85470A1B6E8A718B7EE0D9","4AC2B6C63C6480D150DFDA13E4A5956EB1D0DDBB","81986D4F846CEDDDB962643FA501D1780DD441BB"});
    AddFeature("webrtcLoggingPrivate.getLogsDirectory", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("webstore");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::BLESSED_WEB_PAGE_CONTEXT,Feature::WEB_PAGE_CONTEXT});
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_HOSTED_APP,Manifest::TYPE_PLATFORM_APP,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_THEME,Manifest::TYPE_SHARED_MODULE});
    feature->set_matches({"<all_urls>"});
    AddFeature("webstore", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("webstorePrivate");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:webstorePrivate"});
    AddFeature("webstorePrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("webstoreWidgetPrivate");
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:webstoreWidgetPrivate"});
    AddFeature("webstoreWidgetPrivate", feature);
  }
  {
    SimpleFeature* feature = new SimpleFeature();
    feature->set_name("webviewTag");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
    feature->set_dependencies({"permission:webview"});
    feature->set_internal(true);
    AddFeature("webviewTag", feature);
  }
  {
    std::vector<Feature*> features;
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("windows");
      feature->set_contexts({Feature::BLESSED_EXTENSION_CONTEXT});
      feature->set_dependencies({"api:tabs"});
      features.push_back(feature);
    }
    {
      SimpleFeature* feature = new SimpleFeature();
      feature->set_name("windows");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_contexts({Feature::WEBUI_CONTEXT});
      feature->set_matches({"chrome://bookmarks/*"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("windows");
    AddFeature("windows", feature);
  }
}

APIFeatureProvider::~APIFeatureProvider() {}

}  // namespace extensions