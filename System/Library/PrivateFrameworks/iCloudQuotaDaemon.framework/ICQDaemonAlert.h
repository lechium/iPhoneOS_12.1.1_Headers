/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore, OS_dispatch_queue;
#import <iCloudQuotaDaemon/iCloudQuotaDaemon-Structs.h>
@class NSLock, NSObject, ICQDaemonOffer;

@interface ICQDaemonAlert : NSObject {

	NSLock* _alertLock;
	long long _alertState;
	CFUserNotificationRef _cfAlert;
	NSObject*<OS_dispatch_semaphore> _alertSema;
	NSObject*<OS_dispatch_queue> _alertQueue;
	BOOL _showOnlyInSpringboard;
	BOOL _handleActionsBeforeCallingCompletionHandler;
	ICQDaemonOffer* _daemonOffer;

}

@property (nonatomic,readonly) ICQDaemonOffer * daemonOffer;                                //@synthesize daemonOffer=_daemonOffer - In the implementation block
@property (assign,nonatomic) BOOL showOnlyInSpringboard;                                    //@synthesize showOnlyInSpringboard=_showOnlyInSpringboard - In the implementation block
@property (assign,nonatomic) BOOL handleActionsBeforeCallingCompletionHandler;              //@synthesize handleActionsBeforeCallingCompletionHandler=_handleActionsBeforeCallingCompletionHandler - In the implementation block
+(BOOL)shouldShowForDaemonOffer:(id)arg1 ;
+(void)dismissAlertsWithNotificationID:(id)arg1 ;
-(id)initWithDaemonOffer:(id)arg1 ;
-(BOOL)showAlertWithCompletion:(/*^block*/id)arg1 ;
-(ICQDaemonOffer *)daemonOffer;
-(BOOL)showOnlyInSpringboard;
-(BOOL)handleActionsBeforeCallingCompletionHandler;
-(void)_handleLink:(id)arg1 ;
-(void)setShowOnlyInSpringboard:(BOOL)arg1 ;
-(void)setHandleActionsBeforeCallingCompletionHandler:(BOOL)arg1 ;
-(void)dismissAlert;
-(id)init;
-(void)dealloc;
@end

