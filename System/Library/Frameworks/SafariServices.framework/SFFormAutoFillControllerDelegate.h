/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFFormAutoFillControllerDelegate <NSObject>
@optional
-(BOOL)formAutoFillControllerShouldShowIconsInPasswordPicker:(id)arg1;
-(void)formAutoFillControllerGetAuthenticationForAutoFill:(id)arg1 onPageLoad:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)formAutoFillControllerGetAuthenticationForAutoFillOnPageLoad:(id)arg1 completion:(/*^block*/id)arg2;
-(id)formAutoFillControllerOneTimeCodeMonitor:(id)arg1;
-(BOOL)formAutoFillControllerShouldDisableStreamlinedLogin:(id)arg1;
-(void)formAutoFillControllerUserChoseToUseGeneratedPassword:(id)arg1;
-(BOOL)formAutoFillControllerDidUserDeclineAutomaticStrongPasswordForCurrentDomain:(id)arg1;
-(void)formAutoFillControllerDidFocusSensitiveFormField:(id)arg1;

@required
-(id)formAutoFillControllerURLForFormAutoFill:(id)arg1;
-(BOOL)formAutoFillControllerCanPrefillForm:(id)arg1;

@end

