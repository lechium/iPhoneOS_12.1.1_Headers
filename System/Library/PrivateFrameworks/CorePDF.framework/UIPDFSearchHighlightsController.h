/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class NSMutableArray, UIPDFPageView, UIPDFSelection;

@interface UIPDFSearchHighlightsController : NSObject {

	NSMutableArray* _searchHighlightLayers;
	UIPDFPageView* _pageView;
	CGColorRef _highlightColor;
	CGColorRef _borderColor;
	CGColorRef _shadowColor;
	BOOL _pageRendered;
	NSMutableArray* _rectangles;
	UIPDFSelection* _selection;

}
-(id)initWithPageView:(id)arg1 ;
-(void)addSearchHighlightForSelection:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)hasSearchHighlights;
-(void)pageDidRender:(id)arg1 ;
-(void)_addAnimation:(id)arg1 ;
-(void)_addAnimation2:(id)arg1 ;
-(CGRect)unionFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 ;
-(void)makeType1Shadow:(CGPathRef)arg1 rect:(CGRect)arg2 inset:(CGPoint)arg3 ;
-(void)makeType2Shadow:(CGPathRef)arg1 rect:(CGRect)arg2 ;
-(void)addSearchHighlightForRotatedSelection:(id)arg1 animated:(BOOL)arg2 ;
-(unsigned long long)indexOfColumnBreakStartingAt:(unsigned long long)arg1 ;
-(void)makeType1Path:(CGPathRef)arg1 shadowPath:(CGPathRef)arg2 ;
-(void)addLayer:(CGRect)arg1 path:(CGPathRef)arg2 shadowPath:(CGPathRef)arg3 animated:(BOOL)arg4 ;
-(void)makeType2Path:(CGPathRef)arg1 to:(unsigned long long)arg2 shadowPath:(CGPathRef)arg3 ;
-(void)makeType3Path:(CGPathRef)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3 shadowPath:(CGPathRef)arg4 ;
-(void)makeType4Path:(CGPathRef)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3 shadowPath:(CGPathRef)arg4 ;
-(void)clearSearchHighlights;
-(void)dealloc;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)setNeedsDisplay;
-(id)hitTest:(CGPoint)arg1 ;
@end

