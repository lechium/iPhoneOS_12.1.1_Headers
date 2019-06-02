//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISlider.h"

#import "MPDetailScrubControllerDelegate.h"
#import "MPDetailedScrubbing.h"

@class MPDetailScrubController, NSString, UIImageView;

@interface VMDetailSlider : UISlider <MPDetailedScrubbing, MPDetailScrubControllerDelegate>
{
    _Bool _accessibilityConstraintsEnabled;	// 8 = 0x8
    _Bool _scrubbing;	// 9 = 0x9
    id <VMDetailSliderDelegate> _delegate;	// 16 = 0x10
    double _maximumTime;	// 24 = 0x18
    double _elapsedTime;	// 32 = 0x20
    double _minimumTime;	// 40 = 0x28
    UIImageView *_thumbImageView;	// 48 = 0x30
    MPDetailScrubController *_detailScrubController;	// 56 = 0x38
}

@property(readonly, nonatomic) MPDetailScrubController *detailScrubController; // @synthesize detailScrubController=_detailScrubController;
@property(readonly, nonatomic, getter=isScrubbing) _Bool scrubbing; // @synthesize scrubbing=_scrubbing;
@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(readonly, nonatomic) double minimumTime; // @synthesize minimumTime=_minimumTime;
@property(nonatomic, getter=isAccessibilityConstraintsEnabled) _Bool accessibilityConstraintsEnabled; // @synthesize accessibilityConstraintsEnabled=_accessibilityConstraintsEnabled;
@property(nonatomic) double elapsedTime; // @synthesize elapsedTime=_elapsedTime;
@property(nonatomic) double maximumTime; // @synthesize maximumTime=_maximumTime;
@property(nonatomic) __weak id <VMDetailSliderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001000190a8
- (void)tintColorDidChange;	// IMP=0x0000000100018f90
- (void)updateMinimumTrackImage;	// IMP=0x0000000100018e10
- (void)updateMaximumTrackImage;	// IMP=0x0000000100018c90
- (void)updateTrackImages;	// IMP=0x0000000100018c5c
- (void)updateThumbImage;	// IMP=0x0000000100018ae4
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100018990
- (void)detailScrubController:(id)arg1 didChangeValue:(float)arg2;	// IMP=0x00000001000188b4
- (struct CGRect)thumbHitRect;	// IMP=0x00000001000187d8
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;	// IMP=0x0000000100018710
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000100018670
- (void)setValue:(float)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100018630
- (id)createThumbView;	// IMP=0x00000001000185bc
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000100018424
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000100018368
- (void)cancelTrackingWithEvent:(id)arg1;	// IMP=0x00000001000181f4
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000100018074
- (void)setElapsedTime:(double)arg1 animated:(_Bool)arg2 force:(_Bool)arg3;	// IMP=0x0000000100017f70
- (void)setElapsedTime:(double)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100017f60
- (void)commonInit;	// IMP=0x0000000100017d80
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100017d28
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100017cd0
- (id)init;	// IMP=0x0000000100017cb4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

