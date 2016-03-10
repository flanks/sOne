#include "..\..\script_macros.hpp"
/*
    File: fn_playerSkins.sqf
    Author: Daniel Stuart

    Description:
    Sets skins for players by their side and uniform.
*/
switch(playerSide) do {
	case civilian: {
		if(EQUAL(LIFE_SETTINGS(getNumber,"civ_skins"),1)) then {
			if(uniform player == "U_C_Poloshirt_blue") then {
				player setObjectTextureGlobal [0, "textures\civ\clothing\civdefault.jpg"];
			};
			 if(uniform player == "U_C_Poloshirt_burgundy") then {
				player setObjectTextureGlobal [0, "textures\civ\clothing\hmskin.jpg"];
			 };
			// if(uniform player == "U_C_Poloshirt_stripped") then {
				// player setObjectTextureGlobal [0, "textures\civilian_uniform_3.jpg"];
			// };		
			if (backpack player == "B_Carryall_cbr") then {backpackContainer player setObjectTextureGlobal [0, "textures\civ\clothing\kaelgraf2.jpg"];};
			if (backpack player == "B_Carryall_oucamo") then {backpackContainer player setObjectTextureGlobal [0, "textures\civ\clothing\kaelweed.jpg"];};
			if (backpack player == "B_Carryall_khk") then {backpackContainer player setObjectTextureGlobal [0, "textures\civ\clothing\koilblack.jpg"];};
			
		};
	};
	case west: {
		if(uniform player == "U_Rangemaster") then {
			player setObjectTextureGlobal [0, "textures\cop\clothing\arma_police_marke1.jpg"];
		};
		
		if(uniform player == "U_B_CombatUniform_mcam_worn") then {
			player setObjectTextureGlobal [0, "textures\cop\clothing\cop_uniform.jpg"];
		};
	};
	case independent: {
		if(uniform player == "U_Rangemaster") then {
			player setObjectTextureGlobal [0, "textures\medic\clothing\medic_uniform.paa"];
		};
	};
	
};
