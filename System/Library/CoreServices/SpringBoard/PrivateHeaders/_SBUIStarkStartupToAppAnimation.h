//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIStarkStartupAnimation.h"

@class FBWindowContextHostManager, UIStatusBar;

@interface _SBUIStarkStartupToAppAnimation : SBUIStarkStartupAnimation
{
    _Bool _finished;	// 31 = 0x1f
    UIStatusBar *_fakeStatusBar;	// 32 = 0x20
    FBWindowContextHostManager *_contextHostManager;	// 40 = 0x28
}

@property(retain, nonatomic) FBWindowContextHostManager *contextHostManager; // @synthesize contextHostManager=_contextHostManager;
- (void).cxx_destruct;	// IMP=0x00000001001ea044
- (id)_zoomInFactory;	// IMP=0x00000001001e9fd4
- (void)_cleanupAnimation;	// IMP=0x00000001001e9ea4
- (void)_startAnimation;	// IMP=0x00000001001e9ac8
- (id)animationSettings;	// IMP=0x00000001001e9a04
- (void)_finishedAnimation:(_Bool)arg1;	// IMP=0x00000001001e99cc
- (void)_prepareAnimation;	// IMP=0x00000001001e974c
- (id)_createViewToAnimate;	// IMP=0x00000001001e96bc

@end

