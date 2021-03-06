/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class OKWidgetView;


@protocol OKDynamicItemProxiedObject <NSObject>
@property (nonatomic,readonly) OKWidgetView * parentWidgetView; 
@property (assign,nonatomic) CGPoint center; 
@property (assign,nonatomic) CGRect bounds; 
@property (assign,nonatomic) CGAffineTransform dynamicsTransform; 
@required
-(OKWidgetView *)parentWidgetView;
-(CGAffineTransform)dynamicsTransform;
-(void)setDynamicsTransform:(CGAffineTransform)arg1;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1;
-(void)setCenter:(CGPoint)arg1;
-(CGPoint)center;

@end

