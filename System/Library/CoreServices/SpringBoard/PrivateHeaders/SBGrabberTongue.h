//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBSystemGestureRecognizerDelegate.h"

@class NSString, SBScreenEdgePanGestureRecognizer, SBUIChevronView, UIView, _UIBackdropView;

@interface SBGrabberTongue : NSObject <SBSystemGestureRecognizerDelegate>
{
    id <SBGrabberTongueDelegate> _delegate;	// 8 = 0x8
    _Bool _invalidated;	// 16 = 0x10
    SBScreenEdgePanGestureRecognizer *_edgePullGestureRecognizer;	// 24 = 0x18
    UIView *_tongueContainer;	// 32 = 0x20
    _UIBackdropView *_tongueBackdropView;	// 40 = 0x28
    SBUIChevronView *_tongueChevron;	// 48 = 0x30
    _Bool _tongueVisible;	// 56 = 0x38
    _Bool _inPullGesture;	// 57 = 0x39
    _Bool _inTongueGesture;	// 58 = 0x3a
    _Bool _inTongueDismissGesture;	// 59 = 0x3b
    unsigned long long _screenEdge;	// 64 = 0x40
    unsigned long long _systemGestureType;	// 72 = 0x48
    UIView *_containingView;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000001003d2020
- (void)_handlePullGesture:(id)arg1;	// IMP=0x00000001003d1ce8
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000001003d1b8c
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00000001003d19f4
- (id)viewForSystemGestureRecognizer:(id)arg1;	// IMP=0x00000001003d19e4
- (void)_updateCancelsTouchesWithRecognizer:(id)arg1;	// IMP=0x00000001003d1944
- (_Bool)_recognizerIsWithinGrabberActiveZone:(id)arg1;	// IMP=0x00000001003d181c
- (_Bool)_recognizerIsWithinGrabberZone:(id)arg1;	// IMP=0x00000001003d1708
- (_Bool)_recognizerIsOutsideGrabberFreeZone:(id)arg1;	// IMP=0x00000001003d15dc
- (double)_edgeOrientedVelocityForRecognizer:(id)arg1;	// IMP=0x00000001003d1530
- (double)_distanceFromEdgeForRecognizer:(id)arg1;	// IMP=0x00000001003d1454
- (struct CGAffineTransform)_transformForTongue;	// IMP=0x00000001003d13ac
- (struct CGRect)_chevronFrameForTongueBounds:(struct CGRect)arg1;	// IMP=0x00000001003d133c
- (struct CGRect)_frameForTongueWhenVisible:(_Bool)arg1;	// IMP=0x00000001003d10c4
- (void)_presentTongue;	// IMP=0x00000001003d0e10
- (void)_dismissTongueWithStyle:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x00000001003d0b58
- (void)_cancelPendingTongueDismissRequests;	// IMP=0x00000001003d0b18
- (void)_dismissTongue:(id)arg1;	// IMP=0x00000001003d0b04
- (id)_newLightChevronView;	// IMP=0x00000001003d0a58
- (id)_newDarkChevronView;	// IMP=0x00000001003d094c
- (id)_newBackdropViewWithColorStyle:(long long)arg1;	// IMP=0x00000001003d08b8
- (void)_createTongueAndGestureRecognizersIfNecessaryWithColorStyle:(long long)arg1;	// IMP=0x00000001003d05a4
- (void)_willPresent;	// IMP=0x00000001003d053c
- (void)_pullGestureCanceled:(id)arg1;	// IMP=0x00000001003d0490
- (void)_pullGestureEnded:(id)arg1;	// IMP=0x00000001003d03e4
- (void)_pullGestureUpdated:(id)arg1;	// IMP=0x00000001003d0338
- (void)_pullGestureBegan:(id)arg1;	// IMP=0x00000001003d028c
- (double)_widthOfActiveEdgeCenteredAtTongue;	// IMP=0x00000001003d01d8
- (double)_widthOfGrabberFreeRegionAroundTongue;	// IMP=0x00000001003d0164
- (double)_centerOnScreenEdge;	// IMP=0x00000001003d00b0
- (_Bool)_requiresTongue;	// IMP=0x00000001003d0074
- (_Bool)_requiresTongueOutsideGrabberFreeRegion;	// IMP=0x00000001003d0038
- (_Bool)_tongueOrPullEnabled;	// IMP=0x00000001003cfffc
- (double)distanceFromEdge;	// IMP=0x00000001003cffe4
- (id)edgePullGestureRecognizer;	// IMP=0x00000001003cffd4
- (_Bool)dismissWithStyle:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x00000001003cff9c
- (void)installInView:(id)arg1 withColorStyle:(long long)arg2;	// IMP=0x00000001003cfe58
- (void)invalidate;	// IMP=0x00000001003cfe18
- (void)dealloc;	// IMP=0x00000001003cfcf4
- (id)initWithDelegate:(id)arg1 edge:(unsigned long long)arg2 type:(unsigned long long)arg3;	// IMP=0x00000001003cfb90
- (id)init;	// IMP=0x00000001003cfac0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

