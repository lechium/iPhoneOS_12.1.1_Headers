//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SSSInkPickerToolbarViewDelegate.h"
#import "SSSScreenshotViewDelegate.h"
#import "UINavigationBarDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UIToolbarDelegate.h"

@class AKToolbarView, NSArray, NSMutableArray, NSString, PKInk, SSSDittoBackgroundView, SSSInkPickerToolbarView, SSSScreenshot, SSSScreenshotCountIndicator, SSSScreenshotView, SSSScrollView, SSSShadowView, UIImage, UINavigationBar;

@interface SSSScreenshotsView : UIView <UIScrollViewDelegate, UINavigationBarDelegate, UIToolbarDelegate, SSSScreenshotViewDelegate, SSSInkPickerToolbarViewDelegate>
{
    UINavigationBar *_topBar;	// 8 = 0x8
    UIImage *_topBarEmptyBackgroundImage;	// 16 = 0x10
    AKToolbarView *_annotationBottomBar;	// 24 = 0x18
    SSSInkPickerToolbarView *_canvasBottomBar;	// 32 = 0x20
    PKInk *_ink;	// 40 = 0x28
    SSSScrollView *_scrollView;	// 48 = 0x30
    SSSScreenshotCountIndicator *_countIndicator;	// 56 = 0x38
    SSSShadowView *_shadowView;	// 64 = 0x40
    SSSDittoBackgroundView *_backgroundView;	// 72 = 0x48
    long long _borderViewStyleOverride;	// 80 = 0x50
    UIView *_layoutPositioningView;	// 88 = 0x58
    _Bool _hasPerformedFullscreenSetup;	// 96 = 0x60
    _Bool _isInStateTransition;	// 97 = 0x61
    NSMutableArray *_screenshotViews;	// 104 = 0x68
    long long _lastPageForSignificantChange;	// 112 = 0x70
    struct CGRect _keyboardFrame;	// 120 = 0x78
    _Bool _inMultipleSelection;	// 152 = 0x98
    _Bool _snapshotScreenshotEdits;	// 153 = 0x99
    _Bool _inPixelationBrush;	// 154 = 0x9a
    _Bool _showsShareItemInBottomBar;	// 155 = 0x9b
    _Bool _showsUndoRedoItemsInBottomBar;	// 156 = 0x9c
    _Bool _bottomBarUndoItemEnabled;	// 157 = 0x9d
    _Bool _bottomBarRedoItemEnabled;	// 158 = 0x9e
    _Bool _showsBackgroundView;	// 159 = 0x9f
    _Bool _showsShadow;	// 160 = 0xa0
    _Bool _screenshotViewsUseTrilinearMinificationFilter;	// 161 = 0xa1
    _Bool _currentScreenshotCropHandlesFadedOut;	// 162 = 0xa2
    unsigned long long _state;	// 168 = 0xa8
    UIView *_sharingView;	// 176 = 0xb0
    double _sharingViewHeight;	// 184 = 0xb8
    id _shareItemTarget;	// 192 = 0xc0
    SEL _shareItemAction;	// 200 = 0xc8
    id _undoItemTarget;	// 208 = 0xd0
    SEL _undoItemAction;	// 216 = 0xd8
    id _redoItemTarget;	// 224 = 0xe0
    SEL _redoItemAction;	// 232 = 0xe8
    id <SSSScreenshotsViewDelegate> _delegate;	// 240 = 0xf0
    SSSScreenshotView *_appearingScreenshotView;	// 248 = 0xf8
    SSSScreenshotView *_currentScreenshotView;	// 256 = 0x100
}

