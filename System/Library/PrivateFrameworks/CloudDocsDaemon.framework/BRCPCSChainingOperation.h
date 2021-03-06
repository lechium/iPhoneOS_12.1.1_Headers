/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class BRCAppLibrary, BRCServerItem, NSString;

@interface BRCPCSChainingOperation : _BRCOperation <BRCOperationSubclass> {

	BRCAppLibrary* _appLibrary;
	BRCServerItem* _rootItem;
	BOOL _completed;
	unsigned long long _batchSize;
	BOOL _shouldFillBatch;
	/*^block*/id _pcsChainCompletionBlock;

}

@property (nonatomic,copy) id pcsChainCompletionBlock;              //@synthesize pcsChainCompletionBlock=_pcsChainCompletionBlock - In the implementation block
@property (assign,nonatomic) BOOL shouldFillBatch;                  //@synthesize shouldFillBatch=_shouldFillBatch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)initWithRootItem:(id)arg1 appLibrary:(id)arg2 ;
-(void)setShouldFillBatch:(BOOL)arg1 ;
-(void)setPcsChainCompletionBlock:(id)arg1 ;
-(void)_sendRecordBatch:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_buildRecordListWithCompletion:(/*^block*/id)arg1 ;
-(id)pcsChainCompletionBlock;
-(BOOL)shouldFillBatch;
-(void)main;
@end

