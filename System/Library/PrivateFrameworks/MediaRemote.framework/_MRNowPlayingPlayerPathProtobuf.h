/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRNowPlayingClientProtobuf, _MROriginProtobuf, _MRNowPlayingPlayerProtobuf;

@interface _MRNowPlayingPlayerPathProtobuf : PBCodable <NSCopying> {

	_MRNowPlayingClientProtobuf* _client;
	_MROriginProtobuf* _origin;
	_MRNowPlayingPlayerProtobuf* _player;

}

@property (nonatomic,readonly) BOOL isLocal; 
@property (nonatomic,readonly) BOOL hasOrigin; 
@property (nonatomic,retain) _MROriginProtobuf * origin;                        //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) BOOL hasClient; 
@property (nonatomic,retain) _MRNowPlayingClientProtobuf * client;              //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) BOOL hasPlayer; 
@property (nonatomic,retain) _MRNowPlayingPlayerProtobuf * player;              //@synthesize player=_player - In the implementation block
+(void)initialize;
-(BOOL)hasClient;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasOrigin;
-(id)customDictionaryRepresentation;
-(BOOL)hasPlayer;
-(_MRNowPlayingPlayerProtobuf *)player;
-(void)setPlayer:(_MRNowPlayingPlayerProtobuf *)arg1 ;
-(id)customDescription;
-(_MRNowPlayingClientProtobuf *)client;
-(void)setClient:(_MRNowPlayingClientProtobuf *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_MROriginProtobuf *)origin;
-(void)setOrigin:(_MROriginProtobuf *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)isLocal;
-(void)copyTo:(id)arg1 ;
@end

