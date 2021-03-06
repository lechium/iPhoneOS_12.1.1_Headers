//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBFolderController.h"

#import "SBRootFolderDelegate.h"

@class NSString, SBRootFolder, SBRootFolderView, _SBRootFolderDockAnimationViewControllerWindow;

@interface SBRootFolderController : SBFolderController <SBRootFolderDelegate>
{
    _Bool _managesStatusBarWidth;	// 8 = 0x8
    _SBRootFolderDockAnimationViewControllerWindow *_dockAnimationWindow;	// 16 = 0x10
}

+ (Class)listViewClass;	// IMP=0x0000000100105db8
@property(nonatomic) _Bool managesStatusBarWidth; // @synthesize managesStatusBarWidth=_managesStatusBarWidth;
@property(retain, nonatomic) _SBRootFolderDockAnimationViewControllerWindow *dockAnimationWindow; // @synthesize dockAnimationWindow=_dockAnimationWindow;
- (void).cxx_destruct;	// IMP=0x0000000100107b64
- (void)_reduceTransparencyChanged;	// IMP=0x0000000100107af0
- (_Bool)rootFolder:(id)arg1 shouldAllowBadgingForIcon:(id)arg2;	// IMP=0x0000000100107a74
- (void)didRotateFromInterfaceOrientation:(long long)arg1;	// IMP=0x00000001001078ac
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x000000010010694c
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x000000010010662c
- (struct UIEdgeInsets)statusBarInsetsForOrientation:(long long)arg1;	// IMP=0x000000010010659c
- (void)_configureAppStatusBarInsetsForOrientation:(long long)arg1;	// IMP=0x0000000100106488
- (void)configureAppStatusBarInsets;	// IMP=0x0000000100106450
- (void)_configureAppStatusBarInsetsAnimated:(_Bool)arg1;	// IMP=0x00000001001063a0
- (void)_configureViewForOrientationWithoutAnimation:(long long)arg1;	// IMP=0x000000010010633c
- (void)_configureDockViewForOrientationWithoutAnimation:(long long)arg1;	// IMP=0x0000000100106278
- (void)_configureDockViewForOrientationDuringAnimation:(long long)arg1;	// IMP=0x00000001001060d8
- (_Bool)_dockLayoutReversedForInterfaceOrientation:(long long)arg1;	// IMP=0x000000010010607c
- (unsigned long long)_dockEdgeForInterfaceOrientation:(long long)arg1;	// IMP=0x0000000100106024
- (_Bool)_shouldUseDockAnimationWindowForRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x0000000100105f80
- (_Bool)_shouldSlideDockOutDuringRotationFromOrientation:(long long)arg1 toOrientation:(long long)arg2;	// IMP=0x0000000100105efc
- (_Bool)_isDockSwitchedForOrientation:(long long)arg1;	// IMP=0x0000000100105ee4
- (void)prepareToClose;	// IMP=0x0000000100105e90
- (void)prepareToOpen;	// IMP=0x0000000100105e1c
- (_Bool)_listIndexIsVisible:(unsigned long long)arg1;	// IMP=0x0000000100105dcc
- (struct CGRect)_autoscrollExclusionRegion;	// IMP=0x0000000100105c7c
@property(nonatomic) unsigned long long dockEdge;
- (void)endAnimatingDockOffscreenFractionForReason:(id)arg1;	// IMP=0x0000000100105b7c
- (void)setDockOffscreenFraction:(double)arg1;	// IMP=0x0000000100105b2c
- (void)beginAnimatingDockOffscreenFractionForReason:(id)arg1;	// IMP=0x0000000100105ac0
- (id)dockListView;	// IMP=0x0000000100105a44
- (_Bool)isDisplayingIcon:(id)arg1;	// IMP=0x0000000100105998
- (void)setIdleText:(id)arg1;	// IMP=0x000000010010592c
- (_Bool)setCurrentPageIndex:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100105884
- (_Bool)setCurrentPageIndex:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100105874
- (id)folderControllers;	// IMP=0x000000010010579c
@property(retain, nonatomic) SBRootFolder *folder; // @dynamic folder;
- (unsigned long long)_depth;	// IMP=0x00000001001056c0
- (Class)_contentViewClass;	// IMP=0x00000001001056ac
- (_Bool)shouldOpenFolderIcon:(id)arg1;	// IMP=0x00000001001055d0
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withContainingExpandedTreeNode:(id)arg2 transitionCoordinator:(id)arg3;	// IMP=0x0000000100105488
- (id)view;	// IMP=0x0000000100105454
- (id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3;	// IMP=0x0000000100105234

// Remaining properties
@property(readonly, nonatomic) SBRootFolderView *contentView; // @dynamic contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

