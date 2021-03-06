//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "UIGestureRecognizerDelegate.h"

@class CADisplayLink, NSString, UIPanGestureRecognizer;

@interface PHVideoCallVideoGroupView : UIControl <UIGestureRecognizerDelegate>
{
    CADisplayLink *_displayLink;	// 8 = 0x8
    struct CGPoint _velocity;	// 16 = 0x10
    struct CGPoint _target;	// 32 = 0x20
    struct CGRect _cornerLocationsRect;	// 48 = 0x30
    _Bool _startedThrowAnimation;	// 80 = 0x50
    UIPanGestureRecognizer *_panGestureRecognizer;	// 88 = 0x58
    id <PHVideoCallVideoGroupViewDelegate> _delegate;	// 96 = 0x60
    long long _corner;	// 104 = 0x68
}

@property(nonatomic) long long corner; // @synthesize corner=_corner;
@property(nonatomic) __weak id <PHVideoCallVideoGroupViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGRect cornerLocationsRect; // @synthesize cornerLocationsRect=_cornerLocationsRect;
- (void).cxx_destruct;	// IMP=0x000000010003f578
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x000000010003f514
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x000000010003f50c
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000010003f504
- (void)cancelThrowAnimation;	// IMP=0x000000010003f488
- (void)finishedThrowAnimation;	// IMP=0x000000010003f370
- (void)updateThrowAnimation:(id)arg1;	// IMP=0x000000010003f1c8
- (void)startThrowAnimation;	// IMP=0x000000010003f110
- (double)_gridViewRubberBandValueForValue:(double)arg1 target:(double)arg2 timeInterval:(double)arg3 velocity:(double *)arg4;	// IMP=0x000000010003f0cc
- (void)handlePanDetected:(id)arg1;	// IMP=0x000000010003ee64
- (void)handlePanGestureFinished:(id)arg1;	// IMP=0x000000010003ec8c
- (void)addPanningGestureRecognizer;	// IMP=0x000000010003ec08
- (void)refreshPositionInCorner;	// IMP=0x000000010003ebb4
- (struct CGPoint)centerPointForCurrentVideoGroupCorner;	// IMP=0x000000010003ea78
- (void)setTransformForNewCenter:(struct CGPoint)arg1;	// IMP=0x000000010003e888
- (struct CGPoint)transformedCenter;	// IMP=0x000000010003e7f4
- (void)dealloc;	// IMP=0x000000010003e784
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010003e6ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

