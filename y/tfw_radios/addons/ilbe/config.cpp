#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		units[] = {
            "tfw_bladeItem",
            "tfw_whipItem",
            "tfw_ddItem",

            "tfw_ilbe_wd",
            "tfw_ilbe_d",
            "tfw_ilbe_coy",
            "tfw_ilbe_gr",

            "tfw_ilbe_a_wd",
            "tfw_ilbe_a_d",
            "tfw_ilbe_a_coy",
            "tfw_ilbe_a_gr",

            "tfw_ilbe_dd_wd",
            "tfw_ilbe_dd_d",
            "tfw_ilbe_dd_coy",
            "tfw_ilbe_dd_gr",

            "tfw_ilbe_blade_wd",
            "tfw_ilbe_blade_d",
            "tfw_ilbe_blade_coy",
            "tfw_ilbe_blade_gr"
        };
		weapons[] = {
            "tfw_blade",
            "tfw_whip",
            "tfw_dd"
        };
		requiredVersion = 1.0;
		requiredAddons[] = {
            "tfw_radios_main"
        };
		author = "Raspu";
		version = 1.1;
		versionStr = "1.1";
		versionAr[] = {1,1,0};
	};
};

#include "CfgFactionClasses.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"

#include "CfgFunctions.hpp"
