/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewHeaderFooterView.h>

@protocol HUToggleSectionHeaderDelegate;
@class UIButton;

@interface HUToggleSectionHeader : UITableViewHeaderFooterView {

	unsigned long long _toggleState;
	id<HUToggleSectionHeaderDelegate> _delegate;
	UIButton* _toggleButton;

}

@property (nonatomic,retain) UIButton * toggleButton;                                        //@synthesize toggleButton=_toggleButton - In the implementation block
@property (assign,nonatomic) unsigned long long toggleState;                                 //@synthesize toggleState=_toggleState - In the implementation block
@property (assign,nonatomic,__weak) id<HUToggleSectionHeaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL toggleButtonHidden; 
-(void)_toggle:(id)arg1 ;
-(void)setToggleState:(unsigned long long)arg1 ;
-(unsigned long long)toggleState;
-(BOOL)toggleButtonHidden;
-(void)setToggleButtonHidden:(BOOL)arg1 ;
-(void)setDelegate:(id<HUToggleSectionHeaderDelegate>)arg1 ;
-(id<HUToggleSectionHeaderDelegate>)delegate;
-(void)prepareForReuse;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setToggleButton:(UIButton *)arg1 ;
-(UIButton *)toggleButton;
@end

