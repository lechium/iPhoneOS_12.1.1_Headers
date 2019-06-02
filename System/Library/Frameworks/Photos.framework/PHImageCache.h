/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PHImageCacheDelegate;
#import <Photos/Photos-Structs.h>
@class NSMutableDictionary, PHRecyclableObjectVendor;

@interface PHImageCache : NSObject {

	NSMutableDictionary* _cachesBySize;
	os_unfair_lock_s _lock;
	PHRecyclableObjectVendor* _entryVendor;
	id<PHImageCacheDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PHImageCacheDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)removeAllEntries;
-(id)_cacheForSizeKey:(id)arg1 createIfNecessary:(BOOL)arg2 ;
-(void)_removeEntry:(id)arg1 ;
-(void)pinEntryForSize:(CGSize)arg1 assetUUID:(id)arg2 requestID:(int)arg3 postProcessingHandler:(/*^block*/id)arg4 ;
-(BOOL)populateEntryWithImage:(CGImageRef)arg1 requestID:(int)arg2 forSize:(CGSize)arg3 assetUUID:(id)arg4 ;
-(void)queryEntryForSize:(CGSize)arg1 assetUUID:(id)arg2 didWaitForInFlightRequest:(BOOL*)arg3 didFindImage:(BOOL*)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)removeEntriesForSize:(CGSize)arg1 assetUUIDs:(id)arg2 ;
-(id)init;
-(void)setDelegate:(id<PHImageCacheDelegate>)arg1 ;
-(id<PHImageCacheDelegate>)delegate;
@end

