//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "BSUIScrollViewDelegate.h"

@class NSString, SBPagedScrollView, SBSearchEtceteraLayoutContentView, SBSearchEtceteraNotificationsLayoutContentView, SBSearchEtceteraSearchLayoutContentView, SBSearchEtceteraTodayLayoutContentView, UIPageControl;

@interface SBSearchEtceteraLayoutView : UIView <BSUIScrollViewDelegate>
{
    SBSearchEtceteraTodayLayoutContentView *_todayContentView;	// 8 = 0x8
    SBSearchEtceteraSearchLayoutContentView *_searchContentView;	// 16 = 0x10
    SBSearchEtceteraNotificationsLayoutContentView *_notificationsContentView;	// 24 = 0x18
    SBSearchEtceteraLayoutContentView *_visibleView;	// 32 = 0x20
    unsigned long long _currentMode;	// 40 = 0x28
    SBPagedScrollView *_scrollView;	// 48 = 0x30
    UIView *_notificationsPageView;	// 56 = 0x38
    UIView *_todayPageView;	// 64 = 0x40
    UIPageControl *_pageControl;	// 72 = 0x48
    _Bool _todayContentUnderlapsNavBar;	// 80 = 0x50
    unsigned long long _currentStyle;	// 88 = 0x58
    double _navigationBarTopInset;	// 96 = 0x60
    double _contentBottomInset;	// 104 = 0x68
    id <SBSearchEtceteraLayoutViewDelegate> _delegate;	// 112 = 0x70
}

@property(nonatomic) __weak id <SBSearchEtceteraLayoutViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double contentBottomInset; // @synthesize contentBottomInset=_contentBottomInset;
@property(nonatomic) double navigationBarTopInset; // @synthesize navigationBarTopInset=_navigationBarTopInset;
@property(nonatomic) _Bool todayContentUnderlapsNavBar; // @synthesize todayContentUnderlapsNavBar=_todayContentUnderlapsNavBar;
@property(nonatomic) unsigned long long currentStyle; // @synthesize currentStyle=_currentStyle;
@property(nonatomic) unsigned long long currentMode; // @synthesize currentMode=_currentMode;
@property(retain, nonatomic) SBSearchEtceteraNotificationsLayoutContentView *notificationsContentView; // @synthesize notificationsContentView=_notificationsContentView;
@property(retain, nonatomic) SBSearchEtceteraSearchLayoutContentView *searchContentView; // @synthesize searchContentView=_searchContentView;
@property(retain, nonatomic) SBSearchEtceteraTodayLayoutContentView *todayContentView; // @synthesize todayContentView=_todayContentView;
@property(readonly, retain, nonatomic, getter=_pageControl) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(readonly, retain, nonatomic, getter=_visibleView) SBSearchEtceteraLayoutContentView *visibleView; // @synthesize visibleView=_visibleView;
- (void).cxx_destruct;	// IMP=0x0000000100359454
- (void)_delegateCurrentModeDidChange:(unsigned long long)arg1;	// IMP=0x0000000100359264
- (void)_delegateCurrentModeWillChange:(unsigned long long)arg1;	// IMP=0x00000001003591f0
- (void)scrollViewDidEndScrolling:(id)arg1;	// IMP=0x0000000100359160
- (void)scrollViewDidScroll:(id)arg1 withContext:(CDStruct_3b09cf25)arg2;	// IMP=0x00000001003590c4
- (void)scrollViewWillBeginScrolling:(id)arg1;	// IMP=0x0000000100359004
- (unsigned long long)_indexOfTodayPageView;	// IMP=0x0000000100358f9c
- (unsigned long long)_indexOfNotificationsPageView;	// IMP=0x0000000100358f34
- (void)updateVisiblePages;	// IMP=0x0000000100358e64
- (void)_updateScrollingEnabledForSupportedModes;	// IMP=0x0000000100358e18
- (void)_updateScrollViewVisibilityForSupportedModes;	// IMP=0x0000000100358dc4
- (void)_resetContentOffsetForSupportedModes;	// IMP=0x0000000100358d3c
- (_Bool)_shouldAllowScrollingForStyle:(unsigned long long)arg1;	// IMP=0x0000000100358d10
- (unsigned long long)_currentScrollViewMode;	// IMP=0x0000000100358ccc
- (unsigned long long)_scrollViewModeForIndex:(unsigned long long)arg1;	// IMP=0x0000000100358c74
- (unsigned long long)_nextLogicalModeIfResigningSearch;	// IMP=0x0000000100358c68
- (id)_contentViewForControllerMode:(unsigned long long)arg1;	// IMP=0x0000000100358c0c
- (void)_setCurrentMode:(unsigned long long)arg1 force:(_Bool)arg2;	// IMP=0x0000000100358ac4
- (void)updateViewForInitialPresentation;	// IMP=0x0000000100358a60
- (void)_layoutPageControl;	// IMP=0x0000000100358820
- (void)layoutSubviews;	// IMP=0x0000000100358688
- (void)_addPageControl;	// IMP=0x00000001003585d0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100358274

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
