/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@interface PGHobbyMemoryGenerator : PGFeaturedMemoryGenerator {

	BOOL _onlyOverTheYears;
	BOOL _keepsOnlyIsInteresting;
	long long _hobbyType;

}

@property (assign,nonatomic) long long hobbyType;                      //@synthesize hobbyType=_hobbyType - In the implementation block
@property (assign,nonatomic) BOOL onlyOverTheYears;                    //@synthesize onlyOverTheYears=_onlyOverTheYears - In the implementation block
@property (assign,nonatomic) BOOL keepsOnlyIsInteresting;              //@synthesize keepsOnlyIsInteresting=_keepsOnlyIsInteresting - In the implementation block
-(long long)hobbyType;
-(BOOL)onlyOverTheYears;
-(id)confidenceThresholdByWhitelistedSceneIdentifier;
-(id)confidenceThresholdByBlacklistedSceneIdentifier;
-(BOOL)keepsOnlyIsInteresting;
-(void)_randomEnumerateOverLifeTimePotentialMemories:(id)arg1 andYearPotentialMemories:(id)arg2 rejectedNumbers:(SCD_Struct_PG0*)arg3 enumerationBlock:(/*^block*/id)arg4 ;
-(void)_potentialHobbyMemoryForHobby:(id)arg1 results:(/*^block*/id)arg2 ;
-(void)_enumerateBestPotentialMemoriesInLifeTimePotentialMemories:(id)arg1 andYearPotentialMemories:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(void)_generateExtendedCuratedSetForMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(BOOL)canFallbackToDejunkAndDedupeForShowMore;
-(void)setHobbyType:(long long)arg1 ;
-(void)setOnlyOverTheYears:(BOOL)arg1 ;
-(void)setKeepsOnlyIsInteresting:(BOOL)arg1 ;
@end

