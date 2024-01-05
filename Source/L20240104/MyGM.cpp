// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGM.h"
#include "MyPC.h"
#include "Kismet/KismetSystemLibrary.h"
#include "L20240104.h"


AMyGM::AMyGM()
{
	PlayerControllerClass = AMyPC::StaticClass();
}

void AMyGM::PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage)
{
	LogMessage(this, __FUNCTION__, __LINE__, "Before PreLogin ");

	Super::PreLogin(Options, Address, UniqueId, ErrorMessage);

	LogMessage(this, __FUNCTION__, __LINE__, "After PreLogin ");

	ErrorMessage = TEXT("Login failed");
}

APlayerController* AMyGM::Login(UPlayer* NewPlayer, ENetRole InRemoteRole, const FString& Portal, const FString& Options, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage)
{
	LogMessage(this, __FUNCTION__, __LINE__, "Before Login ");
	APlayerController* PC = Super::Login(NewPlayer, InRemoteRole, Portal, Options, UniqueId, ErrorMessage);
	LogMessage(this, __FUNCTION__, __LINE__, "After Login ");
	return PC;
}

void AMyGM::PostLogin(APlayerController* NewPlayer)
{
	LogMessage(this, __FUNCTION__, __LINE__, "Before PostLogin ");

	Super::PostLogin(NewPlayer);

	LogMessage(this, __FUNCTION__, __LINE__, "After PostLogin ");


}

void AMyGM::StartPlay()
{
	LogMessage(this, __FUNCTION__, __LINE__, "Before StartPlay 5Seconds");
	FTimerManager &timerManager = GetWorld()->GetTimerManager();
	FTimerHandle Timer;
	timerManager.SetTimer(Timer, this, &AMyGM::CallParentStartPlay, 5.0f, false);;
	timerManager.ClearTimer(Timer);
	
}


void AMyGM::CallParentStartPlay()
{
	LogMessage(this, __FUNCTION__, __LINE__, "Before StartPlay ");

	Super::StartPlay();

	LogMessage(this, __FUNCTION__, __LINE__, "After StartPlay ");
}