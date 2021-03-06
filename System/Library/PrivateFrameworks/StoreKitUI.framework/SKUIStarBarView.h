/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, UIImage;

@interface SKUIStarBarView : UIView {

	UIColor* _emptyColor;
	UIImage* _emptyStarImage;
	UIColor* _filledColor;
	UIImage* _filledStarImage;
	long long _numberOfStars;
	double _value;

}

@property (nonatomic,copy) UIColor * emptyColor;                   //@synthesize emptyColor=_emptyColor - In the implementation block
@property (nonatomic,copy) UIColor * filledColor;                  //@synthesize filledColor=_filledColor - In the implementation block
@property (assign,nonatomic) long long numberOfStars;              //@synthesize numberOfStars=_numberOfStars - In the implementation block
@property (assign,nonatomic) double value;                         //@synthesize value=_value - In the implementation block
-(void)setEmptyColor:(UIColor *)arg1 ;
-(void)setFilledColor:(UIColor *)arg1 ;
-(void)setColoringUsingStyle:(id)arg1 ;
-(void)setNumberOfStars:(long long)arg1 ;
-(UIColor *)emptyColor;
-(long long)numberOfStars;
-(UIColor *)filledColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)value;
-(void)setValue:(double)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
@end

