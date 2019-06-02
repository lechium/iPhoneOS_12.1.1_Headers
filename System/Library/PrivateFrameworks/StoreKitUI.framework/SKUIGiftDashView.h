/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface SKUIGiftDashView : UIView {

	UIColor* _dashColor;
	CGSize _dashSize;
	double _dashSpacing;

}

@property (nonatomic,copy) UIColor * dashColor;               //@synthesize dashColor=_dashColor - In the implementation block
@property (assign,nonatomic) CGSize dashSize;                 //@synthesize dashSize=_dashSize - In the implementation block
@property (assign,nonatomic) double dashSpacing;              //@synthesize dashSpacing=_dashSpacing - In the implementation block
-(void)setDashColor:(UIColor *)arg1 ;
-(void)setDashSize:(CGSize)arg1 ;
-(void)setDashSpacing:(double)arg1 ;
-(UIColor *)dashColor;
-(CGSize)dashSize;
-(double)dashSpacing;
-(void)drawRect:(CGRect)arg1 ;
@end

