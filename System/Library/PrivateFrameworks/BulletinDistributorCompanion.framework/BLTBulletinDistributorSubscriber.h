/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BLTPingService.h>

@protocol OS_dispatch_queue, BLTBulletinDistributorSubscriberDelegate, BLTBulletinDistributorSubscriberDeviceDelegate, BLTPingSubscribing;
@class NSMutableDictionary, NSObject, NSString, NSXPCConnection, NSSet;

@interface BLTBulletinDistributorSubscriber : NSObject <BLTPingService> {

	NSMutableDictionary* _subscriptions;
	NSObject*<OS_dispatch_queue> _queue;
	id<BLTBulletinDistributorSubscriberDelegate> _delegate;
	id<BLTBulletinDistributorSubscriberDeviceDelegate> _deviceDelegate;
	NSString* _machServiceName;
	id<BLTPingSubscribing> _client;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) id<BLTPingSubscribing> client;                                        //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                         //@synthesize connection=_connection - In the implementation block
@property (copy) NSString * machServiceName;                                                       //@synthesize machServiceName=_machServiceName - In the implementation block
@property (__weak) id<BLTBulletinDistributorSubscriberDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (__weak) id<BLTBulletinDistributorSubscriberDeviceDelegate> deviceDelegate;              //@synthesize deviceDelegate=_deviceDelegate - In the implementation block
@property (nonatomic,readonly) NSSet * sectionIDs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSSet *)sectionIDs;
-(void)_connectIfNecessary;
-(NSString *)machServiceName;
-(void)pingWithBulletin:(id)arg1 ack:(/*^block*/id)arg2 ;
-(void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ;
-(id<BLTBulletinDistributorSubscriberDeviceDelegate>)deviceDelegate;
-(void)getWillNanoPresentNotificationForSectionID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendBulletinSummary:(id)arg1 ;
-(void)setMachServiceName:(NSString *)arg1 ;
-(void)subscribeToSectionID:(id)arg1 forFullBulletins:(BOOL)arg2 withAck:(BOOL)arg3 ;
-(void)unsubscribeFromSectionID:(id)arg1 ;
-(void)subscribeWithMachServiceName:(id)arg1 ;
-(void)setDeviceDelegate:(id<BLTBulletinDistributorSubscriberDeviceDelegate>)arg1 ;
-(id<BLTPingSubscribing>)client;
-(void)setClient:(id<BLTPingSubscribing>)arg1 ;
-(void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithClient:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<BLTBulletinDistributorSubscriberDelegate>)arg1 ;
-(id<BLTBulletinDistributorSubscriberDelegate>)delegate;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end

