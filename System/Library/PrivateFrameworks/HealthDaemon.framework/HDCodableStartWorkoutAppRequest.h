/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HDCodableWorkoutConfiguration;

@interface HDCodableStartWorkoutAppRequest : PBRequest <NSCopying> {

	NSString* _applicationIdentifier;
	NSString* _requestIdentifier;
	HDCodableWorkoutConfiguration* _workoutConfiguration;

}

@property (nonatomic,readonly) BOOL hasRequestIdentifier; 
@property (nonatomic,retain) NSString * requestIdentifier;                                      //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasApplicationIdentifier; 
@property (nonatomic,retain) NSString * applicationIdentifier;                                  //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasWorkoutConfiguration; 
@property (nonatomic,retain) HDCodableWorkoutConfiguration * workoutConfiguration;              //@synthesize workoutConfiguration=_workoutConfiguration - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasApplicationIdentifier;
-(NSString *)requestIdentifier;
-(HDCodableWorkoutConfiguration *)workoutConfiguration;
-(BOOL)hasRequestIdentifier;
-(void)setWorkoutConfiguration:(HDCodableWorkoutConfiguration *)arg1 ;
-(BOOL)hasWorkoutConfiguration;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(NSString *)applicationIdentifier;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
@end

