/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface RTXPCActivityCriteria : NSObject {

	BOOL _requireNetworkConnectivity;
	BOOL _requireInexpensiveNetworkConnectivity;
	BOOL _allowBattery;
	BOOL _powerNap;
	double _interval;
	double _delay;
	double _gracePeriod;
	unsigned long long _priority;
	unsigned long long _networkTransferDirection;

}

@property (nonatomic,readonly) double interval;                                          //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) double delay;                                             //@synthesize delay=_delay - In the implementation block
@property (nonatomic,readonly) double gracePeriod;                                       //@synthesize gracePeriod=_gracePeriod - In the implementation block
@property (nonatomic,readonly) unsigned long long priority;                              //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) BOOL requireNetworkConnectivity;                          //@synthesize requireNetworkConnectivity=_requireNetworkConnectivity - In the implementation block
@property (nonatomic,readonly) BOOL requireInexpensiveNetworkConnectivity;               //@synthesize requireInexpensiveNetworkConnectivity=_requireInexpensiveNetworkConnectivity - In the implementation block
@property (nonatomic,readonly) unsigned long long networkTransferDirection;              //@synthesize networkTransferDirection=_networkTransferDirection - In the implementation block
@property (nonatomic,readonly) BOOL allowBattery;                                        //@synthesize allowBattery=_allowBattery - In the implementation block
@property (nonatomic,readonly) BOOL powerNap;                                            //@synthesize powerNap=_powerNap - In the implementation block
+(const char*)convertPriority:(unsigned long long)arg1 ;
+(const char*)convertNetworkTransferDirection:(unsigned long long)arg1 ;
-(BOOL)requireNetworkConnectivity;
-(id)initWithInterval:(double)arg1 gracePeriod:(double)arg2 priority:(unsigned long long)arg3 requireNetworkConnectivity:(BOOL)arg4 requireInexpensiveNetworkConnectivity:(BOOL)arg5 networkTransferDirection:(unsigned long long)arg6 allowBattery:(BOOL)arg7 powerNap:(BOOL)arg8 ;
-(double)gracePeriod;
-(BOOL)requireInexpensiveNetworkConnectivity;
-(unsigned long long)networkTransferDirection;
-(BOOL)allowBattery;
-(BOOL)powerNap;
-(id)init;
-(id)description;
-(unsigned long long)priority;
-(double)delay;
-(double)interval;
@end

