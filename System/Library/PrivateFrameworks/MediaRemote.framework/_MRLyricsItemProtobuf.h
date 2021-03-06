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

@class NSString, _MRLyricsTokenProtobuf;

@interface _MRLyricsItemProtobuf : PBCodable <NSCopying> {

	NSString* _lyrics;
	_MRLyricsTokenProtobuf* _token;
	BOOL _userProvided;
	SCD_Struct_MR4 _has;

}

@property (nonatomic,readonly) BOOL hasLyrics; 
@property (nonatomic,retain) NSString * lyrics;                           //@synthesize lyrics=_lyrics - In the implementation block
@property (assign,nonatomic) BOOL hasUserProvided; 
@property (assign,nonatomic) BOOL userProvided;                           //@synthesize userProvided=_userProvided - In the implementation block
@property (nonatomic,readonly) BOOL hasToken; 
@property (nonatomic,retain) _MRLyricsTokenProtobuf * token;              //@synthesize token=_token - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasToken;
-(void)setUserProvided:(BOOL)arg1 ;
-(void)setHasUserProvided:(BOOL)arg1 ;
-(BOOL)hasUserProvided;
-(NSString *)lyrics;
-(void)setLyrics:(NSString *)arg1 ;
-(BOOL)hasLyrics;
-(BOOL)userProvided;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(_MRLyricsTokenProtobuf *)token;
-(void)setToken:(_MRLyricsTokenProtobuf *)arg1 ;
@end

