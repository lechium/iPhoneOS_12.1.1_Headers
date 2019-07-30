//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBFTouchPassThroughView.h"

@class SBAnimatableCorneredView, SBIconImageView, UIView;

@interface SBIconImageCrossfadeView : SBFTouchPassThroughView
{
    SBAnimatableCorneredView *_containerView;	// 8 = 0x8
    SBIconImageView *_iconImageView;	// 16 = 0x10
    UIView *_crossfadeView;	// 24 = 0x18
    double _crossfadeFraction;	// 32 = 0x20
    double _containerScaleX;	// 40 = 0x28
    double _containerScaleY;	// 48 = 0x30
    _Bool _masksCorners;	// 56 = 0x38
    _Bool _performsTrueCrossfade;	// 57 = 0x39
    _Bool _cornerRadiusEnabled;	// 58 = 0x3a
    struct CGPoint _stretchAnchorPoint;	// 64 = 0x40
}

@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) _Bool cornerRadiusEnabled; // @synthesize cornerRadiusEnabled=_cornerRadiusEnabled;
@property(nonatomic) struct CGPoint stretchAnchorPoint; // @synthesize stretchAnchorPoint=_stretchAnchorPoint;
@property(nonatomic) _Bool performsTrueCrossfade; // @synthesize performsTrueCrossfade=_performsTrueCrossfade;
@property(nonatomic) _Bool masksCorners; // @synthesize masksCorners=_masksCorners;
- (void).cxx_destruct;	// IMP=0x00000001000dbba4
@property(readonly, nonatomic) UIView *scalingView;
@property(readonly, nonatomic) UIView *crossfadeView;
@property(readonly, nonatomic) SBIconImageView *iconImageView;
- (void)applyCornerRadius:(double)arg1;	// IMP=0x00000001000dbaa0
- (void)_updateCornerMask;	// IMP=0x00000001000db93c
- (void)cleanup;	// IMP=0x00000001000db88c
- (void)setMorphFraction:(double)arg1 totalScale:(double)arg2;	// IMP=0x00000001000db774
- (void)setAppSnapshotCornerRadiusFraction:(double)arg1;	// IMP=0x00000001000db770
- (void)setAppSnapshotBlurFraction:(double)arg1;	// IMP=0x00000001000db76c
- (void)setIconBlurFraction:(double)arg1;	// IMP=0x00000001000db768
- (void)setCrossfadeFraction:(double)arg1;	// IMP=0x00000001000db688
- (void)layoutSubviews;	// IMP=0x00000001000db410
- (void)prepareGeometry;	// IMP=0x00000001000db318
- (id)initWithImageView:(id)arg1 crossfadeView:(id)arg2;	// IMP=0x00000001000db1dc

@end

