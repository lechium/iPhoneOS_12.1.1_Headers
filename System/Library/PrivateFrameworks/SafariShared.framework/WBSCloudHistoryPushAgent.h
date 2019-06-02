/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/WBSCloudHistoryPushAgent.h>

@protocol WBSCloudHistoryPushAgent <NSObject>
@required
-(void)clearAcknowledgedPushNotifications;
-(void)acknowledgePendingPushNotifications;
-(void)getPushNotifications:(/*^block*/id)arg1;
-(void)queryMemoryFootprint:(/*^block*/id)arg1;

@end


@protocol OS_dispatch_queue;
@class NSXPCListener, APSConnection, NSObject, NSString;

@interface WBSCloudHistoryPushAgent : NSObject <APSConnectionDelegate, NSXPCListenerDelegate, WBSCloudHistoryPushAgent> {

	NSXPCListener* _xpcListener;
	APSConnection* _pushConnection;
	NSObject*<OS_dispatch_queue> _pushNotificationStateQueue;

}

@property (assign,setter=_setHasUnacknowledgedPushNotifications:,nonatomic) BOOL _hasUnacknowledgedPushNotifications; 
@property (assign,setter=_setHasAcknowlegedPushNotifications:,nonatomic) BOOL _hasAcknowledgedPushNotifications; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)clearAcknowledgedPushNotifications;
-(void)acknowledgePendingPushNotifications;
-(void)getPushNotifications:(/*^block*/id)arg1 ;
-(id)_pushTopic;
-(void)_setHasUnacknowledgedPushNotifications:(BOOL)arg1 ;
-(void)queryMemoryFootprint:(/*^block*/id)arg1 ;
-(BOOL)_hasUnacknowledgedPushNotifications;
-(BOOL)_hasAcknowledgedPushNotifications;
-(void)_setHasAcknowlegedPushNotifications:(BOOL)arg1 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

