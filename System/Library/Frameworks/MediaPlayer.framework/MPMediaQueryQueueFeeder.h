/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPQueueFeeder.h>
#import <libobjc.A.dylib/MPAVRoutingControllerDelegate.h>
#import <libobjc.A.dylib/MPRTCReportingItemSessionContaining.h>
#import <libobjc.A.dylib/MPShuffleControllerDataSource.h>

@class NSString, NSDictionary, MPMediaLibraryConnectionAssertion, MPMediaQuery, NSArray, MPShuffleController, MSVMutableBidirectionalDictionary, MPMediaItem;

@interface MPMediaQueryQueueFeeder : MPQueueFeeder <MPAVRoutingControllerDelegate, MPRTCReportingItemSessionContaining, MPShuffleControllerDataSource> {

	MPMediaLibraryConnectionAssertion* _connectionAssertion;
	unsigned long long _feederRevisionID;
	BOOL _hasValidItems;
	BOOL _isSiriInitiated;
	MPMediaQuery* _query;
	NSArray* _queryItems;
	MPShuffleController* _shuffleController;
	vector<long long, std::__1::allocator<long long> >* _itemPIDs;
	MSVMutableBidirectionalDictionary* _indexToIdentifierCache;
	unsigned long long _currentInvalidationRevision;
	NSDictionary* _startTimeModifications;
	NSDictionary* _endTimeModifications;
	BOOL _isPlaylistQueueFeeder;
	MPMediaItem* _cloudDialogAllowedMediaItem;

}

@property (nonatomic,copy) MPMediaQuery * query;                                                       //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) MPMediaItem * cloudDialogAllowedMediaItem;                                //@synthesize cloudDialogAllowedMediaItem=_cloudDialogAllowedMediaItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * rtcReportingPlayQueueSourceIdentifier; 
@property (nonatomic,copy,readonly) NSDictionary * rtcReportingSessionAdditionalUserInfo; 
+(id)audioSessionModeForMediaType:(unsigned long long)arg1 ;
+(Class)playbackItemMetadataClass;
+(id)_itemsForQuery:(id)arg1 shuffleType:(long long)arg2 ;
+(BOOL)supportsSecureCoding;
-(id)pathAtIndex:(unsigned long long)arg1 ;
-(id)identifierAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfItemWithIdentifier:(id)arg1 ;
-(id)copyRawItemAtIndex:(unsigned long long)arg1 ;
-(id)playbackInfoForIdentifier:(id)arg1 ;
-(void)reloadWithPlaybackContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)modelPlayEvent;
-(Class)itemClass;
-(BOOL)hasValidItemAtIndex:(unsigned long long)arg1 ;
-(id)mediaItemAtIndex:(unsigned long long)arg1 ;
-(BOOL)shouldReuseQueueFeederForPlaybackContext:(id)arg1 ;
-(void)shuffleItemsWithAnchor:(unsigned long long*)arg1 ;
-(long long)itemTypeForIndex:(unsigned long long)arg1 ;
-(void)applyVolumeNormalizationForItem:(id)arg1 ;
-(id)audioSessionModeForItemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)initialPlaybackQueueDepthForStartingIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfMediaItem:(id)arg1 ;
-(void)player:(id)arg1 currentItemWillChangeFromItem:(id)arg2 ;
-(id)shuffleController:(id)arg1 identifierForItemAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)shuffleController:(id)arg1 countOfItemIdentifier:(id)arg2 withMaximumCount:(unsigned long long)arg3 ;
-(unsigned long long)itemCountForShuffleController:(id)arg1 ;
-(NSString *)rtcReportingPlayQueueSourceIdentifier;
-(void)_libraryDidChangeNotification:(id)arg1 ;
-(void)_allowsHighQualityMusicStreamingOnCellularDidChangeNotification:(id)arg1 ;
-(id)_mediaItemForPID:(unsigned long long)arg1 ;
-(void)setCloudDialogAllowedMediaItem:(MPMediaItem *)arg1 ;
-(unsigned long long)_playbackIndexByApplyShuffleType:(long long)arg1 withStartIndex:(unsigned long long)arg2 startIndexMediaItem:(id)arg3 shouldKeepConsistentQueueOrder:(BOOL)arg4 ;
-(id)_currentEmptyQueueError;
-(void)_reloadQueryItems;
-(unsigned long long)_indexForSongShuffledIndex:(unsigned long long)arg1 ;
-(id)_identifierAtIndex:(unsigned long long)arg1 ;
-(void)_invalidateMediaLibraryValues;
-(unsigned long long)_indexForPersistentID:(unsigned long long)arg1 ;
-(void)_handleMediaLibraryDidChange;
-(void)_verifyQueueInvalidationCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)supportsAddToQueue;
-(unsigned long long)unshuffledIndexOfAVItem:(id)arg1 ;
-(MPMediaItem *)cloudDialogAllowedMediaItem;
-(id)itemForIdentifier:(id)arg1 ;
-(void)setQuery:(MPMediaQuery *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(unsigned long long)itemCount;
-(MPMediaQuery *)query;
@end

