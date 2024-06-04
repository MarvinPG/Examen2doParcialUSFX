// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Examen2doParcialUSFXEditorTarget : TargetRules
{
	public Examen2doParcialUSFXEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("Examen2doParcialUSFX");
	}
}
