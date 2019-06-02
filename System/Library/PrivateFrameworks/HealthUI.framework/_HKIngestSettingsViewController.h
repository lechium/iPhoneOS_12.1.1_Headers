/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKTableViewController.h>
#import <libobjc.A.dylib/HKSwitchTableViewCellDelegate.h>

@class HKDisplayTypeController, NSMutableArray, NSUUID, HKHealthStore;

@interface _HKIngestSettingsViewController : HKTableViewController <HKSwitchTableViewCellDelegate> {

	HKDisplayTypeController* _displayTypeController;
	NSMutableArray* _dataTypeNames;
	BOOL _deviceEnabled;
	BOOL _deviceFound;
	NSUUID* _deviceIdentifier;
	HKHealthStore* _healthStore;

}

@property (nonatomic,retain) NSUUID * deviceIdentifier;                //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;              //@synthesize healthStore=_healthStore - In the implementation block
-(void)setDeviceIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)deviceIdentifier;
-(void)switchCellValueChanged:(id)arg1 value:(BOOL)arg2 ;
-(void)fetchEnabledStatusForPeripheral;
-(id)_initWithHealthStore:(id)arg1 displayTypeController:(id)arg2 ;
-(void)reloadData:(id)arg1 ;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
@end

