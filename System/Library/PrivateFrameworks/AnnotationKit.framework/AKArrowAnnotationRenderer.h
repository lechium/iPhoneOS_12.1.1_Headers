/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKAnnotationRenderer.h>

@interface AKArrowAnnotationRenderer : AKAnnotationRenderer
+(CGRect)_concreteDrawingBoundsOfAnnotation:(id)arg1 ;
+(CGSize)_concreteDraggingBoundsInsetsForAnnotation:(id)arg1 ;
+(CGRect)_concreteTextBoundsOfAnnotation:(id)arg1 withOptionalAnnotationRect:(CGRect)arg2 optionalText:(id)arg3 ;
+(CGPathRef)_newConcreteTextExclusionPathForAnnotation:(id)arg1 withOptionalAnnotationRect:(CGRect)arg2 ;
+(void)_concreteRenderAnnotation:(id)arg1 intoContext:(CGContextRef)arg2 forDisplay:(BOOL)arg3 pageControllerOrNil:(id)arg4 ;
+(BOOL)_concretePointIsOnBorder:(CGPoint)arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(double)arg3 ;
+(BOOL)_concretePointIsOnInside:(CGPoint)arg1 ofAnnotation:(id)arg2 ;
+(void)_drawPathForArrow:(id)arg1 inContext:(CGContextRef)arg2 inPath:(CGPathRef)arg3 pageControllerForPixelAlignmentOrNil:(id)arg4 minimumGrabbableBorderThickness:(double)arg5 ;
+(void)_controlPointsForArrow:(id)arg1 outControlPoint1:(CGPoint*)arg2 outControlPoint2:(CGPoint*)arg3 ;
+(void)_arrowHeadPathsForArrow:(id)arg1 inOutStartArrowHead:(CGPathRef)arg2 outBezierStartParameter:(double*)arg3 inOutEndArrowHead:(CGPathRef)arg4 outBezierEndParameter:(double*)arg5 ;
+(CGPathRef)_newLinePathForArrow:(id)arg1 withHeads:(BOOL)arg2 fromBezierParameter:(double)arg3 toBezierParameter:(double)arg4 optionalPageController:(id)arg5 optionalContext:(CGContextRef)arg6 ;
+(void)_arrowHeadLineIntersection:(id)arg1 outStartIntersection:(CGPoint*)arg2 outBezierStartParameter:(double*)arg3 outEndIntersection:(CGPoint*)arg4 outBezierEndParameter:(double*)arg5 ;
+(unsigned long long)_drawableArrowHeads:(id)arg1 ;
+(double)_oneDimensionalCubicBezierValueForParameter:(double)arg1 start:(double)arg2 controlPt1:(double)arg3 controlPt2:(double)arg4 end:(double)arg5 ;
+(CGPoint)_cubicBezierPointForParameter:(double)arg1 start:(CGPoint)arg2 controlPt1:(CGPoint)arg3 controlPt2:(CGPoint)arg4 end:(CGPoint)arg5 ;
@end

