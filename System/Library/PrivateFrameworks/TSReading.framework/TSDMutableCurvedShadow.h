/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDCurvedShadow.h>

@class TSUColor;

@interface TSDMutableCurvedShadow : TSDCurvedShadow

@property (assign,nonatomic) double curve; 
@property (assign,nonatomic) double offset; 
@property (assign,nonatomic) double angle; 
@property (assign,nonatomic) CGColorRef color; 
@property (assign,nonatomic) double radius; 
@property (assign,nonatomic) double opacity; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) TSUColor * TSUColor; 
-(void)setTSUColor:(TSUColor *)arg1 ;
-(void)setOpacity:(double)arg1 ;
-(void)setCurve:(double)arg1 ;
-(void)setColor:(CGColorRef)arg1 ;
-(void)setOffset:(double)arg1 ;
-(void)setAngle:(double)arg1 ;
-(void)setRadius:(double)arg1 ;
@end

