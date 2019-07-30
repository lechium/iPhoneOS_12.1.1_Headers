//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBTreeNodeViewController.h"

#import "SBFolderControllerDelegate.h"
#import "SBFolderObserver.h"
#import "SBFolderViewDelegate.h"

@class NSArray, NSMapTable, NSString, NSTimer, SBAppStatusBarSettingsAssertion, SBFakeStatusBarView, SBFolder, SBFolderContainerView, SBFolderContext, SBFolderControllerAnimationContext, SBFolderControllerBackgroundView, SBFolderView, SBIcon, SBIconAnimator, SBIconViewMap, _UILegibilitySettings;

@interface SBFolderController : SBTreeNodeViewController <SBFolderControllerDelegate, SBFolderObserver, SBFolderViewDelegate>
{
    SBIconViewMap *_viewMap;	// 8 = 0x8
    SBFolderContainerView *_containerView;	// 16 = 0x10
    SBFolderView *_contentView;	// 24 = 0x18
    SBFolderControllerBackgroundView *_backgroundView;	// 32 = 0x20
    _Bool _didAutoScroll;	// 40 = 0x28
    NSTimer *_autoScrollTimer;	// 48 = 0x30
    struct CGPoint _dragPausePoint;	// 56 = 0x38
    NSTimer *_dragPauseTimer;	// 72 = 0x48
    NSTimer *_closeFolderTimer;	// 80 = 0x50
    _Bool _grabbedIconHasEverEnteredFolderView;	// 88 = 0x58
    long long _dropDestinationPageIndex;	// 96 = 0x60
    NSMapTable *_editingContextsByFolder;	// 104 = 0x68
    SBIconAnimator *_iconAnimator;	// 112 = 0x70
    _Bool _isOpen;	// 120 = 0x78
    _Bool _isEditing;	// 121 = 0x79
    _Bool _isAnimating;	// 122 = 0x7a
    _Bool _active;	// 123 = 0x7b
    _Bool _rotating;	// 124 = 0x7c
    _Bool _wasExpandedAfterLastSizeTransition;	// 125 = 0x7d
    id <SBFolderControllerDelegate> _folderDelegate;	// 128 = 0x80
    SBFolder *_folder;	// 136 = 0x88
    long long _orientation;	// 144 = 0x90
    _UILegibilitySettings *_legibilitySettings;	// 152 = 0x98
    _UILegibilitySettings *_accessibilityLegibilitySettings;	// 160 = 0xa0
    SBIcon *_grabbedIcon;	// 168 = 0xa8
    SBFolderContext *_lastContext;	// 176 = 0xb0
    SBAppStatusBarSettingsAssertion *_statusBarAssertion;	// 184 = 0xb8
    SBFakeStatusBarView *_fakeStatusBar;	// 192 = 0xc0
    SBFolderControllerAnimationContext *_animationContext;	// 200 = 0xc8
}

