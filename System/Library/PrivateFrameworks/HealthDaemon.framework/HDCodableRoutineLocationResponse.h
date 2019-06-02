/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableRoutineLocation;

@interface HDCodableRoutineLocationResponse : PBCodable <NSCopying> {

	HDCodableRoutineLocation* _locationOfInterest;

}

@property (nonatomic,readonly) BOOL hasLocationOfInterest; 
@property (nonatomic,retain) HDCodableRoutineLocation * locationOfInterest;              //@synthesize locationOfInterest=_locationOfInterest - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setLocationOfInterest:(HDCodableRoutineLocation *)arg1 ;
-(BOOL)hasLocationOfInterest;
-(HDCodableRoutineLocation *)locationOfInterest;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
