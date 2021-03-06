/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PETDistributionEventTracker, PETScalarEventTracker;

@interface ATXActionFeedback : NSObject {

	double _decayHalfLifeSeconds;
	PETDistributionEventTracker* _predictionsTracker;
	PETScalarEventTracker* _predictionItemsTracker;
	PETScalarEventTracker* _engagedInitTracker;
	PETScalarEventTracker* _engagementTracker;
	PETDistributionEventTracker* _predictedSlotTracker;
	PETDistributionEventTracker* _engagedSlotTracker;
	BOOL _spotlightEngagmentMatchedLockscreen;

}
+(id)sharedInstance;
-(void)decayCounts;
-(void)resetData;
-(void)applyFinalFeedbackForActionResponse:(id)arg1 engagementType:(unsigned long long)arg2 ;
-(void)processCachedATXActionResponseWithConsumerSubType:(unsigned char)arg1 ;
-(void)removeMatchingLockScreenPredictionForAction:(id)arg1 ;
-(void)receiveFeedbackWithActionResponse:(id)arg1 ;
-(void)registerPredictionNotificationChangeDetected:(long long)arg1 was3dTouched:(BOOL)arg2 ;
-(void)logHeuristicFeedback:(id)arg1 ;
-(void)logHeuristicFeedbackForAction:(id)arg1 actionType:(unsigned short)arg2 ;
-(id)_init;
@end

