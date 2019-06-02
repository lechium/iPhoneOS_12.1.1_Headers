/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDWiFiMetricsManagerRoamStatus : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _flags;
	unsigned _latency;
	unsigned _originChannel;
	NSData* _originOui;
	int _originRssi;
	unsigned _profileType;
	unsigned _reason;
	unsigned _securityType;
	unsigned _status;
	unsigned _targetChannel;
	NSData* _targetOui;
	int _targetRssi;
	SCD_Struct_AW9 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasLatency; 
@property (assign,nonatomic) unsigned latency;                          //@synthesize latency=_latency - In the implementation block
@property (assign,nonatomic) BOOL hasProfileType; 
@property (assign,nonatomic) unsigned profileType;                      //@synthesize profileType=_profileType - In the implementation block
@property (assign,nonatomic) BOOL hasSecurityType; 
@property (assign,nonatomic) unsigned securityType;                     //@synthesize securityType=_securityType - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) unsigned status;                           //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasReason; 
@property (assign,nonatomic) unsigned reason;                           //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) BOOL hasOriginRssi; 
@property (assign,nonatomic) int originRssi;                            //@synthesize originRssi=_originRssi - In the implementation block
@property (assign,nonatomic) BOOL hasTargetRssi; 
@property (assign,nonatomic) int targetRssi;                            //@synthesize targetRssi=_targetRssi - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginOui; 
@property (nonatomic,retain) NSData * originOui;                        //@synthesize originOui=_originOui - In the implementation block
@property (nonatomic,readonly) BOOL hasTargetOui; 
@property (nonatomic,retain) NSData * targetOui;                        //@synthesize targetOui=_targetOui - In the implementation block
@property (assign,nonatomic) BOOL hasFlags; 
@property (assign,nonatomic) unsigned flags;                            //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) BOOL hasOriginChannel; 
@property (assign,nonatomic) unsigned originChannel;                    //@synthesize originChannel=_originChannel - In the implementation block
@property (assign,nonatomic) BOOL hasTargetChannel; 
@property (assign,nonatomic) unsigned targetChannel;                    //@synthesize targetChannel=_targetChannel - In the implementation block
-(void)setHasFlags:(BOOL)arg1 ;
-(BOOL)hasFlags;
-(void)setOriginOui:(NSData *)arg1 ;
-(void)setTargetOui:(NSData *)arg1 ;
-(void)setHasProfileType:(BOOL)arg1 ;
-(BOOL)hasProfileType;
-(void)setOriginRssi:(int)arg1 ;
-(void)setHasOriginRssi:(BOOL)arg1 ;
-(BOOL)hasOriginRssi;
-(void)setTargetRssi:(int)arg1 ;
-(void)setHasTargetRssi:(BOOL)arg1 ;
-(BOOL)hasTargetRssi;
-(BOOL)hasOriginOui;
-(BOOL)hasTargetOui;
-(void)setOriginChannel:(unsigned)arg1 ;
-(void)setHasOriginChannel:(BOOL)arg1 ;
-(BOOL)hasOriginChannel;
-(void)setTargetChannel:(unsigned)arg1 ;
-(void)setHasTargetChannel:(BOOL)arg1 ;
-(BOOL)hasTargetChannel;
-(int)originRssi;
-(int)targetRssi;
-(NSData *)originOui;
-(NSData *)targetOui;
-(unsigned)originChannel;
-(unsigned)targetChannel;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setSecurityType:(unsigned)arg1 ;
-(void)setHasSecurityType:(BOOL)arg1 ;
-(BOOL)hasSecurityType;
-(unsigned)securityType;
-(unsigned)latency;
-(void)setLatency:(unsigned)arg1 ;
-(void)setHasLatency:(BOOL)arg1 ;
-(BOOL)hasLatency;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(unsigned)flags;
-(void)setFlags:(unsigned)arg1 ;
-(void)setReason:(unsigned)arg1 ;
-(void)setProfileType:(unsigned)arg1 ;
-(void)setHasReason:(BOOL)arg1 ;
-(BOOL)hasReason;
-(unsigned)profileType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)reason;
-(unsigned long long)timestamp;
-(id)dictionaryRepresentation;
-(unsigned)status;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setStatus:(unsigned)arg1 ;
@end

