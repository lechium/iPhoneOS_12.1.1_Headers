/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCameraSnapshotReceiver.h>
#import <libobjc.A.dylib/HMDCameraGetSnapshotProtocol.h>
#import <libobjc.A.dylib/HMDCameraSnapshotReceiverProtocol.h>
#import <libobjc.A.dylib/HMDCameraSnapshotIDSRelayReceiverDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDCameraSnapshotRemoteRelayReceiverDelegate;
@class HMDCameraSnapshotIDSRelayReceiver, NSString;

@interface HMDCameraSnapshotRemoteRelayReceiver : HMDCameraSnapshotReceiver <HMDCameraGetSnapshotProtocol, HMDCameraSnapshotReceiverProtocol, HMDCameraSnapshotIDSRelayReceiverDelegate, HMFLogging> {

	id<HMDCameraSnapshotRemoteRelayReceiverDelegate> _delegate;
	HMDCameraSnapshotIDSRelayReceiver* _relayReceiver;

}

@property (assign,nonatomic,__weak) id<HMDCameraSnapshotRemoteRelayReceiverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) HMDCameraSnapshotIDSRelayReceiver * relayReceiver;                             //@synthesize relayReceiver=_relayReceiver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)logIdentifier;
-(void)getSnapshot:(unsigned long long)arg1 ;
-(void)_getSnapshot:(unsigned long long)arg1 ;
-(id)initWithSessionID:(id)arg1 workQueue:(id)arg2 options:(id)arg3 accessory:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 uniqueIdentifier:(id)arg7 snapshotRequestHandler:(id)arg8 residentMessageHandler:(id)arg9 ;
-(HMDCameraSnapshotIDSRelayReceiver *)relayReceiver;
-(void)snapShotSendFailed:(id)arg1 ;
-(void)_callDidSaveImageDelegateWithError:(id)arg1 ;
-(void)_callGettingImageDelegate:(id)arg1 ;
-(void)setRelayReceiver:(HMDCameraSnapshotIDSRelayReceiver *)arg1 ;
-(void)relayReceiver:(id)arg1 didReceiveFile:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id<HMDCameraSnapshotRemoteRelayReceiverDelegate>)arg1 ;
-(id<HMDCameraSnapshotRemoteRelayReceiverDelegate>)delegate;
@end
