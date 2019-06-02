/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCoreRoutineRankRoutesRequestedInstance : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _highestRankedRouteScore;
	int _numberOfInputRoutes;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfInputRoutes; 
@property (assign,nonatomic) int numberOfInputRoutes;                      //@synthesize numberOfInputRoutes=_numberOfInputRoutes - In the implementation block
@property (assign,nonatomic) BOOL hasHighestRankedRouteScore; 
@property (assign,nonatomic) int highestRankedRouteScore;                  //@synthesize highestRankedRouteScore=_highestRankedRouteScore - In the implementation block
-(void)setNumberOfInputRoutes:(int)arg1 ;
-(void)setHasNumberOfInputRoutes:(BOOL)arg1 ;
-(BOOL)hasNumberOfInputRoutes;
-(void)setHighestRankedRouteScore:(int)arg1 ;
-(void)setHasHighestRankedRouteScore:(BOOL)arg1 ;
-(BOOL)hasHighestRankedRouteScore;
-(int)numberOfInputRoutes;
-(int)highestRankedRouteScore;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(id)dictionaryRepresentation;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

