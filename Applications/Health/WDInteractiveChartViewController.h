//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HKViewController.h"

#import "HKCurrentTimeViewDelegate.h"
#import "HKGraphViewDelegate.h"
#import "HKLollipopDelegate.h"
#import "HKSampleTypeDateRangeControllerObserver.h"
#import "UIGestureRecognizerDelegate.h"
#import "WDCurrentValueViewDataSourceValueRangeFormatter.h"
#import "WDTodayMonthViewControllerDelegate.h"

@class HKCurrentTimeView, HKDisplayType, HKGraphViewController, HKInteractiveChartAnnotationViewDataSource, HKLollipopController, HKSampleType, HKSelectedRangeFormatter, HKUIDateLabel, HKValueRange, NSArray, NSDate, NSMutableArray, NSString, UIColor, UIFont, UIImpactFeedbackGenerator, UILabel, UIView, WDCurrentValueViewDataSource, WDInteractiveChartCurrentValueView, WDProfile, WDTimeScopeControl;

@interface WDInteractiveChartViewController : HKViewController <HKGraphViewDelegate, HKSampleTypeDateRangeControllerObserver, HKCurrentTimeViewDelegate, UIGestureRecognizerDelegate, WDTodayMonthViewControllerDelegate, WDCurrentValueViewDataSourceValueRangeFormatter, HKLollipopDelegate>
{
    NSMutableArray *_observers;	// 8 = 0x8
    long long _displayState;	// 16 = 0x10
    UILabel *_selectedSeriesLabel;	// 24 = 0x18
    UILabel *_selectedSeriesUnitLabel;	// 32 = 0x20
    WDTimeScopeControl *_radioButtons;	// 40 = 0x28
    HKCurrentTimeView *_currentTimeView;	// 48 = 0x30
    WDInteractiveChartCurrentValueView *_currentValueView;	// 56 = 0x38
    double _bannerBottom;	// 64 = 0x40
    UIView *_graphTopDividerView;	// 72 = 0x48
    UIView *_graphBottomDividerView;	// 80 = 0x50
    UILabel *_dashboardEmptyHeader;	// 88 = 0x58
    UILabel *_dashboardEmptyDescription;	// 96 = 0x60
    NSArray *_allGraphSeriesConfigurationManagers;	// 104 = 0x68
    UIFont *_majorSelectedPointFont;	// 112 = 0x70
    UIFont *_minorSelectedPointFont;	// 120 = 0x78
    HKUIDateLabel *_selectedPointDateLabel;	// 128 = 0x80
    UIImpactFeedbackGenerator *_impactFeedbackGenerator;	// 136 = 0x88
    UIView *_primaryGraphViewWrapper;	// 144 = 0x90
    HKGraphViewController *_primaryGraphViewController;	// 152 = 0x98
    NSDate *_creationDate;	// 160 = 0xa0
    unsigned long long _options;	// 168 = 0xa8
    HKValueRange *_fixedRange;	// 176 = 0xb0
    double _lastDateValueRangeUpdate;	// 184 = 0xb8
    WDProfile *_profile;	// 192 = 0xc0
    HKInteractiveChartAnnotationViewDataSource *_annotationDataSource;	// 200 = 0xc8
    HKLollipopController *_lollipopController;	// 208 = 0xd0
    double _legendBottomLocation;	// 216 = 0xd8
    NSArray *_displayTypeStack;	// 224 = 0xe0
    HKSelectedRangeFormatter *_selectedRangeFormatter;	// 232 = 0xe8
    WDCurrentValueViewDataSource *_currentValueViewDataSource;	// 240 = 0xf0
    id _initialXValue;	// 248 = 0xf8
    long long _sampleDateRangeUpdateCount;	// 256 = 0x100
    long long _delayedAutoscaleRequestCount;	// 264 = 0x108
    long long _delayedAutoscaleActualCount;	// 272 = 0x110
}

