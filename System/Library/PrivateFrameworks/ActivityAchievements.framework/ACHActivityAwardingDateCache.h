/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSDateComponents, NSCalendar, NSDate;

@interface ACHActivityAwardingDateCache : NSObject {

	NSNumber* _dayOfWeekForToday;
	NSNumber* _dayOfWeekForLastDayOfFitnessWeek;
	NSNumber* _numberOfDaysInThisMonth;
	NSNumber* _dayOfMonthForToday;
	NSDateComponents* _currentDateComponents;
	NSCalendar* _calendar;
	NSDate* _currentDate;

}

@property (nonatomic,retain) NSCalendar * calendar;                                      //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,retain) NSDate * currentDate;                                       //@synthesize currentDate=_currentDate - In the implementation block
@property (nonatomic,retain) NSDateComponents * currentDateComponents;                   //@synthesize currentDateComponents=_currentDateComponents - In the implementation block
@property (nonatomic,readonly) NSNumber * dayOfWeekForToday;                             //@synthesize dayOfWeekForToday=_dayOfWeekForToday - In the implementation block
@property (nonatomic,readonly) NSNumber * dayOfWeekForLastDayOfFitnessWeek;              //@synthesize dayOfWeekForLastDayOfFitnessWeek=_dayOfWeekForLastDayOfFitnessWeek - In the implementation block
@property (nonatomic,readonly) NSNumber * numberOfDaysInThisMonth;                       //@synthesize numberOfDaysInThisMonth=_numberOfDaysInThisMonth - In the implementation block
@property (nonatomic,readonly) NSNumber * dayOfMonthForToday;                            //@synthesize dayOfMonthForToday=_dayOfMonthForToday - In the implementation block
-(NSDate *)currentDate;
-(void)setCurrentDate:(NSDate *)arg1 ;
-(void)_clearDateVariables;
-(void)setCurrentDateComponents:(NSDateComponents *)arg1 ;
-(NSNumber *)dayOfWeekForToday;
-(NSNumber *)dayOfWeekForLastDayOfFitnessWeek;
-(NSNumber *)numberOfDaysInThisMonth;
-(NSNumber *)dayOfMonthForToday;
-(NSDateComponents *)currentDateComponents;
-(NSCalendar *)calendar;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(id)initWithCalendar:(id)arg1 ;
@end

