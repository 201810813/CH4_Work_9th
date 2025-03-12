#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ChatBlueprintFunctionLibrary.generated.h"

UCLASS()
class UChatBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "MyTestCPPLib")
    static FString GetMyFirstCPP();
};