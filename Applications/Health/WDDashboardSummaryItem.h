//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WDDashboardCellPrimaryValueSource.h"

@class HKDisplayCategory, HKDisplayType, NSDate, NSSet, NSString, WDProfile;

@interface WDDashboardSummaryItem : NSObject <WDDashboardCellPrimaryValueSource>
{
    id <WDDashboardCellPrimaryValueSourceDelegate> _primaryValueSourceDelegate;	// 8 = 0x8
    HKDisplayType *_displayType;	// 16 = 0x10
    HKDisplayCategory *_displayCategory;	// 24 = 0x18
    NSDate *_lastUpdated;	// 32 = 0x20
    NSSet *_summaries;	// 40 = 0x28
    WDProfile *_profile;	// 48 = 0x30
    id <HKDataProviderValue> _valueFormatter;	// 56 = 0x38
}

@property(retain, nonatomic) id <HKDataProviderValue> valueFormatter; // @synthesize valueFormatter=_valueFormatter;
@property(retain, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) NSSet *summaries; // @synthesize summaries=_summaries;
@property(readonly, nonatomic) NSDate *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property(readonly, nonatomic) HKDisplayCategory *displayCategory; // @synthesize displayCategory=_displayCategory;
@property(readonly, nonatomic) HKDisplayType *displayType; // @synthesize displayType=_displayType;
@property(nonatomic) __weak id <WDDashboardCellPrimaryValueSourceDelegate> primaryValueSourceDelegate; // @synthesize primaryValueSourceDelegate=_primaryValueSourceDelegate;
- (void).cxx_destruct;	// IMP=0x00000001000cd614
- (_Bool)containsActivitySummary;	// IMP=0x00000001000cd41c
- (id)mostRecentValueWithValueFont:(id)arg1 unitFont:(id)arg2;	// IMP=0x00000001000cd2cc
@property(readonly, nonatomic) NSString *primaryValueContextualText;
- (id)initWithSystolicSummary:(id)arg1 diastolicSummary:(id)arg2 profile:(id)arg3;	// IMP=0x00000001000ccd50
- (id)initWithSummary:(id)arg1 profile:(id)arg2;	// IMP=0x00000001000cc634

@end
