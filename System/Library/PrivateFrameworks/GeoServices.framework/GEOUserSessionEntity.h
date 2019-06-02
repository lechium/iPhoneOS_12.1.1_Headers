/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface GEOUserSessionEntity : NSObject <NSCopying> {

	GEOSessionID _sessionID;
	unsigned _sequenceNumber;
	double _sessionCreationTime;
	double _sessionRelativeTimestamp;

}

@property (readonly) GEOSessionID sessionID;                                //@synthesize sessionID=_sessionID - In the implementation block
@property (readonly) unsigned sequenceNumber;                               //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign) double sessionCreationTime;                              //@synthesize sessionCreationTime=_sessionCreationTime - In the implementation block
@property (readonly) double sessionRelativeTimestamp;                       //@synthesize sessionRelativeTimestamp=_sessionRelativeTimestamp - In the implementation block
@property (nonatomic,readonly) NSString * sessionEntityString; 
@property (nonatomic,readonly) NSString * sessionIDString; 
@property (nonatomic,readonly) NSString * sessionUUIDString; 
@property (nonatomic,readonly) NSNumber * sessionIDLow; 
@property (nonatomic,readonly) NSNumber * sessionIDHigh; 
@property (nonatomic,readonly) NSString * sessionIDLowString; 
@property (nonatomic,readonly) NSString * sessionIDHighString; 
-(double)sessionRelativeTimestamp;
-(unsigned)sequenceNumber;
-(void)updateWithSessionEntityString:(id)arg1 ;
-(id)initWithSessionID:(GEOSessionID)arg1 sessionCreationTime:(double)arg2 sequenceNumber:(unsigned)arg3 ;
-(id)initWithSessionEntityString:(id)arg1 ;
-(NSString *)sessionIDString;
-(double)sessionRelativeTimestampForEventTime:(double)arg1 ;
-(double)sessionCreationTime;
-(NSString *)sessionIDHighString;
-(NSString *)sessionIDLowString;
-(BOOL)_isValidSessionIDHighOrLowString:(id)arg1 ;
-(NSString *)sessionEntityString;
-(NSString *)sessionUUIDString;
-(NSNumber *)sessionIDLow;
-(NSNumber *)sessionIDHigh;
-(void)updateSessionIDFromUUIDString:(id)arg1 ;
-(void)setSessionCreationTime:(double)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOSessionID)sessionID;
@end

