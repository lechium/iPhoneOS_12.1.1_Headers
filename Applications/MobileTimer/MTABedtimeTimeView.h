//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MTUIDigitalClockLabel, NSLayoutConstraint, UIImage, UIImageView, UILabel;

@interface MTABedtimeTimeView : UIView
{
    _Bool _enabled;	// 8 = 0x8
    unsigned long long _style;	// 16 = 0x10
    MTUIDigitalClockLabel *_timeLabel;	// 24 = 0x18
    UIImageView *_iconView;	// 32 = 0x20
    UILabel *_eventLabel;	// 40 = 0x28
    NSLayoutConstraint *_eventBaselineConstraint;	// 48 = 0x30
    NSLayoutConstraint *_timeBaselineConstraint;	// 56 = 0x38
    unsigned long long _event;	// 64 = 0x40
    UIImage *_untintedImage;	// 72 = 0x48
}

@property(retain, nonatomic) UIImage *untintedImage; // @synthesize untintedImage=_untintedImage;
@property(nonatomic) unsigned long long event; // @synthesize event=_event;
@property(retain, nonatomic) NSLayoutConstraint *timeBaselineConstraint; // @synthesize timeBaselineConstraint=_timeBaselineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *eventBaselineConstraint; // @synthesize eventBaselineConstraint=_eventBaselineConstraint;
@property(retain, nonatomic) UILabel *eventLabel; // @synthesize eventLabel=_eventLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) MTUIDigitalClockLabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;	// IMP=0x0000000100049e04
- (void)_updateColors;	// IMP=0x0000000100049afc
- (id)viewForLastBaselineLayout;	// IMP=0x0000000100049aa8
- (void)setHour:(unsigned long long)arg1 minute:(unsigned long long)arg2;	// IMP=0x0000000100049a50
- (void)updateConstraints;	// IMP=0x00000001000496e4
- (void)setupConstraints;	// IMP=0x0000000100048ce0
- (id)initWithTimeEvent:(unsigned long long)arg1;	// IMP=0x0000000100048890

@end
