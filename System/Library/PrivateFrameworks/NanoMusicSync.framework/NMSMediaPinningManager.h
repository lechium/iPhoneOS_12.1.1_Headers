/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICEnvironmentMonitorObserver.h>

@protocol OS_dispatch_queue;
@class NMSyncDefaults, NMSPodcastSizeCache, NSObject, NSArray, NMSMediaQuotaManager, NSNumber, NSString;

@interface NMSMediaPinningManager : NSObject <ICEnvironmentMonitorObserver> {

	NMSyncDefaults* _sharedDefaults;
	NMSPodcastSizeCache* _podcastSizeCache;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSArray* _cachedPlaylistIdentifiers;
	NSArray* _cachedAlbumIdentifiers;
	BOOL _pinnedPlaylistsValidated;
	BOOL _workoutPlaylistValidated;
	NMSMediaQuotaManager* _quotaManager;

}

@property (nonatomic,retain) NMSMediaQuotaManager * quotaManager;                //@synthesize quotaManager=_quotaManager - In the implementation block
@property (nonatomic,readonly) NSArray * addedItems; 
@property (nonatomic,readonly) NSArray * addedMusicItems; 
@property (nonatomic,readonly) NSArray * addedPodcastsItems; 
@property (nonatomic,readonly) NSArray * pinnedPlaylists; 
@property (nonatomic,readonly) NSArray * playlistIdentifiers; 
@property (nonatomic,readonly) NSArray * pinnedAlbums; 
@property (nonatomic,readonly) NSArray * albumIdentifiers; 
@property (nonatomic,retain) NSNumber * workoutPlaylistID; 
@property (assign,nonatomic) BOOL pinnedPodcastsAreUserSet; 
@property (nonatomic,readonly) NSArray * offPowerEligibleSongsList; 
@property (nonatomic,readonly) NSArray * onlyOnPowerSongsList; 
@property (nonatomic,readonly) NSArray * addedPodcastEpisodesArray; 
@property (nonatomic,retain) NSNumber * podcastsAssetSyncLimit; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)_mediaStorageSizeForCurrentDevice;
+(id)_cachedAlbumIdentifiersFilePath;
+(id)_cachedPlaylistIdentifiersFilePath;
+(BOOL)playlistPIDValidForPinning:(id)arg1 ;
+(id)_tokenForInstance:(id)arg1 ;
+(void)_persistNewClientToken;
+(id)_fetchMusicRecommendations;
+(id)_cachedIdentifiersDirectoryPath;
+(id)sharedManager;
-(NSArray *)playlistIdentifiers;
-(NSArray *)addedItems;
-(BOOL)isItemGroupWithinQuota:(id)arg1 ;
-(id)itemGroupForIdentifiers:(id)arg1 ;
-(void)_handleMusicPinningSelectionsDidChangeNotification:(id)arg1 ;
-(void)_handlePodcastsPinningSelectionsDidChangeNotification:(id)arg1 ;
-(void)_handleRecommendationLibraryContentsDidChangeNotification:(id)arg1 ;
-(void)_handleRecommendationsDidUpdateNotification:(id)arg1 ;
-(void)_handleMediaLibraryEntitiesAddedOrRemovedNotification:(id)arg1 ;
-(void)_handlePodcastSizeInfoDidChangeNotification:(id)arg1 ;
-(void)_handleRecommendationSelectionsDidChangeNotification:(id)arg1 ;
-(void)_handlePairedDeviceDidBecomeActiveNotification:(id)arg1 ;
-(void)_handlePodcastSizeCacheDidUpdateNotification:(id)arg1 ;
-(void)_invalidateMusicCache;
-(NMSMediaQuotaManager *)quotaManager;
-(BOOL)_quotaManagerShouldFetchDownloadedItemsOnly;
-(id)itemsWithinAvailableSpace:(unsigned long long)arg1 downloadedItemsOnly:(BOOL)arg2 ;
-(id)_newMusicGroupIteratorWithDownloadedItemsOnly:(BOOL)arg1 ;
-(id)_newPodcastsGroupIteratorWithDownloadedItemsOnly:(BOOL)arg1 ;
-(void)_refreshAlbumIdentifiersWithPath:(id)arg1 ;
-(NSArray *)pinnedAlbums;
-(void)_refreshPlaylistIdentifiersWithPath:(id)arg1 ;
-(NSArray *)pinnedPlaylists;
-(BOOL)_isAlbumPinned:(id)arg1 ;
-(BOOL)_isPlaylistPinned:(id)arg1 ;
-(NSNumber *)workoutPlaylistID;
-(void)_setWorkoutPlaylistID:(id)arg1 ;
-(void)setWorkoutPlaylistID:(NSNumber *)arg1 ;
-(void)_updateWorkoutSettingsPlaylistPIDTo:(id)arg1 ;
-(NSArray *)addedMusicItems;
-(NSArray *)addedPodcastsItems;
-(void)_invalidatePodcastsCache;
-(BOOL)pinnedPodcastsAreUserSet;
-(void)setPinnedPodcastsAreUserSet:(BOOL)arg1 ;
-(void)setListenNowPodcastFeedURLs:(id)arg1 ;
-(NSNumber *)podcastsAssetSyncLimit;
-(void)setPodcastsAssetSyncLimit:(NSNumber *)arg1 ;
-(void)_notePinningSettingsChangedLocally;
-(void)_invalidateAddedItemsCache;
-(unsigned)_pairedWatchVersion;
-(void)invalidateMusicCache;
-(id)addedItemsForDownloadWithinAvailableSpace:(unsigned long long)arg1 ;
-(unsigned long long)minimumCacheDeleteQuotaForDevice;
-(unsigned long long)addedSongsSize;
-(unsigned long long)nominatedSongsSize;
-(NSArray *)albumIdentifiers;
-(BOOL)isAlbumPinned:(id)arg1 ;
-(BOOL)isPlaylistPinned:(id)arg1 ;
-(void)pinAlbum:(id)arg1 ;
-(void)pinPlaylist:(id)arg1 ;
-(void)unpinAlbum:(id)arg1 ;
-(void)unpinPlaylist:(id)arg1 ;
-(id)addedItemsWithMediaTypes:(unsigned)arg1 ;
-(void)invalidatePodcastsCache;
-(void)setGizmoDownloadOrder:(unsigned long long)arg1 forPodcastWithFeedURL:(id)arg2 ;
-(void)removePodcastWithFeedURL:(id)arg1 ;
-(unsigned long long)downloadOrderForPodcastWithFeedURL:(id)arg1 ;
-(void)setGizmoEpisodeLimit:(long long)arg1 forPodcastWithFeedURL:(id)arg2 ;
-(long long)episodeLimitForPodcastWithFeedURL:(id)arg1 ;
-(void)pinPodcastWithFeedURL:(id)arg1 ;
-(void)unpinPodcastWithFeedURL:(id)arg1 ;
-(BOOL)isPodcastWithFeedURLPinned:(id)arg1 ;
-(void)setListenNowEpisodePIDs:(id)arg1 ;
-(BOOL)isPodcastWithIdentifiersPinned:(id)arg1 ;
-(void)pinPodcastWithIdentifiers:(id)arg1 ;
-(void)unpinPodcastWithIdentifiers:(id)arg1 ;
-(NSArray *)addedPodcastEpisodesArray;
-(NSArray *)offPowerEligibleSongsList;
-(NSArray *)onlyOnPowerSongsList;
-(void)setQuotaManager:(NMSMediaQuotaManager *)arg1 ;
-(id)init;
-(void)dealloc;
@end
