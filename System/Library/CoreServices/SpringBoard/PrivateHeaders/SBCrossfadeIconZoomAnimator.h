//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBScaleIconZoomAnimator.h"

@class SBCrossfadeZoomSettings, UIView;

@interface SBCrossfadeIconZoomAnimator : SBScaleIconZoomAnimator
{
    UIView *_crossfadeView;	// 8 = 0x8
    _Bool _performsTrueCrossfade;	// 16 = 0x10
    _Bool _masksCorners;	// 17 = 0x11
}

@property(nonatomic) _Bool masksCorners; // @synthesize masksCorners=_masksCorners;
@property(nonatomic) _Bool performsTrueCrossfade; // @synthesize performsTrueCrossfade=_performsTrueCrossfade;
- (void).cxx_destruct;	// IMP=0x0000000100504738
- (struct CGPoint)_zoomedIconCenter;	// IMP=0x0000000100504544
- (struct CGRect)_zoomedFrame;	// IMP=0x000000010050452c
- (void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(_Bool)arg4 sharedCompletion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100503c88
- (unsigned long long)_numberOfSignificantAnimations;	// IMP=0x0000000100503c50
- (void)_cleanupAnimation;	// IMP=0x0000000100503b34
- (void)_cleanupZoom;	// IMP=0x0000000100503a8c
- (void)_setAnimationFraction:(double)arg1;	// IMP=0x00000001005039a8
- (void)_prepareAnimation;	// IMP=0x00000001005037b4
- (void)_delayedForRotation;	// IMP=0x0000000100503724
- (_Bool)fadesHomeScreen;	// IMP=0x000000010050371c
- (double)maxHomeScreenZoomScale;	// IMP=0x0000000100503714
- (id)initWithFolderController:(id)arg1 crossfadeView:(id)arg2 icon:(id)arg3;	// IMP=0x0000000100503580
- (void)_assertCrossfadeViewSizeIfNecessary;	// IMP=0x000000010050345c

// Remaining properties
@property(retain, nonatomic) SBCrossfadeZoomSettings *settings; // @dynamic settings;

@end

