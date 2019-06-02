/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class IMServiceImpl, FTRegConnectionHandler;

@interface CNFInternalAccountListViewController : PSListController {

	IMServiceImpl* _service;
	FTRegConnectionHandler* _connectionHandler;

}

@property (nonatomic,retain) IMServiceImpl * service;              //@synthesize service=_service - In the implementation block
-(IMServiceImpl *)service;
-(void)setService:(IMServiceImpl *)arg1 ;
-(void)_startListeningForNotifications;
-(id)initWithServiceType:(long long)arg1 ;
-(void)accountTappedWithSpecifier:(id)arg1 ;
-(void)_stopListeningForNotifications;
-(void)_handleDaemonConnected:(id)arg1 ;
-(void)_handleDaemonDisconnected:(id)arg1 ;
-(void)_handleAccountNotification:(id)arg1 ;
-(id)accountNameForSpecifier:(id)arg1 ;
-(id)specifiers;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
@end

