/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UIView.h>

@protocol TSWPTextMagnifierRendererDelegate;
@class CALayer;

@interface TSWPTextMagnifierRenderer : UIView {

	id<TSWPTextMagnifierRendererDelegate> _delegate;
	CALayer* _underlayLayer;
	CALayer* _canvasLayer;
	CALayer* _overlayLayer;
	int _autoscrollDirections;

}

@property (assign,nonatomic) id<TSWPTextMagnifierRendererDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int autoscrollDirections;                                    //@synthesize autoscrollDirections=_autoscrollDirections - In the implementation block
-(void)tearDown;
-(void)canvasNeedsDisplay;
-(id)p_createChildLayer;
-(int)autoscrollDirections;
-(void)dealloc;
-(void)setDelegate:(id<TSWPTextMagnifierRendererDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<TSWPTextMagnifierRendererDelegate>)delegate;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)setNeedsDisplay;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setAutoscrollDirections:(int)arg1 ;
@end