+ (long long)_timeScopeForTimeScope:(long long)arg1 availableTimeScopes:(id)arg2;	// IMP=0x000000010000ef0c
+ (id)_timeScopesWithOptions:(unsigned long long)arg1;	// IMP=0x000000010000ed64
@property(nonatomic) long long delayedAutoscaleActualCount; // @synthesize delayedAutoscaleActualCount=_delayedAutoscaleActualCount;
@property(nonatomic) long long delayedAutoscaleRequestCount; // @synthesize delayedAutoscaleRequestCount=_delayedAutoscaleRequestCount;
@property(nonatomic) long long sampleDateRangeUpdateCount; // @synthesize sampleDateRangeUpdateCount=_sampleDateRangeUpdateCount;
@property(retain, nonatomic) id initialXValue; // @synthesize initialXValue=_initialXValue;
@property(retain, nonatomic) WDCurrentValueViewDataSource *currentValueViewDataSource; // @synthesize currentValueViewDataSource=_currentValueViewDataSource;
@property(retain, nonatomic) HKSelectedRangeFormatter *selectedRangeFormatter; // @synthesize selectedRangeFormatter=_selectedRangeFormatter;
@property(retain, nonatomic) NSArray *displayTypeStack; // @synthesize displayTypeStack=_displayTypeStack;
@property(nonatomic) double legendBottomLocation; // @synthesize legendBottomLocation=_legendBottomLocation;
@property(retain, nonatomic) HKLollipopController *lollipopController; // @synthesize lollipopController=_lollipopController;
@property(retain, nonatomic) HKInteractiveChartAnnotationViewDataSource *annotationDataSource; // @synthesize annotationDataSource=_annotationDataSource;
@property(readonly, nonatomic) HKGraphViewController *primaryGraphViewController; // @synthesize primaryGraphViewController=_primaryGraphViewController;
@property(readonly, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;	// IMP=0x0000000100016918
- (void)selectTimeScope:(long long)arg1;	// IMP=0x000000010001675c
- (void)sampleTypeDateRangeController:(id)arg1 didUpdateDateRanges:(struct NSDictionary *)arg2;	// IMP=0x0000000100016714
- (void)_updateGraphViewAxisDateRange;	// IMP=0x000000010001643c
- (id)_dateForMostRecentData;	// IMP=0x00000001000161a0
- (id)_defaultAxisRangeIncludeToday:(_Bool)arg1;	// IMP=0x0000000100015ef4
- (void)_automaticAutoScale;	// IMP=0x0000000100015e44
- (void)_updateCurrentValueViewWithVisibleRange;	// IMP=0x0000000100015ce4
- (_Bool)_primaryDisplayTypeHasNoData;	// IMP=0x0000000100015b94
- (id)_formatterForSeries:(id)arg1;	// IMP=0x0000000100015a48
- (id)_chartDataForPoint:(id)arg1;	// IMP=0x00000001000159dc
- (id)_dateForBlockPoint:(id)arg1;	// IMP=0x0000000100015984
- (id)_debugDateStringForPoint:(id)arg1;	// IMP=0x0000000100015900
- (void)_setVisibleRangeUsingDateFromDateSelector:(id)arg1;	// IMP=0x0000000100015714
- (void)_setDateSelectorToVisibleRange;	// IMP=0x000000010001543c
- (id)stringForValueRange:(id)arg1 timeScope:(long long)arg2;	// IMP=0x000000010001539c
- (id)_midPointDateFromVisibleRange;	// IMP=0x0000000100015268
- (void)didTapBackButtonForMonthViewController:(id)arg1;	// IMP=0x0000000100015264
- (void)monthViewController:(id)arg1 didSelectDate:(id)arg2;	// IMP=0x0000000100015224
- (void)currentTimeViewDidTapOnNextTimeButton:(id)arg1;	// IMP=0x0000000100015214
- (void)currentTimeViewDidTapOnPreviousTimeButton:(id)arg1;	// IMP=0x0000000100015204
- (void)_moveSelectedDateInDirection:(long long)arg1;	// IMP=0x0000000100015080
- (void)_scrollToAnchorDate:(id)arg1 graphView:(id)arg2;	// IMP=0x0000000100014ef0
- (void)currentTimeViewDidTapOnDateSelector:(id)arg1;	// IMP=0x0000000100014d2c
@property(readonly) UIColor *calendarDaySamplePresentColor;
@property(readonly) HKSampleType *calendarQuerySampleType;
@property(readonly) HKDisplayType *calendarQueryDisplayType;
- (void)graphViewDidTapYAxis:(id)arg1;	// IMP=0x0000000100014b18
- (void)graphView:(id)arg1 didUpdateLegendViewsWithTopLegendFrame:(struct CGRect)arg2;	// IMP=0x0000000100014aec
- (id)seriesSelectionLineColorForGraphView:(id)arg1;	// IMP=0x0000000100014a44
- (void)graphView:(id)arg1 didUpdateSeries:(id)arg2 newDataArrived:(_Bool)arg3;	// IMP=0x0000000100014864
- (void)graphView:(id)arg1 didUpdateYAxisWidth:(double)arg2 toWidth:(double)arg3;	// IMP=0x0000000100014860
- (void)graphViewSizeChanged:(id)arg1;	// IMP=0x000000010001485c
- (void)graphView:(id)arg1 didFinishUserScrollingToValueRange:(id)arg2;	// IMP=0x000000010001480c
- (void)_scheduleDelayedAutoscale;	// IMP=0x00000001000146a0
- (void)graphView:(id)arg1 didUpdateVisibleValueRange:(id)arg2 changeContext:(long long)arg3;	// IMP=0x0000000100014610
- (void)_notifyObserversDidUpdateVisibleValueRange:(id)arg1 changeContext:(long long)arg2;	// IMP=0x0000000100014480
- (id)graphView:(id)arg1 graphSeriesForZoom:(long long)arg2 stackOffset:(long long)arg3;	// IMP=0x0000000100014278
- (long long)stackCountForGraphView:(id)arg1;	// IMP=0x0000000100014260
- (void)graphView:(id)arg1 didUpdateFromDateZoom:(long long)arg2 toDateZoom:(long long)arg3 newVisibleRange:(id)arg4;	// IMP=0x00000001000140c8
- (void)graphViewDidEndSelection:(id)arg1;	// IMP=0x0000000100014084
- (void)graphView:(id)arg1 didUpdateSelectedPoint:(id)arg2;	// IMP=0x0000000100013f48
- (long long)_userInfoSelectionCount:(id)arg1;	// IMP=0x0000000100013dfc
- (void)updateSelectionAnnotationDataSourceForContext:(id)arg1 displayType:(id)arg2 timeScope:(long long)arg3;	// IMP=0x0000000100013d5c
- (id)_displayTypeForSeries:(id)arg1;	// IMP=0x0000000100013d08
- (id)_pointSelectionInfo:(id)arg1;	// IMP=0x0000000100013b94
- (_Bool)_shouldShowDateRangeForSelectedPointDateLabel;	// IMP=0x0000000100013b6c
- (void)graphViewDidBeginSelection:(id)arg1;	// IMP=0x0000000100013b68
- (long long)_dateZoom;	// IMP=0x0000000100013b50
- (void)_createAndPrepareFeedbackGenerator;	// IMP=0x0000000100013aec
- (id)_configurationForDisplayType:(id)arg1;	// IMP=0x0000000100013968
- (id)_configurationForSeries:(id)arg1;	// IMP=0x00000001000137e4
- (void)_setSelectedGraphSeries:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000010001359c
- (_Bool)annotationViewUsesSeparators;	// IMP=0x0000000100013594
- (id)makeAnnotationDataSourceWithMetrics:(id)arg1;	// IMP=0x00000001000134f8
- (id)makeAnnotationDataSource;	// IMP=0x00000001000134e8
- (double)lollipopExtensionLength;	// IMP=0x00000001000134dc
- (id)lollipopAnnotationColor;	// IMP=0x0000000100013428
- (id)lollipopFieldColor;	// IMP=0x0000000100013414
- (void)updateAnnotationDataSource:(id)arg1 pointContexts:(id)arg2;	// IMP=0x000000010001335c
- (void)_showTimeDateControls;	// IMP=0x0000000100013340
- (void)_hideTimeDateControls;	// IMP=0x0000000100013324
- (void)_radioButtonsDidUpdate:(id)arg1;	// IMP=0x0000000100013268
- (void)_showHideNoGraphSeriesLabels;	// IMP=0x0000000100013134
- (void)_createDashboardEmptyLabelsIfNecessary;	// IMP=0x0000000100012d84
- (_Bool)_dashboardEmptyLabelsExist;	// IMP=0x0000000100012d6c
- (id)_colorForDisplayType:(id)arg1;	// IMP=0x0000000100012ca4
- (id)_primaryDisplayType;	// IMP=0x0000000100012c1c
- (id)_createGraphSeriesConfigurationFromDisplayType:(id)arg1 timeScope:(long long)arg2;	// IMP=0x0000000100012a44
- (long long)_countOfHorizontalSectionsForConfigurationManager:(id)arg1 timeScope:(long long)arg2;	// IMP=0x00000001000128d8
- (void)_addSeriesForDisplayType:(id)arg1 updatingTimeScopeProperties:(id)arg2 configurationManager:(id)arg3;	// IMP=0x000000010001270c
- (_Bool)_shouldHideSeriesForDisplayType:(id)arg1;	// IMP=0x0000000100012704
- (_Bool)_displayTypeIsHorizontalForTimeScope:(long long)arg1 displayType:(id)arg2;	// IMP=0x000000010001268c
- (long long)_numHorizontalDisplayTypesForTimeScope:(long long)arg1 displayTypes:(id)arg2;	// IMP=0x0000000100012534
- (void)_configureCustomDisplayType:(id)arg1 graphSeries:(id)arg2 configurationManager:(id)arg3;	// IMP=0x00000001000123f8
- (id)_customGraphSeriesForDisplayType:(id)arg1;	// IMP=0x0000000100012340
- (void)_setVisibleDisplayTypes:(id)arg1;	// IMP=0x0000000100012090
- (void)_updateAfterConfigurationChangeIncludeDateAxis:(_Bool)arg1;	// IMP=0x0000000100011ff4
- (void)_addDisplayTypeToConfiguration:(id)arg1 allDisplayTypes:(id)arg2 configurationManager:(id)arg3;	// IMP=0x0000000100011c00
- (void)_updateSelectedSeriesLabel:(id)arg1;	// IMP=0x0000000100011798
- (id)_allDisplayTypes;	// IMP=0x000000010001161c
- (id)_displayUnitForDisplayType:(id)arg1;	// IMP=0x0000000100011588
- (id)_displayNameForDisplayType:(id)arg1;	// IMP=0x0000000100011504
- (_Bool)prefersStatusBarHidden;	// IMP=0x00000001000114fc
- (void)primaryGraphViewControllerDidInitialize:(id)arg1;	// IMP=0x00000001000114f8
- (void)_updateAxisScalingRulesForUnitPreferenceChangesOfTypes:(id)arg1;	// IMP=0x0000000100011024
- (void)_unitPreferencesDidUpdate:(id)arg1;	// IMP=0x0000000100010e6c
- (void)_handleVisibleRangeChange;	// IMP=0x0000000100010e38
- (void)_replacePrimaryGraphViewControllerWithScalarController;	// IMP=0x0000000100010d5c
- (void)_replacePrimaryGraphViewControllerWithTimeScope:(long long)arg1 anchorDate:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000100010348
- (_Bool)_visibleRangeIsNowForTimeScope:(long long)arg1;	// IMP=0x00000001000101a0
- (id)_graphViewAxisAndVisibleDateRangeForTimeScope:(long long)arg1 fixedRange:(id)arg2;	// IMP=0x000000010001001c
- (void)_setGraphViewAxisAndVisibleDateRangeForTimeScope:(long long)arg1 anchorDate:(id)arg2 preserveScrollPosition:(_Bool)arg3;	// IMP=0x000000010000fd7c
- (_Bool)_valueRange:(id)arg1 fitsInsideValueRange:(id)arg2;	// IMP=0x000000010000fc48
- (id)visibleRangeForTimeScope:(long long)arg1 proposedRange:(id)arg2;	// IMP=0x000000010000fc30
- (void)viewDidLoad;	// IMP=0x000000010000f1c4
- (_Bool)_selectedSeriesWantsLastRecordedDate;	// IMP=0x000000010000f174
- (long long)_defaultTimeScopeWithAvailableTimeScopes:(id)arg1;	// IMP=0x000000010000f098
- (void)_layoutDashboardEmptyLabelsIfNecessary;	// IMP=0x000000010000eb10
- (void)_layoutDividerViews;	// IMP=0x000000010000e974
- (void)_omitLayoutHeader;	// IMP=0x000000010000e8fc
- (void)_layoutHeader;	// IMP=0x000000010000e3a4
- (_Bool)_inPointSelectionMode;	// IMP=0x000000010000e38c
- (double)_annotationViewCenterY;	// IMP=0x000000010000e33c
- (void)viewWillLayoutSubviews;	// IMP=0x000000010000e044
- (void)loadView;	// IMP=0x000000010000dfb4
- (void)dealloc;	// IMP=0x000000010000def8
- (_Bool)_tilingDisabled;	// IMP=0x000000010000dee0
@property(readonly, nonatomic) double dateSelectorHeight;
- (_Bool)_currentValueEnabled;	// IMP=0x000000010000debc
- (_Bool)_timeScopeEnabled;	// IMP=0x000000010000dea4
- (_Bool)_headerLineEnabled;	// IMP=0x000000010000de90
- (_Bool)_selectedDateRangeLabelEnabled;	// IMP=0x000000010000de7c
- (_Bool)_chartHasDateAxis;	// IMP=0x000000010000de64
- (double)minimumHeightForChart;	// IMP=0x000000010000de58
- (long long)stackOffsetCount;	// IMP=0x000000010000de40
- (void)setDetailView:(id)arg1;	// IMP=0x000000010000ddd4
- (id)graphSeriesForDisplayType:(id)arg1 timeScope:(long long)arg2 stackOffset:(long long)arg3;	// IMP=0x000000010000dd10
- (id)currentDisplayTypesForStackOffset:(long long)arg1;	// IMP=0x000000010000dcb0
- (void)removeOverlayDisplayType:(id)arg1 stackOffset:(long long)arg2;	// IMP=0x000000010000dc04
- (void)addOverlayDisplayType:(id)arg1 stackOffset:(long long)arg2;	// IMP=0x000000010000dae0
- (void)replaceCurrentDisplayTypesWithTypes:(id)arg1 stackOffset:(long long)arg2 resetDateRange:(_Bool)arg3;	// IMP=0x000000010000d7f8
- (void)removeChartViewObserver:(id)arg1;	// IMP=0x000000010000d6fc
- (void)addChartViewObserver:(id)arg1;	// IMP=0x000000010000d4a8
- (id)descriptionForChartData:(id)arg1 timeScope:(long long)arg2;	// IMP=0x000000010000cfe0
- (id)replaceRangeClause:(id)arg1;	// IMP=0x000000010000ce68
- (id)descriptionForXCoordinate:(double)arg1 graphView:(id)arg2;	// IMP=0x000000010000cbb0
- (id)descriptionSeriesForGraphView:(id)arg1;	// IMP=0x000000010000cba0
- (id)descriptionForVisiblePoints;	// IMP=0x000000010000c810
- (id)initWithDisplayTypes:(id)arg1 profile:(id)arg2 initialXValue:(id)arg3 options:(unsigned long long)arg4 fixedRange:(id)arg5;	// IMP=0x000000010000c73c
- (id)initWithDisplayTypes:(id)arg1 profile:(id)arg2 initialXValue:(id)arg3 options:(unsigned long long)arg4;	// IMP=0x000000010000c628
- (id)initWithStackedDisplayTypes:(id)arg1 profile:(id)arg2 initialXValue:(id)arg3 options:(unsigned long long)arg4;	// IMP=0x000000010000c244

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

