/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeUI/STSingleLineHeaderView.h>

@class UIButton;

@interface STSingleLineButtonHeaderView : STSingleLineHeaderView {

	UIButton* _selectedButton;
	UIButton* _button1;
	UIButton* _button2;

}

@property (nonatomic,retain) UIButton * selectedButton;              //@synthesize selectedButton=_selectedButton - In the implementation block
@property (nonatomic,readonly) UIButton * button1;                   //@synthesize button1=_button1 - In the implementation block
@property (nonatomic,readonly) UIButton * button2;                   //@synthesize button2=_button2 - In the implementation block
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(void)reloadFromSpecifier;
-(id)initWithSpecifier:(id)arg1 useContentLayoutGuide:(BOOL)arg2 ;
-(UIButton *)button1;
-(UIButton *)button2;
-(UIButton *)selectedButton;
-(void)setSelectedButton:(UIButton *)arg1 ;
@end

