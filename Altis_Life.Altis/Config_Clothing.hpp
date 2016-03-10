/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        4: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Poloshirt_stripped", "Poloshirt stripped", 125, { "", "", -1 } },
            { "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 150, { "", "", -1 } },
            { "U_C_Poloshirt_salmon", "Poloshirt Salmon", 175, { "", "", -1 } },
            { "U_C_Poloshirt_blue", "Poloshirt Blue", 250, { "", "", -1 } },
            { "U_C_Poor_2", "Rag tagged clothes", 250, { "", "", -1 } },
            { "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 275, { "", "", -1 } },
            { "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 350, { "", "", -1 } },
            { "TRYK_U_B_Denim_T_WH", "Jeans & T-Shirt 1", 450, { "", "", -1 } },
            { "TRYK_U_B_Denim_T_BK", "Jeans & T-Shirt 2", 450, { "", "", -1 } },
            { "TRYK_U_B_BLK_T_WH", "Jeans & T-Shirt 3", 450, { "", "", -1 } },
            { "TRYK_U_B_BLK_T_BK", "Jeans & T-Shirt 4", 450, { "", "", -1 } },
            { "TRYK_U_B_RED_T_BR", "Jeans & T-Shirt 5", 450, { "", "", -1 } },
            { "TRYK_U_B_Denim_T_BG_WH", "Jeans & T-Shirt + Gloves 1", 500, { "", "", -1 } },
            { "TRYK_U_B_Denim_T_BG_BK", "Jeans & T-Shirt + Gloves 2", 500, { "", "", -1 } },
            { "TRYK_U_B_BLK_T_BG_WH", "Jeans & T-Shirt + Gloves 3", 500, { "", "", -1 } },
            { "TRYK_U_B_RED_T_BG_BR", "Jeans & T-Shirt + Gloves 4", 500, { "", "", -1 } },
            { "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, { "", "", -1 } },
            { "TRYK_OVERALL_flesh", "Overall 1", 650, { "", "", -1 } },
            { "TRYK_OVERALL_nok_flesh", "Overall 2", 650, { "", "", -1 } },
            { "TRYK_OVERALL_SAGE_BLKboots", "Overall 3", 650, { "", "", -1 } },
            { "TRYK_OVERALL_SAGE_BLKboots_nk_blk", "Overall 4", 650, { "", "", -1 } },
            { "TRYK_OVERALL_SAGE_BLKboots_nk", "Overall 5", 650, { "", "", -1 } },
            { "TRYK_OVERALL_SAGE_BLKboots_nk_blk2", "Overall 6", 650, { "", "", -1 } },
            { "TRYK_OVERALL_SAGE", "Overall 7", 650, { "", "", -1 } },
            { "TRYK_U_B_wh_tan_Rollup_CombatUniform", "Hiking Outfit 1", 650, { "", "", -1 } },
            { "TRYK_U_B_wh_OD_Rollup_CombatUniform", "Hiking Outfit 2", 650, { "", "", -1 } },
            { "TRYK_U_B_wh_blk_Rollup_CombatUniform", "Hiking Outfit 3", 650, { "", "", -1 } },
            { "TRYK_U_B_BLK_tan_Rollup_CombatUniform", "Hiking Outfit 4", 650, { "", "", -1 } },
            { "TRYK_U_B_BLK_OD_Rollup_CombatUniform", "Hiking Outfit 5", 650, { "", "", -1 } },
            { "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, { "", "", -1 } },
            { "U_OrestesBody", "Surfing On Land", 1100, { "", "", -1 } },
            { "U_IG_Guerilla2_3", "The Outback Rangler", 1200, { "", "", -1 } },
            { "U_C_HunterBody_grn", "The Hunters Look", 1500, { "", "", -1 } },
            { "U_C_WorkerCoveralls", "Mechanic Coveralls", 2500, { "", "", -1 } },
            { "U_NikosAgedBody", "Casual Wears", 5000, { "", "", -1 } },
            { "TRYK_U_B_fleece", "Casual Fleece 1", 5000, { "", "", -1 } },
            { "TRYK_U_B_fleece_UCP", "Casual Fleece 2", 5000, { "", "", -1 } },
            { "TRYK_U_B_UCP_PCUs", "Casual Jacket 1", 5000, { "", "", -1 } },
            { "TRYK_U_B_GRY_PCUs", "Casual Jacket 2", 5000, { "", "", -1 } },
            { "TRYK_U_B_Wood_PCUs", "Casual Jacket 3", 5000, { "", "", -1 } },
            { "TRYK_U_B_PCUs", "Casual Jacket 4", 5000, { "", "", -1 } },
            { "TRYK_U_B_UCP_PCUs_R", "Casual Jacket 1 Rolled up", 5000, { "", "", -1 } },
            { "TRYK_U_B_GRY_PCUs_R", "Casual Jacket 2 Rolled up", 5000, { "", "", -1 } },
            { "TRYK_U_B_Wood_PCUs_R", "Casual Jacket 3 Rolled up", 5000, { "", "", -1 } },
            { "TRYK_U_B_PCUs_R", "Casual Jacket 4 Rolled up", 5000, { "", "", -1 } },
            { "TRYK_U_B_PCUGs", "Casual Jacket 5", 5000, { "", "", -1 } },
            { "TRYK_U_B_PCUOGs", "Casual Jacket 6", 5000, { "", "", -1 } },
            { "TRYK_U_B_PCUGs_gry", "Casual Jacket 7", 5000, { "", "", -1 } },
            { "TRYK_U_B_PCUGs_BLK", "Casual Jacket 8", 5000, { "", "", -1 } },
            { "TRYK_U_B_PCUGs_OD", "Casual Jacket 9", 5000, { "", "", -1 } },
            { "TRYK_U_pad_j", "Casual Jersey 1", 5000, { "", "", -1 } },
            { "TRYK_U_pad_j_BLK", "Casual Jersey 2", 5000, { "", "", -1 } },
            { "TRYK_U_pad_hood_CL", "Casual Hoodie 1", 5000, { "", "", -1 } },
            { "TRYK_U_pad_hood_CL_blk", "Casual Hoodie 2", 5000, { "", "", -1 } },
            { "TRYK_U_pad_hood_tan", "Casual Hoodie 3", 5000, { "", "", -1 } },
            { "TRYK_U_pad_hood_blk", "Casual Hoodie 4", 5000, { "", "", -1 } },
            { "TRYK_U_pad_hood_CSATBlk", "Casual Hoodie 5", 5000, { "", "", -1 } },
            { "TRYK_U_pad_hood_blod", "Casual Hoodie 6", 5000, { "", "", -1 } },
            { "TRYK_U_pad_hood_odBK", "Casual Hoodie 7", 5000, { "", "", -1 } },
            { "TRYK_U_pad_hood_BKT2", "Casual Hoodie 8", 5000, { "", "", -1 } },
            { "TRYK_hoodie_Blk", "Casual Hoodie 9", 5000, { "", "", -1 } },
            { "TRYK_hoodie_FR", "Casual Hoodie 10", 5000, { "", "", -1 } },
            { "TRYK_hoodie_Wood", "Casual Hoodie 11", 5000, { "", "", -1 } },
            { "TRYK_hoodie_3c", "Casual Hoodie 12", 5000, { "", "", -1 } },
            { "TRYK_T_camo_tan", "Casual T-Shirt 1", 5000, { "", "", -1 } },
            { "TRYK_T_camo_3c", "Casual T-Shirt 2", 5000, { "", "", -1 } },
            { "TRYK_T_camo_Wood", "Casual T-Shirt 3", 5000, { "", "", -1 } },
            { "TRYK_T_camo_Wood_marpat", "Casual T-Shirt 4", 5000, { "", "", -1 } },
            { "TRYK_T_camo_Desert_marpat", "Casual T-Shirt 5", 5000, { "", "", -1 } },
            { "TRYK_T_camo_3c_BG", "Casual T-Shirt 6", 5000, { "", "", -1 } },
            { "TRYK_T_camo_Wood_BG", "Casual T-Shirt 7", 5000, { "", "", -1 } },
            { "TRYK_T_camo_Wood_marpat_BG", "Casual T-Shirt 8", 5000, { "", "", -1 } },
            { "TRYK_T_camo_desert_marpat_BG", "Casual T-Shirt 9", 5000, { "", "", -1 } },
            { "TRYK_T_camo_desert_marpat_BG", "Casual T-Shirt 10", 5000, { "", "", -1 } },
            { "TRYK_SUITS_BLK_F", "Tailored Suit Black", 25000, { "", "", -1 } },
            { "TRYK_SUITS_BR_F", "Tailored Suit Brown", 25000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Bandanna_camo", "Camo Bandanna", 120, { "", "", -1 } },
			{ "H_Bandanna_surfer", "Surfer Bandanna", 130, { "", "", -1 } },
			{ "H_Bandanna_gry", "Grey Bandanna", 150, { "", "", -1 } },
			{ "H_Bandanna_cbr", "", 165, { "", "", -1 } },
			{ "H_Bandanna_surfer", "", 135, { "", "", -1 } },
			{ "H_Bandanna_khk", "Khaki Bandanna", 145, { "", "", -1 } },
			{ "H_Bandanna_sgg", "Sage Bandanna", 160, { "", "", -1 } },
			{ "H_StrawHat", "Straw Fedora", 225, { "", "", -1 } },
			{ "H_BandMask_blk", "Hat & Bandanna", 300, { "", "", -1 } },
			{ "H_Booniehat_tan", "", 425, { "", "", -1 } },
			{ "H_TurbanO_blk", "", 425, { "", "", -1 } },
			{ "H_Hat_camo", "", 425, { "", "", -1 } },
			{ "H_Hat_blue", "", 310, { "", "", -1 } },
			{ "H_Hat_brown", "", 276, { "", "", -1 } },
			{ "H_Hat_checker", "", 340, { "", "", -1 } },
			{ "H_Hat_grey", "", 280, { "", "", -1 } },
			{ "H_Hat_tan", "", 265, { "", "", -1 } },
			{ "H_Cap_blu", "", 150, { "", "", -1 } },
			{ "H_Cap_grn", "", 150, { "", "", -1 } },
			{ "H_Cap_grn_BI", "", 150, { "", "", -1 } },
			{ "H_Cap_oli", "", 150, { "", "", -1 } },
			{ "H_Cap_red", "", 150, { "", "", -1 } },
			{ "H_Cap_blk_ION", "", 150, { "", "", -1 } },
			{ "H_Cap_khaki_specops_UK", "", 150, { "", "", -1 } },
			{ "H_Cap_brn_SPECOPS", "", 150, { "", "", -1 } },
			{ "H_Cap_blk_CMMG", "", 150, { "", "", -1 } },
			{ "H_Cap_blk", "", 150, { "", "", -1 } },
			{ "H_Cap_tan", "", 150, { "", "", -1 } },
			{ "TRYK_r_cap_blk", "", 150, { "", "", -1 } },
			{ "TRYK_r_cap_tan", "", 150, { "", "", -1 } },
			{ "TRYK_r_cap_od_us", "", 150, { "", "", -1 } },
			{ "TRYK_r_cap_blk_glasses", "", 250, { "", "", -1 } },
			{ "TRYK_r_cap_tan_glasses", "", 250, { "", "", -1 } },
			{ "TRYK_r_cap_od_glasses", "", 250, { "", "", -1 } },
			{ "TRYK_H_headsetcap_glasses", "", 250, { "", "", -1 } },
			{ "TRYK_H_headsetcap_blk_glasses", "", 250, { "", "", -1 } },
			{ "TRYK_H_headsetcap_od_glasses", "", 250, { "", "", -1 } },
			{ "mgsr_eyepatch", "", 50, { "", "", -1 } },
			{ "TRYK_H_DELTAHELM_NV", "", 7500, { "", "", -1 } },
			{ "TRYK_H_Bandana_H", "", 7500, { "", "", -1 } },
			{ "TRYK_H_Bandana_wig", "", 7500, { "", "", -1 } },
			{ "TRYK_H_Bandana_wig_g", "", 7500, { "", "", -1 } },
			{ "TRYK_H_wig", "", 7500, { "", "", -1 } },
			{ "TRYK_H_pakol2", "", 7500, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 20, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Shades_Green", "", 20, { "", "", -1 } },
            { "G_Shades_Red", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 25, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 25, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 25, { "", "", -1 } },
            { "G_Sport_Checkered", "", 25, { "", "", -1 } },
            { "G_Sport_Greenblack", "", 25, { "", "", -1 } },
            { "G_Sport_Red", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Squares", "", 50, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Combat", "", 750, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } },
            { "G_Balaclava_blk", "", 10000, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 500, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 2000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 2500, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_FieldPack_blk", "", 5000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 5000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 5000, { "", "", -1 } },
            { "B_Bergen_sgg", "", 6500, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 6500, { "", "", -1 } },
            { "B_Bergen_rgr", "", 6500, { "", "", -1 } },
            { "B_Bergen_blk", "", 6500, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } }
        };
    };

    class cop {
                title = "STR_Shops_C_Police";
                license = "";
                side = "cop";

                uniforms[] = {
                        { "NONE", "Remove Uniform", 0, { "", "", -1 } },
                        { "U_Rangemaster", "Cop Uniform", 25, { "", "", -1 } },
                        { "U_B_CombatUniform_mcam_tshirt", "", 350, { "life_coplevel", "SCALAR", 1 } },
                        { "U_B_survival_uniform", "", 1250, { "life_coplevel", "SCALAR", 1 } },
                        { "U_B_CombatUniform_mcam_worn", "", 550, { "life_coplevel", "SCALAR", 2 } },
                        { "U_B_Wetsuit", "", 2000, { "", "", -1 } },
                        { "U_O_Wetsuit", "", 2000, { "", "", -1 } },
                        { "U_I_Wetsuit", "", 2000, { "", "", -1 } }
                };

                headgear[] = {
                        { "NONE", "Remove Hat", 0, { "", "", -1 } },
                        { "H_Cap_police", "", 75, { "life_coplevel", "SCALAR", 1 } },
                        { "H_HelmetB_plain_mcamo", "", 75, { "life_coplevel", "SCALAR", 1 } },
                        { "H_Booniehat_mcamo", "", 120, { "life_coplevel", "SCALAR", 1 } },
                        { "H_MilCap_mcamo", "", 100, { "life_coplevel", "SCALAR", 2 } },
                        { "H_Beret_blk", "", 100, { "life_coplevel", "SCALAR", 2 } },
                        { "H_Beret_Colonel", "", 100, { "life_coplevel", "SCALAR", 3 } },
                        { "H_Beret_02", "", 100, { "life_coplevel", "SCALAR", 5 } }
                };

                goggles[] = {
                        { "NONE", "Remove Glasses", 0, { "", "", -1 } },
                        { "G_Shades_Black", "", 25, { "", "", -1 } },
                        { "G_Shades_Blue", "", 20, { "", "", -1 } },
                        { "G_Sport_Blackred", "", 20, { "", "", -1 } },
                        { "G_Sport_Checkered", "", 20, { "", "", -1 } },
                        { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
                        { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
                        { "G_Squares", "", 10, { "", "", -1 } },
                        { "G_Aviator", "", 100, { "", "", -1 } },
                        { "G_Lady_Mirror", "", 150, { "", "", -1 } },
                        { "G_Lady_Dark", "", 150, { "", "", -1 } },
                        { "G_Lady_Blue", "", 150, { "", "", -1 } },
                        { "G_Lowprofile", "", 30, { "", "", -1 } },
                        { "G_Combat", "", 55, { "", "", -1 } },
                        { "G_Diving", "", 500, { "", "", -1 } },
                        { "G_Balaclava_blk", "", 10000, { "", "", -1 } }
                };

                vests[] = {
                        { "NONE", "Remove Vest", 0, { "", "", -1 } },
                        { "V_Rangemaster_belt", "", 800, { "", "", -1 } },
                        { "V_TacVest_blk_POLICE", "", 1500, { "life_coplevel", "SCALAR", 1 } }, 
                        { "V_PlateCarrier1_blk", "", 1500, { "life_coplevel", "SCALAR", 1 } },
                        { "V_RebreatherB", "", 500, { "", "", -1 } }
                };

                backpacks[] = {
                        { "NONE", "Remove Backpack", 0, { "", "", -1 } },
                        { "B_Kitbag_cbr", "", 80, { "", "", -1 } },
                        { "B_FieldPack_cbr", "", 50, { "", "", -1 } },
                        { "B_AssaultPack_cbr", "", 70, { "", "", -1 } },
                        { "B_Bergen_sgg", "", 250, { "", "", -1 } },
                        { "B_Carryall_cbr", "", 350, { "", "", -1 } },
                        { "B_OutdoorPack_blk", "", 800, { "", "", -1 } },
                        { "B_Carryall_oli", "", 500, { "", "", -1 } },
                        { "B_Carryall_khk", "", 500, { "", "", -1 } },
                        { "B_Carryall_oucamo", "", 500, { "", "", -1 } }
                };
        };

    class dive {
                title = "STR_Shops_C_Diving";
                license = "dive";
                side = "civ";

                uniforms[] = {
                        { "NONE", "Remove Uniform", 0, { "", "", -1 } },
                        { "U_B_Wetsuit", "", 2000, { "", "", -1 } },
                        { "U_O_Wetsuit", "", 2000, { "", "", -1 } },
                        { "U_I_Wetsuit", "", 2000, { "", "", -1 } }
                };

                headgear[] = {
                        { "NONE", "Remove Hat", 0, { "", "", -1 } }
                };

                goggles[] = {
                        { "NONE", "Remove Glasses", 0, { "", "", -1 } },
                        { "G_Diving", "", 500, { "", "", -1 } }
                };

                vests[] = {
                        { "NONE", "Remove Vest", 0, { "", "", -1 } },
                        { "V_RebreatherB", "", 500, { "", "", -1 } }
                };

                backpacks[] = {
                        { "NONE", "Remove Backpack", 0, { "", "", -1 } }
                };
        };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        license = "gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 4900, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 1900, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        license = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_B_Wetsuit", "EMS Wetsuit", 2000, { "", "", -1 } },
			{ "U_O_Wetsuit", "EMS Wetsuit", 2000, { "", "", -1 } },
			{ "U_I_Wetsuit", "EMS Wetsuit", 2000, { "", "", -1 } },
            { "U_Rangemaster", "EMS Uniform", 50, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Cap_blu", "", 10, { "", "", -1 } },
			{ "H_Cap_grn", "", 150, { "", "", -1 } },
			{ "H_Cap_grn_BI", "", 150, { "", "", -1 } },
			{ "H_Cap_oli", "", 150, { "", "", -1 } },
			{ "H_Cap_red", "", 150, { "", "", -1 } },
			{ "H_Cap_blk_ION", "", 150, { "", "", -1 } },
			{ "H_Cap_khaki_specops_UK", "", 150, { "", "", -1 } },
			{ "H_Cap_brn_SPECOPS", "", 150, { "", "", -1 } },
			{ "H_Cap_blk_CMMG", "", 150, { "", "", -1 } },
			{ "H_Cap_blk", "", 150, { "", "", -1 } },
			{ "H_Cap_tan", "", 150, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Blue", "", 10, { "", "", -1 } },
			{ "G_Diving", "", 500, { "", "", -1 } }
		};
        
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_RebreatherB", "", 5000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_FieldPack_oli", "EMS Backpack", 3000, { "", "", -1 } },
			{ "B_Carryall_oucamo", "", 3000, { "", "", -1} }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        license = "rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_BG_Guerrilla_6_1", "", 5000, {"", "", -1 } },
			{ "U_O_OfficerUniform_ocamo", "", 5000, { "life_rebellevel", "SCALAR", 2 } },
			{ "U_B_CombatUniform_mcam_worn", "", 5000, { "life_rebellevel", "SCALAR", 2 } },
			{ "U_O_CombatUniform_oucamo", "", 5000, { "life_rebellevel", "SCALAR", 2 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_ShemagOpen_tan", "", 850, { "", "", -1 } },
			{ "H_Shemag_olive", "", 850, { "", "", -1 } },
			{ "H_ShemagOpen_khk", "", 800, { "", "", -1 } },
			{ "H_Beret_blk", "", 100, { "life_rebellevel", "SCALAR", 2 } },
			{ "H_Bandanna_camo", "", 100, { "life_rebellevel", "SCALAR", 1 } },
			{ "H_MilCap_ocamo", "", 100, { "life_rebellevel", "SCALAR", 1 } },
			{ "H_Booniehat_dgtl", "", 100, { "life_rebellevel", "SCALAR", 1 } },
			{ "H_Booniehat_mcamo", "", 100, { "life_rebellevel", "SCALAR", 1 } },
			{ "H_Watchcap_sgg", "", 100, { "life_rebellevel", "SCALAR", 1 } },
			{ "H_Watchcap_blk", "", 100, { "life_rebellevel", "SCALAR", 1 } },
			{ "H_Watchcap_camo", "", 100, { "life_rebellevel", "SCALAR", 1 } },
			{ "H_Watchcap_khk", "", 100, { "life_rebellevel", "SCALAR", 1 } },
			{ "H_HelmetCrew_I", "", 650, { "", "", -1 } },
			{ "H_HelmetCrew_O", "", 650, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } },
			{ "G_Balaclava_blk", "", 10000, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_I_G_resistanceLeader_F", "", 1500, { "life_rebellevel", "SCALAR", 1 } },
			{ "V_TacVest_khk", "", 1500, { "life_rebellevel", "SCALAR", 2 } },
			{ "V_HarnessOGL_brn", "", 1500, { "life_rebellevel", "SCALAR", 1 } },
			{ "V_Chestrig_blk", "", 1500, { "life_rebellevel", "SCALAR", 1 } },
			{ "V_PlateCarrier1_blk", "", 1500, { "life_rebellevel", "SCALAR", 2 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 2500, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 4500, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 3500, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 3000, { "", "", -1 } },
			{ "B_Bergen_blk", "", 4500, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 4500, { "", "", -1 } },
			{ "B_Carryall_oli", "", 5000, { "", "", -1 } },
			{ "B_Carryall_khk", "", 5000, { "", "", -1 } }
};
    };

    class kart {
        title = "STR_Shops_C_Kart";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Driver_1_black", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_blue", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_orange", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_green", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_white", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_yellow", "", 1500, { "", "", -1 } },
            { "U_C_Driver_2", "", 3500, { "", "", -1 } },
            { "U_C_Driver_1", "", 3600, { "", "", -1 } },
            { "U_C_Driver_3", "", 3700, { "", "", -1 } },
            { "U_C_Driver_4", "", 3700, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_RacingHelmet_1_black_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_red_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_white_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_blue_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_yellow_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_green_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_2_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_3_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_4_F", "", 2500, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };
    
	 class blackmarket {
        title = "STR_Shops_C_blk_market";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "TRYK_U_taki_wh", "", 5000, { "", "", -1 } },
            { "TRYK_U_taki_COY", "", 5000, { "", "", -1 } },
            { "TRYK_U_taki_BL", "", 5000, { "", "", -1 } },
            { "TRYK_U_taki_BLK", "", 5000, { "", "", -1 } },
            { "TRYK_U_Bts_PCUGs", "", 5000, { "", "", -1 } },
            { "TRYK_U_Bts_PCUODs", "", 5000, { "", "", -1 } },
            { "TRYK_U_taki_G_WH", "", 5000, { "", "", -1 } },
            { "TRYK_U_taki_G_COY", "", 5000, { "", "", -1 } },
            { "TRYK_U_taki_G_BL", "", 5000, { "", "", -1 } },
            { "TRYK_U_taki_G_BLK", "", 5000, { "", "", -1 } },
            { "TRYK_U_B_PCUHs", "", 5000, { "", "", -1 } },
            { "TRYK_U_B_PCUGHs", "", 5000, { "", "", -1 } },
            { "TRYK_U_B_PCUODHs", "", 5000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "TRYK_Kio_Balaclava", "", 1500, { "", "", -1 } },
            { "mgsr_headbag", "", 40000, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Balaclava_blk", "", 10000, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 1900, { "", "", -1 } },
            { "TRYK_V_Bulletproof", "", 20000, { "", "", -1 } },
            { "TRYK_V_Bulletproof_BLK", "", 20000,{ "", "", -1 } },
            { "TRYK_V_Bulletproo_BL", "", 20000, { "", "", -1 } },
            { "V_TacVest_bm", "", 50000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };
	

};


