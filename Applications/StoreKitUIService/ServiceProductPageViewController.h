//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SKProductPageRemoteViewControllerDelegate.h"
#import "ServiceProductPageLegacyViewControllerDelegate.h"

@class NSDictionary, NSExtension, NSMutableArray, NSString, SSLookupItem, SSLookupRequest, ServiceProductPageLegacyViewController, ServiceResilientRemoteViewContainerViewController, UINavigationController, UIView;

@interface ServiceProductPageViewController : UIViewController <ServiceProductPageLegacyViewControllerDelegate, SKProductPageRemoteViewControllerDelegate>
{
    ServiceProductPageLegacyViewController *_legacyProductPageViewController;	// 8 = 0x8
    _Bool _preview;	// 16 = 0x10
    SSLookupRequest *_lookupRequest;	// 24 = 0x18
    _Bool _isRemoteViewControllerReady;	// 32 = 0x20
    UIView *_containerView;	// 40 = 0x28
    UINavigationController *_placeholderViewController;	// 48 = 0x30
    SSLookupItem *_item;	// 56 = 0x38
    NSDictionary *_parameters;	// 64 = 0x40
    NSMutableArray *_configurationActions;	// 72 = 0x48
    ServiceResilientRemoteViewContainerViewController *_remoteContainerViewController;	// 80 = 0x50
    CDUnknownBlockType _remoteLoadDidFinishCompletion;	// 88 = 0x58
    NSExtension *_extension;	// 96 = 0x60
    id <NSCopying> _extensionRequest;	// 104 = 0x68
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;	// IMP=0x0000000100012fe4
+ (id)_remoteViewControllerInterface;	// IMP=0x0000000100012fc8
+ (id)_exportedInterface;	// IMP=0x0000000100012fac
@property(retain, nonatomic) id <NSCopying> extensionRequest; // @synthesize extensionRequest=_extensionRequest;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(copy, nonatomic) CDUnknownBlockType remoteLoadDidFinishCompletion; // @synthesize remoteLoadDidFinishCompletion=_remoteLoadDidFinishCompletion;
@property(retain, nonatomic) ServiceResilientRemoteViewContainerViewController *remoteContainerViewController; // @synthesize remoteContainerViewController=_remoteContainerViewController;
@property(copy, nonatomic) NSMutableArray *configurationActions; // @synthesize configurationActions=_configurationActions;
@property(copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) SSLookupItem *item; // @synthesize item=_item;
@property(nonatomic) _Bool isRemoteViewControllerReady; // @synthesize isRemoteViewControllerReady=_isRemoteViewControllerReady;
@property(retain, nonatomic) UINavigationController *placeholderViewController; // @synthesize placeholderViewController=_placeholderViewController;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;	// IMP=0x0000000100018b38
- (_Bool)_shouldLayoutAsOverlayWithTraitCollection:(id)arg1;	// IMP=0x0000000100018958
- (void)_sendUnentitledErrorResponse;	// IMP=0x00000001000186c0
- (void)_sendUnavailableErrorResponse;	// IMP=0x00000001000185fc
- (void)_sendDidFinishWithResult:(long long)arg1;	// IMP=0x0000000100018518
- (void)_layoutContainerViewWithTraitCollection:(id)arg1;	// IMP=0x0000000100018318
- (_Bool)_isClientEntitled;	// IMP=0x00000001000182dc
- (id)_clientViewControllerProxy;	// IMP=0x00000001000182d0
- (void)_executeConfigurationActionsWithServiceProductPage:(id)arg1;	// IMP=0x000000010001816c
- (void)_addConfigurationAction:(CDUnknownBlockType)arg1;	// IMP=0x0000000100018060
- (void)_setupChildViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100017ea0
- (id)_setupLegacyProductPageViewController;	// IMP=0x0000000100017de4
- (void)_didReceiveRemoteViewController:(id)arg1;	// IMP=0x0000000100017ce4
- (void)_requestRemoteViewControllerForItemKind:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100017324
- (void)_loadProductWithIdentifier:(id)arg1 parameters:(id)arg2 fallback:(CDUnknownBlockType)arg3;	// IMP=0x0000000100016b64
- (void)_cancelButtonAction:(id)arg1;	// IMP=0x0000000100016b54
- (void)_backgroundViewAction:(id)arg1;	// IMP=0x0000000100016b44
- (void)setVisibleInClientWindow:(id)arg1;	// IMP=0x0000000100016a88
- (void)setShowsStoreButton:(id)arg1;	// IMP=0x00000001000167f4
- (void)setShowsRightBarButton:(id)arg1;	// IMP=0x0000000100016560
- (void)setPreview:(id)arg1;	// IMP=0x0000000100016308
- (void)setScriptContextDictionary:(id)arg1;	// IMP=0x00000001000160bc
- (void)setRightBarButtonTitle:(id)arg1;	// IMP=0x0000000100015e70
- (void)setPromptString:(id)arg1;	// IMP=0x0000000100015c24
- (void)setProductPageStyle:(id)arg1;	// IMP=0x00000001000159d8
- (void)setClientIdentifier:(id)arg1;	// IMP=0x000000010001578c
- (void)setCancelButtonTitle:(id)arg1;	// IMP=0x0000000100015540
- (void)setAskToBuy:(id)arg1;	// IMP=0x00000001000152ac
- (void)setAffiliateIdentifier:(id)arg1;	// IMP=0x0000000100015060
- (void)setAdditionalBuyParameters:(id)arg1;	// IMP=0x0000000100014e14
- (void)loadProductWithURL:(id)arg1;	// IMP=0x0000000100014980
- (void)loadProductWithRequest:(id)arg1;	// IMP=0x00000001000145b4
- (void)loadProductWithParameters:(id)arg1;	// IMP=0x000000010001419c
- (void)loadProductWithPageDictionary:(id)arg1;	// IMP=0x00000001000140bc
- (void)finishStarRatingPromptWithRating:(id)arg1;	// IMP=0x0000000100014000
- (void)finishImmediately;	// IMP=0x0000000100013f94
- (void)applicationWillEnterForeground;	// IMP=0x0000000100013f7c
- (void)applicationDidEnterBackground;	// IMP=0x0000000100013f64
- (_Bool)serviceProductPageLegacyViewControllerIsEntitled;	// IMP=0x0000000100013f58
- (void)serviceProductPageLegacyViewControllerFinishWithResult:(long long)arg1;	// IMP=0x0000000100013f4c
- (id)serviceProductPageLegacyViewControllerClientProxy;	// IMP=0x0000000100013f40
- (void)productPageRemoteViewControllerLoadDidFinish:(id)arg1;	// IMP=0x0000000100013e94
- (void)productPageRemoteViewController:(id)arg1 finishWithResult:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100013e6c
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000100013d28
- (void)_willAppearInRemoteViewController;	// IMP=0x0000000100013a44
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100013960
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000001000138cc
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100013364
- (void)loadView;	// IMP=0x0000000100013178
- (void)dealloc;	// IMP=0x000000010001306c
- (id)init;	// IMP=0x0000000100012fec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

