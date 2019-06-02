//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHHandsetDialerLCDView.h"

@class PHTextCycleLabel;

@interface PHEmergencyHandsetDialerLCDView : PHHandsetDialerLCDView
{
    PHTextCycleLabel *_emergencyTitleLabel;	// 8 = 0x8
}

@property(readonly) PHTextCycleLabel *emergencyTitleLabel; // @synthesize emergencyTitleLabel=_emergencyTitleLabel;
- (void).cxx_destruct;	// IMP=0x00000001000914c8
- (_Bool)shrinkLabelWhenNumbersEntered;	// IMP=0x000000010009148c
- (double)_emergencyDialerFontSize;	// IMP=0x0000000100091444
- (void)deleteCharacter;	// IMP=0x00000001000913f4
- (void)setText:(id)arg1 needsFormat:(_Bool)arg2;	// IMP=0x00000001000913a4
- (void)setText:(id)arg1 needsFormat:(_Bool)arg2 name:(id)arg3 label:(id)arg4;	// IMP=0x0000000100091300
- (void)_updateEmergencyLabel;	// IMP=0x00000001000910bc
- (_Bool)textFieldShouldBeginEditing:(id)arg1;	// IMP=0x00000001000910b4
- (id)lcdColor;	// IMP=0x0000000100090ff8
- (void)_applyLayoutConstraints;	// IMP=0x0000000100090ba0
- (void)updateNumberLabelHorizontalConstraints;	// IMP=0x0000000100090b9c
- (void)applyLayoutConstraints;	// IMP=0x0000000100090b98
- (id)newAddContactButton;	// IMP=0x0000000100090b90
- (id)initWithFrame:(struct CGRect)arg1 forDialerType:(int)arg2;	// IMP=0x00000001000907b0

@end
