/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/HKSampleTypeUpdateControllerObserver.h>

@class NSArray, NSMutableDictionary, HKActivitySummaryDataProvider, HKSampleTypeUpdateController, HKHealthStore, HKUnitPreferenceController, NSString;

@interface HKChartDataCacheController : NSObject <HKSampleTypeUpdateControllerObserver> {

	NSArray* _chartCachesByTimeScopeAndDisplayTypeIdentifier;
	NSMutableDictionary* _chartCachesByDisplayTypeIdentifier;
	NSMutableDictionary* _currentValueDataProvidersByDisplayType;
	NSMutableDictionary* _alternateCurrentValueDataProvidersByDisplayType;
	NSMutableDictionary* _secondaryValueDataProviders;
	HKActivitySummaryDataProvider* _activitySummaryDataProvider;
	HKSampleTypeUpdateController* _updateController;
	HKHealthStore* _healthStore;
	HKUnitPreferenceController* _unitController;

}

@property (nonatomic,retain) HKSampleTypeUpdateController * updateController;              //@synthesize updateController=_updateController - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                                  //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) HKUnitPreferenceController * unitController;                  //@synthesize unitController=_unitController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HKUnitPreferenceController *)unitController;
-(void)updateController:(id)arg1 didReceiveUpdateForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4 ;
-(void)setUnitController:(HKUnitPreferenceController *)arg1 ;
-(id)initWithHealthStore:(id)arg1 unitController:(id)arg2 updateController:(id)arg3 ;
-(void)setUpdateController:(HKSampleTypeUpdateController *)arg1 ;
-(id)_timeScopeBasedChartCacheForDisplayType:(id)arg1 timeScope:(long long)arg2 ;
-(id)_chartCacheForDisplayType:(id)arg1 timeScope:(long long)arg2 chartCachesByDisplayTypeIdentifier:(NSMutableDictionary*)arg3 ;
-(id)_generateChartCacheForDisplayType:(id)arg1 timeScope:(long long)arg2 ;
-(void)_subscribeForUpdatesForDisplayType:(id)arg1 ;
-(id)_chartCacheIdentifiersFromSamples:(id)arg1 ;
-(id)allInteractiveChartsCaches;
-(id)_chartCacheIdentifiersFromStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)_createCurrentValueDataProviderForDisplayType:(id)arg1 healthStore:(id)arg2 updateController:(id)arg3 dateCache:(id)arg4 ;
-(id)_createAlternateCurrentValueDataProviderForDisplayType:(id)arg1 healthStore:(id)arg2 updateController:(id)arg3 dateCache:(id)arg4 ;
-(id)currentValueDataProviderForDisplayType:(id)arg1 healthStore:(id)arg2 updateController:(id)arg3 dateCache:(id)arg4 ;
-(id)interactiveChartsCacheForDisplayType:(id)arg1 timeScope:(long long)arg2 ;
-(id)alternateCurrentValueDataProviderForDisplayType:(id)arg1 healthStore:(id)arg2 updateController:(id)arg3 dateCache:(id)arg4 ;
-(id)activitySummaryDataProviderWithHealthStore:(id)arg1 dateCache:(id)arg2 displayTypeController:(id)arg3 unitController:(id)arg4 ;
-(HKSampleTypeUpdateController *)updateController;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
@end

