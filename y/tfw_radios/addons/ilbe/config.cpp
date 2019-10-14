#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		units[] = {
            "tfw_bladeItem",
            "tfw_whipItem",
            "tfw_ddItem"
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

#include "CfgAcreComponents.hpp"

#include "CfgFactionClasses.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"

#include "CfgFunctions.hpp"
