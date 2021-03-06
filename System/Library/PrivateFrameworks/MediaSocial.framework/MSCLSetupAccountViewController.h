/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class MSCLAccountStore, MSCLSettingsTextFieldTableViewCell, MSCLSocialService, MSCLSettingsTableViewCell, UITableView, NSString;

@interface MSCLSetupAccountViewController : SKUIViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {

	MSCLAccountStore* _accountStore;
	BOOL _isVerifying;
	MSCLSettingsTextFieldTableViewCell* _passwordCell;
	MSCLSocialService* _service;
	MSCLSettingsTableViewCell* _signInButtonCell;
	UITableView* _tableView;
	MSCLSettingsTextFieldTableViewCell* _userNameCell;

}

@property (nonatomic,readonly) MSCLAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,readonly) MSCLSocialService * service;                  //@synthesize service=_service - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MSCLSocialService *)service;
-(MSCLAccountStore *)accountStore;
-(void)_setDefaultOptionsForTextField:(id)arg1 ;
-(void)_textFieldDidChangeNotification:(id)arg1 ;
-(long long)_userNameKeyboardType;
-(id)_userNamePlaceholder;
-(BOOL)_textFieldsHaveValues;
-(void)_signIn;
-(void)_setVerifying:(BOOL)arg1 ;
-(void)_finishSignInWithAccount:(id)arg1 error:(id)arg2 ;
-(id)initWithService:(id)arg1 accountStore:(id)arg2 ;
-(void)dealloc;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
@end

