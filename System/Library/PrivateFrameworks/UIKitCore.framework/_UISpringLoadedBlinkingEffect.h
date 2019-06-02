/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UISpringLoadedInteractionEffect.h>

@class CALayer, NSString;

@interface _UISpringLoadedBlinkingEffect : NSObject <UISpringLoadedInteractionEffect> {

	CALayer* _blinkLayer;

}

@property (nonatomic,retain) CALayer * blinkLayer;                  //@synthesize blinkLayer=_blinkLayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)interaction:(id)arg1 didChangeWithContext:(id)arg2 ;
-(CALayer *)blinkLayer;
-(id)blinkAnimation;
-(void)setBlinkLayer:(CALayer *)arg1 ;
@end

