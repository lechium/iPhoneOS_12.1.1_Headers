//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SBUISizeObservingViewDelegate.h"
#import "_UISettingsKeyPathObserver.h"

@class NSArray, NSString, SBModeControlManager, SBNCColumnViewController, SBNotificationSeparatorView, UIScrollView, UISwipeGestureRecognizer, UIView, UIViewController<SBModeViewControllerContentProviding>;

@interface SBModeViewController : UIViewController <SBUISizeObservingViewDelegate, _UISettingsKeyPathObserver>
{
    id <SBBulletinActionHandler> _bulletinActionHandler;	// 8 = 0x8
    SBNCColumnViewController *_selectedViewController;	// 16 = 0x10
    SBNCColumnViewController *_deselectedViewController;	// 24 = 0x18
    UIScrollView *_contentView;	// 32 = 0x20
    UIView *_headerView;	// 40 = 0x28
    SBModeControlManager *_modeControl;	// 48 = 0x30
    UISwipeGestureRecognizer *_leftSwipeGestureRecognizer;	// 56 = 0x38
    UISwipeGestureRecognizer *_rightSwipeGestureRecognizer;	// 64 = 0x40
    SBNotificationSeparatorView *_separator;	// 72 = 0x48
    struct {
        unsigned int isHeaderLayoutValid:1;
        unsigned int isContentLayoutValid:1;
        unsigned int isSegmentLayoutValid:1;
        unsigned int isRequestHandlingEnabled:1;
        unsigned int shouldLoadAllChildViews:1;
        unsigned int delegateProvidesContentInsets:1;
    } _modeViewControllerFlags;	// 80 = 0x50
    id <SBModeViewControllerDelegate> _modeViewControllerDelegate;	// 88 = 0x58
}

+ (id)_buttonTitleFont;	// IMP=0x00000001004f8510
@property(retain, nonatomic) SBNCColumnViewController *deselectedViewController; // @synthesize deselectedViewController=_deselectedViewController;
@property(nonatomic) __weak id <SBBulletinActionHandler> bulletinActionHandler; // @synthesize bulletinActionHandler=_bulletinActionHandler;
@property(nonatomic) __weak id <SBModeViewControllerDelegate> modeViewControllerDelegate; // @synthesize modeViewControllerDelegate=_modeViewControllerDelegate;
- (void).cxx_destruct;	// IMP=0x00000001004fca8c
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;	// IMP=0x00000001004fc7f8
- (_Bool)handleAction:(id)arg1 forBulletin:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000001004fc714
- (struct CGRect)rectForBulletin:(id)arg1;	// IMP=0x00000001004fc0f8
@property(nonatomic, getter=isRequestHandlingEnabled) _Bool requestHandlingEnabled;
- (_Bool)_isRequestHandlingEnabled;	// IMP=0x00000001004fbf38
- (void)handleModeChange:(id)arg1;	// IMP=0x00000001004fbcd0
@property(retain, nonatomic) NSArray *viewControllers;
@property(nonatomic) __weak UIViewController<SBModeViewControllerContentProviding> *selectedViewController;
- (void)setSelectedViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001004fb6c0
- (void)_setSelectedBulletinObserverViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001004fb334
- (_Bool)_contentOffset:(struct CGPoint *)arg1 forChildViewController:(id)arg2;	// IMP=0x00000001004fb26c
- (void)removeViewController:(id)arg1;	// IMP=0x00000001004fb020
- (void)addViewController:(id)arg1;	// IMP=0x00000001004faf04
- (_Bool)_addBulletinObserverViewController:(id)arg1;	// IMP=0x00000001004fadf0
- (void)_setSelectedSegmentIndex:(long long)arg1;	// IMP=0x00000001004fad68
- (void)sizeObservingView:(id)arg1 didChangeSize:(struct CGSize)arg2;	// IMP=0x00000001004fad08
- (void)_invalidateSegmentLayout;	// IMP=0x00000001004facb0
- (void)_invalidateContentLayout;	// IMP=0x00000001004fac58
- (void)_invalidateHeaderLayout;	// IMP=0x00000001004fac04
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000001004fa9d8
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001004fa928
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001004fa748
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001004fa580
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;	// IMP=0x00000001004fa578
- (id)_viewIfLoaded;	// IMP=0x00000001004fa528
- (void)viewWillLayoutSubviews;	// IMP=0x00000001004fa4b8
- (void)_layoutContentIfNecessary;	// IMP=0x00000001004f9c78
- (void)_setContentViewContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x00000001004f9928
- (_Bool)_isChildViewControllerViewLoadedInContentView:(id)arg1;	// IMP=0x00000001004f982c
- (void)_layoutSegmentsIfNecessary;	// IMP=0x00000001004f95d0
- (void)_layoutHeaderViewIfNecessary;	// IMP=0x00000001004f9418
- (void)_backgroundContrastDidChange:(id)arg1;	// IMP=0x00000001004f93cc
- (void)viewDidLoad;	// IMP=0x00000001004f92fc
- (void)loadView;	// IMP=0x00000001004f924c
- (void)_loadContentView;	// IMP=0x00000001004f90dc
- (id)_newSwipeGestureRecognizerWithDirection:(unsigned long long)arg1;	// IMP=0x00000001004f9054
- (void)_updateEnabledStateOfSwipeGestures;	// IMP=0x00000001004f8fc8
- (void)_loadHeaderView;	// IMP=0x00000001004f8b9c
- (long long)layoutMode;	// IMP=0x00000001004f8adc
- (double)_headerViewHeightForMode:(long long)arg1;	// IMP=0x00000001004f8a88
- (struct CGRect)_modeControlFrameWithHeaderBounds:(struct CGRect)arg1 forMode:(long long)arg2;	// IMP=0x00000001004f8830
- (struct UIEdgeInsets)_contentInsets;	// IMP=0x00000001004f8794
- (void)dealloc;	// IMP=0x00000001004f860c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

