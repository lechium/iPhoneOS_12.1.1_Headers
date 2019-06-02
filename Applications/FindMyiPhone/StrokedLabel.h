//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class UIColor;

@interface StrokedLabel : UILabel
{
    UIColor *_strokeColor;	// 8 = 0x8
    double _strokeWidth;	// 16 = 0x10
}

@property(nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
- (void).cxx_destruct;	// IMP=0x00000001000775c0
- (void)drawTextInRect:(struct CGRect)arg1;	// IMP=0x00000001000773cc

@end

