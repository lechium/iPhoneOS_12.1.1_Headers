//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBBannerGestureHandler.h"

@interface SBBannerToNotificationCenterGestureHandler : SBBannerGestureHandler
{
    _Bool _canPullDown;	// 8 = 0x8
    _Bool _didPreparePullDown;	// 9 = 0x9
    struct CGSize _rootSize;	// 16 = 0x10
    struct CGSize _pullDownSize;	// 32 = 0x20
    struct CGRect _pullDownTargetRect;	// 48 = 0x30
    double _bannerHeight;	// 80 = 0x50
    _Bool _bannerHidden;	// 88 = 0x58
    _Bool _shouldObscure;	// 89 = 0x59
}

- (void)_updateWithDisplacement:(double)arg1 velocity:(double)arg2;	// IMP=0x000000010000f268
- (_Bool)handleGestureType:(long long)arg1 state:(long long)arg2 location:(struct CGPoint)arg3 displacement:(double)arg4 velocity:(double)arg5;	// IMP=0x000000010000e990

@end

