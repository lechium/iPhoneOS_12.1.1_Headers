/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCache;

@interface QLThumbnailAdditionCache : NSObject {

	NSCache* _additionsCache;

}
+(id)sharedInstance;
-(void)cacheAddition:(id)arg1 forDocumentID:(id)arg2 ;
-(id)thumbnailAdditionForItemAtURL:(id)arg1 error:(id*)arg2 ;
-(void)purgeCachedAdditionForItemAtURL:(id)arg1 ;
-(id)init;
@end
