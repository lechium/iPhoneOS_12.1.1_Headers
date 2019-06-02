/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface ICPBDGSStartDelegationRequest : PBRequest <NSCopying> {

	NSMutableArray* _playerInfoContextRequestTokens;

}

@property (nonatomic,retain) NSMutableArray * playerInfoContextRequestTokens;              //@synthesize playerInfoContextRequestTokens=_playerInfoContextRequestTokens - In the implementation block
+(Class)playerInfoContextRequestTokenType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)playerInfoContextRequestTokens;
-(void)addPlayerInfoContextRequestToken:(id)arg1 ;
-(void)clearPlayerInfoContextRequestTokens;
-(unsigned long long)playerInfoContextRequestTokensCount;
-(id)playerInfoContextRequestTokenAtIndex:(unsigned long long)arg1 ;
-(void)setPlayerInfoContextRequestTokens:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

