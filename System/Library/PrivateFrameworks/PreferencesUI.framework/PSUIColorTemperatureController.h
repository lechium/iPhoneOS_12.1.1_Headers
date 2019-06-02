/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreferencesUI/PreferencesUI-Structs.h>
#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/PSTimeRangeCellDelegate.h>

@class CBClient, NSDateFormatter, NSTimer, PSSpecifier;

@interface PSUIColorTemperatureController : PSListController <PSTimeRangeCellDelegate> {

	CBClient* _brightnessClient;
	NSDateFormatter* _timeFormatter;
	BOOL _temperatureSliderWasTracking;
	NSTimer* _blueLightReductionLabelRefreshTimer;
	BOOL _showColorTemperature;
	BOOL _showingScheduleRange;
	PSSpecifier* _scheduleRangeSpecifier;
	PSSpecifier* _scheduleSwitchSpecifier;
	PSSpecifier* _manualSwitchSpecifier;
	PSSpecifier* _temperatureSlider;

}
-(id)fromDetailForCell:(id)arg1 ;
-(id)toDetailForCell:(id)arg1 ;
-(void)handleBlueLightStatusChanged:(SCD_Struct_PS5*)arg1 ;
-(id)blueLightReductionFooter;
-(void)showScheduleRange:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_printBlueLightStatus:(SCD_Struct_PS5*)arg1 ;
-(void)showAlertToDisableAccessibilityFiltersForBlueLightReduction:(/*^block*/id)arg1 cancel:(/*^block*/id)arg2 ;
-(void)colorTemperatureSliderDidChange;
-(id)localizedTimeForTime:(SCD_Struct_PS3)arg1 ;
-(id)getBlueLightReductionEnabled:(id)arg1 ;
-(void)setBlueLightReductionEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)getBlueLightReductionScheduleEnabled:(id)arg1 ;
-(void)setBlueLightReductionSchedule:(id)arg1 forSpecifier:(id)arg2 ;
-(id)temperatureStrength:(id)arg1 ;
-(void)setTemperatureStrength:(id)arg1 specifier:(id)arg2 ;
-(id)specifiers;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

