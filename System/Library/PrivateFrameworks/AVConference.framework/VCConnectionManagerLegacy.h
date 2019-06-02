/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCConnectionManager.h>

@protocol VCConnectionProtocol;
@class NSMutableArray, NSString;

@interface VCConnectionManagerLegacy : VCConnectionManager {

	id<VCConnectionProtocol> _pendingPrimaryConnection;
	id<VCConnectionProtocol> _pendingSecondaryConnection;
	NSMutableArray* _validConnections;
	NSString* _relayConnectionID;

}

@property (nonatomic,retain) id<VCConnectionProtocol> pendingPrimaryConnection;                //@synthesize pendingPrimaryConnection=_pendingPrimaryConnection - In the implementation block
@property (nonatomic,retain) id<VCConnectionProtocol> pendingSecondaryConnection;              //@synthesize pendingSecondaryConnection=_pendingSecondaryConnection - In the implementation block
@property (nonatomic,copy) NSString * relayConnectionID;                                       //@synthesize relayConnectionID=_relayConnectionID - In the implementation block
-(int)shouldNominateCandidatePairInternal:(tagCANDIDATEPAIR*)arg1 interfaceMask:(int)arg2 nominated:(int*)arg3 demote:(int*)arg4 connectionPriority:(int*)arg5 replaceOnly:(int*)arg6 ;
-(BOOL)shouldNominateConnection:(id)arg1 ;
-(int)nominateConnection:(id)arg1 asPrimary:(BOOL)arg2 interfaceMask:(int)arg3 demote:(int*)arg4 connectionPriority:(int*)arg5 replaceOnly:(int*)arg6 ;
-(id)getPrimaryConnectionToBeCompared;
-(id<VCConnectionProtocol>)pendingPrimaryConnection;
-(id<VCConnectionProtocol>)pendingSecondaryConnection;
-(void)setPendingPrimaryConnection:(id<VCConnectionProtocol>)arg1 ;
-(void)setPendingSecondaryConnection:(id<VCConnectionProtocol>)arg1 ;
-(void)reportConnection:(id)arg1 isInitialConnection:(BOOL)arg2 ;
-(int)removeConnectionWithIPPort:(tagIPPORT*)arg1 isLocalInterface:(BOOL)arg2 ;
-(int)removeConnectionWithIPPortInternal:(tagIPPORT*)arg1 isLocalInterface:(BOOL)arg2 ;
-(int)updateStateWithCurrentConnection:(id)arg1 asPrimary:(BOOL)arg2 interfaceMask:(int)arg3 demote:(int*)arg4 replaceOnly:(int*)arg5 ;
-(id)getSecondaryConnectionToBeCompared;
-(int)shouldNominateCandidatePair:(tagCANDIDATEPAIR*)arg1 interfaceMask:(int)arg2 nominated:(int*)arg3 demote:(int*)arg4 connectionPriority:(int*)arg5 replaceOnly:(int*)arg6 ;
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
-(NSString *)relayConnectionID;
-(void)setRelayConnectionID:(NSString *)arg1 ;
-(int)removeConnection:(id)arg1 ;
-(int)addConnection:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

