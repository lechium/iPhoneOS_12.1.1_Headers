/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface _MRCommandOptionsProtobuf : PBCodable <NSCopying> {

	double _playbackPosition;
	long long _radioStationID;
	unsigned long long _trackID;
	NSString* _commandID;
	NSString* _contentItemID;
	NSString* _contextID;
	NSString* _destinationAppDisplayID;
	NSString* _insertAfterContentItemID;
	NSData* _languageOption;
	NSString* _mediaType;
	NSString* _nowPlayingContentItemID;
	NSData* _playbackQueueContext;
	int _playbackQueueDestinationOffset;
	int _playbackQueueInsertionPosition;
	int _playbackQueueOffset;
	float _playbackRate;
	NSString* _radioStationHash;
	float _rating;
	NSString* _remoteControlInterface;
	int _repeatMode;
	int _replaceIntent;
	int _sendOptions;
	NSString* _senderID;
	int _shuffleMode;
	float _skipInterval;
	NSString* _sourceID;
	NSString* _stationURL;
	NSData* _systemAppPlaybackQueueData;
	BOOL _externalPlayerCommand;
	BOOL _negative;
	BOOL _requestDefermentToPlaybackQueuePosition;
	BOOL _shouldBeginRadioPlayback;
	BOOL _shouldOverrideManuallyCuratedQueue;
	SCD_Struct_MR23 _has;

}

