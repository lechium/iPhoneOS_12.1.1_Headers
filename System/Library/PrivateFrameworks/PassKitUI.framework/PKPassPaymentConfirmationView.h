/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKPassFooterContentView.h>
#import <libobjc.A.dylib/PKPassPaymentPayStateViewDelegate.h>
#import <libobjc.A.dylib/PKPaymentServiceDelegate.h>

@protocol OS_dispatch_source;
@class PKFooterTransactionView, PKPassPaymentPayStateView, PKExpressTransactionState, NSObject, NSDate, NSMutableDictionary, PKPaymentService, NSString;

@interface PKPassPaymentConfirmationView : PKPassFooterContentView <PKPassPaymentPayStateViewDelegate, PKPaymentServiceDelegate> {

	PKFooterTransactionView* _transactionView;
	PKPassPaymentPayStateView* _payStateView;
	BOOL _animated;
	PKExpressTransactionState* _expressState;
	BOOL _receivedTransaction;
	BOOL _receivedExit;
	BOOL _needsResolution;
	BOOL _showingResolution;
	BOOL _showingSuccessResolution;
	BOOL _animatingResolution;
	BOOL _showingAlert;
	NSObject*<OS_dispatch_source> _activityResolutionTimer;
	unsigned long long _resolutionCounter;
	NSDate* _visibleDate;
	NSMutableDictionary* _registeredExpressObservers;
	PKPaymentService* _paymentService;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2 ;
-(void)layoutIfNeededAnimated:(BOOL)arg1 ;
-(void)_registerForExpressTransactionNotifications:(BOOL)arg1 ;
-(void)willBecomeVisibleAnimated:(BOOL)arg1 ;
-(void)willBecomeHiddenAnimated:(BOOL)arg1 ;
-(void)didBecomeVisibleAnimated:(BOOL)arg1 ;
-(void)didBecomeHiddenAnimated:(BOOL)arg1 ;
-(void)payStateView:(id)arg1 revealingCheckmark:(BOOL)arg2 ;
-(BOOL)_isRegisteredForAllExpressTransactionNotifications;
-(void)_updateContentViewsWithTransitProperties:(id)arg1 ;
-(void)_disableActivityTimer;
-(void)_presentCheckmarkIfNecessary;
-(BOOL)_isExpressOutstanding;
-(void)_beginResolution;
-(void)_resolveActivityIfNecessary;
-(void)_resolveActivityIfNecessaryWithDelay;
-(void)_updateContentViewsWithTransaction:(id)arg1 transitProperties:(id)arg2 ;
-(void)_updateContentViewsWithTransaction:(id)arg1 ;
-(id)_expressNotificationNames;
-(void)_handleExpressNotification:(id)arg1 ;
-(void)_registerObserverForNotificationName:(id)arg1 center:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)_isRegisteredForAnyExpressTransactionNotifications;
-(id)initWithPass:(id)arg1 context:(id)arg2 ;
-(void)dealloc;
-(void)layoutSubviews;
@end
