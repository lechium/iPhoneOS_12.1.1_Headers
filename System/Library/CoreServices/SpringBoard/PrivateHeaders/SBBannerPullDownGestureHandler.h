//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBBannerGestureHandler.h"

@class _UIDynamicValueAnimation;

@interface SBBannerPullDownGestureHandler : SBBannerGestureHandler
{
    _Bool _pulledDown;	// 8 = 0x8
    _Bool _startedPulledDown;	// 9 = 0x9
    _UIDynamicValueAnimation *_animation;	// 16 = 0x10
    _Bool _invalidated;	// 24 = 0x18
    _Bool _completed;	// 25 = 0x19
}

- (void).cxx_destruct;	// IMP=0x0000000100356fc8
- (void)_stopAnimating;	// IMP=0x0000000100356fb0
- (double)_finalDisplacementForShow:(_Bool)arg1;	// IMP=0x0000000100356f14
- (id)_pullForShow:(_Bool)arg1 finalDisplacement:(double)arg2;	// IMP=0x0000000100356ec0
- (id)_boundaryForShow:(_Bool)arg1 finalDisplacement:(double)arg2;	// IMP=0x0000000100356e74
- (id)_newAnimationForShow:(_Bool)arg1 withDisplacement:(double)arg2 velocity:(double)arg3;	// IMP=0x0000000100356d54
- (double)_pullDownDistance;	// IMP=0x0000000100356cec
- (void)_updateWithDisplacement:(double)arg1 velocity:(double)arg2;	// IMP=0x0000000100356bf0
- (void)_finishGestureWithDisplacement:(double)arg1 velocity:(double)arg2;	// IMP=0x0000000100356924
- (_Bool)_shouldFinishWithLocation:(struct CGPoint)arg1 velocity:(double)arg2;	// IMP=0x0000000100356908
- (void)invalidate;	// IMP=0x0000000100356888
- (_Bool)handleGestureType:(long long)arg1 state:(long long)arg2 location:(struct CGPoint)arg3 displacement:(double)arg4 velocity:(double)arg5;	// IMP=0x000000010035674c
- (void)dealloc;	// IMP=0x00000001003566fc

@end

