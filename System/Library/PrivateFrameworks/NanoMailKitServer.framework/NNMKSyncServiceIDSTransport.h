/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/NNMKSyncServiceTransport.h>

@protocol NNMKSyncServiceTransportDelegate;
@class IDSService, NSString;

@interface NNMKSyncServiceIDSTransport : NSObject <IDSServiceDelegate, NNMKSyncServiceTransport> {

	IDSService* _idsService;
	unsigned long long _connectivityState;
	id<NNMKSyncServiceTransportDelegate> _delegate;
	NSString* _serviceName;

}

@property (nonatomic,retain) IDSService * idsService;                                           //@synthesize idsService=_idsService - In the implementation block
@property (assign,nonatomic) unsigned long long connectivityState;                              //@synthesize connectivityState=_connectivityState - In the implementation block
@property (assign,nonatomic,__weak) id<NNMKSyncServiceTransportDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * serviceName;                                            //@synthesize serviceName=_serviceName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL forceFailureForAllRequests; 
@property (assign,nonatomic) BOOL simulateCloudConnectedOnly; 
-(IDSService *)idsService;
-(void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 activeAccountsChanged:(id)arg2 ;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)service:(id)arg1 nearbyDevicesChanged:(id)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4 ;
-(void)serviceSpaceDidBecomeAvailable:(id)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(void)setIdsService:(IDSService *)arg1 ;
-(id)sendProtobufData:(id)arg1 type:(unsigned long long)arg2 priority:(unsigned long long)arg3 shortTimeout:(BOOL)arg4 allowCloudDelivery:(BOOL)arg5 ;
-(id)sendProtobufData:(id)arg1 type:(unsigned long long)arg2 priority:(unsigned long long)arg3 timeout:(double)arg4 allowCloudDelivery:(BOOL)arg5 ;
-(id)initWithServiceName:(id)arg1 queue:(id)arg2 delegate:(id)arg3 ;
-(unsigned long long)connectivityState;
-(unsigned long long)_connectivityState;
-(void)_handleConnectivityChange;
-(void)setConnectivityState:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<NNMKSyncServiceTransportDelegate>)arg1 ;
-(id<NNMKSyncServiceTransportDelegate>)delegate;
-(NSString *)serviceName;
@end

