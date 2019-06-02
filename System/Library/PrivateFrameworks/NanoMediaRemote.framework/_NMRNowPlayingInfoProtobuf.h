/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface _NMRNowPlayingInfoProtobuf : PBCodable <NSCopying> {

	double _duration;
	double _elapsedTime;
	long long _radioStationIdentifier;
	long long _storeAdamID;
	double _timestamp;
	unsigned long long _uniqueIdentifier;
	NSString* _album;
	NSString* _artist;
	NSData* _artworkDataDigest;
	float _playbackRate;
	float _preferredPlaybackRate;
	NSString* _radioStationHash;
	NSString* _radioStationName;
	int _repeatMode;
	int _shuffleMode;
	NSString* _title;
	BOOL _isAdvertisement;
	BOOL _isAlwaysLive;
	BOOL _isExplicitTrack;
	BOOL _isMusicApp;
	SCD_Struct_NM10 _has;

}

@property (nonatomic,readonly) BOOL hasAlbum; 
@property (nonatomic,retain) NSString * album;                                 //@synthesize album=_album - In the implementation block
@property (nonatomic,readonly) BOOL hasArtist; 
@property (nonatomic,retain) NSString * artist;                                //@synthesize artist=_artist - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) double duration;                                  //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasElapsedTime; 
@property (assign,nonatomic) double elapsedTime;                               //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackRate; 
@property (assign,nonatomic) float playbackRate;                               //@synthesize playbackRate=_playbackRate - In the implementation block
@property (assign,nonatomic) BOOL hasRepeatMode; 
@property (assign,nonatomic) int repeatMode;                                   //@synthesize repeatMode=_repeatMode - In the implementation block
@property (assign,nonatomic) BOOL hasShuffleMode; 
@property (assign,nonatomic) int shuffleMode;                                  //@synthesize shuffleMode=_shuffleMode - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL hasUniqueIdentifier; 
@property (assign,nonatomic) unsigned long long uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasIsExplicitTrack; 
@property (assign,nonatomic) BOOL isExplicitTrack;                             //@synthesize isExplicitTrack=_isExplicitTrack - In the implementation block
@property (assign,nonatomic) BOOL hasIsMusicApp; 
@property (assign,nonatomic) BOOL isMusicApp;                                  //@synthesize isMusicApp=_isMusicApp - In the implementation block
@property (assign,nonatomic) BOOL hasRadioStationIdentifier; 
@property (assign,nonatomic) long long radioStationIdentifier;                 //@synthesize radioStationIdentifier=_radioStationIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasRadioStationHash; 
@property (nonatomic,retain) NSString * radioStationHash;                      //@synthesize radioStationHash=_radioStationHash - In the implementation block
@property (nonatomic,readonly) BOOL hasRadioStationName; 
@property (nonatomic,retain) NSString * radioStationName;                      //@synthesize radioStationName=_radioStationName - In the implementation block
@property (nonatomic,readonly) BOOL hasArtworkDataDigest; 
@property (nonatomic,retain) NSData * artworkDataDigest;                       //@synthesize artworkDataDigest=_artworkDataDigest - In the implementation block
@property (assign,nonatomic) BOOL hasIsAlwaysLive; 
@property (assign,nonatomic) BOOL isAlwaysLive;                                //@synthesize isAlwaysLive=_isAlwaysLive - In the implementation block
@property (assign,nonatomic) BOOL hasIsAdvertisement; 
@property (assign,nonatomic) BOOL isAdvertisement;                             //@synthesize isAdvertisement=_isAdvertisement - In the implementation block
@property (assign,nonatomic) BOOL hasStoreAdamID; 
@property (assign,nonatomic) long long storeAdamID;                            //@synthesize storeAdamID=_storeAdamID - In the implementation block
@property (assign,nonatomic) BOOL hasPreferredPlaybackRate; 
@property (assign,nonatomic) float preferredPlaybackRate;                      //@synthesize preferredPlaybackRate=_preferredPlaybackRate - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasDuration;
-(BOOL)hasUniqueIdentifier;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setArtworkDataDigest:(NSData *)arg1 ;
-(NSData *)artworkDataDigest;
-(BOOL)hasAlbum;
-(BOOL)hasArtist;
-(void)setHasElapsedTime:(BOOL)arg1 ;
-(BOOL)hasElapsedTime;
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
-(void)setHasUniqueIdentifier:(BOOL)arg1 ;
-(void)setIsExplicitTrack:(BOOL)arg1 ;
-(void)setHasIsExplicitTrack:(BOOL)arg1 ;
-(BOOL)hasIsExplicitTrack;
-(void)setIsMusicApp:(BOOL)arg1 ;
-(void)setHasIsMusicApp:(BOOL)arg1 ;
-(BOOL)hasIsMusicApp;
-(void)setRadioStationIdentifier:(long long)arg1 ;
-(void)setHasRadioStationIdentifier:(BOOL)arg1 ;
-(BOOL)hasRadioStationIdentifier;
-(BOOL)hasRadioStationHash;
-(BOOL)hasRadioStationName;
-(BOOL)hasArtworkDataDigest;
-(void)setIsAlwaysLive:(BOOL)arg1 ;
-(void)setHasIsAlwaysLive:(BOOL)arg1 ;
-(BOOL)hasIsAlwaysLive;
-(void)setIsAdvertisement:(BOOL)arg1 ;
-(void)setHasIsAdvertisement:(BOOL)arg1 ;
-(BOOL)hasIsAdvertisement;
-(BOOL)isMusicApp;
-(long long)radioStationIdentifier;
-(BOOL)isAdvertisement;
-(void)setPreferredPlaybackRate:(float)arg1 ;
-(void)setHasPreferredPlaybackRate:(BOOL)arg1 ;
-(BOOL)hasPreferredPlaybackRate;
-(NSString *)artist;
-(void)setArtist:(NSString *)arg1 ;
-(void)setPlaybackRate:(float)arg1 ;
-(BOOL)isExplicitTrack;
-(void)setRadioStationName:(NSString *)arg1 ;
-(long long)storeAdamID;
-(void)setStoreAdamID:(long long)arg1 ;
-(float)playbackRate;
-(NSString *)radioStationHash;
-(void)setShuffleMode:(int)arg1 ;
-(float)preferredPlaybackRate;
-(int)shuffleMode;
-(NSString *)radioStationName;
-(void)setRadioStationHash:(NSString *)arg1 ;
-(NSString *)album;
-(void)setElapsedTime:(double)arg1 ;
-(void)setAlbum:(NSString *)arg1 ;
-(void)setHasStoreAdamID:(BOOL)arg1 ;
-(BOOL)hasStoreAdamID;
-(BOOL)isAlwaysLive;
-(int)repeatMode;
-(void)setRepeatMode:(int)arg1 ;
-(BOOL)validateUniqueIdentifier:(id*)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDuration:(double)arg1 ;
-(BOOL)hasTitle;
-(double)timestamp;
-(double)duration;
-(unsigned long long)uniqueIdentifier;
-(void)setUniqueIdentifier:(unsigned long long)arg1 ;
-(double)elapsedTime;
-(id)dictionaryRepresentation;
-(void)setTimestamp:(double)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

