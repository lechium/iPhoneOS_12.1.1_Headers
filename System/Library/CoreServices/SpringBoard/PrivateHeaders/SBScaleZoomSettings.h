//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBIconZoomSettings.h"

@class SBAnimationSettings;

@interface SBScaleZoomSettings : SBIconZoomSettings
{
    _Bool _crossfadeWithZoom;	// 48 = 0x30
    SBAnimationSettings *_outerFolderFadeSettings;	// 56 = 0x38
    SBAnimationSettings *_crossfadeSettings;	// 64 = 0x40
}

+ (id)settingsControllerModule;	// IMP=0x000000010013d75c
@property(retain) SBAnimationSettings *crossfadeSettings; // @synthesize crossfadeSettings=_crossfadeSettings;
@property _Bool crossfadeWithZoom; // @synthesize crossfadeWithZoom=_crossfadeWithZoom;
@property(retain) SBAnimationSettings *outerFolderFadeSettings; // @synthesize outerFolderFadeSettings=_outerFolderFadeSettings;
- (void).cxx_destruct;	// IMP=0x000000010013daf4
- (id)effectiveCrossfadeAnimationSettings;	// IMP=0x000000010013da30
- (void)setDefaultValues;	// IMP=0x000000010013d708

@end
