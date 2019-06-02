/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 5:59:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <UIKitCore/UIView.h>

@class JTEffectFrame;

@interface JTEffectAnimationView : UIView {

	JTEffectFrame* _effectFrame;
	JTEffectFrame* _toEffectFrame;

}

@property (nonatomic,retain) JTEffectFrame * effectFrame;                        //@synthesize effectFrame=_effectFrame - In the implementation block
@property (nonatomic,retain) JTEffectFrame * toEffectFrame;                      //@synthesize toEffectFrame=_toEffectFrame - In the implementation block
@property (nonatomic,readonly) CGAffineTransform animatedTransform; 
@property (nonatomic,readonly) double animatedOpacity; 
@property (nonatomic,readonly) BOOL isPresentingAnimatedOpacity; 
-(void)setEffectFrame:(JTEffectFrame *)arg1 ;
-(void)setToEffectFrame:(JTEffectFrame *)arg1 ;
-(double)animatedOpacity;
-(id)initWithEffectFrame:(id)arg1 toEffectFrame:(id)arg2 ;
-(CGAffineTransform)animatedTransform;
-(BOOL)isPresentingAnimatedOpacity;
-(JTEffectFrame *)effectFrame;
-(JTEffectFrame *)toEffectFrame;
@end

