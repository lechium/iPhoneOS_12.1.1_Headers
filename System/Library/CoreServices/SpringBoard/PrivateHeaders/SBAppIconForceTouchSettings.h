//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUISettings.h"

@interface SBAppIconForceTouchSettings : SBUISettings
{
    _Bool _enableUIPreviewInteractionAnimations;	// 8 = 0x8
    float _animationDurationMultiplier;	// 12 = 0xc
}

+ (id)settingsControllerModule;	// IMP=0x000000010023978c
+ (id)defaults;	// IMP=0x0000000100239678
@property(nonatomic) _Bool enableUIPreviewInteractionAnimations; // @synthesize enableUIPreviewInteractionAnimations=_enableUIPreviewInteractionAnimations;
@property(nonatomic) float animationDurationMultiplier; // @synthesize animationDurationMultiplier=_animationDurationMultiplier;
- (void)setDefaultValues;	// IMP=0x00000001002396f8

@end

