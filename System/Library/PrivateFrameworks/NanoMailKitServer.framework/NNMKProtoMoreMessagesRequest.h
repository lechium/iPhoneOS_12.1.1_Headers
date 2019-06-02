/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface NNMKProtoMoreMessagesRequest : PBRequest <NSCopying> {

	NSData* _beforeDateReceived;
	unsigned _filterType;
	unsigned _fullSyncVersion;
	NSString* _mailboxId;
	SCD_Struct_NN2 _has;

}

@property (assign,nonatomic) BOOL hasFullSyncVersion; 
@property (assign,nonatomic) unsigned fullSyncVersion;                  //@synthesize fullSyncVersion=_fullSyncVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasBeforeDateReceived; 
@property (nonatomic,retain) NSData * beforeDateReceived;               //@synthesize beforeDateReceived=_beforeDateReceived - In the implementation block
@property (nonatomic,readonly) BOOL hasMailboxId; 
@property (nonatomic,retain) NSString * mailboxId;                      //@synthesize mailboxId=_mailboxId - In the implementation block
@property (assign,nonatomic) BOOL hasFilterType; 
@property (assign,nonatomic) unsigned filterType;                       //@synthesize filterType=_filterType - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setBeforeDateReceived:(NSData *)arg1 ;
-(void)setMailboxId:(NSString *)arg1 ;
-(void)setFullSyncVersion:(unsigned)arg1 ;
-(void)setHasFullSyncVersion:(BOOL)arg1 ;
-(BOOL)hasFullSyncVersion;
-(BOOL)hasBeforeDateReceived;
-(BOOL)hasMailboxId;
-(unsigned)fullSyncVersion;
-(NSData *)beforeDateReceived;
-(NSString *)mailboxId;
-(void)setHasFilterType:(BOOL)arg1 ;
-(BOOL)hasFilterType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFilterType:(unsigned)arg1 ;
-(unsigned)filterType;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

