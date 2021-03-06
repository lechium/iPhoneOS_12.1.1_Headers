/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreferencesUI/PreferencesUI-Structs.h>
#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/PSMagnifyControllerDelegate.h>
#import <libobjc.A.dylib/PSListControllerTestableSpecifiers.h>

@class NSArray, NSDictionary, NSMutableDictionary, CBClient, NSDateFormatter, NSString;

@interface PSUIDisplayController : PSListController <PSMagnifyControllerDelegate, PSListControllerTestableSpecifiers> {

	NSArray* _autoLockValues;
	NSDictionary* _autoLockTitleDictionary;
	NSMutableDictionary* _localizedAutoLockTitleDictionary;
	CBClient* _brightnessClient;
	NSDateFormatter* _timeFormatter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)booleanCapabilitiesToTest;
-(id)controllerForSpecifier:(id)arg1 ;
-(void)brightnessChangedExternally;
-(void)magnifyController:(id)arg1 didFinishWithDisplayMode:(id)arg2 ;
-(id)localizedMagnifyModeName;
-(void)profileNotification:(id)arg1 ;
-(void)handleBlueLightStatusChanged:(SCD_Struct_PS5*)arg1 ;
-(id)localizedTimeForTime:(SCD_Struct_PS3)arg1 ;
-(void)handlePSUIExternalDisplayManagerCurrentModeDidChangeNotification:(id)arg1 ;
-(void)handleBrightnessChangedNotification:(id)arg1 ;
-(void)updateAutoLockSpecifier;
-(void)_cleanupTransactionRef;
-(BOOL)shouldShowAutoLock;
-(BOOL)shouldShowCaseLockOption;
-(id)lockGroupFooter;
-(void)presentModalMagnifyController;
-(id)connectedDisplaySpecifiers;
-(void)_localizeAutoLockTitles;
-(void)reloadBlueLightSpecifiers;
-(id)backlightValue:(id)arg1 ;
-(void)showAlertToDisableAccessibilityFilters:(/*^block*/id)arg1 cancel:(/*^block*/id)arg2 ;
-(void)insertExternalDisplaySpecifiers;
-(void)removeExternalDisplaySpecifiers;
-(void)setScreenLock:(id)arg1 specifier:(id)arg2 ;
-(id)locksAndUnlocksWithCase:(id)arg1 ;
-(void)setLocksAndUnlocksWithCase:(id)arg1 specifier:(id)arg2 ;
-(void)setBoldTextEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)boldTextEnabledForSpecifier:(id)arg1 ;
-(void)setBacklightValue:(id)arg1 specifier:(id)arg2 ;
-(id)blueLightSchedule:(id)arg1 ;
-(id)getAutoWhiteBalanceEnabled:(id)arg1 ;
-(void)setAutoWhiteBalanceEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)screenLock:(id)arg1 ;
-(id)specifiers;
-(id)init;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
@end

