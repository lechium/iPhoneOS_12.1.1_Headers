/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngineUI/RelevanceEngineUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UIColor, UIImage;

@interface REUpNextImageView : UIView {

	UIImageView* _foregroundImageView;
	UIImageView* _backgroundImageView;
	UIImageView* _foregroundAccentImageView;
	UIColor* _fallbackTintColor;
	UIImage* _overrideImage;

}

@property (nonatomic,retain) UIColor * fallbackTintColor;              //@synthesize fallbackTintColor=_fallbackTintColor - In the implementation block
@property (nonatomic,retain) UIImage * overrideImage;                  //@synthesize overrideImage=_overrideImage - In the implementation block
-(void)setOverrideImage:(UIImage *)arg1 ;
-(UIImage *)overrideImage;
-(BOOL)_hasMultipartImages;
-(UIColor *)fallbackTintColor;
-(void)setFallbackTintColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(void)layoutSubviews;
-(CGSize)intrinsicContentSize;
-(void)_updateColors;
@end

