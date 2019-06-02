/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSSetupController.h>

@interface ACUISetupViewController : PSSetupController {

	BOOL _didAttemptDataclassSetup;
	BOOL _shouldForceMailSetup;

}
+(void)showDataclassConfigurationControllerForAccount:(id)arg1 name:(id)arg2 fromViewController:(id)arg3 specifier:(id)arg4 completion:(/*^block*/id)arg5 ;
+(void)showAlternateCreationControllerForAccountType:(id)arg1 username:(id)arg2 fromViewController:(id)arg3 specifier:(id)arg4 completion:(/*^block*/id)arg5 ;
+(id)_specifierForDataclassEditControllerClass:(Class)arg1 withName:(id)arg2 account:(id)arg3 ;
-(void)_dismissAndNotifyParent;
-(void)controller:(id)arg1 didFinishSettingUpAccount:(id)arg2 ;
-(void)finishedAccountSetup;
@end

