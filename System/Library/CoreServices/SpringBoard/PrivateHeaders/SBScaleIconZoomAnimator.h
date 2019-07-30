//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBIconZoomAnimator.h"

@class SBIcon, SBIconView, SBScaleZoomSettings, UIView;

@interface SBScaleIconZoomAnimator : SBIconZoomAnimator
{
    struct UIEdgeInsets _iconScootch;	// 8 = 0x8
    double _naturalVisualAltitude;	// 40 = 0x28
    UIView *_scalingView;	// 48 = 0x30
    SBIconView *_targetIconView;	// 56 = 0x38
    UIView *_targetIconPositioningView;	// 64 = 0x40
    SBIcon *_targetIcon;	// 72 = 0x48
    unsigned long long _crossfadeType;	// 80 = 0x50
    struct CGPoint _zoomScaleDimension;	// 88 = 0x58
}

@property(nonatomic) unsigned long long crossfadeType; // @synthesize crossfadeType=_crossfadeType;
@property(readonly, nonatomic) struct CGPoint zoomScaleDimension; // @synthesize zoomScaleDimension=_zoomScaleDimension;
@property(readonly, nonatomic) SBIcon *targetIcon; // @synthesize targetIcon=_targetIcon;
- (void).cxx_destruct;	// IMP=0x000000010016f980
- (void)_applyOuterFadeFraction:(double)arg1;	// IMP=0x000000010016f8ec
- (void)_applyZoomFraction:(double)arg1;	// IMP=0x000000010016f694
- (void)_setIconAlpha:(double)arg1;	// IMP=0x000000010016f624
- (double)_zoomedVisualAltitude;	// IMP=0x000000010016f61c
- (struct CGPoint)_zoomedIconCenter;	// IMP=0x000000010016f600
- (struct CGRect)_zoomedFrame;	// IMP=0x000000010016f58c
- (void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(_Bool)arg4 sharedCompletion:(CDUnknownBlockType)arg5;	// IMP=0x000000010016ee5c
- (void)hintToFraction:(double)arg1;	// IMP=0x000000010016ed8c
- (unsigned long long)_numberOfSignificantAnimations;	// IMP=0x000000010016ed54
- (void)_cleanupAnimation;	// IMP=0x000000010016ec0c
- (void)_setAnimationFraction:(double)arg1;	// IMP=0x000000010016eb98
- (void)_configureTargetIconPositioningView:(id)arg1;	// IMP=0x000000010016eb00
- (void)_prepareAnimation;	// IMP=0x000000010016df80
@property(readonly, nonatomic) SBIconView *referenceIconView;
@property(readonly, nonatomic) SBIconView *targetIconView;
- (void)_setZoomScale:(struct CGPoint)arg1;	// IMP=0x000000010016ddec
- (_Bool)_forceSquareZoomDimension;	// IMP=0x000000010016dde4
@property(readonly, nonatomic) _Bool fadesHomeScreen;
@property(readonly, nonatomic) UIView *targetIconContainerView;
@property(readonly, nonatomic) double maxHomeScreenZoomScale;
@property(readonly, nonatomic) double zoomScale;
- (id)initWithFolderController:(id)arg1 targetIcon:(id)arg2;	// IMP=0x000000010016dbc0

// Remaining properties
@property(retain, nonatomic) SBScaleZoomSettings *settings; // @dynamic settings;

@end

