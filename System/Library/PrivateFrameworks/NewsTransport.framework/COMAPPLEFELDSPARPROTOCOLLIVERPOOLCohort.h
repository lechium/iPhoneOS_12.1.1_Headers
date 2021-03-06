/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort : PBCodable <NSCopying> {

	double _clicks;
	double _impressions;
	long long _timestamp;
	int _type;
	SCD_Struct_NT5 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasClicks; 
@property (assign,nonatomic) double clicks;                    //@synthesize clicks=_clicks - In the implementation block
@property (assign,nonatomic) BOOL hasImpressions; 
@property (assign,nonatomic) double impressions;               //@synthesize impressions=_impressions - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setImpressions:(double)arg1 ;
-(void)setHasClicks:(BOOL)arg1 ;
-(BOOL)hasClicks;
-(void)setHasImpressions:(BOOL)arg1 ;
-(BOOL)hasImpressions;
-(double)clicks;
-(double)impressions;
-(void)setClicks:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(long long)timestamp;
-(id)dictionaryRepresentation;
-(void)setTimestamp:(long long)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

