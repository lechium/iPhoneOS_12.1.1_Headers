/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Messages/PlugIns/SMS.imservice/SMS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SMSRelayPushHandlerListener <NSObject>
@optional
-(void)handler:(id)arg1 outgoingDownloadMessage:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 fromToken:(id)arg5 messageGUID:(id)arg6 timeStamp:(id)arg7 isBeingReplayed:(BOOL)arg8 storageContext:(id)arg9;
-(void)handler:(id)arg1 outgoingPlainTextMessage:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 fromToken:(id)arg5 messageGUID:(id)arg6 timeStamp:(id)arg7 isBeingReplayed:(BOOL)arg8 storageContext:(id)arg9;
-(void)handler:(id)arg1 messageIDSent:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 timeStamp:(id)arg5 storageContext:(id)arg6;
-(void)handler:(id)arg1 messageIDRead:(id)arg2 timeStamp:(id)arg3 toIdentifier:(id)arg4 fromIdentifier:(id)arg5 storageContext:(id)arg6;
-(void)handler:(id)arg1 incomingPlainTextMessage:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 timeStamp:(id)arg5 storageContext:(id)arg6;
-(void)handler:(id)arg1 incomingDownloadMessage:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 timeStamp:(id)arg5 storageContext:(id)arg6;
-(void)handler:(id)arg1 deleteCommand:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 fromToken:(id)arg5 timeStamp:(id)arg6 needsDeliveryReceipt:(id)arg7 deliveryContext:(id)arg8 storageContext:(id)arg9;
-(void)handler:(id)arg1 messageIDSendFailure:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 timeStamp:(id)arg5 storageContext:(id)arg6;
-(void)handler:(id)arg1 localIncommingMessage:(id)arg2 storageContext:(id)arg3;
-(void)handler:(id)arg1 localOutgoingMessage:(id)arg2 isBeingReplayed:(BOOL)arg3 storageContext:(id)arg4;
-(void)handler:(id)arg1 localOutgoingDownloadMessage:(id)arg2 isBeingReplayed:(BOOL)arg3 storageContext:(id)arg4;
-(void)handler:(id)arg1 localIncomingDownloadMessage:(id)arg2 storageContext:(id)arg3;
-(void)handler:(id)arg1 localMessageSent:(id)arg2 storageContext:(id)arg3;
-(void)handler:(id)arg1 localMessageRead:(id)arg2 storageContext:(id)arg3;
-(void)handler:(id)arg1 localMessageError:(id)arg2 storageContext:(id)arg3;
-(void)handler:(id)arg1 localFileRequest:(id)arg2 storageContext:(id)arg3;
-(void)handler:(id)arg1 localFileResponse:(id)arg2 storageContext:(id)arg3;
-(void)handler:(id)arg1 incomingDisplayPinCode:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 fromToken:(id)arg5 messageGUID:(id)arg6 timeStamp:(id)arg7 storageContext:(id)arg8;
-(void)handler:(id)arg1 incomingEnrollMeRequest:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 fromToken:(id)arg5 messageGUID:(id)arg6 timeStamp:(id)arg7 storageContext:(id)arg8;
-(void)handler:(id)arg1 incomingResponseForApproval:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 fromToken:(id)arg5 messageGUID:(id)arg6 timeStamp:(id)arg7 storageContext:(id)arg8;

@end

