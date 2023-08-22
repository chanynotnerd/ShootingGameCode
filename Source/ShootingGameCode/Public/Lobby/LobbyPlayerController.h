// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "LobbyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTINGGAMECODE_API ALobbyPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ALobbyPlayerController();

public:
	virtual void OnPossess(APawn* aPawn) override;
	// 컨트롤러가 Pawn에 붙음/ Pawn에 컨트롤러가 '빙의' 된다.

	UFUNCTION(Client, Reliable)
	void ResClientPossess();

	UFUNCTION(Server, Reliable)
	void ReqChangeUserName(const FString& NewName);
};
