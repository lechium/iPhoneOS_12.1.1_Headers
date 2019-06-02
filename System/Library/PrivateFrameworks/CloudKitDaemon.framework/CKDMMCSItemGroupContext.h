/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/CKDCancelling.h>
#import <libobjc.A.dylib/CKDMMCSItemReaderWriterDelegateProtocol.h>

@class CKDOperation, NSNumber, CKDMMCS, CKDMMCSItemGroup, CKDMMCSItem, NSMapTable;

@interface CKDMMCSItemGroupContext : NSObject <CKDCancelling, CKDMMCSItemReaderWriterDelegateProtocol> {

	CKDOperation* _operation;
	id _operationInfo;
	NSNumber* _hasConformingOperation;
	CKDMMCS* _MMCS;
	CKDMMCSItemGroup* _itemGroup;
	/*^block*/id _progressBlock;
	/*^block*/id _commandBlock;
	/*^block*/id _startBlock;
	/*^block*/id _completionBlock;
	CKDMMCSItem* _MMCSPackageSectionItem;
	NSMapTable* _MMCSItemsByItemID;
	long long _mmcsOperationType;

}

@property (nonatomic,retain) NSNumber * hasConformingOperation;                 //@synthesize hasConformingOperation=_hasConformingOperation - In the implementation block
@property (nonatomic,retain) CKDMMCS * MMCS;                                    //@synthesize MMCS=_MMCS - In the implementation block
@property (nonatomic,retain) CKDMMCSItemGroup * itemGroup;                      //@synthesize itemGroup=_itemGroup - In the implementation block
@property (assign,nonatomic,__weak) CKDOperation * operation;                   //@synthesize operation=_operation - In the implementation block
@property (nonatomic,copy) id progressBlock;                                    //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,copy) id commandBlock;                                     //@synthesize commandBlock=_commandBlock - In the implementation block
@property (nonatomic,copy) id startBlock;                                       //@synthesize startBlock=_startBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;                                  //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) CKDMMCSItem * MMCSPackageSectionItem;              //@synthesize MMCSPackageSectionItem=_MMCSPackageSectionItem - In the implementation block
@property (nonatomic,retain) NSMapTable * MMCSItemsByItemID;                    //@synthesize MMCSItemsByItemID=_MMCSItemsByItemID - In the implementation block
@property (assign,nonatomic) long long mmcsOperationType;                       //@synthesize mmcsOperationType=_mmcsOperationType - In the implementation block
@property (nonatomic,retain) id operationInfo;                                  //@synthesize operationInfo=_operationInfo - In the implementation block
-(BOOL)shouldFetchAssetContentInMemory;
-(long long)mmcsOperationType;
-(void)setMmcsOperationType:(long long)arg1 ;
-(id)operationInfo;
-(CKDMMCS *)MMCS;
-(void)setMMCS:(CKDMMCS *)arg1 ;
-(void)handleCommand:(id)arg1 forItem:(id)arg2 ;
-(void)setOperationInfo:(id)arg1 ;
-(BOOL)willOpenItemReaderWriter:(id)arg1 error:(id*)arg2 ;
-(void)didOpenItemReaderWriter:(id)arg1 result:(BOOL)arg2 error:(id)arg3 ;
-(void)didCompleteRequestWithError:(id)arg1 ;
-(id)initWithMMCS:(id)arg1 itemGroup:(id)arg2 operation:(id)arg3 progress:(/*^block*/id)arg4 command:(/*^block*/id)arg5 start:(/*^block*/id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)setMMCSPackageSectionItem:(CKDMMCSItem *)arg1 ;
-(CKDMMCSItemGroup *)itemGroup;
-(id)findTrackedMMCSItemByItemID:(unsigned long long)arg1 ;
-(id)getCKDMMCSItemReaderByPathForMMCSItem:(id)arg1 error:(id*)arg2 ;
-(void)updateProgressForItemID:(unsigned long long)arg1 state:(int)arg2 progress:(double)arg3 error:(id)arg4 ;
-(void)didGetItemID:(unsigned long long)arg1 signature:(id)arg2 path:(id)arg3 error:(id)arg4 results:(id)arg5 ;
-(void)updateProgressForItemID:(unsigned long long)arg1 state:(int)arg2 progress:(double)arg3 results:(id)arg4 ;
-(void)didPutItemID:(unsigned long long)arg1 signature:(id)arg2 results:(id)arg3 ;
-(void)didGetMetricsForRequest:(id)arg1 ;
-(MMCSItemReaderWriterRef)getMMCSItemReaderForItemID:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)updateProgressForPackageSectionState:(int)arg1 progress:(double)arg2 results:(id)arg3 ;
-(void)didPutSectionWithSignature:(id)arg1 results:(id)arg2 ;
-(BOOL)_setupMMCSItemsWithError:(id*)arg1 ;
-(id)startBlock;
-(NSMapTable *)MMCSItemsByItemID;
-(void)_startTrackingMMCSItems:(id)arg1 ;
-(BOOL)_setupRegisterMMCSItemsWithError:(id*)arg1 ;
-(BOOL)_setupPutMMCSItemsWithError:(id*)arg1 ;
-(BOOL)_setupGetMMCSItemsWithError:(id*)arg1 ;
-(BOOL)_setupPutContentMetadataMMCSItemsWithError:(id*)arg1 ;
-(void)_cleanupMMCSRegisterItems;
-(void)_stopTrackingMMCSItems:(id)arg1 ;
-(void)_cleanupMMCSItems;
-(CKDMMCSItem *)MMCSPackageSectionItem;
-(id)commandBlock;
-(id)conformingOperation;
-(BOOL)willCloseItemReaderWriter:(id)arg1 error:(id*)arg2 ;
-(void)didCloseItemReaderWriter:(id)arg1 result:(BOOL)arg2 error:(id)arg3 ;
-(BOOL)willGetFileMetadataItemReaderWriter:(id)arg1 error:(id*)arg2 ;
-(id)didGetFileMetadataItemReaderWriter:(id)arg1 fileMetadata:(id)arg2 error:(id)arg3 ;
-(BOOL)willReadFromItemReaderWriter:(id)arg1 offset:(unsigned long long)arg2 bytes:(char*)arg3 length:(unsigned long long)arg4 bytesRead:(unsigned long long*)arg5 error:(id*)arg6 ;
-(BOOL)didReadFromItemReaderWriter:(id)arg1 offset:(unsigned long long)arg2 bytes:(char*)arg3 length:(unsigned long long)arg4 bytesRead:(unsigned long long*)arg5 error:(id*)arg6 ;
-(NSNumber *)hasConformingOperation;
-(void)setHasConformingOperation:(NSNumber *)arg1 ;
-(void)setItemGroup:(CKDMMCSItemGroup *)arg1 ;
-(void)setCommandBlock:(id)arg1 ;
-(void)setStartBlock:(id)arg1 ;
-(void)setMMCSItemsByItemID:(NSMapTable *)arg1 ;
-(void)cancel;
-(void)setProgressBlock:(id)arg1 ;
-(id)progressBlock;
-(void)start;
-(CKDOperation *)operation;
-(void)setOperation:(CKDOperation *)arg1 ;
-(void)setCompletionBlock:(id)arg1 ;
-(id)completionBlock;
@end

