/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIColor;


@protocol MTMaterialOverlaySettings <NSObject>
@property (nonatomic,copy,readonly) UIColor * baseOverlayColor; 
@property (assign,nonatomic) double baseOverlayTintAlpha; 
@property (nonatomic,copy,readonly) UIColor * primaryOverlayTintColor; 
@property (assign,nonatomic) double primaryOverlayTintAlpha; 
@property (nonatomic,copy,readonly) UIColor * secondaryOverlayTintColor; 
@property (assign,nonatomic) double secondaryOverlayTintAlpha; 
@required
-(UIColor *)baseOverlayColor;
-(double)baseOverlayTintAlpha;
-(void)setBaseOverlayTintAlpha:(double)arg1;
-(UIColor *)primaryOverlayTintColor;
-(double)primaryOverlayTintAlpha;
-(void)setPrimaryOverlayTintAlpha:(double)arg1;
-(UIColor *)secondaryOverlayTintColor;
-(double)secondaryOverlayTintAlpha;
-(void)setSecondaryOverlayTintAlpha:(double)arg1;

@end

