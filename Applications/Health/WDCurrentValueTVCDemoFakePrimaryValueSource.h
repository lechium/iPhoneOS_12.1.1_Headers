//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WDDashboardCellPrimaryValueSource.h"

@class HKDisplayCategory, HKDisplayType, NSDate, NSString;

@interface WDCurrentValueTVCDemoFakePrimaryValueSource : NSObject <WDDashboardCellPrimaryValueSource>
{
    id <WDDashboardCellPrimaryValueSourceDelegate> primaryValueSourceDelegate;	// 8 = 0x8
    NSDate *lastUpdated;	// 16 = 0x10
    HKDisplayType *_displayType;	// 24 = 0x18
    HKDisplayCategory *_displayCategory;	// 32 = 0x20
    NSString *_mostRecentValueText;	// 40 = 0x28
    NSString *_mostRecentUnitText;	// 48 = 0x30
    NSString *_primaryValueContextualText;	// 56 = 0x38
    unsigned long long _marginMode;	// 64 = 0x40
}

@property(nonatomic) unsigned long long marginMode; // @synthesize marginMode=_marginMode;
@property(retain, nonatomic) NSString *primaryValueContextualText; // @synthesize primaryValueContextualText=_primaryValueContextualText;
@property(retain, nonatomic) NSString *mostRecentUnitText; // @synthesize mostRecentUnitText=_mostRecentUnitText;
@property(retain, nonatomic) NSString *mostRecentValueText; // @synthesize mostRecentValueText=_mostRecentValueText;
@property(retain, nonatomic) HKDisplayCategory *displayCategory; // @synthesize displayCategory=_displayCategory;
@property(retain, nonatomic) HKDisplayType *displayType; // @synthesize displayType=_displayType;
@property(readonly, nonatomic) NSDate *lastUpdated; // @synthesize lastUpdated;
@property(nonatomic) __weak id <WDDashboardCellPrimaryValueSourceDelegate> primaryValueSourceDelegate; // @synthesize primaryValueSourceDelegate;
- (void).cxx_destruct;	// IMP=0x000000010008a110
- (id)mostRecentValueWithValueFont:(id)arg1 unitFont:(id)arg2;	// IMP=0x0000000100089d7c

@end
