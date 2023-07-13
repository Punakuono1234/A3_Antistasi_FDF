#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {"rk62mod3"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {QDOUBLES(PREFIX,core), "A3_Characters_F","A3_Weapons_F_Enoch_Rifles_AK12"};
        author = AUTHOR;
        authors[] = { AUTHORS };
        authorUrl = "";
        VERSION_CONFIG;
    };
};

class A3A {
    #include "Templates.hpp"
};

class cfgVehicles {
	class SoldierGB;
	class I_G_Soldier_base_F : SoldierGB {
		genericNames = "ffp_finnish_names"; 	
	};
};

class cfgWeapons {
	class arifle_AK12_lush_F;
	class rk62mod3 : arifle_AK12_lush_F {
		displayname="RK62 Mod 3";
		descriptionshort="RK62 Mod 3";
		displaynameshort="RK62 Mod 3";
	};
};

class cfgMarkerClasses
{
		class a3_antistasi_fdf_marker_flags
		{
			displayName="Custom flags";
		};
};

class cfgMarkers {
	class flag_Russia;
	class flag_Wagner : flag_Russia {
		name="Wagner flag";
		icon=QPATHTOFOLDER(data\wagner_logo_alter.paa);
		texture=QPATHTOFOLDER(data\wagner_flag.paa);
		color[]={1,1,1,1};
		markerClass="a3_antistasi_fdf_marker_flags";
	};
};