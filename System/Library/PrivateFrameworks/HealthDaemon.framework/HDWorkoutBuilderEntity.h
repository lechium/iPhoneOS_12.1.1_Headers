/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDWorkoutBuilderEntity : HDHealthEntity
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)foreignKeys;
+(long long)protectionClass;
+(id)privateSubEntities;
+(id)workoutBuilderEntityWithIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(BOOL)discardBuilderWithIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)_workoutBuilderEntitiesForPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)workoutBuilderEntitiesForSource:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)workoutBuilderEntitiesExcludingSessions:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)createEntityForBuilderConfiguration:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)finishWorkoutBuilderWithIdentifier:(id)arg1 dateInterval:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
-(BOOL)enumerateAssociatedSampleValuesOfType:(id)arg1 interval:(id)arg2 profile:(id)arg3 error:(id*)arg4 sampleHandler:(/*^block*/id)arg5 ;
-(BOOL)pruneAssociatedSamplesToDateInterval:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(BOOL)enumerateAssociatedUUIDsWithTransaction:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)metadataWithTransaction:(id)arg1 error:(id*)arg2 ;
-(id)configurationWithTransaction:(id)arg1 error:(id*)arg2 ;
-(id)workoutEventsInTransaction:(id)arg1 error:(id*)arg2 ;
-(BOOL)enumerateStatisticsInTransaction:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)quantityTypesIncludedWhilePausedInTransaction:(id)arg1 error:(id*)arg2 ;
-(BOOL)_setupForEnumerationOfType:(id)arg1 interval:(id)arg2 profile:(id)arg3 error:(id*)arg4 handler:(/*^block*/id)arg5 ;
-(id)dataIntervalInTransaction:(id)arg1 error:(id*)arg2 ;
-(id)_createTemporaryProtectedAssociatedSampleListInTransaction:(id)arg1 error:(id*)arg2 ;
-(id)_predicateForAssociatedSamplesOfType:(id)arg1 interval:(id)arg2 associatedSampleTableName:(id)arg3 transaction:(id)arg4 error:(id*)arg5 ;
-(BOOL)_setupForEnumerationOfType:(id)arg1 interval:(id)arg2 transaction:(id)arg3 error:(id*)arg4 handler:(/*^block*/id)arg5 ;
-(BOOL)_enumerateAssociatedSamplePropertiesInTransaction:(id)arg1 error:(id*)arg2 handler:(/*^block*/id)arg3 ;
-(id)_queryForAssociatedSamplePropertyEnumerationInTransaction:(id)arg1 predicate:(id)arg2 ;
-(id)sessionIdentifierWithTransaction:(id)arg1 error:(id*)arg2 ;
-(BOOL)setSessionIdentifier:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(id)startDateInTransaction:(id)arg1 error:(id*)arg2 ;
-(BOOL)setStartDate:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(id)endDateInTransaction:(id)arg1 error:(id*)arg2 ;
-(BOOL)setEndDate:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(BOOL)setDataInterval:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(BOOL)setQuantityTypesIncludedWhilePaused:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(BOOL)setMetadata:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(BOOL)setDeviceEntity:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(long long)associateObject:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(BOOL)enumerateAssociatedSamplesOfType:(id)arg1 interval:(id)arg2 profile:(id)arg3 error:(id*)arg4 sampleHandler:(/*^block*/id)arg5 ;
-(BOOL)insertWorkoutEvent:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(BOOL)deleteStatisticsForType:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(BOOL)storeStatisticsCalculator:(id)arg1 anchor:(id)arg2 transaction:(id)arg3 error:(id*)arg4 ;
-(BOOL)setArchivedState:(id)arg1 forDataSourceIdentifier:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
-(BOOL)removeDataSourceWithIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
-(BOOL)enumerateDataSourcesForProfile:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
@end

