// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE FEATURES FILE:
//   ['../../extensions/common/api/_manifest_features.json', '../../chrome/common/extensions/api/_manifest_features.json']
// DO NOT EDIT.

#include "manifest_features.h"

#include "extensions/common/features/complex_feature.h"
#include "extensions/common/features/manifest_feature.h"
#include "extensions/common/features/permission_feature.h"

namespace extensions {
ManifestFeatureProvider::ManifestFeatureProvider() {
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("about_page");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_SHARED_MODULE});
    AddFeature("about_page", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("action");
    feature->set_channel(version_info::Channel::UNKNOWN);
    feature->set_extension_types({Manifest::TYPE_EXTENSION});
    AddFeature("action", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("action_handlers");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    feature->set_platforms({Feature::CHROMEOS_PLATFORM});
    AddFeature("action_handlers", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("app");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_HOSTED_APP,Manifest::TYPE_PLATFORM_APP});
    AddFeature("app", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("app.background");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    feature->set_min_manifest_version(2);
    AddFeature("app.background", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("app.content_security_policy");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    feature->set_min_manifest_version(2);
    feature->set_allowlist({"53041A2FA309EECED01FFC751E7399186E860B2C","312745D9BF916161191143F6490085EEA0434997","E7E2461CE072DF036CF9592740196159E2D7C089","A74A4D44C7CFCD8844830E6140C8D763E12DD8F3","5107DE9024C329EEA9C9A72D94C16723790C6422"});
    AddFeature("app.content_security_policy", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("app.icon_color");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_HOSTED_APP});
    AddFeature("app.icon_color", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("app.isolation");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_HOSTED_APP});
    AddFeature("app.isolation", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("app.launch");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_HOSTED_APP});
    AddFeature("app.launch", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("app.linked_icons");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_HOSTED_APP});
    AddFeature("app.linked_icons", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("app.theme_color");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_HOSTED_APP});
    AddFeature("app.theme_color", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("author");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_HOSTED_APP,Manifest::TYPE_PLATFORM_APP,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_THEME,Manifest::TYPE_SHARED_MODULE});
    AddFeature("author", feature);
  }
  {
    std::vector<Feature*> features;
    {
      ManifestFeature* feature = new ManifestFeature();
      feature->set_name("automation");
      feature->set_channel(version_info::Channel::DEV);
      feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
      features.push_back(feature);
    }
    {
      ManifestFeature* feature = new ManifestFeature();
      feature->set_name("automation");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
      feature->set_allowlist({"2FCBCE08B34CCA1728A85F1EFBD9A34DD2558B2E"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("automation");
    AddFeature("automation", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("background");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_HOSTED_APP});
    AddFeature("background", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("background.persistent");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    feature->set_min_manifest_version(2);
    AddFeature("background.persistent", feature);
  }
  {
    std::vector<Feature*> features;
    {
      ManifestFeature* feature = new ManifestFeature();
      feature->set_name("bluetooth");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
      feature->set_platforms({Feature::CHROMEOS_PLATFORM,Feature::WIN_PLATFORM,Feature::MACOSX_PLATFORM});
      features.push_back(feature);
    }
    {
      ManifestFeature* feature = new ManifestFeature();
      feature->set_name("bluetooth");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
      feature->set_platforms({Feature::LINUX_PLATFORM});
      feature->set_allowlist({"9E287A8257E58EFB13E89C86A4B75A3AC4B058D8","1C93BD3CF875F4A73C0B2A163BB8FBDA8B8B3D80","A3BC37E2148AC4E99BE4B16AF9D42DD1E592BBBE","E703483CEF33DEC18B4B6DD84B5C776FB9182BDB","307E96539209F95A1A8740C713E6998A73657D96","4F25792AF1AA7483936DE29C07806F203C7170A0","BD8781D757D830FC2E85470A1B6E8A718B7EE0D9","4AC2B6C63C6480D150DFDA13E4A5956EB1D0DDBB","81986D4F846CEDDDB962643FA501D1780DD441BB","A9A9FC0228ADF541F0334F22BEFB8F9C245B21D7"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("bluetooth");
    AddFeature("bluetooth", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("browser_action");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION});
    AddFeature("browser_action", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("chrome_settings_overrides");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION});
    feature->set_platforms({Feature::WIN_PLATFORM,Feature::MACOSX_PLATFORM});
    AddFeature("chrome_settings_overrides", feature);
  }
  {
    std::vector<Feature*> features;
    {
      ManifestFeature* feature = new ManifestFeature();
      feature->set_name("chrome_ui_overrides");
      feature->set_channel(version_info::Channel::DEV);
      feature->set_extension_types({Manifest::TYPE_EXTENSION});
      features.push_back(feature);
    }
    {
      ManifestFeature* feature = new ManifestFeature();
      feature->set_name("chrome_ui_overrides");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_EXTENSION});
      feature->set_allowlist({"D5736E4B5CF695CB93A2FB57E4FDC6E5AFAB6FE2","D57DE394F36DC1C3220E7604C575D29C51A6C495","3F65507A3B39259B38C8173C6FFA3D12DF64CCE9"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("chrome_ui_overrides");
    AddFeature("chrome_ui_overrides", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("chrome_url_overrides");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    AddFeature("chrome_url_overrides", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("commands");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_PLATFORM_APP});
    feature->set_min_manifest_version(2);
    AddFeature("commands", feature);
  }
  {
    std::vector<Feature*> features;
    {
      ManifestFeature* feature = new ManifestFeature();
      feature->set_name("content_capabilities");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_EXTENSION});
      feature->set_allowlist({"950D13BB9B4794F4CA2A68D3597E5DFAA47C88AE","0EEB39B7A9A52CAAE6A072F83320435749B184A4","99717FF3BE1AFB5B343CDD024E53873C1783521B","4895B1DBB92D52488F8D9FFDF9CC7B95C7258C9A","A3880AA78DB0004DE841CC980959D8443F3A8E40","C8B53B3C2CC39CB504B19D990165684FF0CE880C"});
      features.push_back(feature);
    }
    {
      ManifestFeature* feature = new ManifestFeature();
      feature->set_name("content_capabilities");
      feature->set_channel(version_info::Channel::CANARY);
      feature->set_extension_types({Manifest::TYPE_EXTENSION});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("content_capabilities");
    AddFeature("content_capabilities", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("content_scripts");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    AddFeature("content_scripts", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("content_security_policy");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    AddFeature("content_security_policy", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("converted_from_user_script");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_HOSTED_APP});
    AddFeature("converted_from_user_script", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("current_locale");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_HOSTED_APP,Manifest::TYPE_PLATFORM_APP,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_THEME,Manifest::TYPE_SHARED_MODULE});
    AddFeature("current_locale", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("declarative_net_request");
    feature->set_channel(version_info::Channel::UNKNOWN);
    feature->set_extension_types({Manifest::TYPE_EXTENSION});
    feature->set_min_manifest_version(2);
    AddFeature("declarative_net_request", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("default_locale");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_HOSTED_APP,Manifest::TYPE_PLATFORM_APP,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_THEME,Manifest::TYPE_SHARED_MODULE});
    AddFeature("default_locale", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("description");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_HOSTED_APP,Manifest::TYPE_PLATFORM_APP,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_THEME,Manifest::TYPE_SHARED_MODULE});
    AddFeature("description", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("devtools_page");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    AddFeature("devtools_page", feature);
  }
  {
    std::vector<Feature*> features;
    {
      ManifestFeature* feature = new ManifestFeature();
      feature->set_name("display_in_launcher");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP,Manifest::TYPE_HOSTED_APP});
      feature->set_location(SimpleFeature::COMPONENT_LOCATION);
      features.push_back(feature);
    }
    {
      ManifestFeature* feature = new ManifestFeature();
      feature->set_name("display_in_launcher");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
      feature->set_allowlist({"64291898C201DAF15B090EC4B9EC270BEB6BE6FF","1630F9F78E4527E19E5D9008B99847A8D690F65D","07BD6A765FFC289FF755D7CAB2893A40EC337FEC","896B85CC7E913E11C34892C1425A093C0701D386","11A01C82EF355E674E4F9728A801F5C3CB40D83F","F410C88469990EE7947450311D24B8AF2ADB2595"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("display_in_launcher");
    AddFeature("display_in_launcher", feature);
  }
  {
    std::vector<Feature*> features;
    {
      ManifestFeature* feature = new ManifestFeature();
      feature->set_name("display_in_new_tab_page");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP,Manifest::TYPE_HOSTED_APP});
      feature->set_location(SimpleFeature::COMPONENT_LOCATION);
      features.push_back(feature);
    }
    {
      ManifestFeature* feature = new ManifestFeature();
      feature->set_name("display_in_new_tab_page");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
      feature->set_allowlist({"64291898C201DAF15B090EC4B9EC270BEB6BE6FF","07BD6A765FFC289FF755D7CAB2893A40EC337FEC","896B85CC7E913E11C34892C1425A093C0701D386","11A01C82EF355E674E4F9728A801F5C3CB40D83F","F410C88469990EE7947450311D24B8AF2ADB2595"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("display_in_new_tab_page");
    AddFeature("display_in_new_tab_page", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("event_rules");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_HOSTED_APP,Manifest::TYPE_PLATFORM_APP,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_THEME,Manifest::TYPE_SHARED_MODULE});
    AddFeature("event_rules", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("export");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_SHARED_MODULE});
    AddFeature("export", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("externally_connectable");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_HOSTED_APP,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    AddFeature("externally_connectable", feature);
  }
  {
    std::vector<Feature*> features;
    {
      ManifestFeature* feature = new ManifestFeature();
      feature->set_name("file_browser_handlers");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
      features.push_back(feature);
    }
    {
      ManifestFeature* feature = new ManifestFeature();
      feature->set_name("file_browser_handlers");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
      feature->set_location(SimpleFeature::COMPONENT_LOCATION);
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("file_browser_handlers");
    AddFeature("file_browser_handlers", feature);
  }
  {
    std::vector<Feature*> features;
    {
      ManifestFeature* feature = new ManifestFeature();
      feature->set_name("file_handlers");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
      features.push_back(feature);
    }
    {
      ManifestFeature* feature = new ManifestFeature();
      feature->set_name("file_handlers");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_EXTENSION});
      feature->set_allowlist({"2FC374607C2DF285634B67C64A2E356C607091C3","3727DD3E564B6055387425027AD74C58784ACC15","12E618C3C6E97495AAECF2AC12DEB082353241C6"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("file_handlers");
    AddFeature("file_handlers", feature);
  }
  {
    std::vector<Feature*> features;
    {
      ManifestFeature* feature = new ManifestFeature();
      feature->set_name("file_system_provider_capabilities");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_PLATFORM_APP});
      features.push_back(feature);
    }
    {
      ManifestFeature* feature = new ManifestFeature();
      feature->set_name("file_system_provider_capabilities");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_LEGACY_PACKAGED_APP});
      feature->set_platforms({Feature::CHROMEOS_PLATFORM});
      feature->set_allowlist({"0EA6B717932AD64C469C1CCB6911457733295907","58B0C2968C335964D5433E89CA4D86628A0E3D4B"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("file_system_provider_capabilities");
    AddFeature("file_system_provider_capabilities", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("homepage_url");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    AddFeature("homepage_url", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("icons");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_HOSTED_APP,Manifest::TYPE_PLATFORM_APP,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_THEME,Manifest::TYPE_SHARED_MODULE});
    AddFeature("icons", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("import");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_HOSTED_APP,Manifest::TYPE_PLATFORM_APP,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_THEME,Manifest::TYPE_SHARED_MODULE});
    AddFeature("import", feature);
  }
  {
    std::vector<Feature*> features;
    {
      ManifestFeature* feature = new ManifestFeature();
      feature->set_name("incognito");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
      features.push_back(feature);
    }
    {
      ManifestFeature* feature = new ManifestFeature();
      feature->set_name("incognito");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
      feature->set_location(SimpleFeature::COMPONENT_LOCATION);
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("incognito");
    AddFeature("incognito", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("input_components");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    AddFeature("input_components", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("key");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_HOSTED_APP,Manifest::TYPE_PLATFORM_APP,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_THEME,Manifest::TYPE_SHARED_MODULE});
    AddFeature("key", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("kiosk");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    AddFeature("kiosk", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("kiosk.always_update");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    AddFeature("kiosk.always_update", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("kiosk.required_platform_version");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    AddFeature("kiosk.required_platform_version", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("kiosk_enabled");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    AddFeature("kiosk_enabled", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("kiosk_only");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    feature->set_platforms({Feature::CHROMEOS_PLATFORM});
    AddFeature("kiosk_only", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("kiosk_secondary_apps");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    AddFeature("kiosk_secondary_apps", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("manifest_version");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_HOSTED_APP,Manifest::TYPE_PLATFORM_APP,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_THEME,Manifest::TYPE_SHARED_MODULE});
    AddFeature("manifest_version", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("mime_types");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    feature->set_allowlist({"787000072C6FBB934AF5A42275CDE73FC977D995","2FC374607C2DF285634B67C64A2E356C607091C3","5D3851BEFF680AB6D954B76678EFCCE834465C23","12E618C3C6E97495AAECF2AC12DEB082353241C6","3727DD3E564B6055387425027AD74C58784ACC15","CBCC42ABED43A4B58FE3810E62AFFA010EB0349F"});
    AddFeature("mime_types", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("mime_types_handler");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    feature->set_allowlist({"787000072C6FBB934AF5A42275CDE73FC977D995","2FC374607C2DF285634B67C64A2E356C607091C3","12E618C3C6E97495AAECF2AC12DEB082353241C6","3727DD3E564B6055387425027AD74C58784ACC15","CBCC42ABED43A4B58FE3810E62AFFA010EB0349F"});
    AddFeature("mime_types_handler", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("minimum_chrome_version");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_HOSTED_APP,Manifest::TYPE_PLATFORM_APP});
    AddFeature("minimum_chrome_version", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("nacl_modules");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_HOSTED_APP,Manifest::TYPE_PLATFORM_APP});
    AddFeature("nacl_modules", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("name");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_HOSTED_APP,Manifest::TYPE_PLATFORM_APP,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_THEME,Manifest::TYPE_SHARED_MODULE});
    AddFeature("name", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("oauth2");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    AddFeature("oauth2", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("oauth2.auto_approve");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_PLATFORM_APP});
    feature->set_allowlist({"F57FDBA2822F21B82A4C417405ABC51241CC6426","C41AD9DCD670210295614257EF8C9945AD68D86E","64291898C201DAF15B090EC4B9EC270BEB6BE6FF","4B1D0E19C6C43C008C44A8278C8B5BFE15ABEB3C","F7FA7ABC1ECB89BA8EE6656847EFABBF43BB9BCA","07BD6A765FFC289FF755D7CAB2893A40EC337FEC","896B85CC7E913E11C34892C1425A093C0701D386","11A01C82EF355E674E4F9728A801F5C3CB40D83F","F410C88469990EE7947450311D24B8AF2ADB2595","A8208CCC87F8261AFAEB6B85D5E8D47372DDEA6B","A4577D8C2AF4CF26F40CBCA83FFA4251D6F6C8F8","EFCF5358672FEE04789FD2EC3638A67ADEDB6C8C"});
    AddFeature("oauth2.auto_approve", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("offline_enabled");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_HOSTED_APP,Manifest::TYPE_PLATFORM_APP});
    AddFeature("offline_enabled", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("omnibox");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    AddFeature("omnibox", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("optional_permissions");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_HOSTED_APP,Manifest::TYPE_PLATFORM_APP});
    AddFeature("optional_permissions", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("options_page");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_HOSTED_APP});
    AddFeature("options_page", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("options_ui");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    AddFeature("options_ui", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("page_action");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION});
    AddFeature("page_action", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("permissions");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_HOSTED_APP,Manifest::TYPE_PLATFORM_APP});
    AddFeature("permissions", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("platforms");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_HOSTED_APP,Manifest::TYPE_PLATFORM_APP,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_THEME,Manifest::TYPE_SHARED_MODULE});
    AddFeature("platforms", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("requirements");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_HOSTED_APP,Manifest::TYPE_PLATFORM_APP});
    AddFeature("requirements", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("sandbox");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_PLATFORM_APP,Manifest::TYPE_LEGACY_PACKAGED_APP});
    feature->set_min_manifest_version(2);
    AddFeature("sandbox", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("short_name");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_HOSTED_APP,Manifest::TYPE_PLATFORM_APP,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_THEME,Manifest::TYPE_SHARED_MODULE});
    AddFeature("short_name", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("signature");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_HOSTED_APP,Manifest::TYPE_PLATFORM_APP,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_THEME,Manifest::TYPE_SHARED_MODULE});
    AddFeature("signature", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("sockets");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    AddFeature("sockets", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("spellcheck");
    feature->set_channel(version_info::Channel::DEV);
    feature->set_extension_types({Manifest::TYPE_EXTENSION});
    AddFeature("spellcheck", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("storage");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
    feature->set_min_manifest_version(2);
    AddFeature("storage", feature);
  }
  {
    std::vector<Feature*> features;
    {
      ManifestFeature* feature = new ManifestFeature();
      feature->set_name("system_indicator");
      feature->set_channel(version_info::Channel::DEV);
      feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_PLATFORM_APP});
      features.push_back(feature);
    }
    {
      ManifestFeature* feature = new ManifestFeature();
      feature->set_name("system_indicator");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_PLATFORM_APP});
      feature->set_allowlist({"F29716B08705C9D3C12CDFE3F638BAE709570C31","53041A2FA309EECED01FFC751E7399186E860B2C","312745D9BF916161191143F6490085EEA0434997","A74A4D44C7CFCD8844830E6140C8D763E12DD8F3","E7E2461CE072DF036CF9592740196159E2D7C089","49DA0B9CCEEA299186C6E7226FD66922D57543DC"});
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("system_indicator");
    AddFeature("system_indicator", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("theme");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_THEME});
    AddFeature("theme", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("tts_engine");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP});
    AddFeature("tts_engine", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("update_url");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_HOSTED_APP,Manifest::TYPE_PLATFORM_APP,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_THEME,Manifest::TYPE_SHARED_MODULE});
    AddFeature("update_url", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("url_handlers");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_HOSTED_APP,Manifest::TYPE_PLATFORM_APP});
    AddFeature("url_handlers", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("usb_printers");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    AddFeature("usb_printers", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("version");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_HOSTED_APP,Manifest::TYPE_PLATFORM_APP,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_THEME,Manifest::TYPE_SHARED_MODULE});
    AddFeature("version", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("version_name");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_HOSTED_APP,Manifest::TYPE_PLATFORM_APP,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_THEME,Manifest::TYPE_SHARED_MODULE});
    AddFeature("version_name", feature);
  }
  {
    std::vector<Feature*> features;
    {
      ManifestFeature* feature = new ManifestFeature();
      feature->set_name("web_accessible_resources");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_EXTENSION,Manifest::TYPE_LEGACY_PACKAGED_APP,Manifest::TYPE_HOSTED_APP});
      features.push_back(feature);
    }
    {
      ManifestFeature* feature = new ManifestFeature();
      feature->set_name("web_accessible_resources");
      feature->set_channel(version_info::Channel::STABLE);
      feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
      feature->set_location(SimpleFeature::COMPONENT_LOCATION);
      features.push_back(feature);
    }
    ComplexFeature* feature(new ComplexFeature(&features));
    feature->set_name("web_accessible_resources");
    AddFeature("web_accessible_resources", feature);
  }
  {
    ManifestFeature* feature = new ManifestFeature();
    feature->set_name("webview");
    feature->set_channel(version_info::Channel::STABLE);
    feature->set_extension_types({Manifest::TYPE_PLATFORM_APP});
    feature->set_min_manifest_version(2);
    AddFeature("webview", feature);
  }
}

ManifestFeatureProvider::~ManifestFeatureProvider() {}

}  // namespace extensions