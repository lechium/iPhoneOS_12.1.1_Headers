//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WDInteractiveChartViewController.h"

#import "HKAxisAccessoryViewDelegate.h"
#import "WDActivityBarSeriesDelegate.h"
#import "WDInteractiveChartViewObserver.h"

@class HKActivitySummaryDataProvider, NSMapTable, NSString, WDActivitySummaryAnnotationViewDataSource;

@interface WDInteractiveChartActivityController : WDInteractiveChartViewController <WDInteractiveChartViewObserver, WDActivityBarSeriesDelegate, HKAxisAccessoryViewDelegate>
{
    NSMapTable *_yAxisAccessoryViewsByGraphSeries;	// 8 = 0x8
    HKActivitySummaryDataProvider *_activityDataProvider;	// 16 = 0x10
    WDActivitySummaryAnnotationViewDataSource *_activityAnnotationDataSource;	// 24 = 0x18
    long long _currentTimeScope;	// 32 = 0x20
}

@property(nonatomic) long long currentTimeScope; // @synthesize currentTimeScope=_currentTimeScope;
@property(retain, nonatomic) WDActivitySummaryAnnotationViewDataSource *activityAnnotationDataSource; // @synthesize activityAnnotationDataSource=_activityAnnotationDataSource;
@property(retain, nonatomic) HKActivitySummaryDataProvider *activityDataProvider; // @synthesize activityDataProvider=_activityDataProvider;
@property(retain, nonatomic) NSMapTable *yAxisAccessoryViewsByGraphSeries; // @synthesize yAxisAccessoryViewsByGraphSeries=_yAxisAccessoryViewsByGraphSeries;
- (void).cxx_destruct;	// IMP=0x000000010004eec0
- (id)_dayActivitySummaryForDateRange:(id)arg1;	// IMP=0x000000010004eb74
- (void)_configureSingleRingView:(id)arg1 withActivitySummary:(id)arg2;	// IMP=0x000000010004ea08
- (void)accessoryView:(id)arg1 forSeries:(id)arg2 hasUpdateWithNewData:(_Bool)arg3;	// IMP=0x000000010004e8d0
- (id)series:(id)arg1 accessoryViewForDateRange:(id)arg2 timeScope:(long long)arg3;	// IMP=0x000000010004e6a4
- (struct UIEdgeInsets)accessoryViewEdgeInsetsForSeries:(id)arg1;	// IMP=0x000000010004e690
- (struct CGSize)accessoryViewSizeForSeries:(id)arg1;	// IMP=0x000000010004e5d4
- (id)activitySummaryForCurrentRange;	// IMP=0x000000010004e52c
- (long long)graphSeriesTimeScope;	// IMP=0x000000010004e51c
- (id)seriesSelectionLineColorForGraphView:(id)arg1;	// IMP=0x000000010004e508
- (id)calendarQuerySampleType;	// IMP=0x000000010004e4f4
- (id)calendarQueryDisplayType;	// IMP=0x000000010004e444
- (id)descriptionForChartData:(id)arg1 timeScope:(long long)arg2;	// IMP=0x000000010004e2c0
- (id)descriptionSeriesForGraphView:(id)arg1;	// IMP=0x000000010004e268
- (id)lollipopAnnotationColor;	// IMP=0x000000010004e254
- (void)updateSelectionAnnotationDataSourceForContext:(id)arg1 displayType:(id)arg2 timeScope:(long long)arg3;	// IMP=0x000000010004e0dc
- (id)makeAnnotationDataSource;	// IMP=0x000000010004e0d0
- (_Bool)annotationViewUsesSeparators;	// IMP=0x000000010004e0c8
- (void)configureDisplayTypes:(id)arg1 timeScope:(long long)arg2 stackOffset:(long long)arg3;	// IMP=0x000000010004deac
- (void)didUpdateFromDateZoom:(long long)arg1 toDateZoom:(long long)arg2 newVisibleRange:(id)arg3;	// IMP=0x000000010004de9c
- (id)_generateActivityGoalLineSeriesWithColor:(id)arg1;	// IMP=0x000000010004d8e8
- (id)_generateActivityBarSeriesWithColor:(id)arg1 legendTitle:(id)arg2 metGoalFillStyle:(id)arg3 missedGoalFillStyle:(id)arg4 activityValue:(long long)arg5 profile:(id)arg6;	// IMP=0x000000010004d548
- (id)_activityYAxisZeroOnly:(_Bool)arg1 stackOffset:(long long)arg2 bottomLabelPadding:(double)arg3 profile:(id)arg4;	// IMP=0x000000010004d0d4
- (id)_zeroStringForStackOffset:(long long)arg1 profile:(id)arg2;	// IMP=0x000000010004ceb8
- (id)_activitySeriesForActivityValue:(long long)arg1 profile:(id)arg2;	// IMP=0x000000010004cd60
- (id)_displayTypeForActivityValue:(long long)arg1 yAxis:(id)arg2 dataProvider:(id)arg3 profile:(id)arg4;	// IMP=0x000000010004caa0
- (id)_unitForActivityValue:(long long)arg1 profile:(id)arg2;	// IMP=0x000000010004c948
- (long long)_representativeDataTypeForActivityValue:(long long)arg1;	// IMP=0x000000010004c928
- (id)_titleForActivityValue:(long long)arg1 profile:(id)arg2;	// IMP=0x000000010004c734
- (id)_missedGoalFillStyleForActivityValue:(long long)arg1;	// IMP=0x000000010004c5a0
- (id)_metGoalFillStyleForActivityValue:(long long)arg1;	// IMP=0x000000010004c40c
- (id)_lineColorForActivityValue:(long long)arg1;	// IMP=0x000000010004c370
- (id)initWithProfile:(id)arg1 initialXValue:(id)arg2;	// IMP=0x000000010004be54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
