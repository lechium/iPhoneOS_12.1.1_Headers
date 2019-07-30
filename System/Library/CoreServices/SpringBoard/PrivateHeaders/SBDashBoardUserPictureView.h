//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardViewBase.h"

#import "SBUILegibility.h"

@class CNContact, NSString, _UILegibilitySettings, _UILegibilityView;

@interface SBDashBoardUserPictureView : SBDashBoardViewBase <SBUILegibility>
{
    CNContact *_contact;	// 8 = 0x8
    _UILegibilityView *_monogramLegibilityView;	// 16 = 0x10
    double _legibilityStrength;	// 24 = 0x18
    _UILegibilitySettings *_legibilitySettings;	// 32 = 0x20
    double _diameter;	// 40 = 0x28
}

+ (id)_monogrammerForLegibilitySettings:(id)arg1 diameter:(double)arg2;	// IMP=0x000000010015b828
@property(nonatomic) double diameter; // @synthesize diameter=_diameter;
@property(nonatomic) double strength; // @synthesize strength=_legibilityStrength;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(copy, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;	// IMP=0x000000010015ba68
- (void)_regenerateImage;	// IMP=0x000000010015b89c
- (id)presentationRegions;	// IMP=0x000000010015b638
- (void)layoutSubviews;	// IMP=0x000000010015b584
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010015b49c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

