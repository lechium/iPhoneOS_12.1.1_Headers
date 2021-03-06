/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, PLAssetDownloadRequestDelegate;
@class NSObject, NSMutableDictionary;

@interface PLAssetDownloadRequest : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _requestsById;
	NSMutableDictionary* _progressById;
	int _currentRequestId;
	id<PLAssetDownloadRequestDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PLAssetDownloadRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)defaultManager;
-(void)cancelRequest:(int)arg1 ;
-(void)_onQueueAsync:(/*^block*/id)arg1 ;
-(int)requestRequiredResourcesForManagedAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)setDelegate:(id<PLAssetDownloadRequestDelegate>)arg1 ;
-(id<PLAssetDownloadRequestDelegate>)delegate;
@end

