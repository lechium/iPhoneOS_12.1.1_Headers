//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HKDisplayType.h"

@class HKGraphSeries, HKInteractiveChartDataFormatter, NSString, UIColor;

@interface WDInteractiveChartDisplayType : HKDisplayType
{
    UIColor *_color;	// 8 = 0x8
    HKGraphSeries *_graphSeries;	// 16 = 0x10
    NSString *_specifiedDisplayName;	// 24 = 0x18
    NSString *_specifiedUnitName;	// 32 = 0x20
    HKInteractiveChartDataFormatter *_specifiedValueFormatter;	// 40 = 0x28
}

@property(readonly, nonatomic) HKInteractiveChartDataFormatter *specifiedValueFormatter; // @synthesize specifiedValueFormatter=_specifiedValueFormatter;
@property(readonly, nonatomic) NSString *specifiedUnitName; // @synthesize specifiedUnitName=_specifiedUnitName;
@property(readonly, nonatomic) NSString *specifiedDisplayName; // @synthesize specifiedDisplayName=_specifiedDisplayName;
@property(readonly, nonatomic) HKGraphSeries *graphSeries; // @synthesize graphSeries=_graphSeries;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;	// IMP=0x0000000100017244
- (long long)_internalDisplayTypeIdentifier;	// IMP=0x0000000100017128
- (id)description;	// IMP=0x00000001000170b4
- (id)hk_interactiveChartsFormatterForTimeScope:(long long)arg1;	// IMP=0x00000001000170a4
- (id)colorWithDisplayCategoryController:(id)arg1;	// IMP=0x000000010001704c
- (id)unitNameForValue:(id)arg1 unitPreferenceController:(id)arg2;	// IMP=0x000000010001703c
- (id)displayName;	// IMP=0x000000010001702c
- (id)_initWithGraphSeries:(id)arg1 displayName:(id)arg2 unitDisplayNameOverrides:(id)arg3 chartingRules:(id)arg4 unitName:(id)arg5 valueFormatter:(id)arg6 dataTypeCode:(long long)arg7;	// IMP=0x0000000100016d18
- (id)initWithGraphSeries:(id)arg1 displayName:(id)arg2 unitName:(id)arg3 valueFormatter:(id)arg4 dataTypeCode:(long long)arg5;	// IMP=0x0000000100016c64
- (id)initWithGraphSeries:(id)arg1 baseDisplayType:(id)arg2 valueFormatter:(id)arg3 dataTypeCode:(long long)arg4;	// IMP=0x0000000100016b38

@end

