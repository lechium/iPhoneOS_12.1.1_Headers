//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface SeparatorLayer : UIView
{
    UIColor *_tintColor;	// 8 = 0x8
    unsigned long long _axis;	// 16 = 0x10
}

+ (id)_defaultSeparatorColor;	// IMP=0x00000001000090d4
+ (double)separatorHeight;	// IMP=0x000000010000909c
@property(nonatomic) unsigned long long axis; // @synthesize axis=_axis;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000100009468
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000010000944c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000093e0
@property(retain, nonatomic) UIColor *tintColor;
- (void)dealloc;	// IMP=0x00000001000091a0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000090f4

@end
