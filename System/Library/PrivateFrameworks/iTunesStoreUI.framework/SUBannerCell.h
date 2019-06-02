/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUTableCell.h>
#import <libobjc.A.dylib/SUCellConfigurationView.h>

@class UIButton, NSString;

@interface SUBannerCell : SUTableCell <SUCellConfigurationView> {

	UIButton* _leftButton;
	UIButton* _rightButton;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reloadView;
-(void)_reloadButtons;
-(void)_buttonAction:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setConfiguration:(id)arg1 ;
-(id)_newButton;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
@end
