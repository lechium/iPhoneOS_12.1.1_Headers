/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton, NSLayoutConstraint;

@interface HKClinicalAuthorizationBinaryChoiceFooterView : UIView {

	UIButton* _primaryButton;
	UIButton* _secondaryButton;
	NSLayoutConstraint* _secondaryFirstBaselineToPrimaryBottomConstraint;

}

@property (nonatomic,readonly) NSLayoutConstraint * secondaryFirstBaselineToPrimaryBottomConstraint;              //@synthesize secondaryFirstBaselineToPrimaryBottomConstraint=_secondaryFirstBaselineToPrimaryBottomConstraint - In the implementation block
@property (nonatomic,readonly) UIButton * primaryButton;                                                          //@synthesize primaryButton=_primaryButton - In the implementation block
@property (nonatomic,readonly) UIButton * secondaryButton;                                                        //@synthesize secondaryButton=_secondaryButton - In the implementation block
-(void)_setUpConstraints;
-(UIButton *)secondaryButton;
-(UIButton *)primaryButton;
-(void)_setUpSubviews;
-(NSLayoutConstraint *)secondaryFirstBaselineToPrimaryBottomConstraint;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateForCurrentContentSizeCategory;
@end

