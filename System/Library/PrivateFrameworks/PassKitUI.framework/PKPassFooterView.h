/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKPassFooterContentViewDelegate.h>
#import <libobjc.A.dylib/PKForegroundActiveArbiterObserver.h>
#import <libobjc.A.dylib/PKUIForegroundActiveArbiterDeactivationObserver.h>

@protocol OS_dispatch_source, OS_dispatch_group, PKPassFooterViewDelegate;
@class PKPassView, PKPassFooterContentView, NSObject, PKPaymentSessionHandle, NSString;

@interface PKPassFooterView : UIView <PKPassFooterContentViewDelegate, PKForegroundActiveArbiterObserver, PKUIForegroundActiveArbiterDeactivationObserver> {

	PKPassView* _passView;
	PKPassFooterContentView* _contentView;
	NSObject*<OS_dispatch_source> _sessionStartTimer;
	long long _paymentApplicationState;
	BOOL _isBackgrounded;
	BOOL _isAssistantActive;
	BOOL _acquiringSession;
	unsigned long long _sessionToken;
	NSObject*<OS_dispatch_group> _sessionDelayGroup;
	PKPaymentSessionHandle* _sessionHandle;
	BOOL _invalidated;
	unsigned char _visibility;
	unsigned char _contentViewVisibility;
	BOOL _userIntentRequired;
	long long _state;
	long long _coachingState;
	id<PKPassFooterViewDelegate> _delegate;

}

@property (nonatomic,retain) PKPassView * passView;                                              //@synthesize passView=_passView - In the implementation block
@property (nonatomic,readonly) long long state;                                                  //@synthesize state=_state - In the implementation block
@property (getter=isPassAuthorized,nonatomic,readonly) BOOL passAuthorized; 
@property (getter=isUserIntentRequired,nonatomic,readonly) BOOL userIntentRequired;              //@synthesize userIntentRequired=_userIntentRequired - In the implementation block
@property (nonatomic,readonly) long long coachingState;                                          //@synthesize coachingState=_coachingState - In the implementation block
@property (assign,nonatomic,__weak) id<PKPassFooterViewDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PKPassView *)passView;
-(void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(SCD_Struct_PK19)arg2 ;
-(void)_setUserIntentRequired:(BOOL)arg1 ;
-(void)setPassView:(PKPassView *)arg1 ;
-(long long)coachingState;
-(BOOL)isPassAuthorized;
-(id)initWithPassView:(id)arg1 state:(long long)arg2 context:(id)arg3 ;
-(void)configureForState:(long long)arg1 context:(id)arg2 passView:(id)arg3 ;
-(void)willBecomeVisibleAnimated:(BOOL)arg1 ;
-(void)willBecomeHiddenAnimated:(BOOL)arg1 ;
-(void)didBecomeVisibleAnimated:(BOOL)arg1 ;
-(void)didBecomeHiddenAnimated:(BOOL)arg1 ;
-(BOOL)isUserIntentRequired;
-(void)foregroundActiveArbiter:(id)arg1 didUpdateDeactivationReasons:(unsigned)arg2 ;
-(void)_setCoachingState:(long long)arg1 ;
-(void)passFooterContentViewRequestsSessionSuppression:(id)arg1 ;
-(void)passFooterContentViewDidEndAuthenticating:(id)arg1 ;
-(void)passFooterContentViewDidBeginAuthenticating:(id)arg1 ;
-(BOOL)isPassFooterContentViewInGroup:(id)arg1 ;
-(void)passFooterContentViewDidChangeUserIntentRequirement:(id)arg1 ;
-(void)passFooterContentViewDidChangeCoachingState:(id)arg1 ;
-(unsigned long long)suppressedContentForContentView:(id)arg1 ;
-(void)_configureForState:(long long)arg1 context:(id)arg2 passView:(id)arg3 ;
-(void)_advanceContentViewVisibilityToState:(unsigned char)arg1 animated:(BOOL)arg2 ;
-(void)_endSessionStartTimer;
-(void)_advanceVisibilityToState:(unsigned char)arg1 animated:(BOOL)arg2 ;
-(void)_setContentView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateForNonForegroundActivePresentationAnimated:(BOOL)arg1 ;
-(void)_updateForForegroundActivePresentationIfNecessaryAnimated:(BOOL)arg1 ;
-(id)_contentViewForPaymentApplicationWithContext:(id)arg1 ;
-(void)_configureForValueAddedServiceWithContext:(id)arg1 ;
-(void)_configureForPersonalizedPaymentApplicationWithContext:(id)arg1 ;
-(void)_lostModeButtonTapped;
-(void)_deleteButtonTapped;
-(void)_acquireContactlessInterfaceSessionWithSessionToken:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)_canApplyContentViewForPersonalizedApplication;
-(void)_startContactlessInterfaceSessionWithContext:(id)arg1 sessionAvailable:(/*^block*/id)arg2 sessionUnavailable:(/*^block*/id)arg3 ;
-(BOOL)_canApplyContentViewForValueAddedService;
-(void)dealloc;
-(void)setDelegate:(id<PKPassFooterViewDelegate>)arg1 ;
-(long long)state;
-(void)layoutSubviews;
-(id<PKPassFooterViewDelegate>)delegate;
-(void)invalidate;
-(void)_endSession;
@end
