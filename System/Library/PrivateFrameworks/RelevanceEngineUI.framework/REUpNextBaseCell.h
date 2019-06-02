/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngineUI/RelevanceEngineUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol REUpNextCellDelegate;
@class UIImageView, CALayer, UIView, UILongPressGestureRecognizer, REContent, UIImage, NSString, UIColor;

@interface REUpNextBaseCell : UICollectionViewCell <UIGestureRecognizerDelegate> {

	CGSize _shadowSize;
	UIImageView* _shadowView;
	CALayer* _imageLayer;
	UIView* _overlayView;
	UILongPressGestureRecognizer* _longPressRecognizer;
	double _darkeningAmount;
	double _contentBrightness;
	REContent* _content;
	unsigned long long _behavior;
	UIEdgeInsets _overlayInsets;
	BOOL _shouldOverrideContentHeaderColor;
	UIImage* _contentImage;
	id<REUpNextCellDelegate> _delegate;
	UIImage* _overrideContentImage;
	NSString* _representedElementIdentifier;
	UIColor* _defaultTextColor;

}

@property (nonatomic,readonly) UIImage * contentImage;                              //@synthesize contentImage=_contentImage - In the implementation block
@property (assign,nonatomic,__weak) id<REUpNextCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * overrideContentImage;                        //@synthesize overrideContentImage=_overrideContentImage - In the implementation block
@property (nonatomic,readonly) REContent * content;                                 //@synthesize content=_content - In the implementation block
@property (nonatomic,retain) NSString * representedElementIdentifier;               //@synthesize representedElementIdentifier=_representedElementIdentifier - In the implementation block
@property (nonatomic,readonly) UIColor * defaultTextColor;                          //@synthesize defaultTextColor=_defaultTextColor - In the implementation block
@property (nonatomic,readonly) BOOL shouldOverrideContentHeaderColor;               //@synthesize shouldOverrideContentHeaderColor=_shouldOverrideContentHeaderColor - In the implementation block
@property (nonatomic,readonly) CALayer * imageLayer;                                //@synthesize imageLayer=_imageLayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)_shadowImage;
-(void)setHighlightInsets:(UIEdgeInsets)arg1 ;
-(CALayer *)imageLayer;
-(void)setContentImage:(id)arg1 animated:(BOOL)arg2 ;
-(void)configureWithContent:(id)arg1 ;
-(void)setRepresentedElementIdentifier:(NSString *)arg1 ;
-(void)setContentBrightness:(double)arg1 animated:(BOOL)arg2 ;
-(void)setOverrideContentImage:(UIImage *)arg1 ;
-(void)_updateColorOverlay;
-(UIImage *)overrideContentImage;
-(NSString *)representedElementIdentifier;
-(void)didLongPress:(id)arg1 ;
-(BOOL)shouldOverrideContentHeaderColor;
-(void)defaultTextColorDidChange;
-(id)primaryEffectViews;
-(id)secondaryEffectViews;
-(void)setHighlightBehavior:(unsigned long long)arg1 ;
-(void)setShadowViewHidden:(BOOL)arg1 ;
-(void)setForegroundTextColorToColor:(id)arg1 shouldOverrideContentHeaderColor:(BOOL)arg2 ;
-(void)setDelegate:(id<REUpNextCellDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<REUpNextCellDelegate>)delegate;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)prepareForReuse;
-(id)transitionContext;
-(UIColor *)defaultTextColor;
-(void)applyLayoutAttributes:(id)arg1 ;
-(REContent *)content;
-(UIImage *)contentImage;
@end
