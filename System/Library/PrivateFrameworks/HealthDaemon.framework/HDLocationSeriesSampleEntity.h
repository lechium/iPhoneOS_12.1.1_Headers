/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDSeriesSampleEntity.h>
#import <libobjc.A.dylib/HDSeriesEntity.h>

@class NSString;

@interface HDLocationSeriesSampleEntity : HDSeriesSampleEntity <HDSeriesEntity>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5 ;
+(id)codableObjectsFromObjectCollection:(id)arg1 ;
+(BOOL)addCodableObject:(id)arg1 toCollection:(id)arg2 ;
+(id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(/*^block*/id)arg5 ;
+(id)createTableSQL;
+(BOOL)performPostJournalMergeCleanupWithTransaction:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(BOOL)insertLocationData:(id)arg1 seriesIdentifier:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)supportsObjectMerging;
+(id)mergeDataObject:(id)arg1 provenance:(id)arg2 profile:(id)arg3 database:(id)arg4 error:(id*)arg5 insertHandler:(/*^block*/id)arg6 ;
+(BOOL)participatesInInsertion;
+(BOOL)isBackedByTable;
+(BOOL)_deleteHFDSeriesIfFoundForPersistentID:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(BOOL)_insertCodableSeriesDataFromObject:(id)arg1 persistentID:(id)arg2 database:(id)arg3 error:(id*)arg4 ;
+(BOOL)enumerateLocationDataInDatabase:(id)arg1 HFDKey:(id)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
+(id)_routeSampleWithID:(id)arg1 canBeUnfrozen:(BOOL)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)_updateFrozenEntityToMatchReplacedUnfrozenEntity:(id)arg1 unfrozenSeriesUUID:(id)arg2 unfrozenSeriesHFDKey:(long long)arg3 database:(id)arg4 error:(id*)arg5 ;
+(id)hasSeriesDataForHFDKey:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(BOOL)enumerateLocationDataInDatabase:(id)arg1 error:(id*)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)deleteFromDatabase:(id)arg1 error:(id*)arg2 ;
-(void)willDeleteFromDatabase:(id)arg1 ;
-(id)freezeWithDatabase:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
-(BOOL)insertLocationData:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
-(id)_frozenUUIDForUnfrozenSeriesSample:(id)arg1 HFDKey:(long long)arg2 frozenStartTime:(double)arg3 frozenEndTime:(double)arg4 frozenCount:(long long)arg5 profile:(id)arg6 database:(id)arg7 error:(id*)arg8 ;
-(id)sampleCountForSeriesInDatabase:(id)arg1 error:(id*)arg2 ;
-(id)timePeriodForSeriesInDatabase:(id)arg1 error:(id*)arg2 ;
-(BOOL)enumerateLocationDataFromTimestamp:(double)arg1 toTimestamp:(double)arg2 database:(id)arg3 error:(id*)arg4 handler:(/*^block*/id)arg5 ;
@end

