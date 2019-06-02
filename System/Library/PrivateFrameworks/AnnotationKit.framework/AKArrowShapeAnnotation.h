/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKArrowAnnotation.h>
#import <libobjc.A.dylib/AKFilledAnnotationProtocol.h>

@class NSString, UIColor;

@interface AKArrowShapeAnnotation : AKArrowAnnotation <AKFilledAnnotationProtocol> {

	double _arrowLineWidth;
	double _arrowHeadWidth;
	double _arrowHeadLength;

}

@property (assign) double arrowLineWidth;                           //@synthesize arrowLineWidth=_arrowLineWidth - In the implementation block
@property (assign) double arrowHeadWidth;                           //@synthesize arrowHeadWidth=_arrowHeadWidth - In the implementation block
@property (assign) double arrowHeadLength;                          //@synthesize arrowHeadLength=_arrowHeadLength - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) UIColor * fillColor; 
+(id)keyPathsForValuesAffectingHitTestBounds;
+(id)keyPathsForValuesAffectingDrawingBounds;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)keysForValuesToObserveForUndo;
-(id)keysForValuesToObserveForRedrawing;
-(CGRect)hitTestBounds;
-(id)keysForValuesToObserveForAdornments;
-(double)arrowHeadLength;
-(double)arrowHeadWidth;
-(double)arrowLineWidth;
-(void)setArrowHeadLength:(double)arg1 ;
-(void)setArrowHeadWidth:(double)arg1 ;
-(void)setArrowLineWidth:(double)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)displayName;
@end

