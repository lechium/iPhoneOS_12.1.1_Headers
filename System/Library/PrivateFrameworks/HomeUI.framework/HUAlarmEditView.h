/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UITableView, UIDatePicker;

@interface HUAlarmEditView : UIView {

	UITableView* _settingsTable;
	UIDatePicker* _timePicker;

}

@property (nonatomic,readonly) UITableView * settingsTable;              //@synthesize settingsTable=_settingsTable - In the implementation block
@property (nonatomic,readonly) UIDatePicker * timePicker;                //@synthesize timePicker=_timePicker - In the implementation block
-(UIDatePicker *)timePicker;
-(UITableView *)settingsTable;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end
