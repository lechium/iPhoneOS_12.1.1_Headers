/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UIButton, UIDatePicker, NSDate;

@interface EKCalendarItemRecurrenceEndCell : UITableViewCell {

	UIButton* _neverButton;
	UIDatePicker* _datePicker;

}

@property (nonatomic,readonly) UIButton * neverButton;                 //@synthesize neverButton=_neverButton - In the implementation block
@property (nonatomic,readonly) UIDatePicker * datePicker;              //@synthesize datePicker=_datePicker - In the implementation block
@property (nonatomic,retain) NSDate * date; 
-(UIButton *)neverButton;
-(UIDatePicker *)datePicker;
-(id)init;
-(void)layoutSubviews;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
@end

