//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUISettings.h"

@class NSString;

@interface SBHarmonySettings : SBUISettings
{
    _Bool _whitePointAdaptationInteractiveUpdateEnabled;	// 8 = 0x8
    float _whitePointAdaptationStrengthStandard;	// 12 = 0xc
    float _whitePointAdaptationStrengthReading;	// 16 = 0x10
    float _whitePointAdaptationStrengthPhoto;	// 20 = 0x14
    float _whitePointAdaptationStrengthVideo;	// 24 = 0x18
    float _whitePointAdaptationStrengthGame;	// 28 = 0x1c
    float _whitePointAdaptationUpdateDefaultDuration;	// 32 = 0x20
    NSString *_whitePointAdaptationInteractiveUpdateTimingFunctionName;	// 40 = 0x28
}

+ (id)settingsControllerModule;	// IMP=0x00000001001e0c78
@property(copy, nonatomic) NSString *whitePointAdaptationInteractiveUpdateTimingFunctionName; // @synthesize whitePointAdaptationInteractiveUpdateTimingFunctionName=_whitePointAdaptationInteractiveUpdateTimingFunctionName;
@property(nonatomic) _Bool whitePointAdaptationInteractiveUpdateEnabled; // @synthesize whitePointAdaptationInteractiveUpdateEnabled=_whitePointAdaptationInteractiveUpdateEnabled;
@property(nonatomic) float whitePointAdaptationUpdateDefaultDuration; // @synthesize whitePointAdaptationUpdateDefaultDuration=_whitePointAdaptationUpdateDefaultDuration;
@property(nonatomic) float whitePointAdaptationStrengthGame; // @synthesize whitePointAdaptationStrengthGame=_whitePointAdaptationStrengthGame;
@property(nonatomic) float whitePointAdaptationStrengthVideo; // @synthesize whitePointAdaptationStrengthVideo=_whitePointAdaptationStrengthVideo;
@property(nonatomic) float whitePointAdaptationStrengthPhoto; // @synthesize whitePointAdaptationStrengthPhoto=_whitePointAdaptationStrengthPhoto;
@property(nonatomic) float whitePointAdaptationStrengthReading; // @synthesize whitePointAdaptationStrengthReading=_whitePointAdaptationStrengthReading;
@property(nonatomic) float whitePointAdaptationStrengthStandard; // @synthesize whitePointAdaptationStrengthStandard=_whitePointAdaptationStrengthStandard;
- (void).cxx_destruct;	// IMP=0x00000001001e18b0
- (void)setDefaultValues;	// IMP=0x00000001001e0b48

@end
