// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE FEATURES FILE:
//   ['../../extensions/common/api/_permission_features.json', '../../chrome/common/extensions/api/_permission_features.json']
// DO NOT EDIT.

#include "permission_features.h"

#include "extensions/common/features/complex_feature.h"
#include "extensions/common/features/manifest_feature.h"
#include "extensions/common/features/permission_feature.h"

namespace extensions {
PermissionFeatureProvider::PermissionFeatureProvider() {
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("accessibilityFeatures.modify");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_PLATFORM_APP});
    AddFeature("accessibilityFeatures.modify", feature);
  }
  {
    std::vector<Feature*> features;
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("accessibilityFeatures.read");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_PLATFORM_APP});
      features.push_back(feature);
    }
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("accessibilityFeatures.read");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_LEGACY_PACKAGED_APP});
      feature->set_platforms({Feature::CHROMEOS_PLATFORM});
      feature->set_allowlist({"0EA6B717932AD64C469C1CCB6911457733295907","58B0C2968C335964D5433E89CA4D86628A0E3D4B"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("accessibilityFeatures.read");
    AddFeature("accessibilityFeatures.read", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("accessibilityPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    feature->set_allowlist({"2FCBCE08B34CCA1728A85F1EFBD9A34DD2558B2E"});
    AddFeature("accessibilityPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("activeTab");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    feature->set_min_manifest_version(2);
    AddFeature("activeTab", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("activityLogPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_PLATFORM_APP});
    feature->set_allowlist({"EE17C698905F7F2E6DDC87C9C30F11E164C829F4","C50DC2AC31D826BC977032AF12DE4694CC8467DC","AE27D69DBE571F4B1694F05C89B710C646792231","5107DE9024C329EEA9C9A72D94C16723790C6422"});
    AddFeature("activityLogPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("alarms");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    feature->set_min_manifest_version(2);
    AddFeature("alarms", feature);
  }
  {
    std::vector<Feature*> features;
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("app.window.alpha");
      feature->set_channel(version_info::Channel::DEV);
      feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
      features.push_back(feature);
    }
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("app.window.alpha");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
      feature->set_allowlist({"0F42756099D914A026DADFA182871C015735DD95","2D22CDB6583FD0A13758AEBE8B15E45208B4E9A7","E7E2461CE072DF036CF9592740196159E2D7C089","A74A4D44C7CFCD8844830E6140C8D763E12DD8F3","312745D9BF916161191143F6490085EEA0434997","53041A2FA309EECED01FFC751E7399186E860B2C","A07A5B743CD82A1C2579DB77D353C98A23201EEF","F16F23C83C5F6DAD9B65A120448B34056DD80691","0F585FB1D0FDFBEBCE1FEB5E9DFFB6DA476B8C9B"});
      features.push_back(feature);
    }
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("app.window.alpha");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_EXTENSION});
      feature->set_allowlist({"06BE211D5F014BAB34BC22D9DDA09C63A81D828E","F94EE6AB36D6C6588670B2B01EB65212D9C64E33","B9EF10DDFEA11EF77873CC5009809E5037FC4C7A"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("app.window.alpha");
    AddFeature("app.window.alpha", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("app.window.alwaysOnTop");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    AddFeature("app.window.alwaysOnTop", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("app.window.fullscreen");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    AddFeature("app.window.fullscreen", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("app.window.fullscreen.overrideEsc");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    AddFeature("app.window.fullscreen.overrideEsc", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("app.window.ime");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION});
    feature->set_platforms({Feature::CHROMEOS_PLATFORM});
    feature->set_allowlist({"06BE211D5F014BAB34BC22D9DDA09C63A81D828E","F94EE6AB36D6C6588670B2B01EB65212D9C64E33","B9EF10DDFEA11EF77873CC5009809E5037FC4C7A"});
    AddFeature("app.window.ime", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("app.window.shape");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    AddFeature("app.window.shape", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("appview");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    AddFeature("appview", feature);
  }
  {
    std::vector<Feature*> features;
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("audio");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
      feature->set_platforms({Feature::CHROMEOS_PLATFORM});
      feature->set_session_types({FeatureSessionType::KIOSK});
      features.push_back(feature);
    }
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("audio");
      feature->set_channel(version_info::Channel::DEV);
      feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
      features.push_back(feature);
    }
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("audio");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
      feature->set_allowlist({"8C3741E3AF0B93B6E8E0DDD499BB0B74839EA578","E703483CEF33DEC18B4B6DD84B5C776FB9182BDB","A3BC37E2148AC4E99BE4B16AF9D42DD1E592BBBE","1C93BD3CF875F4A73C0B2A163BB8FBDA8B8B3D80","307E96539209F95A1A8740C713E6998A73657D96","4F25792AF1AA7483936DE29C07806F203C7170A0","BD8781D757D830FC2E85470A1B6E8A718B7EE0D9","4AC2B6C63C6480D150DFDA13E4A5956EB1D0DDBB","81986D4F846CEDDDB962643FA501D1780DD441BB"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("audio");
    AddFeature("audio", feature);
  }
  {
    std::vector<Feature*> features;
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("audioCapture");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
      features.push_back(feature);
    }
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("audioCapture");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_EXTENSION});
      feature->set_allowlist({"3F50C3A83839D9C76334BCE81CDEC06174F266AF","39BE69F11F68E4EED080DA3DC2394F7885B7AFF9","FF78670081967CE21DB86A04AD94A0498F01E20A","0C0426C12F94156F330FFAF346A976BA8878DE78","AC4538682FCECD28587C7A0F80849F78F4872BC2","CCA4D85A67ADD65DA6C02E49EE3C080C54A8211C","05EBA3051DFCA6AF17070AEE5FE8C66322FF4738"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("audioCapture");
    AddFeature("audioCapture", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("autofillPrivate");
    feature->set_channel(version_info::Channel::UNKNOWN);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_PLATFORM_APP});
    feature->set_location(SimpleFeature::COMPONENT_LOCATION);
    AddFeature("autofillPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("autotestPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION});
    feature->set_allowlist({"0D209B5E4401BB8E7873B5AB5B1346A1CB067015","93CFDA3681E923AD7AB291CEDD98248396B5496C"});
    AddFeature("autotestPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("background");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP,Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_HOSTED_APP});
    AddFeature("background", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("bluetoothPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    feature->set_platforms({Feature::CHROMEOS_PLATFORM,Feature::WIN_PLATFORM,Feature::MACOSX_PLATFORM,Feature::LINUX_PLATFORM});
    feature->set_allowlist({"1C93BD3CF875F4A73C0B2A163BB8FBDA8B8B3D80","A3BC37E2148AC4E99BE4B16AF9D42DD1E592BBBE","E703483CEF33DEC18B4B6DD84B5C776FB9182BDB","307E96539209F95A1A8740C713E6998A73657D96","4F25792AF1AA7483936DE29C07806F203C7170A0","BD8781D757D830FC2E85470A1B6E8A718B7EE0D9","4AC2B6C63C6480D150DFDA13E4A5956EB1D0DDBB","81986D4F846CEDDDB962643FA501D1780DD441BB","89715614FAA2B4C2853802D70261D2A9D0756FC8","61FF4757F9420B62B19BA5C96084649339DB31F5","F3013F58BED982D1BC75943792FF877E5D458672","1B7734733E207CCE5C33BFAA544CA89634BF881F","23EEC2E3B4F6A62F5E6C8556364F7B749F9A809C","D238B3D5DB5836AEC1733DA4237CF93B7F96F495","B2FEB5422C0F105AED7027E363886F1FE29F13F6","2F6F6FDB84E0290ABAB7A9D7571EB344821E5F12","5B9E39EA374B136CBE7AED2D872003107642EAD5","E0E94FB0C01FFB9CDC7A5F098C99B5A8D2F95902","52E0557059A7A28F74ED1D92DDD997E0CCD37806","A9A9FC0228ADF541F0334F22BEFB8F9C245B21D7"});
    AddFeature("bluetoothPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("bookmarkManagerPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    feature->set_allowlist({"D5736E4B5CF695CB93A2FB57E4FDC6E5AFAB6FE2","D57DE394F36DC1C3220E7604C575D29C51A6C495","3F65507A3B39259B38C8173C6FFA3D12DF64CCE9"});
    AddFeature("bookmarkManagerPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("bookmarks");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    AddFeature("bookmarks", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("brailleDisplayPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    feature->set_location(SimpleFeature::COMPONENT_LOCATION);
    AddFeature("brailleDisplayPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("browser");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    AddFeature("browser", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("browsingData");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    AddFeature("browsingData", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("cast");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    feature->set_allowlist({"9448CAB302F268FB4917D06F70703893DCDA26C4","63ED55E43214C211F82122ED56407FF1A807F2A3","226CF815E39A363090A1E547D53063472B8279FA"});
    AddFeature("cast", feature);
  }
  {
    std::vector<Feature*> features;
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("cast.streaming");
      feature->set_channel(version_info::Channel::DEV);
      feature->set_extension_types({Manifest::TYPE_EXTENSION});
      feature->set_allowlist({"9448CAB302F268FB4917D06F70703893DCDA26C4","63ED55E43214C211F82122ED56407FF1A807F2A3","226CF815E39A363090A1E547D53063472B8279FA"});
      features.push_back(feature);
    }
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("cast.streaming");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_EXTENSION});
      feature->set_allowlist({"63ED55E43214C211F82122ED56407FF1A807F2A3","226CF815E39A363090A1E547D53063472B8279FA"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("cast.streaming");
    AddFeature("cast.streaming", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("cecPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    feature->set_platforms({Feature::CHROMEOS_PLATFORM});
    feature->set_session_types({FeatureSessionType::KIOSK});
    feature->set_allowlist({"1C93BD3CF875F4A73C0B2A163BB8FBDA8B8B3D80","A3BC37E2148AC4E99BE4B16AF9D42DD1E592BBBE","307E96539209F95A1A8740C713E6998A73657D96","E703483CEF33DEC18B4B6DD84B5C776FB9182BDB","4F25792AF1AA7483936DE29C07806F203C7170A0","BD8781D757D830FC2E85470A1B6E8A718B7EE0D9","4AC2B6C63C6480D150DFDA13E4A5956EB1D0DDBB","81986D4F846CEDDDB962643FA501D1780DD441BB","A9A9FC0228ADF541F0334F22BEFB8F9C245B21D7"});
    AddFeature("cecPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("certificateProvider");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_PLATFORM_APP});
    feature->set_platforms({Feature::CHROMEOS_PLATFORM});
    AddFeature("certificateProvider", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("chromePrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    feature->set_allowlist({"2462D64ACB971A7E708757159C2B17761D4FF54A","3010EF507AFEF487EEA9CDE2930EC94867C60936","ABAABC5F49E022A76CBB12972A53B58354C04AC6"});
    AddFeature("chromePrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("chromeosInfoPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    feature->set_platforms({Feature::CHROMEOS_PLATFORM});
    feature->set_allowlist({"1C93BD3CF875F4A73C0B2A163BB8FBDA8B8B3D80","A3BC37E2148AC4E99BE4B16AF9D42DD1E592BBBE","8C3741E3AF0B93B6E8E0DDD499BB0B74839EA578","E703483CEF33DEC18B4B6DD84B5C776FB9182BDB","307E96539209F95A1A8740C713E6998A73657D96","A291B26E088FA6BA53FFD72F0916F06EBA7C585A","D7986543275120831B39EF28D1327552FC343960","4F25792AF1AA7483936DE29C07806F203C7170A0","BD8781D757D830FC2E85470A1B6E8A718B7EE0D9","4AC2B6C63C6480D150DFDA13E4A5956EB1D0DDBB","81986D4F846CEDDDB962643FA501D1780DD441BB","B620CF4203315F9F2E046EDED22C7571A935958D","B206D8716769728278D2D300349C6CB7D7DE2EF9","A3E3DE9E9F16B41D4A2FAD106BD6CA76B94A0C94","C2ABD68C33A5B485971C9638B80D6A2E9CBA78C4","8EBDF73405D0B84CEABB8C7513C9B9FA9F1DC2CE","72445193EB86716465275D4E2E84DACF47558FCF","51E46A03961884A4BA74CE7CA30A75CC6F360D74","6844C0E4DF3034BD3ED04E7BD957C7DE0EA83443","2B6C6A4A5940017146F3E58B7F90116206E84685","B6C2EFAB3EC3BF6EF03701408B6B09A67B2D0069","96FF2FFA5C9173C76D47184B3E86D267B37781DE","0136FCB13DB29FD5CD442F56E59E53B61F1DF96F","9834387FDA1F66A1B5CA06CB442137B556F12F2A","930F7D9989A5FBCDCCD7D85BB5C3B7006C24D91D","A9A9FC0228ADF541F0334F22BEFB8F9C245B21D7"});
    AddFeature("chromeosInfoPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("clipboard");
    feature->set_channel(version_info::Channel::DEV);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    feature->set_platforms({Feature::CHROMEOS_PLATFORM});
    AddFeature("clipboard", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("clipboardRead");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_HOSTED_APP,Manifest::TYPE_PLATFORM_APP});
    AddFeature("clipboardRead", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("clipboardWrite");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_HOSTED_APP,Manifest::TYPE_PLATFORM_APP});
    AddFeature("clipboardWrite", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("cloudPrintPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_HOSTED_APP});
    feature->set_allowlist({"99060B01DE911EB85FD630C8BA6320C9186CA3AB"});
    AddFeature("cloudPrintPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("commandLinePrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    feature->set_location(SimpleFeature::COMPONENT_LOCATION);
    AddFeature("commandLinePrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("commands.accessibility");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    feature->set_allowlist({"2FCBCE08B34CCA1728A85F1EFBD9A34DD2558B2E","75C7F4B720314B6CB1B5817CD86089DB95CD2461"});
    AddFeature("commands.accessibility", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("contentSettings");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    AddFeature("contentSettings", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("contextMenus");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    AddFeature("contextMenus", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("cookies");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    AddFeature("cookies", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("cryptotokenPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION});
    feature->set_location(SimpleFeature::COMPONENT_LOCATION);
    feature->set_allowlist({"E24F1786D842E91E74C27929B0B3715A4689A473"});
    AddFeature("cryptotokenPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("dataReductionProxy");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION});
    feature->set_allowlist({"852290F2442EEE45EF673B8DA6090112079012A2"});
    AddFeature("dataReductionProxy", feature);
  }
  {
    std::vector<Feature*> features;
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("debugger");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
      features.push_back(feature);
    }
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("debugger");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
      feature->set_allowlist({"AE27D69DBE571F4B1694F05C89B710C646792231"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("debugger");
    AddFeature("debugger", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("declarativeContent");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION});
    AddFeature("declarativeContent", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("declarativeNetRequest");
    feature->set_channel(version_info::Channel::UNKNOWN);
    feature->set_extension_types({Manifest::TYPE_EXTENSION});
    feature->set_min_manifest_version(2);
    AddFeature("declarativeNetRequest", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("declarativeWebRequest");
    feature->set_channel(version_info::Channel::BETA);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    AddFeature("declarativeWebRequest", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("desktopCapture");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_PLATFORM_APP});
    AddFeature("desktopCapture", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("desktopCapturePrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_PLATFORM_APP});
    AddFeature("desktopCapturePrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("developerPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    feature->set_allowlist({"AE27D69DBE571F4B1694F05C89B710C646792231","FA0501B579070BB9CBD4FCAEC8CB0EDF22BA2F04","4A4EA121622FCA3D78ED2AB534197F43D7189EE0","9FDE6E7F06FCFA11D9A05041C7FF6D8AE662F5D1","50B4A905D522C06E27CA6D099E3E54BDA1F152C5","BA0C8BB92084C9741312D90D3EA882526853455F","5F57A9AE8DFF5D6BB09DF8606270402612E871E5"});
    AddFeature("developerPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("devtools");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    AddFeature("devtools", feature);
  }
  {
    std::vector<Feature*> features;
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("diagnostics");
      feature->set_channel(version_info::Channel::DEV);
      feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
      features.push_back(feature);
    }
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("diagnostics");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
      feature->set_allowlist({"7AE714FFD394E073F0294CFA134C9F91DB5FBAA4","C7DA3A55C2355F994D3FDDAD120B426A0DF63843","75E3CFFFC530582C583E4690EF97C70B9C8423B7"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("diagnostics");
    AddFeature("diagnostics", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("displaySource");
    feature->set_channel(version_info::Channel::DEV);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_PLATFORM_APP});
    AddFeature("displaySource", feature);
  }
  {
    std::vector<Feature*> features;
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("dns");
      feature->set_channel(version_info::Channel::DEV);
      feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_PLATFORM_APP});
      features.push_back(feature);
    }
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("dns");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_PLATFORM_APP});
      feature->set_allowlist({"7AE714FFD394E073F0294CFA134C9F91DB5FBAA4","C7DA3A55C2355F994D3FDDAD120B426A0DF63843","75E3CFFFC530582C583E4690EF97C70B9C8423B7"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("dns");
    AddFeature("dns", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("documentScan");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_PLATFORM_APP});
    feature->set_platforms({Feature::CHROMEOS_PLATFORM});
    AddFeature("documentScan", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("downloads");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION});
    AddFeature("downloads", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("downloads.open");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION});
    AddFeature("downloads.open", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("downloads.shelf");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION});
    AddFeature("downloads.shelf", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("easyUnlockPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    feature->set_location(SimpleFeature::COMPONENT_LOCATION);
    feature->set_platforms({Feature::CHROMEOS_PLATFORM});
    AddFeature("easyUnlockPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("echoPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    feature->set_location(SimpleFeature::COMPONENT_LOCATION);
    feature->set_platforms({Feature::CHROMEOS_PLATFORM});
    AddFeature("echoPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("embeddedExtensionOptions");
    feature->set_channel(version_info::Channel::UNKNOWN);
    feature->set_extension_types({Manifest::TYPE_EXTENSION});
    AddFeature("embeddedExtensionOptions", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("enterprise.deviceAttributes");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_PLATFORM_APP});
    feature->set_location(SimpleFeature::POLICY_LOCATION);
    feature->set_platforms({Feature::CHROMEOS_PLATFORM});
    AddFeature("enterprise.deviceAttributes", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("enterprise.platformKeys");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_PLATFORM_APP,Manifest::TYPE_LEGACY_PACKAGED_APP});
    feature->set_location(SimpleFeature::POLICY_LOCATION);
    feature->set_platforms({Feature::CHROMEOS_PLATFORM});
    AddFeature("enterprise.platformKeys", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("enterprise.platformKeysPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    feature->set_platforms({Feature::CHROMEOS_PLATFORM});
    feature->set_allowlist({"657FEC7E77355CA205B0E226586621F86B33F611","5894126C625EF31852F215ED301A5FF1F9B7D026","8DAE23A10703C926B21862B2F318FB4E110B17BD","34412790FC81BC9B563CBE599ED10ABF26B209F7","7F782E724FF51789B54DA82C7363DAB5043C1677","2C18988BCDC297196D5D6893005175DA1BC1E893"});
    AddFeature("enterprise.platformKeysPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("enterprise.reportingPrivate");
    feature->set_channel(version_info::Channel::BETA);
    feature->set_extension_types({Manifest::TYPE_EXTENSION});
    feature->set_platforms({Feature::WIN_PLATFORM,Feature::MACOSX_PLATFORM,Feature::LINUX_PLATFORM});
    feature->set_allowlist({"FD15C63ABA854733FDCBC1D4D34A71E963A12ABD","08455FA7CB8734168378F731B00B354CEEE0088F"});
    AddFeature("enterprise.reportingPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("experimental");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_command_line_switch("experimental-extension-apis");
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_HOSTED_APP,Manifest::TYPE_PLATFORM_APP});
    AddFeature("experimental", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("extensionview");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    feature->set_allowlist({"BD2EB5085B5324203BCCC3DF3CF102B8AB850402"});
    AddFeature("extensionview", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("externally_connectable.all_urls");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_HOSTED_APP,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    feature->set_allowlist({"54ECAB4579BDE8FDAF9B29ED335F9946EE504A52","E24F1786D842E91E74C27929B0B3715A4689A473","A28C9619C4C41306FA5236FB4D94DA812F504DE8"});
    AddFeature("externally_connectable.all_urls", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("feedbackPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_PLATFORM_APP});
    feature->set_allowlist({"7910EAFDAF64B947E1CB31B333A9BD14CA556B6C","1C93BD3CF875F4A73C0B2A163BB8FBDA8B8B3D80","A3BC37E2148AC4E99BE4B16AF9D42DD1E592BBBE","8C3741E3AF0B93B6E8E0DDD499BB0B74839EA578","E703483CEF33DEC18B4B6DD84B5C776FB9182BDB","307E96539209F95A1A8740C713E6998A73657D96","4F25792AF1AA7483936DE29C07806F203C7170A0","BD8781D757D830FC2E85470A1B6E8A718B7EE0D9","4AC2B6C63C6480D150DFDA13E4A5956EB1D0DDBB","81986D4F846CEDDDB962643FA501D1780DD441BB","A9A9FC0228ADF541F0334F22BEFB8F9C245B21D7"});
    AddFeature("feedbackPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("fileBrowserHandler");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    feature->set_platforms({Feature::CHROMEOS_PLATFORM});
    AddFeature("fileBrowserHandler", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("fileManagerPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    feature->set_platforms({Feature::CHROMEOS_PLATFORM});
    feature->set_allowlist({"74E2D32A61B08D29521A8C4E360F581DE78F5CA5","A948368FC53BE437A55FEB414106E207925482F5","A13373C881097323F4DEF392474BE2E28DA6D4ED","8C726564C6DBE7380BAB388DE6CC7EC93EB44B06","5065C83E84321221675D20FBE4DC43C655CC8C6F","397F221E63F86BE34C30165613E95B6CC8D22A52"});
    AddFeature("fileManagerPrivate", feature);
  }
  {
    std::vector<Feature*> features;
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("fileSystem");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
      features.push_back(feature);
    }
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("fileSystem");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_EXTENSION});
      feature->set_allowlist({"2FC374607C2DF285634B67C64A2E356C607091C3","3727DD3E564B6055387425027AD74C58784ACC15","12E618C3C6E97495AAECF2AC12DEB082353241C6","D5736E4B5CF695CB93A2FB57E4FDC6E5AFAB6FE2","D57DE394F36DC1C3220E7604C575D29C51A6C495","3F65507A3B39259B38C8173C6FFA3D12DF64CCE9","2B6C6A4A5940017146F3E58B7F90116206E84685","B6C2EFAB3EC3BF6EF03701408B6B09A67B2D0069","96FF2FFA5C9173C76D47184B3E86D267B37781DE","0136FCB13DB29FD5CD442F56E59E53B61F1DF96F"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("fileSystem");
    AddFeature("fileSystem", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("fileSystem.directory");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    AddFeature("fileSystem.directory", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("fileSystem.requestFileSystem");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    feature->set_platforms({Feature::CHROMEOS_PLATFORM});
    AddFeature("fileSystem.requestFileSystem", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("fileSystem.retainEntries");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    AddFeature("fileSystem.retainEntries", feature);
  }
  {
    std::vector<Feature*> features;
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("fileSystem.write");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
      features.push_back(feature);
    }
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("fileSystem.write");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_EXTENSION});
      feature->set_allowlist({"2FC374607C2DF285634B67C64A2E356C607091C3","3727DD3E564B6055387425027AD74C58784ACC15","12E618C3C6E97495AAECF2AC12DEB082353241C6","D5736E4B5CF695CB93A2FB57E4FDC6E5AFAB6FE2","D57DE394F36DC1C3220E7604C575D29C51A6C495","3F65507A3B39259B38C8173C6FFA3D12DF64CCE9"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("fileSystem.write");
    AddFeature("fileSystem.write", feature);
  }
  {
    std::vector<Feature*> features;
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("fileSystemProvider");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_PLATFORM_APP});
      feature->set_platforms({Feature::CHROMEOS_PLATFORM});
      features.push_back(feature);
    }
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("fileSystemProvider");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_LEGACY_PACKAGED_APP});
      feature->set_platforms({Feature::CHROMEOS_PLATFORM});
      feature->set_allowlist({"0EA6B717932AD64C469C1CCB6911457733295907","58B0C2968C335964D5433E89CA4D86628A0E3D4B"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("fileSystemProvider");
    AddFeature("fileSystemProvider", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("firstRunPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    feature->set_location(SimpleFeature::COMPONENT_LOCATION);
    feature->set_platforms({Feature::CHROMEOS_PLATFORM});
    AddFeature("firstRunPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("fontSettings");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    AddFeature("fontSettings", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("gcm");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_PLATFORM_APP});
    AddFeature("gcm", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("geolocation");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_HOSTED_APP,Manifest::TYPE_PLATFORM_APP});
    AddFeature("geolocation", feature);
  }
  {
    std::vector<Feature*> features;
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("hid");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
      features.push_back(feature);
    }
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("hid");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_EXTENSION});
      feature->set_allowlist({"496B6890097EB6E19809ADEADD095A8721FBB2E0","AD8ED80B705E1818AAD4684F9FF62B43D6D79620","E24F1786D842E91E74C27929B0B3715A4689A473","A28C9619C4C41306FA5236FB4D94DA812F504DE8","D7CD4B3956B1F6E970E4AFCBCD4094B1EF4D07B9","D4EFCCC0CC612380762758BB96C7997224BD6395","4839A26B29CD1BD021B2E126EF6D28C9CB84018B","8F44FBB4474CCDF23450B166C9E83E85BD03AE24"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("hid");
    AddFeature("hid", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("history");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    AddFeature("history", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("identity");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_PLATFORM_APP});
    AddFeature("identity", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("identity.email");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_PLATFORM_APP});
    AddFeature("identity.email", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("identityPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    feature->set_location(SimpleFeature::COMPONENT_LOCATION);
    AddFeature("identityPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("idle");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    AddFeature("idle", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("idltest");
    feature->set_channel(version_info::Channel::UNKNOWN);
    feature->set_extension_types({Manifest::TYPE_EXTENSION});
    AddFeature("idltest", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("imageWriterPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_PLATFORM_APP});
    feature->set_allowlist({"A291B26E088FA6BA53FFD72F0916F06EBA7C585A","D7986543275120831B39EF28D1327552FC343960","BCC85C0D7F85897F2699974421EA402144C35C0C","B620CF4203315F9F2E046EDED22C7571A935958D","B206D8716769728278D2D300349C6CB7D7DE2EF9","2B6C6A4A5940017146F3E58B7F90116206E84685","B6C2EFAB3EC3BF6EF03701408B6B09A67B2D0069","96FF2FFA5C9173C76D47184B3E86D267B37781DE","0136FCB13DB29FD5CD442F56E59E53B61F1DF96F"});
    AddFeature("imageWriterPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("inlineInstallPrivate");
    feature->set_channel(version_info::Channel::DEV);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    feature->set_allowlist({"8076E9E4DA0DF53B33BFAF0454D3C3B898F93273","3A78E13285C1949EF84AA85E3BF65D1E83A3D9AB","4477F0B4FE934D0A8C88922C0986DA7B25D881E1"});
    AddFeature("inlineInstallPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("input");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    feature->set_platforms({Feature::CHROMEOS_PLATFORM,Feature::WIN_PLATFORM,Feature::LINUX_PLATFORM});
    AddFeature("input", feature);
  }
  {
    std::vector<Feature*> features;
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("inputMethodPrivate");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
      feature->set_platforms({Feature::CHROMEOS_PLATFORM});
      feature->set_allowlist({"2462D64ACB971A7E708757159C2B17761D4FF54A","3010EF507AFEF487EEA9CDE2930EC94867C60936","ABAABC5F49E022A76CBB12972A53B58354C04AC6"});
      features.push_back(feature);
    }
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("inputMethodPrivate");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
      feature->set_location(SimpleFeature::COMPONENT_LOCATION);
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("inputMethodPrivate");
    AddFeature("inputMethodPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("languageSettingsPrivate");
    feature->set_channel(version_info::Channel::UNKNOWN);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_PLATFORM_APP});
    feature->set_location(SimpleFeature::COMPONENT_LOCATION);
    AddFeature("languageSettingsPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("launcherSearchProvider");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_PLATFORM_APP});
    feature->set_platforms({Feature::CHROMEOS_PLATFORM});
    feature->set_allowlist({"A948368FC53BE437A55FEB414106E207925482F5"});
    AddFeature("launcherSearchProvider", feature);
  }
  {
    std::vector<Feature*> features;
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("lockScreen");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
      feature->set_platforms({Feature::CHROMEOS_PLATFORM});
      feature->set_allowlist({"6F9C741B8E0E546652134F1138DF0284A7C9B21E","47448626CB266C60AA2404E4EB426E025DF497DF"});
      features.push_back(feature);
    }
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("lockScreen");
      feature->set_channel(version_info::Channel::DEV);
      feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
      feature->set_platforms({Feature::CHROMEOS_PLATFORM});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("lockScreen");
    AddFeature("lockScreen", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("lockWindowFullscreenPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_component_extensions_auto_granted(false);
    feature->set_extension_types({Manifest::TYPE_EXTENSION});
    feature->set_platforms({Feature::CHROMEOS_PLATFORM});
    feature->set_allowlist({"6A4A0389E8D47118E96E6221B0B7221CA3715801","EC8EA268128FECE14CEC68B90686D87755D87083","AA1C88257F51F7A9AFB947720AACE8CA7E9CF85C","A4577D8C2AF4CF26F40CBCA83FFA4251D6F6C8F8","EFCF5358672FEE04789FD2EC3638A67ADEDB6C8C","A8208CCC87F8261AFAEB6B85D5E8D47372DDEA6B"});
    AddFeature("lockWindowFullscreenPrivate", feature);
  }
  {
    std::vector<Feature*> features;
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("management");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
      features.push_back(feature);
    }
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("management");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
      feature->set_allowlist({"AE27D69DBE571F4B1694F05C89B710C646792231","5107DE9024C329EEA9C9A72D94C16723790C6422","8C0B1873FFFB65E4D0F4D772879F7304CEF125C2","FA0501B579070BB9CBD4FCAEC8CB0EDF22BA2F04","EE17C698905F7F2E6DDC87C9C30F11E164C829F4","90113DA9516526D24DAF156C629CC41C049E8882","4A4EA121622FCA3D78ED2AB534197F43D7189EE0","9FDE6E7F06FCFA11D9A05041C7FF6D8AE662F5D1","50B4A905D522C06E27CA6D099E3E54BDA1F152C5","BA0C8BB92084C9741312D90D3EA882526853455F","5F57A9AE8DFF5D6BB09DF8606270402612E871E5"});
      features.push_back(feature);
    }
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("management");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_HOSTED_APP});
      feature->set_allowlist({"B44D08FD98F1523ED5837D78D0A606EA9D6206E5"});
      features.push_back(feature);
    }
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("management");
      feature->set_channel(version_info::Channel::DEV);
      feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
      feature->set_session_types({FeatureSessionType::KIOSK});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("management");
    AddFeature("management", feature);
  }
  {
    std::vector<Feature*> features;
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("mdns");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_EXTENSION});
      feature->set_allowlist({"63ED55E43214C211F82122ED56407FF1A807F2A3","226CF815E39A363090A1E547D53063472B8279FA","1BFB3A47AA4A1E1C4714D919217602685CDD0FA7"});
      features.push_back(feature);
    }
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("mdns");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("mdns");
    AddFeature("mdns", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("mediaGalleries");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    AddFeature("mediaGalleries", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("mediaGalleries.allAutoDetected");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    AddFeature("mediaGalleries.allAutoDetected", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("mediaGalleries.copyTo");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    AddFeature("mediaGalleries.copyTo", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("mediaGalleries.delete");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    AddFeature("mediaGalleries.delete", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("mediaGalleries.read");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    AddFeature("mediaGalleries.read", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("mediaGalleries.scan");
    feature->set_channel(version_info::Channel::DEV);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    AddFeature("mediaGalleries.scan", feature);
  }
  {
    std::vector<Feature*> features;
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("mediaPerceptionPrivate");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
      feature->set_platforms({Feature::CHROMEOS_PLATFORM});
      feature->set_session_types({FeatureSessionType::KIOSK});
      feature->set_allowlist({"E703483CEF33DEC18B4B6DD84B5C776FB9182BDB","A3BC37E2148AC4E99BE4B16AF9D42DD1E592BBBE","1C93BD3CF875F4A73C0B2A163BB8FBDA8B8B3D80","307E96539209F95A1A8740C713E6998A73657D96","4F25792AF1AA7483936DE29C07806F203C7170A0","BD8781D757D830FC2E85470A1B6E8A718B7EE0D9","4AC2B6C63C6480D150DFDA13E4A5956EB1D0DDBB","81986D4F846CEDDDB962643FA501D1780DD441BB","A9A9FC0228ADF541F0334F22BEFB8F9C245B21D7"});
      features.push_back(feature);
    }
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("mediaPerceptionPrivate");
      feature->set_channel(version_info::Channel::DEV);
      feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
      feature->set_platforms({Feature::CHROMEOS_PLATFORM});
      feature->set_allowlist({"3970B660353CA07962DAD1A5C1B75A7B87835943","E0DEFFD4518AF92D2DB1F575FF390EE35F58200C","B7B5CF88FE1AAE4B84B81B949A69AD18E512A33A"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("mediaPerceptionPrivate");
    AddFeature("mediaPerceptionPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("mediaPlayerPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    feature->set_location(SimpleFeature::COMPONENT_LOCATION);
    feature->set_platforms({Feature::CHROMEOS_PLATFORM});
    AddFeature("mediaPlayerPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("mediaRouterPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION});
    feature->set_allowlist({"63ED55E43214C211F82122ED56407FF1A807F2A3","226CF815E39A363090A1E547D53063472B8279FA"});
    AddFeature("mediaRouterPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("metricsPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    feature->set_allowlist({"A948368FC53BE437A55FEB414106E207925482F5","2FC374607C2DF285634B67C64A2E356C607091C3","3727DD3E564B6055387425027AD74C58784ACC15","12E618C3C6E97495AAECF2AC12DEB082353241C6","3727DD3E564B6055387425027AD74C58784ACC15","C41AD9DCD670210295614257EF8C9945AD68D86E","7AE714FFD394E073F0294CFA134C9F91DB5FBAA4","C7DA3A55C2355F994D3FDDAD120B426A0DF63843","75E3CFFFC530582C583E4690EF97C70B9C8423B7","D5736E4B5CF695CB93A2FB57E4FDC6E5AFAB6FE2","D57DE394F36DC1C3220E7604C575D29C51A6C495","3F65507A3B39259B38C8173C6FFA3D12DF64CCE9","06BE211D5F014BAB34BC22D9DDA09C63A81D828E","CFBF7EE448FA48960FFDA7CEB30F7A21B26AA981","B9EF10DDFEA11EF77873CC5009809E5037FC4C7A","D2DAA9362153E8A5E3CF593E6DF4666421ABAD21","D7986543275120831B39EF28D1327552FC343960","A291B26E088FA6BA53FFD72F0916F06EBA7C585A","07BD6A765FFC289FF755D7CAB2893A40EC337FEC","896B85CC7E913E11C34892C1425A093C0701D386","11A01C82EF355E674E4F9728A801F5C3CB40D83F","F410C88469990EE7947450311D24B8AF2ADB2595","9E527CDA9D7C50844E8A5DB964A54A640AE48F98","DF52618D0B040D8A054D8348D2E84DDEEE5974E7","269D721F163E587BC53C6F83553BF9CE2BB143CD","6B55A5329E3F1F30F6032BDB20B2EB4378DBF767","C449A798C495E6CF7D6AF10162113D564E67AD12","01E9FFA9A8F3C18271FE91BEE46207F3B81755CC","97B23E01B2AA064E8332EE43A7A85C628AADC3F2","63ED55E43214C211F82122ED56407FF1A807F2A3","226CF815E39A363090A1E547D53063472B8279FA","B620CF4203315F9F2E046EDED22C7571A935958D","B206D8716769728278D2D300349C6CB7D7DE2EF9","2B6C6A4A5940017146F3E58B7F90116206E84685","B6C2EFAB3EC3BF6EF03701408B6B09A67B2D0069","96FF2FFA5C9173C76D47184B3E86D267B37781DE","0136FCB13DB29FD5CD442F56E59E53B61F1DF96F","CBCC42ABED43A4B58FE3810E62AFFA010EB0349F"});
    AddFeature("metricsPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("musicManagerPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    feature->set_allowlist({"4B1D0E19C6C43C008C44A8278C8B5BFE15ABEB3C","B8F61FD1B25DE03706DBB8906A73261E4DBB992A","F7FA7ABC1ECB89BA8EE6656847EFABBF43BB9BCA","4FE45FA56EF6A25FDE8C302C44045CA9CE8A605A","3D14248405B8A59043420AAC160077C99E7788A9","A6C87307BBE5886CC5F1393025000E2FE8060BF2","3407516021EA3669C0EC8E65E6B9837E5A521B9C"});
    AddFeature("musicManagerPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("nativeMessaging");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    AddFeature("nativeMessaging", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("networking.castPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_PLATFORM_APP});
    feature->set_platforms({Feature::CHROMEOS_PLATFORM,Feature::MACOSX_PLATFORM,Feature::WIN_PLATFORM});
    feature->set_allowlist({"63ED55E43214C211F82122ED56407FF1A807F2A3","FA01E0B81978950F2BC5A50512FD769725F57510","B11A93E7E5B541F8010245EBDE2C74647D6C14B9","F155646B5D1CA545F7E1E4E20D573DFDD44C2540","16CA7A47AAE4BE49B1E75A6B960C3875E945B264","226CF815E39A363090A1E547D53063472B8279FA"});
    AddFeature("networking.castPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("networking.config");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_PLATFORM_APP});
    feature->set_platforms({Feature::CHROMEOS_PLATFORM});
    AddFeature("networking.config", feature);
  }
  {
    std::vector<Feature*> features;
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("networking.onc");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
      feature->set_platforms({Feature::CHROMEOS_PLATFORM});
      feature->set_session_types({FeatureSessionType::AUTOLAUNCHED_KIOSK});
      features.push_back(feature);
    }
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("networking.onc");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
      feature->set_platforms({Feature::CHROMEOS_PLATFORM,Feature::MACOSX_PLATFORM,Feature::WIN_PLATFORM,Feature::LINUX_PLATFORM});
      feature->set_allowlist({"0DE0F05680A4A056BCEC864ED8DDA84296F82B40","1C93BD3CF875F4A73C0B2A163BB8FBDA8B8B3D80","A3BC37E2148AC4E99BE4B16AF9D42DD1E592BBBE","8C3741E3AF0B93B6E8E0DDD499BB0B74839EA578","E703483CEF33DEC18B4B6DD84B5C776FB9182BDB","307E96539209F95A1A8740C713E6998A73657D96","63ED55E43214C211F82122ED56407FF1A807F2A3","226CF815E39A363090A1E547D53063472B8279FA","7AE714FFD394E073F0294CFA134C9F91DB5FBAA4","C7DA3A55C2355F994D3FDDAD120B426A0DF63843","75E3CFFFC530582C583E4690EF97C70B9C8423B7","23D8847AE3EE90122AA34657360AFEEC8B3E611B","4F25792AF1AA7483936DE29C07806F203C7170A0","BD8781D757D830FC2E85470A1B6E8A718B7EE0D9","4AC2B6C63C6480D150DFDA13E4A5956EB1D0DDBB","81986D4F846CEDDDB962643FA501D1780DD441BB","2F6F6FDB84E0290ABAB7A9D7571EB344821E5F12","5B9E39EA374B136CBE7AED2D872003107642EAD5","E0E94FB0C01FFB9CDC7A5F098C99B5A8D2F95902","52E0557059A7A28F74ED1D92DDD997E0CCD37806","61FF4757F9420B62B19BA5C96084649339DB31F5","6FB7E1B6C0247B687AC14772E87A117F5F5E4497","9834387FDA1F66A1B5CA06CB442137B556F12F2A","A9A9FC0228ADF541F0334F22BEFB8F9C245B21D7"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("networking.onc");
    AddFeature("networking.onc", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("networkingPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    feature->set_platforms({Feature::CHROMEOS_PLATFORM,Feature::MACOSX_PLATFORM,Feature::WIN_PLATFORM,Feature::LINUX_PLATFORM});
    feature->set_allowlist({"0DE0F05680A4A056BCEC864ED8DDA84296F82B40","1C93BD3CF875F4A73C0B2A163BB8FBDA8B8B3D80","A3BC37E2148AC4E99BE4B16AF9D42DD1E592BBBE","8C3741E3AF0B93B6E8E0DDD499BB0B74839EA578","E703483CEF33DEC18B4B6DD84B5C776FB9182BDB","307E96539209F95A1A8740C713E6998A73657D96","63ED55E43214C211F82122ED56407FF1A807F2A3","FA01E0B81978950F2BC5A50512FD769725F57510","B11A93E7E5B541F8010245EBDE2C74647D6C14B9","F155646B5D1CA545F7E1E4E20D573DFDD44C2540","16CA7A47AAE4BE49B1E75A6B960C3875E945B264","226CF815E39A363090A1E547D53063472B8279FA","7AE714FFD394E073F0294CFA134C9F91DB5FBAA4","C7DA3A55C2355F994D3FDDAD120B426A0DF63843","75E3CFFFC530582C583E4690EF97C70B9C8423B7","4F25792AF1AA7483936DE29C07806F203C7170A0","BD8781D757D830FC2E85470A1B6E8A718B7EE0D9","4AC2B6C63C6480D150DFDA13E4A5956EB1D0DDBB","81986D4F846CEDDDB962643FA501D1780DD441BB","2F6F6FDB84E0290ABAB7A9D7571EB344821E5F12","5B9E39EA374B136CBE7AED2D872003107642EAD5","E0E94FB0C01FFB9CDC7A5F098C99B5A8D2F95902","52E0557059A7A28F74ED1D92DDD997E0CCD37806","A9A9FC0228ADF541F0334F22BEFB8F9C245B21D7"});
    AddFeature("networkingPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("notifications");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_HOSTED_APP,Manifest::TYPE_PLATFORM_APP});
    AddFeature("notifications", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("pageCapture");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    AddFeature("pageCapture", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("passwordsPrivate");
    feature->set_channel(version_info::Channel::UNKNOWN);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_PLATFORM_APP});
    feature->set_location(SimpleFeature::COMPONENT_LOCATION);
    AddFeature("passwordsPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("platformKeys");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_PLATFORM_APP});
    feature->set_platforms({Feature::CHROMEOS_PLATFORM});
    AddFeature("platformKeys", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("plugin");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    AddFeature("plugin", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("pointerLock");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    AddFeature("pointerLock", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("power");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    AddFeature("power", feature);
  }
  {
    std::vector<Feature*> features;
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("preferencesPrivate");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_EXTENSION});
      feature->set_allowlist({"C41AD9DCD670210295614257EF8C9945AD68D86E","D5736E4B5CF695CB93A2FB57E4FDC6E5AFAB6FE2","D57DE394F36DC1C3220E7604C575D29C51A6C495","3F65507A3B39259B38C8173C6FFA3D12DF64CCE9","852290F2442EEE45EF673B8DA6090112079012A2"});
      features.push_back(feature);
    }
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("preferencesPrivate");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
      feature->set_location(SimpleFeature::COMPONENT_LOCATION);
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("preferencesPrivate");
    AddFeature("preferencesPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("printerProvider");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_PLATFORM_APP});
    AddFeature("printerProvider", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("privacy");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    AddFeature("privacy", feature);
  }
  {
    std::vector<Feature*> features;
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("processes");
      feature->set_channel(version_info::Channel::DEV);
      feature->set_extension_types({Manifest::TYPE_EXTENSION});
      features.push_back(feature);
    }
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("processes");
      feature->set_channel(version_info::Channel::BETA);
      feature->set_extension_types({Manifest::TYPE_EXTENSION});
      feature->set_allowlist({"7D7A4B147FE39908A5AF13F85E38989C54BBE41C","0EEDFC0EED87871237213F34EBC7B4982A195C95"});
      features.push_back(feature);
    }
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("processes");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_EXTENSION});
      feature->set_allowlist({"DF84F03F9B960409CCDE0D895B9650EBE81C0A8E","80B9DC58E5210749F052F5B4DB239C50CF72AEB6","7D7A4B147FE39908A5AF13F85E38989C54BBE41C","0EEDFC0EED87871237213F34EBC7B4982A195C95"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("processes");
    AddFeature("processes", feature);
  }
  {
    std::vector<Feature*> features;
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("proxy");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
      features.push_back(feature);
    }
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("proxy");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
      feature->set_platforms({Feature::CHROMEOS_PLATFORM});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("proxy");
    AddFeature("proxy", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("resourcesPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    feature->set_location(SimpleFeature::COMPONENT_LOCATION);
    AddFeature("resourcesPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("rtcPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    feature->set_allowlist({"53041A2FA309EECED01FFC751E7399186E860B2C","A74A4D44C7CFCD8844830E6140C8D763E12DD8F3","E7E2461CE072DF036CF9592740196159E2D7C089","312745D9BF916161191143F6490085EEA0434997"});
    AddFeature("rtcPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("runtime");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    AddFeature("runtime", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("safeBrowingPrivate");
    feature->set_channel(version_info::Channel::DEV);
    feature->set_extension_types({Manifest::TYPE_EXTENSION});
    feature->set_allowlist({"FD15C63ABA854733FDCBC1D4D34A71E963A12ABD"});
    AddFeature("safeBrowingPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("screenlockPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    feature->set_location(SimpleFeature::COMPONENT_LOCATION);
    feature->set_platforms({Feature::CHROMEOS_PLATFORM});
    AddFeature("screenlockPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("serial");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    AddFeature("serial", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("sessions");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    AddFeature("sessions", feature);
  }
  {
    std::vector<Feature*> features;
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("settingsPrivate");
      feature->set_channel(version_info::Channel::UNKNOWN);
      feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_PLATFORM_APP});
      feature->set_location(SimpleFeature::COMPONENT_LOCATION);
      features.push_back(feature);
    }
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("settingsPrivate");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_EXTENSION});
      feature->set_allowlist({"63ED55E43214C211F82122ED56407FF1A807F2A3","226CF815E39A363090A1E547D53063472B8279FA"});
      features.push_back(feature);
    }
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("settingsPrivate");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
      feature->set_platforms({Feature::CHROMEOS_PLATFORM});
      feature->set_session_types({FeatureSessionType::KIOSK});
      feature->set_allowlist({"E703483CEF33DEC18B4B6DD84B5C776FB9182BDB","A3BC37E2148AC4E99BE4B16AF9D42DD1E592BBBE","1C93BD3CF875F4A73C0B2A163BB8FBDA8B8B3D80","307E96539209F95A1A8740C713E6998A73657D96","4F25792AF1AA7483936DE29C07806F203C7170A0","BD8781D757D830FC2E85470A1B6E8A718B7EE0D9","4AC2B6C63C6480D150DFDA13E4A5956EB1D0DDBB","81986D4F846CEDDDB962643FA501D1780DD441BB","A9A9FC0228ADF541F0334F22BEFB8F9C245B21D7"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("settingsPrivate");
    AddFeature("settingsPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("signedInDevices");
    feature->set_channel(version_info::Channel::DEV);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    AddFeature("signedInDevices", feature);
  }
  {
    std::vector<Feature*> features;
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("socket");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
      features.push_back(feature);
    }
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("socket");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_EXTENSION});
      feature->set_allowlist({"32A1BA997F8AB8DE29ED1BA94AAF00CF2A3FEFA7"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("socket");
    AddFeature("socket", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("storage");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    feature->set_min_manifest_version(2);
    AddFeature("storage", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("streamsPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    feature->set_allowlist({"787000072C6FBB934AF5A42275CDE73FC977D995","2FC374607C2DF285634B67C64A2E356C607091C3","5D3851BEFF680AB6D954B76678EFCCE834465C23","12E618C3C6E97495AAECF2AC12DEB082353241C6","3727DD3E564B6055387425027AD74C58784ACC15","CBCC42ABED43A4B58FE3810E62AFFA010EB0349F"});
    AddFeature("streamsPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("syncFileSystem");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    AddFeature("syncFileSystem", feature);
  }
  {
    std::vector<Feature*> features;
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("system.cpu");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
      features.push_back(feature);
    }
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("system.cpu");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_HOSTED_APP});
      feature->set_allowlist({"B44D08FD98F1523ED5837D78D0A606EA9D6206E5"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("system.cpu");
    AddFeature("system.cpu", feature);
  }
  {
    std::vector<Feature*> features;
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("system.display");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
      features.push_back(feature);
    }
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("system.display");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_HOSTED_APP});
      feature->set_allowlist({"B44D08FD98F1523ED5837D78D0A606EA9D6206E5"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("system.display");
    AddFeature("system.display", feature);
  }
  {
    std::vector<Feature*> features;
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("system.memory");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
      features.push_back(feature);
    }
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("system.memory");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_HOSTED_APP});
      feature->set_allowlist({"B44D08FD98F1523ED5837D78D0A606EA9D6206E5"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("system.memory");
    AddFeature("system.memory", feature);
  }
  {
    std::vector<Feature*> features;
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("system.network");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
      features.push_back(feature);
    }
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("system.network");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_HOSTED_APP});
      feature->set_allowlist({"B44D08FD98F1523ED5837D78D0A606EA9D6206E5"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("system.network");
    AddFeature("system.network", feature);
  }
  {
    std::vector<Feature*> features;
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("system.storage");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
      features.push_back(feature);
    }
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("system.storage");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_HOSTED_APP});
      feature->set_allowlist({"B44D08FD98F1523ED5837D78D0A606EA9D6206E5"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("system.storage");
    AddFeature("system.storage", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("systemPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    feature->set_location(SimpleFeature::COMPONENT_LOCATION);
    AddFeature("systemPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("tabCapture");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    AddFeature("tabCapture", feature);
  }
  {
    std::vector<Feature*> features;
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("tabs");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
      features.push_back(feature);
    }
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("tabs");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
      feature->set_allowlist({"AE27D69DBE571F4B1694F05C89B710C646792231","5107DE9024C329EEA9C9A72D94C16723790C6422"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("tabs");
    AddFeature("tabs", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("terminalPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    feature->set_platforms({Feature::CHROMEOS_PLATFORM});
    feature->set_allowlist({"0EA6B717932AD64C469C1CCB6911457733295907","58B0C2968C335964D5433E89CA4D86628A0E3D4B"});
    AddFeature("terminalPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("topSites");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    AddFeature("topSites", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("tts");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    AddFeature("tts", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("ttsEngine");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    AddFeature("ttsEngine", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("u2fDevices");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_PLATFORM_APP});
    feature->set_allowlist({"496B6890097EB6E19809ADEADD095A8721FBB2E0","AD8ED80B705E1818AAD4684F9FF62B43D6D79620","E24F1786D842E91E74C27929B0B3715A4689A473","A28C9619C4C41306FA5236FB4D94DA812F504DE8","6F9E349A0561C78A0D3F41496FE521C5151C7F71","C06709A259378015404ED20F75C7D08547E0F10B"});
    AddFeature("u2fDevices", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("unlimitedStorage");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_HOSTED_APP,Manifest::TYPE_PLATFORM_APP});
    AddFeature("unlimitedStorage", feature);
  }
  {
    std::vector<Feature*> features;
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("usb");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
      features.push_back(feature);
    }
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("usb");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_EXTENSION});
      feature->set_allowlist({"496B6890097EB6E19809ADEADD095A8721FBB2E0","AD8ED80B705E1818AAD4684F9FF62B43D6D79620","E24F1786D842E91E74C27929B0B3715A4689A473","A28C9619C4C41306FA5236FB4D94DA812F504DE8"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("usb");
    AddFeature("usb", feature);
  }
  {
    std::vector<Feature*> features;
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("usbDevices");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
      features.push_back(feature);
    }
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("usbDevices");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_EXTENSION});
      feature->set_allowlist({"496B6890097EB6E19809ADEADD095A8721FBB2E0","AD8ED80B705E1818AAD4684F9FF62B43D6D79620","E24F1786D842E91E74C27929B0B3715A4689A473","A28C9619C4C41306FA5236FB4D94DA812F504DE8","D7CD4B3956B1F6E970E4AFCBCD4094B1EF4D07B9","D4EFCCC0CC612380762758BB96C7997224BD6395","4839A26B29CD1BD021B2E126EF6D28C9CB84018B","8F44FBB4474CCDF23450B166C9E83E85BD03AE24"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("usbDevices");
    AddFeature("usbDevices", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("usersPrivate");
    feature->set_channel(version_info::Channel::UNKNOWN);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_PLATFORM_APP});
    feature->set_location(SimpleFeature::COMPONENT_LOCATION);
    AddFeature("usersPrivate", feature);
  }
  {
    std::vector<Feature*> features;
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("videoCapture");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
      features.push_back(feature);
    }
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("videoCapture");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_EXTENSION});
      feature->set_allowlist({"A434B90223C3C52F2B69DB494736B63C612C774D"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("videoCapture");
    AddFeature("videoCapture", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("virtualKeyboard");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    feature->set_platforms({Feature::CHROMEOS_PLATFORM});
    feature->set_session_types({FeatureSessionType::KIOSK});
    AddFeature("virtualKeyboard", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("virtualKeyboardPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_PLATFORM_APP});
    feature->set_platforms({Feature::CHROMEOS_PLATFORM});
    feature->set_allowlist({"3F50C3A83839D9C76334BCE81CDEC06174F266AF","06BE211D5F014BAB34BC22D9DDA09C63A81D828E","CFBF7EE448FA48960FFDA7CEB30F7A21B26AA981","F94EE6AB36D6C6588670B2B01EB65212D9C64E33","3E03D9B67FDD31B2438D1CF5070573415DCB3CBA","E703483CEF33DEC18B4B6DD84B5C776FB9182BDB","A3BC37E2148AC4E99BE4B16AF9D42DD1E592BBBE","1C93BD3CF875F4A73C0B2A163BB8FBDA8B8B3D80","307E96539209F95A1A8740C713E6998A73657D96","4F25792AF1AA7483936DE29C07806F203C7170A0","BD8781D757D830FC2E85470A1B6E8A718B7EE0D9","4AC2B6C63C6480D150DFDA13E4A5956EB1D0DDBB","81986D4F846CEDDDB962643FA501D1780DD441BB","A9A9FC0228ADF541F0334F22BEFB8F9C245B21D7"});
    AddFeature("virtualKeyboardPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("vpnProvider");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_PLATFORM_APP});
    feature->set_platforms({Feature::CHROMEOS_PLATFORM});
    AddFeature("vpnProvider", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("wallpaper");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP,Manifest::TYPE_EXTENSION});
    feature->set_platforms({Feature::CHROMEOS_PLATFORM});
    AddFeature("wallpaper", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("wallpaperPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    feature->set_location(SimpleFeature::COMPONENT_LOCATION);
    feature->set_platforms({Feature::CHROMEOS_PLATFORM});
    AddFeature("wallpaperPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("webNavigation");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    AddFeature("webNavigation", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("webRequest");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    AddFeature("webRequest", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("webRequestBlocking");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    AddFeature("webRequestBlocking", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("webcamPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_PLATFORM_APP});
    AddFeature("webcamPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("webrtcAudioPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION});
    feature->set_allowlist({"80B9DC58E5210749F052F5B4DB239C50CF72AEB6","DF84F03F9B960409CCDE0D895B9650EBE81C0A8E","ADFA45434ABA2F1A4647E673F53FF37F8F6047A3"});
    AddFeature("webrtcAudioPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("webrtcDesktopCapturePrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION});
    feature->set_allowlist({"80B9DC58E5210749F052F5B4DB239C50CF72AEB6","DF84F03F9B960409CCDE0D895B9650EBE81C0A8E","ADFA45434ABA2F1A4647E673F53FF37F8F6047A3"});
    AddFeature("webrtcDesktopCapturePrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("webrtcLoggingPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_PLATFORM_APP});
    feature->set_allowlist({"80B9DC58E5210749F052F5B4DB239C50CF72AEB6","DF84F03F9B960409CCDE0D895B9650EBE81C0A8E","63ED55E43214C211F82122ED56407FF1A807F2A3","226CF815E39A363090A1E547D53063472B8279FA","ADFA45434ABA2F1A4647E673F53FF37F8F6047A3","4F25792AF1AA7483936DE29C07806F203C7170A0","BD8781D757D830FC2E85470A1B6E8A718B7EE0D9","4AC2B6C63C6480D150DFDA13E4A5956EB1D0DDBB","81986D4F846CEDDDB962643FA501D1780DD441BB"});
    AddFeature("webrtcLoggingPrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("webrtcLoggingPrivate.audioDebug");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_component_extensions_auto_granted(false);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    feature->set_allowlist({"ADFA45434ABA2F1A4647E673F53FF37F8F6047A3","4F25792AF1AA7483936DE29C07806F203C7170A0","BD8781D757D830FC2E85470A1B6E8A718B7EE0D9","4AC2B6C63C6480D150DFDA13E4A5956EB1D0DDBB","81986D4F846CEDDDB962643FA501D1780DD441BB"});
    AddFeature("webrtcLoggingPrivate.audioDebug", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("webstorePrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_HOSTED_APP});
    feature->set_allowlist({"B44D08FD98F1523ED5837D78D0A606EA9D6206E5","2653F6F6C39BC6EEBD36A09AFB92A19782FF7EB4"});
    AddFeature("webstorePrivate", feature);
  }
  {
    PermissionFeature* feature = new PermissionFeature();
    feature->set_name("webstoreWidgetPrivate");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    feature->set_platforms({Feature::CHROMEOS_PLATFORM});
    feature->set_allowlist({"A948368FC53BE437A55FEB414106E207925482F5","8C726564C6DBE7380BAB388DE6CC7EC93EB44B06","5065C83E84321221675D20FBE4DC43C655CC8C6F"});
    AddFeature("webstoreWidgetPrivate", feature);
  }
  {
    std::vector<Feature*> features;
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("webview");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
      features.push_back(feature);
    }
    {
      PermissionFeature* feature = new PermissionFeature();
      feature->set_name("webview");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_EXTENSION});
      feature->set_allowlist({"63ED55E43214C211F82122ED56407FF1A807F2A3","226CF815E39A363090A1E547D53063472B8279FA"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("webview");
    AddFeature("webview", feature);
  }
}

PermissionFeatureProvider::~PermissionFeatureProvider() {}

}  // namespace extensions