/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIControl.h>

@protocol VUIOfferButtonDelegate;
@class UIColor, UIView, SKUIFocusedTouchGestureRecognizer, UIImage, NSMutableAttributedString, UIFont, UIImageView, VUICircleProgressIndicator, UILabel, NSString, VUIBuyButtonDescriptor, SKUIButtonViewElement;

@interface VUIOfferButton : UIControl {

	UIColor* _backgroundColor;
	BOOL _borderCornerRadiusMatchesHalfBoundingDimension;
	UIView* _borderView;
	SKUIFocusedTouchGestureRecognizer* _cancelGestureRecognizer;
	UIImage* _cloudImage;
	UIColor* _cloudTintColor;
	UIColor* _confirmationColor;
	NSMutableAttributedString* _confirmationTitleAttributedString;
	long long _confirmationTitleStyle;
	CGSize _confirmationTitleFitSize;
	id<VUIOfferButtonDelegate> _delegate;
	long long _fillStyle;
	UIFont* _font;
	UIImage* _image;
	UIImageView* _imageView;
	UIImageView* _borderedImageView;
	double _progress;
	VUICircleProgressIndicator* _progressIndicator;
	BOOL _showsConfirmationState;
	NSMutableAttributedString* _titleAttributedString;
	CGSize _titleFitSize;
	UILabel* _titleLabel;
	long long _titleStyle;
	BOOL _universal;
	BOOL _usesDrawRectPath;
	UIImageView* _universalImageView;
	BOOL _downloadRestores;
	NSString* _offerButtonStateDescription;
	BOOL _disabledButSelectable;
	UIImage* _borderedImage;
	/*^block*/id _centerImageProvider;
	double _borderColorAlphaMultiplier;
	NSString* _textTransform;
	VUIBuyButtonDescriptor* _buttonDescriptor;
	NSString* _buyType;
	SKUIButtonViewElement* _element;
	UIEdgeInsets _hitRectInsets;

}