+ (Class)listViewClass;	// IMP=0x000000010058696c
@property(retain, nonatomic) SBFolderControllerAnimationContext *animationContext; // @synthesize animationContext=_animationContext;
@property(retain, nonatomic) SBFakeStatusBarView *fakeStatusBar; // @synthesize fakeStatusBar=_fakeStatusBar;
@property(retain, nonatomic) SBAppStatusBarSettingsAssertion *statusBarAssertion; // @synthesize statusBarAssertion=_statusBarAssertion;
@property(retain, nonatomic) SBFolderContext *lastContext; // @synthesize lastContext=_lastContext;
@property(retain, nonatomic) SBIcon *grabbedIcon; // @synthesize grabbedIcon=_grabbedIcon;
@property(nonatomic) _Bool wasExpandedAfterLastSizeTransition; // @synthesize wasExpandedAfterLastSizeTransition=_wasExpandedAfterLastSizeTransition;
@property(nonatomic, getter=isRotating) _Bool rotating; // @synthesize rotating=_rotating;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) SBFolderView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) _UILegibilitySettings *accessibilityLegibilitySettings; // @synthesize accessibilityLegibilitySettings=_accessibilityLegibilitySettings;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(readonly, nonatomic) SBIconViewMap *viewMap; // @synthesize viewMap=_viewMap;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) SBFolder *folder; // @synthesize folder=_folder;
@property(nonatomic) __weak id <SBFolderControllerDelegate> folderDelegate; // @synthesize folderDelegate=_folderDelegate;
@property(nonatomic) long long dropDestinationPageIndex; // @synthesize dropDestinationPageIndex=_dropDestinationPageIndex;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_isAnimating;
@property(readonly, nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_isEditing;
@property(nonatomic, getter=isOpen) _Bool open; // @synthesize open=_isOpen;
- (void).cxx_destruct;	// IMP=0x000000010058a68c
- (void)handleReachabilityActivated:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010058a3a8
- (void)folderControllerDidReceiveCancelReachabilityAction:(id)arg1;	// IMP=0x000000010058a33c
- (void)folderViewDidReceiveCancelReachabilityAction:(id)arg1;	// IMP=0x000000010058a2d0
- (void)folder:(id)arg1 didRemoveLists:(id)arg2 atIndexes:(id)arg3;	// IMP=0x000000010058a018
- (void)folder:(id)arg1 didAddList:(id)arg2;	// IMP=0x0000000100589eb8
- (void)_noteFolderListsDidChange;	// IMP=0x0000000100589ea0
- (void)folderViewShouldBeginEditing:(id)arg1;	// IMP=0x0000000100589e58
- (void)folderViewShouldClose:(id)arg1 withPinchGesture:(id)arg2;	// IMP=0x0000000100589dd8
- (void)folderViewDidEndScrolling:(id)arg1;	// IMP=0x0000000100589d54
- (void)folderViewWillBeginScrolling:(id)arg1;	// IMP=0x0000000100589d50
- (void)folderView:(id)arg1 currentPageIndexDidChange:(long long)arg2;	// IMP=0x0000000100589d4c
- (Class)iconListViewClassForFolderView:(id)arg1;	// IMP=0x0000000100589d28
- (void)folderControllerDidEndScrolling:(id)arg1;	// IMP=0x0000000100589cbc
- (void)folderControllerShouldBeginEditing:(id)arg1;	// IMP=0x0000000100589c74
- (void)folderControllerShouldClose:(id)arg1 withPinchGesture:(id)arg2;	// IMP=0x0000000100589c04
- (void)folderController:(id)arg1 draggedIconShouldDropFromListView:(id)arg2;	// IMP=0x0000000100589b7c
- (_Bool)folderController:(id)arg1 draggedIconMightDropFromListView:(id)arg2;	// IMP=0x0000000100589ae8
- (_Bool)folderController:(id)arg1 draggedIconDidMoveFromListView:(id)arg2 toListView:(id)arg3;	// IMP=0x0000000100589a30
- (_Bool)folderController:(id)arg1 draggedIconDidPauseAtLocation:(struct CGPoint)arg2 inListView:(id)arg3;	// IMP=0x0000000100589984
- (Class)controllerClassForFolder:(id)arg1;	// IMP=0x0000000100589900
- (void)didRotateFromInterfaceOrientation:(long long)arg1;	// IMP=0x00000001005897a0
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x0000000100589594
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x0000000100589460
- (struct UIEdgeInsets)statusBarInsetsForOrientation:(long long)arg1;	// IMP=0x000000010058944c
- (void)prepareToLaunchTappedIcon:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001005893b8
- (id)currentIndexPath;	// IMP=0x0000000100589274
- (_Bool)restoreExpandedIndexPath:(id)arg1;	// IMP=0x0000000100588fb8
- (_Bool)shouldOpenFolderIcon:(id)arg1;	// IMP=0x0000000100588f40
- (void)popFolderAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100588eb0
- (void)pushFolderIcon:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100588b80
- (void)prepareToClose;	// IMP=0x0000000100588b7c
- (void)prepareToOpen;	// IMP=0x0000000100588b3c
- (_Bool)_iconAppearsOnCurrentPage:(id)arg1;	// IMP=0x0000000100588a6c
- (_Bool)_listIndexIsVisible:(unsigned long long)arg1;	// IMP=0x0000000100588a3c
- (unsigned long long)_depth;	// IMP=0x00000001005889f0
- (id)_newAnimatorForZoomUp:(_Bool)arg1;	// IMP=0x000000010058881c
- (void)_clearIconAnimator;	// IMP=0x00000001005887e0
- (void)unscatterAnimated:(_Bool)arg1 afterDelay:(double)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000001005885d0
- (void)noteGrabbedIcon:(id)arg1 locationDidChangeWithTouch:(id)arg2;	// IMP=0x00000001005884a4
- (void)noteGrabbedIconDidChange:(id)arg1;	// IMP=0x0000000100588180
- (void)noteUserIsInteractingWithIcons;	// IMP=0x0000000100588168
- (void)_updateAutoScrollForTouch:(id)arg1;	// IMP=0x0000000100587b7c
@property(readonly, nonatomic) struct CGRect _autoscrollExclusionRegion;
- (void)_cancelAutoScroll;	// IMP=0x0000000100587a74
- (void)_doAutoScrollByPageCount:(long long)arg1;	// IMP=0x0000000100587848
- (void)_scrollRight:(id)arg1;	// IMP=0x00000001005877e4
- (void)_scrollLeft:(id)arg1;	// IMP=0x0000000100587780
- (void)_updateDragPauseForTouch:(id)arg1;	// IMP=0x0000000100587680
- (void)_dragPauseTimerFired:(id)arg1;	// IMP=0x00000001005874f0
- (_Bool)_canDropIconInListView:(id)arg1;	// IMP=0x0000000100587458
- (void)_resetDragPauseTimerForPoint:(struct CGPoint)arg1 inIconListView:(id)arg2;	// IMP=0x00000001005872f4
- (void)_cancelDragPauseTimer;	// IMP=0x00000001005872a8
- (void)_updateDropDestinationForTouch:(id)arg1;	// IMP=0x0000000100587210
- (void)_updateCloseFolderForTouch:(id)arg1;	// IMP=0x0000000100587058
- (void)_setCloseFolderTimerIfNecessary;	// IMP=0x0000000100586fe0
- (void)_closeFolderTimerFired;	// IMP=0x0000000100586f40
- (void)_cancelCloseFolderTimer;	// IMP=0x0000000100586e68
- (void)_cancelAllInteractionTimers;	// IMP=0x0000000100586e24
- (_Bool)_allowUserInteraction;	// IMP=0x0000000100586ddc
- (unsigned long long)_indexOfIconListForIcon:(id)arg1;	// IMP=0x0000000100586d5c
- (void)_compactFolder;	// IMP=0x0000000100586d1c
- (id)_addEmptyListForce:(_Bool)arg1;	// IMP=0x0000000100586ad8
- (id)addEmptyListView;	// IMP=0x0000000100586ac8
- (void)layoutIconLists:(double)arg1 domino:(_Bool)arg2 forceRelayout:(_Bool)arg3;	// IMP=0x0000000100586ab0
- (void)_resetIconLists;	// IMP=0x0000000100586a04
- (void)prepareToTearDown;	// IMP=0x0000000100586980
- (void)accessibilityReduceTransparencyDidChange;	// IMP=0x00000001005868e4
- (void)_updateStateOfAssociatedController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100586818
- (void)_updateAssociatedControllerStateAnimated:(_Bool)arg1;	// IMP=0x00000001005867b8
- (void)fadeContentForMinificationFraction:(double)arg1;	// IMP=0x0000000100586768
- (void)fadeContentForMagnificationFraction:(double)arg1;	// IMP=0x0000000100586718
- (void)endAnimatingDockOffscreenFractionForReason:(id)arg1;	// IMP=0x0000000100586714
- (void)setDockOffscreenFraction:(double)arg1;	// IMP=0x0000000100586710
- (void)beginAnimatingDockOffscreenFractionForReason:(id)arg1;	// IMP=0x000000010058670c
- (id)dockListView;	// IMP=0x0000000100586704
- (_Bool)hasDock;	// IMP=0x000000010058669c
- (id)targetIconViewForExpandUnexpandTransitionOfFolderWithIcon:(id)arg1;	// IMP=0x0000000100586590
- (_Bool)isDisplayingIcon:(id)arg1;	// IMP=0x00000001005864c0
- (id)iconListViewContainingIcon:(id)arg1;	// IMP=0x00000001005863fc
- (id)iconListViewForTouch:(id)arg1;	// IMP=0x00000001005863e4
- (id)iconListViewAtIndex:(unsigned long long)arg1;	// IMP=0x00000001005863cc
- (_Bool)doesPageContainIconListView:(long long)arg1;	// IMP=0x00000001005863b4
- (id)currentIconListView;	// IMP=0x000000010058635c
@property(readonly, nonatomic) unsigned long long iconListViewCount;
@property(readonly, copy, nonatomic) NSArray *iconListViews;
- (_Bool)_restoreFromContext:(id)arg1;	// IMP=0x00000001005862d8
- (id)_createContext;	// IMP=0x0000000100586270
- (id)folderControllerForFolder:(id)arg1;	// IMP=0x00000001005861bc
- (id)deepestFolderController;	// IMP=0x0000000100586128
@property(readonly, nonatomic) __weak SBFolderController *outerFolderController;
@property(readonly, nonatomic) SBFolderController *innerFolderController;
- (void)_configureForInnerFolderController:(id)arg1;	// IMP=0x0000000100585c50
- (void)setCurrentPageIndexToListContainingIcon:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100585afc
- (void)setCurrentPageIndexToListContainingIcon:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100585aec
- (_Bool)setCurrentPageIndex:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100585ad4
- (_Bool)setCurrentPageIndex:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100585ac4
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000001005859cc
@property(readonly, nonatomic) long long currentPageIndex;
@property(readonly, nonatomic, getter=isScrolling) _Bool scrolling;
- (id)_iconPageIndicatorImageSetCache;	// IMP=0x00000001005857a0
- (Class)_contentViewClass;	// IMP=0x000000010058578c
- (void)_removeFakeStatusBarAndAssertionIfExists;	// IMP=0x0000000100585710
- (void)_removeFakeStatusBar;	// IMP=0x0000000100585704
- (void)_resetFakeStatusBarFrameOnly;	// IMP=0x0000000100585644
- (void)_resetFakeStatusBarSettingsIfNecessary;	// IMP=0x000000010058555c
- (void)_addFakeStatusBarView;	// IMP=0x0000000100585460
- (void)removeViewFromHierarchyForChildTreeNodeViewController:(id)arg1;	// IMP=0x000000010058545c
- (void)addViewToHierarchyForChildTreeNodeViewController:(id)arg1;	// IMP=0x0000000100585458
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withContainingExpandedTreeNode:(id)arg2 transitionCoordinator:(id)arg3;	// IMP=0x0000000100584da4
- (void)treeNodeViewController:(id)arg1 willPerformOperation:(long long)arg2 fromViewController:(id)arg3 fromTreeNode:(id)arg4 toViewController:(id)arg5 toTreeNode:(id)arg6 withTransitionCoordinator:(id)arg7;	// IMP=0x000000010058363c
- (void)_fadeHomescreenAndDockIfNecessaryForFolderOpen:(_Bool)arg1;	// IMP=0x00000001005835e4
- (void)_updateHomescreenAndDockFade;	// IMP=0x0000000100583524
- (_Bool)_homescreenAndDockShouldFade;	// IMP=0x00000001005834bc
- (void)_setHomescreenAndDockAlpha:(double)arg1;	// IMP=0x000000010058344c
- (id)treeNodeViewController:(id)arg1 destinationExpandedTreeNodeForTargetTreeNode:(id)arg2;	// IMP=0x0000000100583384
- (id)treeNodeViewController:(id)arg1 viewControllerForChildTreeNode:(id)arg2;	// IMP=0x000000010058327c
- (void)loadView;	// IMP=0x0000000100583264
- (id)view;	// IMP=0x0000000100583230
- (void)invalidate;	// IMP=0x0000000100583224
- (void)_invalidate;	// IMP=0x0000000100583214
- (void)dealloc;	// IMP=0x000000010058310c
- (id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3 context:(id)arg4;	// IMP=0x0000000100582e68
- (id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3;	// IMP=0x0000000100582e00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

