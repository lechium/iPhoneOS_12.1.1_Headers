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

@interface AWDWiFiMetricsManagerLastSSIDInfo : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSData* _lastSSIDAttempted;
	NSData* _lastSSIDConnectedTo;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasLastSSIDAttempted; 
@property (nonatomic,retain) NSData * lastSSIDAttempted;                 //@synthesize lastSSIDAttempted=_lastSSIDAttempted - In the implementation block
@property (nonatomic,readonly) BOOL hasLastSSIDConnectedTo; 
@property (nonatomic,retain) NSData * lastSSIDConnectedTo;               //@synthesize lastSSIDConnectedTo=_lastSSIDConnectedTo - In the implementation block
-(void)setLastSSIDAttempted:(NSData *)arg1 ;
-(void)setLastSSIDConnectedTo:(NSData *)arg1 ;
-(BOOL)hasLastSSIDAttempted;
-(BOOL)hasLastSSIDConnectedTo;
-(NSData *)lastSSIDAttempted;
-(NSData *)lastSSIDConnectedTo;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(id)dictionaryRepresentation;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

