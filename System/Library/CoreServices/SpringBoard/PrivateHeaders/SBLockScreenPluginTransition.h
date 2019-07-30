//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBLockScreenPlugin, SBLockScreenViewControllerBase;

@interface SBLockScreenPluginTransition : NSObject
{
    SBLockScreenPlugin *_fromPlugin;	// 8 = 0x8
    SBLockScreenPlugin *_toPlugin;	// 16 = 0x10
    SBLockScreenViewControllerBase *_viewController;	// 24 = 0x18
}

+ (id)transitionFromPlugin:(id)arg1 toPlugin:(id)arg2 viewController:(id)arg3;	// IMP=0x000000010007f4c0
@property(readonly, nonatomic) SBLockScreenViewControllerBase *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) SBLockScreenPlugin *toPlugin; // @synthesize toPlugin=_toPlugin;
@property(readonly, nonatomic) SBLockScreenPlugin *fromPlugin; // @synthesize fromPlugin=_fromPlugin;
- (void).cxx_destruct;	// IMP=0x000000010007fdcc
- (void)_addToView;	// IMP=0x000000010007fb08
- (void)_removeFromView;	// IMP=0x000000010007f8ec
- (void)_removeViewFromHierarchy:(id)arg1;	// IMP=0x000000010007f890
- (void)beginTransition;	// IMP=0x000000010007f668
- (id)initWithFromPlugin:(id)arg1 toPlugin:(id)arg2 viewController:(id)arg3;	// IMP=0x000000010007f564

@end

