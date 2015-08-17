#include "Vehicles.hpp"
#include "VirtualItems.hpp"

class Life_Settings {
	/* Persistent Settings */
    save_civ_weapons = true; //Allow civilians to save weapons on them?
    save_virtualItems = true; //Save Virtual items (all sides)? Currently not working for v5 yet

    /* Default Cash */
    starting_cash = 0;
    starting_atmcash = 5000;

    /* Revive system settings */
    revive_cops = true; //true to enable cops the ability to revive everyone or false for only medics/ems.
    revive_fee = 1500; //Revive fee that players have to pay and medics / EMS are rewarded

    /* House related settings */
    house_limit = 5; //Maximum amount of houses a player can own.

    /* Gang related settings */
    gang_price = 75000; //Price for creating a gang, remember they are persistent so keep it reasonable to avoid millions of gangs.
    gang_upgradeBase = 10000; //The base cost for upgrading slots in a gang
    gang_upgradeMultiplier = 2.5; //Not sure if in use?

    /* Player-related systems */
    enable_fatigue = true; //Set to false to disable the ARMA 3 false system.
    total_maxWeight = 24; //Static variable for the maximum weight allowed without having a backpack
    paycheck_period = 5; //Scaled in minutes

    /* Impound Variables */
    impound_car = 350; //Price for impounding cars
    impound_boat = 250; //Price for impounding boats
    impound_air = 850; //Price for impounding helicopters / planes

    /* Car-shop Settings */
    vehicleShop_rentalOnly[] = { "B_MRAP_01_hmg_F", "B_G_Offroad_01_armed_F" };

    /* Job-related stuff */
    delivery_points[] = { "dp_1", "dp_2", "dp_3", "dp_4", "dp_5", "dp_6", "dp_7", "dp_8", "dp_9", "dp_10", "dp_11", "dp_12", "dp_13", "dp_14", "dp_15", "dp_15", "dp_16", "dp_17", "dp_18", "dp_19", "dp_20", "dp_21", "dp_22", "dp_23", "dp_24", "dp_25" };

    sellArray[] = {
    	{"arifle_sdar_F", 7500},
    	{"hgun_P07_snds_F", 650},
    	{"hgun_P07_F", 1500},
    	{"ItemGPS", 45},
    	{"ToolKit", 75},
    	{"FirstAidKit", 65},
    	{"Medikit", 450},
    	{"NVGoggles", 980},
    	{"16Rnd_9x21_Mag", 15},
    	{"20Rnd_556x45_UW_mag", 35},
    	{"ItemMap", 35},
    	{"ItemCompass", 25},
    	{"Chemlight_blue", 50},
    	{"Chemlight_yellow", 50},
    	{"Chemlight_green", 50},
    	{"Chemlight_red", 50},
    	{"hgun_Rook40_F", 500},
    	{"arifle_Katiba_F", 5000},
    	{"30Rnd_556x45_Stanag", 65},
    	{"20Rnd_762x51_Mag", 85},
    	{"30Rnd_65x39_caseless_green", 50},
    	{"DemoCharge_Remote_Mag", 7500},
    	{"SLAMDirectionalMine_Wire_Mag", 2575},
    	{"optic_ACO_grn", 250},
    	{"acc_flashlight", 100},
    	{"srifle_EBR_F", 15000},
    	{"arifle_TRG21_F", 3500},
    	{"optic_MRCO", 5000},
    	{"optic_Aco", 850},
    	{"arifle_MX_F", 7500},
    	{"arifle_MXC_F", 5000},
    	{"arifle_MXM_F", 8500},
    	{"MineDetector", 500},
    	{"optic_Holosight", 275},
    	{"acc_pointer_IR", 175},
    	{"arifle_TRG20_F", 2500},
    	{"SMG_01_F", 1500},
    	{"arifle_Mk20C_F", 4500},
    	{"30Rnd_45ACP_Mag_SMG_01", 60},
    	{"30Rnd_9x21_Mag", 30}
    };
};