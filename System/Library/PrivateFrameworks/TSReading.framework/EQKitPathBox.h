/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/EQKitBox.h>

@interface EQKitPathBox : EQKitBox {

	CGPathRef mCGPath;
	double mHeight;
	double mPaddingLeft;
	double mPaddingRight;
	double mDepth;
	double mWidth;
	BOOL mDimensionsValid;
	CGRect mErasableBounds;
	BOOL mErasableBoundsValid;
	CGColorRef mCGColor;
	int mDrawingMode;
	double mLineWidth;

}

@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) double depth; 
@property (nonatomic,readonly) double width; 
@property (nonatomic,readonly) double paddingLeft; 
@property (nonatomic,readonly) double paddingRight; 
@property (nonatomic,readonly) CGPathRef cgPath; 
@property (nonatomic,readonly) CGColorRef color; 
@property (nonatomic,readonly) int drawingMode; 
@property (nonatomic,readonly) double lineWidth; 
-(double)depth;
-(CGRect)erasableBounds;
-(void)renderIntoContext:(CGContextRef)arg1 offset:(CGPoint)arg2 ;
-(BOOL)appendOpticalAlignToSpec:(Spec*)arg1 offset:(CGPoint)arg2 ;
-(void)p_cacheDimensions;
-(id)initWithCGPath:(CGPathRef)arg1 height:(double)arg2 paddingLeft:(double)arg3 paddingRight:(double)arg4 cgColor:(CGColorRef)arg5 drawingMode:(int)arg6 lineWidth:(double)arg7 ;
-(CGPathRef)cgPath;
-(int)drawingMode;
-(CGRect)p_cacheErasableBounds;
-(id)initWithCGPath:(CGPathRef)arg1 height:(double)arg2 paddingLeft:(double)arg3 paddingRight:(double)arg4 cgColor:(CGColorRef)arg5 ;
-(id)initWithCGPath:(CGPathRef)arg1 height:(double)arg2 cgColor:(CGColorRef)arg3 ;
-(id)initWithCGPath:(CGPathRef)arg1 height:(double)arg2 cgColor:(CGColorRef)arg3 drawingMode:(int)arg4 lineWidth:(double)arg5 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGColorRef)color;
-(double)width;
-(double)height;
-(double)paddingLeft;
-(double)paddingRight;
-(double)lineWidth;
@end

