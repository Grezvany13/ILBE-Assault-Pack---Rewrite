class tfw_ilbe_DD_Base: tfw_ilbe_Base {
    displayName = "[ILBE] RT-1523G (ASIP) + VHF/ UHF Antenna";
    descriptionShort = "RT-1523G (ASIP) + VHF/ UHF Antenna (15km)";
    model = "y\tfw_radios\addons\ilbe\data\model\dd\tfw_dd_ilbe.p3d";
    tf_range = 15000;       // short antenna
};

class tfw_ilbe_DD_wd: tfw_ilbe_DD_Base {
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    displayName = "[ILBE] RT-1523G (ASIP) + VHF/ UHF Antenna (MARPAT-WD)";
    picture = "y\tfw_radios\addons\ilbe\data\icons\ilbe_icon.paa";
    hiddenSelectionsTextures[] = {"y\tfw_radios\addons\ilbe\data\model\ilbe_co.paa"};
};
class tfw_ilbe_DD_d: tfw_ilbe_DD_Base {
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    displayName = "[ILBE] RT-1523G (ASIP) + VHF/ UHF Antenna (MARPAT-D)";
    picture = "y\tfw_radios\addons\ilbe\data\icons\ilbe_icon_d.paa";
    hiddenSelectionsTextures[] = {"y\tfw_radios\addons\ilbe\data\model\ilbe_d_co.paa"};
};
class tfw_ilbe_DD_coy: tfw_ilbe_DD_Base {
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    displayName = "[ILBE] RT-1523G (ASIP) + VHF/ UHF Antenna (Coyote)";
    picture = "y\tfw_radios\addons\ilbe\data\icons\ilbe_icon_coy.paa";
    hiddenSelectionsTextures[] = {"y\tfw_radios\addons\ilbe\data\model\ilbe_coy_co.paa"};
};
class tfw_ilbe_DD_gr: tfw_ilbe_DD_Base {
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    displayName = "[ILBE] RT-1523G (ASIP) + VHF/ UHF Antenna (Green)";
    picture = "y\tfw_radios\addons\ilbe\data\icons\ilbe_icon_gr.paa";
    hiddenSelectionsTextures[] = {"y\tfw_radios\addons\ilbe\data\model\ilbe_gr_co.paa"};
};
