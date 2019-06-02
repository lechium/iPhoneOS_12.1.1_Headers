/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class UIProgressHUD, HKHealthStore;

@interface HKHealthManageStorageViewController : PSListController {

	long long _status;
	UIProgressHUD* _spinnerView;
	HKHealthStore* _healthStore;

}

@property (nonatomic,readonly) HKHealthStore * healthStore;              //@synthesize healthStore=_healthStore - In the implementation block
-(void)_loadCloudSyncStorageStatus;
-(void)confirmDisable:(id)arg1 ;
-(void)_disableAndDelete:(id)arg1 ;
-(void)showSpinnerMessage:(id)arg1 ;
-(void)hideSpinner;
-(HKHealthStore *)healthStore;
-(id)specifiers;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
@end
