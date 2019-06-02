/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@class NSDate;

@interface HKHeartRateHistogramDataSource : HKHealthQueryChartCacheDataSource {

	long long _heartRateContextStyle;
	NSDate* _specificStartDate;
	NSDate* _specificEndDate;
	/*^block*/id _userInfoCreationBlock;

}

@property (nonatomic,readonly) long long heartRateContextStyle;              //@synthesize heartRateContextStyle=_heartRateContextStyle - In the implementation block
@property (nonatomic,readonly) NSDate * specificStartDate;                   //@synthesize specificStartDate=_specificStartDate - In the implementation block
@property (nonatomic,readonly) NSDate * specificEndDate;                     //@synthesize specificEndDate=_specificEndDate - In the implementation block
@property (nonatomic,readonly) id userInfoCreationBlock;                     //@synthesize userInfoCreationBlock=_userInfoCreationBlock - In the implementation block
-(id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)userInfoCreationBlock;
-(id)_quickDate:(id)arg1 ;
-(id)_dataBlockFromHistograms:(id)arg1 ;
-(id)initWithHealthStore:(id)arg1 heartRateContextStyle:(long long)arg2 baseDisplayType:(id)arg3 specificStartDate:(id)arg4 specificEndDate:(id)arg5 userInfoCreationBlock:(/*^block*/id)arg6 ;
-(long long)heartRateContextStyle;
-(NSDate *)specificStartDate;
-(NSDate *)specificEndDate;
@end
