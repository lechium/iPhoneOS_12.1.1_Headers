//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface MTAAnalogStopwatchHandView : UIView
{
    _Bool _hasTail;	// 8 = 0x8
    double _angle;	// 16 = 0x10
    double _width;	// 24 = 0x18
    UIColor *_color;	// 32 = 0x20
    unsigned long long _anchorStyle;	// 40 = 0x28
}

@property(nonatomic) unsigned long long anchorStyle; // @synthesize anchorStyle=_anchorStyle;
@property(nonatomic) _Bool hasTail; // @synthesize hasTail=_hasTail;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) double angle; // @synthesize angle=_angle;
- (void).cxx_destruct;	// IMP=0x000000010004887c
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000001000484a0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100048304

@end

