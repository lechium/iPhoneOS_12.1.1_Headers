//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@interface DNDBuddyButton : UIButton
{
    CDUnknownBlockType _buttonBlock;	// 8 = 0x8
    unsigned long long _DNDButtonShape;	// 16 = 0x10
}

+ (id)_fontWithSizeCapForFont:(id)arg1;	// IMP=0x000000010000550c
+ (id)_fontForButtonShape:(unsigned long long)arg1;	// IMP=0x0000000100005478
+ (double)heightWithText:(id)arg1 maxWidth:(double)arg2 buttonShape:(unsigned long long)arg3;	// IMP=0x00000001000052f8
+ (id)buddyButtonWithShape:(unsigned long long)arg1;	// IMP=0x0000000100004e8c
@property(nonatomic) unsigned long long DNDButtonShape; // @synthesize DNDButtonShape=_DNDButtonShape;
@property(readonly, copy, nonatomic) CDUnknownBlockType buttonBlock; // @synthesize buttonBlock=_buttonBlock;
- (void).cxx_destruct;	// IMP=0x00000001000056b4
- (void)buttonTapped:(id)arg1;	// IMP=0x0000000100005608
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000100005218
- (struct CGRect)contentRectForBounds:(struct CGRect)arg1;	// IMP=0x000000010000520c
- (struct CGRect)backgroundRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000100005208
- (void)configureWithLabel:(id)arg1 action:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004ed8

@end

