#include "MyPC.h"
#include "MyPC.h"
// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPC.h"
#include "L20240104.h"
#include "Kismet/GameplayStatics.h"


void AMyPC::BeginPlay()
{
	LogMessage(this, __FUNCTION__, __LINE__, "Before BeginPlay ");
	Super::BeginPlay();
	LogMessage(this, __FUNCTION__, __LINE__, "After BeginPlay ");
}

void AMyPC::PostInitializeComponents()
{
	LogMessage(this, __FUNCTION__, __LINE__, "Before PostInitializeComponents ");

	Super::PostInitializeComponents();

	LogMessage(this, __FUNCTION__, __LINE__, "After PostInitializeComponents ");

}

void AMyPC::PostNetInit()
{

	LogMessage(this, __FUNCTION__, __LINE__, "Before PostNetInit ");

	Super::PostNetInit();

	LogMessage(this, __FUNCTION__, __LINE__, "After PostNetInit ");

}
