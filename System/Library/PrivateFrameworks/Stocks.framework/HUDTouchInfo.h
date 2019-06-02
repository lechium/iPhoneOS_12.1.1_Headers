/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Stocks/Stocks-Structs.h>
@class UITouch, UIImageView, UIView;

@interface HUDTouchInfo : NSObject {

	UITouch* _touch;
	UIImageView* _dot;
	UIView* _bar;
	CGPoint _plottedLocation;
	CGPoint _locationInHUD;
	SCD_Struct_HU8 _stockValue;

}

@property (assign,nonatomic) SCD_Struct_HU8 stockValue;              //@synthesize stockValue=_stockValue - In the implementation block
@property (assign,nonatomic) CGPoint plottedLocation;                //@synthesize plottedLocation=_plottedLocation - In the implementation block
@property (assign,nonatomic) CGPoint locationInHUD;                  //@synthesize locationInHUD=_locationInHUD - In the implementation block
@property (assign,nonatomic,__weak) UITouch * touch;                 //@synthesize touch=_touch - In the implementation block
@property (nonatomic,retain) UIImageView * dot;                      //@synthesize dot=_dot - In the implementation block
@property (nonatomic,retain) UIView * bar;                           //@synthesize bar=_bar - In the implementation block
-(UIView *)bar;
-(void)setBar:(UIView *)arg1 ;
-(SCD_Struct_HU8)stockValue;
-(void)setStockValue:(SCD_Struct_HU8)arg1 ;
-(CGPoint)plottedLocation;
-(void)setPlottedLocation:(CGPoint)arg1 ;
-(CGPoint)locationInHUD;
-(void)setLocationInHUD:(CGPoint)arg1 ;
-(void)setDot:(UIImageView *)arg1 ;
-(UIImageView *)dot;
-(id)description;
-(UITouch *)touch;
-(void)setTouch:(UITouch *)arg1 ;
@end

