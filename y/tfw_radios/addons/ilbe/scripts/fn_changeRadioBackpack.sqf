/*
  Name: tfw_radios_ilbe_fnc_changeRadioBackpack

  Author: Grezvany13
    Checks if it's possible to change the current backpack to the retracted Whip Antenna variant

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

//Store TFAR radio settings and active radio channel
_settings = (call TFAR_fnc_activeLrRadio) call TFAR_fnc_getLrSettings;
_channel = (call TFAR_fnc_ActiveLrRadio) call TFAR_fnc_getLrChannel;

removeBackpack player;
player addbackpack  _newBackpack;

//Apply previously saved TFAR settings to the new backpack radio
if (isClass(configFile >> "cfgPatches" >> "tfar_core")) then {
     [(call TFAR_fnc_ActiveLrRadio), _settings] call TFAR_fnc_setLrSettings;
 } else {
     [(call TFAR_fnc_ActiveLrRadio) select 0, (call TFAR_fnc_ActiveLrRadio) select 1, _settings] call TFAR_fnc_setLrSettings;
 };
_settings set [0, _channel]; // sets the active channel to 2

{player addItemToBackpack _x} forEach _items;
{player addMagazine _x} forEach _mags;

if (_currentAntenna != _newAntenna) then {
    player removeItem (["tfw", _newAntenna] joinString "_");
    player addItem (["tfw", _currentAntenna] joinString "_");
};

player playAction "medicStop";
