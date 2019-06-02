/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FitnessUI/FIUIHealthSettingsPickerController.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIPickerViewDataSource.h>

@class NSString;

@interface FIUIHealthSettingsWeightPickerController : FIUIHealthSettingsPickerController <UIPickerViewDelegate, UIPickerViewDataSource> {

	long long numberOfComponents;
	long long numberOfRows;
	/*^block*/id _weightUpdateHandler;

}

@property (nonatomic,copy) id weightUpdateHandler;                  //@synthesize weightUpdateHandler=_weightUpdateHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)forceUpdate;
-(id)_weightQuantityForRow:(long long)arg1 ;
-(void)_updateWithWeightQuantity:(id)arg1 ;
-(id)_weightDisplayStringForRow:(long long)arg1 ;
-(double)_weightInLocaleUnitForRow:(long long)arg1 ;
-(id)weightUpdateHandler;
-(void)_setDefaultValuesOnWeightPickerIfRequiredWithWeight:(id)arg1 ;
-(void)setWeightUpdateHandler:(id)arg1 ;
-(void)setWeightQuantity:(id)arg1 ;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
@end

