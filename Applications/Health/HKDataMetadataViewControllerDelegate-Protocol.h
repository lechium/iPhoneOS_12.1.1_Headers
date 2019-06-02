//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKDisplayTypeController, HKHealthStore, HKSample, HKSampleType, HKUnitPreferenceController, NSPredicate, NSString, UIViewController;

@protocol HKDataMetadataViewControllerDelegate <NSObject>
@property(readonly, nonatomic) HKHealthStore *healthStore;

@optional
- (_Bool)shareDocumentUsingSample:(HKSample *)arg1;
- (UIViewController *)accessViewControllerForSample:(HKSample *)arg1 healthStore:(HKHealthStore *)arg2;
- (UIViewController *)viewControllerForSampleType:(HKSampleType *)arg1 subSamplePredicate:(NSPredicate *)arg2 title:(NSString *)arg3;
- (NSPredicate *)defaultPredicateForSampleType:(HKSampleType *)arg1;
- (HKUnitPreferenceController *)unitController;
- (HKDisplayTypeController *)displayTypeController;
@end

