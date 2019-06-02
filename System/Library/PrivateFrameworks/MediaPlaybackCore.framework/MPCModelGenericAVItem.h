/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAVItem.h>
#import <libobjc.A.dylib/AVAssetResourceLoaderDelegate.h>
#import <libobjc.A.dylib/AVPlayerItemMetadataOutputPushDelegate.h>
#import <libobjc.A.dylib/ICEnvironmentMonitorObserver.h>
#import <libobjc.A.dylib/MPMusicSubscriptionLeasePlaybackParticipating.h>
#import <libobjc.A.dylib/MPRTCReportingItemSessionCreating.h>

@protocol OS_dispatch_queue, MPCReportingIdentityPropertiesLoading, MPCModelPlaybackAssetCacheProviding;
@class ICMusicSubscriptionLeaseStatus, NSString, NSObject, NSNumber, ICMusicSubscriptionLeaseSession, MPSubscriptionStatusPlaybackInformation, MPCSuzeLeaseSession, NSArray, MPModelGenericObject, MPPropertySet, MPCModelGenericAVItemTimedMetadataRequest, MPCModelGenericAVItemTimedMetadataResponse, NSOperationQueue, ICStoreRequestContext, NSURL, NSData, MPMediaLibrary, MPCPlaybackRequestEnvironment;

@interface MPCModelGenericAVItem : MPAVItem <AVAssetResourceLoaderDelegate, AVPlayerItemMetadataOutputPushDelegate, ICEnvironmentMonitorObserver, MPMusicSubscriptionLeasePlaybackParticipating, MPRTCReportingItemSessionCreating> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _allowsAirPlayFromCloud;
	NSNumber* _bookmarkTime;
	BOOL _hasLoadedSubscriptionLeaseSession;
	NSObject*<OS_dispatch_queue> _subscriptionLeaseSessionLoadQueue;
	ICMusicSubscriptionLeaseSession* _subscriptionLeaseSession;
	BOOL _hasLoadedSubscriptionPlaybackInformation;
	MPSubscriptionStatusPlaybackInformation* _subscriptionPlaybackInformation;
	NSObject*<OS_dispatch_queue> _subscriptionPlaybackInformationLoadQueue;
	BOOL _shouldAutomaticallyRefreshSubscriptionLease;
	BOOL _isAssetSubscriptionProtectionType;
	BOOL _isSubscriptionPolicyContent;
	BOOL _lastPreparedForNonZeroRate;
	long long _subscriptionLeaseRequestCount;
	BOOL _didDeferPreventionStatusUpdate;
	MPCSuzeLeaseSession* _suzeLeaseSession;
	BOOL _isAutomaticallyRefreshingSuzeLeaseSession;
	/*^block*/id _firstBecomeActivePlayerItemBlock;
	NSArray* _currentGlobalTimedMetadataGroups;
	MPModelGenericObject* _flattenedGenericObject;
	MPModelGenericObject* _flattenedMetadataGenericObject;
	MPModelGenericObject* _metadataGenericObject;
	MPPropertySet* _itemProperties;
	id<MPCReportingIdentityPropertiesLoading> _identityPropertiesLoader;
	MPCModelGenericAVItemTimedMetadataRequest* _timedMetadataRequest;
	MPCModelGenericAVItemTimedMetadataResponse* _timedMetadataResponse;
	NSOperationQueue* _timedMetadataOperationQueue;
	BOOL _isMusicCellularStreamingAllowed;
	NSNumber* _maximumSizeAllowedForCellularAccess;
	BOOL _isHLSAsset;
	BOOL _isiTunesStoreStream;
	ICStoreRequestContext* _storeRequestContext;
	NSURL* _streamingKeyCertificateURL;
	NSURL* _streamingKeyServerURL;
	id _rtcReportingParentHierarchyToken;
	NSString* _rtcReportingServiceIdentifier;
	BOOL supportsRadioTrackActions;
	BOOL _radioPlayback;
	BOOL _radioStreamPlayback;
	long long _leasePlaybackPreventionState;
	ICMusicSubscriptionLeaseStatus* _leaseStatus;
	id<MPCModelPlaybackAssetCacheProviding> _assetCacheProvider;
	NSString* _assetSourceStoreFrontID;
	long long _equivalencySourceAdamID;
	MPModelGenericObject* _genericObject;
	NSData* _jingleTimedMetadata;
	MPMediaLibrary* _mediaLibrary;
	NSNumber* _siriInitiated;
	MPCPlaybackRequestEnvironment* _playbackRequestEnvironment;
	long long _stationItemLikedState;

}

