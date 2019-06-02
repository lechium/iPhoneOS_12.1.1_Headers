/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, NSData, GKPlayerInternal, NSDictionary;

@interface GKInviteInternal : GKInternalRepresentation {

	NSString* _inviteID;
	NSData* _sessionToken;
	GKPlayerInternal* _player;
	NSString* _message;
	NSDictionary* _localizableMessage;
	NSString* _deviceID;
	NSString* _bundleID;
	NSString* _peerID;
	NSData* _peerPushToken;
	NSData* _peerNATIP;
	NSData* _peerBlob;
	NSString* _rid;
	int _playerGroup;
	unsigned _playerAttributes;
	int _peerNATType;
	unsigned long long _matchType;
	unsigned char _version;
	NSString* _participantID;

}

@property (nonatomic,retain) NSString * inviteID;                            //@synthesize inviteID=_inviteID - In the implementation block
@property (nonatomic,retain) NSData * sessionToken;                          //@synthesize sessionToken=_sessionToken - In the implementation block
@property (nonatomic,retain) GKPlayerInternal * player;                      //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) NSString * message;                             //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSDictionary * localizableMessage;              //@synthesize localizableMessage=_localizableMessage - In the implementation block
@property (assign,nonatomic) unsigned long long matchType;                   //@synthesize matchType=_matchType - In the implementation block
@property (assign,nonatomic) int playerGroup;                                //@synthesize playerGroup=_playerGroup - In the implementation block
@property (assign,nonatomic) unsigned playerAttributes;                      //@synthesize playerAttributes=_playerAttributes - In the implementation block
@property (nonatomic,retain) NSString * peerID;                              //@synthesize peerID=_peerID - In the implementation block
@property (nonatomic,retain) NSData * peerPushToken;                         //@synthesize peerPushToken=_peerPushToken - In the implementation block
@property (assign,nonatomic) int peerNATType;                                //@synthesize peerNATType=_peerNATType - In the implementation block
@property (nonatomic,retain) NSData * peerNATIP;                             //@synthesize peerNATIP=_peerNATIP - In the implementation block
@property (nonatomic,retain) NSData * peerBlob;                              //@synthesize peerBlob=_peerBlob - In the implementation block
@property (nonatomic,retain) NSString * rid;                                 //@synthesize rid=_rid - In the implementation block
@property (assign,nonatomic) unsigned char version;                          //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSString * participantID;                       //@synthesize participantID=_participantID - In the implementation block
@property (nonatomic,retain) NSString * deviceID;                            //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                            //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) BOOL isNearby; 
+(id)secureCodedPropertyKeys;
+(id)inviteFromNearbyPlayer:(id)arg1 participantID:(id)arg2 deviceID:(id)arg3 bundleID:(id)arg4 connectionData:(id)arg5 ;
+(id)nearbyInviteIDForPlayerID:(id)arg1 deviceID:(id)arg2 bundleID:(id)arg3 ;
+(id)inviteWithBulletin:(id)arg1 ;
-(void)setPeerID:(NSString *)arg1 ;
-(BOOL)isNearby;
-(NSString *)peerID;
-(void)setSessionToken:(NSData *)arg1 ;
-(GKPlayerInternal *)player;
-(void)setPlayer:(GKPlayerInternal *)arg1 ;
-(NSData *)sessionToken;
-(id)descriptionSubstitutionMap;
-(NSString *)inviteID;
-(int)playerGroup;
-(unsigned)playerAttributes;
-(NSData *)peerBlob;
-(NSData *)peerPushToken;
-(int)peerNATType;
-(NSData *)peerNATIP;
-(void)setRid:(NSString *)arg1 ;
-(NSDictionary *)localizableMessage;
-(void)setLocalizableMessage:(NSDictionary *)arg1 ;
-(void)setPlayerGroup:(int)arg1 ;
-(void)setPlayerAttributes:(unsigned)arg1 ;
-(NSString *)rid;
-(void)setInviteID:(NSString *)arg1 ;
-(void)setPeerPushToken:(NSData *)arg1 ;
-(void)setPeerNATType:(int)arg1 ;
-(void)setPeerNATIP:(NSData *)arg1 ;
-(void)setPeerBlob:(NSData *)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
-(void)setMatchType:(unsigned long long)arg1 ;
-(unsigned long long)matchType;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(void)setVersion:(unsigned char)arg1 ;
-(unsigned char)version;
-(NSString *)bundleID;
-(NSString *)participantID;
-(void)setParticipantID:(NSString *)arg1 ;
@end

