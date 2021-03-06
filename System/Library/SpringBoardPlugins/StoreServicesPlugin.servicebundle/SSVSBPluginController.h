/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/SpringBoardPlugins/StoreServicesPlugin.servicebundle/StoreServicesPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSVSBCFUserNotificationDelegate.h>
#import <libobjc.A.dylib/SSVSBFullScreenAlertViewDelegate.h>
#import <libobjc.A.dylib/SBPluginBundleController.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, SSXPCConnection, NSString;

@interface SSVSBPluginController : NSObject <SSVSBCFUserNotificationDelegate, SSVSBFullScreenAlertViewDelegate, SBPluginBundleController> {

	NSMutableArray* _accountAlertControllers;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SSXPCConnection* _listenerConnection;
	int _notifyToken;
	SSXPCConnection* _requestConnection;
	NSMutableArray* _userNotifications;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)awakeFromBundle;
+(id)sharedPluginController;
-(void)_registerConnection;
-(void)_handleMessage:(id)arg1 connection:(id)arg2 ;
-(void)userNotificationDidDismiss:(id)arg1 ;
-(void)alertViewControllerDidFinish:(id)arg1 ;
-(void)_dismissAlertViewController:(id)arg1 ;
-(void)_disconnectRequestConnection:(id)arg1 ;
-(void)_presentAlertViewController:(id)arg1 ;
-(void)_showCFUserNotification:(id)arg1 ;
-(void)_cancelAllUserNotifications;
-(void)_showAccountSheetWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)_showCFUserNotificationWithMessage:(id)arg1 connection:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)_start;
@end

