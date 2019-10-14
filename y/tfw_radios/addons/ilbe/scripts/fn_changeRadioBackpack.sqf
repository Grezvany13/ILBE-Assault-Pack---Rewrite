#include "script_component.hpp"

/*
  Name: tfw_radios_ilbe_fnc_changeRadioBackpack

  Author: Grezvany13
    Change the backpack model and exchange the antennas in the inventory.
    TFAR only: get the radio settings from the old backpack and put them on the new one
    ACRE only: exchange the ACRE antenna on the radio

  Arguments:
    0: _newBackpack     <STRING>    Which backpack object should be used.
    1: _newAntenna      <STRING>    Which antenna does this new backpack have.
    2: _currentAntenna  <STRING>    Which antenna is being removed.

  Return Value:
    None

  Example:
    call tfw_radios_ilbe_fnc_changeRadioBackpack;

  Public: No
*/

params ["_newBackpack", "_newAntenna", "_currentAntenna"];

if (isClass(configFile >> "CfgPatches" >> "task_force_radio")) then {
    //Store TFAR radio settings and active radio channel
    _settings = (call TFAR_fnc_activeLrRadio) call TFAR_fnc_getLrSettings;
    _channel = (call TFAR_fnc_ActiveLrRadio) call TFAR_fnc_getLrChannel;
};

removeBackpack player;
player addbackpack _newBackpack;

if (isClass(configFile >> "CfgPatches" >> "task_force_radio")) then {
    //Apply previously saved TFAR settings to the new backpack radio
    if (isClass(configFile >> "cfgPatches" >> "tfar_core")) then {
         [(call TFAR_fnc_ActiveLrRadio), _settings] call TFAR_fnc_setLrSettings;
     } else {
         [(call TFAR_fnc_ActiveLrRadio) select 0, (call TFAR_fnc_ActiveLrRadio) select 1, _settings] call TFAR_fnc_setLrSettings;
     };
    _settings set [0, _channel]; // sets the active channel to 2
};

if (isClass(configFile >> "CfgPatches" >> "acre_main")) then {
    _radioId = ["ACRE_PRC117F", [player]] call acre_api_fnc_getRadioByType;
    _hash = [] call acre_main_fnc_fastHashCreate;
    _antenna = ["TFW_Antenna", _newAntenna] joinString "_";
    _return = [_radioId, 0, _antenna, _hash, true] call acre_sys_components_fnc_attachSimpleComponent;
    systemChat format ["%1", [_radioId] call acre_sys_components_fnc_getAllConnectedComponents];
};

{player addItemToBackpack _x} forEach _items;
{player addMagazine _x} forEach _mags;

if (_currentAntenna != _newAntenna) then {
    player removeItem (["tfw", _newAntenna] joinString "_");
    player addItem (["tfw", _currentAntenna] joinString "_");
};


// --
// It would make more sense to have the animation start running before any code, however this seems
// to kill the animation due to the backpack change.
// --

// Select animation based on the current stance of the player (prone or kneeled)
_anim =  ["AinvPknlMstpSlayW[wpn]Dnon_medicOther", "AinvPpneMstpSlayW[wpn]Dnon_medicOther"] select (stance player == "PRONE");

// Adjust animation based on the current weapon of the player
private _wpn = ["non", "rfl", "lnr", "pst"] param [["", primaryWeapon player, secondaryWeapon player, handgunWeapon player] find currentWeapon player, "non"];
_anim = [_anim, "[wpn]", _wpn] call CBA_fnc_replace;

player playMoveNow _anim;

/*
// Play the animation globally
["playMoveNow", [player, _anim], player] call CBA_fnc_targetEvent;

if (animationState player != _anim) then {
    // Execute on all machines. SwitchMove has local effects.
    ["switchMove", [player, _anim]] call CBA_fnc_globalEvent;
};
*/
