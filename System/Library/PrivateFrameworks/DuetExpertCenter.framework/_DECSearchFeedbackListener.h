/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFFeedbackListener.h>

@class NSArray, NSString, _DECConsumer, NSMutableArray, PETScalarEventTracker, PETGoalConversionEventTracker, PETDistributionEventTracker, NSSet;

@interface _DECSearchFeedbackListener : NSObject <SFFeedbackListener> {

	NSArray* _currentZKWItems;
	NSString* _query;
	unsigned char _decConsumerSubType;
	unsigned char _atxConsumerSubType;
	_DECConsumer* _decConsumer;
	BOOL _testingMode;
	NSMutableArray* _testingDecFeedback;
	NSMutableArray* _testingAtxFeedback;
	PETScalarEventTracker* _qpPredictionQueryDetailTracker;
	PETGoalConversionEventTracker* _qpEventQueriesShownTracker;
	PETDistributionEventTracker* _qpEventQueryShownCountTracker;
	PETScalarEventTracker* _qpEventQueryShownSourceTracker;
	PETGoalConversionEventTracker* _qpEventGoalConvTracker;
	PETDistributionEventTracker* _qpEventDelayTracker;
	PETDistributionEventTracker* _qpEventSpotlightResultsPerPredictedQueryTracker;
	PETScalarEventTracker* _qpSpotlightQuerySourceTracker;
	PETDistributionEventTracker* _qpEventEngagementByQueryCountTracker;
	PETGoalConversionEventTracker* _qpResultGoalConvTracker;
	PETScalarEventTracker* _qpResultDetailTracker;
	PETScalarEventTracker* _qpSpotlightEngagementTracker;
	PETDistributionEventTracker* _qpQueryLengthTracker;
	PETScalarEventTracker* _qpMMHeroAppTracker;
	PETGoalConversionEventTracker* _apAppPredicitonsShownTracker;
	BOOL _waitingForPredictedQueryFeedback;
	BOOL _waitingForPredictedAppFeedback;
	BOOL _predictedQuerySessionActive;
	BOOL _lastPredictedQuerySetWasEngagedOn;
	BOOL _predictedQuerySessionPredictedQueryWasEdited;
	NSSet* _lastEngagedQueryPredictionSourceCodes;
	int _lastEngagedQueryPredictionPosition;
	NSString* _qpAbGroupIdentifier;
	NSString* _previousQueryString;
	unsigned long long _lastResultsDidBecomeVisibleTimeStamp;
	unsigned long long _lastDidStartSearchTimeStamp;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)flatSourceList:(id)arg1 ;
-(void)_setQuery:(id)arg1 ;
-(void)searchViewDidAppear:(id)arg1 ;
-(void)searchViewDidDisappear:(id)arg1 ;
-(void)didStartSearch:(id)arg1 ;
-(void)didEngageResult:(id)arg1 ;
-(void)resultsDidBecomeVisible:(id)arg1 ;
-(void)_setDecConsumerSubType:(unsigned char)arg1 ;
-(void)_setAtxConsumerSubType:(unsigned char)arg1 ;
-(void)_setQpAbGroupIdentifier:(id)arg1 ;
-(id)initWithDecConsumer:(id)arg1 ;
-(void)_setPredictedQuerySessionActive:(BOOL)arg1 ;
-(void)_setLastPredictedQuerySetWasEngagedOn:(BOOL)arg1 ;
-(void)_setPredictedQueryWasEdited:(BOOL)arg1 ;
-(void)_sendAppFeedback:(id)arg1 searchResults:(id)arg2 ;
-(void)_logQueryPredictionEventStats:(id)arg1 searchResults:(id)arg2 ;
-(void)_endQueryPredictionSessionAndLogResults:(id)arg1 ;
-(void)_sendFeedbackAndDoLogging:(id)arg1 searchResults:(id)arg2 ;
-(void)_setCurrentZKWItems:(id)arg1 triggerEvent:(unsigned long long)arg2 ;
-(void)_logZkwDisplayTime:(unsigned long long)arg1 ;
-(void)_startQueryPredictionSession;
-(id)_allEventTrackers;
-(id)initForUnitTesting;
-(id)getTestingDecFeedback;
-(id)getTestingAtxFeedback;
-(void)enableTestingMode;
-(void)disableTestingMode;
-(id)getKeyValueDict;
-(id)init;
-(void)dealloc;
@end
