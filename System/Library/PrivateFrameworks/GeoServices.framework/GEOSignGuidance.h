/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOJunctionInfo, NSMutableArray, GEONameInfo;

@interface GEOSignGuidance : PBCodable <NSCopying> {

	GEOJunctionInfo* _junctionInfo;
	int _maneuverArrowOverride;
	NSMutableArray* _secondarySigns;
	GEONameInfo* _shieldName;
	NSMutableArray* _signDetails;
	NSMutableArray* _signTitles;
	unsigned _stackRanking;
	SCD_Struct_GE22 _has;

}

@property (nonatomic,retain) NSMutableArray * signTitles;                  //@synthesize signTitles=_signTitles - In the implementation block
@property (nonatomic,retain) NSMutableArray * signDetails;                 //@synthesize signDetails=_signDetails - In the implementation block
@property (nonatomic,retain) NSMutableArray * secondarySigns;              //@synthesize secondarySigns=_secondarySigns - In the implementation block
@property (assign,nonatomic) BOOL hasManeuverArrowOverride; 
@property (assign,nonatomic) int maneuverArrowOverride;                    //@synthesize maneuverArrowOverride=_maneuverArrowOverride - In the implementation block
@property (nonatomic,readonly) BOOL hasShieldName; 
@property (nonatomic,retain) GEONameInfo * shieldName;                     //@synthesize shieldName=_shieldName - In the implementation block
@property (assign,nonatomic) BOOL hasStackRanking; 
@property (assign,nonatomic) unsigned stackRanking;                        //@synthesize stackRanking=_stackRanking - In the implementation block
@property (nonatomic,readonly) BOOL hasJunctionInfo; 
@property (nonatomic,retain) GEOJunctionInfo * junctionInfo;               //@synthesize junctionInfo=_junctionInfo - In the implementation block
+(Class)signTitleType;
+(Class)signDetailType;
+(Class)secondarySignType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)secondarySignsCount;
-(BOOL)hasManeuverArrowOverride;
-(int)maneuverArrowOverride;
-(BOOL)hasJunctionInfo;
-(GEOJunctionInfo *)junctionInfo;
-(NSMutableArray *)signDetails;
-(BOOL)hasStackRanking;
-(unsigned)stackRanking;
-(NSMutableArray *)signTitles;
-(NSMutableArray *)secondarySigns;
-(GEONameInfo *)shieldName;
-(void)addSignTitle:(id)arg1 ;
-(void)addSignDetail:(id)arg1 ;
-(void)addSecondarySign:(id)arg1 ;
-(unsigned long long)signTitlesCount;
-(void)clearSignTitles;
-(id)signTitleAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)signDetailsCount;
-(void)clearSignDetails;
-(id)signDetailAtIndex:(unsigned long long)arg1 ;
-(void)clearSecondarySigns;
-(id)secondarySignAtIndex:(unsigned long long)arg1 ;
-(void)setShieldName:(GEONameInfo *)arg1 ;
-(void)setJunctionInfo:(GEOJunctionInfo *)arg1 ;
-(void)setManeuverArrowOverride:(int)arg1 ;
-(void)setHasManeuverArrowOverride:(BOOL)arg1 ;
-(id)maneuverArrowOverrideAsString:(int)arg1 ;
-(int)StringAsManeuverArrowOverride:(id)arg1 ;
-(BOOL)hasShieldName;
-(void)setStackRanking:(unsigned)arg1 ;
-(void)setHasStackRanking:(BOOL)arg1 ;
-(void)setSignTitles:(NSMutableArray *)arg1 ;
-(void)setSignDetails:(NSMutableArray *)arg1 ;
-(void)setSecondarySigns:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

