/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@interface PSUIAboutController : PSListController {

	BOOL _firstViewDidAppear;
	id _effectiveSettingsChangedNotificationObserver;

}

@property (nonatomic,retain) id effectiveSettingsChangedNotificationObserver;              //@synthesize effectiveSettingsChangedNotificationObserver=_effectiveSettingsChangedNotificationObserver - In the implementation block
-(void)willUnlock;
-(void)willResignActive;
-(void)willBecomeActive;
-(void)setEffectiveSettingsChangedNotificationObserver:(id)arg1 ;
-(id)effectiveSettingsChangedNotificationObserver;
-(void)setDeviceName:(id)arg1 specifier:(id)arg2 ;
-(id)deviceName:(id)arg1 ;
-(void)updateDeviceNameSpecifierIfNeeded;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
@end
