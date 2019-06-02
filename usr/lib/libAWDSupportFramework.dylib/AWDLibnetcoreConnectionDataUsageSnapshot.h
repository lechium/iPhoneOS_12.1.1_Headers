/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDLibnetcoreConnectionDataUsageSnapshot : PBCodable <NSCopying> {

	unsigned long long _bytesIn;
	unsigned long long _bytesOut;
	unsigned long long _multipathBytesInCell;
	unsigned long long _multipathBytesInInitial;
	unsigned long long _multipathBytesInWiFi;
	unsigned long long _multipathBytesOutCell;
	unsigned long long _multipathBytesOutInitial;
	unsigned long long _multipathBytesOutWiFi;
	SCD_Struct_AW13 _has;

}

@property (assign,nonatomic) BOOL hasBytesIn; 
@property (assign,nonatomic) unsigned long long bytesIn;                               //@synthesize bytesIn=_bytesIn - In the implementation block
@property (assign,nonatomic) BOOL hasBytesOut; 
@property (assign,nonatomic) unsigned long long bytesOut;                              //@synthesize bytesOut=_bytesOut - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathBytesInCell; 
@property (assign,nonatomic) unsigned long long multipathBytesInCell;                  //@synthesize multipathBytesInCell=_multipathBytesInCell - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathBytesOutCell; 
@property (assign,nonatomic) unsigned long long multipathBytesOutCell;                 //@synthesize multipathBytesOutCell=_multipathBytesOutCell - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathBytesInWiFi; 
@property (assign,nonatomic) unsigned long long multipathBytesInWiFi;                  //@synthesize multipathBytesInWiFi=_multipathBytesInWiFi - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathBytesOutWiFi; 
@property (assign,nonatomic) unsigned long long multipathBytesOutWiFi;                 //@synthesize multipathBytesOutWiFi=_multipathBytesOutWiFi - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathBytesInInitial; 
@property (assign,nonatomic) unsigned long long multipathBytesInInitial;               //@synthesize multipathBytesInInitial=_multipathBytesInInitial - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathBytesOutInitial; 
@property (assign,nonatomic) unsigned long long multipathBytesOutInitial;              //@synthesize multipathBytesOutInitial=_multipathBytesOutInitial - In the implementation block
-(void)setBytesIn:(unsigned long long)arg1 ;
-(void)setHasBytesIn:(BOOL)arg1 ;
-(BOOL)hasBytesIn;
-(void)setBytesOut:(unsigned long long)arg1 ;
-(void)setHasBytesOut:(BOOL)arg1 ;
-(BOOL)hasBytesOut;
-(void)setMultipathBytesInCell:(unsigned long long)arg1 ;
-(void)setHasMultipathBytesInCell:(BOOL)arg1 ;
-(BOOL)hasMultipathBytesInCell;
-(void)setMultipathBytesOutCell:(unsigned long long)arg1 ;
-(void)setHasMultipathBytesOutCell:(BOOL)arg1 ;
-(BOOL)hasMultipathBytesOutCell;
-(void)setMultipathBytesInWiFi:(unsigned long long)arg1 ;
-(void)setHasMultipathBytesInWiFi:(BOOL)arg1 ;
-(BOOL)hasMultipathBytesInWiFi;
-(void)setMultipathBytesOutWiFi:(unsigned long long)arg1 ;
-(void)setHasMultipathBytesOutWiFi:(BOOL)arg1 ;
-(BOOL)hasMultipathBytesOutWiFi;
-(void)setMultipathBytesInInitial:(unsigned long long)arg1 ;
-(void)setHasMultipathBytesInInitial:(BOOL)arg1 ;
-(BOOL)hasMultipathBytesInInitial;
-(void)setMultipathBytesOutInitial:(unsigned long long)arg1 ;
-(void)setHasMultipathBytesOutInitial:(BOOL)arg1 ;
-(BOOL)hasMultipathBytesOutInitial;
-(unsigned long long)bytesIn;
-(unsigned long long)bytesOut;
-(unsigned long long)multipathBytesInCell;
-(unsigned long long)multipathBytesOutCell;
-(unsigned long long)multipathBytesInWiFi;
-(unsigned long long)multipathBytesOutWiFi;
-(unsigned long long)multipathBytesInInitial;
-(unsigned long long)multipathBytesOutInitial;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
