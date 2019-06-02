/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVTImageCache.h>

@protocol AVTImageCache;
@class NSString;

@interface AVTTwoLevelsImageCache : NSObject <AVTImageCache> {

	id<AVTImageCache> _firstLevelCache;
	id<AVTImageCache> _secondLevelCache;

}

@property (nonatomic,readonly) id<AVTImageCache> firstLevelCache;               //@synthesize firstLevelCache=_firstLevelCache - In the implementation block
@property (nonatomic,readonly) id<AVTImageCache> secondLevelCache;              //@synthesize secondLevelCache=_secondLevelCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFirstLevelCache:(id)arg1 secondLevelCache:(id)arg2 environment:(id)arg3 ;
-(id)resourceForItem:(id)arg1 scope:(id)arg2 ;
-(id)resourceForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(/*^block*/id)arg3 ;
-(id)imageForItem:(id)arg1 scope:(id)arg2 ;
-(id)imageForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(/*^block*/id)arg3 ;
-(id<AVTImageCache>)firstLevelCache;
-(id<AVTImageCache>)secondLevelCache;
@end

