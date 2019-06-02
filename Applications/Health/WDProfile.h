//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIStateRestoring.h"

@class HKChartDataCacheController, HKDateCache, HKDisplayCategoryController, HKDisplayTypeController, HKHealthRecordsStore, HKHealthStore, HKManualEntryValidationController, HKSampleTypeDateRangeController, HKSampleTypeUpdateController, HKUCUMUnitDisplayConverter, HKUnitPreferenceController, NSString, WDClinicalSampleAccountsLoader, WDClinicalSourcesDataProvider, WDFavoriteDisplayTypesController, WDMedicalRecordCountProvider, WDNotificationManager, WDSelectedTimeScopeController, WDSourceOrderController, WDStoreDataProvider, WDUserActivityManager, WDUserDefaults, _HKWheelchairUseCharacteristicCache;

@interface WDProfile : NSObject <UIStateRestoring>
{
    WDClinicalSourcesDataProvider *_clinicalSourcesDataProvider;	// 8 = 0x8
    HKHealthRecordsStore *_healthRecordsStore;	// 16 = 0x10
    HKDateCache *_dateCache;	// 24 = 0x18
    HKDisplayCategoryController *_displayCategoryController;	// 32 = 0x20
    HKDisplayTypeController *_displayTypeController;	// 40 = 0x28
    HKHealthStore *_healthStore;	// 48 = 0x30
    HKManualEntryValidationController *_manualEntryValidationController;	// 56 = 0x38
    HKSampleTypeDateRangeController *_sampleTypeDateRangeController;	// 64 = 0x40
    HKUnitPreferenceController *_unitController;	// 72 = 0x48
    HKUCUMUnitDisplayConverter *_ucumDisplayConverter;	// 80 = 0x50
    HKChartDataCacheController *_dataCacheController;	// 88 = 0x58
    WDFavoriteDisplayTypesController *_favoriteDisplayTypesController;	// 96 = 0x60
    WDMedicalRecordCountProvider *_medicalRecordCountProvider;	// 104 = 0x68
    WDNotificationManager *_notificationManager;	// 112 = 0x70
    WDSelectedTimeScopeController *_selectedTimeScopeController;	// 120 = 0x78
    HKSampleTypeUpdateController *_updateController;	// 128 = 0x80
    WDStoreDataProvider *_storeDataProvider;	// 136 = 0x88
    WDSourceOrderController *_sourceOrderController;	// 144 = 0x90
    WDUserActivityManager *_userActivityManager;	// 152 = 0x98
    WDUserDefaults *_userDefaults;	// 160 = 0xa0
    _HKWheelchairUseCharacteristicCache *_wheelchairUseCharacteristicCache;	// 168 = 0xa8
    WDClinicalSampleAccountsLoader *_clinicalSampleAccountsLoader;	// 176 = 0xb0
}

@property(nonatomic) __weak WDClinicalSampleAccountsLoader *clinicalSampleAccountsLoader; // @synthesize clinicalSampleAccountsLoader=_clinicalSampleAccountsLoader;
@property(readonly, nonatomic) _HKWheelchairUseCharacteristicCache *wheelchairUseCharacteristicCache; // @synthesize wheelchairUseCharacteristicCache=_wheelchairUseCharacteristicCache;
@property(readonly, nonatomic) WDUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, nonatomic) WDUserActivityManager *userActivityManager; // @synthesize userActivityManager=_userActivityManager;
@property(readonly, nonatomic) WDSourceOrderController *sourceOrderController; // @synthesize sourceOrderController=_sourceOrderController;
@property(readonly, nonatomic) WDStoreDataProvider *storeDataProvider; // @synthesize storeDataProvider=_storeDataProvider;
@property(readonly, nonatomic) HKSampleTypeUpdateController *updateController; // @synthesize updateController=_updateController;
@property(readonly, nonatomic) WDSelectedTimeScopeController *selectedTimeScopeController; // @synthesize selectedTimeScopeController=_selectedTimeScopeController;
@property(readonly, nonatomic) WDNotificationManager *notificationManager; // @synthesize notificationManager=_notificationManager;
@property(readonly, nonatomic) WDMedicalRecordCountProvider *medicalRecordCountProvider; // @synthesize medicalRecordCountProvider=_medicalRecordCountProvider;
@property(readonly, nonatomic) WDFavoriteDisplayTypesController *favoriteDisplayTypesController; // @synthesize favoriteDisplayTypesController=_favoriteDisplayTypesController;
@property(readonly, nonatomic) HKChartDataCacheController *dataCacheController; // @synthesize dataCacheController=_dataCacheController;
@property(readonly, nonatomic) HKUCUMUnitDisplayConverter *ucumDisplayConverter; // @synthesize ucumDisplayConverter=_ucumDisplayConverter;
@property(readonly, nonatomic) HKUnitPreferenceController *unitController; // @synthesize unitController=_unitController;
@property(readonly, nonatomic) HKSampleTypeDateRangeController *sampleTypeDateRangeController; // @synthesize sampleTypeDateRangeController=_sampleTypeDateRangeController;
@property(readonly, nonatomic) HKManualEntryValidationController *manualEntryValidationController; // @synthesize manualEntryValidationController=_manualEntryValidationController;
@property(readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(readonly, nonatomic) HKDisplayTypeController *displayTypeController; // @synthesize displayTypeController=_displayTypeController;
@property(readonly, nonatomic) HKDisplayCategoryController *displayCategoryController; // @synthesize displayCategoryController=_displayCategoryController;
@property(readonly, nonatomic) HKDateCache *dateCache; // @synthesize dateCache=_dateCache;
- (void).cxx_destruct;	// IMP=0x00000001000c6f28
- (void)_setHealthRecordsStore:(id)arg1;	// IMP=0x00000001000c6db0
@property(readonly, nonatomic) HKHealthRecordsStore *healthRecordsStore;
@property(readonly, nonatomic) WDClinicalSourcesDataProvider *clinicalSourcesDataProvider;
- (id)_createHealthStore;	// IMP=0x00000001000c6bdc
- (id)_initWithHealthStore:(id)arg1;	// IMP=0x00000001000c6700
- (id)init;	// IMP=0x00000001000c66f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) Class objectRestorationClass;
@property(readonly, nonatomic) id <UIStateRestoring> restorationParent;
@property(readonly) Class superclass;

@end

