/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/CAMAccessibilityHUDImageProvider.h>

@class UIImageView, NSString;

@interface CAMFlipButton : UIButton <CAMAccessibilityHUDImageProvider> {

	long long _layoutStyle;
	long long _orientation;
	UIImageView* __imageView;
	UIEdgeInsets _tappableEdgeInsets;

}

@property (nonatomic,readonly) UIImageView * _imageView;                   //@synthesize _imageView=__imageView - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                        //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets tappableEdgeInsets;              //@synthesize tappableEdgeInsets=_tappableEdgeInsets - In the implementation block
@property (assign,nonatomic) long long orientation;                        //@synthesize orientation=_orientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)flipButtonWithLayoutStyle:(long long)arg1 ;
-(long long)layoutStyle;
-(void)setLayoutStyle:(long long)arg1 ;
-(UIEdgeInsets)tappableEdgeInsets;
-(void)setTappableEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)mainImageNameForAccessibilityHUD:(BOOL)arg1 ;
-(void)_commonCAMFlipButtonInitializationWithStyle:(long long)arg1 ;
-(id)imageForAccessibilityHUD;
-(void)layoutSubviews;
-(UIImageView *)_imageView;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(CGSize)intrinsicContentSize;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)orientation;
-(void)_updateImages;
-(void)setOrientation:(long long)arg1 ;
@end

