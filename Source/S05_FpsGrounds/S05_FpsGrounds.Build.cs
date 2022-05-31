// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class S05_FpsGrounds : ModuleRules
{
	public S05_FpsGrounds(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
