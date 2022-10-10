#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

#include "\a3\ui_f\hpp\defineDIKCodes.inc"

ADDON = true;

[
    "ILBE_satcom_gain", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "ILBE Satcom Gain", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "ILBE", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [1, 1000, 4, 0], // data for this setting: [min, max, default, number of shown trailing decimals]
    nil // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
] call CBA_fnc_addSetting;
