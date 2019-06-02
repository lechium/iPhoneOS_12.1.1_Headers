/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDNFCDeviceExceptionStatistic : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _failForwardRestoreAttemptFailureCount;
	unsigned _failForwardState;
	unsigned _hwCount;
	unsigned _loadStackFirmwareRestoreRetryCount;
	unsigned _mwCount;
	unsigned _pllUnlock;
	unsigned _pllUnlockDuringPMICPowerCycle;
	unsigned _readerModeConnectErrorCount;
	unsigned _readerModeDisconnectErrorCount;
	unsigned _readerModeTransceiveErrorCount;
	unsigned _restrictedModeCount;
	unsigned _seRemovedEvt0Count;
	unsigned _seRemovedEvt1Count;
	unsigned _seRemovedEvt2Count;
	unsigned _seRemovedEvt3Count;
	unsigned _seRemovedEvt4Count;
	unsigned _seRemovedEvt5Count;
	unsigned _seosRemovedCount;
	unsigned _seosRestrictedModeCount;
	NSData* _uuidReference;
	SCD_Struct_AW13 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasUuidReference; 
@property (nonatomic,retain) NSData * uuidReference;                                      //@synthesize uuidReference=_uuidReference - In the implementation block
@property (assign,nonatomic) BOOL hasMwCount; 
@property (assign,nonatomic) unsigned mwCount;                                            //@synthesize mwCount=_mwCount - In the implementation block
@property (assign,nonatomic) BOOL hasHwCount; 
@property (assign,nonatomic) unsigned hwCount;                                            //@synthesize hwCount=_hwCount - In the implementation block
@property (assign,nonatomic) BOOL hasRestrictedModeCount; 
@property (assign,nonatomic) unsigned restrictedModeCount;                                //@synthesize restrictedModeCount=_restrictedModeCount - In the implementation block
@property (assign,nonatomic) BOOL hasSeRemovedEvt0Count; 
@property (assign,nonatomic) unsigned seRemovedEvt0Count;                                 //@synthesize seRemovedEvt0Count=_seRemovedEvt0Count - In the implementation block
@property (assign,nonatomic) BOOL hasSeRemovedEvt1Count; 
@property (assign,nonatomic) unsigned seRemovedEvt1Count;                                 //@synthesize seRemovedEvt1Count=_seRemovedEvt1Count - In the implementation block
@property (assign,nonatomic) BOOL hasSeRemovedEvt2Count; 
@property (assign,nonatomic) unsigned seRemovedEvt2Count;                                 //@synthesize seRemovedEvt2Count=_seRemovedEvt2Count - In the implementation block
@property (assign,nonatomic) BOOL hasSeRemovedEvt3Count; 
@property (assign,nonatomic) unsigned seRemovedEvt3Count;                                 //@synthesize seRemovedEvt3Count=_seRemovedEvt3Count - In the implementation block
@property (assign,nonatomic) BOOL hasSeRemovedEvt4Count; 
@property (assign,nonatomic) unsigned seRemovedEvt4Count;                                 //@synthesize seRemovedEvt4Count=_seRemovedEvt4Count - In the implementation block
@property (assign,nonatomic) BOOL hasSeRemovedEvt5Count; 
@property (assign,nonatomic) unsigned seRemovedEvt5Count;                                 //@synthesize seRemovedEvt5Count=_seRemovedEvt5Count - In the implementation block
@property (assign,nonatomic) BOOL hasPllUnlock; 
@property (assign,nonatomic) unsigned pllUnlock;                                          //@synthesize pllUnlock=_pllUnlock - In the implementation block
@property (assign,nonatomic) BOOL hasPllUnlockDuringPMICPowerCycle; 
@property (assign,nonatomic) unsigned pllUnlockDuringPMICPowerCycle;                      //@synthesize pllUnlockDuringPMICPowerCycle=_pllUnlockDuringPMICPowerCycle - In the implementation block
@property (assign,nonatomic) BOOL hasSeosRestrictedModeCount; 
@property (assign,nonatomic) unsigned seosRestrictedModeCount;                            //@synthesize seosRestrictedModeCount=_seosRestrictedModeCount - In the implementation block
@property (assign,nonatomic) BOOL hasSeosRemovedCount; 
@property (assign,nonatomic) unsigned seosRemovedCount;                                   //@synthesize seosRemovedCount=_seosRemovedCount - In the implementation block
@property (assign,nonatomic) BOOL hasReaderModeConnectErrorCount; 
@property (assign,nonatomic) unsigned readerModeConnectErrorCount;                        //@synthesize readerModeConnectErrorCount=_readerModeConnectErrorCount - In the implementation block
@property (assign,nonatomic) BOOL hasReaderModeDisconnectErrorCount; 
@property (assign,nonatomic) unsigned readerModeDisconnectErrorCount;                     //@synthesize readerModeDisconnectErrorCount=_readerModeDisconnectErrorCount - In the implementation block
@property (assign,nonatomic) BOOL hasReaderModeTransceiveErrorCount; 
@property (assign,nonatomic) unsigned readerModeTransceiveErrorCount;                     //@synthesize readerModeTransceiveErrorCount=_readerModeTransceiveErrorCount - In the implementation block
@property (assign,nonatomic) BOOL hasLoadStackFirmwareRestoreRetryCount; 
@property (assign,nonatomic) unsigned loadStackFirmwareRestoreRetryCount;                 //@synthesize loadStackFirmwareRestoreRetryCount=_loadStackFirmwareRestoreRetryCount - In the implementation block
@property (assign,nonatomic) BOOL hasFailForwardRestoreAttemptFailureCount; 
@property (assign,nonatomic) unsigned failForwardRestoreAttemptFailureCount;              //@synthesize failForwardRestoreAttemptFailureCount=_failForwardRestoreAttemptFailureCount - In the implementation block
@property (assign,nonatomic) BOOL hasFailForwardState; 
@property (assign,nonatomic) unsigned failForwardState;                                   //@synthesize failForwardState=_failForwardState - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setUuidReference:(NSData *)arg1 ;
-(BOOL)hasUuidReference;
-(NSData *)uuidReference;
-(void)setMwCount:(unsigned)arg1 ;
-(void)setHasMwCount:(BOOL)arg1 ;
-(BOOL)hasMwCount;
-(void)setHwCount:(unsigned)arg1 ;
-(void)setHasHwCount:(BOOL)arg1 ;
-(BOOL)hasHwCount;
-(void)setRestrictedModeCount:(unsigned)arg1 ;
-(void)setHasRestrictedModeCount:(BOOL)arg1 ;
-(BOOL)hasRestrictedModeCount;
-(void)setSeRemovedEvt0Count:(unsigned)arg1 ;
-(void)setHasSeRemovedEvt0Count:(BOOL)arg1 ;
-(BOOL)hasSeRemovedEvt0Count;
-(void)setSeRemovedEvt1Count:(unsigned)arg1 ;
-(void)setHasSeRemovedEvt1Count:(BOOL)arg1 ;
-(BOOL)hasSeRemovedEvt1Count;
-(void)setSeRemovedEvt2Count:(unsigned)arg1 ;
-(void)setHasSeRemovedEvt2Count:(BOOL)arg1 ;
-(BOOL)hasSeRemovedEvt2Count;
-(void)setSeRemovedEvt3Count:(unsigned)arg1 ;
-(void)setHasSeRemovedEvt3Count:(BOOL)arg1 ;
-(BOOL)hasSeRemovedEvt3Count;
-(void)setSeRemovedEvt4Count:(unsigned)arg1 ;
-(void)setHasSeRemovedEvt4Count:(BOOL)arg1 ;
-(BOOL)hasSeRemovedEvt4Count;
-(void)setSeRemovedEvt5Count:(unsigned)arg1 ;
-(void)setHasSeRemovedEvt5Count:(BOOL)arg1 ;
-(BOOL)hasSeRemovedEvt5Count;
-(void)setPllUnlock:(unsigned)arg1 ;
-(void)setHasPllUnlock:(BOOL)arg1 ;
-(BOOL)hasPllUnlock;
-(void)setPllUnlockDuringPMICPowerCycle:(unsigned)arg1 ;
-(void)setHasPllUnlockDuringPMICPowerCycle:(BOOL)arg1 ;
-(BOOL)hasPllUnlockDuringPMICPowerCycle;
-(void)setSeosRestrictedModeCount:(unsigned)arg1 ;
-(void)setHasSeosRestrictedModeCount:(BOOL)arg1 ;
-(BOOL)hasSeosRestrictedModeCount;
-(void)setSeosRemovedCount:(unsigned)arg1 ;
-(void)setHasSeosRemovedCount:(BOOL)arg1 ;
-(BOOL)hasSeosRemovedCount;
-(void)setReaderModeConnectErrorCount:(unsigned)arg1 ;
-(void)setHasReaderModeConnectErrorCount:(BOOL)arg1 ;
-(BOOL)hasReaderModeConnectErrorCount;
-(void)setReaderModeDisconnectErrorCount:(unsigned)arg1 ;
-(void)setHasReaderModeDisconnectErrorCount:(BOOL)arg1 ;
-(BOOL)hasReaderModeDisconnectErrorCount;
-(void)setReaderModeTransceiveErrorCount:(unsigned)arg1 ;
-(void)setHasReaderModeTransceiveErrorCount:(BOOL)arg1 ;
-(BOOL)hasReaderModeTransceiveErrorCount;
-(void)setLoadStackFirmwareRestoreRetryCount:(unsigned)arg1 ;
-(void)setHasLoadStackFirmwareRestoreRetryCount:(BOOL)arg1 ;
-(BOOL)hasLoadStackFirmwareRestoreRetryCount;
-(void)setFailForwardRestoreAttemptFailureCount:(unsigned)arg1 ;
-(void)setHasFailForwardRestoreAttemptFailureCount:(BOOL)arg1 ;
-(BOOL)hasFailForwardRestoreAttemptFailureCount;
-(void)setFailForwardState:(unsigned)arg1 ;
-(void)setHasFailForwardState:(BOOL)arg1 ;
-(BOOL)hasFailForwardState;
-(unsigned)mwCount;
-(unsigned)hwCount;
-(unsigned)restrictedModeCount;
-(unsigned)seRemovedEvt0Count;
-(unsigned)seRemovedEvt1Count;
-(unsigned)seRemovedEvt2Count;
-(unsigned)seRemovedEvt3Count;
-(unsigned)seRemovedEvt4Count;
-(unsigned)seRemovedEvt5Count;
-(unsigned)pllUnlock;
-(unsigned)pllUnlockDuringPMICPowerCycle;
-(unsigned)seosRestrictedModeCount;
-(unsigned)seosRemovedCount;
-(unsigned)readerModeConnectErrorCount;
-(unsigned)readerModeDisconnectErrorCount;
-(unsigned)readerModeTransceiveErrorCount;
-(unsigned)loadStackFirmwareRestoreRetryCount;
-(unsigned)failForwardRestoreAttemptFailureCount;
-(unsigned)failForwardState;
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

