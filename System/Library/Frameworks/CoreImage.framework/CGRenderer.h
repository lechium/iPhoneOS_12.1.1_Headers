/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <libobjc.A.dylib/CIGVRenderer.h>

@class NSString;

@interface CGRenderer : NSObject <CIGVRenderer> {

	CGContextRef context;
	BOOL drawEdgesFirst;
	BOOL drawWithSplines;
	int direction;
	CGSize separation;

}

@property (assign) BOOL drawWithSplines; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) int direction; 
@property (readonly) CGSize separation; 
@property (readonly) BOOL drawEdgesFirst; 
-(CGColorRef)_colorForNodeColor:(int)arg1 ;
-(void)_drawNodeContent:(id)arg1 ;
-(void)_drawNodeBadge:(id)arg1 ;
-(void)_drawCubicSpline:(id)arg1 ;
-(void)_drawPolyline:(id)arg1 ;
-(BOOL)setCanvasWidth:(unsigned)arg1 height:(unsigned)arg2 ;
-(void)drawNode:(id)arg1 ;
-(void)drawEdge:(id)arg1 withPath:(id)arg2 ;
-(CGSize)separation;
-(BOOL)drawEdgesFirst;
-(void)setFileTitle:(id)arg1 ;
-(void)flushRender;
-(void)setSeparation:(CGSize)arg1 ;
-(void)setDrawEdgesFirst:(BOOL)arg1 ;
-(BOOL)drawWithSplines;
-(void)setDrawWithSplines:(BOOL)arg1 ;
-(void)setFileURL:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(int)direction;
-(void)setDirection:(int)arg1 ;
@end

