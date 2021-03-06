/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FIUIHealthSettingsForceUpdatable.h>

@class FIUIHealthSettingsDatePicker, NSString;

@interface FIUIHealthSettingsBirthDatePickerController : NSObject <FIUIHealthSettingsForceUpdatable> {

	FIUIHealthSettingsDatePicker* _datePickerView;
	/*^block*/id _dateOfBirthUpdateHandler;

}

@property (nonatomic,retain) FIUIHealthSettingsDatePicker * datePickerView;              //@synthesize datePickerView=_datePickerView - In the implementation block
@property (nonatomic,copy) id dateOfBirthUpdateHandler;                                  //@synthesize dateOfBirthUpdateHandler=_dateOfBirthUpdateHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)forceUpdate;
-(id)dateOfBirthUpdateHandler;
-(void)setDateOfBirthUpdateHandler:(id)arg1 ;
-(void)setDateOfBirth:(id)arg1 ;
-(id)init;
-(void)setDatePickerView:(FIUIHealthSettingsDatePicker *)arg1 ;
-(FIUIHealthSettingsDatePicker *)datePickerView;
@end

