/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NNMKProtoMessagesFilteredOutWarning : PBCodable <NSCopying> {

	unsigned _fullSyncVersion;
	NSString* _mailboxId;
	NSMutableArray* _removedMessageIds;
	SCD_Struct_NN1 _has;

}

@property (assign,nonatomic) BOOL hasFullSyncVersion; 
@property (assign,nonatomic) unsigned fullSyncVersion;                        //@synthesize fullSyncVersion=_fullSyncVersion - In the implementation block
@property (nonatomic,retain) NSMutableArray * removedMessageIds;              //@synthesize removedMessageIds=_removedMessageIds - In the implementation block
@property (nonatomic,readonly) BOOL hasMailboxId; 
@property (nonatomic,retain) NSString * mailboxId;                            //@synthesize mailboxId=_mailboxId - In the implementation block
+(Class)removedMessageIdType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setMailboxId:(NSString *)arg1 ;
-(void)setFullSyncVersion:(unsigned)arg1 ;
-(void)setHasFullSyncVersion:(BOOL)arg1 ;
-(BOOL)hasFullSyncVersion;
-(BOOL)hasMailboxId;
-(unsigned)fullSyncVersion;
-(NSString *)mailboxId;
-(void)addRemovedMessageId:(id)arg1 ;
-(unsigned long long)removedMessageIdsCount;
-(void)clearRemovedMessageIds;
-(id)removedMessageIdAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)removedMessageIds;
-(void)setRemovedMessageIds:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

