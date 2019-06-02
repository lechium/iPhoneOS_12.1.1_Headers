/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DASBudgetPersisting, OS_dispatch_queue, OS_dispatch_source, OS_os_log;
@class NSObject, NSDate, NSArray, _DKPredictionTimeline;

@interface _DASBudgetModulator : NSObject {

	id<_DASBudgetPersisting> _persistence;
	NSObject*<OS_dispatch_queue> _queue;
	NSDate* _lastModulationDate;
	NSDate* _lastUsageTimelineUpdate;
	NSArray* _budgets;
	NSObject*<OS_dispatch_source> _timer;
	_DKPredictionTimeline* _usage;
	NSObject*<OS_os_log> _log;

}

@property (nonatomic,retain) id<_DASBudgetPersisting> persistence;              //@synthesize persistence=_persistence - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSDate * lastModulationDate;                       //@synthesize lastModulationDate=_lastModulationDate - In the implementation block
@property (nonatomic,retain) NSDate * lastUsageTimelineUpdate;                  //@synthesize lastUsageTimelineUpdate=_lastUsageTimelineUpdate - In the implementation block
@property (nonatomic,retain) NSArray * budgets;                                 //@synthesize budgets=_budgets - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;               //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) _DKPredictionTimeline * usage;                     //@synthesize usage=_usage - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                          //@synthesize log=_log - In the implementation block
+(id)modulatorWithBudgets:(id)arg1 persistence:(id)arg2 ;
-(id<_DASBudgetPersisting>)persistence;
-(NSDate *)lastModulationDate;
-(void)_queue_modulateBudgets;
-(id)initWithBudgets:(id)arg1 persistence:(id)arg2 ;
-(int)numberOfModulationFromDate:(id)arg1 toDate:(id)arg2 ;
-(id)usageTimeline;
-(double)relativeUsageAtDate:(id)arg1 withTimeline:(id)arg2 ;
-(void)updateCapacity:(double)arg1 forBudgetWithName:(id)arg2 ;
-(void)setLastModulationDate:(NSDate *)arg1 ;
-(NSDate *)lastUsageTimelineUpdate;
-(void)setLastUsageTimelineUpdate:(NSDate *)arg1 ;
-(void)setBudgets:(NSArray *)arg1 ;
-(void)setPersistence:(id<_DASBudgetPersisting>)arg1 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(NSArray *)budgets;
-(_DKPredictionTimeline *)usage;
-(void)setUsage:(_DKPredictionTimeline *)arg1 ;
-(NSObject*<OS_os_log>)log;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)timer;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

