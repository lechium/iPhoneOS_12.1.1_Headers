/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IdleTimerServices.framework/IdleTimerServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, BSInvalidatable;
@class NSObject, NSHashTable;

@interface ITIdleTimerState : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSHashTable* _idleTimerDisableAssertions;
	id<BSInvalidatable> _stateCaptureAssertion;

}
+(BOOL)isIdleTimerServiceAvailable;
+(id)sharedInstance;
-(id)newAssertionToDisableIdleTimerForReason:(id)arg1 ;
-(void)_addStateCaptureHandler;
-(id)_queue_newAssertionToDisableIdleTimerForReason:(id)arg1 ;
-(void)dealloc;
-(id)_init;
@end

