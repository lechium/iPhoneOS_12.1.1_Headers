/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATFoundation/ATAssetLink.h>
#import <ATFoundation/ATMessageLinkObserver.h>

@protocol ATAssetLinkDelegate, OS_dispatch_queue, OS_dispatch_group, OS_dispatch_semaphore;
@class ATMessageLink, NSMutableArray, NSMutableSet, NSMutableDictionary, NSObject, NSString;

@interface ATConcreteAssetLink : NSObject <ATAssetLink, ATMessageLinkObserver> {

	ATMessageLink* _messageLink;
	BOOL _open;
	id<ATAssetLinkDelegate> _delegate;
	NSMutableArray* _outstandingAssets;
	NSMutableSet* _readers;
	NSMutableSet* _readersPendingStop;
	NSMutableDictionary* _readersToAssetsMap;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _readerQueue;
	NSObject*<OS_dispatch_queue> _fileIOQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_group> _readersPendingStopGroup;
	int _pendingWriteAmount;
	NSObject*<OS_dispatch_semaphore> _pendingWriteSemaphore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isOpen,nonatomic,readonly) BOOL open;                            //@synthesize open=_open - In the implementation block
@property (assign,nonatomic,__weak) id<ATAssetLinkDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithMessageLink:(id)arg1 ;
-(unsigned long long)maximumBatchSize;
-(void)_requestAsset:(id)arg1 ;
-(id)_urlForWritingAsset:(id)arg1 withFileName:(id)arg2 ;
-(id)_keyForATAssetInReaderMap:(id)arg1 ;
-(void)messageLinkWasClosed:(id)arg1 ;
-(id)enqueueAssets:(id)arg1 force:(BOOL)arg2 ;
-(BOOL)canEnqueueAsset:(id)arg1 ;
-(void)cancelAssets:(id)arg1 ;
-(void)prioritizeAsset:(id)arg1 ;
-(BOOL)linkIsReady;
-(void)_finishAsset:(id)arg1 withError:(id)arg2 ;
-(BOOL)isOpen;
-(void)setDelegate:(id<ATAssetLinkDelegate>)arg1 ;
-(id<ATAssetLinkDelegate>)delegate;
-(unsigned long long)priority;
-(BOOL)open;
-(void)close;
@end

