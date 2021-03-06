/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NMSMessageCenterDelegate <NSObject>
@optional
-(void)messageCenter:(id)arg1 didReceiveIncomingFileTransfer:(id)arg2;
-(void)messageCenter:(id)arg1 didResolveIDSIdentifier:(id)arg2 forResponse:(id)arg3;
-(void)messageCenter:(id)arg1 didResolveIDSIdentifier:(id)arg2 forFileTransfer:(id)arg3;
-(void)messageCenter:(id)arg1 didSuccessfullySendRequestWithIdentifier:(id)arg2 userInfo:(id)arg3;
-(void)messageCenter:(id)arg1 didSuccessfullyDeliverRequestWithIdentifier:(id)arg2 userInfo:(id)arg3;
-(void)messageCenter:(id)arg1 failedToSendMessageWithIdentifier:(id)arg2 error:(id)arg3 userInfo:(id)arg4;
-(void)messageCenter:(id)arg1 activeDeviceChanged:(id)arg2 acknowledgement:(/*^block*/id)arg3;
-(void)messageCenter:(id)arg1 nearbyDevicesChanged:(id)arg2;
-(void)messageCenter:(id)arg1 didReceiveUnknownRequest:(id)arg2;
-(void)messageCenter:(id)arg1 didResolveIDSIdentifierForRequest:(id)arg2;

@end

