/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitRemoteLogout : PBCodable <NSCopying> {

	unsigned long long _delay;
	unsigned long long _timestamp;
	int _requester;
	int _resultErrorCode;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasResultErrorCode; 
@property (assign,nonatomic) int resultErrorCode;                       //@synthesize resultErrorCode=_resultErrorCode - In the implementation block
@property (assign,nonatomic) BOOL hasDelay; 
@property (assign,nonatomic) unsigned long long delay;                  //@synthesize delay=_delay - In the implementation block
@property (assign,nonatomic) BOOL hasRequester; 
@property (assign,nonatomic) int requester;                             //@synthesize requester=_requester - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasDelay:(BOOL)arg1 ;
-(BOOL)hasDelay;
-(void)setResultErrorCode:(int)arg1 ;
-(void)setHasResultErrorCode:(BOOL)arg1 ;
-(BOOL)hasResultErrorCode;
-(int)resultErrorCode;
-(void)setRequester:(int)arg1 ;
-(int)requester;
-(void)setHasRequester:(BOOL)arg1 ;
-(BOOL)hasRequester;
-(id)requesterAsString:(int)arg1 ;
-(int)StringAsRequester:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(unsigned long long)delay;
-(void)setDelay:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

