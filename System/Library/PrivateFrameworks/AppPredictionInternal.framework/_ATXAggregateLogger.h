/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _ATXBundleIdSet, PETScalarEventTracker, PETDistributionEventTracker, PETGoalConversionEventTracker;

@interface _ATXAggregateLogger : NSObject {

	_ATXBundleIdSet* _bundleIdSet;
	long long _buildType;
	PETScalarEventTracker* _allLaunchesPredictionTracker;
	PETScalarEventTracker* _predictionTracker;
	PETScalarEventTracker* _conversionTracker;
	PETScalarEventTracker* _outcomeTracker;
	PETScalarEventTracker* _outcomeConsumerTracker;
	PETDistributionEventTracker* _outcomeConsumerTrackerWithCacheAge;
	PETDistributionEventTracker* _consumerOutcomeCacheAgeHistogram;
	PETScalarEventTracker* _appOutcomeTracker;
	PETScalarEventTracker* _conversionPositionTracker;
	PETScalarEventTracker* _itemsShownTracker;
	PETScalarEventTracker* _expertOutcomeTracker;
	PETScalarEventTracker* _predictUninstalledAppsTracker;
	PETScalarEventTracker* _widgetBackgroundRefreshTracker;
	PETDistributionEventTracker* _inputsTracker;
	PETDistributionEventTracker* _scoreTracker;
	PETGoalConversionEventTracker* _fidesRecordCreationTracker;
	PETScalarEventTracker* _quietingSuggestionOutcomeTracker;
	PETScalarEventTracker* _promotingSuggestionOutcomeTracker;
	PETScalarEventTracker* _notificationOutcomeTracker;
	PETScalarEventTracker* _suggestionsCountTracker;

}
+(BOOL)yesWithProbability:(double)arg1 ;
+(BOOL)isConversionOutcome:(unsigned long long)arg1 ;
+(id)propertyStringForLaunchReason:(id)arg1 ;
+(id)notificationOutcomesMapping;
+(id)suggestionCountsArray;
+(id)quietingSuggestionOutcomesMapping;
+(id)predictedItemOutcomesMapping;
+(id)predictionOutcomesMapping;
+(long long)getBuildType;
+(void)yesWithProbabilityAlwaysSays:(BOOL)arg1 ;
+(void)yesWithProbabilityStopMocking;
+(id)stringForPredictionOutcome:(unsigned long long)arg1 ;
+(id)stringForPredictedItemOutcome:(unsigned long long)arg1 ;
+(id)sharedInstance;
-(void)logLaunchEventWithLaunchReason:(id)arg1 predicted:(BOOL)arg2 position:(long long)arg3 ;
-(void)logPredictionEventWith:(id)arg1 outcome:(unsigned long long)arg2 forABGroup:(id)arg3 consumerType:(unsigned long long)arg4 andSubType:(unsigned char)arg5 ;
-(void)logInputs:(const float*)arg1 andScore:(float)arg2 withOutcome:(unsigned long long)arg3 ;
-(void)logPredictionOfAppWithBundleId:(id)arg1 inputs:(const float*)arg2 outcome:(unsigned long long)arg3 rank:(unsigned long long)arg4 score:(float)arg5 forABGroup:(id)arg6 ;
-(void)logPredictUninstalledApps:(unsigned long long)arg1 consumerSubType:(unsigned char)arg2 ;
-(void)logRefreshedWidgetInBackground;
-(void)logFidesRecordCreation:(BOOL)arg1 ;
-(void)logQuietingSuggestionOutcome:(long long)arg1 ;
-(void)logPromotingSuggestionOutcome:(long long)arg1 ;
-(void)logSuggestionCounts:(id)arg1 ;
-(void)logNotificationInteraction:(long long)arg1 orbed:(BOOL)arg2 onscreen:(BOOL)arg3 ;
-(id)init;
@end

