/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _DECXPCObjectFactory : NSObject {

	unsigned long long _priorityLevel;
	unsigned long long _allowBattery;
	BOOL _repeating;
	BOOL _requireScreenSleep;
	BOOL _requireClassC;
	BOOL _requireClassA;
	long long _intervalHours;
	long long _intervalMinutes;
	long long _intervalSeconds;

}

@property (assign,nonatomic) long long intervalHours;                //@synthesize intervalHours=_intervalHours - In the implementation block
@property (assign,nonatomic) long long intervalMinutes;              //@synthesize intervalMinutes=_intervalMinutes - In the implementation block
@property (assign,nonatomic) long long intervalSeconds;              //@synthesize intervalSeconds=_intervalSeconds - In the implementation block
@property (assign,nonatomic) BOOL repeating;                         //@synthesize repeating=_repeating - In the implementation block
@property (assign,nonatomic) BOOL requireScreenSleep;                //@synthesize requireScreenSleep=_requireScreenSleep - In the implementation block
@property (assign,nonatomic) BOOL requireClassC;                     //@synthesize requireClassC=_requireClassC - In the implementation block
@property (assign,nonatomic) BOOL requireClassA;                     //@synthesize requireClassA=_requireClassA - In the implementation block
-(BOOL)repeating;
-(BOOL)requireScreenSleep;
-(void)setRequireScreenSleep:(BOOL)arg1 ;
-(void)setRepeating:(BOOL)arg1 ;
-(void)setPriorityLevelMaintenance;
-(void)setRequireClassC:(BOOL)arg1 ;
-(void)setIntervalHours:(long long)arg1 ;
-(id)getXPCObject;
-(void)setRequireClassA:(BOOL)arg1 ;
-(long long)_getInterval;
-(const char*)_activityPriority;
-(BOOL)_shouldAllowBattery;
-(void)setPriorityLevelUtility;
-(void)disallowBattery;
-(long long)intervalHours;
-(long long)intervalMinutes;
-(void)setIntervalMinutes:(long long)arg1 ;
-(long long)intervalSeconds;
-(void)setIntervalSeconds:(long long)arg1 ;
-(BOOL)requireClassC;
-(BOOL)requireClassA;
-(void)allowBattery;
-(id)init;
@end

