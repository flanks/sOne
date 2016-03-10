
 
/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "CUP_hgun_Makarov", "", 19500, 500 },
            { "CUP_hgun_Compact", "", 19500, -1 },
            { "CUP_hgun_Taurustracker455", "", 27500, -1 },
            { "CUP_hgun_PB6P9", "", 19500, -1 },
            { "CUP_hgun_Phantom", "", 19500, -1 },
            { "CUP_hgun_Duty", "", 19500, -1 }
        };
        mags[] = {
            { "CUP_8Rnd_9x18_Makarov_M", "Makarov Mag", 2000 },
            { "CUP_6Rnd_45ACP_M", "Tracker Mag", 2000 },
            { "CUP_8Rnd_9x18_Makarov_M", "P6P9 Mag" , 2000 },
            { "30Rnd_9x21_Mag", "", 500 },
			{ "CUP_10Rnd_9x19_Compact", "", 500 },	
        };
        accs[] = {
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "CUP_hgun_MicroUzi", "Uzi", 130000, 2500 },
            { "CUP_hgun_SA61", "", 130000, 5000 },
            { "CUP_smg_EVO", "", 250000, -1 },
            { "CUP_sgun_M1014", "", 280000, 7500 },
            { "hgun_ACPC2_F", "", 18500, -1 },
            { "hgun_PDW2000_F", "", 130000, -1 }
        };
        mags[] = {
            { "CUP_30rnd_9x19_UZI", "UZI Mag" , 2000 },
            { "CUP_10rnd_B_765x17_Bal_M", "SA61 10Rnd" , 2000 },
            { "CUP_20rnd_B_765x17_Bal_M", "SA61 20Rnd" , 3500 },
            { "CUP_8rnd_B_Beneli_74Pellets", "Shotgun 8Rnd" , 3500 },
                        { "30Rnd_9x21_Mag", "SMG Rnd", 2000, -1 },
                        { "9Rnd_45ACP_Mag", "ACP Rnd", 125 }
        };
        accs[] = {
        };
    };
        
        class boot {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "life_rebellevel", "SCALAR", 1, "You must be a whitelisted rebel!" };
        items[] = {
            { "arifle_TRG20_F", "", 30000, 2500 },
            { "hgun_PDW2000_snds_F", "", 80000, 2500 },
            { "arifle_SDAR_F", "", 30000, 7500 },
                        { "hgun_ACPC2_F", "", 17500, -1 },
            { "hgun_PDW2000_F", "", 80000, -1 },
                        { "hgun_Pistol_heavy_02_F", "", 15850, 7500 }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 300 },
                        { "30Rnd_9x21_Mag", "", 200, -1 },
            { "20Rnd_556x45_UW_mag", "", 125 },
                        { "9Rnd_45ACP_Mag", "", 125 },
                        { "6Rnd_45ACP_Cylinder", "", 500, -1 }
                        
        };
        accs[] = {
                        { "SmokeShell", "",500, -1 },
                        { "optic_MRCO", "",7000, -1 },
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 },
            { "optic_Hamr", "", 7500 },
            { "acc_flashlight", "", 1000 },
                        { "optic_Yorris", "", 500, -1 }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 9500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 15850, -1 },
            { "hgun_ACPC2_F", "", 17500, -1 },
            { "hgun_PDW2000_F", "", 80000, -1 },
                        { "SMG_02_F", "", 110000, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 950 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1 },
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 250, 35 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, -1 },
            { "ToolKit", "", 1250, 75 },
            { "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 10000, 980 },
            { "Chemlight_red", "", 1500, -1 },
            { "Chemlight_yellow", "", 1500, 50 },
            { "Chemlight_green", "", 1500, 50 },
            { "Chemlight_blue", "", 1500, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_sdar_F", "Taser Rifle", 20000, 7500 },
            { "hgun_P07_snds_F", "Stun Pistol", 2000, 650 },
            { "hgun_P07_F", "", 7500, 1500 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 1000, 450 },
            { "NVGoggles", "", 2000, 980 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 }
        };
        accs[] = {
            { "muzzle_snds_L", "", 650 }
        };
    };

    class cop_patrol {
        name = "Altis Patrol Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be a Patrol Officer Rank!" };
        items[] = {
            { "arifle_MK20C_plain_F", "", 35000, 7500 },
            { "SMG_02_ACO_F", "", 15000, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "MineDetector", "", 1000, 500 },
            { "acc_flashlight", "", 750, 100 },
            { "optic_Holosight", "", 1200, 275 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 130 },
            { "30Rnd_9x21_Mag", "", 250 }
        };
        accs[] = {
            { "acc_flashlight", "", 750 },
            { "optic_Holosight", "", 1200 },
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_L", "", 2750 }
        };
    };

    class cop_corporal {
        name = "Altis corporal Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant Rank!" };
        items[] = {
            { "hgun_ACPC2_F", "", 17500, -1 },
            { "arifle_MX_Black_F", "", 100000, 5000 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_65x39_caseless_mag", "", 100, -1 }
        };
        accs[] = {
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 },
                        { "optic_MRCO", "", 7000, -1 },
                        { "optic_DMS", "", 10000, -1 }
        };
    };
        
        class cop_sergeant {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 4, "You must be a Sergeant Rank!" };
        items[] = {
            { "hgun_ACPC2_F", "", 17500, -1 },
            { "arifle_MXC_Black_F", "", 150000, 5000 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_65x39_caseless_mag", "", 100, -1 }
        };
        accs[] = {
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 },
                        { "optic_MRCO", "", 7000, -1 },
                        { "optic_DMS", "", 10000, -1 },
                        { "optic_SOS", "", 10000, -1 }
        };
    };
        
        class cop_lieutenant {
        name = "Altis Lieutenant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 5, "You must be a Lieutenant Rank!" };
        items[] = {
            { "hgun_ACPC2_F", "", 17500, -1 },
            { "arifle_MXC_Black_F", "", 150000, 5000 },
                        { "srifle_DMR_06_camo_F", "", 250000, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_65x39_caseless_mag", "", 100, -1 },
                        { "20Rnd_762x51_Mag", "", 2000, -1 }
        };
        accs[] = {
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 },
                        { "muzzle_snds_B", "", 2750, -1 },
                        { "optic_MRCO", "", 7000, -1 },
                        { "optic_DMS", "", 10000, -1 },
                        { "optic_SOS", "", 10000, -1 }
        };
    };
        
        class cop_captain {
        name = "Altis Captain Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 5, "You must be a Captain Rank!" };
        items[] = {
            { "hgun_ACPC2_F", "", 17500, -1 },
            { "arifle_MXC_Black_F", "", 150000, 5000 },
                        { "arifle_MX_SW_Black_F", "", 230000, -1 },
                        { "srifle_DMR_06_camo_F", "", 250000, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_65x39_caseless_mag", "", 100, -1 },
                        { "20Rnd_762x51_Mag", "", 2000, -1 }
        };
        accs[] = {
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 },
                        { "muzzle_snds_B", "", 2750, -1 },
                        { "optic_MRCO", "", 7000, -1 },
                        { "optic_DMS", "", 10000, -1 },
                        { "optic_SOS", "", 10000, -1 }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 100, 45 },
            { "Binocular", "", 150, -1 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 500, 450 },
            { "NVGoggles", "", 1200, 980 }
        };
        mags[] = {};
        accs[] = {};
    };
};
