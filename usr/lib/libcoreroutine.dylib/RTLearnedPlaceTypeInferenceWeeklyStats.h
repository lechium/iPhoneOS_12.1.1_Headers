/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface RTLearnedPlaceTypeInferenceWeeklyStats : NSObject {

	double _dailyAggregateDwellTimeBetweenDateRangeAverage;
	double _dailyAggregateDwellTimeBetweenDateRangeStandardDeviation;
	long long _totalDailyVisitCount;
	long long _daysWithNonZeroDwellTime;

}

@property (nonatomic,readonly) double dailyAggregateDwellTimeBetweenDateRangeAverage;                        //@synthesize dailyAggregateDwellTimeBetweenDateRangeAverage=_dailyAggregateDwellTimeBetweenDateRangeAverage - In the implementation block
@property (nonatomic,readonly) double dailyAggregateDwellTimeBetweenDateRangeStandardDeviation;              //@synthesize dailyAggregateDwellTimeBetweenDateRangeStandardDeviation=_dailyAggregateDwellTimeBetweenDateRangeStandardDeviation - In the implementation block
@property (nonatomic,readonly) long long totalDailyVisitCount;                                               //@synthesize totalDailyVisitCount=_totalDailyVisitCount - In the implementation block
@property (nonatomic,readonly) long long daysWithNonZeroDwellTime;                                           //@synthesize daysWithNonZeroDwellTime=_daysWithNonZeroDwellTime - In the implementation block
-(long long)daysWithNonZeroDwellTime;
-(long long)totalDailyVisitCount;
-(double)dailyAggregateDwellTimeBetweenDateRangeAverage;
-(double)dailyAggregateDwellTimeBetweenDateRangeStandardDeviation;
-(id)initWithDailyStats:(id)arg1 ;
-(id)description;
@end

