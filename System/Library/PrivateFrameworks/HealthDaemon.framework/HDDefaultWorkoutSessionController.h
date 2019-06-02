/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDWorkoutEventCollectorDelegate.h>
#import <libobjc.A.dylib/HDWorkoutSessionController.h>

@protocol HDWorkoutSessionStateController, OS_dispatch_queue;
@class HDProfile, NSObject, HDWorkoutSessionConfiguration, HDSessionAssertionGroup, HDWorkoutEventsManager;

@interface HDDefaultWorkoutSessionController : NSObject <HDWorkoutEventCollectorDelegate, HDWorkoutSessionController> {

	HDProfile* _profile;
	id<HDWorkoutSessionStateController> _sessionStateController;
	NSObject*<OS_dispatch_queue> _queue;
	HDWorkoutSessionConfiguration* _sessionConfiguration;
	HDSessionAssertionGroup* _assertionGroup;
	HDWorkoutEventsManager* _eventsManager;
	long long _sessionServerState;
	/*^block*/id _hkTestTransitionCompletionHandler;

}
+(id)recoveryIdentifier;
+(void)willFinishSessionWithRecoveryData:(id)arg1 profile:(id)arg2 ;
-(id)_ownerIdentifier;
-(void)receivedWorkoutEvent:(id)arg1 ;
-(void)_queue_setupAssertionGroup;
-(id)_queue_assertionsPerStateForActivityType:(unsigned long long)arg1 ;
-(id)_relaunchPayloadOptions;
-(id)_takeAlertSuppressionAssertion;
-(id)_takeBackgroundRunningAssertion;
-(id)_takeCarouselAssertion;
-(id)_takeClientKeepAliveAssertion;
-(id)_takeCoreMotionAssertion;
-(id)_takeDataCollectionAssertion;
-(id)_takeEventsCollectionAssertion;
-(id)_takeHeartRateRecoveryAssertion;
-(id)_takePlatinumAssertion;
-(id)_takePowerSavingAssertion;
-(id)_takeQuietModeAssertion;
-(id)initWithProfile:(id)arg1 sessionConfiguration:(id)arg2 sessionStateController:(id)arg3 recoveryState:(id)arg4 ;
-(void)workoutSessionServer:(id)arg1 didChangeConfiguration:(id)arg2 ;
-(void)workoutSessionServer:(id)arg1 didTransitionFromState:(long long)arg2 toState:(long long)arg3 date:(id)arg4 ;
-(void)workoutSessionServer:(id)arg1 accumulatorDidChange:(id)arg2 ;
-(void)hktest_setStateTransitionCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

