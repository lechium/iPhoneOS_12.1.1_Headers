//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUISettings.h"

@class SBAnimationSettings;

@interface SBIconAnimationSettings : SBUISettings
{
    SBAnimationSettings *_centralAnimationSettings;	// 8 = 0x8
}

+ (id)settingsControllerModule;	// IMP=0x000000010013c2ec
@property(retain) SBAnimationSettings *centralAnimationSettings; // @synthesize centralAnimationSettings=_centralAnimationSettings;
- (void).cxx_destruct;	// IMP=0x000000010013c424
- (id)centralAnimationSettingsWithAdditionalDelays;	// IMP=0x000000010013c2a0
- (void)setDefaultValues;	// IMP=0x000000010013c10c

@end