@property (nonatomic,readonly) BOOL hasSourceID; 
@property (nonatomic,retain) NSString * sourceID;                                          //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,readonly) BOOL hasMediaType; 
@property (nonatomic,retain) NSString * mediaType;                                         //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) BOOL hasExternalPlayerCommand; 
@property (assign,nonatomic) BOOL externalPlayerCommand;                                   //@synthesize externalPlayerCommand=_externalPlayerCommand - In the implementation block
@property (assign,nonatomic) BOOL hasSkipInterval; 
@property (assign,nonatomic) float skipInterval;                                           //@synthesize skipInterval=_skipInterval - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackRate; 
@property (assign,nonatomic) float playbackRate;                                           //@synthesize playbackRate=_playbackRate - In the implementation block
@property (assign,nonatomic) BOOL hasRating; 
@property (assign,nonatomic) float rating;                                                 //@synthesize rating=_rating - In the implementation block
@property (assign,nonatomic) BOOL hasNegative; 
@property (assign,nonatomic) BOOL negative;                                                //@synthesize negative=_negative - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackPosition; 
@property (assign,nonatomic) double playbackPosition;                                      //@synthesize playbackPosition=_playbackPosition - In the implementation block
@property (assign,nonatomic) BOOL hasRepeatMode; 
@property (assign,nonatomic) int repeatMode;                                               //@synthesize repeatMode=_repeatMode - In the implementation block
@property (assign,nonatomic) BOOL hasShuffleMode; 
@property (assign,nonatomic) int shuffleMode;                                              //@synthesize shuffleMode=_shuffleMode - In the implementation block
@property (nonatomic,readonly) BOOL hasContextID; 
@property (nonatomic,retain) NSString * contextID;                                         //@synthesize contextID=_contextID - In the implementation block
@property (assign,nonatomic) BOOL hasTrackID; 
@property (assign,nonatomic) unsigned long long trackID;                                   //@synthesize trackID=_trackID - In the implementation block
@property (assign,nonatomic) BOOL hasRadioStationID; 
@property (assign,nonatomic) long long radioStationID;                                     //@synthesize radioStationID=_radioStationID - In the implementation block
@property (nonatomic,readonly) BOOL hasRadioStationHash; 
@property (nonatomic,retain) NSString * radioStationHash;                                  //@synthesize radioStationHash=_radioStationHash - In the implementation block
@property (nonatomic,readonly) BOOL hasSystemAppPlaybackQueueData; 
@property (nonatomic,retain) NSData * systemAppPlaybackQueueData;                          //@synthesize systemAppPlaybackQueueData=_systemAppPlaybackQueueData - In the implementation block
@property (nonatomic,readonly) BOOL hasDestinationAppDisplayID; 
@property (nonatomic,retain) NSString * destinationAppDisplayID;                           //@synthesize destinationAppDisplayID=_destinationAppDisplayID - In the implementation block
@property (assign,nonatomic) BOOL hasSendOptions; 
@property (assign,nonatomic) int sendOptions;                                              //@synthesize sendOptions=_sendOptions - In the implementation block
@property (assign,nonatomic) BOOL hasRequestDefermentToPlaybackQueuePosition; 
@property (assign,nonatomic) BOOL requestDefermentToPlaybackQueuePosition;                 //@synthesize requestDefermentToPlaybackQueuePosition=_requestDefermentToPlaybackQueuePosition - In the implementation block
@property (assign,nonatomic) BOOL hasShouldOverrideManuallyCuratedQueue; 
@property (assign,nonatomic) BOOL shouldOverrideManuallyCuratedQueue;                      //@synthesize shouldOverrideManuallyCuratedQueue=_shouldOverrideManuallyCuratedQueue - In the implementation block
@property (nonatomic,readonly) BOOL hasStationURL; 
@property (nonatomic,retain) NSString * stationURL;                                        //@synthesize stationURL=_stationURL - In the implementation block
@property (assign,nonatomic) BOOL hasShouldBeginRadioPlayback; 
@property (assign,nonatomic) BOOL shouldBeginRadioPlayback;                                //@synthesize shouldBeginRadioPlayback=_shouldBeginRadioPlayback - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackQueueInsertionPosition; 
@property (assign,nonatomic) int playbackQueueInsertionPosition;                           //@synthesize playbackQueueInsertionPosition=_playbackQueueInsertionPosition - In the implementation block
@property (nonatomic,readonly) BOOL hasContentItemID; 
@property (nonatomic,retain) NSString * contentItemID;                                     //@synthesize contentItemID=_contentItemID - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackQueueOffset; 
@property (assign,nonatomic) int playbackQueueOffset;                                      //@synthesize playbackQueueOffset=_playbackQueueOffset - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackQueueDestinationOffset; 
@property (assign,nonatomic) int playbackQueueDestinationOffset;                           //@synthesize playbackQueueDestinationOffset=_playbackQueueDestinationOffset - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguageOption; 
@property (nonatomic,retain) NSData * languageOption;                                      //@synthesize languageOption=_languageOption - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaybackQueueContext; 
@property (nonatomic,retain) NSData * playbackQueueContext;                                //@synthesize playbackQueueContext=_playbackQueueContext - In the implementation block
@property (nonatomic,readonly) BOOL hasInsertAfterContentItemID; 
@property (nonatomic,retain) NSString * insertAfterContentItemID;                          //@synthesize insertAfterContentItemID=_insertAfterContentItemID - In the implementation block
@property (nonatomic,readonly) BOOL hasNowPlayingContentItemID; 
@property (nonatomic,retain) NSString * nowPlayingContentItemID;                           //@synthesize nowPlayingContentItemID=_nowPlayingContentItemID - In the implementation block
@property (assign,nonatomic) BOOL hasReplaceIntent; 
@property (assign,nonatomic) int replaceIntent;                                            //@synthesize replaceIntent=_replaceIntent - In the implementation block
@property (nonatomic,readonly) BOOL hasCommandID; 
@property (nonatomic,retain) NSString * commandID;                                         //@synthesize commandID=_commandID - In the implementation block
@property (nonatomic,readonly) BOOL hasSenderID; 
@property (nonatomic,retain) NSString * senderID;                                          //@synthesize senderID=_senderID - In the implementation block
@property (nonatomic,readonly) BOOL hasRemoteControlInterface; 
@property (nonatomic,retain) NSString * remoteControlInterface;                            //@synthesize remoteControlInterface=_remoteControlInterface - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(float)rating;
-(void)setRating:(float)arg1 ;
-(BOOL)hasRating;
-(BOOL)hasSourceID;
-(void)setHasPlaybackRate:(BOOL)arg1 ;
-(BOOL)hasPlaybackRate;
-(void)setHasRepeatMode:(BOOL)arg1 ;
-(BOOL)hasRepeatMode;
-(id)repeatModeAsString:(int)arg1 ;
-(int)StringAsRepeatMode:(id)arg1 ;
-(void)setHasShuffleMode:(BOOL)arg1 ;
-(BOOL)hasShuffleMode;
-(id)shuffleModeAsString:(int)arg1 ;
-(int)StringAsShuffleMode:(id)arg1 ;
-(BOOL)hasRadioStationHash;
-(void)setDestinationAppDisplayID:(NSString *)arg1 ;
-(BOOL)hasDestinationAppDisplayID;
-(NSString *)destinationAppDisplayID;
-(BOOL)hasCommandID;
-(void)setSkipInterval:(float)arg1 ;
-(void)setHasSkipInterval:(BOOL)arg1 ;
-(BOOL)hasSkipInterval;
-(float)skipInterval;
-(void)setSystemAppPlaybackQueueData:(NSData *)arg1 ;
-(void)setStationURL:(NSString *)arg1 ;
-(void)setLanguageOption:(NSData *)arg1 ;
-(void)setPlaybackQueueContext:(NSData *)arg1 ;
-(void)setInsertAfterContentItemID:(NSString *)arg1 ;
-(void)setNowPlayingContentItemID:(NSString *)arg1 ;
-(void)setSenderID:(NSString *)arg1 ;
-(void)setRemoteControlInterface:(NSString *)arg1 ;
-(void)setExternalPlayerCommand:(BOOL)arg1 ;
-(void)setHasExternalPlayerCommand:(BOOL)arg1 ;
-(BOOL)hasExternalPlayerCommand;
-(void)setHasRating:(BOOL)arg1 ;
-(void)setHasNegative:(BOOL)arg1 ;
-(BOOL)hasNegative;
-(void)setHasPlaybackPosition:(BOOL)arg1 ;
-(BOOL)hasPlaybackPosition;
-(BOOL)hasContextID;
-(void)setHasTrackID:(BOOL)arg1 ;
-(BOOL)hasTrackID;
-(void)setHasRadioStationID:(BOOL)arg1 ;
-(BOOL)hasRadioStationID;
-(BOOL)hasSystemAppPlaybackQueueData;
-(int)sendOptions;
-(void)setSendOptions:(int)arg1 ;
-(void)setHasSendOptions:(BOOL)arg1 ;
-(BOOL)hasSendOptions;
-(id)sendOptionsAsString:(int)arg1 ;
-(int)StringAsSendOptions:(id)arg1 ;
-(void)setRequestDefermentToPlaybackQueuePosition:(BOOL)arg1 ;
-(void)setHasRequestDefermentToPlaybackQueuePosition:(BOOL)arg1 ;
-(BOOL)hasRequestDefermentToPlaybackQueuePosition;
-(void)setHasShouldOverrideManuallyCuratedQueue:(BOOL)arg1 ;
-(BOOL)hasShouldOverrideManuallyCuratedQueue;
-(BOOL)hasStationURL;
-(void)setShouldBeginRadioPlayback:(BOOL)arg1 ;
-(void)setHasShouldBeginRadioPlayback:(BOOL)arg1 ;
-(BOOL)hasShouldBeginRadioPlayback;
-(void)setPlaybackQueueInsertionPosition:(int)arg1 ;
-(void)setHasPlaybackQueueInsertionPosition:(BOOL)arg1 ;
-(BOOL)hasPlaybackQueueInsertionPosition;
-(BOOL)hasContentItemID;
-(void)setPlaybackQueueOffset:(int)arg1 ;
-(void)setHasPlaybackQueueOffset:(BOOL)arg1 ;
-(BOOL)hasPlaybackQueueOffset;
-(void)setPlaybackQueueDestinationOffset:(int)arg1 ;
-(void)setHasPlaybackQueueDestinationOffset:(BOOL)arg1 ;
-(BOOL)hasPlaybackQueueDestinationOffset;
-(BOOL)hasLanguageOption;
-(BOOL)hasPlaybackQueueContext;
-(BOOL)hasInsertAfterContentItemID;
-(BOOL)hasNowPlayingContentItemID;
-(void)setHasReplaceIntent:(BOOL)arg1 ;
-(BOOL)hasReplaceIntent;
-(id)replaceIntentAsString:(int)arg1 ;
-(int)StringAsReplaceIntent:(id)arg1 ;
-(BOOL)hasSenderID;
-(BOOL)hasRemoteControlInterface;
-(BOOL)externalPlayerCommand;
-(BOOL)negative;
-(NSData *)systemAppPlaybackQueueData;
-(BOOL)requestDefermentToPlaybackQueuePosition;
-(BOOL)shouldBeginRadioPlayback;
-(int)playbackQueueInsertionPosition;
-(int)playbackQueueDestinationOffset;
-(NSData *)playbackQueueContext;
-(NSString *)nowPlayingContentItemID;
-(NSString *)remoteControlInterface;
-(NSString *)contentItemID;
-(void)setPlaybackRate:(float)arg1 ;
-(double)playbackPosition;
-(void)setContentItemID:(NSString *)arg1 ;
-(BOOL)shouldOverrideManuallyCuratedQueue;
-(void)setShouldOverrideManuallyCuratedQueue:(BOOL)arg1 ;
-(int)replaceIntent;
-(void)setReplaceIntent:(int)arg1 ;
-(void)setPlaybackPosition:(double)arg1 ;
-(NSString *)commandID;
-(int)playbackQueueOffset;
-(float)playbackRate;
-(NSString *)stationURL;
-(NSString *)insertAfterContentItemID;
-(NSData *)languageOption;
-(long long)radioStationID;
-(NSString *)radioStationHash;
-(void)setShuffleMode:(int)arg1 ;
-(int)shuffleMode;
-(void)setRadioStationHash:(NSString *)arg1 ;
-(void)setRadioStationID:(long long)arg1 ;
-(NSString *)mediaType;
-(void)setMediaType:(NSString *)arg1 ;
-(BOOL)hasMediaType;
-(NSString *)sourceID;
-(void)setSourceID:(NSString *)arg1 ;
-(void)setCommandID:(NSString *)arg1 ;
-(unsigned long long)trackID;
-(void)setTrackID:(unsigned long long)arg1 ;
-(int)repeatMode;
-(void)setRepeatMode:(int)arg1 ;
-(void)setNegative:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)contextID;
-(void)setContextID:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)senderID;
-(void)copyTo:(id)arg1 ;
@end

