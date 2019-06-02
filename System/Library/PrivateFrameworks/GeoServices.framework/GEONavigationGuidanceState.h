/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEONavigationGuidanceState : PBCodable <NSCopying> {

	int _guidanceLevel;
	int _guidanceLevelIgnoringTimeCriterion;
	int _navigationState;
	int _trackedTransportType;
	BOOL _shouldSuppressCellularDataAlerts;
	SCD_Struct_GE87 _has;

}

@property (assign,nonatomic) BOOL hasTrackedTransportType; 
@property (assign,nonatomic) int trackedTransportType;                                //@synthesize trackedTransportType=_trackedTransportType - In the implementation block
@property (assign,nonatomic) BOOL hasNavigationState; 
@property (assign,nonatomic) int navigationState;                                     //@synthesize navigationState=_navigationState - In the implementation block
@property (assign,nonatomic) BOOL hasGuidanceLevel; 
@property (assign,nonatomic) int guidanceLevel;                                       //@synthesize guidanceLevel=_guidanceLevel - In the implementation block
@property (assign,nonatomic) BOOL hasShouldSuppressCellularDataAlerts; 
@property (assign,nonatomic) BOOL shouldSuppressCellularDataAlerts;                   //@synthesize shouldSuppressCellularDataAlerts=_shouldSuppressCellularDataAlerts - In the implementation block
@property (assign,nonatomic) BOOL hasGuidanceLevelIgnoringTimeCriterion; 
@property (assign,nonatomic) int guidanceLevelIgnoringTimeCriterion;                  //@synthesize guidanceLevelIgnoringTimeCriterion=_guidanceLevelIgnoringTimeCriterion - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)navigationState;
-(void)setNavigationState:(int)arg1 ;
-(int)trackedTransportType;
-(void)setTrackedTransportType:(int)arg1 ;
-(void)setHasTrackedTransportType:(BOOL)arg1 ;
-(BOOL)hasTrackedTransportType;
-(id)trackedTransportTypeAsString:(int)arg1 ;
-(int)StringAsTrackedTransportType:(id)arg1 ;
-(void)setHasNavigationState:(BOOL)arg1 ;
-(BOOL)hasNavigationState;
-(id)navigationStateAsString:(int)arg1 ;
-(int)StringAsNavigationState:(id)arg1 ;
-(int)guidanceLevel;
-(void)setGuidanceLevel:(int)arg1 ;
-(void)setHasGuidanceLevel:(BOOL)arg1 ;
-(BOOL)hasGuidanceLevel;
-(id)guidanceLevelAsString:(int)arg1 ;
-(int)StringAsGuidanceLevel:(id)arg1 ;
-(void)setShouldSuppressCellularDataAlerts:(BOOL)arg1 ;
-(void)setHasShouldSuppressCellularDataAlerts:(BOOL)arg1 ;
-(BOOL)hasShouldSuppressCellularDataAlerts;
-(int)guidanceLevelIgnoringTimeCriterion;
-(void)setGuidanceLevelIgnoringTimeCriterion:(int)arg1 ;
-(void)setHasGuidanceLevelIgnoringTimeCriterion:(BOOL)arg1 ;
-(BOOL)hasGuidanceLevelIgnoringTimeCriterion;
-(id)guidanceLevelIgnoringTimeCriterionAsString:(int)arg1 ;
-(int)StringAsGuidanceLevelIgnoringTimeCriterion:(id)arg1 ;
-(BOOL)shouldSuppressCellularDataAlerts;
-(id)initWithTransportType:(int)arg1 ;
-(id)initWithGuidanceLevel:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

