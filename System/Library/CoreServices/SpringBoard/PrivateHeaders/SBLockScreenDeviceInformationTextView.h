//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBUILegibility.h"

@class NSArray, NSString, SBUILegibilityLabel, _UILegibilitySettings;

@interface SBLockScreenDeviceInformationTextView : UIView <SBUILegibility>
{
    _UILegibilitySettings *_legibilitySettings;	// 8 = 0x8
    double _strength;	// 16 = 0x10
    UIView *_containerView;	// 24 = 0x18
    NSString *_supervisionText;	// 32 = 0x20
    SBUILegibilityLabel *_supervisionLabel;	// 40 = 0x28
    NSArray *_deviceInformationText;	// 48 = 0x30
    SBUILegibilityLabel *_deviceInformationLabel;	// 56 = 0x38
}

@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(nonatomic) double strength; // @synthesize strength=_strength;
@property(copy, nonatomic) NSArray *deviceInformationText; // @synthesize deviceInformationText=_deviceInformationText;
@property(copy, nonatomic) NSString *supervisionText; // @synthesize supervisionText=_supervisionText;
- (void).cxx_destruct;	// IMP=0x00000001003a6c28
- (double)_deviceInformationParagraphSpacing;	// IMP=0x00000001003a6b0c
- (double)_deviceInformationLabelFontLeading;	// IMP=0x00000001003a6b04
- (void)_updateDeviceInformationLabel;	// IMP=0x00000001003a6890
- (void)_updateSupervisionLabel;	// IMP=0x00000001003a6644
- (id)_labelFont;	// IMP=0x00000001003a662c
- (void)layoutSubviews;	// IMP=0x00000001003a63dc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001003a6048

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

