#include "MRH_C_Path.hpp"

	class Logic;
	class Module_F: Logic
	{
		class ModuleDescription
		{
			class AnyPlayer;
			class AnyBrain;
			class EmptyDetector;
			class AnyPerson;
		};
	};

	class MRH_Module_Base : Module_F
	{
		mapSize = 1;
		author = "Mr H.";
		vehicleClass = "Modules";
		category = "MRH_MilsimTools_Modules";
		side = 7;

		scope = 1;				// Editor visibility; 2 will show it in the menu, 1 will hide it.
		scopeCurator = 1;		// Curator visibility; 2 will show it in the menu, 1 will hide it.

		displayName = "MRH Base Module";	// Name displayed in the menu
		icon = "";		// Map icon. Delete this entry to use the default icon
		picture = "";
		portrait = "";

		function = "";			// Name of function triggered once conditions are met
		functionPriority = 1;	// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		isGlobal = 2;			// 0 for server only execution, 1 for remote execution on all clients upon mission start, 2 for persistent execution
		isTriggerActivated = 0;	// 1 for module waiting until all synced triggers are activated
		isDisposable = 0;		// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
		// curatorInfoType = "RscDisplayAttributeModuleNuke";	// Menu displayed when the module is placed or double-clicked on by Zeus

        dlc = "MRHMilsimTools";

		class Arguments {};
		class ModuleDescription: ModuleDescription
		{
			description = "MRH Milsim Tools Module Base";
		};
	};

	class MRH_HeliTaxiControls : MRH_Module_Base
	{
			scopeCurator = 2;
			_generalMacro = "MRH_HeliTaxiControls";
			displayName = "Heli taxi settings";
			function = QFUNC(heliPerSideModule);
			icon = PAAPATH(ModuleHeli);
			portrait = PAAPATH(ModuleHeli);
	};

		class MRH_SimpleConv : MRH_Module_Base
	{
			scopeCurator = 2;
			_generalMacro = "MRH_SimpleConv";
			displayName = "Simple conversation interaction";
			curatorCanAttach = 1;
			function = QFUNC(simpleConvModule);
			icon = PAAPATH(ModuleSimpleConv);
			portrait = PAAPATH(ModuleSimpleConv);
	};