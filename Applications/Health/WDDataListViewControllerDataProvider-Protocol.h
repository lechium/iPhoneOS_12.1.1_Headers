//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKDisplayType, HKHealthStore, NSDate, NSIndexPath, NSPredicate, NSString, UITableView, UITableViewCell, UIViewController, WDProfile;

@protocol WDDataListViewControllerDataProvider <NSObject>
@property(readonly, nonatomic) double customEstimatedCellHeight;
@property(readonly, nonatomic) double customCellHeight;
@property(readonly, nonatomic) _Bool textAdjustsFontSizeToFitWidth;
@property(readonly, nonatomic) unsigned long long numberOfSections;
@property(readonly, nonatomic) long long cellStyle;
@property(retain, nonatomic) NSPredicate *defaultQueryPredicate;
- (UIViewController *)viewControllerForItemAtIndexPath:(NSIndexPath *)arg1;
- (void)viewControllerIsNearEndOfScreen;
- (void)deleteAllData;
- (void)removeObjectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2 sectionRemoved:(_Bool *)arg3;
- (void)deleteObjectsAtIndexPath:(NSIndexPath *)arg1 healthStore:(HKHealthStore *)arg2 options:(unsigned long long)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)stopCollectingData;
- (void)startCollectingDataWithUpdateHandler:(void (^)(void))arg1;
- (UITableViewCell *)customCellForObject:(id)arg1 indexPath:(NSIndexPath *)arg2 tableView:(UITableView *)arg3;
- (void)customizeTableView:(UITableView *)arg1;
- (NSString *)secondaryTextForObject:(id)arg1;
- (NSString *)textForObject:(id)arg1;
- (id <WDDataListDataObjectSource>)objectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2;
- (unsigned long long)numberOfObjectsForSection:(unsigned long long)arg1;
- (NSString *)titleForSection:(unsigned long long)arg1;
- (id)initWithDisplayType:(HKDisplayType *)arg1 profile:(WDProfile *)arg2;

@optional
@property(readonly) _Bool calendarDateSelectorVisible;
@property(readonly) _Bool hasCompleteDataSet;
- (_Bool)canEditRowAtIndexPath:(NSIndexPath *)arg1;
- (void)viewControllerWantsDataIncludingDate:(NSDate *)arg1;
- (UITableViewCell *)customLoadingCellForRowAtIndexPath:(NSIndexPath *)arg1 tableView:(UITableView *)arg2;
@end

