/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreCDPInternal/CoreCDPInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCoreCDPStateMachineCircleJoin : PBCodable <NSCopying> {

	long long _circleStatus;
	long long _errorCode;
	unsigned long long _timestamp;
	NSString* _errorDomain;
	BOOL _hasPeersForRemoteApproval;
	BOOL _needsBackupRecovery;
	SCD_Struct_AW6 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasCircleStatus; 
@property (assign,nonatomic) long long circleStatus;                         //@synthesize circleStatus=_circleStatus - In the implementation block
@property (assign,nonatomic) BOOL hasNeedsBackupRecovery; 
@property (assign,nonatomic) BOOL needsBackupRecovery;                       //@synthesize needsBackupRecovery=_needsBackupRecovery - In the implementation block
@property (assign,nonatomic) BOOL hasHasPeersForRemoteApproval; 
@property (assign,nonatomic) BOOL hasPeersForRemoteApproval;                 //@synthesize hasPeersForRemoteApproval=_hasPeersForRemoteApproval - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                         //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) long long errorCode;                            //@synthesize errorCode=_errorCode - In the implementation block
-(void)setCircleStatus:(long long)arg1 ;
-(void)setHasCircleStatus:(BOOL)arg1 ;
-(BOOL)hasCircleStatus;
-(long long)circleStatus;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setErrorDomain:(NSString *)arg1 ;
-(BOOL)hasErrorDomain;
-(void)setErrorCode:(long long)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(NSString *)errorDomain;
-(long long)errorCode;
-(BOOL)hasPeersForRemoteApproval;
-(void)setHasPeersForRemoteApproval:(BOOL)arg1 ;
-(BOOL)needsBackupRecovery;
-(void)setNeedsBackupRecovery:(BOOL)arg1 ;
-(void)setHasNeedsBackupRecovery:(BOOL)arg1 ;
-(BOOL)hasNeedsBackupRecovery;
-(void)setHasHasPeersForRemoteApproval:(BOOL)arg1 ;
-(BOOL)hasHasPeersForRemoteApproval;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(id)dictionaryRepresentation;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
