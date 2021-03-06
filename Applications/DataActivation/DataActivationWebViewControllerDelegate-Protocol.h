//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DataActivationWebViewController, NSDictionary, NSError, NSString;

@protocol DataActivationWebViewControllerDelegate <NSObject>
- (void)dataActivationWebViewController:(DataActivationWebViewController *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)dataActivationWebViewControllerDidFinish:(DataActivationWebViewController *)arg1;
- (void)dataActivationWebViewControllerHandlePlanPendingRelease:(DataActivationWebViewController *)arg1;
- (void)dataActivationWebViewControllerHandlePlanCancelled:(DataActivationWebViewController *)arg1;
- (void)dataActivationWebViewController:(DataActivationWebViewController *)arg1 handleMultiSIMActivationResult:(_Bool)arg2 info:(NSDictionary *)arg3;
- (void)dataActivationWebViewController:(DataActivationWebViewController *)arg1 didPurchasePlanSuccessfullyWithIccid:(NSString *)arg2;
- (_Bool)dataActivationWebViewControllerShouldAllowPlanPurchaseWithIccid:(DataActivationWebViewController *)arg1;
- (void)dataActivationWebViewControllerAccoutDidUpdateSuccessfully:(DataActivationWebViewController *)arg1;
- (NSString *)overrideTitle;
- (_Bool)isRemotePlanFlow;
- (_Bool)isApplePayEnabled;
- (NSString *)URLSessionConnectionServiceType;
- (NSString *)sourceApplicationSecondaryIdentifier;
@end

