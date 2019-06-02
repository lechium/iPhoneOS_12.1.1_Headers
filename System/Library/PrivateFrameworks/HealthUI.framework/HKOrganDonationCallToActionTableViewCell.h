/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UITextViewDelegate.h>

@class UILabel, UITextView, UIButton, UIView, NSAttributedString, NSString;

@interface HKOrganDonationCallToActionTableViewCell : UITableViewCell <UITextViewDelegate> {

	UILabel* _titleLabel;
	UITextView* _callToActionTextView;
	UIButton* _actionButton;
	UIView* _spacerView;

}

@property (nonatomic,readonly) NSAttributedString * callToActionTextViewString; 
@property (nonatomic,retain) UIView * spacerView;                                            //@synthesize spacerView=_spacerView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UITextView * callToActionTextView;                              //@synthesize callToActionTextView=_callToActionTextView - In the implementation block
@property (nonatomic,retain) UIButton * actionButton;                                        //@synthesize actionButton=_actionButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultReuseIdentifier;
-(void)setupSubviews;
-(UIButton *)actionButton;
-(void)setActionButton:(UIButton *)arg1 ;
-(void)setupConstraints;
-(void)setSpacerView:(UIView *)arg1 ;
-(UIView *)spacerView;
-(void)setCallToActionTextView:(UITextView *)arg1 ;
-(UITextView *)callToActionTextView;
-(NSAttributedString *)callToActionTextViewString;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
@end

