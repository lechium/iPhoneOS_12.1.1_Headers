/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>
#import <libobjc.A.dylib/AVTPushNotificationsSupport.h>

@protocol AVTPushNotificationsSupport
@property (assign,nonatomic,__weak) id<AVTPushNotificationsSupportDelegate> delegate; 
@required
-(void)startListeningToPushNotifications;
-(void)stopListeningToPushNotifications;
-(void)setDelegate:(id)arg1;
-(id<AVTPushNotificationsSupportDelegate>)delegate;

@end


@protocol AVTPushNotificationsSupportDelegate, OS_dispatch_queue, AVTUILogger;
@class APSConnection, NSObject, AVTCoreEnvironment, AVTPushNotificationsConnectionFactory, NSString;

@interface AVTPushNotificationsSupport : NSObject <APSConnectionDelegate, AVTPushNotificationsSupport> {

	id<AVTPushNotificationsSupportDelegate> _delegate;
	APSConnection* _pushConnection;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	AVTCoreEnvironment* _environment;
	AVTPushNotificationsConnectionFactory* _connectionFactory;
	id<AVTUILogger> _logger;

}

@property (nonatomic,retain) APSConnection * pushConnection;                                           //@synthesize pushConnection=_pushConnection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> connectionQueue;                           //@synthesize connectionQueue=_connectionQueue - In the implementation block
@property (nonatomic,readonly) AVTCoreEnvironment * environment;                                       //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) AVTPushNotificationsConnectionFactory * connectionFactory;              //@synthesize connectionFactory=_connectionFactory - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                                                 //@synthesize logger=_logger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<AVTPushNotificationsSupportDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
+(id)topic;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(void)setPushConnection:(APSConnection *)arg1 ;
-(APSConnection *)pushConnection;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(id<AVTUILogger>)logger;
-(AVTPushNotificationsConnectionFactory *)connectionFactory;
-(void)getAPSEnvironmentString:(/*^block*/id)arg1 ;
-(void)setupConnectionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startListeningToPushNotifications;
-(void)stopListeningToPushNotifications;
-(id)initWithEnvironment:(id)arg1 connectionFactory:(id)arg2 ;
-(void)setDelegate:(id<AVTPushNotificationsSupportDelegate>)arg1 ;
-(id<AVTPushNotificationsSupportDelegate>)delegate;
-(AVTCoreEnvironment *)environment;
@end

