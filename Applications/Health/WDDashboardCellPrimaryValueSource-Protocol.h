//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class HKDisplayCategory, HKDisplayType, NSAttributedString, NSDate, NSString, UIFont;

@protocol WDDashboardCellPrimaryValueSource
@property(readonly, nonatomic) NSDate *lastUpdated;
@property(readonly, nonatomic) NSString *primaryValueContextualText;
@property(readonly, nonatomic) HKDisplayCategory *displayCategory;
@property(readonly, nonatomic) HKDisplayType *displayType;
@property(nonatomic) __weak id <WDDashboardCellPrimaryValueSourceDelegate> primaryValueSourceDelegate;
- (NSAttributedString *)mostRecentValueWithValueFont:(UIFont *)arg1 unitFont:(UIFont *)arg2;
@end
