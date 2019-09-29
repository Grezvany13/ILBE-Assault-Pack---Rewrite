class tfw_ilbe_whipext_Base: tfw_ilbe_Base {
    scope = 1;
    displayName = "[ILBE] RT-1523G (ASIP) + Whip Antenna Extended";
    descriptionShort = "RT-1523G (ASIP) + extended Whip Antenna (25km)";
    model = "y\tfw_radios\addons\ilbe\data\model\antenna\tfw_ilbe_ant.p3d";
    tf_range = 25000;       // extended whip antenna
};

class tfw_ilbe_whipext_wd: tfw_ilbe_whipext_Base {
    displayName = "[ILBE] RT-1523G (ASIP) + Whip Antenna Extended (MARPAT-WD)";
    picture = "y\tfw_radios\addons\ilbe\data\icons\ilbe_icon.paa";
    hiddenSelectionsTextures[] = {"y\tfw_radios\addons\ilbe\data\model\ilbe_co.paa"};
};
class tfw_ilbe_whipext_d: tfw_ilbe_whipext_Base {
    displayName = "[ILBE] RT-1523G (ASIP) + Whip Antenna Extended (MARPAT-D)";
    picture = "y\tfw_radios\addons\ilbe\data\icons\ilbe_icon_d.paa";
    hiddenSelectionsTextures[] = {"y\tfw_radios\addons\ilbe\data\model\ilbe_d_co.paa"};
};
class tfw_ilbe_whipext_coy: tfw_ilbe_whipext_Base {
    displayName = "[ILBE] RT-1523G (ASIP) + Whip Antenna Extended (Coyote)";
    picture = "y\tfw_radios\addons\ilbe\data\icons\ilbe_icon_coy.paa";
    hiddenSelectionsTextures[] = {"y\tfw_radios\addons\ilbe\data\model\ilbe_coy_co.paa"};
};
class tfw_ilbe_whipext_gr: tfw_ilbe_whipext_Base {
    displayName = "[ILBE] RT-1523G (ASIP) + Whip Antenna Extended (Green)";
    picture = "y\tfw_radios\addons\ilbe\data\icons\ilbe_icon_gr.paa";
    hiddenSelectionsTextures[] = {"y\tfw_radios\addons\ilbe\data\model\ilbe_gr_co.paa"};
};
