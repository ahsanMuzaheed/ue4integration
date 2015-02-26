// Copyright (c), Firelight Technologies Pty, Ltd. 2012-2015.

#pragma once

#include "FMODAsset.h"
#include "FMODBank.generated.h"

/* Purely for doxygen generation */
#ifdef GENERATE_DOX
	#define UCLASS(...)
	#define UPROPERTY(...) public:
#endif

/**
 * FMOD Bank Asset.
 */
UCLASS()
class FMODSTUDIO_API UFMODBank : public UFMODAsset
{
	GENERATED_UCLASS_BODY()

	/** Get tags to show in content view */
	virtual void GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const override;

	/** Descriptive name */
	virtual FString GetDesc() override;

};


