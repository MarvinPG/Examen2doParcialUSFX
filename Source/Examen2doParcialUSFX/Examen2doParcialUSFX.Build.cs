// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Examen2doParcialUSFX : ModuleRules
{
	public Examen2doParcialUSFX(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
