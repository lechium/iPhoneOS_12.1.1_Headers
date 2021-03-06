//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MTABedtimeGraphData, MTAlarm, NSArray, NSLayoutConstraint, UILayoutGuide, UITapGestureRecognizer;

@interface MTABedtimeGraphView : UIView
{
    UILayoutGuide *_axesLayoutGuide;	// 8 = 0x8
    MTAlarm *_sleepAlarm;	// 16 = 0x10
    NSArray *_sleepData;	// 24 = 0x18
    MTABedtimeGraphData *_graphData;	// 32 = 0x20
    NSLayoutConstraint *_topAxisConstraint;	// 40 = 0x28
    NSLayoutConstraint *_bottomAxisConstraint;	// 48 = 0x30
    NSArray *_dayLabels;	// 56 = 0x38
    NSArray *_dayCenterXConstraints;	// 64 = 0x40
    NSLayoutConstraint *_labelBaselineConstraint;	// 72 = 0x48
    UITapGestureRecognizer *_tapRecognizer;	// 80 = 0x50
}

@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(retain, nonatomic) NSLayoutConstraint *labelBaselineConstraint; // @synthesize labelBaselineConstraint=_labelBaselineConstraint;
@property(retain, nonatomic) NSArray *dayCenterXConstraints; // @synthesize dayCenterXConstraints=_dayCenterXConstraints;
@property(retain, nonatomic) NSArray *dayLabels; // @synthesize dayLabels=_dayLabels;
@property(retain, nonatomic) NSLayoutConstraint *bottomAxisConstraint; // @synthesize bottomAxisConstraint=_bottomAxisConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topAxisConstraint; // @synthesize topAxisConstraint=_topAxisConstraint;
@property(retain, nonatomic) MTABedtimeGraphData *graphData; // @synthesize graphData=_graphData;
@property(retain, nonatomic) NSArray *sleepData; // @synthesize sleepData=_sleepData;
@property(copy, nonatomic) MTAlarm *sleepAlarm; // @synthesize sleepAlarm=_sleepAlarm;
@property(retain, nonatomic) UILayoutGuide *axesLayoutGuide; // @synthesize axesLayoutGuide=_axesLayoutGuide;
- (void).cxx_destruct;	// IMP=0x000000010004be14
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x000000010004b23c
- (double)barSpacing;	// IMP=0x000000010004affc
- (void)processSleepData;	// IMP=0x000000010004ae00
- (void)graphTapped:(id)arg1;	// IMP=0x000000010004ad0c
- (id)viewForLastBaselineLayout;	// IMP=0x000000010004abd0
- (void)layoutSubviews;	// IMP=0x000000010004aabc
- (void)setupConstraints;	// IMP=0x000000010004a400
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100049e94

@end

