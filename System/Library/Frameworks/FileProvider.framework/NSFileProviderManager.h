/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore, OS_dispatch_queue, FPDRemoteFileProviderNSXPCProxyCreating, FPDDaemon, OS_dispatch_source;
@class NSObject, NSXPCConnection, NSURL, NSString, NSFileProviderDomain, NSMutableDictionary, NSArray;

@interface NSFileProviderManager : NSObject {

	NSObject*<OS_dispatch_semaphore> _sem;
	NSObject*<OS_dispatch_queue> _requestQueue;
	id<FPDRemoteFileProvider><NSXPCProxyCreating> _remoteFileProvider;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSXPCConnection*<FPDDaemon> _connection;
	NSURL* _documentStorageURL;
	NSString* _providerIdentifier;
	NSFileProviderDomain* _domain;
	NSObject*<OS_dispatch_queue> _signalUpdateQueue;
	NSObject*<OS_dispatch_source> _signalUpdateSource;
	NSMutableDictionary* _completionHandlersByItemID;
	NSArray* _presentedFiles;

}

@property (copy) NSArray * presentedFiles;                                 //@synthesize presentedFiles=_presentedFiles - In the implementation block
@property (nonatomic,readonly) NSString * providerIdentifier;              //@synthesize providerIdentifier=_providerIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * documentStorageURL; 
+(id)placeholderURLForURL:(id)arg1 ;
+(BOOL)writePlaceholderAtURL:(id)arg1 withDictionary:(id)arg2 error:(id*)arg3 ;
+(BOOL)writePlaceholderAtURL:(id)arg1 withMetadata:(id)arg2 error:(id*)arg3 ;
+(void)addDomain:(id)arg1 forProviderIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)removeDomain:(id)arg1 forProviderIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)removeAllDomainsForProviderIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)addDomain:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)removeDomain:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)removeAllDomainsWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)getDomainsWithCompletionHandler:(/*^block*/id)arg1 ;
+(id)managerForDomain:(id)arg1 ;
+(id)defaultManager;
-(id)_initWithProviderIdentifier:(id)arg1 domain:(id)arg2 ;
-(void)_signalPendingEnumerators;
-(void)fetchRemoteFileProviderSynchronously:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_cacheProviderInfo;
-(id)itemIDForIdentifier:(id)arg1 ;
-(void)_callCompletionHandlers:(id)arg1 error:(id)arg2 ;
-(void)_failToSignalPendingChangesWithError:(id)arg1 completionHandlersByItemID:(id)arg2 ;
-(void)remoteFileProviderWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)registerURLSessionTask:(id)arg1 forItemWithIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSArray *)presentedFiles;
-(void)setPresentedFiles:(NSArray *)arg1 ;
-(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_connection;
-(void)signalEnumeratorForContainerItemIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_initWithProviderIdentifier:(id)arg1 ;
-(void)dealloc;
-(NSURL *)documentStorageURL;
-(NSString *)providerIdentifier;
@end

