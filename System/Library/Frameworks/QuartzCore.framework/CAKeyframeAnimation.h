/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAPropertyAnimation.h>

@class NSArray, NSString;

@interface CAKeyframeAnimation : CAPropertyAnimation

@property (copy) NSArray * values; 
@property (assign) const CGPathRef path; 
@property (copy) NSArray * keyTimes; 
@property (copy) NSArray * timingFunctions; 
@property (copy) NSString * calculationMode; 
@property (copy) NSArray * tensionValues; 
@property (copy) NSArray * continuityValues; 
@property (copy) NSArray * biasValues; 
@property (copy) NSString * rotationMode; 
-(Animation*)_copyRenderAnimationForLayer:(id)arg1 ;
-(BOOL)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(NSString *)rotationMode;
-(void)setRotationMode:(NSString *)arg1 ;
-(NSArray *)tensionValues;
-(NSArray *)continuityValues;
-(void)setContinuityValues:(NSArray *)arg1 ;
-(NSArray *)biasValues;
-(void)setBiasValues:(NSArray *)arg1 ;
-(NSString *)calculationMode;
-(void)CA_prepareRenderValue;
-(NSArray *)timingFunctions;
-(const CGPathRef)path;
-(void)setKeyTimes:(NSArray *)arg1 ;
-(void)setValues:(NSArray *)arg1 ;
-(void)setPath:(const CGPathRef)arg1 ;
-(void)setTimingFunctions:(NSArray *)arg1 ;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(void)setCalculationMode:(NSString *)arg1 ;
-(NSArray *)keyTimes;
-(void)setTensionValues:(NSArray *)arg1 ;
-(NSArray *)values;
@end

