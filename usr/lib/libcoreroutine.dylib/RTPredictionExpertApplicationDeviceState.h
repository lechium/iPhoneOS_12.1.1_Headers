/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTPredictionExpertApplication.h>

@interface RTPredictionExpertApplicationDeviceState : RTPredictionExpertApplication {

	double _maxWakeupEventAge;

}

@property (assign,nonatomic) double maxWakeupEventAge;              //@synthesize maxWakeupEventAge=_maxWakeupEventAge - In the implementation block
-(id)initWithQueue:(id)arg1 category:(long long)arg2 dataSource:(id)arg3 defaultsManager:(id)arg4 mediaRemote:(id)arg5 featureAddons:(id)arg6 ;
-(id)supportedEventClasses;
-(void)_processEventsWithAppLaunchEvents:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)dateIntervalForAppLaunchEvent:(id)arg1 ;
-(double)maxWakeupEventAge;
-(void)setMaxWakeupEventAge:(double)arg1 ;
@end

