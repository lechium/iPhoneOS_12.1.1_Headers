/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CDPDCircleJoinResult : NSObject {

	BOOL _didJoin;
	BOOL _needsBackupRecovery;
	BOOL _hasPeersForRemoteApproval;
	BOOL _hasPeersWithCDPBackupRecords;
	BOOL _requiresEscrowRecordsFetch;
	BOOL _requiresInitialSync;
	int _circleStatus;
	unsigned long long _remotePeeriCKState;

}

@property (assign) BOOL didJoin;                                       //@synthesize didJoin=_didJoin - In the implementation block
@property (assign) BOOL needsBackupRecovery;                           //@synthesize needsBackupRecovery=_needsBackupRecovery - In the implementation block
@property (assign) BOOL hasPeersForRemoteApproval;                     //@synthesize hasPeersForRemoteApproval=_hasPeersForRemoteApproval - In the implementation block
@property (assign) BOOL hasPeersWithCDPBackupRecords;                  //@synthesize hasPeersWithCDPBackupRecords=_hasPeersWithCDPBackupRecords - In the implementation block
@property (assign) BOOL requiresEscrowRecordsFetch;                    //@synthesize requiresEscrowRecordsFetch=_requiresEscrowRecordsFetch - In the implementation block
@property (assign) BOOL requiresInitialSync;                           //@synthesize requiresInitialSync=_requiresInitialSync - In the implementation block
@property (assign) unsigned long long remotePeeriCKState;              //@synthesize remotePeeriCKState=_remotePeeriCKState - In the implementation block
@property (assign) int circleStatus;                                   //@synthesize circleStatus=_circleStatus - In the implementation block
-(void)setCircleStatus:(int)arg1 ;
-(int)circleStatus;
-(BOOL)hasPeersForRemoteApproval;
-(void)setHasPeersForRemoteApproval:(BOOL)arg1 ;
-(BOOL)requiresInitialSync;
-(BOOL)needsBackupRecovery;
-(void)setNeedsBackupRecovery:(BOOL)arg1 ;
-(BOOL)didJoin;
-(void)setDidJoin:(BOOL)arg1 ;
-(BOOL)hasPeersWithCDPBackupRecords;
-(void)setHasPeersWithCDPBackupRecords:(BOOL)arg1 ;
-(BOOL)requiresEscrowRecordsFetch;
-(void)setRequiresEscrowRecordsFetch:(BOOL)arg1 ;
-(void)setRequiresInitialSync:(BOOL)arg1 ;
-(unsigned long long)remotePeeriCKState;
-(void)setRemotePeeriCKState:(unsigned long long)arg1 ;
@end

