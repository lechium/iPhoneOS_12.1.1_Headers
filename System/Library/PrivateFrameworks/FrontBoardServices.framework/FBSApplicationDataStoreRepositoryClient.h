/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSServiceFacilityClient.h>
#import <libobjc.A.dylib/FBSApplicationDataStoreRepositoryClient.h>

@protocol FBSApplicationDataStoreRepositoryClient <NSObject>
@required
-(id)objectForKey:(id)arg1 forApplication:(id)arg2;
-(BOOL)prefetchedObjectIfAvailableForKey:(id)arg1 application:(id)arg2 outObject:(id*)arg3;
-(void)addPrefetchedKeys:(id)arg1;
-(void)removePrefetchedKeys:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)synchronizeWithCompletion:(/*^block*/id)arg1;
-(id)availableDataStores;
-(void)setObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3 withCompletion:(/*^block*/id)arg4;
-(void)removeObjectForKey:(id)arg1 forApplication:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)removeAllObjectsForApplication:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)removeObserver:(id)arg1;
-(void)invalidate;
-(void)addObserver:(id)arg1;

@end


@protocol OS_dispatch_queue;
@class NSCountedSet, NSMutableDictionary, NSObject, NSHashTable, NSString;

@interface FBSApplicationDataStoreRepositoryClient : FBSServiceFacilityClient <FBSApplicationDataStoreRepositoryClient> {

	NSCountedSet* _prefetchedKeys;
	NSMutableDictionary* _prefetchedKeyValues;
	NSMutableDictionary* _pendingChangesToPrefetchedKeys;
	NSObject*<OS_dispatch_queue> _prefetchedDataQueue;
	NSObject*<OS_dispatch_queue> _observersQueue;
	NSHashTable* _observers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_sendPrefetchedKeys:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)fireCompletion:(/*^block*/id)arg1 error:(id)arg2 ;
-(void)_sendMessageType:(int)arg1 withMessage:(/*^block*/id)arg2 withReplyHandler:(/*^block*/id)arg3 waitForReply:(BOOL)arg4 ;
-(void)_setPrefetchedObjectIfNecessary:(id)arg1 forKey:(id)arg2 application:(id)arg3 ;
-(void)_setChangeInFlight:(BOOL)arg1 forPrefetchedKey:(id)arg2 application:(id)arg3 ;
-(void)_handleStoreInvalidated:(id)arg1 ;
-(BOOL)_isChangeInFlightForPrefetchedKey:(id)arg1 application:(id)arg2 ;
-(void)handleMessage:(id)arg1 withType:(long long)arg2 ;
-(id)_allPrefetchedChangesInFlightForApplication:(id)arg1 ;
-(void)fireCompletion:(/*^block*/id)arg1 result:(id)arg2 error:(id)arg3 ;
-(id)_observers;
-(void)_handleValueChanged:(id)arg1 ;
-(id)objectForKey:(id)arg1 forApplication:(id)arg2 ;
-(BOOL)prefetchedObjectIfAvailableForKey:(id)arg1 application:(id)arg2 outObject:(id*)arg3 ;
-(void)addPrefetchedKeys:(id)arg1 ;
-(void)removePrefetchedKeys:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)synchronizeWithCompletion:(/*^block*/id)arg1 ;
-(id)availableDataStores;
-(void)setObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)removeObjectForKey:(id)arg1 forApplication:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)removeAllObjectsForApplication:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)clientCallbackQueue;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)invalidate;
-(void)addObserver:(id)arg1 ;
@end

