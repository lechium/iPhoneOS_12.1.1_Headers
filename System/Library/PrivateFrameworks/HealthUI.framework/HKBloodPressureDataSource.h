/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@interface HKBloodPressureDataSource : HKHealthQueryChartCacheDataSource {

	/*^block*/id _userInfoCreationBlock;

}

@property (nonatomic,copy) id userInfoCreationBlock;              //@synthesize userInfoCreationBlock=_userInfoCreationBlock - In the implementation block
-(id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)userInfoCreationBlock;
-(void)setUserInfoCreationBlock:(id)arg1 ;
-(void)_callCompletionWithSystolicResults:(id)arg1 diastolicResults:(id)arg2 statisticsOptions:(unsigned long long)arg3 blockStart:(id)arg4 blockEnd:(id)arg5 completion:(/*^block*/id)arg6 ;
@end

