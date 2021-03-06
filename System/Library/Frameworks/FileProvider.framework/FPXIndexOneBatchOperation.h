/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FPOperation.h>

@protocol OS_dispatch_queue;
@class FPXSpotlightIndexer, FPXDomainContext, FPXIndexState, NSObject;

@interface FPXIndexOneBatchOperation : FPOperation {

	FPXSpotlightIndexer* _indexer;
	FPXDomainContext* _domainContext;
	FPXIndexState* _indexState;
	BOOL _isInitialIndexing;
	BOOL _hasMoreChanges;
	unsigned long long* _logSection;
	NSObject*<OS_dispatch_queue> _cleanupQueue;
	/*^block*/id _fetchCompletedBlock;

}

@property (nonatomic,copy) id fetchCompletedBlock;              //@synthesize fetchCompletedBlock=_fetchCompletedBlock - In the implementation block
-(id)initWithIndexer:(id)arg1 isInitialIndexing:(BOOL)arg2 queue:(id)arg3 ;
-(void)setFetchCompletedBlock:(id)arg1 ;
-(void)handleInsertedItems:(id)arg1 deletedItems:(id)arg2 needsMoreWork:(BOOL)arg3 state:(id)arg4 error:(id)arg5 ;
-(id)observerItemID;
-(void)_handleInsertedItems:(id)arg1 deletedItems:(id)arg2 needsMoreWork:(BOOL)arg3 state:(id)arg4 error:(id)arg5 ;
-(void)_startIndexing;
-(void)_indexOnePageFromPage:(id)arg1 ;
-(void)_indexOneChangesBatchFromChangeToken:(id)arg1 ;
-(id)fetchCompletedBlock;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)main;
@end

