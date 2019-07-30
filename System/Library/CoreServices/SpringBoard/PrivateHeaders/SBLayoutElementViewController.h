//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SBLayoutElementContainerViewDelegate.h"

@class FBDisplayLayoutElement, FBSDisplay, NSString, SBLayoutElement, SBLayoutState;

@interface SBLayoutElementViewController : UIViewController <SBLayoutElementContainerViewDelegate>
{
    FBSDisplay *_display;	// 8 = 0x8
    SBLayoutElement *_layoutElement;	// 16 = 0x10
    SBLayoutState *_layoutState;	// 24 = 0x18
    id <SBLayoutElementViewControllerDelegate> _delegate;	// 32 = 0x20
    FBDisplayLayoutElement *_displayLayoutElement;	// 40 = 0x28
}

@property(nonatomic) __weak id <SBLayoutElementViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SBLayoutState *layoutState; // @synthesize layoutState=_layoutState;
@property(readonly, nonatomic) SBLayoutElement *layoutElement; // @synthesize layoutElement=_layoutElement;
@property(readonly, nonatomic) FBSDisplay *display; // @synthesize display=_display;
- (void).cxx_destruct;	// IMP=0x00000001002e4d70
- (id)layoutStateForLayoutElementContainingView:(id)arg1;	// IMP=0x00000001002e4cfc
- (_Bool)shouldAllowSwipeInDimmingViewAtStartLocation:(struct CGPoint)arg1 inLayoutElementContainingView:(id)arg2;	// IMP=0x00000001002e4c90
- (void)handleReturnActionForLayoutElementContainingView:(id)arg1;	// IMP=0x00000001002e4c48
- (void)_updateDisplayLayoutElementToVisible:(_Bool)arg1;	// IMP=0x00000001002e4ad0
- (id)snapshotView;	// IMP=0x00000001002e4a78
- (void)setWantsPinResizeGrabber:(_Bool)arg1;	// IMP=0x00000001002e4a30
- (void)didEndTransitionToVisible:(_Bool)arg1;	// IMP=0x00000001002e49cc
- (void)willBeginTransitionToVisible:(_Bool)arg1;	// IMP=0x00000001002e4968
- (void)invalidate;	// IMP=0x00000001002e4930
@property(readonly, nonatomic) double preferredLayoutLevel;
- (void)prepareForReuse;	// IMP=0x00000001002e4860
- (_Bool)supportsReuse;	// IMP=0x00000001002e4858
- (void)configureWithEntity:(id)arg1 forElement:(id)arg2 layoutState:(id)arg3;	// IMP=0x00000001002e47b4
- (id)view;	// IMP=0x00000001002e4780
- (void)viewDidLoad;	// IMP=0x00000001002e4620
- (void)loadView;	// IMP=0x00000001002e459c
- (void)dealloc;	// IMP=0x00000001002e4540
- (id)initWithDisplay:(id)arg1;	// IMP=0x00000001002e44b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

