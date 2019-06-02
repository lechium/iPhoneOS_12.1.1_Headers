/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RMSPairingChallengeResponseMessage : PBCodable <NSCopying> {

	NSString* _code;
	int _sessionIdentifier;
	BOOL _userCancelled;
	SCD_Struct_RM4 _has;

}

@property (assign,nonatomic) BOOL hasSessionIdentifier; 
@property (assign,nonatomic) int sessionIdentifier;                  //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasCode; 
@property (nonatomic,retain) NSString * code;                        //@synthesize code=_code - In the implementation block
@property (assign,nonatomic) BOOL hasUserCancelled; 
@property (assign,nonatomic) BOOL userCancelled;                     //@synthesize userCancelled=_userCancelled - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSessionIdentifier:(int)arg1 ;
-(BOOL)hasSessionIdentifier;
-(void)setCode:(NSString *)arg1 ;
-(BOOL)hasCode;
-(BOOL)userCancelled;
-(void)setUserCancelled:(BOOL)arg1 ;
-(void)setHasSessionIdentifier:(BOOL)arg1 ;
-(void)setHasUserCancelled:(BOOL)arg1 ;
-(BOOL)hasUserCancelled;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)code;
-(int)sessionIdentifier;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

