/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKInvisibleInkEffectView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class CALayer, CAEmitterLayer, NSString;

@interface CKInvisibleInkImageEffectView : CKInvisibleInkEffectView <CAAnimationDelegate> {

	CALayer* _blurredImageLayer;
	CALayer* _blurredImageContainerLayer;
	CALayer* _drawEmitterContainerLayer;
	CAEmitterLayer* _drawEmitterLayer;
	CALayer* _dustEmitterContainerLayer;
	CAEmitterLayer* _dustEmitterLayer;

}

@property (nonatomic,retain) CALayer * blurredImageLayer;                       //@synthesize blurredImageLayer=_blurredImageLayer - In the implementation block
@property (nonatomic,retain) CALayer * blurredImageContainerLayer;              //@synthesize blurredImageContainerLayer=_blurredImageContainerLayer - In the implementation block
@property (nonatomic,retain) CALayer * drawEmitterContainerLayer;               //@synthesize drawEmitterContainerLayer=_drawEmitterContainerLayer - In the implementation block
@property (nonatomic,retain) CAEmitterLayer * drawEmitterLayer;                 //@synthesize drawEmitterLayer=_drawEmitterLayer - In the implementation block
@property (nonatomic,retain) CALayer * dustEmitterContainerLayer;               //@synthesize dustEmitterContainerLayer=_dustEmitterContainerLayer - In the implementation block
@property (nonatomic,retain) CAEmitterLayer * dustEmitterLayer;                 //@synthesize dustEmitterLayer=_dustEmitterLayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CAEmitterLayer *)drawEmitterLayer;
-(CAEmitterLayer *)dustEmitterLayer;
-(void)setDustEmitterLayer:(CAEmitterLayer *)arg1 ;
-(void)setDrawEmitterLayer:(CAEmitterLayer *)arg1 ;
-(void)disableBlending;
-(void)endDrawEmitterEffects;
-(void)enableBlending;
-(void)moveEmittersWithTouches:(id)arg1 ;
-(void)setDustEmitterContainerLayer:(CALayer *)arg1 ;
-(CALayer *)dustEmitterContainerLayer;
-(void)setBlurredImageContainerLayer:(CALayer *)arg1 ;
-(void)setBlurredImageLayer:(CALayer *)arg1 ;
-(CALayer *)blurredImageLayer;
-(void)setupDrawEmitter;
-(void)setupDustEmitter;
-(CALayer *)blurredImageContainerLayer;
-(CALayer *)drawEmitterContainerLayer;
-(void)setDrawEmitterContainerLayer:(CALayer *)arg1 ;
-(void)endDustEmitterFingerEffects;
-(void)addDustRandomEmitterAnimationsWithSize:(CGSize)arg1 ;
-(void)setRandomAttractorsEnabled:(BOOL)arg1 ;
-(void)setImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
@end

