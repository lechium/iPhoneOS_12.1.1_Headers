/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NNMKSyncStateManagerDelegate <NSObject>
@required
-(void)syncStateManager:(id)arg1 didAcknowledgeForwardNotificationPayload:(/*^block*/id)arg2 forBulletin:(id)arg3;
-(void)syncStateManagerDidUnpair:(id)arg1;
-(void)syncStateManagerDidChangePairedDevice:(id)arg1;
-(void)syncStateManagerDidBeginSyncSession:(id)arg1 syncSessionType:(id)arg2 syncSessionIdentifier:(id)arg3;
-(void)syncStateManagerDidInvalidateSyncSession:(id)arg1 syncSessionIdentifier:(id)arg2;

@end

