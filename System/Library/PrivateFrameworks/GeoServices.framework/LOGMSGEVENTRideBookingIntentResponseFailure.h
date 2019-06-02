/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface LOGMSGEVENTRideBookingIntentResponseFailure : PBCodable <NSCopying> {

	int _failure;
	int _intent;
	SCD_Struct_GE22 _has;

}

@property (assign,nonatomic) BOOL hasIntent; 
@property (assign,nonatomic) int intent;                   //@synthesize intent=_intent - In the implementation block
@property (assign,nonatomic) BOOL hasFailure; 
@property (assign,nonatomic) int failure;                  //@synthesize failure=_failure - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasIntent:(BOOL)arg1 ;
-(BOOL)hasIntent;
-(id)intentAsString:(int)arg1 ;
-(int)StringAsIntent:(id)arg1 ;
-(int)failure;
-(void)setFailure:(int)arg1 ;
-(void)setHasFailure:(BOOL)arg1 ;
-(BOOL)hasFailure;
-(id)failureAsString:(int)arg1 ;
-(int)StringAsFailure:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)intent;
-(void)setIntent:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