@property (nonatomic,retain) id<MPCModelPlaybackAssetCacheProviding> assetCacheProvider;                     //@synthesize assetCacheProvider=_assetCacheProvider - In the implementation block
@property (nonatomic,copy) NSString * assetSourceStoreFrontID;                                               //@synthesize assetSourceStoreFrontID=_assetSourceStoreFrontID - In the implementation block
@property (assign,nonatomic) long long equivalencySourceAdamID;                                              //@synthesize equivalencySourceAdamID=_equivalencySourceAdamID - In the implementation block
@property (nonatomic,retain) MPModelGenericObject * genericObject;                                           //@synthesize genericObject=_genericObject - In the implementation block
@property (nonatomic,copy,readonly) NSData * jingleTimedMetadata;                                            //@synthesize jingleTimedMetadata=_jingleTimedMetadata - In the implementation block
@property (nonatomic,retain) MPMediaLibrary * mediaLibrary;                                                  //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (getter=isSiriInitiated,nonatomic,copy) NSNumber * siriInitiated;                                  //@synthesize siriInitiated=_siriInitiated - In the implementation block
@property (assign,getter=isRadioPlayback,nonatomic) BOOL radioPlayback;                                      //@synthesize radioPlayback=_radioPlayback - In the implementation block
@property (assign,getter=isRadioStreamPlayback,nonatomic) BOOL radioStreamPlayback;                          //@synthesize radioStreamPlayback=_radioStreamPlayback - In the implementation block
@property (nonatomic,readonly) BOOL shouldReportPlayEventsToStore; 
@property (nonatomic,copy,readonly) MPCPlaybackRequestEnvironment * playbackRequestEnvironment;              //@synthesize playbackRequestEnvironment=_playbackRequestEnvironment - In the implementation block
@property (assign,nonatomic) long long stationItemLikedState;                                                //@synthesize stationItemLikedState=_stationItemLikedState - In the implementation block
@property (assign,nonatomic) BOOL supportsRadioTrackActions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long leasePlaybackPreventionState;                                       //@synthesize leasePlaybackPreventionState=_leasePlaybackPreventionState - In the implementation block
@property (nonatomic,copy,readonly) ICMusicSubscriptionLeaseStatus * leaseStatus;                            //@synthesize leaseStatus=_leaseStatus - In the implementation block
@property (nonatomic,readonly) id rtcReportingParentHierarchyToken; 
@property (nonatomic,copy,readonly) NSString * rtcReportingServiceIdentifier; 
@property (nonatomic,readonly) long long rtcReportingAssetType; 
+(BOOL)_prefersHighQualityVideoContentForNetworkType:(long long)arg1 ;
+(BOOL)_prefersHighQualityAudioContentForNetworkType:(long long)arg1 ;
+(id)_utilitySerialQueue;
-(void)metadataOutput:(id)arg1 didOutputTimedMetadataGroups:(id)arg2 fromPlayerItemTrack:(id)arg3 ;
-(long long)stationID;
-(void)setRating:(float)arg1 ;
-(id)isSiriInitiated;
-(void)setSiriInitiated:(NSNumber *)arg1 ;
-(id)artist;
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
-(void)loadAssetAndPlayerItem;
-(id)bookmarkTime;
-(id)playbackInfo;
-(long long)_persistedLikedState;
-(void)_handleUpdatedLikedState:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(long long)storeItemInt64ID;
-(BOOL)useEmbeddedChapterData;
-(id)libraryLyrics;
-(BOOL)hasStoreLyrics;
-(long long)albumStoreID;
-(long long)artistStoreID;
-(long long)storeSubscriptionAdamID;
-(id)mainTitle;
-(id)albumArtist;
-(id)genre;
-(unsigned long long)albumTrackNumber;
-(unsigned long long)albumTrackCount;
-(id)externalContentIdentifier;
-(BOOL)isExplicitTrack;
-(BOOL)shouldShowComposer;
-(id)modelGenericObject;
-(id)chapterTimeMarkers;
-(id)artworkTimeMarkers;
-(id)urlTimeMarkers;
-(double)durationFromExternalMetadata;
-(unsigned long long)cloudID;
-(id)cloudAlbumID;
-(id)cloudUniversalLibraryID;
-(unsigned long long)albumPersistentID;
-(unsigned long long)albumArtistPersistentID;
-(unsigned long long)artistPersistentID;
-(unsigned long long)genrePersistentID;
-(unsigned long long)composerPersistentID;
-(BOOL)allowsEQ;
-(void)_currentPlaybackRateDidChange:(float)arg1 ;
-(id)playbackError;
-(void)setPlaybackStoppedTime:(double)arg1 ;
-(void)notePlaybackFinishedByHittingEnd;
-(void)setPlaybackCheckpointCurrentTime:(double)arg1 ;
-(void)setPlaybackFinishedTime:(double)arg1 ;
-(void)applyVolumeNormalizationWithSoundCheckEnabled:(BOOL)arg1 ;
-(BOOL)isValidPlayerSubstituteForItem:(id)arg1 ;
-(BOOL)isAssetURLValid;
-(BOOL)isStreamable;
-(void)prepareForRate:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isRadioItem;
-(id)stationName;
-(id)stationStringID;
-(BOOL)supportsRadioTrackActions;
-(void)reevaluateType;
-(void)resolvePlaybackError:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_willBecomeActivePlayerItem;
-(void)_willResignActivePlayerItem;
-(id)copyrightText;
-(BOOL)isLikedStateEnabled;
-(BOOL)supportsLikedState;
-(void)setLoudnessInfoVolumeNormalization:(float)arg1 ;
-(BOOL)prefersSeekOverSkip;
-(BOOL)shouldPreventPlayback;
-(BOOL)allowsAirPlayFromCloud;
-(BOOL)allowsExternalPlayback;
-(BOOL)requiresLoadedAssetForAirPlayProperties;
-(MPMediaLibrary *)mediaLibrary;
-(void)environmentMonitorDidChangeNetworkType:(id)arg1 ;
-(/*^block*/id)artworkCatalogBlock;
-(BOOL)shouldReportPlayEventsToStore;
-(BOOL)_shouldRememberBookmarkTime;
-(long long)equivalencySourceAdamID;
-(void)setEquivalencySourceAdamID:(long long)arg1 ;
-(NSString *)assetSourceStoreFrontID;
-(void)setAssetSourceStoreFrontID:(NSString *)arg1 ;
-(void)_applyLoudnessInfo;
-(id)_bookmarkTime;
-(id)_storeUbiquitousIdentifier;
-(id)rtcReportingParentHierarchyToken;
-(NSString *)rtcReportingServiceIdentifier;
-(long long)rtcReportingAssetType;
-(long long)mpcReporting_equivalencySourceAdamID;
-(id)mpcReporting_requestingBundleIdentifier;
-(id)mpcReporting_requestingBundleVersion;
-(MPCPlaybackRequestEnvironment *)playbackRequestEnvironment;
-(void)_contentTasteControllerDidChangeNotification:(id)arg1 ;
-(void)nowPlayingInfoCenter:(id)arg1 lyricsForContentItem:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_allowsHighQualityMusicStreamingOnCellularDidChangeNotification:(id)arg1 ;
-(unsigned long long)mediaType;
-(double)_startTime;
-(id)album;
-(id)mediaItem;
-(unsigned long long)persistentID;
-(BOOL)isRadioPlayback;
-(id)_storeRequestContext;
-(void)_getSubscriptionLeasePropertiesWithCompletion:(/*^block*/id)arg1 ;
-(void)setAssetCacheProvider:(id<MPCModelPlaybackAssetCacheProviding>)arg1 ;
-(void)setGenericObject:(MPModelGenericObject *)arg1 ;
-(void)setRadioPlayback:(BOOL)arg1 ;
-(BOOL)_allowsStreamingPlayback;
-(ICMusicSubscriptionLeaseStatus *)leaseStatus;
-(BOOL)_allowsAssetCaching;
-(id)_rtcReportingServiceIdentifierWithAssetURL:(id)arg1 ;
-(void)_applyPreferredPeakBitRateToPlayerItem:(id)arg1 withItemType:(long long)arg2 ;
-(void)_suzeLeaseSessionRenewDidFailNotification:(id)arg1 ;
-(void)_handlePlaybackFinishedTime:(double)arg1 didFinishByHittingEnd:(BOOL)arg2 ;
-(void)_updatePreventionStatusWithLeaseSession:(id)arg1 ;
-(void)_getUnverifiedSubscriptionLeaseSessionWithCompletion:(/*^block*/id)arg1 ;
-(id)_radioStation;
-(id)_stopTime;
-(void)_updateBookmarkTime:(double)arg1 isCheckpoint:(BOOL)arg2 ;
-(void)_updateHasBeenPlayedWithElapsedTime:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateAutomaticSubscriptionLeaseRefresh;
-(BOOL)isRadioStreamPlayback;
-(unsigned long long)mpcReporting_itemType;
-(NSData *)jingleTimedMetadata;
-(id)_isPrivateListeningEnabled;
-(void)_reloadTimedMetadataRequest;
-(void)_updateJingleTimedMetadata;
-(void)_invalidateContentItem;
-(void)_postInvalidationNotifications;
-(void)_timedMetadataResponseDidInvalidateNotification:(id)arg1 ;
-(id)_modelPlaybackPosition;
-(void)_subscriptionLeaseStatusDidChangeNotification:(id)arg1 ;
-(long long)leasePlaybackPreventionState;
-(id)initWithGenericObject:(id)arg1 itemProperties:(id)arg2 playbackRequestEnvironment:(id)arg3 ;
-(id)mpcReporting_identityPropertiesLoader;
-(id)mpcReporting_jingleTimedMetadata;
-(BOOL)mpcReporting_shouldUseRelativeTimePositions;
-(BOOL)mpcReporting_shouldReportPlayEventsToStore;
-(id)mpcReporting_privateListeningEnabled;
-(id)mpcReporting_siriInitiated;
-(void)setSupportsRadioTrackActions:(BOOL)arg1 ;
-(id<MPCModelPlaybackAssetCacheProviding>)assetCacheProvider;
-(MPModelGenericObject *)genericObject;
-(void)setRadioStreamPlayback:(BOOL)arg1 ;
-(long long)stationItemLikedState;
-(void)setStationItemLikedState:(long long)arg1 ;
-(float)userRating;
-(id)storeFrontIdentifier;
-(id)stationHash;
-(BOOL)isAlwaysLive;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2 ;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForRenewalOfRequestedResource:(id)arg2 ;
-(void)dealloc;
-(NSString *)description;
-(long long)type;
-(id)composer;
@end
