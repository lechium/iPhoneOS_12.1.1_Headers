/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSOutgoingMessageDurationTrace : PBCodable <NSCopying> {

	unsigned long long _compressedMessageSize;
	unsigned long long _messagesOnQueue;
	unsigned long long _timestamp;
	unsigned long long _uncompressedMessageSize;
	unsigned _aggregatedMessageSendCount;
	unsigned _avgAggregatedMessageSendDuration;
	unsigned _avgEncryptionDuration;
	unsigned _command;
	unsigned _compressPayloadDuration;
	unsigned _compressPayloadStart;
	unsigned _encryptionCount;
	unsigned _iDQueryDuration;
	unsigned _iDQueryStart;
	unsigned _messageOnQueueDuration;
	unsigned _messageOnQueueStart;
	unsigned _priority;
	unsigned _sendToDaemonDuration;
	unsigned _sendToDaemonStart;
	NSString* _service;
	unsigned _storeInDatabaseDuration;
	unsigned _storeInDatabaseStart;
	SCD_Struct_AW17 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSendToDaemonStart; 
@property (assign,nonatomic) unsigned sendToDaemonStart;                              //@synthesize sendToDaemonStart=_sendToDaemonStart - In the implementation block
@property (assign,nonatomic) BOOL hasSendToDaemonDuration; 
@property (assign,nonatomic) unsigned sendToDaemonDuration;                           //@synthesize sendToDaemonDuration=_sendToDaemonDuration - In the implementation block
@property (assign,nonatomic) BOOL hasStoreInDatabaseStart; 
@property (assign,nonatomic) unsigned storeInDatabaseStart;                           //@synthesize storeInDatabaseStart=_storeInDatabaseStart - In the implementation block
@property (assign,nonatomic) BOOL hasStoreInDatabaseDuration; 
@property (assign,nonatomic) unsigned storeInDatabaseDuration;                        //@synthesize storeInDatabaseDuration=_storeInDatabaseDuration - In the implementation block
@property (assign,nonatomic) BOOL hasCompressPayloadStart; 
@property (assign,nonatomic) unsigned compressPayloadStart;                           //@synthesize compressPayloadStart=_compressPayloadStart - In the implementation block
@property (assign,nonatomic) BOOL hasCompressPayloadDuration; 
@property (assign,nonatomic) unsigned compressPayloadDuration;                        //@synthesize compressPayloadDuration=_compressPayloadDuration - In the implementation block
@property (assign,nonatomic) BOOL hasUncompressedMessageSize; 
@property (assign,nonatomic) unsigned long long uncompressedMessageSize;              //@synthesize uncompressedMessageSize=_uncompressedMessageSize - In the implementation block
@property (assign,nonatomic) BOOL hasCompressedMessageSize; 
@property (assign,nonatomic) unsigned long long compressedMessageSize;                //@synthesize compressedMessageSize=_compressedMessageSize - In the implementation block
@property (assign,nonatomic) BOOL hasIDQueryStart; 
@property (assign,nonatomic) unsigned iDQueryStart;                                   //@synthesize iDQueryStart=_iDQueryStart - In the implementation block
@property (assign,nonatomic) BOOL hasIDQueryDuration; 
@property (assign,nonatomic) unsigned iDQueryDuration;                                //@synthesize iDQueryDuration=_iDQueryDuration - In the implementation block
@property (assign,nonatomic) BOOL hasMessageOnQueueStart; 
@property (assign,nonatomic) unsigned messageOnQueueStart;                            //@synthesize messageOnQueueStart=_messageOnQueueStart - In the implementation block
@property (assign,nonatomic) BOOL hasMessageOnQueueDuration; 
@property (assign,nonatomic) unsigned messageOnQueueDuration;                         //@synthesize messageOnQueueDuration=_messageOnQueueDuration - In the implementation block
@property (assign,nonatomic) BOOL hasMessagesOnQueue; 
@property (assign,nonatomic) unsigned long long messagesOnQueue;                      //@synthesize messagesOnQueue=_messagesOnQueue - In the implementation block
@property (assign,nonatomic) BOOL hasEncryptionCount; 
@property (assign,nonatomic) unsigned encryptionCount;                                //@synthesize encryptionCount=_encryptionCount - In the implementation block
@property (assign,nonatomic) BOOL hasAvgEncryptionDuration; 
@property (assign,nonatomic) unsigned avgEncryptionDuration;                          //@synthesize avgEncryptionDuration=_avgEncryptionDuration - In the implementation block
@property (assign,nonatomic) BOOL hasAggregatedMessageSendCount; 
@property (assign,nonatomic) unsigned aggregatedMessageSendCount;                     //@synthesize aggregatedMessageSendCount=_aggregatedMessageSendCount - In the implementation block
@property (assign,nonatomic) BOOL hasAvgAggregatedMessageSendDuration; 
@property (assign,nonatomic) unsigned avgAggregatedMessageSendDuration;               //@synthesize avgAggregatedMessageSendDuration=_avgAggregatedMessageSendDuration - In the implementation block
@property (nonatomic,readonly) BOOL hasService; 
@property (nonatomic,retain) NSString * service;                                      //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) BOOL hasCommand; 
@property (assign,nonatomic) unsigned command;                                        //@synthesize command=_command - In the implementation block
@property (assign,nonatomic) BOOL hasPriority; 
@property (assign,nonatomic) unsigned priority;                                       //@synthesize priority=_priority - In the implementation block
-(BOOL)hasService;
-(void)setSendToDaemonStart:(unsigned)arg1 ;
-(void)setHasSendToDaemonStart:(BOOL)arg1 ;
-(BOOL)hasSendToDaemonStart;
-(void)setSendToDaemonDuration:(unsigned)arg1 ;
-(void)setHasSendToDaemonDuration:(BOOL)arg1 ;
-(BOOL)hasSendToDaemonDuration;
-(void)setStoreInDatabaseStart:(unsigned)arg1 ;
-(void)setHasStoreInDatabaseStart:(BOOL)arg1 ;
-(BOOL)hasStoreInDatabaseStart;
-(void)setStoreInDatabaseDuration:(unsigned)arg1 ;
-(void)setHasStoreInDatabaseDuration:(BOOL)arg1 ;
-(BOOL)hasStoreInDatabaseDuration;
-(void)setCompressPayloadStart:(unsigned)arg1 ;
-(void)setHasCompressPayloadStart:(BOOL)arg1 ;
-(BOOL)hasCompressPayloadStart;
-(void)setCompressPayloadDuration:(unsigned)arg1 ;
-(void)setHasCompressPayloadDuration:(BOOL)arg1 ;
-(BOOL)hasCompressPayloadDuration;
-(void)setUncompressedMessageSize:(unsigned long long)arg1 ;
-(void)setHasUncompressedMessageSize:(BOOL)arg1 ;
-(BOOL)hasUncompressedMessageSize;
-(void)setCompressedMessageSize:(unsigned long long)arg1 ;
-(void)setHasCompressedMessageSize:(BOOL)arg1 ;
-(BOOL)hasCompressedMessageSize;
-(void)setIDQueryStart:(unsigned)arg1 ;
-(void)setHasIDQueryStart:(BOOL)arg1 ;
-(BOOL)hasIDQueryStart;
-(void)setIDQueryDuration:(unsigned)arg1 ;
-(void)setHasIDQueryDuration:(BOOL)arg1 ;
-(BOOL)hasIDQueryDuration;
-(void)setMessageOnQueueStart:(unsigned)arg1 ;
-(void)setHasMessageOnQueueStart:(BOOL)arg1 ;
-(BOOL)hasMessageOnQueueStart;
-(void)setMessageOnQueueDuration:(unsigned)arg1 ;
-(void)setHasMessageOnQueueDuration:(BOOL)arg1 ;
-(BOOL)hasMessageOnQueueDuration;
-(void)setMessagesOnQueue:(unsigned long long)arg1 ;
-(void)setHasMessagesOnQueue:(BOOL)arg1 ;
-(BOOL)hasMessagesOnQueue;
-(void)setEncryptionCount:(unsigned)arg1 ;
-(void)setHasEncryptionCount:(BOOL)arg1 ;
-(BOOL)hasEncryptionCount;
-(void)setAvgEncryptionDuration:(unsigned)arg1 ;
-(void)setHasAvgEncryptionDuration:(BOOL)arg1 ;
-(BOOL)hasAvgEncryptionDuration;
-(void)setAggregatedMessageSendCount:(unsigned)arg1 ;
-(void)setHasAggregatedMessageSendCount:(BOOL)arg1 ;
-(BOOL)hasAggregatedMessageSendCount;
-(void)setAvgAggregatedMessageSendDuration:(unsigned)arg1 ;
-(void)setHasAvgAggregatedMessageSendDuration:(BOOL)arg1 ;
-(BOOL)hasAvgAggregatedMessageSendDuration;
-(unsigned)sendToDaemonStart;
-(unsigned)sendToDaemonDuration;
-(unsigned)storeInDatabaseStart;
-(unsigned)storeInDatabaseDuration;
-(unsigned)compressPayloadStart;
-(unsigned)compressPayloadDuration;
-(unsigned long long)uncompressedMessageSize;
-(unsigned long long)compressedMessageSize;
-(unsigned)iDQueryStart;
-(unsigned)iDQueryDuration;
-(unsigned)messageOnQueueStart;
-(unsigned)messageOnQueueDuration;
-(unsigned long long)messagesOnQueue;
-(unsigned)encryptionCount;
-(unsigned)avgEncryptionDuration;
-(unsigned)aggregatedMessageSendCount;
-(unsigned)avgAggregatedMessageSendDuration;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(NSString *)service;
-(void)setService:(NSString *)arg1 ;
-(BOOL)hasPriority;
-(void)setHasPriority:(BOOL)arg1 ;
-(unsigned)command;
-(void)setCommand:(unsigned)arg1 ;
-(void)setHasCommand:(BOOL)arg1 ;
-(BOOL)hasCommand;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPriority:(unsigned)arg1 ;
-(unsigned)priority;
-(unsigned long long)timestamp;
-(id)dictionaryRepresentation;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

