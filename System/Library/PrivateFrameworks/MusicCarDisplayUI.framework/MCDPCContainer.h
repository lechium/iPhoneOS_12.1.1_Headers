/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MCDPCContainerDelegate, OS_dispatch_queue;
#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
@class NSString, NSIndexPath, MCDPCItem, MCDPCModel, NSObject, NSMutableDictionary;

@interface MCDPCContainer : NSObject {

	NSString* _identifier;
	NSIndexPath* _indexPath;
	MCDPCItem* _rootItem;
	MCDPCModel* _model;
	BOOL _showPlaybackProgress;
	SCD_Struct_MC2 __supportedDelegateCalls;
	long long _cachedCount;
	id<MCDPCContainerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _serialAccessContainerQueue;
	NSMutableDictionary* _cachedIndiciesByIdentifier;
	NSMutableDictionary* _cachedItemsByIndicies;

}

@property (assign,nonatomic) long long cachedCount;                                                //@synthesize cachedCount=_cachedCount - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialAccessContainerQueue;              //@synthesize serialAccessContainerQueue=_serialAccessContainerQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedIndiciesByIdentifier;                     //@synthesize cachedIndiciesByIdentifier=_cachedIndiciesByIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedItemsByIndicies;                          //@synthesize cachedItemsByIndicies=_cachedItemsByIndicies - In the implementation block
@property (nonatomic,__weak,readonly) MCDPCItem * rootItem;                                        //@synthesize rootItem=_rootItem - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath;                                            //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * appTitle; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,__weak,readonly) MCDPCModel * model;                                          //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) BOOL showPlaybackProgress;                                          //@synthesize showPlaybackProgress=_showPlaybackProgress - In the implementation block
@property (nonatomic,readonly) long long showCurrentlyPlayingIndex; 
@property (assign,nonatomic,__weak) id<MCDPCContainerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
-(long long)cachedCount;
-(void)setCachedCount:(long long)arg1 ;
-(MCDPCItem *)rootItem;
-(void)refreshWithCompletion:(/*^block*/id)arg1 ;
-(id)containerAtIndex:(long long)arg1 ;
-(void)fetchContentWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)appTitle;
-(id)cachedItemForIndex:(long long)arg1 ;
-(BOOL)showPlaybackProgress;
-(long long)showCurrentlyPlayingIndex;
-(void)beginLoadingItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isValidForRefreshedParent:(id)arg1 ;
-(void)_contentItemsUpdated:(id)arg1 ;
-(id)_initWithModel:(id)arg1 rootItem:(id)arg2 indexPath:(id)arg3 ;
-(void)getNowPlayingIdentifiersWithCompletion:(/*^block*/id)arg1 ;
-(void)_nowPlayingIdentifiersDidChange:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialAccessContainerQueue;
-(void)setCachedItemsByIndicies:(NSMutableDictionary *)arg1 ;
-(void)setCachedIndiciesByIdentifier:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cachedIndiciesByIdentifier;
-(NSMutableDictionary *)cachedItemsByIndicies;
-(id)cachedIndexByIdentifier:(id)arg1 ;
-(void)getChildrenInRange:(NSRange)arg1 completion:(/*^block*/id)arg2 ;
-(void)getCountOfChildrenWithCompletion:(/*^block*/id)arg1 ;
-(void)getPlaybackProgressSupportForChildrenWithCompletion:(/*^block*/id)arg1 ;
-(void)beginLoadingItemWithCompletion:(/*^block*/id)arg1 ;
-(id)containerForItem:(id)arg1 ;
-(void)setShowPlaybackProgress:(BOOL)arg1 ;
-(void)updateRootItemWithCompletion:(/*^block*/id)arg1 ;
-(id)cachedItemForIdentifier:(id)arg1 ;
-(void)setSerialAccessContainerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(NSString *)identifier;
-(id)description;
-(void)setDelegate:(id<MCDPCContainerDelegate>)arg1 ;
-(NSString *)title;
-(id<MCDPCContainerDelegate>)delegate;
-(void)invalidate;
-(NSIndexPath *)indexPath;
-(MCDPCModel *)model;
-(void)setCount:(long long)arg1 ;
@end

