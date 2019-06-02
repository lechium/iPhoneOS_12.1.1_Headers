/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSiriNetworkAnalyzerRun : PBCodable <NSCopying> {

	unsigned long long _gatewayPingDuration;
	unsigned long long _knownURLLoadDuration;
	unsigned long long _siriSaltURLLoadDuration;
	unsigned long long _siriURLLoadDuration;
	unsigned long long _timestamp;
	unsigned _gatewayPingsDropped;
	unsigned _gatewayPingsSent;
	int _gatewayStatus;
	int _interface;
	int _sendBufferBytesRemaining;
	BOOL _analyzingSuccessfulRetry;
	BOOL _isUserRequest;
	BOOL _wwanPreferred;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasInterface; 
@property (assign,nonatomic) int interface;                                           //@synthesize interface=_interface - In the implementation block
@property (assign,nonatomic) BOOL hasIsUserRequest; 
@property (assign,nonatomic) BOOL isUserRequest;                                      //@synthesize isUserRequest=_isUserRequest - In the implementation block
@property (assign,nonatomic) BOOL hasAnalyzingSuccessfulRetry; 
@property (assign,nonatomic) BOOL analyzingSuccessfulRetry;                           //@synthesize analyzingSuccessfulRetry=_analyzingSuccessfulRetry - In the implementation block
@property (assign,nonatomic) BOOL hasWwanPreferred; 
@property (assign,nonatomic) BOOL wwanPreferred;                                      //@synthesize wwanPreferred=_wwanPreferred - In the implementation block
@property (assign,nonatomic) BOOL hasSendBufferBytesRemaining; 
@property (assign,nonatomic) int sendBufferBytesRemaining;                            //@synthesize sendBufferBytesRemaining=_sendBufferBytesRemaining - In the implementation block
@property (assign,nonatomic) BOOL hasKnownURLLoadDuration; 
@property (assign,nonatomic) unsigned long long knownURLLoadDuration;                 //@synthesize knownURLLoadDuration=_knownURLLoadDuration - In the implementation block
@property (assign,nonatomic) BOOL hasSiriURLLoadDuration; 
@property (assign,nonatomic) unsigned long long siriURLLoadDuration;                  //@synthesize siriURLLoadDuration=_siriURLLoadDuration - In the implementation block
@property (assign,nonatomic) BOOL hasSiriSaltURLLoadDuration; 
@property (assign,nonatomic) unsigned long long siriSaltURLLoadDuration;              //@synthesize siriSaltURLLoadDuration=_siriSaltURLLoadDuration - In the implementation block
@property (assign,nonatomic) BOOL hasGatewayStatus; 
@property (assign,nonatomic) int gatewayStatus;                                       //@synthesize gatewayStatus=_gatewayStatus - In the implementation block
@property (assign,nonatomic) BOOL hasGatewayPingDuration; 
@property (assign,nonatomic) unsigned long long gatewayPingDuration;                  //@synthesize gatewayPingDuration=_gatewayPingDuration - In the implementation block
@property (assign,nonatomic) BOOL hasGatewayPingsSent; 
@property (assign,nonatomic) unsigned gatewayPingsSent;                               //@synthesize gatewayPingsSent=_gatewayPingsSent - In the implementation block
@property (assign,nonatomic) BOOL hasGatewayPingsDropped; 
@property (assign,nonatomic) unsigned gatewayPingsDropped;                            //@synthesize gatewayPingsDropped=_gatewayPingsDropped - In the implementation block
-(void)setHasInterface:(BOOL)arg1 ;
-(BOOL)hasInterface;
-(void)setIsUserRequest:(BOOL)arg1 ;
-(void)setHasIsUserRequest:(BOOL)arg1 ;
-(BOOL)hasIsUserRequest;
-(void)setAnalyzingSuccessfulRetry:(BOOL)arg1 ;
-(void)setHasAnalyzingSuccessfulRetry:(BOOL)arg1 ;
-(BOOL)hasAnalyzingSuccessfulRetry;
-(void)setWwanPreferred:(BOOL)arg1 ;
-(void)setHasWwanPreferred:(BOOL)arg1 ;
-(BOOL)hasWwanPreferred;
-(void)setSendBufferBytesRemaining:(int)arg1 ;
-(void)setHasSendBufferBytesRemaining:(BOOL)arg1 ;
-(BOOL)hasSendBufferBytesRemaining;
-(void)setKnownURLLoadDuration:(unsigned long long)arg1 ;
-(void)setHasKnownURLLoadDuration:(BOOL)arg1 ;
-(BOOL)hasKnownURLLoadDuration;
-(void)setSiriURLLoadDuration:(unsigned long long)arg1 ;
-(void)setHasSiriURLLoadDuration:(BOOL)arg1 ;
-(BOOL)hasSiriURLLoadDuration;
-(void)setSiriSaltURLLoadDuration:(unsigned long long)arg1 ;
-(void)setHasSiriSaltURLLoadDuration:(BOOL)arg1 ;
-(BOOL)hasSiriSaltURLLoadDuration;
-(void)setGatewayStatus:(int)arg1 ;
-(void)setHasGatewayStatus:(BOOL)arg1 ;
-(BOOL)hasGatewayStatus;
-(void)setGatewayPingDuration:(unsigned long long)arg1 ;
-(void)setHasGatewayPingDuration:(BOOL)arg1 ;
-(BOOL)hasGatewayPingDuration;
-(void)setGatewayPingsSent:(unsigned)arg1 ;
-(void)setHasGatewayPingsSent:(BOOL)arg1 ;
-(BOOL)hasGatewayPingsSent;
-(void)setGatewayPingsDropped:(unsigned)arg1 ;
-(void)setHasGatewayPingsDropped:(BOOL)arg1 ;
-(BOOL)hasGatewayPingsDropped;
-(BOOL)isUserRequest;
-(BOOL)analyzingSuccessfulRetry;
-(BOOL)wwanPreferred;
-(int)sendBufferBytesRemaining;
-(unsigned long long)knownURLLoadDuration;
-(unsigned long long)siriURLLoadDuration;
-(unsigned long long)siriSaltURLLoadDuration;
-(int)gatewayStatus;
-(unsigned long long)gatewayPingDuration;
-(unsigned)gatewayPingsSent;
-(unsigned)gatewayPingsDropped;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(id)dictionaryRepresentation;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)interface;
-(void)setInterface:(int)arg1 ;
@end

