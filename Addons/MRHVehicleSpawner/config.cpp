class CfgPatches {
	class MRHSpawner{
		units[] = {}; //
		weapons[] = {}; //
		requiredVersion = 0.1; //
		requiredAddons[] = {}; //
	};
};

#include "\MRHVehicleSpawner\DialogsHPP\definesSPAWNER.hpp"
#include "\MRHVehicleSpawner\DialogsHPP\dialogsSPAWNER.hpp"

/////=========cfgFunctions========
class CfgFunctions
{
	#include "\MRHVehicleSpawner\cfghpp\cfgfunctions.hpp"
};
////=============fincfgFunctions
////=============fincfgFunctions
class Extended_PreInit_EventHandlers
{
   class MRHSpawnerInit
   {
      serverInit = "call compile preProcessFileLineNumbers '\MRHVehicleSpawner\Functions\fn_Spawner_SpawnerInit.sqf'";
   };
};
