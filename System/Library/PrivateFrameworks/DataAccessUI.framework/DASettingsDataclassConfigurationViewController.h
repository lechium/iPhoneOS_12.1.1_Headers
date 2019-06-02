/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DataAccessUI.framework/DataAccessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/ACUIDataclassConfigurationViewController.h>

@class DAAccount;

@interface DASettingsDataclassConfigurationViewController : ACUIDataclassConfigurationViewController {

	DAAccount* _daAccount;
	BOOL _haveRegisteredForAccountsChanged;

}

@property (nonatomic,retain) DAAccount * daAccount;              //@synthesize daAccount=_daAccount - In the implementation block
-(void)cancelButtonClicked:(id)arg1 ;
-(BOOL)shouldVerifyBeforeAccountSave;
-(id)otherSpecifiers;
-(Class)accountInfoControllerClass;
-(void)_accountsChanged:(id)arg1 ;
-(void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4 ;
-(DAAccount *)daAccount;
-(id)_navTitle;
-(void)_listenForAccountsChangedNotifications;
-(id)accountFromSpecifier;
-(void)setDaAccount:(DAAccount *)arg1 ;
-(void)reloadAccount;
-(id)accountDescriptionForFirstTimeSetup;
-(id)specifiers;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
@end
