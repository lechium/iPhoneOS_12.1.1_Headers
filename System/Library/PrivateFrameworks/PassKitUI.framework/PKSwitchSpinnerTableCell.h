/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@protocol PKSwitchSpinnerTableCellDelegate;
@class UIActivityIndicatorView, UISwitch;

@interface PKSwitchSpinnerTableCell : PSTableCell {

	UIActivityIndicatorView* _spinner;
	UISwitch* _switch;
	BOOL _showSpinner;
	id<PKSwitchSpinnerTableCellDelegate> _delegate;

}
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)setShowSpinner:(BOOL)arg1 ;
-(void)_switchToggled:(id)arg1 ;
-(void)setSwitchIsOn:(BOOL)arg1 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(BOOL)canReload;
-(void)layoutSubviews;
-(void)_updateSubviews;
@end

