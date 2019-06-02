/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACCExternalAccessoryXPCClientProtocol <NSObject>
@required
-(void)handleIncomingExternalAccessoryData:(id)arg1 forEASessionIdentifier:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)startDestinationSharingForUUID:(id)arg1 options:(unsigned long long)arg2;
-(void)stopDestinationSharingForUUID:(id)arg1;
-(void)destinationSharingStatus:(BOOL)arg1 forDestinationUUID:(id)arg2 supportedParams:(id)arg3 forUUID:(id)arg4;
-(void)ExternalAccessoryArrived:(id)arg1;
-(void)ExternalAccessoryLeft:(id)arg1;
-(void)accessoryCloseExternalAccessorySession:(id)arg1;
-(void)enqueueLocationNMEASentence:(id)arg1 forUUID:(id)arg2;
-(void)vehicleStatusUpdate:(id)arg1 forUUID:(id)arg2;
-(void)updateAccessoryInfo:(id)arg1 forUUID:(id)arg2;

@end
