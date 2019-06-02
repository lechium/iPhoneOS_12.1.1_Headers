/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDateComponents;

@interface _HKBedtimeAlarm : NSObject {

	NSDateComponents* _sleepDateComponents;
	NSDateComponents* _wakeDateComponents;

}

@property (nonatomic,readonly) NSDateComponents * sleepDateComponents;              //@synthesize sleepDateComponents=_sleepDateComponents - In the implementation block
@property (nonatomic,readonly) NSDateComponents * wakeDateComponents;               //@synthesize wakeDateComponents=_wakeDateComponents - In the implementation block
+(id)bedtimeAlarmWithSleepDate:(id)arg1 wakeDate:(id)arg2 calendar:(id)arg3 ;
-(id)firstDateIntervalAfterDate:(id)arg1 calendar:(id)arg2 ;
-(id)initWithSleepDateComponents:(id)arg1 wakeDateComponents:(id)arg2 ;
-(NSDateComponents *)sleepDateComponents;
-(NSDateComponents *)wakeDateComponents;
@end

