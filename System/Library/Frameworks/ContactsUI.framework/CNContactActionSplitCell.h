/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNLabeledCell.h>

@class UIButton;

@interface CNContactActionSplitCell : CNLabeledCell {

	UIButton* _leftLabel;
	UIButton* _rightLabel;

}

@property (nonatomic,readonly) UIButton * leftLabel;               //@synthesize leftLabel=_leftLabel - In the implementation block
@property (nonatomic,readonly) UIButton * rightLabel;              //@synthesize rightLabel=_rightLabel - In the implementation block
-(id)rightMostView;
-(void)setLabelTextAttributes:(id)arg1 ;
-(void)setCardGroupItem:(id)arg1 ;
-(double)minCellHeight;
-(id)standardButton;
-(void)_setupButton:(id)arg1 forAction:(id)arg2 ;
-(id)constantConstraints;
-(id)labelView;
-(UIButton *)leftLabel;
-(UIButton *)rightLabel;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end
