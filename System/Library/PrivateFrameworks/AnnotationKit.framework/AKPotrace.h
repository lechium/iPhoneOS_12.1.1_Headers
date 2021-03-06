/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@interface AKPotrace : NSObject {

	CGPathRef _cachedPath;
	potrace_bitmap_s* _potraceBitmap;
	potrace_param_s* _potraceParameters;

}

@property (assign) int turdsize; 
@property (assign) int turnpolicy; 
@property (assign) double alphamax; 
@property (assign) int opticurve; 
@property (assign) double opttolerance; 
+(CGPathRef)newCGPathFromPotracePath:(potrace_path_s*)arg1 ;
-(void)_clearPathIfNecessary;
-(id)initWithCGImage:(CGImageRef)arg1 flipped:(BOOL)arg2 whiteIsInside:(BOOL)arg3 ;
-(int)turdsize;
-(int)turnpolicy;
-(double)alphamax;
-(int)opticurve;
-(double)opttolerance;
-(void)setTurdsize:(int)arg1 ;
-(void)setTurnpolicy:(int)arg1 ;
-(void)setAlphamax:(double)arg1 ;
-(void)setOpticurve:(int)arg1 ;
-(void)setOpttolerance:(double)arg1 ;
-(void)_generatePath;
-(void)dealloc;
-(CGPathRef)CGPath;
@end

