/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFFeedbackListener.h>

@class NSArray, NSString, NSMutableArray, PETGoalConversionEventTracker, SFSearchResult;

@interface ATXSearchFeedbackListener : NSObject <SFFeedbackListener> {

	NSArray* _currentZKWItems;
	NSString* _query;
	unsigned char _appConsumerSubType;
	unsigned char _actionConsumerSubType;
	BOOL _testingMode;
	NSMutableArray* _testingAppFeedback;
	NSMutableArray* _testingActionFeedback;
	PETGoalConversionEventTracker* _apAppPredicitonsShownTracker;
	BOOL _waitingForPredictedAppFeedback;
	BOOL _waitingForPredictedActionFeedback;
	SFSearchResult* _engagedResult;
	NSMutableArray* _explicitlyDismissedActions;
	BOOL _backgroundActionExecuted;
	BOOL _cardWasEngaged;
	unsigned long long _lastResultsDidBecomeVisibleTimeStamp;
	unsigned long long _lastDidStartSearchTimeStamp;
	unsigned long long _lastSearchViewDidAppearTimeStamp;
	unsigned long long _lastSearchViewDidDisappearTimeStamp;
	unsigned long long _lastDidEngageResultTimeStamp;
	unsigned long long _lastDidEngageCardSectionTimeStamp;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setQuery:(id)arg1 ;
-(void)searchViewDidAppear:(id)arg1 ;
-(void)searchViewDidDisappear:(id)arg1 ;
-(void)cardViewDidDisappear:(id)arg1 ;
-(void)didStartSearch:(id)arg1 ;
-(void)didEngageResult:(id)arg1 ;
-(void)didEngageCardSection:(id)arg1 ;
-(void)resultsDidBecomeVisible:(id)arg1 ;
-(void)_setAppConsumerSubType:(unsigned char)arg1 ;
-(void)_setActionConsumerSubType:(unsigned char)arg1 ;
-(void)_setBackgroundActionExecuted:(BOOL)arg1 ;
-(void)_sendFeedbackAndDoLogging;
-(void)_sendActionFeedback:(id)arg1 searchResults:(id)arg2 ;
-(void)_sendAppFeedback:(id)arg1 searchResults:(id)arg2 ;
-(void)_setCurrentZKWItems:(id)arg1 triggerEvent:(unsigned long long)arg2 ;
-(void)_logZkwDisplayTime:(unsigned long long)arg1 ;
-(id)getTestingAtxFeedback;
-(void)enableTestingMode;
-(void)disableTestingMode;
-(void)_resetState;
-(id)init;
@end

