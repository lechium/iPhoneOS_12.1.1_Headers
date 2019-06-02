/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDDataEntity.h>

@interface HDSampleEntity : HDDataEntity
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5 ;
+(id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(/*^block*/id)arg5 ;
+(long long)preferredEntityType;
+(id)samplesWithType:(id)arg1 profile:(id)arg2 encodingOptions:(id)arg3 predicate:(id)arg4 limit:(unsigned long long)arg5 anchor:(id*)arg6 error:(id*)arg7 ;
+(id)indices;
+(BOOL)requiresSampleTypePredicate;
+(id)mostRecentSampleWithType:(id)arg1 profile:(id)arg2 encodingOptions:(id)arg3 predicate:(id)arg4 anchor:(id*)arg5 error:(id*)arg6 ;
+(id)sourceIDsForSamplesWithType:(id)arg1 profile:(id)arg2 predicate:(id)arg3 error:(id*)arg4 ;
+(id)populatedSampleTypes:(id)arg1 inDateInterval:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)entityEnumeratorWithType:(id)arg1 profile:(id)arg2 ;
+(id)columnNameForSortIdentifier:(id)arg1 ;
+(void)deleteSamplesWithPredicate:(id)arg1 limit:(unsigned long long)arg2 generateDeletedObjects:(BOOL)arg3 database:(id)arg4 profile:(id)arg5 recursiveDeleteAuthorizationBlock:(/*^block*/id)arg6 completionHandler:(/*^block*/id)arg7 ;
+(void)deleteSamplesWithPredicate:(id)arg1 limit:(unsigned long long)arg2 deletionContext:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)_predicateWithSampleType:(id)arg1 sourceIdentifier:(id)arg2 predicate:(id)arg3 ;
+(Class)_deletedEntityClass;
+(id)oldestSampleWithType:(id)arg1 profile:(id)arg2 encodingOptions:(id)arg3 predicate:(id)arg4 error:(id*)arg5 ;
+(id)maxAnchorForSamplesWithType:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(void)deleteSamplesWithTypes:(id)arg1 sourceEntities:(id)arg2 profile:(id)arg3 recursiveDeleteAuthorizationBlock:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
+(void)deleteSamplesWithPredicate:(id)arg1 limit:(unsigned long long)arg2 generateDeletedObjects:(BOOL)arg3 profile:(id)arg4 recursiveDeleteAuthorizationBlock:(/*^block*/id)arg5 completionHandler:(/*^block*/id)arg6 ;
+(BOOL)enumerateAssociatedObjectsForIdentifier:(long long)arg1 inDatabase:(id)arg2 error:(id*)arg3 associatedObjectHandler:(/*^block*/id)arg4 ;
+(long long)countOfSamplesWithType:(id)arg1 profile:(id)arg2 matchingPredicate:(id)arg3 withError:(id*)arg4 ;
+(id)timePeriodsForSampleTypes:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)sampleTypesForSamplesMatchingPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)anySampleOfType:(id)arg1 profile:(id)arg2 encodingOptions:(id)arg3 predicate:(id)arg4 error:(id*)arg5 ;
+(/*^block*/id)objectInsertionFilterForProfile:(id)arg1 ;
+(id)columnNamesForTimeOffset;
+(id)_predicateWithSampleType:(id)arg1 predicate:(id)arg2 ;
-(id)_sampleTypeInDatabase:(id)arg1 ;
@end

