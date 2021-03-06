/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <QuartzCore/CALayer.h>

@class CALayer;

@interface SXClippingLayer : CALayer {

	CALayer* _contentLayer;
	unsigned long long _clippingMode;
	CGRect _contentFrame;

}

@property (nonatomic,retain) CALayer * contentLayer;                       //@synthesize contentLayer=_contentLayer - In the implementation block
@property (assign,nonatomic) unsigned long long clippingMode;              //@synthesize clippingMode=_clippingMode - In the implementation block
@property (assign,nonatomic) CGRect contentFrame;                          //@synthesize contentFrame=_contentFrame - In the implementation block
-(void)setContentLayer:(CALayer *)arg1 ;
-(CALayer *)contentLayer;
-(unsigned long long)clippingMode;
-(void)layoutForMasking;
-(void)layoutForContentsRect;
-(void)setClippingMode:(unsigned long long)arg1 ;
-(CGRect)contentFrame;
-(void)setContentFrame:(CGRect)arg1 ;
-(void)layoutSublayers;
@end

