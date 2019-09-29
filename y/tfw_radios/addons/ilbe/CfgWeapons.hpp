class CfgWeapons {
	class ItemCore;
	class InventoryItem_Base_F;
	class tfw_ItemCore: ItemCore {
		type = 131072;
		detectRange = -1;
		simulation = "ItemMineDetector";
	};
	class tfw_blade: tfw_ItemCore {
		author = "Raspu";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		model = "y\tfw_radios\addons\ilbe\data\model\blade\tfw_blade_item_90.p3d";
		picture = "\y\tfw_radios\addons\ilbe\data\icons\icon_blade.paa";
		//editorPreview = "\y\tfw_radios\addons\ilbe\data\editorui\blade.jpg";
		displayName = "VHF Blade Antenna";
		class ItemInfo: InventoryItem_Base_F {
			mass = 10;
		};
	};
	class tfw_dd: tfw_ItemCore {
		author = "Raspu";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		model = "y\tfw_radios\addons\ilbe\data\model\dd\tfw_dd_item_90.p3d";
		picture = "\y\tfw_radios\addons\ilbe\data\icons\icon_dd.paa";
		//editorPreview = "\y\tfw_radios\addons\ilbe\data\editorui\dd.jpg";
		displayName = "VHF/ UHF Antenna";
		class ItemInfo: InventoryItem_Base_F {
			mass = 10;
		};
	};
	class tfw_whip: tfw_ItemCore {
		author = "Raspu";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		model = "y\tfw_radios\addons\ilbe\data\model\whip\tfw_whip_item_90.p3d";
		picture = "\y\tfw_radios\addons\ilbe\data\icons\icon_whip.paa";
		//editorPreview = "\y\tfw_radios\addons\ilbe\data\editorui\whip.jpg";
		displayName = "VHF Whip Antenna";
		class ItemInfo: InventoryItem_Base_F {
			mass = 10;
		};
	};
};
