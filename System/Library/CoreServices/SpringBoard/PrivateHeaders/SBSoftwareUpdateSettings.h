//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUISettings.h"

@interface SBSoftwareUpdateSettings : SBUISettings
{
    unsigned long long _defaultRepopDuration;	// 8 = 0x8
    unsigned long long _repopStrategyTest;	// 16 = 0x10
}

+ (id)settingsControllerModule;	// IMP=0x0000000100409efc
@property(nonatomic) unsigned long long repopStrategyTest; // @synthesize repopStrategyTest=_repopStrategyTest;
@property(nonatomic) unsigned long long defaultRepopDuration; // @synthesize defaultRepopDuration=_defaultRepopDuration;
- (void)setDefaultValues;	// IMP=0x0000000100409ec0

@end

