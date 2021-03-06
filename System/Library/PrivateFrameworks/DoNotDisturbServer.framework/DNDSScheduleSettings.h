/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturb/DNDScheduleSettings.h>

@class NSDate;

@interface DNDSScheduleSettings : DNDScheduleSettings {

	NSDate* _creationDate;

}

@property (nonatomic,copy,readonly) NSDate * creationDate;              //@synthesize creationDate=_creationDate - In the implementation block
+(id)settingsForRecord:(id)arg1 ;
+(id)settingsWithClientSettings:(id)arg1 creationDate:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(id)replacementObjectForCoder:(id)arg1 ;
-(NSDate *)creationDate;
-(id)makeRecord;
-(id)initWithScheduleEnabledSetting:(unsigned long long)arg1 timePeriod:(id)arg2 bedtimeBehaviorEnabledSetting:(unsigned long long)arg3 creationDate:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

