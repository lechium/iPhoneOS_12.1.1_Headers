/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface GKMatchPacket : NSObject {

	unsigned char _version;
	unsigned char _packetType;
	unsigned _sequenceNumber;
	unsigned _totalLength;
	unsigned short _checksum;
	BOOL _valid;
	NSData* _data;

}

@property (assign,nonatomic) unsigned char version;                 //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned char packetType;              //@synthesize packetType=_packetType - In the implementation block
@property (assign,nonatomic) unsigned sequenceNumber;               //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) unsigned totalLength;                  //@synthesize totalLength=_totalLength - In the implementation block
@property (assign,nonatomic) unsigned short checksum;               //@synthesize checksum=_checksum - In the implementation block
@property (assign,nonatomic) BOOL valid;                            //@synthesize valid=_valid - In the implementation block
@property (nonatomic,retain) NSData * data;                         //@synthesize data=_data - In the implementation block
-(void)setSequenceNumber:(unsigned)arg1 ;
-(unsigned)sequenceNumber;
-(void)setChecksum:(unsigned short)arg1 ;
-(unsigned short)checksum;
-(void)setTotalLength:(unsigned)arg1 ;
-(unsigned)totalLength;
-(id)initWithMessage:(id)arg1 ;
-(unsigned char)packetType;
-(void)setPacketType:(unsigned char)arg1 ;
-(void)setValid:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(id)message;
-(BOOL)valid;
-(void)setVersion:(unsigned char)arg1 ;
-(unsigned char)version;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
@end

