/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIView, CAShapeLayer;

@interface NTKCFaceContainerView : UIControl {

	BOOL _active;
	long long _style;
	UIView* _faceView;
	UIView* _backgroundView;
	CAShapeLayer* _outline;
	UIView* _faceContainer;
	UIView* _highlightView;
	CGSize _faceSize;

}

@property (nonatomic,retain) UIView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) CAShapeLayer * outline;               //@synthesize outline=_outline - In the implementation block
@property (nonatomic,retain) UIView * faceContainer;               //@synthesize faceContainer=_faceContainer - In the implementation block
@property (nonatomic,retain) UIView * highlightView;               //@synthesize highlightView=_highlightView - In the implementation block
@property (assign,nonatomic) CGSize faceSize;                      //@synthesize faceSize=_faceSize - In the implementation block
@property (assign,nonatomic) long long style;                      //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UIView * faceView;                    //@synthesize faceView=_faceView - In the implementation block
@property (assign,nonatomic) BOOL active;                          //@synthesize active=_active - In the implementation block
+(CGSize)sizeForFaceSize:(CGSize)arg1 style:(long long)arg2 ;
+(double)_insetPaddingForStyle:(long long)arg1 ;
+(CGSize)faceSizeForSize:(CGSize)arg1 style:(long long)arg2 ;
-(UIView *)faceView;
-(void)setFaceView:(UIView *)arg1 ;
-(id)initWithFaceSize:(CGSize)arg1 style:(long long)arg2 ;
-(void)setFaceContainer:(UIView *)arg1 ;
-(UIView *)faceContainer;
-(double)_outlineLineWidth;
-(CGAffineTransform)_transformForFaceView;
-(void)setFaceSize:(CGSize)arg1 ;
-(CGSize)faceSize;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(void)setActive:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIView *)backgroundView;
-(CGSize)intrinsicContentSize;
-(UIView *)highlightView;
-(BOOL)active;
-(void)setBackgroundView:(UIView *)arg1 ;
-(CAShapeLayer *)outline;
-(void)setOutline:(CAShapeLayer *)arg1 ;
-(void)setHighlightView:(UIView *)arg1 ;
@end

