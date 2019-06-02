/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol HMDDeviceSetupSessionDelegate, OS_dispatch_queue;
@class NSUUID, HMDHomeManager, NSObject, HMDDeviceSetupSessionInternal, NSString;

@interface HMDDeviceSetupSession : HMFObject <HMFLogging, HMFMessageReceiver> {

	BOOL _open;
	id<HMDDeviceSetupSessionDelegate> _delegate;
	NSUUID* _identifier;
	HMDHomeManager* _homeManager;
	NSObject*<OS_dispatch_queue> _clientQueue;
	HMDDeviceSetupSessionInternal* _internal;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                      //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) HMDDeviceSetupSessionInternal * internal;                      //@synthesize internal=_internal - In the implementation block
@property (assign,getter=isOpen,nonatomic) BOOL open;                                         //@synthesize open=_open - In the implementation block
@property (__weak) id<HMDDeviceSetupSessionDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) NSUUID * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (readonly) long long role; 
@property (__weak,readonly) HMDHomeManager * homeManager;                                     //@synthesize homeManager=_homeManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
+(id)followUpController;
+(BOOL)isRoleSupported:(long long)arg1 ;
+(void)startAdvertising;
+(void)stopAdvertising;
-(BOOL)isOpen;
-(long long)role;
-(HMDHomeManager *)homeManager;
-(HMDDeviceSetupSessionInternal *)internal;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)logIdentifier;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(id)messageDispatcher;
-(id)messageDestination;
-(void)_closeWithError:(id)arg1 ;
-(void)__registerForMessages;
-(void)_handleClose:(id)arg1 ;
-(void)_handleRecieveData:(id)arg1 ;
-(void)setOpen:(BOOL)arg1 ;
-(void)_sendRequestData:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 role:(long long)arg2 homeManager:(id)arg3 ;
-(id)init;
-(NSUUID *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setDelegate:(id<HMDDeviceSetupSessionDelegate>)arg1 ;
-(id<HMDDeviceSetupSessionDelegate>)delegate;
-(BOOL)open;
@end

