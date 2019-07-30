//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBCenterIconZoomAnimator.h"

@class SBCenterAppZoomSettings, UIView;

@interface SBCenterAppIconZoomAnimator : SBCenterIconZoomAnimator
{
    UIView *_appView;	// 8 = 0x8
    UIView *_appZoomView;	// 16 = 0x10
    struct CGRect _destinationFrame;	// 24 = 0x18
    double _distantScale;	// 56 = 0x38
}

@property double distantScale; // @synthesize distantScale=_distantScale;
- (void).cxx_destruct;	// IMP=0x00000001004bfb5c
- (void)_fadeAppForZoomFraction:(double)arg1;	// IMP=0x00000001004bfb1c
- (void)_zoomAppForZoomFraction:(double)arg1;	// IMP=0x00000001004bfa2c
- (double)_appZoomDelay;	// IMP=0x00000001004bf9cc
- (struct CGPoint)cameraPosition;	// IMP=0x00000001004bf918
- (double)_iconZoomDelay;	// IMP=0x00000001004bf8c0
- (void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(_Bool)arg4 sharedCompletion:(CDUnknownBlockType)arg5;	// IMP=0x00000001004bf57c
- (void)hintToFraction:(double)arg1;	// IMP=0x00000001004bf4d0
- (unsigned long long)_numberOfSignificantAnimations;	// IMP=0x00000001004bf498
- (void)_cleanupAnimation;	// IMP=0x00000001004bf3a4
- (void)_setAnimationFraction:(double)arg1;	// IMP=0x00000001004bf330
- (void)_prepareAnimation;	// IMP=0x00000001004befdc
- (void)_delayedForRotation;	// IMP=0x00000001004bef48
- (id)initWithFolderController:(id)arg1 appView:(id)arg2;	// IMP=0x00000001004bede8

// Remaining properties
@property(retain, nonatomic) SBCenterAppZoomSettings *settings; // @dynamic settings;

@end
