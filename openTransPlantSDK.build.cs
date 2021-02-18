using UnrealBuildTool;
using System.Collections.Generic;
public class openTransPlantSDK : ModuleRules
{
    public openTransPlantSDK(ReadOnlyTargetRules Target) : base(Target)
    {
        // Settings go here
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] {"CoreUObject", "Engine", "InputCore"});

		PrivateDependencyModuleNames.AddRange(new string[] { "Core" });

        bUseUnity = true;
    }
}