/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiMetricCustomNetworkSetting : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _autoProxySetCount;
	unsigned _bootpSetCount;
	unsigned _customNetworkCount;
	unsigned _dhcpSetCount;
	unsigned _manualProxySetCount;
	unsigned _staticSetCount;
	unsigned _totalNetworkCount;
	SCD_Struct_AW13 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasCustomNetworkCount; 
@property (assign,nonatomic) unsigned customNetworkCount;               //@synthesize customNetworkCount=_customNetworkCount - In the implementation block
@property (assign,nonatomic) BOOL hasTotalNetworkCount; 
@property (assign,nonatomic) unsigned totalNetworkCount;                //@synthesize totalNetworkCount=_totalNetworkCount - In the implementation block
@property (assign,nonatomic) BOOL hasDhcpSetCount; 
@property (assign,nonatomic) unsigned dhcpSetCount;                     //@synthesize dhcpSetCount=_dhcpSetCount - In the implementation block
@property (assign,nonatomic) BOOL hasBootpSetCount; 
@property (assign,nonatomic) unsigned bootpSetCount;                    //@synthesize bootpSetCount=_bootpSetCount - In the implementation block
@property (assign,nonatomic) BOOL hasStaticSetCount; 
@property (assign,nonatomic) unsigned staticSetCount;                   //@synthesize staticSetCount=_staticSetCount - In the implementation block
@property (assign,nonatomic) BOOL hasManualProxySetCount; 
@property (assign,nonatomic) unsigned manualProxySetCount;              //@synthesize manualProxySetCount=_manualProxySetCount - In the implementation block
@property (assign,nonatomic) BOOL hasAutoProxySetCount; 
@property (assign,nonatomic) unsigned autoProxySetCount;                //@synthesize autoProxySetCount=_autoProxySetCount - In the implementation block
-(void)setCustomNetworkCount:(unsigned)arg1 ;
-(void)setHasCustomNetworkCount:(BOOL)arg1 ;
-(BOOL)hasCustomNetworkCount;
-(void)setTotalNetworkCount:(unsigned)arg1 ;
-(void)setHasTotalNetworkCount:(BOOL)arg1 ;
-(BOOL)hasTotalNetworkCount;
-(void)setDhcpSetCount:(unsigned)arg1 ;
-(void)setHasDhcpSetCount:(BOOL)arg1 ;
-(BOOL)hasDhcpSetCount;
-(void)setBootpSetCount:(unsigned)arg1 ;
-(void)setHasBootpSetCount:(BOOL)arg1 ;
-(BOOL)hasBootpSetCount;
-(void)setStaticSetCount:(unsigned)arg1 ;
-(void)setHasStaticSetCount:(BOOL)arg1 ;
-(BOOL)hasStaticSetCount;
-(void)setManualProxySetCount:(unsigned)arg1 ;
-(void)setHasManualProxySetCount:(BOOL)arg1 ;
-(BOOL)hasManualProxySetCount;
-(void)setAutoProxySetCount:(unsigned)arg1 ;
-(void)setHasAutoProxySetCount:(BOOL)arg1 ;
-(BOOL)hasAutoProxySetCount;
-(unsigned)customNetworkCount;
-(unsigned)totalNetworkCount;
-(unsigned)dhcpSetCount;
-(unsigned)bootpSetCount;
-(unsigned)staticSetCount;
-(unsigned)manualProxySetCount;
-(unsigned)autoProxySetCount;
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
@end

