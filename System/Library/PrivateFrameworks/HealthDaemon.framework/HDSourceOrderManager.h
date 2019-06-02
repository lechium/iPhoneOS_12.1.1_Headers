/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HDProfile, HDDatabaseValueCache;

@interface HDSourceOrderManager : NSObject {

	HDProfile* _profile;
	HDDatabaseValueCache* _sourceOrdersForTypeCache;

}
+(id)_defaultOrderingWithSources:(id)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)resetCacheInDatabase:(id)arg1 ;
-(BOOL)_insertCodableObjectTypeSourceOrder:(id)arg1 transactionCache:(id)arg2 database:(id)arg3 error:(id*)arg4 ;
-(id)_sourceCacheItemForObjectType:(id)arg1 error:(id*)arg2 ;
-(BOOL)_updateOrderedSources:(id)arg1 objectType:(id)arg2 userOrdered:(BOOL)arg3 error:(id*)arg4 ;
-(id)_sourcesForCodableSourceOrder:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
-(id)_sourceCacheItemForObjectType:(id)arg1 transactionCache:(id)arg2 database:(id)arg3 error:(id*)arg4 ;
-(id)_mergedOrderedSourcesForExistingOrder:(id)arg1 codableSourceOrder:(id)arg2 incomingSources:(id)arg3 ;
-(id)_orderedSourceIDsForOrderedSources:(id)arg1 sourcesByID:(id)arg2 objectType:(id)arg3 transactionCache:(id)arg4 database:(id)arg5 error:(id*)arg6 ;
-(id)_sourceCacheItemFromOrderedIDs:(id)arg1 userOrdered:(BOOL)arg2 transactionCache:(id)arg3 database:(id)arg4 error:(id*)arg5 ;
-(id)_defaultSourceCacheItemWithTransactionCache:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
-(BOOL)_addOrderedSource:(id)arg1 objectType:(id)arg2 transactionCache:(id)arg3 database:(id)arg4 error:(id*)arg5 ;
-(BOOL)resetCacheWithError:(id*)arg1 ;
-(BOOL)createSourceOrdersWithCodables:(id)arg1 error:(id*)arg2 ;
-(id)orderedSourcesForObjectType:(id)arg1 error:(id*)arg2 ;
-(id)orderedSourceIDsForObjectType:(id)arg1 bundleIdentifierMapping:(id)arg2 userOrdered:(BOOL*)arg3 error:(id*)arg4 ;
-(BOOL)updateOrderedSources:(id)arg1 forObjectType:(id)arg2 error:(id*)arg3 ;
-(BOOL)addOrderedSource:(id)arg1 objectTypes:(id)arg2 error:(id*)arg3 ;
@end

