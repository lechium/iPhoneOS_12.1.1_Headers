/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CAMDescriptionOverlayViewDelegate;
@class UIVisualEffectView, CAMPortraitModeDescriptionOverlayPrimaryVibrancyEffectView, UILabel, UIButton, UIView;

@interface CAMDescriptionOverlayView : UIView {

	id<CAMDescriptionOverlayViewDelegate> _delegate;
	long long _orientation;
	double _contentTopInset;
	UIVisualEffectView* __blurEffectView;
	CAMPortraitModeDescriptionOverlayPrimaryVibrancyEffectView* __primaryVibrancyEffectView;
	UILabel* __titleLabel;
	UILabel* __descriptionLabel;
	UILabel* __infoLabel;
	UIButton* __acknowledgmentButton;
	double __descriptionFontSizeMultiplier;
	double __infoFontSizeMultiplier;
	UIView* __topBlackoutView;

}

@property (nonatomic,readonly) UIVisualEffectView * _blurEffectView;                                                                 //@synthesize _blurEffectView=__blurEffectView - In the implementation block
@property (nonatomic,readonly) CAMPortraitModeDescriptionOverlayPrimaryVibrancyEffectView * _primaryVibrancyEffectView;              //@synthesize _primaryVibrancyEffectView=__primaryVibrancyEffectView - In the implementation block
@property (nonatomic,readonly) UILabel * _titleLabel;                                                                                //@synthesize _titleLabel=__titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * _descriptionLabel;                                                                          //@synthesize _descriptionLabel=__descriptionLabel - In the implementation block
@property (nonatomic,readonly) UILabel * _infoLabel;                                                                                 //@synthesize _infoLabel=__infoLabel - In the implementation block
@property (nonatomic,readonly) UIButton * _acknowledgmentButton;                                                                     //@synthesize _acknowledgmentButton=__acknowledgmentButton - In the implementation block
@property (assign,setter=_setDescriptionFontSizeMultiplier:,nonatomic) double _descriptionFontSizeMultiplier;                        //@synthesize _descriptionFontSizeMultiplier=__descriptionFontSizeMultiplier - In the implementation block
@property (assign,setter=_setInfoFontSizeMultiplier:,nonatomic) double _infoFontSizeMultiplier;                                      //@synthesize _infoFontSizeMultiplier=__infoFontSizeMultiplier - In the implementation block
@property (nonatomic,retain) UIView * _topBlackoutView;                                                                              //@synthesize _topBlackoutView=__topBlackoutView - In the implementation block
@property (assign,nonatomic,__weak) id<CAMDescriptionOverlayViewDelegate> delegate;                                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isAcknowledgmentButtonHighlighted,nonatomic) BOOL acknowledgmentButtonHighlighted; 
@property (assign,nonatomic) long long orientation;                                                                                  //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) double contentTopInset;                                                                                 //@synthesize contentTopInset=_contentTopInset - In the implementation block
-(void)setVisible:(BOOL)arg1 animationDuration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateToContentSize:(id)arg1 ;
-(void)setAcknowledgmentButtonHighlighted:(BOOL)arg1 ;
-(id)titleTextUsingNarrowWidth:(BOOL)arg1 ;
-(id)acknowledgmentTextUsingNarrowWidth:(BOOL)arg1 ;
-(id)descriptionTextUsingNarrowWidth:(BOOL)arg1 ;
-(id)infoTextUsingNarrowWidth:(BOOL)arg1 ;
-(double)maxDescriptionTextWidthForNarrowWidth:(BOOL)arg1 isLandscape:(BOOL)arg2 usingFontSizeMultiplier:(double)arg3 ;
-(double)maxInfoTextWidthForNarrowWidth:(BOOL)arg1 isLandscape:(BOOL)arg2 usingFontSizeMultiplier:(double)arg3 ;
-(double)additionalSpacing;
-(void)setContentTopInset:(double)arg1 ;
-(void)_handleAcknowledgmentButtonTapped:(id)arg1 ;
-(void)_setDescriptionFontSizeMultiplier:(double)arg1 ;
-(void)_setInfoFontSizeMultiplier:(double)arg1 ;
-(UILabel *)_descriptionLabel;
-(UILabel *)_infoLabel;
-(UIButton *)_acknowledgmentButton;
-(double)contentTopInset;
-(UIView *)_topBlackoutView;
-(void)_updateFontsUsingNarrowWidth:(BOOL)arg1 ;
-(void)_updateTextUsingNarrowWidth:(BOOL)arg1 ;
-(UIVisualEffectView *)_blurEffectView;
-(CAMPortraitModeDescriptionOverlayPrimaryVibrancyEffectView *)_primaryVibrancyEffectView;
-(double)_descriptionFontSizeMultiplier;
-(double)_infoFontSizeMultiplier;
-(void)_updateTopBlackoutViewForVisible:(BOOL)arg1 ;
-(BOOL)isAcknowledgmentButtonHighlighted;
-(void)set_topBlackoutView:(UIView *)arg1 ;
-(void)setDelegate:(id<CAMDescriptionOverlayViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)_titleLabel;
-(id<CAMDescriptionOverlayViewDelegate>)delegate;
-(BOOL)_isVisible;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
@end
