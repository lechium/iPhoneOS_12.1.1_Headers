/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
#import <PhotoEditSupport/BLRetouchLayer.h>

@class NSMutableArray;

@interface BLRetouchEffectLayer : BLRetouchLayer {

	CGRect _area;
	BOOL _startFilled;
	NSMutableArray* _brushStrokes;
	BOOL _strokeInProgress;
	SCD_Struct_BL9 _samplePixel;
	float _edgeDetectSize;
	CGContextRef _edgeDetectContextRef;
	float _amount;
	CGContextRef _layerMask;

}

@property (nonatomic,retain) CGContextRef layerMask;                   //@synthesize layerMask=_layerMask - In the implementation block
@property (assign,nonatomic) CGRect area;                              //@synthesize area=_area - In the implementation block
@property (assign,nonatomic) float amount;                             //@synthesize amount=_amount - In the implementation block
@property (nonatomic,copy) NSMutableArray * brushStrokes; 
@property (nonatomic,readonly) BOOL strokeInProgress;                  //@synthesize strokeInProgress=_strokeInProgress - In the implementation block
-(void)setArea:(CGRect)arg1 ;
-(CGRect)area;
-(BOOL)hasAmount;
-(BOOL)hasLayerMask;
-(CGContextRef)newContextForRect:(CGRect)arg1 inDestRect:(CGRect)arg2 andScale:(double)arg3 ;
-(id)layerData;
-(void)setLayerData:(id)arg1 ;
-(CGContextRef)newContextWithEffect:(CGContextRef)arg1 ;
-(void)releaseMask;
-(NSMutableArray *)brushStrokes;
-(void)setBrushStrokes:(NSMutableArray *)arg1 ;
-(CGContextRef)layerMask;
-(void)fillMaskWithValue:(double)arg1 ;
-(void)performFill;
-(BOOL)isAffectingOutput;
-(CGImageRef)newImageFromContextWithEffect:(CGContextRef)arg1 ;
-(CGContextRef)edgeDetectContextRefForSize:(float)arg1 ;
-(CGRect)doDrawBrushAtLocation:(CGPoint)arg1 opacity:(float)arg2 erase:(BOOL)arg3 magicEdges:(BOOL)arg4 brushSize:(float)arg5 brushSoftness:(float)arg6 firstPoint:(BOOL)arg7 ;
-(CGRect)drawBrushAtLocation:(CGPoint)arg1 opacity:(float)arg2 erase:(BOOL)arg3 magicEdges:(BOOL)arg4 brushSize:(float)arg5 brushSoftness:(float)arg6 ;
-(void)strokeDidFinish;
-(BOOL)solidBrush;
-(CGImageRef)newMaskImage;
-(void)clearMask;
-(void)fillMask;
-(void)setLayerMask:(CGContextRef)arg1 ;
-(BOOL)strokeInProgress;
-(CGRect)maskFrame;
-(id)init;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(CGRect)imageFrame;
-(void)setAmount:(float)arg1 ;
-(float)amount;
@end

