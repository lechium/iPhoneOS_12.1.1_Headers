/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthKit/HealthKit-Structs.h>
@class HKUnit;

@interface _HKWeightedAverageCalculator : NSObject {

	HDStatisticsCalculator_DEPRECATED<double> _standardStatistics;
	double _currentIntervalStart;
	HDStatisticsCalculator_DEPRECATED<double> _previousIntervals;
	HDStatisticsCalculator_DEPRECATED<double> _currentInterval;
	double _latestTime;
	HKUnit* _unit;

}
-(BOOL)addValue:(double)arg1 startTime:(double)arg2 endTime:(double)arg3 ;
-(id)initWithStartTime:(double)arg1 unit:(id)arg2 ;
-(id)getStatistics;
@end

