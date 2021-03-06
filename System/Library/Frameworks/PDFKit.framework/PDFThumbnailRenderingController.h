/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMapTable, NSOperationQueue, UIImage, NSMutableDictionary, NSObject;

@interface PDFThumbnailRenderingController : NSObject {

	NSMapTable* _contextObjectToContextMap;
	NSMapTable* _contextObjectToOperationMap;
	NSOperationQueue* _sharedOperationQueue;
	UIImage* _genericThumbnailImage;
	NSMutableDictionary* _cachedThumbnails;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}
+(id)sharedController;
-(id)_initInternal;
-(void)_scheduleOperationForContext:(id)arg1 ;
-(BOOL)_isOperationScheduledForContext:(id)arg1 ;
-(void)_cancelOperationForContext:(id)arg1 ;
-(id)thumbnailOfSize:(unsigned long long)arg1 forPage:(id)arg2 ;
-(id)cachedThumbnailForPage:(id)arg1 ;
-(void)registerThumbnailBlock:(/*^block*/id)arg1 withPreferredSize:(unsigned long long)arg2 forPage:(id)arg3 context:(id)arg4 withPlaceholder:(BOOL)arg5 orClearFirst:(BOOL)arg6 ;
-(void)updatePreferredSize:(unsigned long long)arg1 forContext:(id)arg2 ;
-(void)unregisterThumbnailBlockForContext:(id)arg1 ;
-(id)init;
-(void)clearCache;
@end

