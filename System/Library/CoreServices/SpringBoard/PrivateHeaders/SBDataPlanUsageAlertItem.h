//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDataPlanAccountAlertItem.h"

@class NSNumber;

@interface SBDataPlanUsageAlertItem : SBDataPlanAccountAlertItem
{
    NSNumber *_remainingPortion;	// 16 = 0x10
}

@property(retain, nonatomic) NSNumber *remainingPortion; // @synthesize remainingPortion=_remainingPortion;
- (void).cxx_destruct;	// IMP=0x0000000100212a84
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;	// IMP=0x00000001002127f0
- (id)initWithAccountURL:(id)arg1 usage:(id)arg2;	// IMP=0x0000000100212754

@end

