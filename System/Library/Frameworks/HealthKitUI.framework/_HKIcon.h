/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <HealthKitUI/HKAnimatableObject.h>

@class UIColor;

@interface _HKIcon : HKAnimatableObject {

	double _size;
	UIColor* _color;
	double _coloration;
	double _alpha;
	long long _frameColumns;
	long long _frameCount;
	long long _currentFrameIndex;
	CGPoint _position;
	CGPoint _firstFrameOrigin;
	CGSize _frameSize;

}

@property (assign,nonatomic) CGPoint position;                         //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) double size;                              //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) UIColor * color;                          //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double coloration;                        //@synthesize coloration=_coloration - In the implementation block
@property (assign,nonatomic) double alpha;                             //@synthesize alpha=_alpha - In the implementation block
@property (assign,nonatomic) CGPoint firstFrameOrigin;                 //@synthesize firstFrameOrigin=_firstFrameOrigin - In the implementation block
@property (assign,nonatomic) CGSize frameSize;                         //@synthesize frameSize=_frameSize - In the implementation block
@property (assign,nonatomic) long long frameColumns;                   //@synthesize frameColumns=_frameColumns - In the implementation block
@property (assign,nonatomic) long long frameCount;                     //@synthesize frameCount=_frameCount - In the implementation block
@property (assign,nonatomic) long long currentFrameIndex;              //@synthesize currentFrameIndex=_currentFrameIndex - In the implementation block
-(long long)currentFrameIndex;
-(void)setCurrentFrameIndex:(long long)arg1 ;
-(long long)frameColumns;
-(double)coloration;
-(void)setColoration:(double)arg1 ;
-(void)addAnimation:(id)arg1 forRingGroupPropertyType:(unsigned long long)arg2 ;
-(id)_newAnimatablePropertyForType:(unsigned long long)arg1 ;
-(CGPoint)firstFrameOrigin;
-(void)setFirstFrameOrigin:(CGPoint)arg1 ;
-(void)setFrameColumns:(long long)arg1 ;
-(CGSize)frameSize;
-(BOOL)isDrawable;
-(double)size;
-(id)init;
-(void)setAlpha:(double)arg1 ;
-(double)alpha;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
-(void)setSize:(double)arg1 ;
-(void)setFrameCount:(long long)arg1 ;
-(long long)frameCount;
-(void)setFrameSize:(CGSize)arg1 ;
@end

