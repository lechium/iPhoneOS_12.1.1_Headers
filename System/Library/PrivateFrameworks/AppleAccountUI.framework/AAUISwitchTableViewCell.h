/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@protocol AAUISwitchTableViewCellDelegate;
@class UISwitch;

@interface AAUISwitchTableViewCell : UITableViewCell {

	UISwitch* _control;
	id<AAUISwitchTableViewCellDelegate> _delegate;

}

@property (nonatomic,readonly) UISwitch * control;                                             //@synthesize control=_control - In the implementation block
@property (assign,nonatomic,__weak) id<AAUISwitchTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(UISwitch *)control;
-(void)_delegate_switchTableViewCellDidUpdateValue;
-(void)_controlValueChanged:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<AAUISwitchTableViewCellDelegate>)arg1 ;
-(id<AAUISwitchTableViewCellDelegate>)delegate;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

