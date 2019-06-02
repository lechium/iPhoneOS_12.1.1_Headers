/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCameraIDSSessionHandler.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/IDSSessionDelegate.h>
#import <libobjc.A.dylib/HMDCameraRemoteStreamSenderProtocol.h>
#import <libobjc.A.dylib/HMDCameraPowerAssertionProtocol.h>

@protocol HMDCameraIDSSessionInitiatorDelegate, OS_dispatch_queue;
@class NSNumber, HMDCameraSessionID, NSObject, HMDDevice, HMDCameraNetworkConfig, AVCPacketRelay, HMFOSTransaction, NSString;

@interface HMDCameraIDSSessionInitiator : HMDCameraIDSSessionHandler <IDSServiceDelegate, IDSSessionDelegate, HMDCameraRemoteStreamSenderProtocol, HMDCameraPowerAssertionProtocol> {

	id<HMDCameraIDSSessionInitiatorDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	HMDDevice* _device;
	HMDCameraNetworkConfig* _localNetworkConfig;
	AVCPacketRelay* _packetRelay;
	HMFOSTransaction* _packetRelayTransaction;

}

@property (nonatomic,__weak,readonly) id<HMDCameraIDSSessionInitiatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                            //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,readonly) HMDDevice * device;                                                    //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) HMDCameraNetworkConfig * localNetworkConfig;                           //@synthesize localNetworkConfig=_localNetworkConfig - In the implementation block
@property (nonatomic,retain) AVCPacketRelay * packetRelay;                                            //@synthesize packetRelay=_packetRelay - In the implementation block
@property (nonatomic,retain) HMFOSTransaction * packetRelayTransaction;                               //@synthesize packetRelayTransaction=_packetRelayTransaction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSNumber * mtu; 
@property (nonatomic,readonly) HMDCameraSessionID * sessionID; 
+(id)logCategory;
-(HMDDevice *)device;
-(id)logIdentifier;
-(void)openRelaySession;
-(void)startPacketRelayWithVideoSocket:(int)arg1 videoNetworkConfig:(id)arg2 cameraVideoSSRC:(unsigned)arg3 audioSocket:(int)arg4 audioNetworkConfig:(id)arg5 cameraAudioSSRC:(unsigned)arg6 ;
-(NSNumber *)mtu;
-(HMDCameraNetworkConfig *)localNetworkConfig;
-(AVCPacketRelay *)packetRelay;
-(void)setPacketRelay:(AVCPacketRelay *)arg1 ;
-(void)_sendInvitation;
-(void)_callSessionEnded:(id)arg1 ;
-(void)_startPacketRelayWithVideoSocket:(int)arg1 videoNetworkConfig:(id)arg2 cameraVideoSSRC:(unsigned)arg3 audioSocket:(int)arg4 audioNetworkConfig:(id)arg5 cameraAudioSSRC:(unsigned)arg6 ;
-(void)setPacketRelayTransaction:(HMFOSTransaction *)arg1 ;
-(void)_callSessionStarted:(id)arg1 ;
-(void)session:(id)arg1 receivedInvitationAcceptFromID:(id)arg2 ;
-(void)session:(id)arg1 receivedInvitationDeclineFromID:(id)arg2 ;
-(void)session:(id)arg1 receivedInvitationCancelFromID:(id)arg2 ;
-(void)sessionStarted:(id)arg1 ;
-(void)sessionEnded:(id)arg1 withReason:(unsigned)arg2 error:(id)arg3 ;
-(id)initWithSessionID:(id)arg1 workQueue:(id)arg2 device:(id)arg3 localNetworkConfig:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 ;
-(HMFOSTransaction *)packetRelayTransaction;
-(void)dealloc;
-(id<HMDCameraIDSSessionInitiatorDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
@end

