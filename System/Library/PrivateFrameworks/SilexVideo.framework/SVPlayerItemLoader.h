/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVPlayerItemLoading.h>

@protocol SVPlayerItemFactory, SVURLAssetLoading, SVVideoMetadata;
@class AVPlayerItem, NSError, NFStateMachine, NSMutableArray, NSString;

@interface SVPlayerItemLoader : NSObject <SVPlayerItemLoading> {

	id<SVPlayerItemFactory> _playerItemFactory;
	id<SVURLAssetLoading> _URLAssetLoader;
	id<SVVideoMetadata> _metadata;
	NFStateMachine* _stateMachine;
	NSMutableArray* _loadingStateChangeBlocks;
	unsigned long long _state;
	AVPlayerItem* _item;
	NSError* _error;
	/*^block*/id _cancellationBlock;

}

@property (nonatomic,readonly) id<SVPlayerItemFactory> playerItemFactory;              //@synthesize playerItemFactory=_playerItemFactory - In the implementation block
@property (nonatomic,readonly) id<SVURLAssetLoading> URLAssetLoader;                   //@synthesize URLAssetLoader=_URLAssetLoader - In the implementation block
@property (nonatomic,readonly) id<SVVideoMetadata> metadata;                           //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NFStateMachine * stateMachine;                          //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,readonly) NSMutableArray * loadingStateChangeBlocks;              //@synthesize loadingStateChangeBlocks=_loadingStateChangeBlocks - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                 //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) AVPlayerItem * item;                                      //@synthesize item=_item - In the implementation block
@property (nonatomic,copy) NSError * error;                                            //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) id cancellationBlock;                                       //@synthesize cancellationBlock=_cancellationBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVPlayerItemFactory>)playerItemFactory;
-(void)setCancellationBlock:(id)arg1 ;
-(void)loadPlayerItemWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)cancellationBlock;
-(NSMutableArray *)loadingStateChangeBlocks;
-(id<SVURLAssetLoading>)URLAssetLoader;
-(void)onLoadingStateChange:(/*^block*/id)arg1 ;
-(id)initWithPlayerItemFactory:(id)arg1 URLAssetLoader:(id)arg2 metadata:(id)arg3 ;
-(void)dealloc;
-(void)load;
-(unsigned long long)state;
-(void)setItem:(AVPlayerItem *)arg1 ;
-(AVPlayerItem *)item;
-(void)setState:(unsigned long long)arg1 ;
-(id<SVVideoMetadata>)metadata;
-(NFStateMachine *)stateMachine;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

