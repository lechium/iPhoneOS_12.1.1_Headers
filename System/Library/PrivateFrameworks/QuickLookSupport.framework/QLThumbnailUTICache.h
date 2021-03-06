/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface QLThumbnailUTICache : NSObject {

	NSMutableDictionary* _itemTypeCache;
	NSObject*<OS_dispatch_queue> _synchronizationQueue;

}
+(id)_iWorkUTIs;
+(id)sharedCache;
-(unsigned long long)itemTypeForItem:(id)arg1 ;
-(BOOL)_contentType:(id)arg1 isEqualToContentTypeInArray:(id)arg2 ;
-(BOOL)_contentTypeIsIWorkType:(id)arg1 ;
-(unsigned long long)_itemTypeByUTIResolutionForContentType:(id)arg1 ;
-(BOOL)requestedBadgeType:(unsigned long long)arg1 isValidForContentType:(id)arg2 ;
-(id)init;
@end

