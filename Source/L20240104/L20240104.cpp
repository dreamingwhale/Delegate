// Fill out your copyright notice in the Description page of Project Settings.

#include "L20240104.h"
#include "Modules/ModuleManager.h"
#include "Kismet/KismetSystemLibrary.h"

IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, L20240104, "L20240104" );

void LogMessage(const AActor* Self, FString File, int32 Line, const FString& InMessage)
{
	FString Message = FString::Printf(TEXT("[%s %d]  %s"), *File, Line, *InMessage);
	UKismetSystemLibrary::PrintString(Self->GetWorld(), Message);
}
