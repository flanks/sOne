class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: ARRAY (This is for limiting items to certain things)
    *            0: Variable to read from
    *            1: Variable Value Type (SCALAR / BOOL /EQUAL)
    *            2: What to compare to (-1 = Check Disabled)
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
        
        // class donor {
                        // side = "civ";
                        // vehicles[] = {
                                        // { "B_Quadbike_01_F", 1000, { "" }, { "life_donator", "SCALAR", 1 } },
                                        // { "C_Offroad_01_F", 11000, { "" }, { "life_donator", "SCALAR", 1 } },
                                        // { "C_Hatchback_01_F", 17000, { "" }, { "life_donator", "SCALAR", 1 } },
                                        // { "C_SUV_01_F", 10000, "", { "" }, { "life_donator", "SCALAR", 1 } },
                                        // { "B_Truck_01_box_F", 1500000, { "" }, { "life_donator", "SCALAR", 2 } },
                                        // { "O_Truck_03_device_F", 1500000, { "" }, { "life_donator", "SCALAR", 2 } },                       
                                        // { "B_Heli_Light_01_F", 1500000, { "" }, { "life_donator", "SCALAR", 2 } },
                                        // { "C_Hatchback_01_sport_F", 130000, { "" }, { "life_donator", "SCALAR", 3 } },
                                        // { "I_Heli_Transport_02_F", 4000000, { "" }, { "life_donator", "SCALAR", 3 } },
                                        // { "I_Heli_light_03_unarmed_F", 2500000, { "" }, { "life_donator", "SCALAR", 3 } },
                                        // { "C_Heli_Light_01_civil_F", 1500000, { "" }, { "life_donator", "SCALAR", 4 } },
                                        // { "C_Heli_light_01_blue_F", 1500000, { "" }, { "life_donator", "SCALAR", 4 } },
                                        // { "C_Heli_light_01_red_F", 1500000, { "" }, { "life_donator", "SCALAR", 4 } },
                                        // { "C_Heli_light_01_ion_F", 1500000, { "" }, { "life_donator", "SCALAR", 4 } },
                                        // { "C_Heli_light_01_blueLine_F", 1500000, { "" }, { "life_donator", "SCALAR", 4 } },
                                        // { "C_Heli_light_01_digital_F", 1500000, { "" }, { "life_donator", "SCALAR", 4 } },
                                        // { "C_Heli_light_01_elliptical_F", 1500000, { "" }, { "life_donator", "SCALAR", 4 } },
                                        // { "C_Heli_light_01_furious_F", 1500000, { "" }, { "life_donator", "SCALAR", 4 } },
                                        // { "C_Heli_light_01_graywatcher_F", 1500000, { "" }, { "life_donator", "SCALAR", 4 } },
                                        // { "C_Heli_light_01_jeans_F", 1500000, { "" }, { "life_donator", "SCALAR", 4 } },
                                        // { "C_Heli_light_01_light_F", 1500000, { "" }, { "life_donator", "SCALAR", 4 } },
                                        // { "C_Heli_light_01_shadow_F", 1500000, { "" }, { "life_donator", "SCALAR", 4 } },
                                        // { "C_Heli_light_01_speedy_F", 1500000, { "" }, { "life_donator", "SCALAR", 4 } },
                                        // { "C_Heli_light_01_sunset_F", 1500000, { "" }, { "life_donator", "SCALAR", 4 } },
                                        // { "C_Heli_light_01_vrana_F", 1500000, { "" }, { "life_donator", "SCALAR", 4 } },
                                        // { "C_Heli_light_01_wasp_F", 1500000, { "" }, { "life_donator", "SCALAR", 4 } },
                                        // { "C_Heli_light_01_stripped_F", 1500000, { "" }, { "life_donator", "SCALAR", 4 } },
                                        // { "C_Heli_light_01_luxe_F", 1500000, { "" }, { "life_donator", "SCALAR", 4 } },
                                        // { "B_Truck_01_ammo_F", 2000000, { "" }, { "life_donator", "SCALAR", 4 } }
                        // };
        // };
        // NEW CARS
        class exclusive_cars {
        side = "civ";
        vehicles[] = {
                        //Lamborghini      
                        { "mrshounka_huracan_c_noir", { "", "", -1 } },
                        { "mrshounka_huracan_c_bleufonce", { "", "", -1 } },
                        { "mrshounka_huracan_c_rouge", { "", "", -1 } },
                        { "mrshounka_huracan_c_jaune", { "", "", -1 } },
                        { "mrshounka_huracan_c_rose", { "", "", -1 } },
                        { "mrshounka_huracan_c_grise", { "", "", -1 } },
                        { "mrshounka_huracan_c_violet", { "", "", -1 } },
                        { "mrshounka_huracan_c_orange", { "", "", -1 } },
                        //Porche
                        { "mrshounka_92_civ_noir", { "", "", -1 } },
                        { "mrshounka_92_civ_bleufonce", { "", "", -1 } },
                        { "mrshounka_92_civ_rouge", { "", "", -1 } },
                        { "mrshounka_92_civ_jaune", { "", "", -1 } },
                        { "mrshounka_92_civ_rose", { "", "", -1 } },
                        { "mrshounka_92_civ_grise", { "", "", -1 } },
                        { "mrshounka_92_civ_violet", { "", "", -1 } },
                        { "mrshounka_92_civ_orange", { "", "", -1 } },
                        
                        //nissan gtr
                        { "mrshounka_a3_gtr_civ", { "", "", -1 } },
                        { "mrshounka_a3_gtr_civ_noir", { "", "", -1 } },
                        { "mrshounka_a3_gtr_civ_bleu", { "", "", -1 } },
                        
                        //Koenigsegg
                        { "Mrshounka_agera_p", { "", "", -1 } },
                        { "Mrshounka_agera_p_noir", { "", "", -1 } },
                        { "Mrshounka_agera_p_bleu", { "", "", -1 } },
                        { "Mrshounka_agera_p_jaune", { "", "", -1 } },
                        
                        //Ferrari
                        { "shounka_f430_spider_noir", { "", "", -1 } },
                        { "shounka_f430_spider_bleufonce", { "", "", -1 } },
                        { "shounka_f430_spider_rouge", { "", "", -1 } },
                        { "shounka_f430_spider_jaune", { "", "", -1 } },
                        { "shounka_f430_spider_rose", { "", "", -1 } },
                        { "shounka_f430_spider_grise", { "", "", -1 } },
                        { "shounka_f430_spider_violet", { "", "", -1 } },
                        { "shounka_f430_spider_orange", { "", "", -1 } },
                        
                        //Hummer H1
                        { "Mrshounka_hummer_civ_noir", { "", "", -1 } },
                        { "Mrshounka_hummer_civ_bleufonce", { "", "", -1 } },
                        { "Mrshounka_hummer_civ_rouge", { "", "", -1 } },
                        { "Mrshounka_hummer_civ_jaune", { "", "", -1 } },
                        { "Mrshounka_hummer_civ_rose", { "", "", -1 } },
                        { "Mrshounka_hummer_civ_grise", { "", "", -1 } },
                        { "Mrshounka_hummer_civ_violet", { "", "", -1 } },
                        
                        //Hummer H2
                        { "Mrshounka_h2_civ", { "", "", -1 } },
                        { "Mrshounka_h2_civ_noir", { "", "", -1 } },
                        { "Mrshounka_h2_civ_bleufonce", { "", "", -1 } },
                        { "Mrshounka_h2_civ_rouge", { "", "", -1 } },
                        { "Mrshounka_h2_civ_jaune", { "", "", -1 } },
                        { "Mrshounka_h2_civ_rose", { "", "", -1 } },
                        { "Mrshounka_h2_civ_grise", { "", "", -1 } },
                        { "Mrshounka_h2_civ_violet", { "", "", -1 } },
                        { "Mrshounka_h2_civ_orange", { "", "", -1 } },
                        
                        //Lykan
                        { "Mrshounka_lykan_c_noir", { "", "", -1 } },
                        { "Mrshounka_lykan_c_bleufonce", { "", "", -1 } },
                        { "Mrshounka_lykan_c_rouge", { "", "", -1 } },
                        { "Mrshounka_lykan_c_jaune", { "", "", -1 } },
                        { "Mrshounka_lykan_c_rose", { "", "", -1 } },
                        { "Mrshounka_lykan_c_grise", { "", "", -1 } },
                        { "Mrshounka_lykan_c_violet", { "", "", -1 } },
                        { "Mrshounka_lykan_c_orange", { "", "", -1 } },
                        
                         // Bugatti Veyron
                        { "quiet_Bugatti_blanche_f", { "", "", -1 } },
             // Limousine audi
            { "shounka_limo_civ_orange", { "", "", -1 } },
            { "shounka_limo_civ_violet", { "", "", -1 } },
            { "shounka_limo_civ_grise", { "", "", -1 } },
            { "shounka_limo_civ_rose", { "", "", -1 } },
            { "shounka_limo_civ_rogue", { "", "", -1 } },
            { "shounka_limo_civ_bleufonce", { "", "", -1 } },
            { "shounka_limo_civ_noir", { "", "", -1 } },
            { "shounka_limo_civ", { "", "", -1 } },
            
                        // Lamborghini Veneno
            { "Mrshounka_Venemo_c_jaune", { "", "", -1 } },
            { "Mrshounka_Venemo_c_bleu", { "", "", -1 } },
            { "Mrshounka_Venemo_c_noir", { "", "", -1 } },
            { "Mrshounka_Venemo_c", { "", "", -1 } },
            
           // Porche 911
            { "shounka_porsche911_orange", { "", "", -1 } },
            { "shounka_porsche911_violet", { "", "", -1 } },
            { "shounka_porsche911_grise", { "", "", -1 } },
            { "shounka_porsche911_rose", { "", "", -1 } },
            { "shounka_porsche911_jaune", { "", "", -1 } },
            { "shounka_porsche911_rogue", { "", "", -1 } },
            { "shounka_porsche911_bleufonce", { "", "", -1 } },
            { "shounka_porsche911_noir", { "", "", -1 } },         
            // Pagani Huayra
            { "Mrshounka_pagani_c_orange", { "", "", -1 } },
            { "Mrshounka_pagani_c_violet", { "", "", -1 } },
            { "Mrshounka_pagani_c_grise", { "", "", -1 } },
            { "Mrshounka_pagani_c_rose", { "", "", -1 } },
            { "Mrshounka_pagani_c_jaune", { "", "", -1 } },
            { "Mrshounka_pagani_c_rogue", { "", "", -1 } },
            { "Mrshounka_pagani_c_bleufonce", { "", "", -1 } },
            { "Mrshounka_pagani_c_noir", { "", "", -1 } },
            // Ford Raptor
            { "Quiet_ford_raptor_rogue_f", { "", "", -1 } },
            { "Quiet_ford_raptor_noir_f", { "", "", -1 } },
            { "Quiet_ford_raptor_bleu_f", { "", "", -1 } },
            { "Quiet_ford_raptor_chrome_f", { "", "", -1 } },
            { "Quiet_ford_raptor_blanche_f", { "", "", -1 } },
           // Mclaren MP4-12C
            { "shounka_mp4_orange", { "", "", -1 } },
            { "shounka_mp4_violet", { "", "", -1 } },
            { "shounka_mp4_grise", { "", "", -1 } },
            { "shounka_mp4_rose", { "", "", -1 } },
            { "shounka_mp4_jaune", { "", "", -1 } },
            { "shounka_mp4_rogue", { "", "", -1 } },
            { "shounka_mp4_bleufonce", { "", "", -1 } },
            { "shounka_mp4_noir", { "", "", -1 } },
        };
    };
        //
        // NEW CARS
          class civ_middle_car {
         side = "civ";
         vehicles[] = {
                         //Dodge Charger
                         { "Mrshounka_a3_dogde15_civ", { "", "", -1 } },
                         { "Mrshounka_a3_dogde15_civ_noir", { "", "", -1 } },
                         { "Mrshounka_a3_dogde15_civ_bleufonce", { "", "", -1 } },
                         { "Mrshounka_a3_dogde15_civ_rouge", { "", "", -1 } },
                         { "Mrshounka_a3_dogde15_civ_jaune", { "", "", -1 } },
                         { "Mrshounka_a3_dogde15_civ_rose", { "", "", -1 } },
                         { "Mrshounka_a3_dogde15_civ_violet", { "", "", -1 } },
                         { "Mrshounka_a3_dogde15_civ_orange", { "", "", -1 } },
                         
                         //Alfa Romeo
                        { "Mrshounka_Alfa_Romeo_noir", { "", "", -1 } },
                        { "Mrshounka_Alfa_Romeo_bleufonce", { "", "", -1 } },
                        { "Mrshounka_Alfa_Romeo_rouge", { "", "", -1 } },
                        { "Mrshounka_Alfa_Romeo_jaune", { "", "", -1 } },
                        { "Mrshounka_Alfa_Romeo_rose", { "", "", -1 } },
                        { "Mrshounka_Alfa_Romeo_grise", { "", "", -1 } },
                        { "Mrshounka_Alfa_Romeo_violet", { "", "", -1 } },
                        { "Mrshounka_Alfa_Romeo_orange", { "", "", -1 } },
                        
                         //BMW M1
                        { "Mrshounka_bmwm1_civ_noir", { "", "", -1 } },
                        { "Mrshounka_bmwm1_civ_bleufonce", { "", "", -1 } },
                        { "Mrshounka_bmwm1_civ_rouge", { "", "", -1 } },
                        { "Mrshounka_bmwm1_civ_jaune", { "", "", -1 } },
                        { "Mrshounka_bmwm1_civ_rose", { "", "", -1 } },
                        { "Mrshounka_bmwm1_civ_grise", { "", "", -1 } },
                        { "Mrshounka_bmwm1_civ_violet", { "", "", -1 } },
                        { "Mrshounka_bmwm1_civ_orange", { "", "", -1 } },
                        
                         //BMW M6
                        { "Mrshounka_bmwm6_civ_noir", { "", "", -1 } },
                        { "Mrshounka_bmwm6_civ_bleufonce", { "", "", -1 } },
                        { "Mrshounka_bmwm6_civ_rouge", { "", "", -1 } },
                        { "Mrshounka_bmwm6_civ_jaune", { "", "", -1 } },
                        { "Mrshounka_bmwm6_civ_rose", { "", "", -1 } },
                        { "Mrshounka_bmwm6_civ_grise", { "", "", -1 } },
                        { "Mrshounka_bmwm6_civ_violet", { "", "", -1 } },
                        { "Mrshounka_bmwm6_civ_orange", { "", "", -1 } },
                        
                         //Bowler
                        { "Mrshounka_Bowler_c_noir", { "", "", -1 } },
                        { "Mrshounka_Bowler_c_bleufonce", { "", "", -1 } },
                        { "Mrshounka_Bowler_c_rouge", { "", "", -1 } },
                        { "Mrshounka_Bowler_c_jaune", { "", "", -1 } },
                        { "Mrshounka_Bowler_c_rose", { "", "", -1 } },
                        { "Mrshounka_Bowler_c_grise", { "", "", -1 } },
                        { "Mrshounka_Bowler_c_violet", { "", "", -1 } },
                        { "Mrshounka_Bowler_c_orange", { "", "", -1 } },
                        
                         //Mercedes C63 AMG
                        { "Mrshounka_c63_2015_civ", { "", "", -1 } },
                        { "Mrshounka_c63_2015_civ_mat", { "", "", -1 } },
                        { "Mrshounka_c63_2015_civ_noir", { "", "", -1 } },
                        { "Mrshounka_c63_2015_civ_mat_n", { "", "", -1 } },
                        { "Mrshounka_c63_2015_civ_bleufonce", { "", "", -1 } },
                        { "Mrshounka_c63_2015_civ_mat_b", { "", "", -1 } },
                        { "Mrshounka_c63_2015_civ_rouge", { "", "", -1 } },
                        { "Mrshounka_c63_2015_civ_jaune", { "", "", -1 } },
                        { "Mrshounka_c63_2015_civ_rose", { "", "", -1 } },
                        { "Mrshounka_c63_2015_civ_grise", { "", "", -1 } },
                        { "Mrshounka_c63_2015_civ_violet", { "", "", -1 } },
                        { "Mrshounka_c63_2015_civ_rose", { "", "", -1 } },
                        
                         //Jeep Cherokee
                        { "Mrshounka_cherokee_noir", { "", "", -1 } },
                        { "Mrshounka_cherokee_noir_mat", { "", "", -1 } },
                        { "Mrshounka_cherokee_noir_bleu", { "", "", -1 } },
                        { "Mrshounka_cherokee_noir_bleu_mat", { "", "", -1 } },
                        { "Mrshounka_cherokee_noir_blanc", { "", "", -1 } },
                        { "Mrshounka_cherokee_noir_blanc_mat", { "", "", -1 } },
                        { "Mrshounka_cherokee_noir_rouge", { "", "", -1 } },
                        { "Mrshounka_cherokee_noir_rouge_mat", { "", "", -1 } },
                        
                         //Chevrolet avalance
                        { "shounka_cherokee_noir", { "", "", -1 } },
                        { "shounka_cherokee_bleufonce", { "", "", -1 } },
                        { "shounka_cherokee_rouge", { "", "", -1 } },
                        { "shounka_cherokee_jaune", { "", "", -1 } },
                        { "shounka_cherokee_rose", { "", "", -1 } },
                        { "shounka_cherokee_grise", { "", "", -1 } },
                        { "shounka_cherokee_violet", { "", "", -1 } },
                        { "shounka_cherokee_orange", { "", "", -1 } },
                        
                         //Golf GTI
                        { "Mrshounka_golfvi_noir", { "", "", -1 } },
                        { "Mrshounka_golfvi_bleufonce", { "", "", -1 } },
                        { "Mrshounka_golfvi_rouge", { "", "", -1 } },
                        { "Mrshounka_golfvi_jaune", { "", "", -1 } },
                        { "Mrshounka_golfvi_rose", { "", "", -1 } },
                        { "Mrshounka_golfvi_grise", { "", "", -1 } },
                        { "Mrshounka_golfvi_violet", { "", "", -1 } },
                        { "Mrshounka_golfvi_orange", { "", "", -1 } },
                        
                         //Lincoln 1969
                        { "Mrshounka_lincoln_noir", { "", "", -1 } },
                        { "Mrshounka_lincoln_bleufonce", { "", "", -1 } },
                        { "Mrshounka_lincoln_rouge", { "", "", -1 } },
                        { "Mrshounka_lincoln_jaune", { "", "", -1 } },
                        { "Mrshounka_lincoln_rose", { "", "", -1 } },
                        { "Mrshounka_lincoln_grise", { "", "", -1 } },
                        { "Mrshounka_lincoln_violet", { "", "", -1 } },
                        { "Mrshounka_lincoln_orange", { "", "", -1 } },
                        
                        // Audi Q7
                        { "shounka_a3_audiq7_bleu", { "", "", -1 } },
                        
                        // Mercedes G65 AMG
                        { "Quiet_c65amg_rogue_f", { "", "", -1 } },
                        { "Quiet_c65amg_noir_f", { "", "", -1 } },
                        { "Quiet_c65amg_bleu_f", { "", "", -1 } },
                        { "Quiet_c65amg_chrome_f", { "", "", -1 } },
                        { "Quiet_c65amg_blanche_f", { "", "", -1 } },

            // Dodge Charger 1969
            { "Quiet_1969charger_rogue_f", { "", "", -1 } },
            { "Quiet_1969charger_noir_f", { "", "", -1 } },
            { "Quiet_1969charger_bleu_f", { "", "", -1 } },
            { "Quiet_1969charger_chrome_f", { "", "", -1 } },
            { "Quiet_1969charger_blanche_f", { "", "", -1 } },
            { "quiet_dodge1969_spawn_f", { "", "", -1 } },
            
            // Dodge Charger 2015
            { "Quiet_dodge_15_rogue_f", { "", "", -1 } },
            { "Quiet_dodge_15_noir_f", { "", "", -1 } },
            { "Quiet_dodge_15_bleu_f", { "", "", -1 } },
            { "Quiet_dodge_15_chrome_f", { "", "", -1 } },
            { "Quiet_dodge_15_blanche_f", { "", "", -1 } },
            { "quiet_dodge_charger_2015_spawn_f", { "", "", -1 } },
              // Audi Rs4
            { "Mrshounka_rs4_gend_p_bleufonce", { "", "", -1 } },
            { "Mrshounka_rs4_gend_p_jaune", { "", "", -1 } },
            { "Mrshounka_rs4_gend_p_noir", { "", "", -1 } },
            { "Mrshounka_rs4_gend_p_blanc", { "", "", -1 } },
            
            // Mercedes 190
            { "Mrshounka_mercedes_190_p_orange", { "", "", -1 } },
            { "Mrshounka_mercedes_190_p_violet", { "", "", -1 } },
            { "Mrshounka_mercedes_190_p_grise", { "", "", -1 } },
            { "Mrshounka_mercedes_190_p_rose", { "", "", -1 } },
            { "Mrshounka_mercedes_190_p_jaune", { "", "", -1 } },
            { "Mrshounka_mercedes_190_p_rogue", { "", "", -1 } },
            { "Mrshounka_mercedes_190_p_bleufonce", { "", "", -1 } },
            { "Mrshounka_mercedes_190_p_noir", { "", "", -1 } },
            { "Mrshounka_mercedes_190_p_civ", { "", "", -1 } },
            
             // Renault Megane RS
            { "Mrshounka_megane_rs_2015_orange", { "", "", -1 } },
            { "Mrshounka_megane_rs_2015_violet", { "", "", -1 } },
            { "Mrshounka_megane_rs_2015_grise", { "", "", -1 } },
            { "Mrshounka_megane_rs_2015_rose", { "", "", -1 } },
            { "Mrshounka_megane_rs_2015_jaune", { "", "", -1 } },
            { "Mrshounka_megane_rs_2015_rogue", { "", "", -1 } },
            { "Mrshounka_megane_rs_2015_bleufonce", { "", "", -1 } },
            { "Mrshounka_megane_rs_2015_noir", { "", "", -1 } },
            { "Mrshounka_megane_rs_2015_civ", { "", "", -1 } },
            
            //Mitsubishi Lancer
            { "Mrshounka_evox_gend", { "", "", -1 } },
            { "Mrshounka_evox_orange", { "", "", -1 } },
            { "Mrshounka_evox_violet", { "", "", -1 } },
            { "Mrshounka_evox_grise", { "", "", -1 } },
            { "Mrshounka_evox_rose", { "", "", -1 } },
            { "Mrshounka_evox_jaune", { "", "", -1 } },
            { "Mrshounka_evox_rogue", { "", "", -1 } },
            { "Mrshounka_evox_bleufonce", { "", "", -1 } },
            { "Mrshounka_evox_noir", { "", "", -1 } },
            { "Mrshounka_evox_civ", { "", "", -1 } },
            
             // Porche Cayenne
            { "Mrshounka_cayenne_p_orange", { "", "", -1 } },
            { "Mrshounka_cayenne_p_violet", { "", "", -1 } },
            { "Mrshounka_cayenne_p_grise", { "", "", -1 } },
            { "Mrshounka_cayenne_p_rose", { "", "", -1 } },
            { "Mrshounka_cayenne_p_jaune", { "", "", -1 } },
            { "Mrshounka_cayenne_p_rogue", { "", "", -1 } },
            { "Mrshounka_cayenne_p_bleufonce", { "", "", -1 } },
            { "Mrshounka_cayenne_p_noir", { "", "", -1 } },
            { "Mrshounka_cayenne_p_civ", { "", "", -1 } },
            
             // Audi RS5
            { "shounka_a3_rs5_civ_orange", { "", "", -1 } },
            { "shounka_a3_rs5_civ_violet", { "", "", -1 } },
            { "shounka_a3_rs5_civ_grise", { "", "", -1 } },
            { "shounka_a3_rs5_civ_rose", { "", "", -1 } },
            { "shounka_a3_rs5_civ_jaune", { "", "", -1 } },
            { "shounka_a3_rs5_civ_rogue", { "", "", -1 } },
            { "shounka_a3_rs5_civ_bleufonce", { "", "", -1 } },
            { "shounka_a3_rs5_civ_noir", { "", "", -1 } },
            { "shounka_a3_rs5_civ", { "", "", -1 } },
            
            // Volkswagen Touareg
            { "Mrshounka_Volkswagen_Touareg_orange", { "", "", -1 } },
            { "Mrshounka_Volkswagen_Touareg_violet", { "", "", -1 } },
            { "Mrshounka_Volkswagen_Touareg_grise", { "", "", -1 } },
            { "Mrshounka_Volkswagen_Touareg_rose", { "", "", -1 } },
            { "Mrshounka_Volkswagen_Touareg_jaune", { "", "", -1 } },
            { "Mrshounka_Volkswagen_Touareg_rogue", { "", "", -1 } },
            { "Mrshounka_Volkswagen_Touareg_bleufonce", { "", "", -1 } },
            { "Mrshounka_Volkswagen_Touareg_noir", { "", "", -1 } },
            { "Mrshounka_Volkswagen_Touareg_civ", { "", "", -1 } },
            
           // Transam
            { "shounka_transam_orange", { "", "", -1 } },
            { "shounka_transam_violet", { "", "", -1 } },
            { "shounka_transam_grise", { "", "", -1 } },
            { "shounka_transam_rose", { "", "", -1 } },
            { "shounka_transam_jaune", { "", "", -1 } },
            { "shounka_transam_rogue", { "", "", -1 } },
            { "shounka_transam_bleufonce", { "", "", -1 } },
            { "shounka_transam_noir", { "", "", -1 } },
            { "shounka_transam", { "", "", -1 } },
            
            // Subaru
            { "Mrshounka_subaru08_orange", { "", "", -1 } },
            { "Mrshounka_subaru08_violet", { "", "", -1 } },
            { "Mrshounka_subaru08_grise", { "", "", -1 } },
            { "Mrshounka_subaru08_rose", { "", "", -1 } },
            { "Mrshounka_subaru08_jaune", { "", "", -1 } },
            { "Mrshounka_subaru08_rogue", { "", "", -1 } },
            { "Mrshounka_subaru08_bleufonce", { "", "", -1 } },
            { "Mrshounka_subaru08_noir", { "", "", -1 } },
            { "Mrshounka_subaru08_civ", { "", "", -1 } },
            
            // Audi Rs6
            { "shounka_rs6_orange", { "", "", -1 } },
            { "shounka_rs6_violet", { "", "", -1 } },
            { "shounka_rs6_grise", { "", "", -1 } },
            { "shounka_rs6_rose", { "", "", -1 } },
            { "shounka_rs6_jaune", { "", "", -1 } },
            { "shounka_rs6_rogue", { "", "", -1 } },
            { "shounka_rs6_bleufonce", { "", "", -1 } },
            { "shounka_rs6_noir", { "", "", -1 } },
            { "shounka_rs6_civ", { "", "", -1 } },
            
            // Audi Rs4
            { "shounka_rs4_orange", { "", "", -1 } },
            { "shounka_rs4_violet", { "", "", -1 } },
            { "shounka_rs4_grise", { "", "", -1 } },
            { "shounka_rs4_rose", { "", "", -1 } },
            { "shounka_rs4_jaune", { "", "", -1 } },
            { "shounka_rs4_rogue", { "", "", -1 } },
            { "shounka_rs4_bleufonce", { "", "", -1 } },
            { "shounka_rs4_noir", { "", "", -1 } },
            { "shounka_rs4_civ", { "", "", -1 } },
            
            // Ford Raptor
            { "Mrshounka_raptor_orange", { "", "", -1 } },
            { "Mrshounka_raptor_violet", { "", "", -1 } },
            { "Mrshounka_raptor_grise", { "", "", -1 } },
            { "Mrshounka_raptor_rose", { "", "", -1 } },
            { "Mrshounka_raptor_jaune", { "", "", -1 } },
            { "Mrshounka_raptor_rogue", { "", "", -1 } },
            { "Mrshounka_raptor_bleufonce", { "", "", -1 } },
            { "Mrshounka_raptor_noir", { "", "", -1 } },
            { "Mrshounka_raptor_civ", { "", "", -1 } },
            
            // Ford Raptor2
            { "Mrshounka_raptor2_orange", { "", "", -1 } },
            { "Mrshounka_raptor2_violet", { "", "", -1 } },
            { "Mrshounka_raptor2_grise", { "", "", -1 } },
            { "Mrshounka_raptor2_rose", { "", "", -1 } },
            { "Mrshounka_raptor2_jaune", { "", "", -1 } },
            { "Mrshounka_raptor2_rogue", { "", "", -1 } },
            { "Mrshounka_raptor2_bleufonce", { "", "", -1 } },
            { "Mrshounka_raptor2_noir", { "", "", -1 } },
            { "Mrshounka_raptor2_civ", { "", "", -1 } },
            
                        // Ford mustang
            { "Mrshounka_mustang_orange", { "", "", -1 } },
            { "Mrshounka_mustang_violet", { "", "", -1 } },
            { "Mrshounka_mustang_grise", { "", "", -1 } },
            { "Mrshounka_mustang_rose", { "", "", -1 } },
            { "Mrshounka_mustang_jaune", { "", "", -1 } },
            { "Mrshounka_mustang_rogue", { "", "", -1 } },
            { "Mrshounka_mustang_bleufonce", { "", "", -1 } },
            { "Mrshounka_mustang_mat_b", { "", "", -1 } },
            { "Mrshounka_mustang_noir", { "", "", -1 } },
            { "Mrshounka_mustang_civ", { "", "", -1 } },
            { "Mrshounka_mustang_mat_n", { "", "", -1 } },
            { "Mrshounka_mustang_mat", { "", "", -1 } },
            
                        // Mercedes CLK
            { "shounka_clk_orange", { "", "", -1 } },
            { "shounka_clk_orange", { "", "", -1 } },
            { "shounka_clk_violet", { "", "", -1 } },
            { "shounka_clk_grise", { "", "", -1 } },
            { "shounka_clk_rose", { "", "", -1 } },
            { "shounka_clk_jaune", { "", "", -1 } },
            { "shounka_clk_rogue", { "", "", -1 } },
            { "shounka_clk_bleufonce", { "", "", -1 } },
            { "shounka_clk_noir", { "", "", -1 } },
            { "shounka_clk", { "", "", -1 } }
                        
         };
     };
        
        // NEW CARS
        class civ_car {
        side = "civ";
        vehicles[] = {
                        //ARMA3
                        { "C_Van_01_transport_F", { "", "", -1 } },
                        //Renault
                        { "shounka_a3_cliors_civ_noir", { "", "", -1 } },
                        { "shounka_a3_cliors_civ_bleufonce", { "", "", -1 } },
                        { "shounka_a3_cliors_civ_rouge", { "", "", -1 } },
                        { "shounka_a3_cliors_civ_jaune", { "", "", -1 } },
                        { "shounka_a3_cliors_civ_rose", { "", "", -1 } },
                        { "shounka_a3_cliors_civ_grise", { "", "", -1 } },
                        { "shounka_a3_cliors_civ_violet", { "", "", -1 } },
                        { "shounka_a3_cliors_civ_orange", { "", "", -1 } },
                        //Citroen
                        { "shounka_a3_ds4_civ", { "", "", -1 } },
                        { "shounka_a3_ds4_civ_noir", { "", "", -1 } },
                        { "shounka_a3_ds4_civ_bleufonce", { "", "", -1 } },
                        { "shounka_a3_ds4_civ_rouge", { "", "", -1 } },
                        { "shounka_a3_ds4_civ_jaune", { "", "", -1 } },
                        { "shounka_a3_ds4_civ_rose", { "", "", -1 } },
                        { "shounka_a3_ds4_civ_grise", { "", "", -1 } },
                        { "shounka_a3_ds4_civ_violet", { "", "", -1 } },
                        { "shounka_a3_ds4_civ_orange", { "", "", -1 } },
                        //Peugeot 508
                        { "shounka_a3_peugeot508_civ", { "", "", -1 } },
                        { "shounka_a3_peugeot508_civ_noir", { "", "", -1 } },
                        { "shounka_a3_peugeot508_civ_bleufonce", { "", "", -1 } },
                        { "shounka_a3_peugeot508_civ_rouge", { "", "", -1 } },
                        { "shounka_a3_peugeot508_civ_jaune", { "", "", -1 } },
                        { "shounka_a3_peugeot508_civ_rose", { "", "", -1 } },
                        { "shounka_a3_peugeot508_civ_grise", { "", "", -1 } },
                        { "shounka_a3_peugeot508_civ_violet", { "", "", -1 } },
                        { "shounka_a3_peugeot508_civ_orange", { "", "", -1 } }, 
                        //Peugeot 207RC
                        { "Mrshounka_a3_207_civ", { "", "", -1 } },
                        { "Mrshounka_a3_207_civ_noir", { "", "", -1 } },
                        { "Mrshounka_a3_207_civ_bleufonce", { "", "", -1 } },
                        { "Mrshounka_a3_207_civ_rouge", { "", "", -1 } },
                        { "Mrshounka_a3_207_civ_jaune", { "", "", -1 } },
                        { "Mrshounka_a3_207_civ_rose", { "", "", -1 } },
                        { "Mrshounka_a3_207_civ_grise", { "", "", -1 } },
                        { "Mrshounka_a3_207_civ_violet", { "", "", -1 } },
                        { "Mrshounka_a3_207_civ_orange", { "", "", -1 } },
                        
                        //Peugeot 308 Rcz
                        { "Mrshounka_a3_308_rcz", { "", "", -1 } },
                        { "Mrshounka_a3_308_rcz_noir", { "", "", -1 } },
                        { "Mrshounka_a3_308_rcz_bleufonce", { "", "", -1 } },
                        { "Mrshounka_a3_308_rcz_rouge", { "", "", -1 } },
                        { "Mrshounka_a3_308_rcz_jaune", { "", "", -1 } },
                        { "Mrshounka_a3_308_rcz_rose", { "", "", -1 } },
                        { "Mrshounka_a3_308_rcz_grise", { "", "", -1 } },
                        { "Mrshounka_a3_308_rcz_violet", { "", "", -1 } },
                        { "Mrshounka_a3_308_rcz_orange", { "", "", -1 } },
                        
                        //Peugeot 308 GTI
                        { "Mrshounka_a3_308_civ_noir", { "", "", -1 } },
                        { "Mrshounka_a3_308_civ_bleufonce", { "", "", -1 } },
                        { "Mrshounka_a3_308_civ_rouge", { "", "", -1 } },
                        { "Mrshounka_a3_308_civ_jaune", { "", "", -1 } },
                        { "Mrshounka_a3_308_civ_rose", { "", "", -1 } },
                        { "Mrshounka_a3_308_civ_grise", { "", "", -1 } },
                        { "Mrshounka_a3_308_civ_violet", { "", "", -1 } },
                        { "Mrshounka_a3_308_civ_orange", { "", "", -1 } },            
                        //Citroen DS3
                        { "Mrshounka_a3_ds3_civ_noir", { "", "", -1 } },
                        { "Mrshounka_a3_ds3_civ_bleufonce", { "", "", -1 } },
                        { "Mrshounka_a3_ds3_civ_rouge", { "", "", -1 } },
                        { "Mrshounka_a3_ds3_civ_jaune", { "", "", -1 } },
                        { "Mrshounka_a3_ds3_civ_rose", { "", "", -1 } },
                        { "Mrshounka_a3_ds3_civ_grise", { "", "", -1 } },
                        { "Mrshounka_a3_ds3_civ_violet", { "", "", -1 } },
                        { "Mrshounka_a3_ds3_civ_orange", { "", "", -1 } },
                        
                        //Smart
                        { "Mrshounka_a3_smart_civ", { "", "", -1 } },
                        { "Mrshounka_a3_smart_civ_noir", { "", "", -1 } },
                        { "Mrshounka_a3_smart_civ_bleu", { "", "", -1 } },
                        
                        //nemo
                        { "shounka_nemo_noir", { "", "", -1 } },
                        { "shounka_nemo_bleufonce", { "", "", -1 } },
                        { "shounka_nemo_rouge", { "", "", -1 } },
                        { "shounka_nemo_jaune", { "", "", -1 } },
                        { "shounka_nemo_rose", { "", "", -1 } },
                        { "shounka_nemo_grise", { "", "", -1 } },
                        { "shounka_nemo_violet", { "", "", -1 } },
                        { "shounka_nemo_orange", { "", "", -1 } },
                         //Citroen C4
                        { "Mrshounka_c4_p_orange", { "", "", -1 } },
                        { "Mrshounka_c4_p_violet", { "", "", -1 } },
                        { "Mrshounka_c4_p_grise", { "", "", -1 } },
                        { "Mrshounka_c4_p_rose", { "", "", -1 } },
                        { "Mrshounka_c4_p_jaune", { "", "", -1 } },
                        { "Mrshounka_c4_p_rogue", { "", "", -1 } },
                        { "Mrshounka_c4_p_bleufonce", { "", "", -1 } },
                        { "Mrshounka_c4_p_noir", { "", "", -1 } },
                        { "Mrshounka_c4_p_civ", { "", "", -1 } },
                        
                         //Mercedes sprinter   
                        { "shounka_a3_spr_civ", { "", "", -1 } },
                        { "shounka_a3_spr_civ_noir", { "", "", -1 } },
                        { "shounka_a3_spr_civ_bleufonce", { "", "", -1 } },
                        { "shounka_a3_spr_civ_rogue", { "", "", -1 } },
                        { "shounka_a3_spr_civ_jaune", { "", "", -1 } },
                        { "shounka_a3_spr_civ_rose", { "", "", -1 } },
                        { "shounka_a3_spr_civ_grise", { "", "", -1 } },
                        { "shounka_a3_spr_civ_violet", { "", "", -1 } },
                        { "shounka_a3_spr_civ_orange", { "", "", -1 } },
                        { "shounka_a3_spr_civ_vf", { "", "", -1 } },
                        { "shounka_a3_spr_civ_um", { "", "", -1 } },
                        { "shounka_a3_spr_civ_al", { "", "", -1 } },
                        
                        // GMC Vandura
                        { "Mrshounka_Vandura_civ_orange", { "", "", -1 } },
                        { "Mrshounka_Vandura_civ_violet", { "", "", -1 } },
                        { "Mrshounka_Vandura_civ_grise", { "", "", -1 } },
                        { "Mrshounka_Vandura_civ_rose", { "", "", -1 } },
                        { "Mrshounka_Vandura_civ_jaune", { "", "", -1 } },
                        { "Mrshounka_Vandura_civ_rogue", { "", "", -1 } },
                        { "Mrshounka_Vandura_civ_bleufonce", { "", "", -1 } },
                        { "Mrshounka_Vandura_civ_noir", { "", "", -1 } },
                        { "Mrshounka_Vandura_civ", { "", "", -1 } },
                        
                        // Renault 5
                        { "Mrshounka_r5_civ", { "", "", -1 } },
                        { "Mrshounka_r5_noir", { "", "", -1 } },
                        { "Mrshounka_r5_belufonce", { "", "", -1 } },
                        { "Mrshounka_r5_rouge", { "", "", -1 } },
                        { "Mrshounka_r5_jauna", { "", "", -1 } },
                        { "Mrshounka_r5_rose", { "", "", -1 } },
                        { "Mrshounka_r5_grise", { "", "", -1 } },
                        { "Mrshounka_r5_violet", { "", "", -1 } },
                        { "Mrshounka_r5_orange", { "", "", -1 } },

                        // Renault Twingo
                        { "Mrshounka_twingo_p_noir", { "", "", -1 } },
                        { "Mrshounka_twingo_p_bf", { "", "", -1 } },
                        { "Mrshounka_twingo_p_r", { "", "", -1 } },
                        { "Mrshounka_twingo_p_j", { "", "", -1 } },
                        { "Mrshounka_twingo_p_rose", { "", "", -1 } },
                        { "Mrshounka_twingo_p_g", { "", "", -1 } },
                        { "Mrshounka_twingo_p_v", { "", "", -1 } },
                        { "Mrshounka_twingo_p_o", { "", "", -1 } }
                     
        };
    };
        // NEW CARS
        
         class event {
        side = "civ";
                vehicles[] = {
                        
              //Buggy
             { "shounka_buggy", { "", "", -1 } },
                         { "shounka_buggy_noir", { "", "", -1 } },
                         { "shounka_buggy_bleufonce", { "", "", -1 } },
                         { "shounka_buggy_rouge", { "", "", -1 } },
                         { "shounka_buggy_jaune", { "", "", -1 } },
                         { "shounka_buggy_rose", { "", "", -1 } },
                         { "shounka_buggy_grise", { "", "", -1 } },
                         { "shounka_buggy_violet", { "", "", -1 } },
                         { "shounka_buggy_orange", { "", "", -1 } },  
                                        
                        //likbil
                         { "Mrhounka_corbillard_c", { "", "", -1 } },
                         
             // Chevrolet Monster
            { "shounka_monsteur_orange", { "", "", -1 } },
            { "shounka_monsteur_violet", { "", "", -1 } },
            { "shounka_monsteur_grise", { "", "", -1 } },
            { "shounka_monsteur_rose", { "", "", -1 } },
            { "shounka_monsteur_jaune", { "", "", -1 } },
            { "shounka_monsteur_rogue", { "", "", -1 } },
            { "shounka_monsteur_bleufonce", { "", "", -1 } },
            { "shounka_monsteur_noir", { "", "", -1 } },
            { "shounka_monsteur", { "", "", -1 } },
                         
                        //jeep
                        { "Mrhounka_jeep_blinde_noir", { "", "", -1 } },
                        { "Mrhounka_jeep_blinde_noir_mat", { "", "", -1 } },
                        { "Mrhounka_jeep_blinde_bleu", { "", "", -1 } },
                        { "Mrhounka_jeep_blinde_bleu_mat", { "", "", -1 } },
                        { "Mrhounka_jeep_blinde_blanc", { "", "", -1 } },
                        { "Mrhounka_jeep_blinde_blanc_mat", { "", "", -1 } },
                        { "Mrhounka_jeep_blinde_violet", { "", "", -1 } },
                        { "Mrhounka_jeep_blinde_violet_mat", { "", "", -1 } },
                        { "Mrhounka_jeep_blinde_rouge", { "", "", -1 } },
                        { "Mrhounka_jeep_blinde_rouge_mat", { "", "", -1 } },
                         // Brinks
            { "shounka_a3_brinks_orange", { "", "", -1 } },
            { "shounka_a3_brinks_violet", { "", "", -1 } },
            { "shounka_a3_brinks_grise", { "", "", -1 } },
            { "shounka_a3_brinks_rose", { "", "", -1 } },
            { "shounka_a3_brinks_jaune", { "", "", -1 } },
            { "shounka_a3_brinks_rogue", { "", "", -1 } },
            { "shounka_a3_brinks_orange", { "", "", -1 } },
            { "shounka_a3_brinks_bleufonce", { "", "", -1 } },
            { "shounka_a3_brinks_noir", { "", "", -1 } },
            { "shounka_a3_brinks", { "", "", -1 } },  
                        //OLD                        
                        { "pop_hotrod_civ", { "", "", -1 } }
                         
        };
     };
        // NEW CARS
        
        class bikes {
        side = "civ";
                vehicles[] = {
                        
                        //Ducati
             { "Mrshounka_ducati_p", { "", "", -1 } },
                         { "Mrshounka_ducati_p_noir", { "", "", -1 } },
                         { "Mrshounka_ducati_p_bf", { "", "", -1 } },
                         { "Mrshounka_ducati_p_r", { "", "", -1 } },
                         { "Mrshounka_ducati_p_i", { "", "", -1 } },
                         { "Mrshounka_ducati_p_rose", { "", "", -1 } },
                         { "Mrshounka_ducati_p_g", { "", "", -1 } },
                         { "Mrshounka_ducati_p_v", { "", "", -1 } },
                         { "Mrshounka_ducati_p_o", { "", "", -1 } },  
                        
                        //Ducati
             { "Mrshounka_yamaha_p", { "", "", -1 } },
                         { "Mrshounka_yamaha_p_noir", { "", "", -1 } },
                         { "Mrshounka_yamaha_p_bf", { "", "", -1 } },
                         { "Mrshounka_yamaha_p_r", { "", "", -1 } },
                         { "Mrshounka_yamaha_p_i", { "", "", -1 } },
                         { "Mrshounka_yamaha_p_rose", { "", "", -1 } },
                         { "Mrshounka_yamaha_p_g", { "", "", -1 } },
                         { "Mrshounka_yamaha_p_v", { "", "", -1 } },
                         { "Mrshounka_yamaha_p_o", { "", "", -1 } }                         
        };
     };
        // NEW CARS
    // class civ_car {
        // side = "civ";
        // vehicles[] = {
            // { "B_Quadbike_01_F", { "", "", -1 } },
            // { "C_Hatchback_01_F", { "", "", -1 } },
            // { "C_Offroad_01_F", { "", "", -1 } },
            // { "C_SUV_01_F", { "", "", -1 } },
            // { "C_Hatchback_01_sport_F", { "", "", -1 } },
            // { "C_Van_01_transport_F", { "", "", -1 } }
                        
        // };
    // };
        

    class kart_shop {
        side = "civ";
        vehicles[] = {
            { "C_Kart_01_Blu_F", { "", "", -1 } },
            { "C_Kart_01_Fuel_F", { "", "", -1 } },
            { "C_Kart_01_Red_F", { "", "", -1 } },
            { "C_Kart_01_Vrana_F", { "", "", -1 } }
        };
    };

    class civ_truck {
        side = "civ";
        vehicles[] = {
            { "C_Van_01_box_F", { "", "", -1 } },
            { "I_Truck_02_transport_F", { "", "", -1 } },
            { "I_Truck_02_covered_F", { "", "", -1 } },
            { "B_Truck_01_transport_F", { "", "", -1 } },
            { "O_Truck_03_transport_F", { "", "", -1 } },
            { "O_Truck_03_covered_F", { "", "", -1 } },
            { "B_Truck_01_box_F", { "", "", -1 } },
            { "O_Truck_03_device_F", { "", "", -1 } },
            { "O_Truck_03_device_F", { "", "", -1 } },
            { "C_Van_01_fuel_F", { "", "", -1 } },
            { "I_Truck_02_fuel_F", { "", "", -1 } },
            { "B_Truck_01_fuel_F", { "", "", -1 } }
        };
    };

    class civ_air {
        side = "civ";
        vehicles[] = {
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } },
            // An-2
            { "Sab_cz_An2", { "", "", -1 } },
            { "Sab_af_An2", { "", "", -1 } },
            { "Sab_ru_An2", { "", "", -1 } },
            { "EC635_Unarmed_CSAT", { "", "", -1 } },
            { "EC635_Unarmed", { "", "", -1 } }
        };
    };

     class civ_ship {
        side = "civ";
        vehicles[] = {
            { "C_Rubberboat", { "", "", -1 } },
            { "C_Boat_Civil_01_F", { "", "", -1 } },
            { "B_SDV_01_F", { "", "", -1 } }
        };
    };

    class reb_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "B_G_Offroad_01_F", { "", "", -1 } },
            { "O_MRAP_02_F", { "", "", -1 } },
            { "B_Heli_Light_01_stripped_F", { "", "", -1 } },
            { "B_G_Offroad_01_armed_F", { "", "", -1 } }
        };
    };

    class med_shop {
        side = "med";
        vehicles[] = {
            { "C_Offroad_01_F", { "", "", -1 } },
            { "I_Truck_02_medical_F", { "", "", -1 } },
            { "O_Truck_03_medical_F", { "", "", -1 } },
            { "B_Truck_01_medical_F", { "", "", -1 } }
        };
    };

    class med_air_hs {
        side = "med";
        vehicles[] = {
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } }
        };
    };

    class cop_car {
        side = "cop";
        vehicles[] = {
           // { "C_Offroad_01_F", { "", "", -1 } },
           // { "C_SUV_01_F", { "", "", -1 } },
          //  { "C_Hatchback_01_sport_F", { "life_coplevel", "SCALAR", 1 } },
           // { "B_MRAP_01_F", { "life_coplevel", "SCALAR", 2 } },
           // { "B_MRAP_01_hmg_F", { "life_coplevel", "SCALAR", 3 } },
            //Peugeot 508 Police Nationale
            { "shounka_a3_cliors_gend_civ", { "life_coplevel", "SCALAR", -1 } },
            { "shounka_a3_508pol", { "life_coplevel", "SCALAR", 1 } },
            { "shounka_a3_508gend", { "life_coplevel", "SCALAR", 1 } },
            { "shounka_a3_508banalise", { "life_coplevel", "SCALAR", 1 } },
            { "Mrshounka_308pol", { "life_coplevel", "SCALAR", 1 } },
            { "Mrshounka_a3_308_gend", { "life_coplevel", "SCALAR", 1 } },
           //BMW
           { "Mrshounka_bmw_gend_b", { "life_coplevel", "SCALAR", 1 } },
             //cop bike
            { "Mrshounka_bmw_gend", { "life_coplevel", "SCALAR", 1 } },
            // Audi Q7
            { "shounka_a3_audiq7_v2_gendarmerie", { "life_coplevel", "SCALAR", 1 } },
            { "Mrshounka_Volks_Touar_police", { "life_coplevel", "SCALAR", 1 } },
            { "Mrshounka_subaru08_police", { "life_coplevel", "SCALAR", 1 } },
            { "Mrshounka_rs_2015_g", { "life_coplevel", "SCALAR", 1 } },
            { "Mrshounka_rs4_gend_p_noir", { "life_coplevel", "SCALAR", 1 } },
            { "Mrshounka_rs4_gend_p_jaune", { "life_coplevel", "SCALAR", 1 } },
            { "Mrshounka_rs4_gend_p_bleufonce", { "life_coplevel", "SCALAR", 1 } },
            { "Mrshounka_rs4_gend_p_blanc", { "life_coplevel", "SCALAR", 1 } },
            { "Mrshounka_agera_gend_p", { "life_coplevel", "SCALAR", 1 } }
        };
    };

    class cop_air {
        side = "cop";
        vehicles[] = {
            { "B_Heli_Light_01_F", { "", "", -1 } },
			{ "EC635_Unarmed_BW", { "life_coplevel", "SCALAR", 3 } },
            { "B_Heli_Transport_01_F", { "life_coplevel", "SCALAR", 3 } }
        };
    };

    class cop_ship {
        side = "cop";
        vehicles[] = {
            { "B_Boat_Transport_01_F", { "", "", -1 } },
            { "C_Boat_Civil_01_police_F", { "", "", -1 } },
            { "B_Boat_Armed_01_minigun_F", { "life_coplevel", "SCALAR", 3 } },
            { "B_SDV_01_F", { "", "", -1 } }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *       1: ARRAY (Rental Price)
    *         Ex: { 200, 200 , 200 , 200 } //civilian, west, independent, east
    *       2: ARRAY (license required)
    *         Ex: { "driver", "" , "" , "" } //civilian, west, independent, east
    *         licenses[] = { {"CIV"}, {"COP"}, {"MEDIC"}, {"EAST"} };
    *    Textures config follows { Texture Name, side, {texture(s)path}}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *    
    */

    class Default {
        vItemSpace = -1;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { -1, -1, -1, -1 };
        textures[] = {};
    };
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //                Polis test
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        class shounka_a3_508pol {
        vItemSpace = 50;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { -1, 30000, -1, -1 };
        textures[] = {};
    };
     class shounka_a3_cliors_gend_civ{
       vItemSpace = 50;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { -1, 95000, -1, -1 };
        textures[] = {};
    };
    class shounka_a3_508gend{
       vItemSpace = 50;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { -1, 95000, -1, -1 };
        textures[] = {};
    };
      class shounka_a3_508banalise{
       vItemSpace = 50;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { -1, 95000, -1, -1 };
        textures[] = {};
    };
     class Mrshounka_agera_gend_p{
       vItemSpace = 50;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { -1, 250000, -1, -1 };
        textures[] = {};
    };
            //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //Transam
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         class shounka_transam_orange{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 95000, -1, -1, -1 };
        textures[] = {};
    };
    class shounka_transam_violet{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 95000, -1, -1, -1 };
        textures[] = {};
    };
      class shounka_transam_grise{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 95000, -1, -1, -1 };
        textures[] = {};
    };
     class shounka_transam_rose{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 95000, -1, -1, -1 };
        textures[] = {};
    };
      class shounka_transam_jaune{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 95000, -1, -1, -1 };
        textures[] = {};
    };
     class shounka_transam_rogue{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 95000, -1, -1, -1 };
        textures[] = {};
    };
      class shounka_transam_bleufonce{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 95000, -1, -1, -1 };
        textures[] = {};
    };
     class shounka_transam_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 95000, -1, -1, -1 };
        textures[] = {};
    };
     class shounka_transam{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 95000, -1, -1, -1 };
        textures[] = {};
    };
            //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //Mercedes c65AMG
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         class Quiet_c65amg_rogue_f{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 210000, -1, -1, -1 };
        textures[] = {};
    };
    class Quiet_c65amg_noir_f{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 210000, -1, -1, -1 };
        textures[] = {};
    };
      class Quiet_c65amg_bleu_f{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 210000, -1, -1, -1 };
        textures[] = {};
    };
     class Quiet_c65amg_chrome_f{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 210000, -1, -1, -1 };
        textures[] = {};
    };
      class Quiet_c65amg_blanche_f{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 210000, -1, -1, -1 };
        textures[] = {};
    };
            //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //Lincoln 1969
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         class Mrshounka_lincoln_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 90000, -1, -1, -1 };
        textures[] = {};
    };
    class Mrshounka_lincoln_bleufonce{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 90000, -1, -1, -1 };
        textures[] = {};
    };
      class Mrshounka_lincoln_rouge{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 90000, -1, -1, -1 };
        textures[] = {};
    };
     class Mrshounka_lincoln_jaune{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 90000, -1, -1, -1 };
        textures[] = {};
    };
      class Mrshounka_lincoln_rose{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 90000, -1, -1, -1 };
        textures[] = {};
    };
     class Mrshounka_lincoln_grise{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 90000, -1, -1, -1 };
        textures[] = {};
    };
      class Mrshounka_lincoln_violet{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 90000, -1, -1, -1 };
        textures[] = {};
    };
     class Mrshounka_lincoln_orange{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 90000, -1, -1, -1 };
        textures[] = {};
    };
            //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         //Golf GTIIV
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         class Mrshounka_golfvi_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000, -1, -1, -1 };
        textures[] = {};
    };
    class Mrshounka_golfvi_bleufonce{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000, -1, -1, -1 };
        textures[] = {};
    };
      class Mrshounka_golfvi_rouge{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000, -1, -1, -1 };
        textures[] = {};
    };
     class Mrshounka_golfvi_rose{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000, -1, -1, -1 };
        textures[] = {};
    };
      class Mrshounka_golfvi_grise{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000, -1, -1, -1 };
        textures[] = {};
    };
     class Mrshounka_golfvi_violet{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000, -1, -1, -1 };
        textures[] = {};
    };
      class Mrshounka_golfvi_orange{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000, -1, -1, -1 };
        textures[] = {};
    };
            //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         //Jeep cherokee
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         class Mrshounka_cherokee_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 120000, -1, -1, -1 };
        textures[] = {};
    };
    class Mrshounka_cherokee_noir_mat{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 120000, -1, -1, -1 };
        textures[] = {};
    };
      class Mrshounka_cherokee_noir_bleu{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 120000, -1, -1, -1 };
        textures[] = {};
    };
     class Mrshounka_cherokee_noir_bleu_mat{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 120000, -1, -1, -1 };
        textures[] = {};
    };
      class Mrshounka_cherokee_noir_blanc{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 120000, -1, -1, -1 };
        textures[] = {};
    };
     class Mrshounka_cherokee_noir_blanc_mat{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 120000, -1, -1, -1 };
        textures[] = {};
    };
      class Mrshounka_cherokee_noir_rouge{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 120000, -1, -1, -1 };
        textures[] = {};
    };
     class Mrshounka_cherokee_noir_rouge_mat{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 120000, -1, -1, -1 };
        textures[] = {};
    };
            //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         //Mercedes c63_2015
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         class Mrshounka_c63_2015_civ{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 200000, -1, -1, -1 };
        textures[] = {};
    };
    class Mrshounka_c63_2015_civ_mat{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 200000, -1, -1, -1 };
        textures[] = {};
    };
      class Mrshounka_c63_2015_civ_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 200000, -1, -1, -1 };
        textures[] = {};
    };
     class Mrshounka_c63_2015_civ_mat_n{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 200000, -1, -1, -1 };
        textures[] = {};
    };
      class Mrshounka_c63_2015_civ_bleufonce{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 200000, -1, -1, -1 };
        textures[] = {};
    };
     class Mrshounka_c63_2015_civ_mat_b{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 200000, -1, -1, -1 };
        textures[] = {};
    };
      class Mrshounka_c63_2015_civ_rouge{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 200000, -1, -1, -1 };
        textures[] = {};
    };
     class Mrshounka_c63_2015_civ_jaune{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 200000, -1, -1, -1 };
        textures[] = {};
    };
     class Mrshounka_c63_2015_civ_rose{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 200000, -1, -1, -1 };
        textures[] = {};
    };
   class Mrshounka_c63_2015_civ_grise{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 200000, -1, -1, -1 };
        textures[] = {};
    };
   class Mrshounka_c63_2015_civ_violet{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 200000, -1, -1, -1 };
        textures[] = {};
    };
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         //Bowler
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         class Mrshounka_Bowler_c_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 95000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_Bowler_c_bleufonce{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 95000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_Bowler_c_rouge{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 95000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_Bowler_c_jaune{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 95000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_Bowler_c_rose{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 95000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_Bowler_c_grise{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 95000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_Bowler_c_violet{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 95000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_Bowler_c_orange{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 95000, -1, -1, -1 };
        textures[] = {};
    };
            //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         //BMW M6
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         class Mrshounka_bmwm6_civ_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 220000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_bmwm6_civ_bleufonce{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 220000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_bmwm6_civ_rouge{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 220000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_bmwm6_civ_jaune{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 220000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_bmwm6_civ_rose{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 220000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_bmwm6_civ_grise{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 220000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_bmwm6_civ_violet{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 220000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_bmwm6_civ_orange{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 220000, -1, -1, -1 };
        textures[] = {};
    };
            //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         //BMW M1
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         class Mrshounka_bmwm1_civ_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 200000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_bmwm1_civ_bleufonce{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 200000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_bmwm1_civ_rouge{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 200000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_bmwm1_civ_jaune{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 200000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_bmwm1_civ_rose{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 200000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_bmwm1_civ_grise{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 200000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_bmwm1_civ_violet{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 200000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_bmwm1_civ_orange{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 200000, -1, -1, -1 };
        textures[] = {};
    };
            //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         //Alfa Romeo
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         class Mrshounka_Alfa_Romeo_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 120000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_Alfa_Romeo_bleufonce{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 120000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_Alfa_Romeo_rouge{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 120000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_Alfa_Romeo_jaune{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 120000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_Alfa_Romeo_rose{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 120000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_Alfa_Romeo_grise{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 120000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_Alfa_Romeo_violet{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 120000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_Alfa_Romeo_orange{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 120000, -1, -1, -1 };
        textures[] = {};
    };
            //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         //Lykan
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         class Mrshounka_lykan_c_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 700000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_lykan_c_bleufonce{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 700000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_lykan_c_rouge{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 700000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_lykan_c_jaune{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 700000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_lykan_c_rose{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 700000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_lykan_c_grise{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 700000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_lykan_c_violet{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 700000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_lykan_c_orange{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 700000, -1, -1, -1 };
        textures[] = {};
    };
            //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         //Hummer H1
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         class Mrshounka_hummer_civ_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 200000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_hummer_civ_bleufonce{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 200000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_hummer_civ_rouge{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 200000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_hummer_civ_jaune{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 200000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_hummer_civ_rose{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 200000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_hummer_civ_grise{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 200000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_hummer_civ_violet{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 200000, -1, -1, -1 };
        textures[] = {};
    };
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         //Ferrari
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         class shounka_f430_spider_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 300000, -1, -1, -1 };
        textures[] = {};
    };
             class shounka_f430_spider_bleufonce{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 300000, -1, -1, -1 };
        textures[] = {};
    };
             class shounka_f430_spider_rouge{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 300000, -1, -1, -1 };
        textures[] = {};
    };
             class shounka_f430_spider_jaune{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 300000, -1, -1, -1 };
        textures[] = {};
    };
             class shounka_f430_spider_rose{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 300000, -1, -1, -1 };
        textures[] = {};
    };
             class shounka_f430_spider_grise{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 300000, -1, -1, -1 };
        textures[] = {};
    };
             class shounka_f430_spider_violet{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 300000, -1, -1, -1 };
        textures[] = {};
    };
             class shounka_f430_spider_orange{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 300000, -1, -1, -1 };
        textures[] = {};
    };
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         //Koenigsegg
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         class Mrshounka_agera_p{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 600000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_agera_p_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 600000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_agera_p_bleu{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 600000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_agera_p_jaune{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 600000, -1, -1, -1 };
        textures[] = {};
    };
            //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         //Porche 911
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         class mrshounka_92_civ_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 150000, -1, -1, -1 };
        textures[] = {};
    };
             class mrshounka_92_civ_bleufonce{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 150000, -1, -1, -1 };
        textures[] = {};
    };
             class mrshounka_92_civ_rouge{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 150000, -1, -1, -1 };
        textures[] = {};
    };
             class mrshounka_92_civ_jaune{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 150000, -1, -1, -1 };
        textures[] = {};
    };
             class mrshounka_92_civ_rose{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 150000, -1, -1, -1 };
        textures[] = {};
    };
             class mrshounka_92_civ_grise{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 150000, -1, -1, -1 };
        textures[] = {};
    };
             class mrshounka_92_civ_violet{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 150000, -1, -1, -1 };
        textures[] = {};
    };
             class mrshounka_92_civ_orange{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 150000, -1, -1, -1 };
        textures[] = {};
    };
       //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         // Nissan GTR
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         class mrshounka_a3_gtr_civ{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 450000, -1, -1, -1 };
        textures[] = {};
    };
             class mrshounka_a3_gtr_civ_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 450000, -1, -1, -1 };
        textures[] = {};
    };
             class mrshounka_a3_gtr_civ_bleu{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 450000, -1, -1, -1 };
        textures[] = {};
    };
            //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         // Lambo huracan
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         class mrshounka_huracan_c_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 150000, -1, -1, -1 };
        textures[] = {};
    };
             class mrshounka_huracan_c_bleufonce{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 150000, -1, -1, -1 };
        textures[] = {};
    };
             class mrshounka_huracan_c_rouge{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 150000, -1, -1, -1 };
        textures[] = {};
    };
             class mrshounka_huracan_c_jaune{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 150000, -1, -1, -1 };
        textures[] = {};
    };
             class mrshounka_huracan_c_rose{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 150000, -1, -1, -1 };
        textures[] = {};
    };
             class mrshounka_huracan_c_grise{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 150000, -1, -1, -1 };
        textures[] = {};
    };
             class mrshounka_huracan_c_violet{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 150000, -1, -1, -1 };
        textures[] = {};
    };
             class mrshounka_huracan_c_orange{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 150000, -1, -1, -1 };
        textures[] = {};
    };
         //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         // Citroen DS3
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         class Mrshounka_a3_ds3_civ_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 45000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_a3_ds3_civ_bleufonce{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 45000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_a3_ds3_civ_rouge{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 45000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_a3_ds3_civ_jaune{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 45000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_a3_ds3_civ_rose{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 45000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_a3_ds3_civ_grise{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 45000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_a3_ds3_civ_violet{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 45000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_a3_ds3_civ_orange{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 45000, -1, -1, -1 };
        textures[] = {};
    };
         //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //          Nemo
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         class shounka_nemo{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 20000, -1, -1, -1 };
        textures[] = {};
    };
             class shounka_nemo_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 20000, -1, -1, -1 };
        textures[] = {};
    };
             class shounka_nemo_bleufonce{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 20000, -1, -1, -1 };
        textures[] = {};
    };
             class shounka_nemo_rouge{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 20000, -1, -1, -1 };
        textures[] = {};
    };
             class shounka_nemo_jaune{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 20000, -1, -1, -1 };
        textures[] = {};
    };
             class shounka_nemo_rose{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 20000, -1, -1, -1 };
        textures[] = {};
    };
             class shounka_nemo_grise{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 20000, -1, -1, -1 };
        textures[] = {};
    };
             class shounka_nemo_violet{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 20000, -1, -1, -1 };
        textures[] = {};
    };
             class shounka_nemo_orange{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 20000, -1, -1, -1 };
        textures[] = {};
    };
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //          smart car
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         class Mrshounka_a3_smart_civ{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 50000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_a3_smart_civ_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 50000, -1, -1, -1 };
        textures[] = {};
    };
             class Mrshounka_a3_smart_civ_bleu{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 50000, -1, -1, -1 };
        textures[] = {};
    };
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //                Renault
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         class shounka_a3_cliors_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 40000, 30000, -1, -1 };
        textures[] = {};
    };
        class shounka_a3_cliors_civ_noir {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 40000, 30000, -1, -1 };
        textures[] = {};
    };
        class shounka_a3_cliors_civ_bleufonce {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 40000, 30000, -1, -1 };
        textures[] = {};
    };
        class shounka_a3_cliors_civ_rouge {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 40000, 30000, -1, -1 };
        textures[] = {};
    };
        class shounka_a3_cliors_civ_jaune {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 40000, 30000, -1, -1 };
        textures[] = {};
    };
        class shounka_a3_cliors_civ_rose {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 40000, 30000, -1, -1 };
        textures[] = {};
    };
        class shounka_a3_cliors_civ_grise {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 40000, 30000, -1, -1 };
        textures[] = {};
    };
        class shounka_a3_cliors_civ_violet {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 40000, 30000, -1, -1 };
        textures[] = {};
    };
        class shounka_a3_cliors_civ_orange {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 40000, 30000, -1, -1 };
        textures[] = {};
    };
        
        
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //                Citroen
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        
        class shounka_a3_ds4_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 40000, 30000, -1, -1 };
        textures[] = {};
    };
        class shounka_a3_ds4_civ_noir {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 40000, 30000, -1, -1 };
        textures[] = {};
    };
        class shounka_a3_ds4_civ_bleufonce {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 40000, 30000, -1, -1 };
        textures[] = {};
    };
        class shounka_a3_ds4_civ_rouge {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 40000, 30000, -1, -1 };
        textures[] = {};
    };
        class shounka_a3_ds4_civ_jaune {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 40000, 30000, -1, -1 };
        textures[] = {};
    };
        class shounka_a3_ds4_civ_rose {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 40000, 30000, -1, -1 };
        textures[] = {};
    };
        class shounka_a3_ds4_civ_grise {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 40000, 30000, -1, -1 };
        textures[] = {};
    };
        class shounka_a3_ds4_civ_violet {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 40000, 30000, -1, -1 };
        textures[] = {};
    };
        class shounka_a3_ds4_civ_orange {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 40000, 30000, -1, -1 };
        textures[] = {};
    };
        
        
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //                Peugeot
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        
        class shounka_a3_peugeot508_civ {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 40000, 30000, -1, -1 };
        textures[] = {};
    };
        class shounka_a3_peugeot508_civ_noir {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 40000, 30000, -1, -1 };
        textures[] = {};
    };
        class shounka_a3_peugeot508_civ_bleufonce {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 40000, 30000, -1, -1 };
        textures[] = {};
    };
        class shounka_a3_peugeot508_civ_rouge {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 40000, 30000, -1, -1 };
        textures[] = {};
    };
        class shounka_a3_peugeot508_civ_jaune {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 40000, 30000, -1, -1 };
        textures[] = {};
    };
        class shounka_a3_peugeot508_civ_rose {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 40000, 30000, -1, -1 };
        textures[] = {};
    };
        class shounka_a3_peugeot508_civ_grise {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 40000, 30000, -1, -1 };
        textures[] = {};
    };
        class shounka_a3_peugeot508_civ_violet {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 40000, 30000, -1, -1 };
        textures[] = {};
    };
        class shounka_a3_peugeot508_civ_orange {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 40000, 30000, -1, -1 };
        textures[] = {};
    };    
       //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //          Renault Twingo
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
            class Mrshounka_twingo_p_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 50000, -1, -1, -1 };
        textures[] = {};
    };
            class Mrshounka_twingo_p_bf{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 50000, -1, -1, -1 };
        textures[] = {};
    };
            class Mrshounka_twingo_p_r{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 50000, -1, -1, -1 };
        textures[] = {};
    };
            class Mrshounka_twingo_p_j{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 50000, -1, -1, -1 };
        textures[] = {};
    };
            class Mrshounka_twingo_p_rose{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 50000, -1, -1, -1 };
        textures[] = {};
    };
            class Mrshounka_twingo_p_g{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 50000, -1, -1, -1 };
        textures[] = {};
    };
                class Mrshounka_twingo_p_v{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 50000, -1, -1, -1 };
        textures[] = {};
    };
                class Mrshounka_twingo_p_o{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 50000, -1, -1, -1 };
        textures[] = {};
    };     
 
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //           Renault 5
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         class Mrshounka_r5_civ{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 30000, -1, -1, -1 };
        textures[] = {};
    };
    class Mrshounka_r5_belufonce{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 30000, -1, -1, -1 };
        textures[] = {};
    };
         class Mrshounka_r5_jauna{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 30000, -1, -1, -1 };
        textures[] = {};
    };
            class Mrshounka_r5_rose{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 30000, -1, -1, -1 };
        textures[] = {};
    };
            class Mrshounka_r5_grise{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 30000, -1, -1, -1 };
        textures[] = {};
    };
                class Mrshounka_r5_violet{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 30000, -1, -1, -1 };
        textures[] = {};
    };
                class Mrshounka_r5_orange{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 30000, -1, -1, -1 };
        textures[] = {};
    };     
 
       //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //           Chevrolet Monster
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||

        class shounka_clk_orange{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 30000, -1, -1, -1 };
        textures[] = {};
    };
       class shounka_clk_violet{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 30000, -1, -1, -1 };
        textures[] = {};
    };
        class shounka_clk_grise{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 30000, -1, -1, -1 };
        textures[] = {};
    };
       class shounka_clk_rose{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 30000, -1, -1, -1 };
        textures[] = {};
    };
       class shounka_clk_jaune{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 30000, -1, -1, -1 };
        textures[] = {};
    };
       class shounka_clk_rogue{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 30000, -1, -1, -1 };
        textures[] = {};
    };
    class shounka_clk_bleufonce{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 30000, -1, -1, -1 };
        textures[] = {};
    };
     class shounka_clk_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 30000, -1, -1, -1 };
        textures[] = {};
    };     
       class shounka_clk{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 30000, -1, -1, -1 };
        textures[] = {};
    };  
    
 
       //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //           Chevrolet Monster
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
       class shounka_monsteur_orange{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 30000, -1, -1, -1 };
        textures[] = {};
    };
            class shounka_monsteur_violet{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 30000, -1, -1, -1 };
        textures[] = {};
    };
            class shounka_monsteur_grise{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 30000, -1, -1, -1 };
        textures[] = {};
    };
            class shounka_monsteur_rose{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 30000, -1, -1, -1 };
        textures[] = {};
    };
            class shounka_monsteur_jaune{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 30000, -1, -1, -1 };
        textures[] = {};
    };
            class shounka_monsteur_rogue{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 30000, -1, -1, -1 };
        textures[] = {};
    };
            class shounka_monsteur_bleufonce{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 30000, -1, -1, -1 };
        textures[] = {};
    };
                class shounka_monsteur_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 30000, -1, -1, -1 };
        textures[] = {};
    };
                class shounka_monsteur{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 30000, -1, -1, -1 };
        textures[] = {};
    };     
    
       //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //       Mclaren MP4-12C
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         class shounka_mp4_orange{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 250000, -1, -1, -1 };
        textures[] = {};
    };
            class shounka_mp4_violet{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 250000, -1, -1, -1 };
        textures[] = {};
    };
            class shounka_mp4_rose{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 250000, -1, -1, -1 };
        textures[] = {};
    };
            class shounka_mp4_jaune{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 250000, -1, -1, -1 };
        textures[] = {};
    };
            class shounka_mp4_rogue{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 250000, -1, -1, -1 };
        textures[] = {};
    };

      class shounka_mp4_bleufonce{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 250000, -1, -1, -1 };
        textures[] = {};
    };
                class shounka_mp4_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 250000, -1, -1, -1 };
        textures[] = {};
    };
                class shounka_mp4{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 250000, -1, -1, -1 };
        textures[] = {};
    };     
      
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //       Ford mustang
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         class Mrshounka_mustang_orange{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000, -1, -1, -1 };
        textures[] = {};
    };
            class Mrshounka_mustang_violet{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000, -1, -1, -1 };
        textures[] = {};
    };
            class Mrshounka_mustang_grise{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000, -1, -1, -1 };
        textures[] = {};
    };
            class Mrshounka_mustang_rose{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000, -1, -1, -1 };
        textures[] = {};
    };
            class Mrshounka_mustang_jaune{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000, -1, -1, -1 };
        textures[] = {};
    };
            class Mrshounka_mustang_rogue{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000, -1, -1, -1 };
        textures[] = {};
    };
            class Mrshounka_mustang_bleufonce{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000, -1, -1, -1 };
        textures[] = {};
    };
                class Mrshounka_mustang_mat_b{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000, -1, -1, -1 };
        textures[] = {};
    };
                class Mrshounka_mustang_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000, -1, -1, -1 };
        textures[] = {};
    };    
                    class Mrshounka_mustang_civ{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000, -1, -1, -1 };
        textures[] = {};
    };    
                    class Mrshounka_mustang_mat_n{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000, -1, -1, -1 };
        textures[] = {};
    };    
                        class Mrshounka_mustang_mat{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000, -1, -1, -1 };
        textures[] = {};
    };    
  
         //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //          Pagani Huayra
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         class Mrshounka_pagani_c_orange{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 550000, -1, -1, -1 };
        textures[] = {};
    };
            class Mrshounka_pagani_c_violet{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 550000, -1, -1, -1 };
        textures[] = {};
    };
            class Mrshounka_pagani_c_grise{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 550000, -1, -1, -1 };
        textures[] = {};
    };
            class Mrshounka_pagani_c_rose{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 550000, -1, -1, -1 };
        textures[] = {};
    };
            class Mrshounka_pagani_c_jaune{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 550000, -1, -1, -1 };
        textures[] = {};
    };
            class Mrshounka_pagani_c_rogue{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 550000, -1, -1, -1 };
        textures[] = {};
    };
            class Mrshounka_pagani_c_bleufonce{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 550000, -1, -1, -1 };
        textures[] = {};
    };
                class Mrshounka_pagani_c_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 550000, -1, -1, -1 };
        textures[] = {};
    };
         //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //           Porche 911
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         class shounka_porsche911_orange{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 105000, -1, -1, -1 };
        textures[] = {};
    };
            class shounka_porsche911_violet{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 105000, -1, -1, -1 };
        textures[] = {};
    };
            class shounka_porsche911_grise{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 105000, -1, -1, -1 };
        textures[] = {};
    };
            class shounka_porsche911_rose{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 105000, -1, -1, -1 };
        textures[] = {};
    };
            class shounka_porsche911_jaune{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 105000, -1, -1, -1 };
        textures[] = {};
    };
            class shounka_porsche911_rogue{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 105000, -1, -1, -1 };
        textures[] = {};
    };
            class shounka_porsche911_bleufonce{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 105000, -1, -1, -1 };
        textures[] = {};
    };
                class shounka_porsche911_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 105000, -1, -1, -1 };
        textures[] = {};
    };   
       //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //           Ford Raptor2
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         class Mrshounka_raptor2_orange{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000, -1, -1, -1 };
        textures[] = {};
    };
            class Mrshounka_raptor2_violet{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000, -1, -1, -1 };
        textures[] = {};
    };
            class Mrshounka_raptor2_grise{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000, -1, -1, -1 };
        textures[] = {};
    };
            class Mrshounka_raptor2_rose{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000, -1, -1, -1 };
        textures[] = {};
    };
            class Mrshounka_raptor2_jaune{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000, -1, -1, -1 };
        textures[] = {};
    };
            class Mrshounka_raptor2_rogue{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000, -1, -1, -1 };
        textures[] = {};
    };
            class Mrshounka_raptor2_bleufonce{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000, -1, -1, -1 };
        textures[] = {};
    };
                class Mrshounka_raptor2_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000, -1, -1, -1 };
        textures[] = {};
    };
                class Mrshounka_raptor2_civ{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000, -1, -1, -1 };
        textures[] = {};
    }; 
       //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //           Ford Raptor
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         class Mrshounka_raptor_orange{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000, -1, -1, -1 };
        textures[] = {};
    };
            class Mrshounka_raptor_violet{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000, -1, -1, -1 };
        textures[] = {};
    };
            class Mrshounka_raptor_grise{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000, -1, -1, -1 };
        textures[] = {};
    };
            class Mrshounka_raptor_rose{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000, -1, -1, -1 };
        textures[] = {};
    };
            class Mrshounka_raptor_jaune{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000, -1, -1, -1 };
        textures[] = {};
    };
            class Mrshounka_raptor_rogue{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000, -1, -1, -1 };
        textures[] = {};
    };
            class Mrshounka_raptor_bleufonce{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000, -1, -1, -1 };
        textures[] = {};
    };
                class Mrshounka_raptor_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000, -1, -1, -1 };
        textures[] = {};
    };
                class Mrshounka_raptor_civ{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000, -1, -1, -1 };
        textures[] = {};
    }; 
       //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //           Subaru
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
      class Mrshounka_subaru08_police{
       vItemSpace = 50;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { 50000, -1, -1, -1 };
        textures[] = {};
    };
            class Mrshounka_subaru08_orange{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 280000 , -1, -1, -1 };
        textures[] = {};
    };
            class Mrshounka_subaru08_violet{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 280000 , -1, -1, -1 };
        textures[] = {};
    };
            class Mrshounka_subaru08_grise{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 280000 , -1, -1, -1 };
        textures[] = {};
    };
            class Mrshounka_subaru08_rose{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 280000 , -1, -1, -1 };
        textures[] = {};
    };
            class Mrshounka_subaru08_jaune{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 280000 , -1, -1, -1 };
        textures[] = {};
    };
            class Mrshounka_subaru08_rogue{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 280000 , -1, -1, -1 };
        textures[] = {};
    };
                class Mrshounka_subaru08_bleufonce{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 280000 , -1, -1, -1 };
        textures[] = {};
    };
                class Mrshounka_subaru08_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 280000 , -1, -1, -1 };
        textures[] = {};
    }; 
                   class Mrshounka_subaru08_civ{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 280000 , -1, -1, -1 };
        textures[] = {};
    };
     
       //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //              Audi Rs6
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        
        class shounka_rs6_orange{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 190000, -1, -1, -1 };
        textures[] = {};
    };
            class shounka_rs6_violet{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 190000, -1, -1, -1 };
        textures[] = {};
    };
            class shounka_rs6_grise{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 190000, -1, -1, -1 };
        textures[] = {};
    };
            class shounka_rs6_rose{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 190000, -1, -1, -1 };
        textures[] = {};
    };
            class shounka_rs6_jaune{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 190000, -1, -1, -1 };
        textures[] = {};
    };
            class shounka_rs6_rogue{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 190000, -1, -1, -1 };
        textures[] = {};
    };
            class shounka_rs6_bleufonce{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 190000, -1, -1, -1 };
        textures[] = {};
    };
                class shounka_rs6_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 190000, -1, -1, -1 };
        textures[] = {};
    };
                class shounka_rs6_civ{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 190000, -1, -1, -1 };
        textures[] = {};
    };

       //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //              Audi Rs4
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        
        class shounka_rs4_orange{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 90000, -1, -1, -1 };
        textures[] = {};
    };
            class shounka_rs4_violet{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 90000, -1, -1, -1 };
        textures[] = {};
    };
            class shounka_rs4_grise{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 90000, -1, -1, -1 };
        textures[] = {};
    };
            class shounka_rs4_rose{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 90000, -1, -1, -1 };
        textures[] = {};
    };
            class shounka_rs4_jaune{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 90000, -1, -1, -1 };
        textures[] = {};
    };
            class shounka_rs4_rogue{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 90000, -1, -1, -1 };
        textures[] = {};
    };
            class shounka_rs4_bleufonce{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 90000, -1, -1, -1 };
        textures[] = {};
    };
                class shounka_rs4_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 90000, -1, -1, -1 };
        textures[] = {};
    };
                class shounka_rs4_civ{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 90000, -1, -1, -1 };
        textures[] = {};
    };

       //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //              Mercedes sprinter 
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        
        class shounka_a3_spr_civ{
       vItemSpace = 100;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 45000, -1, -1, -1 };
        textures[] = {};
    };
         class shounka_a3_spr_civ_bleufonce{
       vItemSpace = 100;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 45000, -1, -1, -1 };
        textures[] = {};
    };
     class shounka_a3_spr_civ_rogue{
       vItemSpace = 100;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 45000, -1, -1, -1 };
        textures[] = {};
    };
     class shounka_a3_spr_civ_jaune{
       vItemSpace = 100;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 45000, -1, -1, -1 };
        textures[] = {};
    };
     class shounka_a3_spr_civ_rose{
       vItemSpace = 100;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 45000, -1, -1, -1 };
        textures[] = {};
    };
     class shounka_a3_spr_civ_grise{
       vItemSpace = 100;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 45000, -1, -1, -1 };
        textures[] = {};
    };
     class shounka_a3_spr_civ_violet{
       vItemSpace = 100;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 45000, -1, -1, -1 };
        textures[] = {};
    };
     class shounka_a3_spr_civ_orange{
       vItemSpace = 100;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 45000, -1, -1, -1 };
        textures[] = {};
    };
    class shounka_a3_spr_civ_vf{
       vItemSpace = 100;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 45000, -1, -1, -1 };
        textures[] = {};
    };
    
    class shounka_a3_spr_civ_um{
       vItemSpace = 100;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 45000, -1, -1, -1 };
        textures[] = {};
    };
    
    class shounka_a3_spr_civ_b{
       vItemSpace = 100;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 45000, -1, -1, -1 };
        textures[] = {};
    };
    class shounka_a3_spr_civ_al{
       vItemSpace = 100;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 45000, -1, -1, -1 };
        textures[] = {};
    };
    
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //              Renault Magnum Truck 
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        
        
        class shounka_a3_reunaultmagnum_f{
       vItemSpace = 300;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        rentalprice[] = { 275000, -1, -1, -1 };
        textures[] = {};
                };
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //              Man Truck 
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        
      class shounka_a3_mantgs_2_2_in_noir{
       vItemSpace = 275;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        rentalprice[] = { 250000, -1, -1, -1 };
        textures[] = {};
        };
        class shounka_a3_mantgs_2_2_in{
       vItemSpace = 275;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        rentalprice[] = { 250000, -1, -1, -1 };
        textures[] = {};
        };
        class shounka_a3_mantgs_2_2_f{
       vItemSpace = 275;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        rentalprice[] = { 250000, -1, -1, -1 };
        textures[] = {};
        };
        class shounka_a3_mantgs_f{
       vItemSpace = 50;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        rentalprice[] = { 250000, -1, -1, -1 };
        textures[] = {};
        };
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //              Iveco Truck 
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        
        class shounka_ivceco_orange{
       vItemSpace = 450;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        rentalprice[] = { 400000, -1, -1, -1 };
        textures[] = {};
        };
        class shounka_ivceco_violet{
       vItemSpace = 450;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        rentalprice[] = { 400000, -1, -1, -1 };
        textures[] = {};
        };
        class shounka_ivceco_grise{
       vItemSpace = 450;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        rentalprice[] = { 400000, -1, -1, -1 };
        textures[] = {};         
        };
        class shounka_ivceco_rose{
       vItemSpace = 450;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        rentalprice[] = { 400000, -1, -1, -1 };
        textures[] = {};             
        };
       class shounka_ivceco_jaune{
       vItemSpace = 450;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        rentalprice[] = { 400000, -1, -1, -1 };
        textures[] = {};            
        };
       class shounka_ivceco_rogue{
       vItemSpace = 450;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        rentalprice[] = { 400000, -1, -1, -1 };
        textures[] = {};              
        };
         class shounka_ivceco_bleufonce{
       vItemSpace = 450;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        rentalprice[] = { 400000, -1, -1, -1 };
        textures[] = {};
       };
        class shounka_ivceco_noir{
       vItemSpace = 450;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        rentalprice[] = { 400000, -1, -1, -1 };
        textures[] = {};
       };
       class Mrshounka_a3_iveco_f{
       vItemSpace = 450;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        rentalprice[] = { 400000, -1, -1, -1 };
        textures[] = {};
        };
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //              Daf Truck 
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        
        
    
       class shounka_a3_dafxf_euro6_f{
       vItemSpace = 50;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        rentalprice[] = { 250000, -1, -1, -1 };
        textures[] = {};
        };

        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //              Brinks värdetransport
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        
        class shounka_a3_brinks_orange{
       vItemSpace = 100;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        rentalprice[] = { 250000, -1, -1, -1 };
        textures[] = {};
        };
        class shounka_a3_brinks_violet{
       vItemSpace = 100;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        rentalprice[] = { 250000, -1, -1, -1 };
        textures[] = {};
        };
       class shounka_a3_brinks_grise{
       vItemSpace = 100;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        rentalprice[] = { 250000, -1, -1, -1 };
        textures[] = {};
        };
         class shounka_a3_brinks_rose{
       vItemSpace = 100;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        rentalprice[] = { 250000, -1, -1, -1 };
        textures[] = {};
        };
         class shounka_a3_brinks_jaune{
       vItemSpace = 100;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        rentalprice[] = { 250000, -1, -1, -1 };
        textures[] = {};
        };
        class shounka_a3_brinks_rogue{
       vItemSpace = 100;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        rentalprice[] = { 250000, -1, -1, -1 };
        textures[] = {};
        };
         class shounka_a3_brinks_bleufonce{
       vItemSpace = 100;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        rentalprice[] = { 250000, -1, -1, -1 };
        textures[] = {};
        };
      class shounka_a3_brinks_noir{
       vItemSpace = 100;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        rentalprice[] = { 250000, -1, -1, -1 };
        textures[] = {};
        };
      class shounka_a3_brinks{
       vItemSpace = 100;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        rentalprice[] = { 250000, -1, -1, -1 };
        textures[] = {};
        };
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //              Audi Q7 
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        
        class shounka_a3_audiq7_bleu{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 100000, -1, -1, -1 };
        textures[] = {};
        };
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //              An-2 Flyg 
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        class Sab_cz_An2{
       vItemSpace = 200;
        licenses[] = { {"pilot"}, {"cAir"}, {"mAir"}, {""} };
        rentalprice[] = { 400000, -1, -1, -1 };
        textures[] = {};
        };
       class Sab_af_An2{
       vItemSpace = 200;
        licenses[] = { {"pilot"}, {"cAir"}, {"mAir"}, {""} };
        rentalprice[] = { 400000, -1, -1, -1 };
        textures[] = {};
        };
        class Sab_ru_An2{
       vItemSpace = 200;
        licenses[] = { {"pilot"}, {"cAir"}, {"mAir"}, {""} };
        rentalprice[] = { 400000, -1, -1, -1 };
        textures[] = {};
        };
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //             Ford Raptor
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         class Quiet_ford_raptor_rogue_f{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 320000 , -1, -1, -1 };
        textures[] = {};
        };
        class Quiet_ford_raptor_noir_f{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 320000 , -1, -1, -1 };
        textures[] = {};
        };
        class Quiet_ford_raptor_bleu_f{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 320000 , -1, -1, -1 };
        textures[] = {};
        };
        class Quiet_ford_raptor_chrome_f{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 320000 , -1, -1, -1 };
        textures[] = {};
        };
        class Quiet_ford_raptor_blanche_f{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 320000 , -1, -1, -1 };
        textures[] = {};
        };
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //             Dodge Charger 1969
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        class Quiet_1969charger_rogue_f{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 175000 , -1, -1, -1 };
        textures[] = {};
        };
        class Quiet_1969charger_noir_f{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 175000 , -1, -1, -1 };
        textures[] = {};
        };
        class Quiet_1969charger_bleu_f{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 175000 , -1, -1, -1 };
        textures[] = {};
        };
       class Quiet_1969charger_chrome_f{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 175000 , -1, -1, -1 };
        textures[] = {};
        };
        class Quiet_1969charger_blanche_f{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 175000 , -1, -1, -1 };
        textures[] = {};
        };
        class quiet_dodge1969_spawn_f{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 175000 , -1, -1, -1 };
        textures[] = {};
        };
         //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //             Dodge Charger 2015
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        
        class Quiet_dodge_15_rogue_f{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 280000 , -1, -1, -1 };
        textures[] = {};
        };
       class Quiet_dodge_15_noir_f{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 280000 , -1, -1, -1 };
        textures[] = {};
        };
        class Quiet_dodge_15_bleu_f{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 280000 , -1, -1, -1 };
        textures[] = {};
        };
        class Quiet_dodge_15_chrome_f{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 280000 , -1, -1, -1 };
        textures[] = {};
        };
        class Quiet_dodge_15_blanche_f{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 280000 , -1, -1, -1 };
        textures[] = {};
        };
       class quiet_dodge_charger_2015_spawn_f{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 280000 , -1, -1, -1 };
        textures[] = {};
        };
         //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //             Bugatti Veyron
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        
       class quiet_Bugatti_blanche_f{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 750000 , -1, -1, -1 };
        textures[] = {};
        };
         //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //             Audi Rs4 Polis
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        
        class Mrshounka_rs4_gend_p_bleufonce{
       vItemSpace = 50;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { -1 , 45000, -1, -1 };
        textures[] = {};
        };
        class Mrshounka_rs4_gend_p_jaune{
       vItemSpace = 50;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = {  , -1, 45000, -1 };
        textures[] = {};
        };
        class Mrshounka_rs4_gend_p_noir{
       vItemSpace = 50;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { -1 ,45000, -1, -1 };
        textures[] = {};
        };
        class Mrshounka_rs4_gend_p_blanc{
       vItemSpace = 50;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { -1 , 45000, -1, -1 };
        textures[] = {};
        };
         //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //             Mercedes 190
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        
        class Mrshounka_mercedes_190_p_orange{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 120000 , -1, -1, -1 };
        textures[] = {};
        };
         class Mrshounka_mercedes_190_p_violet{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 120000 , -1, -1, -1 };
        textures[] = {};
        };
      class Mrshounka_mercedes_190_p_grise{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 180000 , -1, -1, -1 };
        textures[] = {};
        };
       class Mrshounka_mercedes_190_p_rose{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 180000 , -1, -1, -1 };
        textures[] = {};
        };
         class Mrshounka_mercedes_190_p_jaune{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 180000 , -1, -1, -1 };
        textures[] = {};
        };
        class Mrshounka_mercedes_190_p_rogue{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 180000 , -1, -1, -1 };
        textures[] = {};
        };
         class Mrshounka_mercedes_190_p_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 180000 , -1, -1, -1 };
        textures[] = {};
        };
       class Mrshounka_mercedes_190_p_civ{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 180000 , -1, -1, -1 };
        textures[] = {};
        };
        class Mrshounka_mercedes_190_p_bleufonce{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 180000 , -1, -1, -1 };
        textures[] = {};
        };
         //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //             Renault Megane RS
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        
        class Mrshounka_rs_2015_g{
       vItemSpace = 50;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { -1 , 80000, -1, -1 };
        textures[] = {};
        };
       class Mrshounka_megane_rs_2015_orange{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 180000 , -1, -1, -1 };
        textures[] = {};
        };
        class Mrshounka_megane_rs_2015_violet{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 180000 , -1, -1, -1 };
        textures[] = {};
        };
        class Mrshounka_megane_rs_2015_grise{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 180000 , -1, -1, -1 };
        textures[] = {};
        };
        class Mrshounka_megane_rs_2015_rose{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 180000 , -1, -1, -1 };
        textures[] = {};
        };
       class Mrshounka_megane_rs_2015_jaune{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 180000 , -1, -1, -1 };
        textures[] = {};
        };
        class Mrshounka_megane_rs_2015_rogue{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 180000 , -1, -1, -1 };
        textures[] = {};
        };
        class Mrshounka_megane_rs_2015_bleufonce{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 180000 , -1, -1, -1 };
        textures[] = {};
        };
       class Mrshounka_megane_rs_2015_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 180000 , -1, -1, -1 };
        textures[] = {};
        };
         class Mrshounka_megane_rs_2015_civ{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 180000 , -1, -1, -1 };
        textures[] = {};
        };
         //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //             Mitsubishi Lancer
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        
        class Mrshounka_evox_gend{
       vItemSpace = 50;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { -1 , 180000, -1, -1 };
        textures[] = {};
        };
       class Mrshounka_evox_orange{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 180000 , -1, -1, -1 };
        textures[] = {};
        };
        class Mrshounka_evox_violet{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 180000 , -1, -1, -1 };
        textures[] = {};
        };
         class Mrshounka_evox_grise{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 180000 , -1, -1, -1 };
        textures[] = {};
        };
        class Mrshounka_evox_rose{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 180000 , -1, -1, -1 };
        textures[] = {};
        };
        class Mrshounka_evox_jaune{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 180000 , -1, -1, -1 };
        textures[] = {};
                };
       class Mrshounka_evox_rogue{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 180000 , -1, -1, -1 };
        textures[] = {};
        };
        class Mrshounka_evox_bleufonce{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 180000 , -1, -1, -1 };
        textures[] = {};
        };
       class Mrshounka_evox_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 180000 , -1, -1, -1 };
        textures[] = {};
        };
        class Mrshounka_evox_civ{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 180000 , -1, -1, -1 };
        textures[] = {};
        };
         //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //             Porsche Cayenne
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        
        class Mrshounka_cayenne_p_orange{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 150000 , -1, -1, -1 };
        textures[] = {};
        };
        class Mrshounka_cayenne_p_violet{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 150000 , -1, -1, -1 };
        textures[] = {};
        };
       class Mrshounka_cayenne_p_grise{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 150000 , -1, -1, -1 };
        textures[] = {};
        };
        class Mrshounka_cayenne_p_rose{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 150000 , -1, -1, -1 };
        textures[] = {};
        };
        class Mrshounka_cayenne_p_jaune{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 150000 , -1, -1, -1 };
        textures[] = {};
        };
      class Mrshounka_cayenne_p_rogue{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 150000 , -1, -1, -1 };
        textures[] = {};
        };
        class Mrshounka_cayenne_p_bleufonce{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 150000 , -1, -1, -1 };
        textures[] = {};
        };
        class Mrshounka_cayenne_p_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 150000 , -1, -1, -1 };
        textures[] = {};
        };
      class Mrshounka_cayenne_p_civ{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 150000 , -1, -1, -1 };
        textures[] = {};
        };
         //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //             Citroen C4
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        
      class Mrshounka_c4_p_orange{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 120000 , -1, -1, -1 };
        textures[] = {};
        };
        class Mrshounka_c4_p_violet{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 120000 , -1, -1, -1 };
        textures[] = {};
        };
       class Mrshounka_c4_p_grise{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 120000 , -1, -1, -1 };
        textures[] = {};
        };
        class Mrshounka_c4_p_rose{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 120000 , -1, -1, -1 };
        textures[] = {};
        };
       class Mrshounka_c4_p_jaune{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 120000 , -1, -1, -1 };
        textures[] = {};
        };
        class Mrshounka_c4_p_rogue{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 120000 , -1, -1, -1 };
        textures[] = {};
        };
        class Mrshounka_c4_p_bleufonce{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 120000 , -1, -1, -1 };
        textures[] = {};
        };
        class Mrshounka_c4_p_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 120000 , -1, -1, -1 };
        textures[] = {};
        };
      class Mrshounka_c4_p_civ{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 120000 , -1, -1, -1 };
        textures[] = {};
        };
         //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //             BMW 1 Series M
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        
        class Mrshounka_bmw_gend{
       vItemSpace = 50;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { -1 , 50000, -1, -1 };
        textures[] = {};
        };
       class Mrshounka_bmw_gend_b{
       vItemSpace = 50;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { -1 , 50000, -1, -1 };
        textures[] = {};
        };
         //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //             Peugeot 308 Gti
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
       
        class Mrshounka_308pol{
       vItemSpace = 50;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { -1 , 25000, -1, -1 };
        textures[] = {};
        };
        class Mrshounka_a3_308_gend{
       vItemSpace = 50;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { -1, 30000, -1, -1 };
        textures[] = {};
        };
         //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //             EC635 Helikopter
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        class EC635_Unarmed_BW{
       vItemSpace = 50;
        licenses[] = { {"pilot"}, {"cAir"}, {"mAir"}, {""} };
        rentalprice[] = { -1 , 550000, -1, -1 };
        textures[] = {};
        };
                
        class EC635_Unarmed_CSAT{
       vItemSpace = 50;
        licenses[] = { {"pilot"}, {"cAir"}, {"mAir"}, {""} };
        rentalprice[] = { 550000 , -1, -1, -1 };
        textures[] = {};
        };
        class EC635_Unarmed{
         vItemSpace = 50;
         licenses[] = { {"pilot"}, {"cAir"}, {"mAir"}, {""} };
        rentalprice[] = { 550000 , -1, -1, -1 };
        textures[] = {};
        };
         //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //            Audi Rs5
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        class shounka_a3_rs5_civ_orange{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 120000 , -1, -1, -1 };
        textures[] = {};
        };
       class shounka_a3_rs5_civ_violet{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 120000 , -1, -1, -1 };
        textures[] = {};
        };
        class shounka_a3_rs5_civ_grise{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 120000 , -1, -1, -1 };
        textures[] = {};
        };
       class shounka_a3_rs5_civ_rose{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 120000 , -1, -1, -1 };
        textures[] = {};
        };
       class shounka_a3_rs5_civ_jaune{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 120000 , -1, -1, -1 };
        textures[] = {};
        };
      class shounka_a3_rs5_civ_rogue{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 120000 , -1, -1, -1 };
        textures[] = {};
        };
        class shounka_a3_rs5_civ_bleufonce{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 120000 , -1, -1, -1 };
        textures[] = {};
        };
        class shounka_a3_rs5_civ_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 120000 , -1, -1, -1 };
        textures[] = {};
        };
       class shounka_a3_rs5_civ{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 120000 , -1, -1, -1 };
        textures[] = {};
        };
         //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //            Audi Q7
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        class shounka_a3_audiq7_v2_gendarmerie{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 40000 , -1, -1, -1 };
        textures[] = {};
        };
         //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //            Audi Limousine
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
       class shounka_limo_civ_orange{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000 , -1, -1, -1 };
        textures[] = {};
        };
        class shounka_limo_civ_violet{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000 , -1, -1, -1 };
        textures[] = {};
        };
       class shounka_limo_civ_grise{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000 , -1, -1, -1 };
        textures[] = {};
        };
       class shounka_limo_civ_rose{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000 , -1, -1, -1 };
        textures[] = {};
        };
       class shounka_limo_civ_rogue{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000 , -1, -1, -1 };
        textures[] = {};
        };
       class shounka_limo_civ_bleufonce{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000 , -1, -1, -1 };
        textures[] = {};
        };
        class shounka_limo_civ_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000 , -1, -1, -1 };
        textures[] = {};
        };
       class shounka_limo_civ{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000 , -1, -1, -1 };
        textures[] = {};
        };
         //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //            Mercedes atego FPT Brandbil
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
       class mercedes_atego_pompler_ingame{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 145000 , -1, -1, -1 };
        textures[] = {};
        };
       class mercedes_atego_pompler{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 145000 , -1, -1, -1 };
        textures[] = {};
        };
         //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //            Man TGX Truck
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
       class Quiet_Man_TGX_petite_cabine_mq_noir{
       vItemSpace = 250;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 270000 , -1, -1, -1 };
        textures[] = {};
        };
         //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //            Volkswagen Touareg
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
       class Mrshounka_Volks_Touar_police{
       vItemSpace = 50;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { 50000 , -1, -1, -1 };
        textures[] = {};
        };
       class Mrshounka_Volkswagen_Touareg_orange{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000 , -1, -1, -1 };
        textures[] = {};
        };
       class Mrshounka_Volkswagen_Touareg_violet{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000 , -1, -1, -1 };
        textures[] = {};
        };
       class Mrshounka_Volkswagen_Touareg_grise{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000 , -1, -1, -1 };
        textures[] = {};
        };
        class Mrshounka_Volkswagen_Touareg_rose{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000 , -1, -1, -1 };
        textures[] = {};
        };
        class Mrshounka_Volkswagen_Touareg_jaune{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000 , -1, -1, -1 };
        textures[] = {};
        };
       class Mrshounka_Volkswagen_Touareg_rogue{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000 , -1, -1, -1 };
        textures[] = {};
        };
       class Mrshounka_Volkswagen_Touareg_bleufonce{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000 , -1, -1, -1 };
        textures[] = {};
        };
        class Mrshounka_Volkswagen_Touareg_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000 , -1, -1, -1 };
        textures[] = {};
        };
       class Mrshounka_Volkswagen_Touareg_civ{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 130000 , -1, -1, -1 };
        textures[] = {};
        };
         //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //            Lamborghini Veneno
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
         class Mrshounka_Venemo_c_jaune{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 475000 , -1, -1, -1 };
        textures[] = {};
        };
       class Mrshounka_Venemo_c{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 475000 , -1, -1, -1 };
        textures[] = {};
        };
        class Mrshounka_Venemo_c_bleu{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 475000 , -1, -1, -1 };
        textures[] = {};
        };
       class Mrshounka_Venemo_c_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 475000 , -1, -1, -1 };
        textures[] = {};
        };
         //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //            GMC Vandura
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
       class Mrshounka_Vandura_civ_orange{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 45000 , -1, -1, -1 };
        textures[] = {};
        };
        class Mrshounka_Vandura_civ_violet{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 45000 , -1, -1, -1 };
        textures[] = {};
        };
        class Mrshounka_Vandura_civ_grise{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 45000 , -1, -1, -1 };
        textures[] = {};
        };
       class Mrshounka_Vandura_civ_rose{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 45000 , -1, -1, -1 };
        textures[] = {};
        };
      class Mrshounka_Vandura_civ_jaune{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 45000 , -1, -1, -1 };
        textures[] = {};
        };
        class Mrshounka_Vandura_civ_rogue{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 45000 , -1, -1, -1 };
        textures[] = {};
        };
       class Mrshounka_Vandura_civ_bleufonce{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 45000 , -1, -1, -1 };
        textures[] = {};
        };
      class Mrshounka_Vandura_civ_noir{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 45000 , -1, -1, -1 };
        textures[] = {};
        };
       class Mrshounka_Vandura_civ{
       vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 45000 , -1, -1, -1 };
        textures[] = {};
        };
            //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        ////|||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
        //|||||||||||||||||||||||||||||||||||||
    class I_Truck_02_medical_F {
        vItemSpace = 150;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { -1, -1, 25000, -1 };
        textures[] = {};
    };

    class O_Truck_03_medical_F {
        vItemSpace = 200;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { -1, -1, 45000, -1 };
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { -1, -1, 60000, -1 };
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 45;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        rentalprice[] = { 5000, -1, -1, -1 };
        textures[] = { };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 200;
        licenses[] = { {""}, {"cAir"}, {""}, {""} };
        rentalprice[] = { -1, 200000, -1, -1 };
        textures[] = {};
    };

    class B_MRAP_01_hmg_F {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { -1, 750000, -1, -1 };
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        rentalprice[] = { -1, 75000, -1, -1 };
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        rentalprice[] = { -1, 3000, -1, -1 };
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 285;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        rentalprice[] = { 200000, -1, -1, -1 };
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 350;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        rentalprice[] = { 450000, -1, -1, -1 };
        textures[] = { };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { -1, -1, -1, -1 };
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { -1, -1, -1, -1 };
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { -1, -1, -1, -1 };
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { 12500, -1, -1, -1 };
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        licenses[] = { {"rebel"}, {""}, {""}, {""} };
        rentalprice[] = { 750000, -1, -1, -1 };
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 85;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        rentalprice[] = { 22000, -1, -1, -1 };
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        rentalprice[] = { -1, 20000, -1, -1 };
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 450;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        rentalprice[] = { 350000, -1, -1, -1 };
        textures[] = { };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 325;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        rentalprice[] = { 275000, -1, -1, -1 };
        textures[] = { };
    };

    class O_MRAP_02_F {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 150000, -1, -1, -1 };
        textures[] = {                 
                   { "reb", "reb", {
                   "textures\rebel\vehicles\EQT_ifritR.jpg","textures\rebel\vehicles\EQT_ifritR2.jpg"
                  } }                        
                };
    };
        
        class I_MRAP_03_F {
        vItemSpace = 60;
                licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 150000, -1, -1, -1 };
        textures[] = {
                { "cop", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
                } }
         };
    };

    class C_Offroad_01_F {
        vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 12500, 5000, 10000, -1 };
        textures[] = {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Cop undecover", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } },
                         { "Medic", "med", {
                                "textures\medic\vehicles\med_offroad.paa"
            } },
                        { "Cop", "cop", {
                                "textures\cop\vehicles\police_offroad.paa"
            } },
                        { "Reb Offroad", "reb", {
                                "textures\rebel\vehicles\EQT_offroadReb.jpg"
            } }                      
        };
    };
        
         class C_Offroad_01_repair_F {
                vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 12500, 5000, 10000, -1 };
        textures[] = {
                        { "Repair truck", "med", {
                        "textures\towing\vehicles\bergare.paa"
            } }
           };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 15000, -1, -1, -1 };
        textures[] = {};
    };

    class C_Kart_01_Fuel_F {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 15000, -1, -1, -1 };
        textures[] = {};
    };

    class C_Kart_01_Red_F {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 15000, -1, -1, -1 };
        textures[] = {};
    };

    class C_Kart_01_Vrana_F {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 15000, -1, -1, -1 };
        textures[] = {};
    };

    class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 40000, 30000, -1, -1 };
        textures[] = {
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
             { "Police undecover", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } },
                         { "Police", "cop", {
                "textures\cop\vehicles\hatchback_sport.paa"
            } },
                        { "redgull", "Civ", {
                "textures\civ\vehicles\TRG_hobo_redgull_rally.paa"
            } },
                        { "KB", "Civ", {
                "textures\civ\vehicles\TRG_hobos_KB_hatch.paa"
            } },
                        { "Medic", "med", {
                "textures\medic\vehicles\Medic_Sport.paa"
            } },
                        { "Saf hatchbackack", "cop", {
                "textures\saf\safhatchsport.paa"
            } },
                        { "Monster", "civ", {
                "textures\civ\vehicles\TRG_hobos_KB_hatch.paa"
            } },
                        { "Rebel", "reb", {
                "textures\rebel\vehicles\EQT_REBhatch.jpg"
            } }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 2500, -1, -1, -1 };
        textures[] = {
            { "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            } },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            } },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            } },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            } },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            } },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            } },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            } },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 250;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        rentalprice[] = { 100000, -1, -1, -1 };
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } },
                                    { "Cop", "cop", {
                "textures\cop\vehicles\TRG_zamak_paddywagon_01.jpg","textures\cop\vehicles\TRG_zamak_paddywagon_02.jpg"
            } },
                        { "scania", "civ", {
                "textures\zamak\EQT_ZamakBL1.jpg","textures\zamak\EQT_Zamak_BLBak2.jpg"
            } },
                        { "merzedes", "civ", {
                "textures\zamak\EQT_Zamak_Lila1.jpg","textures\zamak\EQT_Zamak_LilaBak2.jpg"
            } },
                        { "king long", "civ", {
                "textures\zamak\EQT_Zamak_Mela1.jpg","textures\zamak\EQT_Zamak_MelaBak2.jpg"
            } },
                        { "volvo", "civ", {
                "textures\zamak\EQT_ZamakGren1.jpg","textures\zamak\EQT_ZamakGBak2.jpg"
            } },
                        { "Saf Truck", "cop", {
                "textures\saf\SAF_Zamak1.paa","textures\saf\SAF_ZamakBak2.paa"
            } }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 200;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        rentalprice[] = { 75000, -1, -1, -1 };
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 300;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        rentalprice[] = { 250000, -1, -1, -1 };
        textures[] = {};
    };

    class C_Hatchback_01_F {
        vItemSpace = 40;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 9500, -1, -1, -1 };
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } },
                                      { "Police", "cop", {
                "textures\cop\vehicles\hatchback_sport.paa"
            } },
                        { "Monster", "civ", {
                "textures\civ\vehicles\TRG_hobos_KB_hatch.paa"
            } }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 30000, 20000, -1, -1 };
        textures[] = {
            { "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
            { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
            { "Cop undercover", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } },
                        { "Cop", "cop", {
                "textures\cop\vehicles\polis_suv.paa"
            } },
                        { "Medic", "med", {
                "textures\medic\vehicles\med_suv.paa"
            } },
                        { "Flames", "civ", {
                "textures\civ\vehicles\flamescar.paa"
            } },
                        { "Felalli", "civ", {
                "textures\civ\vehicles\TRG_hobos_ferrari_SUV.paa"
            } }
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 100;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        rentalprice[] = { 45000, -1, -1, -1 };
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 150;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        rentalprice[] = { 60000, -1, -1, -1 };
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class B_MRAP_01_F {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { -1, 30000, -1, -1 };
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } },
                        { "Regular", "cop", {
                "textures\cop\vehicles\swat_hunter_1.paa","textures\cop\vehicles\swat_hunter_2.paa"
            } }
        };
    };

     class B_Heli_Light_01_stripped_F {
        vItemSpace = 90;
        licenses[] = { {""}, {""}, {""}, {""} };
        rentalprice[] = { 325000, -1, -1, -1 };
        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 90;
        licenses[] = { {"pilot"}, {"cAir"}, {"mAir"}, {""} };
        rentalprice[] = { 275000, 75000, 50000, -1 };
        textures[] = {
            { "Police", "cop", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            } },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            } },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } },
                        { "Cop", "cop", {
                "textures\cop\vehicles\police_heli.paa"
            } },
                        { "Medic", "med", {
                "textures\medic\vehicles\med_hummingbird.paa"
            } },
                        { "Rebel", "reb", {
                "textures\rebel\vehicles\EQT_REBbird.jpg"
            } },
                    { "Saf", "cop", {
                "textures\saf\safhummingbird.paa"
            } },
                        { "Towing", "med", {
                "textures\tow-copter.paa"
            } }
        };
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 210;
        licenses[] = { {"pilot" }, {""}, {"mAir"}, {""} };
        rentalprice[] = { 750000, -1, 75000, -1 };
        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            } },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } },
                        { "EMS", "med", {
                "textures\medic\vehicles\EQT_Orca_Medic.jpg"
            } },
                        { "Cop", "cop", {
                "textures\cop\vehicles\pol_orca.paa"
            } },
                        { "Rebel", "reb", {
                        "textures\TRF_orca.paa"
                        } },
                        { "Saf", "cop", {
                        "textures\saf\SAF_orca.paa"
                        } }
        };
    };
        
               class I_Heli_Transport_02_F {
        vItemSpace = 300;
        licenses[] = { {"pilot" }, {""}, {"mAir"}, {""} };
        rentalprice[] = { 1550000, -1, 155000, -1 };
        textures[] = {
                        { "Ion", "civ", {
                        "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
                        "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
                        "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
            } },
            { "Dahoman", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
            } },
            { "Rebel", "reb", {
                "textures\rebel\vehicles\EQT_REB_CH49_1.jpg",
                "textures\rebel\vehicles\EQT_REB_CH49_2.jpg",
                "textures\rebel\vehicles\EQT_REB_CH49_3.jpg"
            } }
        };
    };
        
         class I_Heli_light_03_unarmed_F {
        vItemSpace = 120;
        licenses[] = { {"pilot" }, {""}, {"mAir"}, {""} };
        rentalprice[] = { 550000, -1, 55000, -1 };
        textures[] = {
                { "Cop", "cop", {
                "textures\cop\vehicles\cophellcat.jpg"
            } },
                        { "Medic", "med", {
                "textures\medic\vehicles\heli_light_03_base_co.jpg"
            } },
                        { "Black", "civ", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } },
                        { "Rebel", "reb", {
               "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };
        
        
         class O_Heli_Transport_04_medevac_F {
        vItemSpace = 120;
        licenses[] = { {"pilot" }, {""}, {"mAir"}, {""} };
        rentalprice[] = { 550000, -1, 55000, -1 };
        textures[] = {
                                { "Medic", "med", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
                                } }
        };
    };

    class B_SDV_01_F {
        vItemSpace = 50;
        licenses[] = { {"boat"}, {"cg"}, {""}, {""} };
        rentalprice[] = { 150000, 100000, -1, -1 };
        textures[] = {};
    };
        
        class C_Van_01_fuel_F {
         vItemSpace = 20;
         vFuelSpace = 19500;
         licenses[] = { {"trucking"}, {""}, {""}, {""} };
         rentalprice[] = { 120000, -1, -1, -1 };
         textures[] = {
             { "White", "civ", {
                 "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                 "\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
             } },
             { "Red", "civ", {
                 "\A3\soft_f_gamma\Van_01\data\van_01_ext_red_co.paa",
                 "\A3\soft_f_gamma\Van_01\data\van_01_tank_red_co.paa"
             } }
         };
     };
 
     class I_Truck_02_fuel_F {
         vItemSpace = 40;
         vFuelSpace = 42000;
         licenses[] = { {"trucking"}, {""}, {""}, {""} };
         rentalprice[] = { 200000, -1, -1, -1 };
         textures[] = {
             { "White", "civ", {
                 "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                 "\A3\Soft_F_Beta\Truck_02\data\truck_02_fuel_co.paa"
             } }
         };
     };
 
     class B_Truck_01_fuel_F {
         vItemSpace = 50;
         vFuelSpace = 50000;
         licenses[] = { {"trucking"}, {""}, {""}, {""} };
         rentalprice[] = { 250000, -1, -1, -1 };
         textures[] = {};
     };
        
};
