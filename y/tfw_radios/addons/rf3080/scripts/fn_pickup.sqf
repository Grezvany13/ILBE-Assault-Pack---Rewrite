#include "script_component.hpp"

/*
  Name: tfw_radios_rf3080_fnc_pickup

  Author: Grezvany13
    Pickup the SATCOM antenna and put it in the inventory

  Arguments:
    0: _unit    <OBJECT>    The unit which picks up the SATCOM antenna
    1: _rf3080  <OBJECT>    The SATCOM antenna object (object)

  Return Value:
    None

  Example:
    [player, "tfw_rf3080Object"] call tfw_radios_rf3080_fnc_pickup;

  Public: No
*/

params ["_unit", "_rf3080"];

// deleteVehicle rf3080trigger;
// player setVariable ['tf_sendingDistanceMultiplicator', 1.0];

if ((_unit call CBA_fnc_getUnitAnim) select 0 == "stand") then {
    _unit playMove "AmovPercMstpSrasWrflDnon_diary";
};

[{
    params ["_unit", "_rf3080"];

    if (isNull _rf3080) exitWith {};

    deleteVehicle _rf3080;

    _unit addItem "tfw_rf3080Item";
}, [_unit, _rf3080], 1] call cba_fnc_waitAndExecute;
