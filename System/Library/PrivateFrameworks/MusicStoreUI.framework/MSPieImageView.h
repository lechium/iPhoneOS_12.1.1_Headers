/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicStoreUI/MusicStoreUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, UIBezierPath;

@interface MSPieImageView : UIView {

	UIImage* _backgroundImage;
	UIBezierPath* _clipPath;
	UIImage* _foregroundImage;
	double _pieFraction;
	double _pieRadius;

}

@property (nonatomic,retain) UIImage * backgroundImage;              //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * foregroundImage;              //@synthesize foregroundImage=_foregroundImage - In the implementation block
@property (assign,nonatomic) double pieFraction;                     //@synthesize pieFraction=_pieFraction - In the implementation block
@property (assign,nonatomic) double pieRadius;                       //@synthesize pieRadius=_pieRadius - In the implementation block
-(void)setPieRadius:(double)arg1 ;
-(void)setPieFraction:(double)arg1 ;
-(void)setForegroundImage:(UIImage *)arg1 ;
-(void)_reloadClipPath;
-(UIImage *)foregroundImage;
-(double)pieFraction;
-(double)pieRadius;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)sizeToFit;
-(UIImage *)backgroundImage;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBackgroundImage:(UIImage *)arg1 ;
@end
