/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HKPersistableWorkoutEvent.h>

@class NSUUID, NSDateInterval, NSError, NSDictionary;

@interface _HKWorkoutEvent : NSObject <NSSecureCoding, HKPersistableWorkoutEvent> {

	NSUUID* _sessionId;
	long long _eventType;
	NSDateInterval* _dateInterval;
	NSError* _error;
	NSDictionary* _metadata;

}

@property (nonatomic,copy,readonly) NSUUID * sessionId;                         //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,readonly) long long eventType;                             //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,copy,readonly) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                            //@synthesize error=_error - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * metadata;                    //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * sessionUUID; 
@property (nonatomic,readonly) long long workoutEventType; 
+(BOOL)supportsSecureCoding;
-(NSUUID *)sessionId;
-(NSDateInterval *)dateInterval;
-(NSUUID *)sessionUUID;
-(id)initWithEventType:(long long)arg1 sessionId:(id)arg2 dateInterval:(id)arg3 metadata:(id)arg4 ;
-(id)initWithSessionId:(id)arg1 error:(id)arg2 ;
-(long long)workoutEventType;
-(id)initWithWorkoutEventType:(long long)arg1 sessionUUID:(id)arg2 dateInterval:(id)arg3 metadata:(id)arg4 error:(id)arg5 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(NSDictionary *)metadata;
-(long long)eventType;
-(NSError *)error;
@end

