/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NTKUpNextBaseCellContentsLayerProvider.h>

@class UIImageView, CALayer, NTKUpNextBaseCell, UIColor, CLKImageProvider, UIImage, NSString;

@interface NTKUpNextImageView : UIView <NTKUpNextBaseCellContentsLayerProvider> {

	UIImageView* _foregroundImageView;
	UIImageView* _backgroundImageView;
	CALayer* _foregroundAccentBackdrop;
	UIImageView* _foregroundAccentImageView;
	NTKUpNextBaseCell* _parentCell;
	UIColor* _fallbackTintColor;
	CLKImageProvider* _imageProvider;
	UIImage* _overrideImage;
	NSString* _compositingFilter;

}

@property (nonatomic,retain) UIColor * fallbackTintColor;                   //@synthesize fallbackTintColor=_fallbackTintColor - In the implementation block
@property (nonatomic,retain) CLKImageProvider * imageProvider;              //@synthesize imageProvider=_imageProvider - In the implementation block
@property (nonatomic,retain) UIImage * overrideImage;                       //@synthesize overrideImage=_overrideImage - In the implementation block
@property (nonatomic,retain) NSString * compositingFilter;                  //@synthesize compositingFilter=_compositingFilter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setOverrideImage:(UIImage *)arg1 ;
-(UIImage *)overrideImage;
-(id)contentsLayer;
-(CLKImageProvider *)imageProvider;
-(void)setImageProvider:(CLKImageProvider *)arg1 ;
-(BOOL)_hasMultipartImages;
-(CGRect)contentsLayerBoundsForLayout:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 parentCell:(id)arg2 ;
-(UIColor *)fallbackTintColor;
-(void)setFallbackTintColor:(UIColor *)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(void)layoutSubviews;
-(CGSize)intrinsicContentSize;
-(void)setCompositingFilter:(NSString *)arg1 ;
-(NSString *)compositingFilter;
-(void)_updateColors;
@end

