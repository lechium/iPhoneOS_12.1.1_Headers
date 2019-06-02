/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FIUIWorkoutActivityType, NSMutableDictionary, NSMutableArray, FIUIWorkoutDefaultMetricsProvider, NPSDomainAccessor, NPSManager;

@interface FIUIWorkoutSettingsManager : NSObject {

	FIUIWorkoutActivityType* _workoutActivityType;
	NSMutableDictionary* _settingsByActivityType;
	NSMutableDictionary* _settingOverridesByMetric;
	NSMutableArray* _enabledMetrics;
	FIUIWorkoutDefaultMetricsProvider* _defaultMetricsProvider;
	NPSDomainAccessor* _domainAccessor;
	NPSManager* _syncManager;

}

@property (nonatomic,retain) NPSDomainAccessor * domainAccessor;              //@synthesize domainAccessor=_domainAccessor - In the implementation block
@property (nonatomic,retain) NPSManager * syncManager;                        //@synthesize syncManager=_syncManager - In the implementation block
-(void)setSyncManager:(NPSManager *)arg1 ;
-(BOOL)_hasUserMadeMetricChangesToWorkoutType:(id)arg1 enabledMetrics:(id)arg2 settingOverridesByMetric:(id)arg3 metricFormatVersion:(id)arg4 ;
-(void)_writeToDomain;
-(void)_readFromDomain;
-(id)supportedMetrics;
-(id)orderedDisabledMetrics;
-(BOOL)isMetricEnabled:(unsigned long long)arg1 ;
-(BOOL)_enabledMetricsAreDefaultAfterPaceMigration:(id)arg1 workoutActivityType:(id)arg2 ;
-(void)_migratePaceViewSettingIfNeeded;
-(id)initWithWorkoutActivityType:(id)arg1 ;
-(id)orderedEnabledMetrics;
-(id)orderedSupportedMetrics;
-(id)orderedEnabledAndSupportedMetrics;
-(void)setEnabled:(BOOL)arg1 forMetricType:(unsigned long long)arg2 didChange:(BOOL*)arg3 ;
-(void)moveMetricType:(unsigned long long)arg1 toEnabledIndex:(long long)arg2 ;
-(long long)disabledIndexForMetricType:(unsigned long long)arg1 ;
-(void)reloadMetrics;
-(NPSDomainAccessor *)domainAccessor;
-(void)setDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(NPSManager *)syncManager;
-(id)init;
@end

