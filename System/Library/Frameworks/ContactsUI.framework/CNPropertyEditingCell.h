/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertyCell.h>
#import <libobjc.A.dylib/CNPickerControllerDelegate.h>

@class UIButton, CNRepeatingGradientSeparatorView, NSString;

@interface CNPropertyEditingCell : CNPropertyCell <CNPickerControllerDelegate> {

	UIButton* _labelButton;
	CNRepeatingGradientSeparatorView* _vseparator;

}

@property (nonatomic,retain) CNRepeatingGradientSeparatorView * vseparator;              //@synthesize vseparator=_vseparator - In the implementation block
@property (nonatomic,readonly) UIButton * labelButton;                                   //@synthesize labelButton=_labelButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)wantsChevron;
+(BOOL)wantsStandardConstraints;
-(id)variableConstraints;
-(void)picker:(id)arg1 didPickItem:(id)arg2 ;
-(void)pickerDidCancel:(id)arg1 ;
-(double)minCellHeight;
-(id)constantConstraints;
-(void)setValueTextAttributes:(id)arg1 ;
-(void)setVseparatorHidden:(BOOL)arg1 ;
-(void)updateWithPropertyItem:(id)arg1 ;
-(void)labelButtonClicked:(id)arg1 ;
-(double)effectiveLabelWidth;
-(CNRepeatingGradientSeparatorView *)vseparator;
-(double)leftValueMargin;
-(void)regainFocus;
-(void)setVseparator:(CNRepeatingGradientSeparatorView *)arg1 ;
-(UIButton *)labelButton;
-(id)valueString;
-(id)labelView;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

