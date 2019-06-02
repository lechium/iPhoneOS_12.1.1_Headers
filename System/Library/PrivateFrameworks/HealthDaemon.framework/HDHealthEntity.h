/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSQLiteEntity.h>
#import <libobjc.A.dylib/HDHealthEntityEncoding.h>

@interface HDHealthEntity : HDSQLiteEntity <HDHealthEntityEncoding>
+(id)defaultForeignKey;
+(id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(/*^block*/id)arg5 ;
+(BOOL)performWriteTransactionWithHealthDatabase:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
+(BOOL)performReadTransactionWithHealthDatabase:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
+(id)uniquedColumns;
+(long long)protectionClass;
+(id)propertyForSyncProvenance;
+(id)propertyForSyncAnchor;
+(id)anyWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(BOOL)deleteEntitiesWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(id)databaseName;
+(BOOL)performReadTransactionWithHealthDatabase:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
+(BOOL)enumerateEntitiesForSyncWithProperties:(id)arg1 predicate:(id)arg2 session:(id)arg3 syncAnchorRange:(HDSyncAnchorRange)arg4 limit:(unsigned long long)arg5 lastSyncAnchor:(long long*)arg6 healthDatabase:(id)arg7 error:(id*)arg8 block:(/*^block*/id)arg9 ;
+(long long)nextSyncAnchorWithStartAnchor:(long long)arg1 predicate:(id)arg2 session:(id)arg3 healthDatabase:(id)arg4 error:(id*)arg5 ;
+(BOOL)performWriteTransactionWithHealthDatabase:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 inaccessibilityHandler:(/*^block*/id)arg4 ;
+(BOOL)enumerateProperties:(id)arg1 withPredicate:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4 enumerationHandler:(/*^block*/id)arg5 ;
+(BOOL)performWriteTransactionWithHealthDatabase:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 inaccessibilityHandler:(/*^block*/id)arg4 ;
+(id)predicateForSyncWithPredicate:(id)arg1 syncEntityClass:(Class)arg2 session:(id)arg3 syncAnchorRange:(HDSyncAnchorRange)arg4 ;
+(id)protectedDatabaseName;
+(id)createTableSQL;
+(id)updateSQLForTimeOffsetWithBindingCount:(unsigned long long*)arg1 ;
+(id)maxRowIDForPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(long long)countOfObjectsWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(id)columnNamesForTimeOffset;
+(BOOL)performPostJournalMergeCleanupWithTransaction:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)insertOrReplaceEntity:(BOOL)arg1 healthDatabase:(id)arg2 properties:(id)arg3 error:(id*)arg4 bindingHandler:(/*^block*/id)arg5 ;
+(BOOL)enumerateEntitiesForSyncWithProperties:(id)arg1 predicate:(id)arg2 syncEntityClass:(Class)arg3 session:(id)arg4 syncAnchorRange:(HDSyncAnchorRange)arg5 orderingProperties:(id)arg6 orderingDirections:(id)arg7 limit:(unsigned long long)arg8 lastSyncAnchor:(long long*)arg9 healthDatabase:(id)arg10 error:(id*)arg11 block:(/*^block*/id)arg12 ;
+(id)_syncQueryWithDatabase:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 orderingDirections:(id)arg4 limit:(unsigned long long)arg5 anchorProperty:(id)arg6 ;
+(long long)nextSyncAnchorWithStartAnchor:(long long)arg1 predicate:(id)arg2 syncEntityClass:(Class)arg3 session:(id)arg4 orderingProperties:(id)arg5 orderingDirections:(id)arg6 limit:(unsigned long long)arg7 healthDatabase:(id)arg8 error:(id*)arg9 ;
+(id)_syncQueryDescriptorWithPredicate:(id)arg1 orderingProperties:(id)arg2 orderingDirections:(id)arg3 limit:(unsigned long long)arg4 anchorProperty:(id)arg5 ;
+(BOOL)performWriteTransactionWithHealthDatabase:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
+(BOOL)performHighPriorityReadTransactionWithHealthDatabase:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
+(BOOL)_isNilDatabase:(id)arg1 error:(id*)arg2 ;
+(unsigned long long)_transactionOptionsForWriting:(BOOL)arg1 ;
+(BOOL)updateProperties:(id)arg1 predicate:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4 bindingHandler:(/*^block*/id)arg5 ;
+(id)propertyValueForAnyWithProperty:(id)arg1 predicate:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4 ;
+(BOOL)performHighPriorityReadTransactionWithHealthDatabase:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)getValuesForProperties:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
-(id)valueForProperty:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
-(BOOL)updateProperties:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 bindingHandler:(/*^block*/id)arg4 ;
-(id)stringForProperty:(id)arg1 healthDatabase:(id)arg2 error:(out id*)arg3 ;
-(id)dateForProperty:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(BOOL)setDate:(id)arg1 forProperty:(id)arg2 transaction:(id)arg3 error:(id*)arg4 ;
-(id)stringForProperty:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(BOOL)setString:(id)arg1 forProperty:(id)arg2 transaction:(id)arg3 error:(id*)arg4 ;
-(id)numberForProperty:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(BOOL)setNumber:(id)arg1 forProperty:(id)arg2 transaction:(id)arg3 error:(id*)arg4 ;
-(id)foreignKeyEntity:(Class)arg1 forProperty:(id)arg2 transaction:(id)arg3 error:(id*)arg4 ;
-(BOOL)setForeignKeyEntity:(id)arg1 forProperty:(id)arg2 transaction:(id)arg3 error:(id*)arg4 ;
@end

