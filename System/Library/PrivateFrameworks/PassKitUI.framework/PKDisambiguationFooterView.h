/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIButton;

@interface PKDisambiguationFooterView : UIView {

	UILabel* _descriptionLabel;
	UIButton* _actionButton;
	UIButton* _secondaryActionButton;
	double _topPadding;
	double _secondaryActionTopPadding;
	double _bottomPadding;

}

@property (nonatomic,retain,readonly) UILabel * descriptionLabel; 
@property (nonatomic,retain,readonly) UIButton * actionButton; 
@property (nonatomic,retain,readonly) UIButton * secondaryActionButton; 
@property (assign,nonatomic) double topPadding;                                      //@synthesize topPadding=_topPadding - In the implementation block
@property (assign,nonatomic) double secondaryActionTopPadding;                       //@synthesize secondaryActionTopPadding=_secondaryActionTopPadding - In the implementation block
@property (assign,nonatomic) double bottomPadding;                                   //@synthesize bottomPadding=_bottomPadding - In the implementation block
-(UILabel *)descriptionLabel;
-(UIButton *)actionButton;
-(void)setTopPadding:(double)arg1 ;
-(void)setBottomPadding:(double)arg1 ;
-(UIButton *)secondaryActionButton;
-(void)sizeToFitForTableView:(id)arg1 ;
-(double)_recommendedSecondaryActionTopPaddingForTableView:(id)arg1 ;
-(void)setSecondaryActionTopPadding:(double)arg1 ;
-(double)topPadding;
-(double)secondaryActionTopPadding;
-(double)bottomPadding;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

