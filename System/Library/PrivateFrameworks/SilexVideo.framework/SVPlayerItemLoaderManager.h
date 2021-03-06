/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVPlayerItemLoaderProviding.h>

@protocol SVPlayerItemLoaderFactory;
@class SVWeakObjectCache, NSString;

@interface SVPlayerItemLoaderManager : NSObject <SVPlayerItemLoaderProviding> {

	id<SVPlayerItemLoaderFactory> _playerItemLoaderFactory;
	SVWeakObjectCache* _playerItemLoaders;

}

@property (nonatomic,readonly) id<SVPlayerItemLoaderFactory> playerItemLoaderFactory;              //@synthesize playerItemLoaderFactory=_playerItemLoaderFactory - In the implementation block
@property (nonatomic,readonly) SVWeakObjectCache * playerItemLoaders;                              //@synthesize playerItemLoaders=_playerItemLoaders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)playerItemLoaderForVideo:(id)arg1 ;
-(SVWeakObjectCache *)playerItemLoaders;
-(id<SVPlayerItemLoaderFactory>)playerItemLoaderFactory;
-(id)initWithPlayerItemLoaderFactory:(id)arg1 ;
@end

