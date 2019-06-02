/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/SKUIViewElementOfferButton.h>

@protocol SKUIItemOfferButtonDelegate;
@class SKUIAttributedStringView, SKUIButtonBorderStyle, SKUIShapeView, UIImageView, SKUIImageView, SKUIItemOfferButton, SKUIAttributedStringLayout, NSString;

@interface SKUIStyledButton : UIControl <SKUIViewElementOfferButton> {

	SKUIAttributedStringView* _attributedStringView;
	UIEdgeInsets _bigHitInsets;
	SKUIButtonBorderStyle* _borderStyle;
	SKUIShapeView* _borderView;
	long long _buttonType;
	BOOL _didInitialHighlightForTouch;
	UIImageView* _disclosureImageView;
	double _imageTextPaddingInterior;
	SKUIImageView* _imageView;
	double _imageYAdjustment;
	SKUIItemOfferButton* _itemOfferButton;
	id<SKUIItemOfferButtonDelegate> _itemOfferDelegate;
	BOOL _useBigHitTarget;
	BOOL _usesTintColor;
	UIEdgeInsets _buttonPadding;

}

@property (nonatomic,readonly) double baselineOffset; 
@property (assign,nonatomic) UIEdgeInsets bigHitInsets;                                                      //@synthesize bigHitInsets=_bigHitInsets - In the implementation block
@property (nonatomic,readonly) double firstBaselineOffset; 
@property (nonatomic,copy) SKUIButtonBorderStyle * borderStyle;                                              //@synthesize borderStyle=_borderStyle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets buttonPadding;                                                     //@synthesize buttonPadding=_buttonPadding - In the implementation block
@property (assign,nonatomic) long long buttonType;                                                           //@synthesize buttonType=_buttonType - In the implementation block
@property (assign,nonatomic) double imageTextPaddingInterior;                                                //@synthesize imageTextPaddingInterior=_imageTextPaddingInterior - In the implementation block
@property (nonatomic,readonly) SKUIImageView * imageView;                                                    //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) double imageYAdjustment;                                                        //@synthesize imageYAdjustment=_imageYAdjustment - In the implementation block
@property (nonatomic,retain) SKUIAttributedStringLayout * titleLayout; 
@property (assign,nonatomic) BOOL useBigHitTarget;                                                           //@synthesize useBigHitTarget=_useBigHitTarget - In the implementation block
@property (assign,nonatomic) BOOL usesTintColor;                                                             //@synthesize usesTintColor=_usesTintColor - In the implementation block
@property (getter=isUsingItemOfferAppearance,nonatomic,readonly) BOOL usingItemOfferAppearance; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SKUIItemOfferButtonDelegate> itemOfferDelegate;                       //@synthesize itemOfferDelegate=_itemOfferDelegate - In the implementation block
+(CGSize)sizeForTextSize:(CGSize)arg1 buttonType:(long long)arg2 borderStyle:(id)arg3 interiorPadding:(double)arg4 ;
+(BOOL)usesItemOfferAppearanceForButtonType:(long long)arg1 itemState:(id)arg2 ;
+(long long)buttonTypeForElement:(id)arg1 ;
+(CGSize)sizeForTextSize:(CGSize)arg1 buttonType:(long long)arg2 ;
+(CGSize)sizeForTextSize:(CGSize)arg1 buttonType:(long long)arg2 borderStyle:(id)arg3 ;
-(void)setButtonPadding:(UIEdgeInsets)arg1 ;
-(void)setButtonType:(long long)arg1 ;
-(UIEdgeInsets)buttonPadding;
-(void)_cancelConfirmationAction:(id)arg1 ;
-(void)_showConfirmationAction:(id)arg1 ;
-(void)setItemOfferDelegate:(id<SKUIItemOfferButtonDelegate>)arg1 ;
-(id)_borderColor;
-(BOOL)setValuesUsingBuyButtonDescriptor:(id)arg1 itemState:(id)arg2 clientContext:(id)arg3 animated:(BOOL)arg4 ;
-(id)_textBackgroundColor;
-(void)_reloadImageView;
-(void)_reloadDisclosureImage;
-(void)setTitleLayout:(id)arg1 forceRefresh:(BOOL)arg2 ;
-(SKUIAttributedStringLayout *)titleLayout;
-(void)_reloadOverrideTextColor;
-(BOOL)isUsingItemOfferAppearance;
-(void)_itemOfferButtonAction:(id)arg1 ;
-(id)_borderFillColor;
-(BOOL)_usesTintColor;
-(id<SKUIItemOfferButtonDelegate>)itemOfferDelegate;
-(void)setTitleLayout:(SKUIAttributedStringLayout *)arg1 ;
-(void)setUsesTintColor:(BOOL)arg1 ;
-(UIEdgeInsets)bigHitInsets;
-(void)setBigHitInsets:(UIEdgeInsets)arg1 ;
-(double)imageTextPaddingInterior;
-(void)setImageTextPaddingInterior:(double)arg1 ;
-(double)imageYAdjustment;
-(void)setImageYAdjustment:(double)arg1 ;
-(BOOL)useBigHitTarget;
-(void)setUseBigHitTarget:(BOOL)arg1 ;
-(BOOL)usesTintColor;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(SKUIImageView *)imageView;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)tintColorDidChange;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(long long)buttonType;
-(id)_textColor;
-(void)setBorderStyle:(SKUIButtonBorderStyle *)arg1 ;
-(CGRect)hitRect;
-(double)baselineOffset;
-(SKUIButtonBorderStyle *)borderStyle;
-(double)firstBaselineOffset;
@end

