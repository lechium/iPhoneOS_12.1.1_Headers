/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CALayer, UIColor;

@interface _NTKColorManager : NSObject {

	CALayer* _layer;
	UIColor* _color;

}

@property (nonatomic,retain) CALayer * layer;                       //@synthesize layer=_layer - In the implementation block
@property (nonatomic,retain) UIColor * color;                       //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) UIColor * contentColor; 
-(void)_updateFilterColor;
-(CALayer *)layer;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setLayer:(CALayer *)arg1 ;
-(UIColor *)contentColor;
-(BOOL)shouldAnimatePropertyWithKey:(id)arg1 ;
@end
