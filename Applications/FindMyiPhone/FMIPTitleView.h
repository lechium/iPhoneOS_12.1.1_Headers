//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAAnimation, NSString, UIColor, UILabel;

@interface FMIPTitleView : UIView
{
    UILabel *_titleLabel;	// 8 = 0x8
    NSString *_primarySubtitleText;	// 16 = 0x10
    NSString *_secondarySubtitleText;	// 24 = 0x18
    double _animationPeriod;	// 32 = 0x20
    UILabel *_primarySubtitleLabel;	// 40 = 0x28
    UILabel *_secondarySubtitleLabel;	// 48 = 0x30
    CAAnimation *_primarySubtitleAnimation;	// 56 = 0x38
    CAAnimation *_secondarySubtitleAnimation;	// 64 = 0x40
}

@property(retain, nonatomic) CAAnimation *secondarySubtitleAnimation; // @synthesize secondarySubtitleAnimation=_secondarySubtitleAnimation;
@property(retain, nonatomic) CAAnimation *primarySubtitleAnimation; // @synthesize primarySubtitleAnimation=_primarySubtitleAnimation;
@property(retain, nonatomic) UILabel *secondarySubtitleLabel; // @synthesize secondarySubtitleLabel=_secondarySubtitleLabel;
@property(retain, nonatomic) UILabel *primarySubtitleLabel; // @synthesize primarySubtitleLabel=_primarySubtitleLabel;
@property(nonatomic) double animationPeriod; // @synthesize animationPeriod=_animationPeriod;
@property(copy, nonatomic) NSString *secondarySubtitleText; // @synthesize secondarySubtitleText=_secondarySubtitleText;
@property(copy, nonatomic) NSString *primarySubtitleText; // @synthesize primarySubtitleText=_primarySubtitleText;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;	// IMP=0x0000000100095158
- (void)stopAnimation;	// IMP=0x0000000100094f40
- (void)startAnimation;	// IMP=0x0000000100094cf8
- (id)pulseAlphaAnimationWithTimeOffset:(double)arg1;	// IMP=0x000000010009480c
@property(retain, nonatomic) UIColor *secondarySubtitleColor; // @dynamic secondarySubtitleColor;
@property(retain, nonatomic) UIColor *primarySubtitleColor; // @dynamic primarySubtitleColor;
- (void)_commonConfiguration;	// IMP=0x0000000100094500
- (void)willMoveToWindow:(id)arg1;	// IMP=0x000000010009449c
- (void)awakeFromNib;	// IMP=0x000000010009444c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000943f4

@end

