/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IOAccessoryManager.framework/IOAccessoryManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IOAccessoryUserLdcmParamClass : NSObject {

	int _userBehaviorMask;
	int _fdpBehaviorMask;
	unsigned long long _minVhiDurationSec;
	unsigned long long _maxVhiDurationSec;
	unsigned long long _maxUpFluctuationMv;
	unsigned long long _numEisHalogenSamples;
	unsigned long long _wetPollingIntervalSec;
	unsigned long long _dryPollingIntervalSec;
	unsigned long long _minDryReadings;
	unsigned long long _disableHalogenPolling;
	unsigned long long _enableHalogenSnrTtr;

}

@property (assign) unsigned long long minVhiDurationSec;                  //@synthesize minVhiDurationSec=_minVhiDurationSec - In the implementation block
@property (assign) unsigned long long maxVhiDurationSec;                  //@synthesize maxVhiDurationSec=_maxVhiDurationSec - In the implementation block
@property (assign) unsigned long long maxUpFluctuationMv;                 //@synthesize maxUpFluctuationMv=_maxUpFluctuationMv - In the implementation block
@property (assign) int userBehaviorMask;                                  //@synthesize userBehaviorMask=_userBehaviorMask - In the implementation block
@property (assign) int fdpBehaviorMask;                                   //@synthesize fdpBehaviorMask=_fdpBehaviorMask - In the implementation block
@property (assign) unsigned long long numEisHalogenSamples;               //@synthesize numEisHalogenSamples=_numEisHalogenSamples - In the implementation block
@property (assign) unsigned long long wetPollingIntervalSec;              //@synthesize wetPollingIntervalSec=_wetPollingIntervalSec - In the implementation block
@property (assign) unsigned long long dryPollingIntervalSec;              //@synthesize dryPollingIntervalSec=_dryPollingIntervalSec - In the implementation block
@property (assign) unsigned long long minDryReadings;                     //@synthesize minDryReadings=_minDryReadings - In the implementation block
@property (assign) unsigned long long disableHalogenPolling;              //@synthesize disableHalogenPolling=_disableHalogenPolling - In the implementation block
@property (assign) unsigned long long enableHalogenSnrTtr;                //@synthesize enableHalogenSnrTtr=_enableHalogenSnrTtr - In the implementation block
-(unsigned long long)minVhiDurationSec;
-(void)setMinVhiDurationSec:(unsigned long long)arg1 ;
-(unsigned long long)maxVhiDurationSec;
-(void)setMaxVhiDurationSec:(unsigned long long)arg1 ;
-(unsigned long long)maxUpFluctuationMv;
-(void)setMaxUpFluctuationMv:(unsigned long long)arg1 ;
-(int)userBehaviorMask;
-(void)setUserBehaviorMask:(int)arg1 ;
-(int)fdpBehaviorMask;
-(void)setFdpBehaviorMask:(int)arg1 ;
-(unsigned long long)numEisHalogenSamples;
-(void)setNumEisHalogenSamples:(unsigned long long)arg1 ;
-(unsigned long long)wetPollingIntervalSec;
-(void)setWetPollingIntervalSec:(unsigned long long)arg1 ;
-(unsigned long long)dryPollingIntervalSec;
-(void)setDryPollingIntervalSec:(unsigned long long)arg1 ;
-(unsigned long long)minDryReadings;
-(void)setMinDryReadings:(unsigned long long)arg1 ;
-(unsigned long long)disableHalogenPolling;
-(void)setDisableHalogenPolling:(unsigned long long)arg1 ;
-(unsigned long long)enableHalogenSnrTtr;
-(void)setEnableHalogenSnrTtr:(unsigned long long)arg1 ;
-(id)init;
@end

