/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDSleepAlarmAWDSleepAlarmNightEvent : PBCodable <NSCopying> {

	long long _bedtimeHour;
	long long _bedtimeMinute;
	long long _bedtimeToCorrectedBedtimeMinutes;
	long long _bedtimeToFirstSleepInterruptionMinutes;
	long long _bedtimeToStartOfLongestSleepIntervalMinutes;
	long long _correctedBedtimeToThirdPartySleepOnsetMinutes;
	long long _percentOfDesiredSleep;
	unsigned long long _timestamp;
	long long _wakeupTimeToThirdPartyWakeupTimeMinutes;
	NSString* _thirdPartyBundleIdentifier;
	NSString* _thirdPartyDeviceManufacturer;
	NSString* _thirdPartyDeviceModel;
	BOOL _wakeupIsOnWeekday;
	SCD_Struct_HD54 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                         //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasBedtimeToCorrectedBedtimeMinutes; 
@property (assign,nonatomic) long long bedtimeToCorrectedBedtimeMinutes;                           //@synthesize bedtimeToCorrectedBedtimeMinutes=_bedtimeToCorrectedBedtimeMinutes - In the implementation block
@property (assign,nonatomic) BOOL hasBedtimeToFirstSleepInterruptionMinutes; 
@property (assign,nonatomic) long long bedtimeToFirstSleepInterruptionMinutes;                     //@synthesize bedtimeToFirstSleepInterruptionMinutes=_bedtimeToFirstSleepInterruptionMinutes - In the implementation block
@property (assign,nonatomic) BOOL hasBedtimeToStartOfLongestSleepIntervalMinutes; 
@property (assign,nonatomic) long long bedtimeToStartOfLongestSleepIntervalMinutes;                //@synthesize bedtimeToStartOfLongestSleepIntervalMinutes=_bedtimeToStartOfLongestSleepIntervalMinutes - In the implementation block
@property (assign,nonatomic) BOOL hasCorrectedBedtimeToThirdPartySleepOnsetMinutes; 
@property (assign,nonatomic) long long correctedBedtimeToThirdPartySleepOnsetMinutes;              //@synthesize correctedBedtimeToThirdPartySleepOnsetMinutes=_correctedBedtimeToThirdPartySleepOnsetMinutes - In the implementation block
@property (assign,nonatomic) BOOL hasWakeupTimeToThirdPartyWakeupTimeMinutes; 
@property (assign,nonatomic) long long wakeupTimeToThirdPartyWakeupTimeMinutes;                    //@synthesize wakeupTimeToThirdPartyWakeupTimeMinutes=_wakeupTimeToThirdPartyWakeupTimeMinutes - In the implementation block
@property (nonatomic,readonly) BOOL hasThirdPartyBundleIdentifier; 
@property (nonatomic,retain) NSString * thirdPartyBundleIdentifier;                                //@synthesize thirdPartyBundleIdentifier=_thirdPartyBundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasPercentOfDesiredSleep; 
@property (assign,nonatomic) long long percentOfDesiredSleep;                                      //@synthesize percentOfDesiredSleep=_percentOfDesiredSleep - In the implementation block
@property (assign,nonatomic) BOOL hasBedtimeHour; 
@property (assign,nonatomic) long long bedtimeHour;                                                //@synthesize bedtimeHour=_bedtimeHour - In the implementation block
@property (assign,nonatomic) BOOL hasBedtimeMinute; 
@property (assign,nonatomic) long long bedtimeMinute;                                              //@synthesize bedtimeMinute=_bedtimeMinute - In the implementation block
@property (assign,nonatomic) BOOL hasWakeupIsOnWeekday; 
@property (assign,nonatomic) BOOL wakeupIsOnWeekday;                                               //@synthesize wakeupIsOnWeekday=_wakeupIsOnWeekday - In the implementation block
@property (nonatomic,readonly) BOOL hasThirdPartyDeviceModel; 
@property (nonatomic,retain) NSString * thirdPartyDeviceModel;                                     //@synthesize thirdPartyDeviceModel=_thirdPartyDeviceModel - In the implementation block
@property (nonatomic,readonly) BOOL hasThirdPartyDeviceManufacturer; 
@property (nonatomic,retain) NSString * thirdPartyDeviceManufacturer;                              //@synthesize thirdPartyDeviceManufacturer=_thirdPartyDeviceManufacturer - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setThirdPartyBundleIdentifier:(NSString *)arg1 ;
-(void)setThirdPartyDeviceModel:(NSString *)arg1 ;
-(void)setThirdPartyDeviceManufacturer:(NSString *)arg1 ;
-(BOOL)hasThirdPartyBundleIdentifier;
-(BOOL)hasThirdPartyDeviceModel;
-(BOOL)hasThirdPartyDeviceManufacturer;
-(NSString *)thirdPartyBundleIdentifier;
-(NSString *)thirdPartyDeviceModel;
-(NSString *)thirdPartyDeviceManufacturer;
-(void)setBedtimeHour:(long long)arg1 ;
-(void)setBedtimeMinute:(long long)arg1 ;
-(void)setBedtimeToCorrectedBedtimeMinutes:(long long)arg1 ;
-(void)setBedtimeToFirstSleepInterruptionMinutes:(long long)arg1 ;
-(void)setBedtimeToStartOfLongestSleepIntervalMinutes:(long long)arg1 ;
-(void)setPercentOfDesiredSleep:(long long)arg1 ;
-(void)setWakeupIsOnWeekday:(BOOL)arg1 ;
-(void)setCorrectedBedtimeToThirdPartySleepOnsetMinutes:(long long)arg1 ;
-(void)setWakeupTimeToThirdPartyWakeupTimeMinutes:(long long)arg1 ;
-(void)setHasBedtimeToCorrectedBedtimeMinutes:(BOOL)arg1 ;
-(BOOL)hasBedtimeToCorrectedBedtimeMinutes;
-(void)setHasBedtimeToFirstSleepInterruptionMinutes:(BOOL)arg1 ;
-(BOOL)hasBedtimeToFirstSleepInterruptionMinutes;
-(void)setHasBedtimeToStartOfLongestSleepIntervalMinutes:(BOOL)arg1 ;
-(BOOL)hasBedtimeToStartOfLongestSleepIntervalMinutes;
-(void)setHasCorrectedBedtimeToThirdPartySleepOnsetMinutes:(BOOL)arg1 ;
-(BOOL)hasCorrectedBedtimeToThirdPartySleepOnsetMinutes;
-(void)setHasWakeupTimeToThirdPartyWakeupTimeMinutes:(BOOL)arg1 ;
-(BOOL)hasWakeupTimeToThirdPartyWakeupTimeMinutes;
-(void)setHasPercentOfDesiredSleep:(BOOL)arg1 ;
-(BOOL)hasPercentOfDesiredSleep;
-(void)setHasBedtimeHour:(BOOL)arg1 ;
-(BOOL)hasBedtimeHour;
-(void)setHasBedtimeMinute:(BOOL)arg1 ;
-(BOOL)hasBedtimeMinute;
-(void)setHasWakeupIsOnWeekday:(BOOL)arg1 ;
-(BOOL)hasWakeupIsOnWeekday;
-(long long)bedtimeToCorrectedBedtimeMinutes;
-(long long)bedtimeToFirstSleepInterruptionMinutes;
-(long long)bedtimeToStartOfLongestSleepIntervalMinutes;
-(long long)correctedBedtimeToThirdPartySleepOnsetMinutes;
-(long long)wakeupTimeToThirdPartyWakeupTimeMinutes;
-(long long)percentOfDesiredSleep;
-(long long)bedtimeHour;
-(long long)bedtimeMinute;
-(BOOL)wakeupIsOnWeekday;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(id)dictionaryRepresentation;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

