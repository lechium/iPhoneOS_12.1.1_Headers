/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentSetupField.h>

@class NSArray, PKPaymentSetupFieldPickerItem;

@interface PKPaymentSetupFieldPicker : PKPaymentSetupField {

	NSArray* _pickerItems;

}

@property (nonatomic,copy,readonly) NSArray * pickerItems;                            //@synthesize pickerItems=_pickerItems - In the implementation block
@property (nonatomic,copy) PKPaymentSetupFieldPickerItem * currentValue; 
-(void)updateWithConfiguration:(id)arg1 ;
-(NSArray *)pickerItems;
-(id)submissionString;
-(unsigned long long)fieldType;
-(id)displayString;
-(PKPaymentSetupFieldPickerItem *)currentValue;
-(void)setCurrentValue:(PKPaymentSetupFieldPickerItem *)arg1 ;
@end

