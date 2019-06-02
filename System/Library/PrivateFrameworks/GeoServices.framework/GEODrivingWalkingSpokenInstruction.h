/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOFormattedString, NSMutableArray;

@interface GEODrivingWalkingSpokenInstruction : PBCodable <NSCopying> {

	GEOFormattedString* _continueStage;
	NSMutableArray* _executionStages;
	GEOFormattedString* _initialStage;
	GEOFormattedString* _preparationStage;
	GEOFormattedString* _proceedStage;
	unsigned _shortChainedInstructionIndex;
	SCD_Struct_GE1 _has;

}

@property (nonatomic,readonly) BOOL hasProceedStage; 
@property (nonatomic,retain) GEOFormattedString * proceedStage;                  //@synthesize proceedStage=_proceedStage - In the implementation block
@property (nonatomic,readonly) BOOL hasContinueStage; 
@property (nonatomic,retain) GEOFormattedString * continueStage;                 //@synthesize continueStage=_continueStage - In the implementation block
@property (nonatomic,readonly) BOOL hasInitialStage; 
@property (nonatomic,retain) GEOFormattedString * initialStage;                  //@synthesize initialStage=_initialStage - In the implementation block
@property (nonatomic,readonly) BOOL hasPreparationStage; 
@property (nonatomic,retain) GEOFormattedString * preparationStage;              //@synthesize preparationStage=_preparationStage - In the implementation block
@property (nonatomic,retain) NSMutableArray * executionStages;                   //@synthesize executionStages=_executionStages - In the implementation block
@property (assign,nonatomic) BOOL hasShortChainedInstructionIndex; 
@property (assign,nonatomic) unsigned shortChainedInstructionIndex;              //@synthesize shortChainedInstructionIndex=_shortChainedInstructionIndex - In the implementation block
+(Class)executionStageType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(GEOFormattedString *)proceedStage;
-(GEOFormattedString *)continueStage;
-(GEOFormattedString *)initialStage;
-(GEOFormattedString *)preparationStage;
-(NSMutableArray *)executionStages;
-(void)addExecutionStage:(id)arg1 ;
-(void)setProceedStage:(GEOFormattedString *)arg1 ;
-(void)setContinueStage:(GEOFormattedString *)arg1 ;
-(void)setInitialStage:(GEOFormattedString *)arg1 ;
-(void)setPreparationStage:(GEOFormattedString *)arg1 ;
-(unsigned long long)executionStagesCount;
-(void)clearExecutionStages;
-(id)executionStageAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasProceedStage;
-(BOOL)hasContinueStage;
-(BOOL)hasInitialStage;
-(BOOL)hasPreparationStage;
-(void)setShortChainedInstructionIndex:(unsigned)arg1 ;
-(void)setHasShortChainedInstructionIndex:(BOOL)arg1 ;
-(BOOL)hasShortChainedInstructionIndex;
-(void)setExecutionStages:(NSMutableArray *)arg1 ;
-(unsigned)shortChainedInstructionIndex;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
