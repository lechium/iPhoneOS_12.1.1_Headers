//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WDInteractiveChartViewController.h"

@class HKValueRange;

@interface WDChartExperimentsTachogram : WDInteractiveChartViewController
{
    HKValueRange *_computedAxisRange;	// 8 = 0x8
    HKValueRange *_requestedVisibleRange;	// 16 = 0x10
}

@property(readonly, nonatomic) HKValueRange *requestedVisibleRange; // @synthesize requestedVisibleRange=_requestedVisibleRange;
@property(readonly, nonatomic) HKValueRange *computedAxisRange; // @synthesize computedAxisRange=_computedAxisRange;
- (void).cxx_destruct;	// IMP=0x0000000100098ca4
- (struct CGSize)extentOfData:(id)arg1;	// IMP=0x0000000100098a9c
- (id)tachogramSeriesWithData:(id)arg1 unit:(id)arg2 maximumY:(double)arg3 axis:(id)arg4 irregularBeatStyle:(_Bool)arg5;	// IMP=0x0000000100098330
- (void)viewDidLoad;	// IMP=0x00000001000980fc
- (id)initWithIrregularBeatData:(id)arg1 normalData:(id)arg2 visibleRange:(id)arg3 profile:(id)arg4;	// IMP=0x0000000100097d10

@end
