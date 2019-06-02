/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@class NSCalendar, HKUnitPreferenceController;

@interface HKActivityCacheChartDataSource : HKHealthQueryChartCacheDataSource {

	NSCalendar* _gregorianCalendar;
	NSCalendar* _gregorianNonUTCCalendar;
	HKUnitPreferenceController* _unitController;

}
-(id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_dateComponentsForDate:(id)arg1 ;
-(id)_cachePredicateForStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)_workoutsPredicateForStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)_handleActivityCaches:(id)arg1 workouts:(id)arg2 blockStart:(id)arg3 blockEnd:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)_unitForDisplayType;
-(id)initWithUnitController:(id)arg1 healthStore:(id)arg2 ;
@end
