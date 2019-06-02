/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailCell.h>

@class UILabel;

@interface EKEventDetailTwoValueCell : EKEventDetailCell {

	int _style;
	UILabel* _titleView;
	UILabel* _valueView;
	UILabel* _value2View;
	int _twoValueCellStyle;

}

@property (nonatomic,readonly) unsigned visibleItems; 
-(void)layoutForWidth:(double)arg1 position:(int)arg2 ;
-(id)value2View;
-(unsigned)visibleItems;
-(double)_layoutForWidth:(double)arg1 ;
-(id)initWithEvent:(id)arg1 editable:(BOOL)arg2 platformStyle:(int)arg3 ;
-(int)twoValueCellStyle;
-(BOOL)update;
-(void)layoutSubviews;
-(id)titleView;
-(id)valueView;
@end
