/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IMSystemMonitorListener.h>

@class CKDispatchCache, CKMultiDict;

@interface CKPreviewDispatchCache : NSObject <IMSystemMonitorListener> {

	CKDispatchCache* _dispatchCache;
	CKMultiDict* _pendingBlocks;

}

@property (nonatomic,retain) CKDispatchCache * dispatchCache;              //@synthesize dispatchCache=_dispatchCache - In the implementation block
@property (nonatomic,retain) CKMultiDict * pendingBlocks;                  //@synthesize pendingBlocks=_pendingBlocks - In the implementation block
+(id)transcriptPreviewCache;
+(id)mapThumbnailQueue;
+(id)detailsPreviewCache;
+(id)snapshotCache;
+(void)_invalidateStickerPreviewCache;
+(id)stickerPreviewCache;
-(id)cachedPreviewForKey:(id)arg1 ;
-(void)setCachedPreview:(id)arg1 key:(id)arg2 ;
-(BOOL)isGeneratingPreviewForKey:(id)arg1 ;
-(void)enqueueSaveBlock:(/*^block*/id)arg1 withPriority:(long long)arg2 ;
-(void)enqueueGenerationBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 withPriority:(long long)arg3 forKey:(id)arg4 ;
-(void)systemApplicationDidSuspend;
-(void)enqueueSaveBlock:(/*^block*/id)arg1 forMediaObject:(id)arg2 withPriority:(long long)arg3 ;
-(id)notificationCenter;
-(void)transferRemoved:(id)arg1 ;
-(void)beginGeneratingForKey:(id)arg1 ;
-(void)endGeneratingForKey:(id)arg1 ;
-(id)initWithCacheLimit:(unsigned long long)arg1 ;
-(void)setDispatchCache:(CKDispatchCache *)arg1 ;
-(void)setPendingBlocks:(CKMultiDict *)arg1 ;
-(CKDispatchCache *)dispatchCache;
-(BOOL)shouldReplaceCachedPreview:(id)arg1 withPreview:(id)arg2 ;
-(CKMultiDict *)pendingBlocks;
-(id)mediaObjectManager;
-(void)transferFinished:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)resume;
-(void)flush;
@end