@property(nonatomic) __weak SSSScreenshotView *currentScreenshotView; // @synthesize currentScreenshotView=_currentScreenshotView;
@property(nonatomic) __weak SSSScreenshotView *appearingScreenshotView; // @synthesize appearingScreenshotView=_appearingScreenshotView;
@property(nonatomic) _Bool currentScreenshotCropHandlesFadedOut; // @synthesize currentScreenshotCropHandlesFadedOut=_currentScreenshotCropHandlesFadedOut;
@property(nonatomic) __weak id <SSSScreenshotsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool screenshotViewsUseTrilinearMinificationFilter; // @synthesize screenshotViewsUseTrilinearMinificationFilter=_screenshotViewsUseTrilinearMinificationFilter;
@property(nonatomic) _Bool showsShadow; // @synthesize showsShadow=_showsShadow;
@property(nonatomic) _Bool showsBackgroundView; // @synthesize showsBackgroundView=_showsBackgroundView;
@property(nonatomic) SEL redoItemAction; // @synthesize redoItemAction=_redoItemAction;
@property(nonatomic) __weak id redoItemTarget; // @synthesize redoItemTarget=_redoItemTarget;
@property(nonatomic) SEL undoItemAction; // @synthesize undoItemAction=_undoItemAction;
@property(nonatomic) __weak id undoItemTarget; // @synthesize undoItemTarget=_undoItemTarget;
@property(nonatomic) SEL shareItemAction; // @synthesize shareItemAction=_shareItemAction;
@property(nonatomic) __weak id shareItemTarget; // @synthesize shareItemTarget=_shareItemTarget;
@property(nonatomic) _Bool bottomBarRedoItemEnabled; // @synthesize bottomBarRedoItemEnabled=_bottomBarRedoItemEnabled;
@property(nonatomic) _Bool bottomBarUndoItemEnabled; // @synthesize bottomBarUndoItemEnabled=_bottomBarUndoItemEnabled;
@property(nonatomic) _Bool showsUndoRedoItemsInBottomBar; // @synthesize showsUndoRedoItemsInBottomBar=_showsUndoRedoItemsInBottomBar;
@property(nonatomic) _Bool showsShareItemInBottomBar; // @synthesize showsShareItemInBottomBar=_showsShareItemInBottomBar;
@property(readonly, nonatomic) UINavigationBar *topBar; // @synthesize topBar=_topBar;
@property(nonatomic) _Bool inPixelationBrush; // @synthesize inPixelationBrush=_inPixelationBrush;
@property(nonatomic) _Bool snapshotScreenshotEdits; // @synthesize snapshotScreenshotEdits=_snapshotScreenshotEdits;
@property(nonatomic) _Bool inMultipleSelection; // @synthesize inMultipleSelection=_inMultipleSelection;
@property(nonatomic) double sharingViewHeight; // @synthesize sharingViewHeight=_sharingViewHeight;
@property(retain, nonatomic) UIView *sharingView; // @synthesize sharingView=_sharingView;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;	// IMP=0x0000000100030e5c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100030830
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000001000305b4
- (void)_updateSubviewOrdering;	// IMP=0x0000000100030398
- (_Bool)_shouldAvoidKeyboard;	// IMP=0x00000001000302c0
- (void)_keyboardWillHide:(id)arg1;	// IMP=0x00000001000302b4
- (void)_keyboardWillShow:(id)arg1;	// IMP=0x00000001000302a8
- (void)_updateForKeyboardNotification:(id)arg1;	// IMP=0x0000000100030034
- (void)setBorderViewStyleOverride:(long long)arg1 withAnimator:(id)arg2;	// IMP=0x000000010002ff6c
- (id)createUndoViewController;	// IMP=0x000000010002ff3c
@property(readonly, nonatomic) UIView *bottomBar;
- (long long)positionForBar:(id)arg1;	// IMP=0x000000010002fc68
- (void)dismissOverlayManagedViewControllers;	// IMP=0x000000010002fc50
- (void)inkPickerToolbarView:(id)arg1 changedToInk:(id)arg2;	// IMP=0x000000010002fbfc
- (_Bool)_screenshotEditsShouldBeSnapshottedForCurrentScreenshot;	// IMP=0x000000010002fbac
- (struct CGRect)_effectiveBottomBarExtent;	// IMP=0x000000010002fa94
- (id)_effectiveBottomBar;	// IMP=0x000000010002fa50
- (void)screenshotView:(id)arg1 noLongerHasHighPriorityGesture:(id)arg2;	// IMP=0x000000010002f9dc
- (void)screenshotView:(id)arg1 hasHighPriorityGesture:(id)arg2;	// IMP=0x000000010002f968
- (id)viewControllerForPresentationsFromScreenshotView:(id)arg1;	// IMP=0x000000010002f90c
- (void)screenshotViewTapped:(id)arg1;	// IMP=0x000000010002f890
- (void)screenshotViewUndoStackChanged:(id)arg1;	// IMP=0x000000010002f848
- (id)targetForCancellingDragItem:(id)arg1 inContainer:(id)arg2;	// IMP=0x000000010002f700
- (id)previewForDragItem:(id)arg1 inContainer:(id)arg2;	// IMP=0x000000010002f424
- (id)_screenshotViewForDragItem:(id)arg1;	// IMP=0x000000010002f414
@property(readonly, nonatomic) NSArray *dragItems;
@property(readonly, nonatomic) NSArray *activityItems;
- (id)_screenshotAtIndex:(long long)arg1;	// IMP=0x000000010002ecb4
@property(readonly, nonatomic) NSArray *visibleScreenshots;
- (void)sharingCancelled;	// IMP=0x000000010002ea1c
- (id)viewsForScreenshots:(id)arg1;	// IMP=0x000000010002e66c
@property(readonly, nonatomic) UIView *visibleView;
@property(readonly, nonatomic) SSSScreenshot *visibleScreenshot;
- (void)_scrollToPage:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000010002e584
- (long long)_numberOfPages;	// IMP=0x000000010002e56c
- (long long)_currentPage;	// IMP=0x000000010002e510
- (long long)_pageForXOffsetInScrollView:(double)arg1;	// IMP=0x000000010002e380
- (struct CGRect)_scrollViewRectForPage:(long long)arg1;	// IMP=0x000000010002e2ac
- (id)_viewForPage:(long long)arg1;	// IMP=0x000000010002e23c
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x000000010002e174
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000010002e168
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000010002e110
- (void)_noteCurrentPageForSignificantChange;	// IMP=0x000000010002e0dc
- (void)_updateDisplayedPage;	// IMP=0x000000010002e028
- (void)stateTransitionFinished;	// IMP=0x000000010002e010
@property(readonly, nonatomic) long long numberOfCheckedScreenshotImages;
@property(readonly, nonatomic) long long numberOfScreenshotImages;
- (void)removeScreenshots:(id)arg1;	// IMP=0x000000010002da94
- (id)_screenshotViewForScreenshot:(id)arg1;	// IMP=0x000000010002d91c
- (void)parentScreenshotView:(id)arg1;	// IMP=0x000000010002d864
- (struct CGRect)targetFrameForAppearingScreenshot:(id)arg1;	// IMP=0x000000010002d69c
@property(readonly, nonatomic) struct CGRect rectForViewOverlayingLatestScreenshot;
@property(readonly, nonatomic) id <UICoordinateSpace> screenshotsParentCoordinateSpace;
@property(readonly, nonatomic) struct CGRect screenshotsExtentRect;
- (id)_rectsForShadowView;	// IMP=0x000000010002d270
- (long long)_effectiveIndexForIndex:(long long)arg1 inNumberOfScreenshots:(long long)arg2;	// IMP=0x000000010002d234
- (long long)_positioningIndexForIndex:(long long)arg1 numberOfScreenshots:(long long)arg2;	// IMP=0x000000010002d1e4
- (_Bool)_shouldShowScreenshotViewAtIndex:(long long)arg1;	// IMP=0x000000010002d144
- (_Bool)_showAllScreenshotsForNumberOfScreenshots:(long long)arg1;	// IMP=0x000000010002d108
- (struct CGSize)_scrollContentSize;	// IMP=0x000000010002d044
- (struct UIEdgeInsets)_scrollContentInsets;	// IMP=0x000000010002ce24
- (double)_interScreenshotSpacing;	// IMP=0x000000010002cdb8
- (struct CGSize)_screenshotMaximumSize;	// IMP=0x000000010002cd04
- (struct CGRect)_availableRectForContent;	// IMP=0x000000010002cba8
- (struct CGRect)_layoutBounds;	// IMP=0x000000010002cb0c
- (struct CGRect)_frameForScreenshot:(id)arg1 atIndex:(long long)arg2 numberOfScreenshots:(long long)arg3 maximumSize:(struct CGSize)arg4 interScreenshotSpacing:(double)arg5 inMultipleSelection:(_Bool)arg6 rectToCenterAboveKeyboard:(struct CGRect)arg7 state:(unsigned long long)arg8;	// IMP=0x000000010002c554
- (void)_layoutScreenshotView:(id)arg1 forState:(unsigned long long)arg2 isFirstScreenshot:(_Bool)arg3 isCurrentScreenshot:(_Bool)arg4 inMultipleSelection:(_Bool)arg5;	// IMP=0x000000010002c21c
- (void)safeAreaInsetsDidChange;	// IMP=0x000000010002c1b4
- (void)layoutSubviews;	// IMP=0x000000010002b034

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

