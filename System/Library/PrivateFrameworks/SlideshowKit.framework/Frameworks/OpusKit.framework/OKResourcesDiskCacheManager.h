/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSURL, NSObject;

@interface OKResourcesDiskCacheManager : NSObject {

	NSURL* _baseURL;
	NSObject*<OS_dispatch_queue> _globalQueue;
	NSObject*<OS_dispatch_queue> _accessQueue;

}
+(id)temporaryManagerWithIdentifier:(id)arg1 ;
+(id)_sharedResourcesDirectoryURL;
+(id)sharedManager;
-(BOOL)hasMetadataForMediaItem:(id)arg1 metadata:(id*)arg2 error:(id*)arg3 ;
-(id)metadataForMediaItem:(id)arg1 error:(id*)arg2 ;
-(BOOL)setMetadata:(id)arg1 forMediaItem:(id)arg2 error:(id*)arg3 ;
-(void)performAsynchronousResourceAccessUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)removeMetadataForMediaItem:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasThumbnailForMediaItem:(id)arg1 resolution:(unsigned long long)arg2 thumbnail:(id*)arg3 error:(id*)arg4 ;
-(id)thumbnailForMediaItem:(id)arg1 resolution:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)setThumbnail:(id)arg1 forMediaItem:(id)arg2 resolution:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)removeThumbnailsForMediaItem:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeAllCaches:(id*)arg1 ;
-(id)initWithBaseURL:(id)arg1 ;
-(void)_performAsynchronousResourceAccessUsingBlock:(/*^block*/id)arg1 ;
-(id)_cachedResourceDirectoryURLForMediaItem:(id)arg1 ;
-(id)resourcesDirectoryURL;
-(BOOL)_writeResources:(id*)arg1 byResourcesAccessor:(/*^block*/id)arg2 ;
-(BOOL)_writeCachedMediaItem:(id)arg1 error:(id*)arg2 byResourcesAccessor:(/*^block*/id)arg3 ;
-(id)_cacheResourceMetadataURLForMediaItem:(id)arg1 ;
-(BOOL)_readCachedMediaItem:(id)arg1 error:(id*)arg2 byMetadataAccessor:(/*^block*/id)arg3 ;
-(BOOL)_writeCachedMediaItem:(id)arg1 error:(id*)arg2 byMetadataAccessor:(/*^block*/id)arg3 ;
-(id)_cacheResourceThumbnailURLForMediaItem:(id)arg1 resolution:(unsigned long long)arg2 ;
-(id)_cacheResourceThumbnailsURLForMediaItem:(id)arg1 ;
-(BOOL)_readCachedMediaItem:(id)arg1 resolution:(unsigned long long)arg2 error:(id*)arg3 byThumbnailAccessor:(/*^block*/id)arg4 ;
-(BOOL)_writeCachedMediaItem:(id)arg1 resolution:(unsigned long long)arg2 error:(id*)arg3 byThumbnailAccessor:(/*^block*/id)arg4 ;
-(BOOL)_writeCachedMediaItem:(id)arg1 error:(id*)arg2 byThumbnailsAccessor:(/*^block*/id)arg3 ;
-(id)cachedMediaItemURLs:(id*)arg1 ;
-(BOOL)removeMediaItem:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeMediaItemsAtPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeThumbnailForMediaItem:(id)arg1 resolution:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)init;
-(void)dealloc;
@end

