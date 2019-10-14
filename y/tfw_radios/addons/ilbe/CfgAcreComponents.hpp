// include ACRE definitions
#include "\idi\acre\addons\sys_components\script_acre_component_defines.hpp"

class CfgAcreComponents {
    class ACRE_ComponentBase;

    class TFW_Antenna_base: ACRE_ComponentBase {
        type = ACRE_COMPONENT_ANTENNA;
        simple = true;
        polarization = VERTICAL_POLARIZE;
        heightAG = AVERAGE_MAN_HEIGHT;
        orient = 90; // in degrees off of flat plane
        name = "Default Antenna";
        shortName = "Default";
        connector = ACRE_CONNECTOR_TNC;
        height = 1.2; //meters
        binaryGainFile = "idi\acre\addons\sys_antenna\binary\Thales_100cm_Whip_gain.aba";
        compatibleRadios[] = {};
    };

    class TFW_Antenna_whip: TFW_Antenna_base {
        name = "VHF Whip Antenna Retracted";
        shortName = "1.23M VHF TNC";
        connector = ACRE_CONNECTOR_TNC;
        height = 1.23;
        binaryGainFile = "idi\acre\addons\sys_antenna\binary\Harris_123cm_Whip_gain.aba";       // 30-108 MHz
        compatibleRadios[] = {"ACRE_PRC117F"};
    };

    class TFW_Antenna_whipext: TFW_Antenna_base {
        name = "VHF Whip Antenna Extended";
        shortName = "1.23M VHF TNC";
        connector = ACRE_CONNECTOR_TNC;
        height = 1.23;
        binaryGainFile = "idi\acre\addons\sys_antenna\binary\Harris_123cm_Whip_gain.aba";       // 30-108 MHz
        compatibleRadios[] = {"ACRE_PRC117F"};
    };

    class TFW_Antenna_blade: TFW_Antenna_base {
        name = "Blade Antenna";
        shortName = "1.23M VHF TNC";
        connector = ACRE_CONNECTOR_TNC;
        height = 0.9;
        binaryGainFile = "idi\acre\addons\sys_antenna\binary\sem52_short_gain.aba";       // 30-108 MHz
        compatibleRadios[] = {"ACRE_PRC117F"};
    };

    class TFW_Antenna_dd: TFW_Antenna_base {
        name = "DD Antenna";
        shortName = "405mm UHF TNC";
        connector = ACRE_CONNECTOR_TNC;
        height = 0.405;
        binaryGainFile = "idi\acre\addons\sys_antenna\binary\sem52_short_gain.aba";       // 90-512 MHZ
        compatibleRadios[] = {"ACRE_PRC117F"};
    };

    // SATCOM
    // 240-400 MHZ
};
