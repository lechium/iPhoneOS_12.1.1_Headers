//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBScaleZoomSettings.h"

@class SBAnimationSettings;

@interface SBCrossfadeZoomSettings : SBScaleZoomSettings
{
    _Bool _morphWithZoom;	// 72 = 0x48
    SBAnimationSettings *_morphSettings;	// 80 = 0x50
}

+ (id)settingsControllerModule;	// IMP=0x000000010013db88
@property(retain) SBAnimationSettings *morphSettings; // @synthesize morphSettings=_morphSettings;
@property _Bool morphWithZoom; // @synthesize morphWithZoom=_morphWithZoom;
- (void).cxx_destruct;	// IMP=0x000000010013df4c
- (id)effectiveMorphAnimationSettings;	// IMP=0x000000010013dea4
- (void)setDefaultValues;	// IMP=0x000000010013db34

@end

