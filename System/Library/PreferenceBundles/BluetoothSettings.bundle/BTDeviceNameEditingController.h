/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <UIKit/UITextFieldDelegate.h>

@class BTSDevice, NSString;

@interface BTDeviceNameEditingController : PSListController <UITextFieldDelegate> {

	BTSDevice* _currentDevice;
	NSString* _deviceName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldSelectResponderOnAppearance;
-(void)keyboardWillShow:(id)arg1 ;
-(void)saveEditedName:(id)arg1 specifier:(id)arg2 ;
-(id)getDeviceName:(id)arg1 ;
-(id)specifiers;
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)textDidChange:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)suspend;
@end

