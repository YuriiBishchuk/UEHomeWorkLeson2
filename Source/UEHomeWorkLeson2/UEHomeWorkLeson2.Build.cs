// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UEHomeWorkLeson2 : ModuleRules
{
	public UEHomeWorkLeson2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
