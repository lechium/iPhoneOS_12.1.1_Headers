/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RPCompanionLinkXPCClientInterface
@required
-(void)companionLinkFoundDevice:(id)arg1;
-(void)companionLinkLostDevice:(id)arg1;
-(void)companionLinkChangedDevice:(id)arg1 changes:(unsigned)arg2;
-(void)companionLinkLocalDeviceUpdated:(id)arg1;
-(void)companionLinkReceivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3;
-(void)companionLinkReceivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(/*^block*/id)arg4;

@end

