class tfw_ilbe_blade_Base: tfw_ilbe_Base {
    displayName = "[ILBE] RT-1523G (ASIP) + VHF Blade Antenna";
    descriptionShort = "RT-1523G (ASIP) + Blade Antenna (18km)";
    model = "y\tfw_radios\addons\ilbe\data\model\blade\tfw_blade_ilbe.p3d";
    tf_range = 18000;       // medium antenna
};

class tfw_ilbe_blade_wd: tfw_ilbe_blade_Base {
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    displayName = "[ILBE] RT-1523G (ASIP) + VHF Blade Antenna (MARPAT-WD)";
    picture = "y\tfw_radios\addons\ilbe\data\icons\ilbe_icon.paa";
    hiddenSelectionsTextures[] = {"y\tfw_radios\addons\ilbe\data\model\ilbe_co.paa"};
};
class tfw_ilbe_blade_d: tfw_ilbe_blade_Base {
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    displayName = "[ILBE] RT-1523G (ASIP) + VHF Blade Antenna (MARPAT-D)";
    picture = "y\tfw_radios\addons\ilbe\data\icons\ilbe_icon_d.paa";
    hiddenSelectionsTextures[] = {"y\tfw_radios\addons\ilbe\data\model\ilbe_d_co.paa"};
};
class tfw_ilbe_blade_coy: tfw_ilbe_blade_Base {
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    displayName = "[ILBE] RT-1523G (ASIP) + VHF Blade Antenna (Coyote)";
    picture = "y\tfw_radios\addons\ilbe\data\icons\ilbe_icon_coy.paa";
    hiddenSelectionsTextures[] = {"y\tfw_radios\addons\ilbe\data\model\ilbe_coy_co.paa"};
};
class tfw_ilbe_blade_gr: tfw_ilbe_blade_Base {
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    displayName = "[ILBE] RT-1523G (ASIP) + VHF Blade Antenna (Green)";
    picture = "y\tfw_radios\addons\ilbe\data\icons\ilbe_icon_gr.paa";
    hiddenSelectionsTextures[] = {"y\tfw_radios\addons\ilbe\data\model\ilbe_gr_co.paa"};
};
