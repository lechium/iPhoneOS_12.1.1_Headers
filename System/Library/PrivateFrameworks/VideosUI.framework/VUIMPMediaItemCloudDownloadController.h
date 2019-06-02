/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIMPMediaItemDownloadController.h>
#import <libobjc.A.dylib/MPStoreDownloadManagerObserver.h>

@class MPStoreDownload, NSString;

@interface VUIMPMediaItemCloudDownloadController : VUIMPMediaItemDownloadController <MPStoreDownloadManagerObserver> {

	MPStoreDownload* _storeDownload;

}

@property (nonatomic,retain) MPStoreDownload * storeDownload;              //@synthesize storeDownload=_storeDownload - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_stateFromStoreDownload:(id)arg1 ;
-(void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2 ;
-(void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2 ;
-(MPStoreDownload *)storeDownload;
-(void)dealloc;
-(id)initWithMediaItem:(id)arg1 serialProcessingDispatchQueue:(id)arg2 ;
-(BOOL)supportsPausing;
-(id)initWithMediaItem:(id)arg1 state:(id)arg2 serialProcessingDispatchQueue:(id)arg3 ;
-(void)_addStoreObserver;
-(void)_removeStoreObserver;
-(void)_onProcessingQueue_invalidate;
-(void)setStoreDownload:(MPStoreDownload *)arg1 ;
-(BOOL)isRestoreDownload;
-(void)_onProcessingQueue_cancelDownload;
-(void)_onProcessingQueue_pauseDownload;
-(void)_onProcessingQueue_resumeDownload;
@end

