//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

@class _UILegibilitySettings, _UILegibilityView;

@interface SBFolderTitleTextField : UITextField
{
    _Bool _showingEditUI;	// 8 = 0x8
    _UILegibilityView *_legibilityView;	// 16 = 0x10
    _Bool _allowsEditing;	// 24 = 0x18
    _UILegibilitySettings *_legibilitySettings;	// 32 = 0x20
}

+ (id)_clearButtonImage;	// IMP=0x000000010037ae18
+ (id)_editBackgroundImage;	// IMP=0x000000010037adfc
+ (void)warmupIfNecessary;	// IMP=0x000000010037adb8
@property(readonly, nonatomic) _Bool showingEditUI; // @synthesize showingEditUI=_showingEditUI;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) _Bool allowsEditing; // @synthesize allowsEditing=_allowsEditing;
- (void).cxx_destruct;	// IMP=0x000000010037be24
- (id)_clearButtonImage;	// IMP=0x000000010037bd20
- (id)_backgroundImage;	// IMP=0x000000010037bc48
- (void)_updateLegibility;	// IMP=0x000000010037bb10
- (double)_legibilityStrength;	// IMP=0x000000010037ba48
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;	// IMP=0x000000010037b8ec
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;	// IMP=0x000000010037b8e0
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;	// IMP=0x000000010037b8d4
- (struct CGRect)_textRectForBounds:(struct CGRect)arg1;	// IMP=0x000000010037b70c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010037b630
@property(nonatomic) double fontSize;
- (void)layoutSubviews;	// IMP=0x000000010037b4fc
- (void)setText:(id)arg1;	// IMP=0x000000010037b49c
- (void)_updateLegibilityView;	// IMP=0x000000010037b3a4
- (void)setShowsEditUI:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000010037b058
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010037ae34

@end
