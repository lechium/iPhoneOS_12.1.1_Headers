/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FPXVendor <FPXOperationService,FPXVendorObservation,FPXVendorMessaging>
@required
-(void)updateDomains:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)startProvidingItemAtURL:(id)arg1 readingOptions:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)providePlaceholderAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)identifierForItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)evictItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)itemChangedAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)itemForURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)trashItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fetchRemoteFileProviderEndpointForProtocolName:(id)arg1 service:(id)arg2 itemURL:(id)arg3 needsItemURL:(BOOL)arg4 completionHandler:(/*^block*/id)arg5;
-(void)privilegedValuesForAttributes:(id)arg1 forItemAtURL:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)didChangeItemID:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)URLForItemID:(id)arg1 creatingPlaceholderIfMissing:(BOOL)arg2 ignoreAlternateContentsURL:(BOOL)arg3 completionHandler:(/*^block*/id)arg4;
-(void)setAlternateContentsURL:(id)arg1 onDocumentURL:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)didUpdateAlternateContentsDocumentForDocumentAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)removeTrashedItemsOlderThanDate:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)indexOneBatchInDomain:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)dropIndexForDomain:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)dumpIndexStateForDomain:(id)arg1 toFileHandler:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