@property (nonatomic,retain) VUIBuyButtonDescriptor * buttonDescriptor;                              //@synthesize buttonDescriptor=_buttonDescriptor - In the implementation block
@property (nonatomic,copy) NSString * buyType;                                                       //@synthesize buyType=_buyType - In the implementation block
@property (nonatomic,copy) UIColor * cloudTintColor;                                                 //@synthesize cloudTintColor=_cloudTintColor - In the implementation block
@property (assign,getter=isDisabledButSelectable,nonatomic) BOOL disabledButSelectable;              //@synthesize disabledButSelectable=_disabledButSelectable - In the implementation block
@property (nonatomic,retain) SKUIButtonViewElement * element;                                        //@synthesize element=_element - In the implementation block
@property (nonatomic,readonly) BOOL restores; 
@property (nonatomic,readonly) BOOL supportsPlayButton; 
@property (assign,nonatomic,__weak) id<VUIOfferButtonDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * confirmationTitle; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) UIImage * borderedImage;                                                //@synthesize borderedImage=_borderedImage - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) id centerImageProvider;                                                   //@synthesize centerImageProvider=_centerImageProvider - In the implementation block
@property (nonatomic,readonly) NSString * offerButtonStateDescription; 
@property (assign,nonatomic) UIEdgeInsets hitRectInsets;                                             //@synthesize hitRectInsets=_hitRectInsets - In the implementation block
@property (assign,nonatomic) long long fillStyle;                                                    //@synthesize fillStyle=_fillStyle - In the implementation block
@property (assign,nonatomic) double borderColorAlphaMultiplier;                                      //@synthesize borderColorAlphaMultiplier=_borderColorAlphaMultiplier - In the implementation block
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,copy) NSString * textTransform;                                                 //@synthesize textTransform=_textTransform - In the implementation block
@property (assign,nonatomic) double progress;                                                        //@synthesize progress=_progress - In the implementation block
@property (getter=isShowingConfirmation,nonatomic,readonly) BOOL showingConfirmation; 
@property (assign,nonatomic) BOOL showsConfirmationState;                                            //@synthesize showsConfirmationState=_showsConfirmationState - In the implementation block
@property (assign,nonatomic) long long progressType; 
@property (assign,nonatomic) long long confirmationTitleStyle;                                       //@synthesize confirmationTitleStyle=_confirmationTitleStyle - In the implementation block
@property (assign,nonatomic) long long titleStyle;                                                   //@synthesize titleStyle=_titleStyle - In the implementation block
@property (assign,getter=isUniversal,nonatomic) BOOL universal;                                      //@synthesize universal=_universal - In the implementation block
+(id)cloudTintColorForBackgroundColor:(id)arg1 ;
+(id)localizedTitleForItemState:(id)arg1 clientContext:(id)arg2 ;
+(id)cloudImageWithTintColor:(id)arg1 arrowTintColor:(id)arg2 ;
+(BOOL)_sizeMattersForTitleStyle:(long long)arg1 ;
+(BOOL)canOpenItemForItemState:(id)arg1 clientContext:(id)arg2 ;
+(id)playTintColorForBackgroundColor:(id)arg1 ;
+(id)playImageWithTintColor:(id)arg1 ;
+(id)_universalPlusImageWithTintColor:(id)arg1 ;
+(id)_imageForProgressType:(long long)arg1 ;
+(UIEdgeInsets)_imageInsetsForProgressType:(long long)arg1 ;
+(id)playHighlightImageWithTintColor:(id)arg1 ;
+(id)_defaultTitleAttributes;
+(id)_basicAnimationWithKeyPath:(id)arg1 ;
+(id)_cachedImageForAttributedTitle:(id)arg1 font:(id)arg2 titleStyle:(long long)arg3 size:(CGSize)arg4 fillStyle:(long long)arg5 universal:(BOOL)arg6 tintColor:(id)arg7 titleColor:(id)arg8 ;
+(id)_imageForAttributedTitle:(id)arg1 titleStyle:(long long)arg2 size:(CGSize)arg3 fillStyle:(long long)arg4 universal:(BOOL)arg5 tintColor:(id)arg6 titleColor:(id)arg7 ;
-(void)setTextTransform:(NSString *)arg1 ;
-(void)setItemOfferDelegate:(id)arg1 ;
-(void)setShowingConfirmation:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_removeCancelGestureRecognizer;
-(BOOL)setValuesUsingItemOffer:(id)arg1 itemState:(id)arg2 clientContext:(id)arg3 animated:(BOOL)arg4 ;
-(BOOL)setValuesUsingBuyButtonDescriptor:(id)arg1 itemState:(id)arg2 clientContext:(id)arg3 animated:(BOOL)arg4 ;
-(void)removeButtonStateAnimations;
-(CGSize)layoutSizeThatFits:(CGSize)arg1 ;
-(BOOL)isShowingConfirmation;
-(void)setUniversal:(BOOL)arg1 ;
-(id)itemOfferDelegate;
-(void)setHitRectInsets:(UIEdgeInsets)arg1 ;
-(BOOL)isDisabledButSelectable;
-(SKUIButtonViewElement *)element;
-(void)setDisabledButSelectable:(BOOL)arg1 ;
-(void)setElement:(SKUIButtonViewElement *)arg1 ;
-(void)setCloudTintColor:(UIColor *)arg1 ;
-(void)_sendWillAnimate;
-(void)_sendDidAnimate;
-(void)showCloudImage;
-(UIEdgeInsets)hitRectInsets;
-(long long)confirmationTitleStyle;
-(void)setConfirmationTitleStyle:(long long)arg1 ;
-(long long)titleStyle;
-(void)setTitleStyle:(long long)arg1 ;
-(UIImage *)borderedImage;
-(void)setBorderedImage:(UIImage *)arg1 ;
-(long long)progressType;
-(void)setProgressType:(long long)arg1 ;
-(BOOL)restores;
-(double)_horizontalInsetForTitleStyle:(long long)arg1 ;
-(CGSize)_titleSizeThatFitsForSize:(CGSize)arg1 titleStyle:(long long)arg2 mutableAttributedString:(id)arg3 ;
-(BOOL)showsConfirmationState;
-(VUIBuyButtonDescriptor *)buttonDescriptor;
-(void)_reloadForCurrentState:(BOOL)arg1 ;
-(NSString *)confirmationTitle;
-(void)_updateForChangedConfirmationTitleProperty;
-(void)setProgressType:(long long)arg1 animated:(BOOL)arg2 ;
-(id)_buttonPropertiesForState:(id)arg1 ;
-(void)_transitionFromProgress:(id)arg1 toProgress:(id)arg2 withDuration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)_transitionFromTitleOrImage:(id)arg1 toProgress:(id)arg2 withDuration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)_transitionFromProgress:(id)arg1 toTitleOrImage:(id)arg2 withDuration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)_transitionFromTitle:(id)arg1 toTitle:(id)arg2 withDuration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)_updateForChangedTitleProperty;
-(BOOL)supportsPlayButton;
-(void)setFillStyle:(long long)arg1 ;
-(void)setShowsConfirmationState:(BOOL)arg1 ;
-(void)setConfirmationTitle:(NSString *)arg1 ;
-(BOOL)setTitle:(id)arg1 confirmationTitle:(id)arg2 itemState:(id)arg3 clientContext:(id)arg4 animated:(BOOL)arg5 ;
-(void)setButtonDescriptor:(VUIBuyButtonDescriptor *)arg1 ;
-(BOOL)hasNonBorderedImage;
-(void)_transitionFromImage:(id)arg1 toImage:(id)arg2 withDuration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)hasBorderedImage;
-(void)_transitionFromBorderedImage:(id)arg1 toTitle:(id)arg2 withDuration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_touchInBounds:(id)arg1 ;
-(CGRect)_borderedImageViewFrame;
-(id)_imageForProgressType:(long long)arg1 ;
-(void)_adjustViewOrderingForProperties:(id)arg1 ;
-(void)_insertUniversalView;
-(void)_insertBorderView;
-(void)_insertProgressIndicator;
-(void)_insertImageView;
-(void)_insertLabel;
-(void)_cancelGestureAction:(id)arg1 ;
-(void)_insertBorderedImageView;
-(void)_insertCancelGestureRecognizer;
-(NSString *)offerButtonStateDescription;
-(void)setBorderColorAlphaMultiplier:(double)arg1 ;
-(NSString *)buyType;
-(UIColor *)cloudTintColor;
-(long long)fillStyle;
-(BOOL)isUniversal;
-(id)centerImageProvider;
-(void)setCenterImageProvider:(id)arg1 ;
-(double)borderColorAlphaMultiplier;
-(void)setBuyType:(NSString *)arg1 ;
-(void)_handleApplicationDidBecomeActiveNotification:(id)arg1 ;
-(NSString *)textTransform;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<VUIOfferButtonDelegate>)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(NSString *)title;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<VUIOfferButtonDelegate>)delegate;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)tintColorDidChange;
-(CGSize)intrinsicContentSize;
-(void)didMoveToWindow;
-(void)setProgress:(double)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(double)progress;
-(void)_removeAllAnimations:(BOOL)arg1 ;
-(void)setProgress:(double)arg1 animated:(BOOL)arg2 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(CGRect)hitRect;
-(void)_setBorderViewCornerRadiusWithProperties:(id)arg1 ;
@end

