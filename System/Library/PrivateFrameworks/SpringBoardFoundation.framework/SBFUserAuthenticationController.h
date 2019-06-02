/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <libobjc.A.dylib/SBFMobileKeyBagObserver.h>
#import <libobjc.A.dylib/SBFUserAuthenticationModelDelegate.h>
#import <libobjc.A.dylib/SBFAuthenticationStatusProvider.h>
#import <libobjc.A.dylib/SBFPasscodeFieldChangeObserver.h>

@protocol SBFUserAuthenticationModel, SBFAuthenticationPolicy;
@class SBFMobileKeyBag, NSMutableArray, NSHashTable, NSDate, SBFAuthenticationAssertionManager, NSString, SBFAuthenticationAssertion, PCPersistentTimer, SBFMobileKeyBagState;

@interface SBFUserAuthenticationController : NSObject <SBFMobileKeyBagObserver, SBFUserAuthenticationModelDelegate, SBFAuthenticationStatusProvider, SBFPasscodeFieldChangeObserver> {

	SBFMobileKeyBag* _keybag;
	NSMutableArray* _responders;
	NSHashTable* _observers;
	id<SBFUserAuthenticationModel> _model;
	long long _authenticationState;
	NSDate* _lastRevokedAuthenticationDate;
	SBFAuthenticationAssertionManager* _assertionManager;
	id<SBFAuthenticationPolicy> _policy;
	NSString* _lastIncorrectPasscodeAttempt;
	SBFAuthenticationAssertion* _transientAuthCheckingAssertion;
	CFRunLoopObserverRef _runLoopObserver;
	PCPersistentTimer* _unblockTimer;
	long long _cachedAuthFlag;
	BOOL _inSecureMode;
	SBFMobileKeyBagState* _cachedExtendedState;

}

@property (setter=_setPolicy:,getter=_policy,nonatomic,retain) id<SBFAuthenticationPolicy> policy;              //@synthesize policy=_policy - In the implementation block
@property (nonatomic,readonly) NSDate * lastRevokedAuthenticationDate;                                          //@synthesize lastRevokedAuthenticationDate=_lastRevokedAuthenticationDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_clearBlockedState;
-(void)_setModel:(id)arg1 ;
-(void)keybagDidUnlockForTheFirstTime:(id)arg1 ;
-(id)publicDescription;
-(void)keybag:(id)arg1 extendedStateDidChange:(id)arg2 ;
-(BOOL)hasPasscodeSet;
-(id)initWithAssertionManager:(id)arg1 policy:(id)arg2 keybag:(id)arg3 model:(id)arg4 ;
-(void)_setupPolicy:(id)arg1 ;
-(void)_scheduleUnblockTimer;
-(void)_clearUnblockTimer;
-(void)_addAsFirstResponder:(id)arg1 ;
-(void)_removeAuthResponder:(id)arg1 ;
-(BOOL)_processAuthenticationRequest:(id)arg1 responder:(id)arg2 ;
-(BOOL)_isUserAuthenticated;
-(void)_revokeAuthenticationImmediately:(BOOL)arg1 forPublicReason:(id)arg2 ;
-(void)_updateAuthenticationStateImmediately:(BOOL)arg1 forPublicReason:(id)arg2 ;
-(void)notePasscodeEntryBegan;
-(void)notePasscodeEntryCancelled;
-(void)_notifyAboutTemporaryBlockStatusChanged;
-(BOOL)_isTemporarilyBlocked;
-(BOOL)_isPermanentlyBlocked;
-(void)_updateAuthenticationStateAndDateForLockState:(id)arg1 ;
-(void)_uncachePasscodeIfNecessary;
-(BOOL)isAuthenticatedCached;
-(void)_setSecureMode:(BOOL)arg1 postNotification:(BOOL)arg2 ;
-(BOOL)_authenticateIfInGracePeriod;
-(void)_updateAuthenticationStateForPublicReason:(id)arg1 ;
-(id)_cachedLockStateExtended;
-(id)createGracePeriodAssertionWithReason:(id)arg1 ;
-(void)_setup_runLoopObserverIfNecessary;
-(void)_invalidateCachedPasscodeLockState;
-(void)_updateSecureModeIfNecessaryForNewAuthState;
-(void)_setAuthState:(long long)arg1 ;
-(BOOL)_shouldRevokeAuthenticationNow;
-(long long)_evaluateAuthenticationAttempt:(id)arg1 outError:(id*)arg2 ;
-(void)_notifyClientsOfAuthenticationResult:(long long)arg1 forRequest:(id)arg2 error:(id)arg3 withResponder:(id)arg4 ;
-(BOOL)_boolForAuthenticationResult:(long long)arg1 ;
-(void)_handleSuccessfulAuthentication:(id)arg1 responder:(id)arg2 ;
-(void)_handleFailedAuthentication:(id)arg1 error:(id)arg2 responder:(id)arg3 ;
-(void)_handleInvalidAuthentication:(id)arg1 responder:(id)arg2 ;
-(BOOL)_isInGracePeriodState;
-(BOOL)_performNilPasscodeCheck;
-(long long)_evaluatePasscodeAttempt:(id)arg1 outError:(id*)arg2 ;
-(long long)_evaluateBiometricAttempt:(id)arg1 ;
-(BOOL)_isInBioUnlockState;
-(void)_refreshModelCacheIfNeeded;
-(void)_unblockTimerFired;
-(void)deviceLockModelRequestsDeviceWipe:(id)arg1 ;
-(void)deviceLockStateMayHaveChangedForModel:(id)arg1 ;
-(void)revokeAuthenticationImmediatelyForPublicReason:(id)arg1 ;
-(void)revokeAuthenticationImmediatelyIfNecessaryForPublicReason:(id)arg1 ;
-(void)revokeAuthenticationIfNecessaryForPublicReason:(id)arg1 ;
-(BOOL)hasAuthenticatedAtLeastOnceSinceBoot;
-(id)initWithAssertionManager:(id)arg1 policy:(id)arg2 ;
-(void)addAsFirstResponder:(id)arg1 ;
-(void)removeResponder:(id)arg1 ;
-(void)processAuthenticationRequest:(id)arg1 responder:(id)arg2 ;
-(void)processAuthenticationRequest:(id)arg1 ;
-(id)createKeybagUnlockAssertionWithReason:(id)arg1 ;
-(void)_addAuthenticationAssertion:(id)arg1 ;
-(void)_removeAuthenticationAssertion:(id)arg1 ;
-(BOOL)_isAssertionValid:(id)arg1 ;
-(void)_addPrivateAuthenticationObserver:(id)arg1 ;
-(void)_removePrivateAuthenticationObserver:(id)arg1 ;
-(double)_timeUntilUnblockedSinceReferenceDate;
-(void)_noteDeviceLockStateMayHaveChangedForExternalReasons;
-(NSDate *)lastRevokedAuthenticationDate;
-(id)_policy;
-(void)_setPolicy:(id)arg1 ;
-(BOOL)isAuthenticated;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
-(NSString *)description;
@end

