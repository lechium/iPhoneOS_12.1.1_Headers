//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HKTitledBuddyViewController.h"

#import "WDUserActivityResponder.h"

@class NSString, WDProfile, _HKMedicalIDData;

@interface WDBuddyFlowOrganDonationViewController : HKTitledBuddyViewController <WDUserActivityResponder>
{
    WDProfile *_profile;	// 8 = 0x8
    _HKMedicalIDData *_medicalIDData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100053b98
- (id)applyTransitionActivity:(id)arg1;	// IMP=0x0000000100053b94
- (void)applyChangeActivity:(id)arg1;	// IMP=0x0000000100053b90
- (void)buttonAtIndexTapped:(long long)arg1;	// IMP=0x0000000100053b4c
- (id)bottomAnchoredButtons;	// IMP=0x00000001000539cc
- (void)linkButtonTapped:(id)arg1;	// IMP=0x00000001000539bc
- (id)linkButtonTitle;	// IMP=0x0000000100053958
- (id)bodyString;	// IMP=0x00000001000538f4
- (id)titleString;	// IMP=0x0000000100053890
- (id)titleImage;	// IMP=0x000000010005382c
- (void)_advanceToNextStep;	// IMP=0x00000001000537a4
- (void)learnMoreButtonTapped:(id)arg1;	// IMP=0x0000000100053790
- (void)notNowButtonTapped:(id)arg1;	// IMP=0x0000000100053784
- (void)alreadyButtonTapped:(id)arg1;	// IMP=0x0000000100053568
- (void)signupButtonTapped:(id)arg1;	// IMP=0x0000000100053350
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000532d0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100053100
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000530cc
- (id)initWithProfile:(id)arg1 medicalIDData:(id)arg2;	// IMP=0x0000000100053018

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

