/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSDate;

@interface CMSleepData : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long fRecordId;
	NSUUID* fSourceId;
	NSUUID* fSessionId;
	NSDate* fEventTime;
	long long fEventType;

}

@property (nonatomic,readonly) unsigned long long recordId; 
@property (nonatomic,readonly) NSUUID * sourceId; 
@property (nonatomic,readonly) NSUUID * sessionId; 
@property (nonatomic,readonly) NSDate * eventTime; 
@property (nonatomic,readonly) long long eventType; 
+(id)eventTypeName:(long long)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithRecordId:(unsigned long long)arg1 sourceId:(id)arg2 sessionId:(id)arg3 eventTime:(id)arg4 eventType:(long long)arg5 ;
-(void)convertToSpringTrackerEntry:(CLSpringTrackerEntry*)arg1 ;
-(id)initWithSpringEntry:(const CLSpringTrackerEntry*)arg1 ;
-(NSUUID *)sessionId;
-(NSUUID *)sourceId;
-(NSDate *)eventTime;
-(unsigned long long)recordId;
-(id)initWithSessionId:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)eventType;
@end
