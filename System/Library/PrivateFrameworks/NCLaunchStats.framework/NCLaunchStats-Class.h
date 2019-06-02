/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NCLaunchStats.framework/NCLaunchStats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log, OS_dispatch_queue, _DKKnowledgeSaving_DKKnowledgeDeleting_DKKnowledgeQuerying, _DASActivityScheduler;
@class CDSession, CDAttribute, NSMutableDictionary, NSObject, _DKEventStream, _DKPredictor, _DKPredictionTimeline, _DASActivity;

@interface NCLaunchStats : NSObject {

	CDSession* sessionDuet;
	CDAttribute* bundleAttr;
	NSMutableDictionary* seqTracker;
	NSMutableDictionary* prewarmTimeTracker;
	NSMutableDictionary* prewarmDurationTracker;
	NSMutableDictionary* launchTracker;
	long long numRepeatedPrewarms;
	long long numPrewarmedLaunches;
	int classCLockedToken;
	BOOL isClassCLocked;
	BOOL backgroundAppRefreshSwitchedOn;
	double kTimeGuardBand;
	int predictedWidgetsToken;
	int generatePredictionToken;
	int appSpecificTriggerToken;
	/*^block*/id _asyncRecommendHandler;
	NSObject*<OS_os_log> _ncLog;
	NSObject*<OS_dispatch_queue> _syncQueue;
	NSMutableDictionary* _widgetViewTime;
	_DKEventStream* _widgetStream;
	id<_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeQuerying> _store;
	_DKPredictor* _predictor;
	_DKPredictionTimeline* _predictionTimeline;
	id<_DASActivityScheduler> _scheduler;
	_DASActivity* _predictionUpdateActivity;
	_DASActivity* _widgetPrewarmActivity;
	_DASActivity* _historyDeletionActivity;
	NSMutableDictionary* _appsRequestingRefresh;
	NSMutableDictionary* _appUpdateTimes;

}

@property (nonatomic,copy) id asyncRecommendHandler;                                                                //@synthesize asyncRecommendHandler=_asyncRecommendHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> ncLog;                                                            //@synthesize ncLog=_ncLog - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> syncQueue;                                                //@synthesize syncQueue=_syncQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * widgetViewTime;                                                  //@synthesize widgetViewTime=_widgetViewTime - In the implementation block
@property (nonatomic,retain) _DKEventStream * widgetStream;                                                         //@synthesize widgetStream=_widgetStream - In the implementation block
@property (nonatomic,retain) id<_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeQuerying> store;              //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) _DKPredictor * predictor;                                                              //@synthesize predictor=_predictor - In the implementation block
@property (nonatomic,retain) _DKPredictionTimeline * predictionTimeline;                                            //@synthesize predictionTimeline=_predictionTimeline - In the implementation block
@property (nonatomic,retain) id<_DASActivityScheduler> scheduler;                                                   //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,retain) _DASActivity * predictionUpdateActivity;                                               //@synthesize predictionUpdateActivity=_predictionUpdateActivity - In the implementation block
@property (nonatomic,retain) _DASActivity * widgetPrewarmActivity;                                                  //@synthesize widgetPrewarmActivity=_widgetPrewarmActivity - In the implementation block
@property (nonatomic,retain) _DASActivity * historyDeletionActivity;                                                //@synthesize historyDeletionActivity=_historyDeletionActivity - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * appsRequestingRefresh;                                           //@synthesize appsRequestingRefresh=_appsRequestingRefresh - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * appUpdateTimes;                                                  //@synthesize appUpdateTimes=_appUpdateTimes - In the implementation block
+(void)scheduleDeletionActivity:(id)arg1 store:(id)arg2 stream:(id)arg3 ;
+(double)minTimeBetweenRefreshes;
+(id)sharedInstance;
-(void)endEvent:(id)arg1 ;
-(id)initWithKnowledgeStore:(id)arg1 ;
-(void)setScheduler:(id<_DASActivityScheduler>)arg1 ;
-(void)setPredictor:(_DKPredictor *)arg1 ;
-(_DKPredictor *)predictor;
-(id<_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeQuerying>)store;
-(void)initAfterClassCUnlocked;
-(id)predictedWidgetUsage;
-(void)setPredictionTimeline:(_DKPredictionTimeline *)arg1 ;
-(_DKPredictionTimeline *)predictionTimeline;
-(void)scheduleWidgetRefresh:(id)arg1 withRequestedRefreshes:(id)arg2 ;
-(void)setNCLaunchRecommendationHandler:(/*^block*/id)arg1 ;
-(void)setPredictionUpdateActivity:(_DASActivity *)arg1 ;
-(NSMutableDictionary *)appsRequestingRefresh;
-(void)scheduleWidgetRefresh:(id)arg1 withRequestedRefreshes:(id)arg2 cancelExisting:(BOOL)arg3 ;
-(id)nextPredictedRefreshDate:(id)arg1 afterDate:(id)arg2 ;
-(id)earliestRequestedRefresh:(id)arg1 atDate:(id)arg2 ;
-(void)schedulePredictionUpdateBeforeDate:(id)arg1 ;
-(void)setWidgetPrewarmActivity:(_DASActivity *)arg1 ;
-(void)updateWidgetsAtDate:(id)arg1 withTimeline:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)predictedWidgetsForDate:(id)arg1 withTimeline:(id)arg2 ;
-(BOOL)canUpdateWidgetsUnsafe;
-(id)widgetsToRefreshAtDate:(id)arg1 withTimeline:(id)arg2 ;
-(void)unprotectedRemoveRequestsForWidget:(id)arg1 beforeDate:(id)arg2 ;
-(void)recordPrewarmStatisticsRaw:(id)arg1 ;
-(void)unprotectedRemoveAllRequestsBeforeDate:(id)arg1 ;
-(BOOL)immediateUpdatesAllowedForWidgetUnsafe:(id)arg1 ;
-(void)updateBARSwitch;
-(void)cancelRequestedRefreshForWidget:(id)arg1 ;
-(id)asyncRecommendHandler;
-(void)setAsyncRecommendHandler:(id)arg1 ;
-(NSObject*<OS_os_log>)ncLog;
-(void)setNcLog:(NSObject*<OS_os_log>)arg1 ;
-(NSMutableDictionary *)widgetViewTime;
-(void)setWidgetViewTime:(NSMutableDictionary *)arg1 ;
-(_DKEventStream *)widgetStream;
-(void)setWidgetStream:(_DKEventStream *)arg1 ;
-(_DASActivity *)predictionUpdateActivity;
-(_DASActivity *)widgetPrewarmActivity;
-(_DASActivity *)historyDeletionActivity;
-(void)setHistoryDeletionActivity:(_DASActivity *)arg1 ;
-(void)setAppsRequestingRefresh:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)appUpdateTimes;
-(void)setAppUpdateTimes:(NSMutableDictionary *)arg1 ;
-(void)preWarmHasStarted:(id)arg1 withResult:(unsigned long long)arg2 withTriggerType:(int)arg3 withSequence:(unsigned long long)arg4 ;
-(void)preWarmHasEnded:(id)arg1 withResult:(unsigned long long)arg2 withTriggerType:(int)arg3 withSequence:(unsigned long long)arg4 ;
-(void)setNCLaunchRecommendationHandlerWithCompletion:(/*^block*/id)arg1 ;
-(void)requestRefreshForWidget:(id)arg1 afterDate:(id)arg2 ;
-(void)startEvent:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setStore:(id<_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeQuerying>)arg1 ;
-(id<_DASActivityScheduler>)scheduler;
-(id)init;
-(void)dealloc;
@end

