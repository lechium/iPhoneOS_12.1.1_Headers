//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBCrossfadeZoomSettings.h"

@class SBAnimationSettings;

@interface SBCrossfadeAppTransitionSettings : SBCrossfadeZoomSettings
{
    SBAnimationSettings *_iconBlurSettings;	// 88 = 0x58
    SBAnimationSettings *_appSnapshotBlurSettings;	// 96 = 0x60
    SBAnimationSettings *_appSnapshotCornerRadiusSettings;	// 104 = 0x68
}

+ (id)settingsControllerModule;	// IMP=0x000000010013f18c
@property(retain) SBAnimationSettings *appSnapshotCornerRadiusSettings; // @synthesize appSnapshotCornerRadiusSettings=_appSnapshotCornerRadiusSettings;
@property(retain) SBAnimationSettings *appSnapshotBlurSettings; // @synthesize appSnapshotBlurSettings=_appSnapshotBlurSettings;
@property(retain) SBAnimationSettings *iconBlurSettings; // @synthesize iconBlurSettings=_iconBlurSettings;
- (void).cxx_destruct;	// IMP=0x000000010013f430
- (void)setDefaultValues;	// IMP=0x000000010013f124

@end

