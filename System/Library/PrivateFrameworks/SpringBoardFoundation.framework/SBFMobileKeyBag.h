/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSHashTable, SBFMobileKeyBagState;

@interface SBFMobileKeyBag : NSObject {

	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _queue_observerStateChangedCallbackBlocks;
	NSHashTable* _queue_observers;
	BOOL _queue_hasPasscodeSet;
	BOOL _queue_hasUnlockedSinceBoot;
	int _stateChangedNotifyToken;
	int _firstUnlockNotification;

}

@property (nonatomic,copy,readonly) SBFMobileKeyBagState * state; 
@property (nonatomic,copy,readonly) SBFMobileKeyBagState * extendedState; 
@property (nonatomic,readonly) BOOL hasBeenUnlockedSinceBoot; 
@property (nonatomic,readonly) BOOL hasPasscodeSet; 
@property (nonatomic,readonly) long long maxUnlockAttempts; 
+(id)sharedInstance;
-(void)_queue_handleKeybagStatusChanged;
-(void)_queue_firstUnlockOccurred;
-(id)_queue_lockStateExtended:(BOOL)arg1 ;
-(void)_queue_setHasPasscodeIfNecessary:(id)arg1 ;
-(void)_queue_createStashBag:(id)arg1 ;
-(void)createStashBag:(id)arg1 completion:(/*^block*/id)arg2 completionQueue:(id)arg3 ;
-(BOOL)_queue_verifyExpectedStashState:(long long)arg1 ;
-(void)lockSkippingGracePeriod:(BOOL)arg1 ;
-(BOOL)unlockWithPasscode:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasPasscodeSet;
-(long long)maxUnlockAttempts;
-(void)createStashBag:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)hasBeenUnlockedSinceBoot;
-(SBFMobileKeyBagState *)extendedState;
-(BOOL)beginRecovery:(id)arg1 error:(id*)arg2 ;
-(void)waitForUnlockWithTimeout:(float)arg1 ;
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(SBFMobileKeyBagState *)state;
-(void)addObserver:(id)arg1 ;
@end
