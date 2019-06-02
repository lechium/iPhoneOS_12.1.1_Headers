//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HKClinicalAuthorizationSettingsViewController.h"

#import "WDUserActivityResponder.h"

@class NSString, WDProfile;

@interface WDClinicalAuthorizationSettingsViewController : HKClinicalAuthorizationSettingsViewController <WDUserActivityResponder>
{
    WDProfile *_profile;	// 8 = 0x8
}

+ (id)contextUsingProfile:(id)arg1 source:(id)arg2;	// IMP=0x0000000100052d64
@property(readonly, nonatomic) __weak WDProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;	// IMP=0x0000000100053008
- (id)applyTransitionActivity:(id)arg1;	// IMP=0x0000000100052fe4
- (void)applyChangeActivity:(id)arg1;	// IMP=0x0000000100052fe0
- (id)initWithProfile:(id)arg1 source:(id)arg2;	// IMP=0x0000000100052c84
- (id)initWithContext:(id)arg1 style:(long long)arg2;	// IMP=0x0000000100052bec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

