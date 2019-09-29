class tfw_ilbe_whip_Base: tfw_ilbe_Base {
    displayName = "[ILBE] RT-1523G (ASIP) + Whip Antenna";
    descriptionShort = "RT-1523G (ASIP) + Whip Antenna (15km)";
    tf_range = 15000;   // low range, extended gives 25km
};

class tfw_ilbe_whip_wd: tfw_ilbe_whip_Base {
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    displayName = "[ILBE] RT-1523G (ASIP) + Whip Antenna (MARPAT-WD)";
    picture = "y\tfw_radios\addons\ilbe\data\icons\ilbe_icon.paa";
    hiddenSelectionsTextures[] = {"y\tfw_radios\addons\ilbe\data\model\ilbe_co.paa"};
};

class tfw_ilbe_whip_d: tfw_ilbe_whip_Base {
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    displayName = "[ILBE] RT-1523G (ASIP) + Whip Antenna (MARPAT-D)";
    picture = "y\tfw_radios\addons\ilbe\data\icons\ilbe_icon_d.paa";
    hiddenSelectionsTextures[] = {"y\tfw_radios\addons\ilbe\data\model\ilbe_d_co.paa"};
};
class tfw_ilbe_whip_coy: tfw_ilbe_whip_Base {
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    displayName = "[ILBE] RT-1523G (ASIP) + Whip Antenna (Coyote)";
    picture = "y\tfw_radios\addons\ilbe\data\icons\ilbe_icon_coy.paa";
    hiddenSelectionsTextures[] = {"y\tfw_radios\addons\ilbe\data\model\ilbe_coy_co.paa"};
};
class tfw_ilbe_whip_gr: tfw_ilbe_whip_Base {
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    displayName = "[ILBE] RT-1523G (ASIP) + Whip Antenna (Green)";
    picture = "y\tfw_radios\addons\ilbe\data\icons\ilbe_icon_gr.paa";
    hiddenSelectionsTextures[] = {"y\tfw_radios\addons\ilbe\data\model\ilbe_gr_co.paa"};
};
