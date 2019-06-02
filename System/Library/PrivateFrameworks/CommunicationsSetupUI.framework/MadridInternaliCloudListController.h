/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/IMCloudKitEventHandler.h>

@class NSString;

@interface MadridInternaliCloudListController : PSListController <IMCloudKitEventHandler>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_startListeningForNotifications;
-(void)cloudKitEventNotificationManager:(id)arg1 syncStateDidChange:(id)arg2 ;
-(void)_stopListeningForNotifications;
-(void)_handleDaemonConnected:(id)arg1 ;
-(void)_handleDaemonDisconnected:(id)arg1 ;
-(void)setMessagesOniCloudEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)messagesOniCloudEnabled:(id)arg1 ;
-(void)syncToiCloudNow:(id)arg1 ;
-(void)clearLocalSyncState:(id)arg1 ;
-(void)clearData:(id)arg1 ;
-(id)specifiers;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
@end

