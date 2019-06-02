/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface PDScheduledActivityCriteria : NSObject <NSSecureCoding, NSCopying> {

	NSString* _priorityKey;
	long long _gracePeriod;
	BOOL _requireMainsPower;
	BOOL _requireScreenSleep;
	BOOL _requireNetworkConnectivity;
	BOOL _repeating;
	NSDate* _startDate;
	NSDate* _endDate;
	double _repeatInterval;
	NSString* _reason;

}

@property (nonatomic,retain) NSDate * startDate;                             //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                               //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) BOOL requireMainsPower;                         //@synthesize requireMainsPower=_requireMainsPower - In the implementation block
@property (assign,nonatomic) BOOL requireScreenSleep;                        //@synthesize requireScreenSleep=_requireScreenSleep - In the implementation block
@property (assign,nonatomic) BOOL requireNetworkConnectivity;                //@synthesize requireNetworkConnectivity=_requireNetworkConnectivity - In the implementation block
@property (assign,getter=isRepeating,nonatomic) BOOL repeating;              //@synthesize repeating=_repeating - In the implementation block
@property (assign,nonatomic) double repeatInterval;                          //@synthesize repeatInterval=_repeatInterval - In the implementation block
@property (nonatomic,copy) NSString * reason;                                //@synthesize reason=_reason - In the implementation block
+(id)priorityActivityCriteriaWithStartDate:(id)arg1 ;
+(id)maintenanceActivityCriteriaWithStartDate:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithPriorityKey:(id)arg1 gracePeriod:(long long)arg2 startDate:(id)arg3 ;
-(BOOL)isEqualToScheduledAcivityCriteria:(id)arg1 ;
-(id)xpcActivityCriteria;
-(BOOL)requireMainsPower;
-(void)setRequireMainsPower:(BOOL)arg1 ;
-(BOOL)requireScreenSleep;
-(void)setRequireScreenSleep:(BOOL)arg1 ;
-(BOOL)requireNetworkConnectivity;
-(void)setRequireNetworkConnectivity:(BOOL)arg1 ;
-(void)setRepeating:(BOOL)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setReason:(NSString *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)reason;
-(BOOL)isRepeating;
-(void)setRepeatInterval:(double)arg1 ;
-(double)repeatInterval;
@end

