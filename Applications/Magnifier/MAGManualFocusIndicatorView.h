//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MAGFocusIndicatorView.h"

@class MAGManualFocusIndicatorReticleView;

__attribute__((visibility("hidden")))
@interface MAGManualFocusIndicatorView : MAGFocusIndicatorView
{
    MAGManualFocusIndicatorReticleView *_reticle;	// 8 = 0x8
}

@property(retain, nonatomic) MAGManualFocusIndicatorReticleView *reticle; // @synthesize reticle=_reticle;
- (void).cxx_destruct;	// IMP=0x0000000100006bd4
- (void)animateToHidden;	// IMP=0x0000000100006b10
- (void)animateToShown;	// IMP=0x00000001000065a0
- (double)baseAnimationDuration;	// IMP=0x0000000100006594
- (void)willBeHidden;	// IMP=0x0000000100006554
- (void)willBeShown;	// IMP=0x0000000100006514
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100006508
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000100006488
- (id)init;	// IMP=0x0000000100006300

@end
