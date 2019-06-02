//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SKProductPageViewControllerDelegatePrivate.h"
#import "SKUIApplicationDelegatePackage.h"
#import "ServiceAlertDelegate.h"
#import "ServiceProductPage.h"

@class NSString, SKProductPageViewController, SKUIApplicationController, ServiceAlertController, ServiceProductPageConfiguration, UINavigationController;

@interface ServiceProductPageLegacyViewController : UIViewController <ServiceAlertDelegate, SKProductPageViewControllerDelegatePrivate, SKUIApplicationDelegatePackage, ServiceProductPage>
{
    CDUnknownBlockType _starRatingCompletionBlock;	// 8 = 0x8
    ServiceAlertController *_alertController;	// 16 = 0x10
    SKUIApplicationController *_applicationController;	// 24 = 0x18
    _Bool _preview;	// 32 = 0x20
    _Bool _didPurchase;	// 33 = 0x21
    _Bool _didStart;	// 34 = 0x22
    SKProductPageViewController *_legacyProductViewController;	// 40 = 0x28
    UINavigationController *_loadingPlaceholderViewController;	// 48 = 0x30
    ServiceProductPageConfiguration *_pageConfiguration;	// 56 = 0x38
    _Bool _didLoad;	// 64 = 0x40
    _Bool _didShow;	// 65 = 0x41
    id <ServiceProductPageLegacyViewControllerDelegate> _delegate;	// 72 = 0x48
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;	// IMP=0x000000010000cb98
@property(nonatomic) __weak id <ServiceProductPageLegacyViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010000f29c
- (void)_startIfReady;	// IMP=0x000000010000f09c
- (_Bool)_shouldLayoutAsOverlayWithTraitCollection:(id)arg1;	// IMP=0x000000010000f008
- (void)_sendUnavailableErrorResponse;	// IMP=0x000000010000ef44
- (void)_sendInstallAttributionIfAllowed;	// IMP=0x000000010000eb8c
- (void)_sendDidFinishWithResult:(long long)arg1;	// IMP=0x000000010000ea54
- (void)_presentAlertViewForDialog:(id)arg1;	// IMP=0x000000010000e980
- (id)_newCancelButtonItemWithClientContext:(id)arg1;	// IMP=0x000000010000e858
- (void)_loadLegacyViewControllerIfApplicable;	// IMP=0x000000010000e514
- (id)_legacyProductViewController;	// IMP=0x000000010000e3dc
- (id)_clientViewControllerProxy;	// IMP=0x000000010000e388
- (void)_cancelButtonAction:(id)arg1;	// IMP=0x000000010000e378
- (void)_backgroundViewAction:(id)arg1;	// IMP=0x000000010000e368
- (id)legacyScriptInterfaceForApplication:(id)arg1;	// IMP=0x000000010000e338
- (void)applicationDidDisplayFirstPage:(id)arg1;	// IMP=0x000000010000e23c
- (void)application:(id)arg1 didStopWithOptions:(id)arg2;	// IMP=0x000000010000e0ec
- (void)application:(id)arg1 didFailToLoadWithError:(id)arg2;	// IMP=0x000000010000df5c
- (void)application:(id)arg1 didCompleteSoftwarePurchase:(id)arg2;	// IMP=0x000000010000df48
- (void)application:(id)arg1 didCompletePurchase:(id)arg2;	// IMP=0x000000010000df34
- (void)setVisibleInClientWindow:(id)arg1;	// IMP=0x000000010000df30
- (void)productPageDidFinishLoad:(id)arg1;	// IMP=0x000000010000deb8
- (void)productPage:(id)arg1 setStatusBarStyle:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x000000010000de08
- (void)productPage:(id)arg1 setStatusBarHidden:(_Bool)arg2 withAnimation:(long long)arg3;	// IMP=0x000000010000dd58
- (void)productPage:(id)arg1 presentProductPageWithRequest:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000010000dc5c
- (void)productPage:(id)arg1 presentAlertForDialog:(id)arg2;	// IMP=0x000000010000dc4c
- (void)productPage:(id)arg1 didReceiveTitle:(id)arg2;	// IMP=0x000000010000dbe0
- (void)productPage:(id)arg1 didFinishWithResult:(long long)arg2;	// IMP=0x000000010000dba4
- (void)productPage:(id)arg1 didFailLoadWithError:(id)arg2;	// IMP=0x000000010000db04
- (void)setShowsStoreButton:(_Bool)arg1;	// IMP=0x000000010000da94
- (void)setShowsRightBarButton:(_Bool)arg1;	// IMP=0x000000010000da2c
- (void)setPreview:(id)arg1;	// IMP=0x000000010000d960
- (void)setScriptContextDictionary:(id)arg1;	// IMP=0x000000010000d8d8
- (void)setRightBarButtonTitle:(id)arg1;	// IMP=0x000000010000d84c
- (void)setPromptString:(id)arg1;	// IMP=0x000000010000d834
- (void)setProductPageStyle:(id)arg1;	// IMP=0x000000010000d7f0
- (void)setClientIdentifier:(id)arg1;	// IMP=0x000000010000d758
- (void)setCancelButtonTitle:(id)arg1;	// IMP=0x000000010000d740
- (void)setAskToBuy:(_Bool)arg1;	// IMP=0x000000010000d728
- (void)setAffiliateIdentifier:(id)arg1;	// IMP=0x000000010000d6b4
- (void)setAdditionalBuyParameters:(id)arg1;	// IMP=0x000000010000d640
- (void)loadProductWithURL:(id)arg1;	// IMP=0x000000010000d600
- (void)loadProductWithRequest:(id)arg1;	// IMP=0x000000010000d4d0
- (void)loadProductWithParameters:(id)arg1;	// IMP=0x000000010000d490
- (void)loadProductWithPageDictionary:(id)arg1;	// IMP=0x000000010000d450
- (void)finishStarRatingPromptWithRating:(id)arg1;	// IMP=0x000000010000d3dc
- (void)finishImmediately;	// IMP=0x000000010000d3b8
- (void)applicationWillEnterForeground;	// IMP=0x000000010000d28c
- (void)applicationDidEnterBackground;	// IMP=0x000000010000d278
- (void)alertController:(id)arg1 alertDidFinishWithButton:(id)arg2;	// IMP=0x000000010000d228
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x000000010000d110
- (void)setupWithClientBundleID:(id)arg1 bagType:(long long)arg2;	// IMP=0x000000010000cf78
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010000ced8
- (void)viewDidLayoutSubviews;	// IMP=0x000000010000cd90
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000010000cd20
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010000cba0
- (void)promptForStarRatingWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010000cb28
- (void)dealloc;	// IMP=0x000000010000ca80
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010000c6ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
