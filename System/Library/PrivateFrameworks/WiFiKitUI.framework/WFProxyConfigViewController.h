/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@class WFNetworkSettingsConfig, UISwitch, WFTextFieldCell;

@interface WFProxyConfigViewController : UITableViewController {

	/*^block*/id _saveHandler;
	WFNetworkSettingsConfig* _originalConfig;
	WFNetworkSettingsConfig* _modifiedConfig;
	UISwitch* _authSwitch;
	WFTextFieldCell* _serverCell;
	WFTextFieldCell* _portCell;
	WFTextFieldCell* _userCell;
	WFTextFieldCell* _passwordCell;
	WFTextFieldCell* _urlCell;

}

@property (nonatomic,retain) WFNetworkSettingsConfig * originalConfig;              //@synthesize originalConfig=_originalConfig - In the implementation block
@property (nonatomic,retain) WFNetworkSettingsConfig * modifiedConfig;              //@synthesize modifiedConfig=_modifiedConfig - In the implementation block
@property (nonatomic,retain) UISwitch * authSwitch;                                 //@synthesize authSwitch=_authSwitch - In the implementation block
@property (nonatomic,retain) WFTextFieldCell * serverCell;                          //@synthesize serverCell=_serverCell - In the implementation block
@property (nonatomic,retain) WFTextFieldCell * portCell;                            //@synthesize portCell=_portCell - In the implementation block
@property (nonatomic,retain) WFTextFieldCell * userCell;                            //@synthesize userCell=_userCell - In the implementation block
@property (nonatomic,retain) WFTextFieldCell * passwordCell;                        //@synthesize passwordCell=_passwordCell - In the implementation block
@property (nonatomic,retain) WFTextFieldCell * urlCell;                             //@synthesize urlCell=_urlCell - In the implementation block
@property (nonatomic,copy) id saveHandler;                                          //@synthesize saveHandler=_saveHandler - In the implementation block
-(id)saveHandler;
-(void)_updateSaveEnabled;
-(WFTextFieldCell *)passwordCell;
-(void)_setFirstResponderAfterCell:(id)arg1 ;
-(void)setPasswordCell:(WFTextFieldCell *)arg1 ;
-(WFNetworkSettingsConfig *)modifiedConfig;
-(WFNetworkSettingsConfig *)originalConfig;
-(void)setOriginalConfig:(WFNetworkSettingsConfig *)arg1 ;
-(void)setModifiedConfig:(WFNetworkSettingsConfig *)arg1 ;
-(WFTextFieldCell *)urlCell;
-(WFTextFieldCell *)serverCell;
-(WFTextFieldCell *)portCell;
-(void)_changeProxyAuthentication:(id)arg1 ;
-(WFTextFieldCell *)userCell;
-(UISwitch *)authSwitch;
-(void)setAuthSwitch:(UISwitch *)arg1 ;
-(void)setServerCell:(WFTextFieldCell *)arg1 ;
-(void)setPortCell:(WFTextFieldCell *)arg1 ;
-(void)setUserCell:(WFTextFieldCell *)arg1 ;
-(void)setUrlCell:(WFTextFieldCell *)arg1 ;
-(id)initWithConfig:(id)arg1 ;
-(void)setSaveHandler:(id)arg1 ;
-(void)viewDidLoad;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)save:(id)arg1 ;
@end

