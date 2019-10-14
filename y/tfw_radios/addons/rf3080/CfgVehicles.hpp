class CBA_Extended_EventHandlers;

class CfgVehicles {
	class Man;
	class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
    			class tfw_radios_rf3080_place {
    				displayName = "Place SATCOM Antenna";
    				condition = "'tfw_rf3080Item' in (items player + assignedItems player)";
    				statement = "[_player, 'tfw_rf3080Item'] call tfw_radios_rf3080_fnc_place";
    				showDisabled = 0;
    				priority = 2;
    				icon = "\y\tfw_radios\addons\rf3080\data\icons\interact_icon.paa";
    			};
            };
		};
	};

	class Item_Base_F;
	class tfw_rf3080: Item_Base_F {
		author[] = {"Raspu"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "SATCOM Antenna";
		descriptionShort = "RF-3080-AT001";
		editorPreview = "";
		vehicleClass = "Items";
		class TransportItems {
			class _xx_tfw_rf3080Item {
				name = "tfw_rf3080Item";
				count = 1;
			};
		};
	};

	class ThingX;
	class tfw_rf3080Object: ThingX {
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0,1.2,0};
		ace_dragging_dragDirection = 0;
		ace_dragging_cancarry = 1;
		ace_dragging_carryposition[] = {0,1.2,0};
		ace_dragging_carrydirection = 0;
		scope = 2;
		displayName = "SATCOM Antenna";
		model = "\y\tfw_radios\addons\rf3080\data\model\tfw_rf3080.p3d";
		editorPreview = "";
		class ACE_Actions {
			class ACE_MainActions {
				selection = "ace_interaction";
				distance = 5;
				condition = 1;
				class ACE_Pickup {
					selection = "";
					displayName = "Pickup SATCOM Antenna";
					distance = 5;
					condition = 1;
					statement = QUOTE([_player, _target] call FUNC(pickup));
					showDisabled = 0;
					exceptions[] = {};
					priority = 5;
					icon = "\y\tfw_radios\addons\rf3080\data\icons\interact_icon.paa";
				};

                class ACRE_connect {
                    selection = "";
                    displayName = "Connect";
                    distance = 10;
                    condition = "(isClass(configFile >> 'CfgPatches' >> 'acre_main')) && {!([_player,_target] call acre_sys_gsa_fnc_isAntennaConnected)}";
                    statement = QUOTE(true);
                    insertChildren = "[_player,_target] call acre_sys_gsa_fnc_connectChildrenActions";
                    showDisabled = 0;
                    exceptions[] = {};
                    priority = 5;
                    icon = "\idi\acre\addons\ace_interact\data\icons\antenna.paa";
                };
                class ACRE_disconnect {
                    selection = "";
                    displayName = "Disconnect";
                    distance = 10;
                    condition = "(isClass(configFile >> 'CfgPatches' >> 'acre_main')) && {[_player,_target] call acre_sys_gsa_fnc_isAntennaConnected}";
                    statement = "[_player,_target] call acre_sys_gsa_fnc_disconnect";
                    showDisabled = 0;
                    exceptions[] = {};
                    priority = 5;
                    icon = "\idi\acre\addons\ace_interact\data\icons\antenna.paa";
                };
			};
		};
        class AcreComponents {
            componentName = "ACRE_643CM_VHF_TNC";
            mountedAntenna = "";
            mastMount[] = {};
        };
	};
};
