/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface EQKitBox : NSObject <NSCopying>

@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) double depth; 
@property (nonatomic,readonly) double width; 
@property (nonatomic,readonly) double vsize; 
@property (nonatomic,readonly) double layoutHeight; 
@property (nonatomic,readonly) double layoutDepth; 
@property (nonatomic,readonly) double layoutVSize; 
@property (nonatomic,readonly) CGColorRef color; 
@property (nonatomic,readonly) double opticalAlignWidth; 
-(double)depth;
-(double)layoutHeight;
-(double)layoutDepth;
-(double)vsize;
-(BOOL)p_getTransform:(CGAffineTransform*)arg1 fromDescendant:(id)arg2 ;
-(double)opticalAlignWidth;
-(double)layoutVSize;
-(CGRect)erasableBounds;
-(void)renderIntoContext:(CGContextRef)arg1 offset:(CGPoint)arg2 ;
-(CGAffineTransform)transformFromDescendant:(id)arg1 ;
-(BOOL)appendOpticalAlignToSpec:(Spec*)arg1 offset:(CGPoint)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGColorRef)color;
-(double)width;
-(double)height;
@end

