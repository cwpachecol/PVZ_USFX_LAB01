// Copyright Epic Games, Inc. All Rights Reserved.

#include "PVZ_USFX_LAB01GameMode.h"
#include "PVZ_USFX_LAB01Pawn.h"
#include "Zombie.h"

APVZ_USFX_LAB01GameMode::APVZ_USFX_LAB01GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = APVZ_USFX_LAB01Pawn::StaticClass();
}

void APVZ_USFX_LAB01GameMode::BeginPlay()
{
	Super::BeginPlay();

	// Lugar donde quieras crear la instancia del objeto de planta
	FVector SpawnLocation1 = FVector(-850.0f, 400.0f, 160.0f); // Cambia las coordenadas seg�n tus necesidades

	AZombie* NewZombieActor1 = GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(), SpawnLocation1, FRotator::ZeroRotator);

	FVector SpawnLocation2 = FVector(-500.0f, 200.0f, 160.0f); // Cambia las coordenadas seg�n tus necesidades

	AZombie* NewZombieActor2 = GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(), SpawnLocation2, FRotator::ZeroRotator);
	

	// Lugar donde quieras crear la instancia del objeto
	FVector MinSpawnLocation = FVector(-1000.0f, -1000.0f, 0.0f);
	FVector MaxSpawnLocation = FVector(1000.0f, 1000.0f, 0.0f);

	float RandomX = FMath::RandRange(MinSpawnLocation.X, MaxSpawnLocation.X);
	float RandomY = FMath::RandRange(MinSpawnLocation.Y, MaxSpawnLocation.Y);
	float Z = 180.0f; // Altura en Z

	FVector SpawnLocation = FVector(RandomX, RandomY, Z);

	AZombie* NewZombieActor3 = GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(), SpawnLocation, FRotator::ZeroRotator);





}

//// Called when the game starts or when spawned
//void APVZ_USFX_LAB01GameMode::BeginPlay()
//{
//	Super::BeginPlay();
//
//}

