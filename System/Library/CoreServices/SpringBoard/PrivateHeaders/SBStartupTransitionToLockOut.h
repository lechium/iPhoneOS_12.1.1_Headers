//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBBaseStartupTransition.h"

@class SBFUserAuthenticationController, SBLockScreenManager;

@interface SBStartupTransitionToLockOut : SBBaseStartupTransition
{
    SBLockScreenManager *_lockScreenManager;	// 8 = 0x8
    SBFUserAuthenticationController *_authController;	// 16 = 0x10
}

@property(readonly, nonatomic) SBLockScreenManager *lockScreenManager; // @synthesize lockScreenManager=_lockScreenManager;
- (void).cxx_destruct;	// IMP=0x0000000100366ca4
- (void)performTransitionWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010036689c
- (id)suggestedLockAnimationForTransitionRequest:(id)arg1;	// IMP=0x0000000100366894
- (id)initWithDestination:(unsigned long long)arg1 context:(id)arg2;	// IMP=0x00000001003667e0

@end
