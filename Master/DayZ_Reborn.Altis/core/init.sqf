

systemChat "conects init.sqf in core";

execVM "core\configuration.sqf"; // connects to config

[] call life_fnc_LifeStripPlayer;
[] call life_fnc_loadout;

systemChat "Player movement is currently disabled.";