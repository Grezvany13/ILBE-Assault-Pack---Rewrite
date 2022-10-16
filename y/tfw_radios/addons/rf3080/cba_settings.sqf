[
    QGVAR(gain),				// Unique setting name. Matches resulting variable name <STRING>
    "SLIDER",					// Type of setting. Can be "CHECKBOX", "EDITBOX", "LIST", "SLIDER" or "COLOR" <STRING>
    "ILBE Satcom Gain",			// Display name or display name + tooltip (optional, default: same as setting name) <STRING, ARRAY>
    [QUOTE(ILBE_TAG), "Satcom"],	// Category for the settings menu + optional sub-category <STRING, ARRAY>
    [1, 1000, 4, 0],			// Extra properties of the setting depending of _settingType. See examples below <ANY>
    2,							// 1: all clients share the same setting, 2: setting can't be overwritten (optional, default: 0) <BOOL, NUMBER>
    {},							// Script to execute when setting is changed. (optional) <CODE>
	false						// Setting will be marked as needing mission restart after being changed. (optional, default false) <BOOL>
] call CBA_settings_fnc_init;