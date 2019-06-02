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

@interface AWDIDSRealTimeEncryptionFirstReceivedPacketMKMTimeDelta : PBCodable <NSCopying> {

	long long _timeDelta;
	unsigned long long _timestamp;
	unsigned _activeParticipantBucket;
	NSString* _serviceName;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasServiceName; 
@property (nonatomic,retain) NSString * serviceName;                        //@synthesize serviceName=_serviceName - In the implementation block
@property (assign,nonatomic) BOOL hasActiveParticipantBucket; 
@property (assign,nonatomic) unsigned activeParticipantBucket;              //@synthesize activeParticipantBucket=_activeParticipantBucket - In the implementation block
@property (assign,nonatomic) BOOL hasTimeDelta; 
@property (assign,nonatomic) long long timeDelta;                           //@synthesize timeDelta=_timeDelta - In the implementation block
-(BOOL)hasServiceName;
-(void)setActiveParticipantBucket:(unsigned)arg1 ;
-(void)setHasActiveParticipantBucket:(BOOL)arg1 ;
-(BOOL)hasActiveParticipantBucket;
-(void)setTimeDelta:(long long)arg1 ;
-(void)setHasTimeDelta:(BOOL)arg1 ;
-(BOOL)hasTimeDelta;
-(unsigned)activeParticipantBucket;
-(long long)timeDelta;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setServiceName:(NSString *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(id)dictionaryRepresentation;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)serviceName;
@end
