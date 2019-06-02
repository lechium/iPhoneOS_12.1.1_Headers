/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, MSVMultiCallback, NSMutableDictionary, _MRNowPlayingPlayerPathProtobuf, NSArray;

@interface MRNowPlayingPlayerClientCallbacks : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	MSVMultiCallback* _createPlaybackQueueForRequestCallbacks;
	MSVMultiCallback* _createItemForOffsetCallbacks;
	MSVMultiCallback* _createChildItemCallbacks;
	MSVMultiCallback* _metadataCallbacks;
	MSVMultiCallback* _languageOptionsCallbacks;
	MSVMultiCallback* _infoCallbacks;
	MSVMultiCallback* _lyricsCallbacks;
	MSVMultiCallback* _artworkCallbacks;
	/*^block*/id _beginLyricsEventCallback;
	/*^block*/id _endLyricsEventCallback;
	/*^block*/id _videoThumbnailsCallback;
	/*^block*/id _audioAmplitudeSamplesCallback;
	NSMutableDictionary* _commandHandlerBlocks;
	_MRNowPlayingPlayerPathProtobuf* _playerPath;

}

@property (nonatomic,readonly) _MRNowPlayingPlayerPathProtobuf * playerPath;                           //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaybackQueueCallbacks; 
@property (nonatomic,readonly) unsigned long long capabilities; 
@property (nonatomic,readonly) MSVMultiCallback * createPlaybackQueueForRequestCallbacks;              //@synthesize createPlaybackQueueForRequestCallbacks=_createPlaybackQueueForRequestCallbacks - In the implementation block
@property (nonatomic,readonly) MSVMultiCallback * createItemForOffsetCallbacks;                        //@synthesize createItemForOffsetCallbacks=_createItemForOffsetCallbacks - In the implementation block
@property (nonatomic,readonly) MSVMultiCallback * createChildItemCallbacks;                            //@synthesize createChildItemCallbacks=_createChildItemCallbacks - In the implementation block
@property (nonatomic,readonly) MSVMultiCallback * metadataCallbacks;                                   //@synthesize metadataCallbacks=_metadataCallbacks - In the implementation block
@property (nonatomic,readonly) MSVMultiCallback * languageOptionsCallbacks;                            //@synthesize languageOptionsCallbacks=_languageOptionsCallbacks - In the implementation block
@property (nonatomic,readonly) MSVMultiCallback * infoCallbacks;                                       //@synthesize infoCallbacks=_infoCallbacks - In the implementation block
@property (nonatomic,readonly) MSVMultiCallback * lyricsCallbacks;                                     //@synthesize lyricsCallbacks=_lyricsCallbacks - In the implementation block
@property (nonatomic,readonly) MSVMultiCallback * artworkCallbacks;                                    //@synthesize artworkCallbacks=_artworkCallbacks - In the implementation block
@property (nonatomic,copy) id beginLyricsEventCallback; 
@property (nonatomic,copy) id endLyricsEventCallback; 
@property (nonatomic,copy,readonly) NSArray * commandHandlerBlocks; 
@property (nonatomic,copy) id videoThumbnailsCallback; 
@property (nonatomic,copy) id audioAmplitudeSamplesCallback; 
-(void)setVideoThumbnailsCallback:(id)arg1 ;
-(void)setAudioAmplitudeSamplesCallback:(id)arg1 ;
-(void)removeCommandHandlerBlockForKey:(id)arg1 ;
-(void)addCommandHandlerBlock:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(BOOL)hasPlaybackQueueCallbacks;
-(MSVMultiCallback *)createPlaybackQueueForRequestCallbacks;
-(MSVMultiCallback *)createItemForOffsetCallbacks;
-(MSVMultiCallback *)createChildItemCallbacks;
-(MSVMultiCallback *)metadataCallbacks;
-(MSVMultiCallback *)languageOptionsCallbacks;
-(MSVMultiCallback *)infoCallbacks;
-(MSVMultiCallback *)lyricsCallbacks;
-(MSVMultiCallback *)artworkCallbacks;
-(void)registerCallbacks;
-(NSArray *)commandHandlerBlocks;
-(id)videoThumbnailsCallback;
-(id)audioAmplitudeSamplesCallback;
-(id)endLyricsEventCallback;
-(id)beginLyricsEventCallback;
-(unsigned long long)_onQueue_capabilities;
-(void)registerNowPlayingInfoCallbacks:(id)arg1 ;
-(void)registerNowPlayingInfoAssetCallbacks:(id)arg1 ;
-(void)registerNowPlayingInfoArtworkAssetCallback:(id)arg1 ;
-(id)initWithPlayerPath:(id)arg1 queue:(id)arg2 ;
-(void)setBeginLyricsEventCallback:(id)arg1 ;
-(void)setEndLyricsEventCallback:(id)arg1 ;
-(void)registerNowPlayingInfoLanguageOptionsCallback:(id)arg1 ;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(unsigned long long)capabilities;
@end

