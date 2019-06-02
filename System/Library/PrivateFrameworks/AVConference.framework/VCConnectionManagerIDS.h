/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCConnectionManager.h>

@class NSMutableArray, VCSessionBitrateArbiter;

@interface VCConnectionManagerIDS : VCConnectionManager {

	NSMutableArray* _connectionArray;
	double _lastTimestampForRemoteSendingFromNonPrimary;
	double _lastTimestampPreferredRemoteInterfaceUpdated;
	unsigned _sentPacketCount[256];
	unsigned _sentByteCount[256];
	unsigned _receivedPacketCount[256];
	unsigned _receivedByteCount[256];
	VCSessionBitrateArbiter* _bitrateArbiter;
	BOOL _isMultiwaySession;

}
-(id)getPrimaryConnectionToBeCompared;
-(void)reportConnection:(id)arg1 isInitialConnection:(BOOL)arg2 ;
-(id)getSecondaryConnectionToBeCompared;
-(void)updateCellularMTU:(int)arg1 ;
-(void)updateCellularTech:(int)arg1 forLocalInterface:(BOOL)arg2 ;
-(void)sourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 isSourceOnCellular:(BOOL*)arg2 isSourceIPv6:(BOOL*)arg3 ;
-(BOOL)shouldAcceptDataFromSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 ;
-(id)copyConnectionWithSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 isPrimary:(BOOL*)arg2 ;
-(void)updateSessionStats:(unsigned short)arg1 ;
-(void)updatePacketCountAndByteCountWithIndex:(unsigned char)arg1 packetSize:(int)arg2 numOfStreamId:(int)arg3 isPriorityIncluded:(BOOL)arg4 isOutgoing:(BOOL)arg5 ;
-(void)synchronizeParticipantGenerationCounter:(unsigned char)arg1 ;
-(unsigned)getPacketCountWithIndex:(unsigned char)arg1 isOutgoing:(BOOL)arg2 ;
-(unsigned)getByteCountWithIndex:(unsigned char)arg1 isOutgoing:(BOOL)arg2 ;
-(BOOL)shouldHandoverWhenUpdateWRMDuplication:(int)arg1 ;
-(id)initWithMultiwayEnabled:(BOOL)arg1 ;
-(void)resetParticipantGenerationCounter;
-(void)setPreferredLocalInterfaceForDuplication:(int)arg1 ;
-(void)setPreferredRemoteInterfaceForDuplication:(int)arg1 ;
-(BOOL)isPrimaryConnectionSameAsConnection:(id)arg1 ;
-(void)updatePrimaryWithConnection:(id)arg1 ;
-(void)updateSecondaryWithConnection:(id)arg1 ;
-(BOOL)addConnectionToConnectionArray:(id)arg1 ;
-(unsigned)uplinkBitrateCapForConnectionType:(int)arg1 ;
-(unsigned)downlinkBitrateCapForConnectionType:(int)arg1 ;
-(BOOL)selectPrimaryAndSecondaryWithConnection:(id)arg1 ;
-(void)updateConnectionForDuplication;
-(void)handleSecondaryConnectionRemoved;
-(void)optOutAllStreamsForNonPrimaryConnections;
-(void)handlePrimaryConnectionRemoved;
-(void)resetPacketCountAndByteCountWithConnection:(id)arg1 ;
-(void)handoverWithWRMSuggestion:(BOOL)arg1 ;
-(BOOL)shouldReplaceConnection:(id)arg1 withConnection:(id)arg2 ;
-(int)removeConnection:(id)arg1 ;
-(int)addConnection:(id)arg1 ;
-(void)dealloc;
@end
